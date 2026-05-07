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
#include <chrono>
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

// PASSO 2.8 — Timestamp (steady_clock ns) do ultimo RPC_BIND interceptado
// em sceSifSetDma. Usado pra correlacao WaitSema:block <-> RPC_BIND.
// Hipotese sob teste: dump round b7ceb6d (2026-04-30) revelou callback EE
// @0x3277c0 = 64 bytes ZERADOS (nunca populada). Mas log mostrou
// [WaitSema:block] tid=1 sid=4 logo apos RPC_BIND — jogo dorme em
// semaforo, NAO em busy-wait. Se >50% dos blocks acontecem em <100ms apos
// o RPC_BIND, confirma que o sema bloqueado e' o que IOP deveria sinalizar
// -> PASSO 3 (NOVO PLANO) = forjar iSignalSema do sid bloqueado.
std::atomic<uint64_t> g_gowLastSifBindMonotonicNs{0u};

extern "C" void gow_record_sif_bind_ts()
{
    auto now = std::chrono::steady_clock::now().time_since_epoch();
    auto ns = std::chrono::duration_cast<std::chrono::nanoseconds>(now).count();
    g_gowLastSifBindMonotonicNs.store(static_cast<uint64_t>(ns), std::memory_order_relaxed);
}

extern "C" std::uint64_t gow_get_sif_bind_monotonic_ns()
{
    return g_gowLastSifBindMonotonicNs.load(std::memory_order_relaxed);
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
    constexpr uint32_t kGowGameModeAddr          = 0x0029C838u;

    // PASSO 4 — SIF RPC client mode at 0x30A1C0 force-done
    // entry_26c658 (label_26c6d0) busy-polls *(0x30A1C0): set by sceSifCallRpc,
    // cleared to 0 by the IOP response. Without a real IOP it never clears.
    // After 5 VBlanks (> tick 60) with mode != 0, we force-clear it.
    // Also zeroes *(0x2A1710) to stop the useless VBlank→FUN_2963C0 loop.
    constexpr uint32_t kGowSifRpcClientModeAddr = 0x0030A1C0u;
    constexpr uint32_t kGowSifNotifyAddr        = 0x002A1710u;

    // PASSO 5 — *(0x327a40) poll unblock (StartThread(tid=2) nunca chamado)
    // Causa raiz confirmada (round log_latest):
    //   entry_27a5a8 (VBlank) le notify2a1710; se >0, chama sub_002963C0(a0=0x2C4BC0).
    //   sub_002963C0 -> sub_00295568: lbu $a1, 0x0($s6) onde $s6=0x2C4BC0.
    //   Sem IOP real, byte[0]@0x2C4BC0 = 0x00 -> early-exit -> func_294618 nunca chamada
    //   -> StartThread(tid=2) nunca chamada -> *(0x327a40) fica 0 para sempre.
    //   entry_296c48 (label_296c88) -> func_296518 busy-poll *(0x327a40) ate timeout (300s).
    // Fix desta rodada: apos 60 ticks com notify2a1710=1 e *(0x327a40)==0,
    //   escrever WRITE32(0x327a40, 1) diretamente desbloqueando o poll.
    // Fix organico futuro (recompilar.sh): escrever pacote SIF valido em 0x2C4BC0
    //   para que sub_00295568 processe -> StartThread(tid=2) chamado organicamente
    //   -> Bug P fix (FUN_002947c8 reescrita) seta *(0x327a40)=1 por conta propria.
    constexpr uint32_t kGowThread2ReadyAddr = 0x00327A40u;
    constexpr uint32_t kGowSifRecvBufAddr   = 0x002C4BC0u;

    std::atomic<uint64_t> g_gowVblankTickCount{0u};
    static uint32_t s_gowLastGameMode   = 0xFFFFFFFFu;
    static uint32_t s_passo4StallTicks  = 0u;
    static uint32_t s_passo5NotifyTicks = 0u;
    static bool     s_passo5Fired       = false;

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

        const uint32_t gameMode = READ32(kGowGameModeAddr);

        // Detecta transicao de game mode e loga imediatamente
        if (gameMode != s_gowLastGameMode)
        {
            std::cerr << "[stub:0x182f28] GAME_MODE_CHANGE: "
                      << s_gowLastGameMode << " -> " << std::dec << gameMode
                      << " @tick #" << (g_gowVblankTickCount.load(std::memory_order_relaxed) + 1u)
                      << std::endl;
            s_gowLastGameMode = gameMode;
        }

        const uint64_t tick = g_gowVblankTickCount.fetch_add(1u, std::memory_order_relaxed) + 1u;
        if (tick <= 4u || (tick % 60u) == 0u)
        {
            const int32_t notify2a1710 = static_cast<int32_t>(READ32(0x2a1710u));
            const int32_t rpcBusy2a1734 = static_cast<int32_t>(READ32(0x2a1734u));
            const int32_t sifClient2a28d0 = static_cast<int32_t>(READ32(0x2a28d0u));
            std::cerr << "[stub:0x182f28] PARTE 8 PLANO A: VBlank tick #" << std::dec << tick
                      << " — frameCount=" << (frameCount + 1u)
                      << " flag=" << ((flag ^ 1u) & 1u)
                      << " altCount=" << (altCount + 1u)
                      << " gameMode=" << gameMode
                      << " notify2a1710=" << notify2a1710
                      << " rpcBusy2a1734=" << rpcBusy2a1734
                      << " sifClient2a28d0=" << sifClient2a28d0
                      << std::endl;
        }

        // ----------------------------------------------------------------
        // PASSO 4 — force SIF RPC client mode 0x30A1C0 = 0 after stall
        // entry_26c658 (label_26c6d0) busy-polls *(0x30A1C0). Without a
        // real IOP the field never clears → thread stalls forever.
        // After tick 60 (1 s of legitimate SIF setup), if *(0x30A1C0)!=0
        // for 5 consecutive VBlanks, we force it to 0 (IOP done fiction)
        // and also clear *(0x2A1710) to stop the VBlank→FUN_2963C0 loop.
        if (tick > 60u)
        {
            const uint32_t rpcMode = READ32(kGowSifRpcClientModeAddr);
            if (rpcMode != 0u)
            {
                s_passo4StallTicks++;
                if (s_passo4StallTicks == 1u)
                {
                    std::cerr << "[stub:0x182f28] PASSO 4: detectou *(0x30A1C0)=0x"
                              << std::hex << rpcMode
                              << " (SIF RPC pendente) @tick #"
                              << std::dec << tick << std::endl;
                }
                if (s_passo4StallTicks >= 5u)
                {
                    WRITE32(kGowSifRpcClientModeAddr, 0u);
                    WRITE32(kGowSifNotifyAddr, 0u);
                    std::cerr << "[stub:0x182f28] PASSO 4 FIRE: forcou *(0x30A1C0)=0"
                              << " e *(0x2A1710)=0"
                              << " apos " << s_passo4StallTicks
                              << " VBlanks de stall @tick #"
                              << std::dec << tick << std::endl;
                    s_passo4StallTicks = 0u;
                }
            }
            else
            {
                s_passo4StallTicks = 0u;
            }
        }

        // ----------------------------------------------------------------
        // PASSO 5 — forca *(0x327a40)=1 quando poll ficou preso
        // Condicao: notify2a1710=1 E *(0x327a40)==0 por >=60 VBlanks consecutivos.
        // Isso detecta exatamente o cenario onde sub_00295568 fez early-exit (byte[0]
        // @0x2C4BC0==0) e StartThread(tid=2) nunca foi chamado.
        if (!s_passo5Fired)
        {
            const uint32_t p5notify  = READ32(kGowSifNotifyAddr);
            const uint32_t p5t2ready = READ32(kGowThread2ReadyAddr);

            if (p5t2ready != 0u)
            {
                // *(0x327a40) ja e' nao-zero — ou PASSO 5 ja disparou, ou
                // StartThread funcionou organicamente. Registra apenas uma vez.
                s_passo5Fired = true;
                std::cerr << "[stub:0x182f28] PASSO 5: *(0x327a40)=0x" << std::hex << p5t2ready
                          << " (ja nao-zero, StartThread OK ou forja previa) @tick #"
                          << std::dec << tick << std::endl;
            }
            else if (p5notify != 0u)
            {
                // notify2a1710=1 mas *(0x327a40) ainda 0 — contagem de stall
                s_passo5NotifyTicks++;

                if (s_passo5NotifyTicks == 1u)
                {
                    // Primeiro tick de stall: loga estado inicial do buf@0x2C4BC0
                    const uint8_t* pb = rdram + kGowSifRecvBufAddr;
                    std::cerr << "[stub:0x182f28] PASSO 5: detectou notify2a1710=1"
                              << " e *(0x327a40)=0 @tick #" << std::dec << tick
                              << " — buf@0x2C4BC0[0..3]="
                              << std::hex
                              << static_cast<unsigned>(pb[0]) << " "
                              << static_cast<unsigned>(pb[1]) << " "
                              << static_cast<unsigned>(pb[2]) << " "
                              << static_cast<unsigned>(pb[3])
                              << std::dec << " — iniciando contagem" << std::endl;
                }

                if (s_passo5NotifyTicks >= 60u)
                {
                    // 60 VBlanks (~1s) de stall confirmado: force-write 1
                    WRITE32(kGowThread2ReadyAddr, 1u);
                    s_passo5Fired = true;
                    const uint8_t* pb = rdram + kGowSifRecvBufAddr;
                    std::cerr << "[stub:0x182f28] PASSO 5 FIRE: escreveu *(0x327a40)=1"
                              << " apos " << s_passo5NotifyTicks << " ticks de stall"
                              << " @tick #" << std::dec << tick
                              << " — buf@0x2C4BC0[0..7]=" << std::hex
                              << static_cast<unsigned>(pb[0]) << " "
                              << static_cast<unsigned>(pb[1]) << " "
                              << static_cast<unsigned>(pb[2]) << " "
                              << static_cast<unsigned>(pb[3]) << " "
                              << static_cast<unsigned>(pb[4]) << " "
                              << static_cast<unsigned>(pb[5]) << " "
                              << static_cast<unsigned>(pb[6]) << " "
                              << static_cast<unsigned>(pb[7])
                              << std::dec << std::endl;
                }
            }
            else
            {
                // notify2a1710==0: ainda nao chegamos no estado de stall
                s_passo5NotifyTicks = 0u;
            }
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

    // Bug L (2026-05-01) — FUN_00296a50 truncada a 2 instrucoes; chamada via
    // 0x296a54 (skip-prologue, ra=0) como callback de modulo IOP.
    // Sem IOP real, mem[mem[0x327898]] == 0 → early-return sempre tomado → $v0=0.
    //
    // Bug O (2026-05-01) — retornar 0 causa retry-loop crescente entre cada RPC BIND:
    //   sid=12: 1871ms, sid=15: 9649ms, sid=35: 56823ms → VBlank infinito apos sid=35.
    //   O jogo interpreta $v0=0 como "modulo IOP nao pronto" e fica em busy-wait.
    //   Fix: retornar 1 ("modulo IOP carregado/pronto") para eliminar os retries.
    //
    // Solucao permanente: regen via truncation_overrides.csv entry 0x296a50-0x296c48.
    // Bug AD — entry point da thread tid=3 (0x27CBD0) nao registrado no recompilado.
    // sub_0027C100 cria essa thread via CreateThread(entry=0x27CBD0).
    // Semantica: sceSifRpcThread — thread de polling IOP RPC.
    // Sem IOP real, e' um loop cooperativo infinito que mantém activeThreads>0
    // enquanto o game main (tid=1) roda e encerra via ExitThread.
    // ========================================================================
    // PASSO 22A — Expansao do pool 0x2CB940 (func_13E090 / entry_13e090)
    // ========================================================================
    // Problema raiz identificado (2026-05-06):
    //   - func_13E090 (0x13E090) le um pool fixo de nos em 0x2CB940:
    //       +0: pool_array_base  +4: current_index  +8: pool_limit
    //   - O pool foi inicializado com pool_limit=3 (1 usado em JAL[6/11] via
    //     sub_0013FCA8, 2 usados em JAL[9/11] via sub_0017A940). Depois: 13
    //     chamadas retornam 0 (pool esgotado).
    //   - sub_0013DC78 recebe s2=0 (null) → operacoes de lista ligada falham
    //     silenciosamente → blocos de controle de thread de render NAO sao
    //     criados → CreateThread para tid=4..8 nunca ocorre → StartThread(tid=8)
    //     em func_293930 falha → render thread nunca inicia → tela preta.
    //   - FUN_002947c8 (tid=2) usa ring buffer tipo=1 → WakeupThread(data_byte)
    //     para acordar threads de render. Sem CreateThread, WakeupThread(8) = erro.
    // Fix:
    //   - Quando pool esgotado (current_index >= pool_limit), aloca no do bump
    //     allocator (mesma regiao 0x01000000+ do sub_0013DA10).
    //   - Quando pool valido: comportamento original (retorna pool_array[idx]).
    // ========================================================================
    void gow_stub_func_13E090_pool_expand(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime)
    {
        // Bug AF (2026-05-06): pool_array[idx] pode conter 0 (entrada nula/nao-inicializada)
        // mesmo quando idx < limit. PASSO 22A original retornava v0=0 nesse caso →
        // sub_0013DC78 recebia s2=null silenciosamente → 13+ falhas em JAL[9/11].
        // Fix: checar entryPtr != 0 antes de retornar; se 0, tratar como esgotado e forjar.
        constexpr uint32_t kPoolBase = 0x2CB940u;
        const uint32_t poolArrayBase = READ32(kPoolBase + 0u);
        const uint32_t currentIdx    = READ32(kPoolBase + 4u);
        const uint32_t poolLimit     = READ32(kPoolBase + 8u);

        static std::atomic<uint32_t> s_callCount{0u};
        static std::atomic<uint32_t> s_forgeCount{0u};
        const uint32_t callN = s_callCount.fetch_add(1u, std::memory_order_relaxed) + 1u;

        if (poolArrayBase != 0u && currentIdx < poolLimit)
        {
            const uint32_t entryAddr = poolArrayBase + currentIdx * 4u;
            const uint32_t entryPtr  = READ32(entryAddr);

            if (entryPtr != 0u)
            {
                if (callN <= 200u)
                {
                    std::fprintf(stderr,
                        "[PASSO 22A] func_13E090 chamada #%u: pool_base=0x%x idx=%u limit=%u"
                        " — entry=0x%x OK ra=0x%x\n",
                        callN, poolArrayBase, currentIdx, poolLimit, entryPtr, GPR_U32(ctx, 31));
                }
                SET_GPR_U32(ctx, 2, entryPtr);
                ctx->pc = GPR_U32(ctx, 31);
                return;
            }

            // Bug AF: entrada nula mesmo com idx < limit — forjar no
            std::fprintf(stderr,
                "[Bug AF] func_13E090 chamada #%u: pool_base=0x%x idx=%u limit=%u"
                " — pool_array[%u]=0 (entrada nula) ra=0x%x — forjando no\n",
                callN, poolArrayBase, currentIdx, poolLimit, currentIdx, GPR_U32(ctx, 31));
        }
        else
        {
            std::fprintf(stderr,
                "[PASSO 22A] func_13E090 chamada #%u: pool esgotado"
                " (base=0x%x idx=%u limit=%u) ra=0x%x — forjando no\n",
                callN, poolArrayBase, currentIdx, poolLimit, GPR_U32(ctx, 31));
        }

        const uint32_t forgeN = s_forgeCount.fetch_add(1u, std::memory_order_relaxed) + 1u;
        const uint32_t off    = g_gowStubHeapOffset.fetch_add(kGowStubNodeBytes, std::memory_order_relaxed);
        g_gowStubAllocCount.fetch_add(1u, std::memory_order_relaxed);

        if (off + kGowStubNodeBytes > kGowStubHeapSize)
        {
            std::fprintf(stderr,
                "[PASSO 22A] func_13E090 forge #%u: bump heap ESGOTADO!\n", forgeN);
            SET_GPR_U32(ctx, 2, 0u);
            ctx->pc = GPR_U32(ctx, 31);
            return;
        }

        const uint32_t guestPtr = kGowStubHeapBase + off;
        for (uint32_t i = 0u; i < kGowStubNodeBytes; i += 4u)
        {
            WRITE32(guestPtr + i, 0u);
        }

        std::fprintf(stderr,
            "[PASSO 22A] func_13E090 forge #%u: guestPtr=0x%x (ra=0x%x)\n",
            forgeN, guestPtr, GPR_U32(ctx, 31));

        SET_GPR_U32(ctx, 2, guestPtr);
        ctx->pc = GPR_U32(ctx, 31);
    }

    // ========================================================================
    // PASSO 22B — Log AddDmacHandler via func_293930 (syscall v1=0x12)
    // ========================================================================
    // func_293930 faz: addiu $v1, $zero, 0x12; syscall; jr $ra
    // Syscall 0x12 = AddDmacHandler (NAO StartThread — erro de analise anterior).
    // sub_0017BC80 chama: AddDmacHandler(cause=5, handler=0x296a50)
    // sub_0017A940 step 7 chama: AddDmacHandler(cause=8, handler=0x157358)
    //
    // Bug AM (CRITICO): stub original chamava handleSyscall mas NAO executava
    // "jr $ra" (ctx->pc = ra). Isso fazia ctx->pc ficar no meio de func_293930
    // (0x293934) em vez de 0x17A98C. O caller (sub_0017A940) via
    // ctx->pc != return_addr e retornava prematuramente — steps 8-10/10 nunca
    // executavam, JAL[10/11] e JAL[11/11] nunca rodavam, render thread nunca
    // era criada -> nonBlack=0 (Bug AL).
    // Fix: adicionar ctx->pc = GPR_U32(ctx, 31) ao final do stub.
    // ========================================================================
    void gow_log_func_293930_AddDmacHandler(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime)
    {
        static std::atomic<uint32_t> s_logN{0u};
        const uint32_t logN = s_logN.fetch_add(1u, std::memory_order_relaxed) + 1u;
        const uint32_t cause = GPR_U32(ctx, 4);
        const uint32_t handler = GPR_U32(ctx, 5);
        const uint32_t ra = GPR_U32(ctx, 31);
        if (logN <= 8u)
        {
            std::fprintf(stderr,
                "[PASSO 22B] func_293930 AddDmacHandler #%u: cause=%u handler=0x%x ra=0x%x\n",
                logN, cause, handler, ra);
        }
        SET_GPR_S32(ctx, 3, 18);
        runtime->handleSyscall(rdram, ctx, 0x0u);
        if (logN <= 8u)
        {
            std::fprintf(stderr,
                "[PASSO 22B] func_293930 AddDmacHandler #%u resultado: v0=0x%x\n",
                logN, GPR_U32(ctx, 2));
        }
        // Bug AM fix: simula "jr $ra" — sem isso ctx->pc fica em 0x293934
        // e o caller detecta retorno invalido, saindo prematuramente.
        ctx->pc = ra;
    }

    void gow_stub_sceSifRpcThread_0x27CBD0(uint8_t* /*rdram*/, R5900Context* /*ctx*/, PS2Runtime* runtime)
    {
        static bool s_logged = false;
        if (!s_logged) {
            s_logged = true;
            std::fprintf(stderr, "[stub:0x27CBD0] Bug AD: sceSifRpcThread — iniciando loop cooperativo IOP simulado\n");
        }
        while (true) {
            runtime->cooperativeGuestYield();
        }
    }

    void gow_stub_FUN_00296a54(uint8_t* /*rdram*/, R5900Context* ctx, PS2Runtime* /*runtime*/)
    {
        static std::atomic<uint32_t> s_log{0};
        const uint32_t n = s_log.fetch_add(1, std::memory_order_relaxed);
        if (n < 8u)
        {
            std::cout << "[stub:0x296a54] Bug O: callback IOP modulo #" << n
                      << " — retornando 1 (modulo pronto, elimina retry-loop)"
                      << std::endl;
        }
        SET_GPR_S32(ctx, 2, 1);  // $v0 = 1 (Bug O fix: modulo IOP pronto)
        ctx->pc = GPR_U32(ctx, 31);  // return (ra=0 → dispatcher limpa)
    }

    // ---------------------------------------------------------------------------
    // PASSO 23A — stub para 0x1838d0 (JAL[5/11] de sub_00138D48)
    // 0x1838d0 e um LABEL dentro de entry_183878_0x183948 que o runtime nao
    // consegue resolver como entry point separado → NAO REGISTRADA → skip.
    // Esta funcao replica o bloco 0x1838d0..0x183940 (GS register init).
    //
    // CORRECAO: stub anterior usava enderecos errados (0x10008020, 0x1000e010,
    // etc.) que NAO sao registradores GS privilege. GS privilege regs ficam em
    // PS2_GS_BASE = 0x12000000. Enderecos corretos:
    //   GS_PMODE   = 0x12000000 (offset 0x0000)
    //   GS_SMODE1  = 0x12000010 (offset 0x0010)
    //   GS_DISPFB1 = 0x12000070 (offset 0x0070) — fbp=0, fbw=10 (640px), psm=0
    //   GS_DISPLAY1= 0x12000080 (offset 0x0080)
    //   GS_DISPFB2 = 0x12000090 (offset 0x0090)
    //   GS_DISPLAY2= 0x120000A0 (offset 0x00A0)
    //   GS_IMR     = 0x12001010 (offset 0x1010)
    // O loop cop0 (bc0f) foi recompilado como sempre-false — mantemos assim.
    // ---------------------------------------------------------------------------
    void gow_stub_0x1838d0_gs_init(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime)
    {
        std::fprintf(stderr,
            "[PASSO 23A] 0x1838d0: GS init stub (corrigido) — escrevendo em 0x12000000+\n");

        // GS_PMODE = 0 (desabilita ambos os circuitos de display durante init)
        WRITE32(0x12000000u, 0u);
        // GS_SMODE1 = 0x2b0f00 (NTSC 640x448 timing)
        WRITE32(0x12000010u, 0x2b0f00u);
        // GS_DISPFB1: fbp=0, fbw=10 (10*64=640px), psm=0 (PSMCT32)
        // valor = (0<<0) | (10<<9) | (0<<15) = 0x1400
        // Sem esse write, dispfb1 fica 0 apos reset do jogo -> fbw=0 -> frame preto
        WRITE64(0x12000070u, 0x1400ULL);
        // GS_DISPLAY1: dx=0, dy=0, magh=3, magv=0, dw=2559 (640*4-1), dh=447
        // valor tipico para NTSC 640x448: 0x000D_F9FF_0000_0000 (simplificado)
        WRITE32(0x12000080u, 1u);
        // GS_DISPFB2: igual a DISPFB1 por seguranca
        WRITE64(0x12000090u, 0x1400ULL);
        // GS_DISPLAY2
        WRITE32(0x120000A0u, 1u);
        // GS_IMR = 0x145 (mascara de interrupcoes GS)
        WRITE32(0x12001010u, 0x145u);
        // loop cop0 bc0f = sempre false no PC port — pulado
        // 0x183940: jr $ra
        ctx->pc = GPR_U32(ctx, 31);
    }

    // ---------------------------------------------------------------------------
    // PASSO 25 / Bug AI — stub para func_180A10 (0x180A10)
    // sub_0017E530 (step 3/10 de sub_0017A940) chama func_180A10(a0=alloc5_ptr, a2=3).
    // sub_00180A10 escreve *(a0+0xC)=0x2C0458 (vtable ptr) e chama func_180A90.
    // func_180A90 faz dispatch via jalr para READ32(0x2C046C) — funcao real do jogo
    // que altera ctx->pc, causando retorno prematuro em cadeia:
    //   sub_00180A10 -> sub_0017E530 -> sub_0017A940 (step 3/10 nunca retorna)
    // -> Steps 4-10 de sub_0017A940 nao executam -> StartThread(tid=8) step 7/10 nunca chamado
    // -> render thread tid=8 nunca criada -> nonBlack=0 permanente (Bug AI confirmado).
    //
    // Fix: stub reproduz o side-effect (WRITE32(a0+0xC, 0x2C0458) + v0=a0)
    // SEM chamar func_180A90, evitando o dispatch sabotador.
    // Seguro: sub_0017E530 sobrescreve *(s0+0xC) com 0x2C03D0 logo apos (0x17E5E8),
    // entao a escrita de 0x2C0458 e transitoria e nao afeta o estado final.
    // ---------------------------------------------------------------------------
    void gow_stub_0x180A10_dispatch_skip(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime)
    {
        const uint32_t a0 = GPR_U32(ctx, 4);
        // Side effect do delay slot de sub_00180A10: *(a0+0xC) = 0x2C0458 (vtable ptr)
        WRITE32(ADD32(a0, 12u), 0x2C0458u);
        // Retorna v0 = a0 (struct pointer), como sub_00180A10 faz apos func_180A90
        SET_GPR_U32(ctx, 2, a0);
        std::fprintf(stderr,
            "[PASSO 25] func_180A10 stub: a0=0x%x *(a0+0xC)=0x2C0458 "
            "— func_180A90 dispatch PULADO (evita redirect ctx->pc sabotador)\n",
            a0);
        // Retorno normal ao caller sub_0017E530 via $ra
        ctx->pc = GPR_U32(ctx, 31);
    }

    // ---------------------------------------------------------------------------
    // PASSO 26 / Bug AJ — stub para func_180D08 (0x180D08)
    // sub_0017E530 chama func_180D08 como callee 5/8 (após alloc5, func_180A10 ✅,
    // func_17ECE0, func_13DC78_2ª, func_13E180). func_180D08 contém 4 jalr vtable
    // dispatches (em 0x180d30, 0x180d60, 0x180d9c, 0x180dc0), padrão idêntico ao
    // Bug AI (func_180A10→func_180A90). Os alvos do jalr são funções reais do jogo
    // que alteram ctx->pc, causando retorno prematuro em cadeia:
    //   func_180D08 -> sub_0017E530 -> sub_0017A940 (steps 4-10 nunca executam)
    //   -> StartThread(tid=8) step 7/10 nunca chamado -> render thread não criada
    //   -> nonBlack=0 permanente (Bug AJ).
    //
    // Evidência do log: forge#134 ra=0x17e62c (callee 3/8 passou) -> boot_stub imediato
    // (callee 4/8 func_13E180 é jr $ra seguro; callee 5/8 func_180D08 tem jalr → bloqueio).
    //
    // Fix: reproduz o primeiro side-effect (sw $s0, 4($s1) = WRITE32(a1+4, a0))
    // e pula todos os jalr dispatches. Sub_0017E530 não usa v0 de func_180D08.
    // func_180CD8 (callee 6/8) chama func_180D08 condicionalmente — este stub
    // também protege essa chamada indireta.
    // ---------------------------------------------------------------------------
    void gow_stub_0x180D08_vtable_dispatch_skip(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime)
    {
        const uint32_t a0 = GPR_U32(ctx, 4);  // s0 em func_180D08 (struct ptr)
        const uint32_t a1 = GPR_U32(ctx, 5);  // s1 em func_180D08 (container/list ptr)
        // Reproduz o primeiro side-effect: sw $s0, 4($s1) (0x180d20)
        if (a1 != 0u) {
            WRITE32(ADD32(a1, 4u), a0);
        }
        // Pula os 4 jalr vtable dispatches (0x180d30, 0x180d60, 0x180d9c, 0x180dc0)
        SET_GPR_U32(ctx, 2, 0u);  // v0 = 0 (neutro; sub_0017E530 não usa v0 após retorno)
        std::fprintf(stderr,
            "[PASSO 26] func_180D08 stub: a0=0x%x a1=0x%x "
            "— 4x jalr vtable dispatch PULADO (Bug AJ fix)\n",
            a0, a1);
        ctx->pc = GPR_U32(ctx, 31);
    }

    // ---------------------------------------------------------------------------
    // PASSO 23C — stub para 0x283770 (JAL[1/11] de sub_00138D48)
    // Guard de inicializacao: se READ32(0x326940)!=0 retorna, caso contrario
    // seta 0x326940=1 e retorna ao caller.
    // NOTA Bug AH (2026-05-06): a tail-call para entry_283790(0x2836c0) foi
    // REMOVIDA — ela alterava ctx->pc para um endereco inesperado, fazendo
    // sub_00138D48 detectar o pc errado apos JAL[1/11] e abortar o boot
    // inteiro com v0=0xffffffff (JALs 2-11 nunca rodavam). O guard agora
    // apenas marca o flag e retorna, reproduzindo o comportamento do skip
    // original que funcionava corretamente nos rounds anteriores.
    // ---------------------------------------------------------------------------
    void gow_stub_0x283770_init_guard(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime)
    {
        const uint32_t flag = READ32(0x326940u);
        if (flag != 0u) {
            std::fprintf(stderr,
                "[PASSO 23C] 0x283770: guard ja inicializado (0x326940=0x%x) — retornando\n",
                flag);
            ctx->pc = GPR_U32(ctx, 31);
            return;
        }
        std::fprintf(stderr,
            "[PASSO 23C] 0x283770: guard init — 0x326940=0 -> setando 1, retornando ao caller\n");
        WRITE32(0x326940u, 1u);
        ctx->pc = GPR_U32(ctx, 31);
    }

    // ---------------------------------------------------------------------------
    // PASSO 27 — stub para 0x176FC8 (sub_00176FC8: BST insert/traverse pool nomes hash)
    //
    // Bug AK — causa raiz (2026-05-06):
    //   sub_0017A940 step 5/10 chama entry_131a58 → func_175B38 → func_176C58 → func_176FC8.
    //   func_176FC8 é uma travessia de BST (Binary Search Tree) baseada em pool.
    //   O pool em 0x29C4B4 não está inicializado corretamente → READ32(0x29C4B4) != 0 mas
    //   o nó buscado nunca é encontrado → loop infinito com cooperativeGuestYield() → 298s VBlanks.
    //
    //   Evidência: único cooperativeGuestYield() em sub_00176FC8 está no label_177470
    //   (bnel $s4, $v0 — condição nunca satisfeita). VBlanks tick 300→17880 = 298 segundos.
    //
    // Fix: stub retorna imediatamente via $ra.
    //   func_176C58 (caller) NÃO usa o retorno de func_176FC8:
    //   após o retorno seta v0=s0 (daddu $v0, $s0, $zero em 0x176cd4) — independente.
    //   Portanto o skip é seguro; a inserção BST é non-critical para o boot.
    // ---------------------------------------------------------------------------
    void gow_stub_0x176FC8_bst_skip(uint8_t* /*rdram*/, R5900Context* ctx, PS2Runtime* /*runtime*/)
    {
        std::fprintf(stderr,
            "[PASSO 27] func_176FC8 stub: BST insert/traverse PULADO (Bug AK fix) "
            "— a0=0x%x a1=0x%x a2=0x%x ra=0x%x\n",
            GPR_U32(ctx, 4), GPR_U32(ctx, 5), GPR_U32(ctx, 6), GPR_U32(ctx, 31));
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

        runtime.registerFunction(0x00296A54u, gow_stub_FUN_00296a54);
        std::cout << "[game_overrides] God of War: stub Bug L registrado em 0x00296A54 "
                  << "(FUN_00296a50 truncada — callback IOP modulo, early-exit sem IOP)"
                  << std::endl;

        runtime.registerFunction(0x0027CBD0u, gow_stub_sceSifRpcThread_0x27CBD0);
        std::cout << "[game_overrides] God of War: stub Bug AD registrado em 0x0027CBD0 "
                  << "(sceSifRpcThread — thread IOP RPC polling, loop cooperativo sem IOP real)"
                  << std::endl;

        runtime.registerFunction(0x00013E090u, gow_stub_func_13E090_pool_expand);
        std::cout << "[game_overrides] God of War: PASSO 22A registrado em 0x0013E090 "
                  << "(func_13E090 — pool 0x2CB940 expansivel via bump allocator;"
                  << " corrige 13+ chamadas sub_0013DC78(s2=null) em JAL[9/11])"
                  << std::endl;

        runtime.registerFunction(0x000293930u, gow_log_func_293930_AddDmacHandler);
        std::cout << "[game_overrides] God of War: PASSO 22B registrado em 0x00293930 "
                  << "(func_293930 — AddDmacHandler syscall 0x12; Bug AM fix: jr $ra ao final)"
                  << std::endl;

        runtime.registerFunction(0x001838D0u, gow_stub_0x1838d0_gs_init);
        std::cout << "[game_overrides] God of War: PASSO 23A registrado em 0x001838D0 "
                  << "(GS init stub — JAL[5/11] de sub_00138D48; configura PMODE/SMODE1/DISPLAY1/2/IMR)"
                  << std::endl;

        runtime.registerFunction(0x00283770u, gow_stub_0x283770_init_guard);
        std::cout << "[game_overrides] God of War: PASSO 23C registrado em 0x00283770 "
                  << "(guard init 0x326940 — JAL[1/11] de sub_00138D48)"
                  << std::endl;

        runtime.registerFunction(0x00180A10u, gow_stub_0x180A10_dispatch_skip);
        std::cout << "[game_overrides] God of War: PASSO 25 registrado em 0x00180A10 "
                  << "(func_180A10 — dispatch func_180A90 PULADO; "
                  << "sub_0017A940 step 3/10 desbloqueia, steps 4-10 + StartThread(tid=8) esperados)"
                  << std::endl;

        runtime.registerFunction(0x00180D08u, gow_stub_0x180D08_vtable_dispatch_skip);
        std::cout << "[game_overrides] God of War: PASSO 26 registrado em 0x00180D08 "
                  << "(func_180D08 — Bug AJ: 4x jalr vtable dispatch PULADO; "
                  << "callee 5/8 de sub_0017E530; callee 6/8 func_180CD8 tambem protegida indiretamente)"
                  << std::endl;

        runtime.registerFunction(0x00176FC8u, gow_stub_0x176FC8_bst_skip);
        std::cout << "[game_overrides] God of War: PASSO 27 registrado em 0x00176FC8 "
                  << "(func_176FC8 — Bug AK: BST insert/traverse pool nomes hash; "
                  << "loop infinito bnel $s4,$v0 em label_177470 — pool 0x29C4B4 nao inicializado; "
                  << "func_176C58 nao usa retorno de func_176FC8 -> skip seguro)"
                  << std::endl;
    }
}

PS2_REGISTER_GAME_OVERRIDE(
    "GodOfWarPCPort:sub_0013DA10",
    "SCUS_973.99",
    0u,
    0u,
    apply_god_of_war_overrides)
