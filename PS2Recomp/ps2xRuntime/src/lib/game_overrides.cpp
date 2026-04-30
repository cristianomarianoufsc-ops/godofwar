#include "game_overrides.h"
#include "ps2_runtime.h"
#include "ps2_runtime_calls.h"
#include "ps2_runtime_macros.h"
#include "ps2_stubs.h"
#include "ps2_syscalls.h"
#include <algorithm>
#include <array>
#include <atomic>
#include <cctype>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <mutex>
#include <optional>
#include <vector>

// PARTE 10 PLANO B2 PASSO 2.5 — endereco do client_buf SIF que o PASSO 2
// escreveu (registrado em ps2_stubs_misc.inl). Permite que o handler do
// VBlank faca dump periodico pra detectar se o jogo esta de fato pollando
// esse buffer. Se o conteudo mudar entre VBlanks, o jogo polla; se ficar
// identico, o jogo provavelmente espera interrupcao SIF1, nao polling.
// DECLARADO em escopo global (file scope, fora de namespace anonimo) pra
// permitir extern acesso de ps2_stubs_misc.inl.
std::atomic<uint32_t> g_gowSifClientBufWatch{0u};

// FIX 2026-04-29 21:58 — wrapper extern "C" pra escrita da variavel a partir
// de ps2_stubs_misc.inl, que e incluida DENTRO de `namespace ps2_stubs {}`
// em ps2_stubs.cpp. C++ nao permite declarar `extern Type ::name;` de dentro
// de outro namespace, entao um setter `extern "C"` (sem name mangling)
// resolve sem ambiguidade. Custo: 1 indireção (irrelevante, escrita feita
// 1x por bind, dezenas de vezes no boot inteiro).
extern "C" void gow_set_sif_client_buf_watch(std::uint32_t addr)
{
    g_gowSifClientBufWatch.store(addr, std::memory_order_relaxed);
}

namespace
{
    std::mutex &registryMutex()
    {
        static std::mutex mutex;
        return mutex;
    }

    std::vector<ps2_game_overrides::Descriptor> &descriptorRegistry()
    {
        static std::vector<ps2_game_overrides::Descriptor> registry;
        return registry;
    }

    bool equalsIgnoreCaseAscii(std::string_view lhs, std::string_view rhs)
    {
        if (lhs.size() != rhs.size())
        {
            return false;
        }

        for (size_t i = 0; i < lhs.size(); ++i)
        {
            const auto l = static_cast<unsigned char>(lhs[i]);
            const auto r = static_cast<unsigned char>(rhs[i]);
            if (std::tolower(l) != std::tolower(r))
            {
                return false;
            }
        }

        return true;
    }

    std::string basenameFromPath(const std::string &path)
    {
        std::error_code ec;
        const std::filesystem::path fsPath(path);
        const std::filesystem::path leaf = fsPath.filename();
        if (leaf.empty())
        {
            return path;
        }
        return leaf.string();
    }

    uint32_t crc32Update(uint32_t crc, const uint8_t *data, size_t size)
    {
        static std::array<uint32_t, 256> table = []()
        {
            std::array<uint32_t, 256> values{};
            for (uint32_t i = 0; i < 256u; ++i)
            {
                uint32_t c = i;
                for (int bit = 0; bit < 8; ++bit)
                {
                    c = (c & 1u) ? (0xEDB88320u ^ (c >> 1u)) : (c >> 1u);
                }
                values[i] = c;
            }
            return values;
        }();

        uint32_t out = crc;
        for (size_t i = 0; i < size; ++i)
        {
            out = table[(out ^ data[i]) & 0xFFu] ^ (out >> 8u);
        }
        return out;
    }

    bool computeFileCrc32(const std::string &path, uint32_t &crcOut)
    {
        std::ifstream file(path, std::ios::binary);
        if (!file.is_open())
        {
            return false;
        }

        std::array<uint8_t, 4096> chunk{};
        uint32_t crc = 0xFFFFFFFFu;

        while (file.good())
        {
            file.read(reinterpret_cast<char *>(chunk.data()), static_cast<std::streamsize>(chunk.size()));
            const std::streamsize got = file.gcount();
            if (got <= 0)
            {
                break;
            }
            crc = crc32Update(crc, chunk.data(), static_cast<size_t>(got));
        }

        crcOut = ~crc;
        return true;
    }

