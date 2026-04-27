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
#include <iostream>
#include <mutex>
#include <optional>
#include <vector>

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

    void apply_god_of_war_overrides(PS2Runtime& runtime)
    {
        runtime.registerFunction(0x0013DA10u, gow_stub_sub_0013DA10);
        std::cout << "[game_overrides] God of War: stub PARTE 7 PLANO A registrado em 0x0013DA10 "
                  << "(sub_0013DA10) — bump allocator de "
                  << (kGowStubHeapSize / kGowStubNodeBytes) << " nos em [0x"
                  << std::hex << kGowStubHeapBase << "..0x"
                  << (kGowStubHeapBase + kGowStubHeapSize) << "]"
                  << std::dec << std::endl;
    }
}

PS2_REGISTER_GAME_OVERRIDE(
    "GodOfWarPCPort:sub_0013DA10",
    "SCUS_973.99",
    0u,
    0u,
    apply_god_of_war_overrides)