    std::optional<PS2Runtime::RecompiledFunction> resolveHandlerByName(std::string_view handlerName)
    {
        const std::string_view resolvedSyscall = ps2_runtime_calls::resolveSyscallName(handlerName);
        if (!resolvedSyscall.empty())
        {
#define PS2_RESOLVE_SYSCALL(name)                      \
    if (resolvedSyscall == std::string_view{#name})    \
    {                                                  \
        return &ps2_syscalls::name;                    \
    }
            PS2_SYSCALL_LIST(PS2_RESOLVE_SYSCALL)
#undef PS2_RESOLVE_SYSCALL
        }

        const std::string_view resolvedStub = ps2_runtime_calls::resolveStubName(handlerName);
        if (!resolvedStub.empty())
        {
#define PS2_RESOLVE_STUB(name)                       \
    if (resolvedStub == std::string_view{#name})     \
    {                                                \
        return &ps2_stubs::name;                     \
    }
            PS2_STUB_LIST(PS2_RESOLVE_STUB)
#undef PS2_RESOLVE_STUB
        }

        return std::nullopt;
    }
}

namespace ps2_game_overrides
{
    AutoRegister::AutoRegister(const Descriptor &descriptor)
    {
        registerDescriptor(descriptor);
    }

    void registerDescriptor(const Descriptor &descriptor)
    {
        if (!descriptor.apply)
        {
            std::cerr << "[game_overrides] ignoring descriptor with null apply callback." << std::endl;
            return;
        }

        std::lock_guard<std::mutex> lock(registryMutex());
        descriptorRegistry().push_back(descriptor);
    }

    bool bindAddressHandler(PS2Runtime &runtime, uint32_t address, std::string_view handlerName)
    {
        const auto resolved = resolveHandlerByName(handlerName);
        if (!resolved.has_value())
        {
            std::cerr << "[game_overrides] unresolved handler '" << handlerName
                      << "' for address 0x" << std::hex << address << std::dec << std::endl;
            return false;
        }

        runtime.registerFunction(address, resolved.value());
        return true;
    }

    void applyMatching(PS2Runtime &runtime, const std::string &elfPath, uint32_t entry)
    {
        std::vector<Descriptor> descriptors;
        {
            std::lock_guard<std::mutex> lock(registryMutex());
            descriptors = descriptorRegistry();
        }

        if (descriptors.empty())
        {
            return;
        }

        const std::string elfName = basenameFromPath(elfPath);
        uint32_t fileCrc32 = 0u;
        bool fileCrcComputed = false;
        bool fileCrcValid = false;

        size_t appliedCount = 0;
        for (const Descriptor &descriptor : descriptors)
        {
            if (!descriptor.apply)
            {
                continue;
            }

            if (descriptor.elfName && descriptor.elfName[0] != '\0')
            {
                if (!equalsIgnoreCaseAscii(descriptor.elfName, elfName))
                {
                    continue;
                }
            }

            if (descriptor.entry != 0u && descriptor.entry != entry)
            {
                continue;
            }

            if (descriptor.crc32 != 0u)
            {
                if (!fileCrcComputed)
                {
                    fileCrcComputed = true;
                    fileCrcValid = computeFileCrc32(elfPath, fileCrc32);
                    if (!fileCrcValid)
                    {
                        std::cerr << "[game_overrides] failed to compute CRC32 for '" << elfPath << "'" << std::endl;
                    }
                }

                if (!fileCrcValid || fileCrc32 != descriptor.crc32)
                {
                    continue;
                }
            }

            const char *name = (descriptor.name && descriptor.name[0] != '\0')
                                   ? descriptor.name
                                   : "unnamed";
            std::cout << "[game_overrides] applying '" << name << "'" << std::endl;
            descriptor.apply(runtime);
            ++appliedCount;
        }

        if (appliedCount > 0)
        {
            std::cout << "[game_overrides] applied " << appliedCount << " matching override(s)." << std::endl;
        }
    }
}

// ============================================================================
// PARTE 7 PLANO A — God of War: stub C++ do alocador-fantasma sub_0013DA10
// ============================================================================
// Contexto historico:
//   - PARTE 5 identificou que sub_0013DA10 retorna $v0=0 porque o pool em
//     [0x2c7910] (BSS) nunca eh inicializado por nenhuma funcao recompilada.
//   - PARTE 6 instalou blindagem defensiva em sub_0013FAB8 (chamador) que
//     aborta a insercao quando recebe $v0=0 — o jogo avancou mas a lista
//     circular ficou vazia.
//   - PARTE 7 substitui sub_0013DA10 inteiro: bump allocator numa regiao
//     reservada da RAM PS2 emulada. Devolve guestPtr valido em $v0, o
//     consumidor monta a lista circular corretamente, e a blindagem PARTE 6
//     fica como ultima linha de defesa (so dispara se o heap esgotar).
// Layout da RAM PS2 (32 MB):
//   [0x00000000 .. 0x00100000)  reservado/syscalls
//   [0x00100000 .. 0x0035d080)  ELF carregado
//   [0x0035d080 .. 0x01000000)  heap nativa do jogo
//   [0x01000000 .. 0x01100000)  <-- RESERVADO PARA NOSSO STUB (1 MB)
//   [0x01100000 .. 0x01F00000)  livre
//   [0x01F00000 .. 0x02000000)  stack tipica
// ============================================================================
namespace
{
    constexpr uint32_t kGowStubHeapBase = 0x01000000u;
    constexpr uint32_t kGowStubHeapSize = 0x00100000u;  // 1 MB
    constexpr uint32_t kGowStubNodeBytes = 64u;          // overestimativa segura

    std::atomic<uint32_t> g_gowStubHeapOffset{0u};
    std::atomic<uint32_t> g_gowStubAllocCount{0u};

    void gow_stub_sub_0013DA10(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime)
    {
        const uint32_t off = g_gowStubHeapOffset.fetch_add(kGowStubNodeBytes, std::memory_order_relaxed);
        const uint32_t count = g_gowStubAllocCount.fetch_add(1u, std::memory_order_relaxed) + 1u;

        if (off + kGowStubNodeBytes > kGowStubHeapSize)
        {
            std::cerr << "[stub:sub_0013DA10] PARTE 7: heap esgotado apos " << std::dec << count
                      << " alocacoes (limite=" << (kGowStubHeapSize / kGowStubNodeBytes)
                      << " nos) — retornando 0, blindagem PARTE 6 vai aplicar" << std::endl;
            SET_GPR_U32(ctx, 2, 0u);            // $v0 = 0 (blindagem cuida)
            ctx->pc = GPR_U32(ctx, 31);         // return via $ra
            return;
        }

        const uint32_t guestPtr = kGowStubHeapBase + off;

        // Zera o no inteiro: o consumidor (sub_0013FAB8 e outros) faz stores
        // em offsets 0x0/0x4/0x8 imediatamente, e e seguro garantir que o
        // resto do buffer esteja limpo caso outras funcoes leiam offsets >= 12.
        for (uint32_t i = 0; i < kGowStubNodeBytes; i += 4u)
        {
            WRITE32(guestPtr + i, 0u);
        }

        if (count <= 16u)
        {
            std::cerr << "[stub:sub_0013DA10] PARTE 7 PLANO A: alloc #" << std::dec << count
                      << " guestPtr=0x" << std::hex << guestPtr
                      << " (a0=0x" << GPR_U32(ctx, 4)
                      << " ra=0x" << GPR_U32(ctx, 31) << ")"
                      << std::dec << std::endl;
        }

        SET_GPR_U32(ctx, 2, guestPtr);          // $v0 = ponteiro guest valido
        ctx->pc = GPR_U32(ctx, 31);             // return via $ra
    }

    // ========================================================================
    // PARTE 8 PLANO A — God of War: handler INTC VBlank em 0x00182F28
    // ========================================================================
    // Contexto historico:
    //   - PARTE 7 destravou bomba de oleo (sub_0013DA10) e o jogo avancou
    //     ate a injecao de inicializacao terminar. Trava nova: sub_0021FF60
    //     (JAL [7/11] do tabuleiro de boot) entra em loop esperando contadores
    //     globais que normalmente sao incrementados pelo handler de VBlank.
    //   - O jogo registra (via AddIntcHandler syscall) o endereco 0x00182F28
    //     como handler para INTC cause=2 (kIntcVblankStart). O dispatcher
    //     em ps2_syscalls_interrupt.inl chama runtime->hasFunction(0x00182F28)
    //     -> false -> loga "[INTC:skip]" e nao executa nada. Resultado: o
    //     worker thread dispara VBlank a 60 Hz, mas os contadores do JOGO
    //     (nao os do runtime) nunca avancam, e sub_0021FF60 trava esperando-os.
    //
    // Por que o PS2Recomp perdeu este entry:
    //   - As instrucoes em [0x182f28..0x182f60] FORAM transcritas: estao em
    //     sub_00182EE8_0x182ee8.cpp, linhas ~134-196. Mas elas vem APOS um
    //     "jr $ra" em 0x182f20. O detector de funcoes do PS2Recomp parou
    //     ali, marcando 0x182f24 em diante como "codigo morto/fall-through"
    //     da sub_00182EE8. Sem entry point, runtime->hasFunction() retorna
    //     false e o INTC dispatcher nao consegue chamar.
    //
    // Anatomia exata do handler (transcrita do disassembly):
    //   0x182f28: lui   $v1, 0x2A                    ; $v1 = 0x002A0000
    //   0x182f2c: lui   $a0, 0x2A                    ; $a0 = 0x002A0000
    //   0x182f30: lw    $v0, -0x3828($v1)            ; $v0 = [0x29C7D8]
    //   0x182f34: lui   $a1, 0x33                    ; $a1 = 0x00330000
    //   0x182f38: xori  $v0, $v0, 0x1                ; toggle bit 0
    //   0x182f3c: sw    $v0, -0x3828($v1)            ; [0x29C7D8] ^= 1   <-- flag VBlank
    //   0x182f40: lw    $v0, -0x382C($a0)            ; $v0 = [0x29C7D4]
    //   0x182f44: addiu $v0, $v0, 0x1                ; ++
    //   0x182f48: sw    $v0, -0x382C($a0)            ; [0x29C7D4] += 1   <-- frame counter principal
    //   0x182f4c: lw    $v0, 0x4F58($a1)             ; $v0 = [0x334F58]
    //   0x182f50: addiu $v0, $v0, 0x1                ; ++
    //   0x182f54: sw    $v0, 0x4F58($a1)             ; [0x334F58] += 1   <-- contador secundario
    //   0x182f58: sync                                ; barreira (no-op no host)
    //   0x182f5c: ei                                  ; enable interrupts (no-op aqui)
    //   0x182f60: jr    $ra                           ; return
    //
    // Mecanismo VSync ja existente no runtime (descoberto na PARTE 8):
    //   - g_vsync_tick_counter: contador interno do RUNTIME (60 Hz)
    //   - signalVSyncFlag(): escreve em [flagAddr]/[tickAddr] registrados
    //     pelo guest via SetVSyncFlag syscall. NAO toca os 3 contadores acima.
    //   - dispatchIntcHandlersForCause(cause=2): chama os handlers INTC. Se
    //     nenhum handler estiver registrado em runtime.functionTable para
    //     o endereco 0x00182F28, loga "[INTC:skip]".
    //   - Conclusao: precisamos preencher essa lacuna registrando uma
    //     funcao em 0x00182F28 que toque os 3 contadores do JOGO.
    // ========================================================================
    constexpr uint32_t kGowVblankFlagAddr        = 0x0029C7D8u;
    constexpr uint32_t kGowVblankFrameCountAddr  = 0x0029C7D4u;
    constexpr uint32_t kGowVblankAltCountAddr    = 0x00334F58u;

    std::atomic<uint64_t> g_gowVblankTickCount{0u};

    void gow_intc_handler_0x182f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime)
    {
        // Replica fiel do MIPS em 0x182f28..0x182f60:
        const uint32_t flag = READ32(kGowVblankFlagAddr);
        WRITE32(kGowVblankFlagAddr, flag ^ 1u);

        const uint32_t frameCount = READ32(kGowVblankFrameCountAddr);
        WRITE32(kGowVblankFrameCountAddr, frameCount + 1u);

        const uint32_t altCount = READ32(kGowVblankAltCountAddr);
        WRITE32(kGowVblankAltCountAddr, altCount + 1u);

        // sync + ei sao no-op no host: o dispatcher ja serializa handlers
        // via mutex e o cop0_status->ie nao tem efeito real no recompilado.

        const uint64_t tick = g_gowVblankTickCount.fetch_add(1u, std::memory_order_relaxed) + 1u;
        if (tick <= 4u || (tick % 60u) == 0u)
        {
            std::cerr << "[stub:0x182f28] PARTE 8 PLANO A: VBlank tick #" << std::dec << tick
                      << " — frameCount=" << (frameCount + 1u)
                      << " flag=" << ((flag ^ 1u) & 1u)
                      << " altCount=" << (altCount + 1u)
                      << std::endl;
        }

        // PARTE 10 PLANO B2 PASSO 2.5 — dump do client_buf SIF nos ticks
        // 100, 1000 e 5000 pra ver se o jogo mexe no buffer apos a forja.
        if (tick == 100u || tick == 1000u || tick == 5000u)
        {
            const uint32_t watchAddr = g_gowSifClientBufWatch.load(std::memory_order_relaxed);
            if (watchAddr != 0u && watchAddr < 0x02000000u)
            {
                const uint8_t* p = rdram + watchAddr;
                std::cerr << "[stub:0x182f28] PARTE 10 PLANO B2 PASSO 2.5 — "
                          << "dump @VBlank #" << std::dec << tick
                          << " buf=0x" << std::hex << watchAddr << ":";
                for (uint32_t i = 0; i < 64u; ++i)
                {
                    if ((i & 15u) == 0u) std::cerr << "\n  +0x"
                        << std::hex << std::setw(2) << std::setfill('0')
                        << i << ":";
                    std::cerr << " " << std::hex << std::setw(2)
                        << std::setfill('0')
                        << static_cast<unsigned>(p[i]);
                }
                std::cerr << std::dec << std::setfill(' ') << std::endl;
            }
        }

        // Termina o handler retornando ao chamador. O loop em
        // dispatchIntcHandlersForCause (linha 141 de ps2_syscalls_interrupt.inl)
        // sai quando ctx->pc == 0, e $ra foi setado a 0 antes da chamada.
        ctx->pc = GPR_U32(ctx, 31);
    }

    void apply_god_of_war_overrides(PS2Runtime& runtime)
    {
        runtime.registerFunction(0x0013DA10u, gow_stub_sub_0013DA10);
        std::cout << "[game_overrides] God of War: stub PARTE 7 PLANO A registrado em 0x0013DA10 "
                  << "(sub_0013DA10) — bump allocator de "
                  << (kGowStubHeapSize / kGowStubNodeBytes) << " nos em [0x"
                  << std::hex << kGowStubHeapBase << "..0x"
                  << (kGowStubHeapBase + kGowStubHeapSize) << "]"
                  << std::dec << std::endl;

        runtime.registerFunction(0x00182F28u, gow_intc_handler_0x182f28);
        std::cout << "[game_overrides] God of War: stub PARTE 8 PLANO A registrado em 0x00182F28 "
                  << "(handler INTC VBlank — replica fiel das 8 instrucoes em sub_00182EE8 "
                  << "que o detector PS2Recomp perdeu por estarem apos um jr $ra)"
                  << std::endl;
    }
}

PS2_REGISTER_GAME_OVERRIDE(
    "GodOfWarPCPort:sub_0013DA10",
    "SCUS_973.99",
    0u,
    0u,
    apply_god_of_war_overrides)
