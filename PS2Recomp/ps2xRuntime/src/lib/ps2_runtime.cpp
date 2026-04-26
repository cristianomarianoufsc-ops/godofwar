#include "ps2_runtime.h"
#include "ps2_missing_report.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "game_overrides.h"
#include "ps2_runtime_macros.h"
#include "ps2_call_tracer.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <array>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <limits>
#include <chrono>
#include <atomic>
#include <thread>
#include <unordered_map>
#include <unordered_set>
#include <mutex>
#include <sstream>
#include "raylib.h"
#include "ps2_gs_gpu.h"
#include <ThreadNaming.h>

namespace ps2_stubs
{
    void resetSifState();
}

#define ELF_MAGIC 0x464C457F // "\x7FELF" in little endian
#define ET_EXEC 2            // Executable file
#define EM_MIPS 8            // MIPS architecture
#define PT_LOAD 1            // Loadable segment

static constexpr int FB_WIDTH = 640;
static constexpr int FB_HEIGHT = 448;
static constexpr uint32_t DEFAULT_FB_SIZE = FB_WIDTH * FB_HEIGHT * 4;
static constexpr uint32_t DEFAULT_FB_ADDR = (PS2_RAM_SIZE - DEFAULT_FB_SIZE - 0x10000u);
struct ElfHeader
{
    uint32_t magic;
    uint8_t elf_class;
    uint8_t endianness;
    uint8_t version;
    uint8_t os_abi;
    uint8_t abi_version;
    uint8_t padding[7];
    uint16_t type;
    uint16_t machine;
    uint32_t version2;
    uint32_t entry;
    uint32_t phoff;
    uint32_t shoff;
    uint32_t flags;
    uint16_t ehsize;
    uint16_t phentsize;
    uint16_t phnum;
    uint16_t shentsize;
    uint16_t shnum;
    uint16_t shstrndx;
};

struct ProgramHeader
{
    uint32_t type;
    uint32_t offset;
    uint32_t vaddr;
    uint32_t paddr;
    uint32_t filesz;
    uint32_t memsz;
    uint32_t flags;
    uint32_t align;
};

namespace
{
    constexpr uint32_t kGuestHeapDefaultBase = 0x00100000u;
    constexpr uint32_t kGuestHeapDefaultAlignment = 16u;
    constexpr uint32_t kGuestHeapSafetyPad = 0x1000u;
    constexpr uint32_t kGuestHeapHardLimit = 0x01F00000u;

    constexpr uint32_t COP0_CAUSE_EXCCODE_MASK = 0x0000007Cu;
    constexpr uint32_t COP0_CAUSE_BD = 0x80000000u;
    constexpr uint32_t COP0_STATUS_EXL = 0x00000002u;
    constexpr uint32_t COP0_STATUS_BEV = 0x00400000u;
    constexpr uint32_t EXCEPTION_VECTOR_GENERAL = 0x80000080u;
    constexpr uint32_t EXCEPTION_VECTOR_TLB_REFILL = 0x80000000u;
    constexpr uint32_t EXCEPTION_VECTOR_BOOT = 0xBFC00200u;

    struct DispatchHistory
    {
        std::array<uint32_t, 64> pcs{};
        uint32_t next = 0u;
        bool wrapped = false;
    };

    thread_local DispatchHistory g_dispatchHistory;
    thread_local std::unordered_map<PS2Runtime *, uint32_t> g_guestExecutionDepths;

    void pushDispatchPc(uint32_t pc)
    {
        DispatchHistory &h = g_dispatchHistory;
        h.pcs[h.next] = pc;
        h.next = (h.next + 1u) % static_cast<uint32_t>(h.pcs.size());
        if (h.next == 0u)
        {
            h.wrapped = true;
        }
    }

    std::string formatDispatchHistory()
    {
        const DispatchHistory &h = g_dispatchHistory;
        const uint32_t count = h.wrapped ? static_cast<uint32_t>(h.pcs.size()) : h.next;
        if (count == 0u)
        {
            return "(empty)";
        }

        std::ostringstream oss;
        bool first = true;
        for (uint32_t i = 0u; i < count; ++i)
        {
            const uint32_t idx = (h.next + h.pcs.size() - count + i) % static_cast<uint32_t>(h.pcs.size());
            if (!first)
            {
                oss << " -> ";
            }
            first = false;
            oss << "0x" << std::hex << h.pcs[idx];
        }
        return oss.str();
    }

    uint32_t selectDispatchRecoveryPc(const PS2Runtime *runtime)
    {
        const DispatchHistory &h = g_dispatchHistory;
        const uint32_t count = h.wrapped ? static_cast<uint32_t>(h.pcs.size()) : h.next;
        if (count == 0u)
        {
            return 0u;
        }

        uint32_t firstHigh = 0u;
        for (uint32_t step = 1u; step <= count; ++step)
        {
            const uint32_t idx = (h.next + h.pcs.size() - step) % static_cast<uint32_t>(h.pcs.size());
            const uint32_t pc = h.pcs[idx];
            if (pc < 0x00100000u)
            {
                continue;
            }
            if (runtime && !runtime->hasFunction(pc))
            {
                continue;
            }

            if (firstHigh == 0u)
            {
                firstHigh = pc;
                continue;
            }

            return pc;
        }

        return firstHigh;
    }

    struct LoopDetector
    {
        uint32_t cycleLen = 0u;
        uint64_t cycleCount = 0u;
        uint64_t lastReportedCount = 0u;
        std::array<uint32_t, 8> pattern{};
    };

    thread_local LoopDetector g_loopDetector;

    uint64_t parseEnvUint64(const char *name, uint64_t fallback)
    {
        const char *raw = std::getenv(name);
        if (!raw || !*raw)
        {
            return fallback;
        }
        try
        {
            return std::stoull(raw);
        }
        catch (...)
        {
            return fallback;
        }
    }

    uint64_t loopReportThreshold()
    {
        // Default 1000: o sistema de recovery em defaultFunction tem teto de
        // 8192 tentativas antes de matar o runtime. Com ciclos curtos (~4 PCs),
        // 1000 repeticoes = 4000 dispatches, ainda confortavelmente dentro do
        // orcamento. Default antigo (100000) nunca disparava em loops fatais.
        static const uint64_t v = parseEnvUint64("PS2_LOOP_REPORT_AFTER", 1000ull);
        return v;
    }

    uint64_t loopBreakThreshold()
    {
        static const uint64_t v = parseEnvUint64("PS2_LOOP_BREAK_AFTER", 0ull);
        return v;
    }

    // Detecta se as ultimas L PCs despachadas formam um ciclo (i.e. coincidem
    // exatamente com as L PCs imediatamente anteriores). Retorna o tamanho L
    // do menor ciclo encontrado em [2..8], ou 0 se nao ha ciclo.
    uint32_t detectCycleLength(const DispatchHistory &h)
    {
        const uint32_t cap = static_cast<uint32_t>(h.pcs.size());
        const uint32_t available = h.wrapped ? cap : h.next;
        if (available < 4u)
        {
            return 0u;
        }

        constexpr uint32_t kMaxLen = 8u;
        const uint32_t maxLen = std::min(kMaxLen, available / 2u);

        for (uint32_t len = 2u; len <= maxLen; ++len)
        {
            bool match = true;
            for (uint32_t i = 0u; i < len; ++i)
            {
                const uint32_t idxA = (h.next + cap - 1u - i) % cap;
                const uint32_t idxB = (h.next + cap - 1u - i - len) % cap;
                if (h.pcs[idxA] != h.pcs[idxB])
                {
                    match = false;
                    break;
                }
            }
            if (match)
            {
                return len;
            }
        }
        return 0u;
    }

    // Forward declaration — definicao real esta logo abaixo neste arquivo.
    uint32_t readGuestU32Wrapped(const uint8_t *rdram, uint32_t addr);

    // Varre a stack do guest a partir de sp procurando palavras u32 que
    // pareçam ser return addresses validos (apontam para alguma funcao
    // recompilada no range guest). Retorna ate maxFrames candidatos.
    std::string formatGuestStackWalk(const PS2Runtime *runtime, const uint8_t *rdram,
                                     uint32_t sp, uint32_t maxFrames = 16u)
    {
        if (!rdram || sp == 0u || !runtime)
        {
            return "(no stack)";
        }

        std::ostringstream oss;
        uint32_t found = 0u;
        // Varre ate 4 KiB acima de sp; suficiente pra ver varios frames sem poluir.
        for (uint32_t off = 0u; off < 0x1000u && found < maxFrames; off += 4u)
        {
            const uint32_t val = readGuestU32Wrapped(rdram, sp + off);
            if (val < 0x00100000u || val >= 0x02000000u)
            {
                continue;
            }
            // O endereço-alvo do JAL costuma ser word-aligned.
            const uint32_t aligned = val & ~0x3u;
            if (!runtime->hasFunction(aligned))
            {
                continue;
            }
            if (found > 0u)
            {
                oss << " <- ";
            }
            oss << "[sp+0x" << std::hex << off << "]=0x" << val;
            ++found;
        }

        if (found == 0u)
        {
            return "(no plausible frames found)";
        }
        return oss.str();
    }

    // Dumpa o estado atual do detector de ciclo (se ele tiver visto um padrao)
    // pra stderr. Pode ser chamado de fora do dispatchLoop, ex. no caminho
    // "Called unimplemented function" antes do runtime morrer. Usa o
    // thread_local g_loopDetector da thread corrente.
    void dumpLoopDetectorState(const char *prefix, const PS2Runtime *runtime,
                               const uint8_t *rdram, uint32_t sp)
    {
        const LoopDetector &ld = g_loopDetector;
        if (ld.cycleLen == 0u || ld.cycleCount < 2u)
        {
            return;
        }

        std::cerr << "[" << prefix << ":cycle-info] len=" << std::dec << ld.cycleLen
                  << " repeated=" << ld.cycleCount
                  << " pattern=";
        for (uint32_t i = 0u; i < ld.cycleLen; ++i)
        {
            if (i > 0u) std::cerr << " -> ";
            std::cerr << "0x" << std::hex << ld.pattern[i];
        }
        std::cerr << std::dec
                  << "\n  guestStackWalk=" << formatGuestStackWalk(runtime, rdram, sp)
                  << "\n  dispatchHistory=" << formatDispatchHistory()
                  << std::endl;
    }

    uint32_t selectExceptionVector(const R5900Context *ctx, bool tlbRefill)
    {
        if (ctx->cop0_status & COP0_STATUS_BEV)
        {
            return EXCEPTION_VECTOR_BOOT;
        }
        return tlbRefill ? EXCEPTION_VECTOR_TLB_REFILL : EXCEPTION_VECTOR_GENERAL;
    }

    void raiseCop0Exception(R5900Context *ctx, uint32_t exceptionCode, bool tlbRefill = false)
    {
        if (ctx->in_delay_slot)
        {
            ctx->cop0_epc = ctx->branch_pc;
            ctx->cop0_cause = (ctx->cop0_cause & ~COP0_CAUSE_EXCCODE_MASK) |
                              ((exceptionCode << 2) & COP0_CAUSE_EXCCODE_MASK) |
                              COP0_CAUSE_BD;
        }
        else
        {
            ctx->cop0_epc = ctx->pc;
            ctx->cop0_cause = (ctx->cop0_cause & ~(COP0_CAUSE_EXCCODE_MASK | COP0_CAUSE_BD)) |
                              ((exceptionCode << 2) & COP0_CAUSE_EXCCODE_MASK);
        }

        ctx->cop0_status |= COP0_STATUS_EXL;
        ctx->pc = selectExceptionVector(ctx, tlbRefill);
        ctx->in_delay_slot = false;
    }

    std::filesystem::path normalizeAbsolutePath(const std::filesystem::path &path)
    {
        if (path.empty())
        {
            return {};
        }

        std::error_code ec;
        const std::filesystem::path absolute = std::filesystem::absolute(path, ec);
        if (ec)
        {
            return path.lexically_normal();
        }
        return absolute.lexically_normal();
    }

    PS2Runtime::IoPaths &runtimeIoPaths()
    {
        static PS2Runtime::IoPaths paths = []()
        {
            PS2Runtime::IoPaths defaults;
            std::error_code ec;
            const std::filesystem::path cwd = std::filesystem::current_path(ec);
            defaults.elfDirectory = ec ? std::filesystem::path(".") : cwd.lexically_normal();
            defaults.hostRoot = defaults.elfDirectory;
            defaults.cdRoot = defaults.elfDirectory;
            defaults.mcRoot = defaults.elfDirectory / "mc0";
            return defaults;
        }();

        return paths;
    }

    uint32_t readGuestU32Wrapped(const uint8_t *rdram, uint32_t addr)
    {
        if (!rdram)
        {
            return 0;
        }

        uint32_t value = 0;
        value |= static_cast<uint32_t>(rdram[(addr + 0u) & PS2_RAM_MASK]) << 0;
        value |= static_cast<uint32_t>(rdram[(addr + 1u) & PS2_RAM_MASK]) << 8;
        value |= static_cast<uint32_t>(rdram[(addr + 2u) & PS2_RAM_MASK]) << 16;
        value |= static_cast<uint32_t>(rdram[(addr + 3u) & PS2_RAM_MASK]) << 24;
        return value;
    }

    uint64_t readGuestU64Wrapped(const uint8_t *rdram, uint32_t addr)
    {
        const uint64_t lo = readGuestU32Wrapped(rdram, addr);
        const uint64_t hi = readGuestU32Wrapped(rdram, addr + 4u);
        return lo | (hi << 32);
    }

    uint32_t selectStackRecoveryPc(const uint8_t *rdram, const R5900Context *ctx, const PS2Runtime *runtime)
    {
        if (!rdram || !ctx || !runtime)
        {
            return 0u;
        }

        const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
        constexpr uint32_t kScanBytes = 0x200u;

        for (uint32_t offset = 0u; offset < kScanBytes; offset += 8u)
        {
            const uint32_t slotAddr = sp + offset;
            const uint32_t ra32 = static_cast<uint32_t>(readGuestU64Wrapped(rdram, slotAddr));
            if (ra32 < 0x00100000u)
            {
                continue;
            }
            if (!runtime->hasFunction(ra32))
            {
                continue;
            }
            return ra32;
        }

        for (uint32_t offset = 0u; offset < kScanBytes; offset += 4u)
        {
            const uint32_t slotAddr = sp + offset;
            const uint32_t ra32 = readGuestU32Wrapped(rdram, slotAddr);
            if (ra32 < 0x00100000u)
            {
                continue;
            }
            if (!runtime->hasFunction(ra32))
            {
                continue;
            }
            return ra32;
        }

        return 0u;
    }

    std::string readGuestPrintableString(const uint8_t *rdram, uint32_t addr, size_t maxLen)
    {
        std::string out;
        if (!rdram || maxLen == 0)
        {
            return out;
        }

        out.reserve(std::min<size_t>(maxLen, 64));
        for (size_t i = 0; i < maxLen; ++i)
        {
            const char ch = static_cast<char>(rdram[(addr + static_cast<uint32_t>(i)) & PS2_RAM_MASK]);
            if (ch == '\0')
            {
                break;
            }
            if (ch >= 0x20 && ch < 0x7F)
            {
                out.push_back(ch);
            }
            else
            {
                out.push_back('.');
            }
        }
        return out;
    }
}

PS2Runtime::GuestExecutionScope::GuestExecutionScope(PS2Runtime *runtime) noexcept
    : m_runtime(runtime)
{
    if (m_runtime)
    {
        m_runtime->enterGuestExecution();
    }
}

PS2Runtime::GuestExecutionScope::~GuestExecutionScope()
{
    if (m_runtime)
    {
        m_runtime->leaveGuestExecution();
    }
}

PS2Runtime::GuestExecutionReleaseScope::GuestExecutionReleaseScope(PS2Runtime *runtime) noexcept
    : m_runtime(runtime)
{
    if (m_runtime)
    {
        m_depth = m_runtime->releaseGuestExecution();
    }
}

PS2Runtime::GuestExecutionReleaseScope::~GuestExecutionReleaseScope()
{
    if (m_runtime && m_depth != 0u)
    {
        m_runtime->reacquireGuestExecution(m_depth);
    }
}

static void UploadFrame(Texture2D &tex, PS2Runtime *rt)
{
    // For now lets keep the display snapshot in sync with rasterized VRAM so the host frame
    rt->gs().refreshDisplaySnapshot();

    const GSRegisters &gs = rt->memory().gs();

    uint32_t dispfb = static_cast<uint32_t>(gs.dispfb1 & 0xFFFFFFFFULL);
    uint32_t fbp = dispfb & 0x1FF;
    uint32_t fbw = (dispfb >> 9) & 0x3F;
    uint32_t psm = (dispfb >> 15) & 0x1F;

    uint64_t display64 = gs.display1;
    uint32_t dw = static_cast<uint32_t>((display64 >> 32) & 0xFFF);
    uint32_t dh = static_cast<uint32_t>((display64 >> 44) & 0x7FF);

    uint32_t width = (dw + 1);
    uint32_t height = (dh + 1);
    if (width < 64 || height < 64)
    {
        width = FB_WIDTH;
        height = FB_HEIGHT;
    }
    if (width > FB_WIDTH)
        width = FB_WIDTH;
    if (height > FB_HEIGHT)
        height = FB_HEIGHT;

    uint8_t *rdram = rt->memory().getRDRAM();
    uint8_t *gsvram = rt->memory().getGSVRAM();

    uint32_t snapSize = 0;
    const uint8_t *snapVram = rt->gs().lockDisplaySnapshot(snapSize);
    const uint8_t *vramSrc = (snapVram && snapSize > 0) ? snapVram : gsvram;
    auto fillScratchFromFrame = [&](uint32_t srcFbp,
                                    uint32_t srcFbw,
                                    uint32_t srcPsm,
                                    std::vector<uint8_t> &outScratch) -> bool
    {
        outScratch.assign(FB_WIDTH * FB_HEIGHT * 4u, 0u);

        const uint32_t baseBytes = srcFbp * 8192u;
        const uint32_t bytesPerPixel = (srcPsm == 2u || srcPsm == 0x0Au) ? 2u : 4u;
        const uint32_t strideBytes = (srcFbw ? srcFbw : (FB_WIDTH / 64u)) * 64u * bytesPerPixel;

        if (srcPsm == 0u)
        {
            for (uint32_t y = 0; y < height; ++y)
            {
                uint32_t srcOff = baseBytes + y * strideBytes;
                uint32_t dstOff = y * FB_WIDTH * 4u;
                uint32_t copyW = width * 4u;
                if (srcOff + copyW <= PS2_GS_VRAM_SIZE && vramSrc)
                {
                    std::memcpy(&outScratch[dstOff], vramSrc + srcOff, copyW);
                }
                else
                {
                    uint32_t rdramIdx = srcOff & PS2_RAM_MASK;
                    if (rdramIdx + copyW > PS2_RAM_SIZE)
                    {
                        copyW = PS2_RAM_SIZE - rdramIdx;
                    }
                    std::memcpy(&outScratch[dstOff], rdram + rdramIdx, copyW);
                }
                uint8_t *row = outScratch.data() + dstOff;
                for (uint32_t x = 0; x < width; ++x)
                {
                    row[x * 4u + 3u] = 255u;
                }
            }
            return true;
        }

        if (srcPsm == 2u || srcPsm == 0x0Au)
        {
            const uint32_t srcLineBytes = width * 2u;
            for (uint32_t y = 0; y < height; ++y)
            {
                uint32_t srcOff = baseBytes + y * strideBytes;
                uint32_t dstOff = y * FB_WIDTH * 4u;
                const uint8_t *src = nullptr;
                if (srcOff + srcLineBytes <= PS2_GS_VRAM_SIZE && vramSrc)
                {
                    src = vramSrc + srcOff;
                }
                else if ((srcOff & PS2_RAM_MASK) + srcLineBytes <= PS2_RAM_SIZE)
                {
                    src = rdram + (srcOff & PS2_RAM_MASK);
                }
                if (!src)
                {
                    continue;
                }
                uint8_t *dst = outScratch.data() + dstOff;
                for (uint32_t x = 0; x < width; ++x)
                {
                    uint16_t p = *reinterpret_cast<const uint16_t *>(src + x * 2u);
                    uint32_t r = (p >> 10) & 31u;
                    uint32_t g = (p >> 5) & 31u;
                    uint32_t b = p & 31u;
                    dst[x * 4u + 0u] = static_cast<uint8_t>((r << 3) | (r >> 2));
                    dst[x * 4u + 1u] = static_cast<uint8_t>((g << 3) | (g >> 2));
                    dst[x * 4u + 2u] = static_cast<uint8_t>((b << 3) | (b >> 2));
                    dst[x * 4u + 3u] = 255u;
                }
            }
            return true;
        }

        return false;
    };

    auto analyzeScratch = [&](const std::vector<uint8_t> &scratchBuf,
                              uint32_t &outNonBlack,
                              uint32_t &outFirstColor,
                              uint32_t &outFirstX,
                              uint32_t &outFirstY)
    {
        outNonBlack = 0u;
        outFirstColor = 0u;
        outFirstX = 0u;
        outFirstY = 0u;

        for (uint32_t y = 0; y < height; ++y)
        {
            const uint8_t *row = scratchBuf.data() + y * FB_WIDTH * 4u;
            for (uint32_t x = 0; x < width; ++x)
            {
                const uint8_t r = row[x * 4u + 0u];
                const uint8_t g = row[x * 4u + 1u];
                const uint8_t b = row[x * 4u + 2u];
                if (r != 0u || g != 0u || b != 0u)
                {
                    ++outNonBlack;
                    if (outFirstColor == 0u)
                    {
                        outFirstColor = static_cast<uint32_t>(r) |
                                        (static_cast<uint32_t>(g) << 8) |
                                        (static_cast<uint32_t>(b) << 16);
                        outFirstX = x;
                        outFirstY = y;
                    }
                }
            }
        }
    };

    auto countLinearPageNonBlack = [&](uint32_t probeFbp) -> uint32_t
    {
        if (!vramSrc)
        {
            return 0u;
        }
        const uint32_t probeBaseBytes = probeFbp * 8192u;
        const uint32_t probeStrideBytes = 10u * 64u * 4u;
        uint32_t count = 0u;
        for (uint32_t py = 0; py < height; ++py)
        {
            const uint32_t srcOff = probeBaseBytes + py * probeStrideBytes;
            if (srcOff + width * 4u > PS2_GS_VRAM_SIZE)
            {
                break;
            }
            const uint8_t *row = vramSrc + srcOff;
            for (uint32_t px = 0; px < width; ++px)
            {
                const uint8_t r = row[px * 4u + 0u];
                const uint8_t g = row[px * 4u + 1u];
                const uint8_t b = row[px * 4u + 2u];
                if (r != 0u || g != 0u || b != 0u)
                {
                    ++count;
                }
            }
        }
        return count;
    };

    std::vector<uint8_t> scratch;
    if (!fillScratchFromFrame(fbp, fbw, psm, scratch))
    {
        rt->gs().unlockDisplaySnapshot();
        Image blank = GenImageColor(FB_WIDTH, FB_HEIGHT, MAGENTA);
        UpdateTexture(tex, blank.data);
        UnloadImage(blank);
        return;
    }

    uint32_t selectedFbp = fbp;
    uint32_t selectedFbw = fbw;
    uint32_t selectedPsm = psm;
    uint32_t nonBlack = 0u;
    uint32_t firstColor = 0u;
    uint32_t firstX = 0u;
    uint32_t firstY = 0u;
    analyzeScratch(scratch, nonBlack, firstColor, firstX, firstY);

    int fallbackContext = -1;
    const bool allowFallbackPresentation = (fbp == 0u);
    if (allowFallbackPresentation && nonBlack == 0u)
    {
        for (int contextIndex = 0; contextIndex < 2; ++contextIndex)
        {
            const GSFrameReg &candidate = rt->gs().getContextFrame(contextIndex);
            if (candidate.fbp == selectedFbp &&
                candidate.fbw == selectedFbw &&
                candidate.psm == selectedPsm)
            {
                continue;
            }

            std::vector<uint8_t> candidateScratch;
            if (!fillScratchFromFrame(candidate.fbp, candidate.fbw, candidate.psm, candidateScratch))
            {
                continue;
            }

            uint32_t candidateNonBlack = 0u;
            uint32_t candidateFirstColor = 0u;
            uint32_t candidateFirstX = 0u;
            uint32_t candidateFirstY = 0u;
            analyzeScratch(candidateScratch, candidateNonBlack, candidateFirstColor, candidateFirstX, candidateFirstY);
            if (candidateNonBlack == 0u)
            {
                continue;
            }

            scratch.swap(candidateScratch);
            selectedFbp = candidate.fbp;
            selectedFbw = candidate.fbw;
            selectedPsm = candidate.psm;
            nonBlack = candidateNonBlack;
            firstColor = candidateFirstColor;
            firstX = candidateFirstX;
            firstY = candidateFirstY;
            fallbackContext = contextIndex;
            break;
        }
    }

    rt->gs().unlockDisplaySnapshot();

    static uint32_t s_uploadDebugCount = 0u;
    static uint32_t s_lastLoggedFbp = std::numeric_limits<uint32_t>::max();
    static uint32_t s_lastLoggedNonBlack = std::numeric_limits<uint32_t>::max();
    const bool shouldProbe = (s_uploadDebugCount < 96u) || (fbp != s_lastLoggedFbp);
    if (shouldProbe || fallbackContext >= 0)
    {
        if (s_uploadDebugCount < 96u || selectedFbp != s_lastLoggedFbp || nonBlack != s_lastLoggedNonBlack || fallbackContext >= 0)
        {
            const uint32_t page0NonBlack = countLinearPageNonBlack(0u);
            const uint32_t page150NonBlack = countLinearPageNonBlack(150u);
            std::cout << "[frame:upload] idx=" << s_uploadDebugCount
                      << " fbp=" << selectedFbp
                      << " fbw=" << selectedFbw
                      << " psm=0x" << std::hex << selectedPsm << std::dec
                      << " size=" << width << "x" << height
                      << " nonBlack=" << nonBlack
                      << " page0=" << page0NonBlack
                      << " page150=" << page150NonBlack
                      << " allowFallback=" << static_cast<uint32_t>(allowFallbackPresentation ? 1u : 0u);
            if (fallbackContext >= 0)
            {
                std::cout << " displayFbp=" << fbp
                          << " fallbackCtx=" << fallbackContext;
            }
            if (firstColor != 0u)
            {
                std::cout << " first=(" << firstX << "," << firstY << ")"
                          << " rgb=0x" << std::hex << firstColor << std::dec;
            }
            std::cout << std::endl;
        }
        s_lastLoggedFbp = selectedFbp;
        s_lastLoggedNonBlack = nonBlack;
        ++s_uploadDebugCount;
    }

    UpdateTexture(tex, scratch.data());
}

PS2Runtime::PS2Runtime()
{
    std::memset(&m_cpuContext, 0, sizeof(m_cpuContext));

    // R0 is always zero in MIPS
    m_cpuContext.r[0] = _mm_set1_epi32(0);

    // Stack pointer (SP) and global pointer (GP) will be set by the loaded ELF

    m_functionTable.clear();

    m_loadedModules.clear();
    m_guestHeapBlocks.clear();
    m_guestHeapBase = kGuestHeapDefaultBase;
    m_guestHeapEnd = kGuestHeapDefaultBase;
    m_guestHeapLimit = std::min(kGuestHeapHardLimit, PS2_RAM_SIZE);
    m_guestHeapSuggestedBase = kGuestHeapDefaultBase;
    m_guestHeapConfigured = false;
    m_asyncCallbackStackFloor = std::min(kGuestHeapHardLimit, PS2_RAM_SIZE);
    m_asyncCallbackStackTop = PS2_RAM_SIZE;
}

PS2Runtime::~PS2Runtime()
{
    requestStop();
    ps2_syscalls::detachAllGuestHostThreads();
    if (IsWindowReady())
    {
        CloseWindow();
    }

    m_loadedModules.clear();

    m_functionTable.clear();
}

bool PS2Runtime::initialize(const char *title)
{
    if (!m_memory.initialize())
    {
        std::cerr << "Failed to initialize PS2 memory" << std::endl;
        return false;
    }

    m_gs.init(m_memory.getGSVRAM(), static_cast<uint32_t>(PS2_GS_VRAM_SIZE), &m_memory.gs());
    m_gs.reset();
    m_gifArbiter.setProcessPacketFn([this](const uint8_t *data, uint32_t size)
                                    { m_gs.processGIFPacket(data, size); });
    m_memory.setGifArbiter(&m_gifArbiter);
    m_memory.setVu1MscalCallback([this](uint32_t startPC, uint32_t itop)
                                 { m_vu1.execute(m_memory.getVU1Code(), PS2_VU1_CODE_SIZE,
                                                 m_memory.getVU1Data(), PS2_VU1_DATA_SIZE,
                                                 m_gs, &m_memory, startPC, itop, 65536); });
    m_memory.setVu1MscntCallback([this](uint32_t itop)
                                 { m_vu1.resume(m_memory.getVU1Code(), PS2_VU1_CODE_SIZE,
                                                m_memory.getVU1Data(), PS2_VU1_DATA_SIZE,
                                                m_gs, &m_memory, itop, 65536); });

    m_iop.init(m_memory.getRDRAM());
    m_iop.reset();

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(FB_WIDTH, FB_HEIGHT, title);
    InitAudioDevice();
    m_audioBackend.setAudioReady(IsAudioDeviceReady());
    SetTargetFPS(60);

    m_vu1.reset();

    return true;
}

bool PS2Runtime::loadELF(const std::string &elfPath)
{
    configureIoPathsFromElf(elfPath);

    std::ifstream file(elfPath, std::ios::binary);
    if (!file)
    {
        std::cerr << "Failed to open ELF file: " << elfPath << std::endl;
        return false;
    }

    file.seekg(0, std::ios::end);
    const std::streamoff fileSize = file.tellg();
    if (fileSize < static_cast<std::streamoff>(sizeof(ElfHeader)))
    {
        std::cerr << "ELF file is too small: " << elfPath << std::endl;
        return false;
    }
    file.seekg(0, std::ios::beg);

    ElfHeader header{};
    if (!file.read(reinterpret_cast<char *>(&header), sizeof(header)))
    {
        std::cerr << "Failed to read ELF header from: " << elfPath << std::endl;
        return false;
    }

    if (header.magic != ELF_MAGIC)
    {
        std::cerr << "Invalid ELF magic number" << std::endl;
        return false;
    }

    if (header.elf_class != 1u || header.endianness != 1u)
    {
        std::cerr << "Unsupported ELF format (expected 32-bit little-endian)." << std::endl;
        return false;
    }

    if (header.machine != EM_MIPS || header.type != ET_EXEC)
    {
        std::cerr << "Not a MIPS executable ELF file" << std::endl;
        return false;
    }

    if (header.phnum != 0u && header.phentsize < sizeof(ProgramHeader))
    {
        std::cerr << "Unsupported ELF program-header entry size: " << header.phentsize << std::endl;
        return false;
    }

    const uint64_t programHeaderTableEnd =
        static_cast<uint64_t>(header.phoff) +
        static_cast<uint64_t>(header.phnum) * static_cast<uint64_t>(header.phentsize);
    if (programHeaderTableEnd > static_cast<uint64_t>(fileSize))
    {
        std::cerr << "ELF program-header table is out of range." << std::endl;
        return false;
    }

    m_cpuContext.pc = header.entry;
    m_debugPc.store(m_cpuContext.pc, std::memory_order_relaxed);

    uint32_t maxLoadedRdramEnd = kGuestHeapDefaultBase;
    uint32_t moduleBase = std::numeric_limits<uint32_t>::max();
    uint32_t moduleEnd = 0u;
    bool loadedAnySegment = false;

    for (uint16_t i = 0; i < header.phnum; i++)
    {
        const uint64_t phOffset =
            static_cast<uint64_t>(header.phoff) +
            static_cast<uint64_t>(i) * static_cast<uint64_t>(header.phentsize);
        if (phOffset + sizeof(ProgramHeader) > static_cast<uint64_t>(fileSize))
        {
            std::cerr << "ELF program header " << i << " is out of range." << std::endl;
            return false;
        }

        ProgramHeader ph{};
        file.seekg(static_cast<std::streamoff>(phOffset), std::ios::beg);
        if (!file.read(reinterpret_cast<char *>(&ph), sizeof(ph)))
        {
            std::cerr << "Failed to read ELF program header " << i << std::endl;
            return false;
        }

        if (ph.type != PT_LOAD || ph.memsz == 0u)
        {
            continue;
        }

        if (ph.filesz > ph.memsz)
        {
            std::cerr << "ELF segment " << i << " has filesz > memsz." << std::endl;
            return false;
        }

        const uint64_t segmentFileEnd = static_cast<uint64_t>(ph.offset) + static_cast<uint64_t>(ph.filesz);
        if (segmentFileEnd > static_cast<uint64_t>(fileSize))
        {
            std::cerr << "ELF segment " << i << " exceeds file bounds." << std::endl;
            return false;
        }

        const bool scratch =
            ph.vaddr >= PS2_SCRATCHPAD_BASE &&
            ph.vaddr < (PS2_SCRATCHPAD_BASE + PS2_SCRATCHPAD_SIZE);

        uint32_t physAddr = 0u;
        try
        {
            physAddr = m_memory.translateAddress(ph.vaddr);
        }
        catch (const std::exception &e)
        {
            std::cerr << "Failed to translate ELF segment " << i
                      << " virtual address 0x" << std::hex << ph.vaddr
                      << std::dec << ": " << e.what() << std::endl;
            return false;
        }
        const uint64_t regionSize = scratch ? static_cast<uint64_t>(PS2_SCRATCHPAD_SIZE)
                                            : static_cast<uint64_t>(PS2_RAM_SIZE);
        const uint64_t segmentMemEnd = static_cast<uint64_t>(physAddr) + static_cast<uint64_t>(ph.memsz);
        if (segmentMemEnd > regionSize)
        {
            std::cerr << "ELF segment " << i << " exceeds "
                      << (scratch ? "scratchpad" : "RDRAM")
                      << " bounds (vaddr=0x" << std::hex << ph.vaddr
                      << " memsz=0x" << ph.memsz << std::dec << ")." << std::endl;
            return false;
        }

        uint8_t *destBase = scratch ? m_memory.getScratchpad() : m_memory.getRDRAM();
        if (!destBase)
        {
            std::cerr << "ELF segment " << i << " has no destination memory backing." << std::endl;
            return false;
        }

        uint8_t *dest = destBase + physAddr;
        if (ph.filesz > 0u)
        {
            file.seekg(static_cast<std::streamoff>(ph.offset), std::ios::beg);
            if (!file.read(reinterpret_cast<char *>(dest), ph.filesz))
            {
                std::cerr << "Failed to read ELF segment " << i << " payload." << std::endl;
                return false;
            }
        }

        if (ph.memsz > ph.filesz)
        {
            std::memset(dest + ph.filesz, 0, ph.memsz - ph.filesz);
        }

        std::cout << "Loading segment: 0x" << std::hex << ph.vaddr
                  << " - 0x" << (static_cast<uint64_t>(ph.vaddr) + static_cast<uint64_t>(ph.memsz))
                  << " (filesz: 0x" << ph.filesz
                  << ", memsz: 0x" << ph.memsz << ")"
                  << std::dec << std::endl;

        if (!scratch)
        {
            maxLoadedRdramEnd = std::max(maxLoadedRdramEnd, static_cast<uint32_t>(segmentMemEnd));
        }

        if (ph.flags & 0x1u) // PF_X
        {
            const uint64_t execEnd = static_cast<uint64_t>(ph.vaddr) + static_cast<uint64_t>(ph.memsz);
            if (execEnd <= std::numeric_limits<uint32_t>::max())
            {
                m_memory.registerCodeRegion(ph.vaddr, static_cast<uint32_t>(execEnd));
            }
        }

        loadedAnySegment = true;
        moduleBase = std::min(moduleBase, ph.vaddr);
        const uint64_t segmentVirtualEnd = static_cast<uint64_t>(ph.vaddr) + static_cast<uint64_t>(ph.memsz);
        const uint32_t clampedVirtualEnd =
            (segmentVirtualEnd > std::numeric_limits<uint32_t>::max())
                ? std::numeric_limits<uint32_t>::max()
                : static_cast<uint32_t>(segmentVirtualEnd);
        moduleEnd = std::max(moduleEnd, clampedVirtualEnd);
    }

    if (!loadedAnySegment)
    {
        std::cerr << "ELF contains no loadable PT_LOAD segments." << std::endl;
        return false;
    }

    if (maxLoadedRdramEnd > PS2_RAM_SIZE)
    {
        maxLoadedRdramEnd = PS2_RAM_SIZE;
    }

    const uint32_t paddedEnd = (maxLoadedRdramEnd > (PS2_RAM_SIZE - kGuestHeapSafetyPad))
                                   ? PS2_RAM_SIZE
                                   : (maxLoadedRdramEnd + kGuestHeapSafetyPad);
    const uint32_t suggestedHeapBase = alignGuestHeapValue(paddedEnd, kGuestHeapDefaultAlignment);
    {
        std::lock_guard<std::mutex> lock(m_guestHeapMutex);
        if (!m_guestHeapConfigured)
        {
            const uint32_t hardLimit = std::min(kGuestHeapHardLimit, PS2_RAM_SIZE);
            m_guestHeapSuggestedBase = std::min(suggestedHeapBase, hardLimit);
            m_guestHeapBase = m_guestHeapSuggestedBase;
            m_guestHeapEnd = m_guestHeapSuggestedBase;
            m_guestHeapLimit = hardLimit;
        }
    }
    {
        std::lock_guard<std::mutex> lock(m_asyncCallbackStackMutex);
        const uint32_t hardLimit = std::min(kGuestHeapHardLimit, PS2_RAM_SIZE);
        m_asyncCallbackStackFloor = std::min(std::max(hardLimit, suggestedHeapBase), PS2_RAM_SIZE);
        m_asyncCallbackStackTop = PS2_RAM_SIZE;
    }

    LoadedModule module;
    module.name = elfPath.substr(elfPath.find_last_of("/\\") + 1);
    module.baseAddress = (moduleBase == std::numeric_limits<uint32_t>::max()) ? 0x00100000u : moduleBase;
    module.size = (moduleEnd > module.baseAddress) ? static_cast<size_t>(moduleEnd - module.baseAddress) : 0u;
    module.active = true;

    m_loadedModules.push_back(module);

    ps2_game_overrides::applyMatching(*this, elfPath, m_cpuContext.pc);

    std::cout << "ELF file loaded successfully. Entry point: 0x" << std::hex << m_cpuContext.pc << std::dec << std::endl;
    return true;
}

const PS2Runtime::IoPaths &PS2Runtime::getIoPaths()
{
    return runtimeIoPaths();
}

void PS2Runtime::setIoPaths(const IoPaths &paths)
{
    IoPaths normalized = paths;
    normalized.elfPath = normalizeAbsolutePath(normalized.elfPath);
    normalized.elfDirectory = normalizeAbsolutePath(normalized.elfDirectory);
    normalized.hostRoot = normalizeAbsolutePath(normalized.hostRoot);
    normalized.cdRoot = normalizeAbsolutePath(normalized.cdRoot);
    normalized.mcRoot = normalizeAbsolutePath(normalized.mcRoot);
    normalized.cdImage = normalizeAbsolutePath(normalized.cdImage);

    if (normalized.elfDirectory.empty() && !normalized.elfPath.empty())
    {
        normalized.elfDirectory = normalized.elfPath.parent_path();
    }

    if (normalized.hostRoot.empty())
    {
        normalized.hostRoot = normalized.elfDirectory;
    }
    if (normalized.cdRoot.empty())
    {
        normalized.cdRoot = normalized.elfDirectory;
    }
    if (normalized.mcRoot.empty())
    {
        normalized.mcRoot = normalized.elfDirectory / "mc0";
    }

    runtimeIoPaths() = normalized;
}

void PS2Runtime::configureIoPathsFromElf(const std::string &elfPath)
{
    IoPaths paths = runtimeIoPaths();
    paths.elfPath = normalizeAbsolutePath(std::filesystem::path(elfPath));
    if (!paths.elfPath.empty())
    {
        paths.elfDirectory = paths.elfPath.parent_path();
    }

    if (!paths.elfDirectory.empty())
    {
        paths.hostRoot = paths.elfDirectory;
        paths.cdRoot = paths.elfDirectory;
        paths.mcRoot = paths.elfDirectory / "mc0";
    }

    setIoPaths(paths);
}

void PS2Runtime::registerFunction(uint32_t address, RecompiledFunction func)
{
    m_functionTable[address] = func;
}

bool PS2Runtime::hasFunction(uint32_t address) const
{
    auto it = m_functionTable.find(address);
    if (it != m_functionTable.end())
    {
        return true;
    }

    if (address == 0x2913E4u)
    {
        auto parent = m_functionTable.find(0x2913B0u);
        return parent != m_functionTable.end();
    }

    return false;
}

PS2Runtime::RecompiledFunction PS2Runtime::lookupFunction(uint32_t address)
{
    pushDispatchPc(address);

    auto it = m_functionTable.find(address);
    if (it != m_functionTable.end())
    {
        return it->second;
    }

    if (address == 0x2913E4u)
    {
        auto parent = m_functionTable.find(0x2913B0u);
        if (parent != m_functionTable.end())
        {
            return parent->second;
        }
    }

    // Enderecos baixos (< 0x00100000) sao tipicamente vetores de syscall do
    // BIOS PS2 (ResetEE em 0x80000, SetGsCrt em 0x80004, etc.) ou ponteiros
    // de vtable apontando para stubs do kernel. Se chamarmos a recuperacao
    // padrao para esses, ela tentaria pular para o RA, que cai no MEIO da
    // funcao chamadora (mid-function PC), travando o dispatcher num loop de
    // "function not found". Em vez disso, retornamos um stub leve que apenas
    // zera $v0 e devolve o controle ao chamador, deixando a propria funcao
    // recompilada continuar normalmente apos o jalr.
    if (address < 0x00100000u)
    {
        // PS2 syscall vectors comecam em 0x80000 com 4 bytes cada.
        // syscall #1 = 0x80004, #2 = 0x80008, ...
        const uint32_t syscallId = (address >= 0x80000u) ? ((address - 0x80000u) >> 2) : 0u;
        ps2_missing_report::recordSyscall(syscallId, nullptr);

        static std::mutex s_biosWarnMutex;
        static std::unordered_set<uint32_t> s_biosWarnedAddrs;
        bool firstTime = false;
        {
            std::lock_guard<std::mutex> lock(s_biosWarnMutex);
            firstTime = s_biosWarnedAddrs.insert(address).second;
        }
        if (firstTime)
        {
            std::cerr << "[lookup:bios-stub] addr=0x" << std::hex << address
                      << " syscallId=" << std::dec << syscallId
                      << " (assumindo vetor BIOS PS2; retornando v0=0)"
                      << std::endl;
        }

        static RecompiledFunction biosStub = [](uint8_t * /*rdram*/, R5900Context *ctx, PS2Runtime * /*runtime*/)
        {
            if (ctx)
            {
                // v0 = 0 (return value padrao para syscalls nao implementados)
                ctx->r[2] = _mm_setzero_si128();
                // NAO mexer em ctx->pc - o caller recompilado faz
                // "if (ctx->pc == __entryPc) ctx->pc = RA;" automaticamente,
                // restaurando o fluxo normal apos o jalr.
            }
        };
        return biosStub;
    }

    std::cerr << "Warning: Function at address 0x" << std::hex << address << std::dec << " not found" << std::endl;

    // Registra no relatório consolidado de "missing".
    ps2_missing_report::recordFunctionAddr(address, nullptr);

    static RecompiledFunction defaultFunction = [](uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t ra = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0)) : 0u;
        const uint32_t sp = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0)) : 0u;
        const uint32_t gp = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0)) : 0u;
        const uint32_t a0 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0)) : 0u;
        const uint32_t a1 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0)) : 0u;
        const uint32_t v0 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0)) : 0u;
        const uint32_t v1 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[3], 0)) : 0u;

        if (ctx && runtime)
        {
            thread_local uint32_t s_recoverCount = 0u;
            const uint32_t pc = ctx->pc;
            const bool hasPcFunction = runtime->hasFunction(pc);

            // Loga cada par (badPc -> recoveryPc) UMA vez globalmente.
            // Sem isso, o "primeiro bad-pc" so aparece uma vez por thread,
            // mascarando loops onde MUITOS endereços diferentes caem aqui.
            static std::mutex s_badPcMutex;
            static std::unordered_set<uint32_t> s_loggedBadPcs;
            auto shouldLogBadPc = [&](uint32_t badPc) -> bool {
                std::lock_guard<std::mutex> lock(s_badPcMutex);
                return s_loggedBadPcs.insert(badPc).second;
            };

            if (!hasPcFunction && s_recoverCount < 8192u)
            {
                if (shouldLogBadPc(pc))
                {
                    std::ostringstream stackDump;
                    if (rdram)
                    {
                        stackDump << " [stack]";
                        for (uint32_t off = 0u; off < 0x40u; off += 4u)
                        {
                            const uint32_t slot = readGuestU32Wrapped(rdram, sp + off);
                            stackDump << " +" << std::hex << off << "=0x" << slot;
                        }
                    }
                    std::cerr << "[dispatch:first-bad-pc] bad=0x" << std::hex << pc
                              << " ra=0x" << ra
                              << " sp=0x" << sp
                              << " gp=0x" << gp
                              << " v0=0x" << v0
                              << " v1=0x" << v1
                              << " a0=0x" << a0
                              << " a1=0x" << a1
                              << " trace=" << formatDispatchHistory()
                              << stackDump.str()
                              << std::dec << std::endl;
                }

                uint32_t recoveryPc = 0u;
                if (ra != 0u && runtime->hasFunction(ra))
                {
                    recoveryPc = ra;
                }

                if (recoveryPc == 0u)
                {
                    recoveryPc = selectStackRecoveryPc(rdram, ctx, runtime);
                }

                if (recoveryPc == 0u)
                {
                    recoveryPc = selectDispatchRecoveryPc(runtime);
                }

                if (recoveryPc != 0u && recoveryPc != pc)
                {
                    if (s_recoverCount < 256u)
                    {
                        std::cerr << "[dispatch:recover-pc] bad=0x" << std::hex << pc
                                  << " ra=0x" << ra
                                  << " fallback=0x" << recoveryPc
                                  << " sp=0x" << sp
                                  << std::dec << std::endl;
                    }
                    ++s_recoverCount;
                    ctx->pc = recoveryPc;
                    return;
                }
            }

            if (hasPcFunction)
            {
                s_recoverCount = 0u;
            }
            else if (pc < 0x00100000u && ra == pc && s_recoverCount < 4096u)
            {
                uint32_t recoveryPc = selectStackRecoveryPc(rdram, ctx, runtime);
                if (recoveryPc == 0u)
                {
                    recoveryPc = selectDispatchRecoveryPc(runtime);
                }
                if (recoveryPc != 0u && recoveryPc != pc)
                {
                    if (s_recoverCount < 128u)
                    {
                        std::cerr << "[dispatch:recover-low-pc] bad=0x" << std::hex << pc
                                  << " ra=0x" << ra
                                  << " fallback=0x" << recoveryPc
                                  << " sp=0x" << sp
                                  << std::dec << std::endl;
                    }
                    ++s_recoverCount;
                    ctx->pc = recoveryPc;
                    return;
                }
            }
        }

        std::ostringstream oss;
        oss << "Error: Called unimplemented function at address 0x" << std::hex << (ctx ? ctx->pc : 0u)
            << " ra=0x" << ra
            << " sp=0x" << sp
            << " gp=0x" << gp
            << " a0=0x" << a0
            << " hostTid=" << std::this_thread::get_id()
            << " pcTrace=" << formatDispatchHistory()
            << std::dec;

        static std::mutex s_defaultFnLogMutex;
        {
            std::lock_guard<std::mutex> lock(s_defaultFnLogMutex);
            std::cerr << oss.str() << std::endl;
            // Dumpa info do detector de ciclo se ele estava acumulando padrao.
            // Util quando o orcamento de recovery (8192) explode antes do
            // threshold periodico (PS2_LOOP_REPORT_AFTER) disparar.
            dumpLoopDetectorState("unimpl-fn", runtime, rdram, sp);
        }

        runtime->requestStop();
    };

    return defaultFunction;
}

void PS2Runtime::SignalException(R5900Context *ctx, PS2Exception exception)
{
    if (exception == EXCEPTION_INTEGER_OVERFLOW)
    {
        HandleIntegerOverflow(ctx);
        return;
    }

    raiseCop0Exception(ctx, static_cast<uint32_t>(exception),
                       exception == EXCEPTION_TLB_REFILL);
}

void PS2Runtime::executeVU0Microprogram(uint8_t *rdram, R5900Context *ctx, uint32_t address)
{
    static std::unordered_map<uint32_t, int> seen;
    int &count = seen[address];
    if (count < 3)
    {
        std::cout << "[VU0] microprogram @0x" << std::hex << address
                  << " pc=0x" << ctx->pc
                  << " ra=0x" << static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0))
                  << std::dec << std::endl;
    }
    ++count;

    // Seed status so dependent code sees success.
    ctx->vu0_clip_flags = 0;
    ctx->vu0_clip_flags2 = 0;
    ctx->vu0_mac_flags = 0;
    ctx->vu0_status = 0;
    ctx->vu0_q = 1.0f;
}

void PS2Runtime::vu0StartMicroProgram(uint8_t *rdram, R5900Context *ctx, uint32_t address)
{
    // VCALLMS and VCALLMSR both route here.
    executeVU0Microprogram(rdram, ctx, address);
}

void PS2Runtime::handleSyscall(uint8_t *rdram, R5900Context *ctx)
{
    handleSyscall(rdram, ctx, 0);
}

void PS2Runtime::handleSyscall(uint8_t *rdram, R5900Context *ctx, uint32_t encodedSyscallId)
{
    if (ctx->in_delay_slot)
    {
        throw std::runtime_error("Attempted to execute a syscall inside a branch delay slot! "
                                 "This breaks the atomic basic block model and is structurally unsupported by the emulator.");
    }

    // Try immediate first
    if (encodedSyscallId != 0 && ps2_syscalls::dispatchNumericSyscall(encodedSyscallId, rdram, ctx, this))
    {
        return;
    }

    // Try $v1 (standard)
    const uint32_t syscallFromV1 = getRegU32(ctx, 3); // $v1
    if (ps2_syscalls::dispatchNumericSyscall(syscallFromV1, rdram, ctx, this))
    {
        return;
    }

    // Try $v0 (negative syscalls)
    const uint32_t syscallFromV0 = getRegU32(ctx, 2); // $v0 (some ABIs)
    if (syscallFromV0 != syscallFromV1 &&
        ps2_syscalls::dispatchNumericSyscall(syscallFromV0, rdram, ctx, this))
    {
        return;
    }

    // God help you
    ps2_syscalls::TODO(rdram, ctx, this, encodedSyscallId);
}

void PS2Runtime::handleBreak(uint8_t *rdram, R5900Context *ctx)
{
    raiseCop0Exception(ctx, EXCEPTION_BREAKPOINT);
}

void PS2Runtime::handleTrap(uint8_t *rdram, R5900Context *ctx)
{
    raiseCop0Exception(ctx, EXCEPTION_TRAP);
}

void PS2Runtime::handleTLBR(uint8_t *rdram, R5900Context *ctx)
{
    uint32_t vpn = 0;
    uint32_t pfn = 0;
    uint32_t mask = 0;
    bool valid = false;

    const uint32_t index = ctx->cop0_index & 0x3Fu;
    if (!m_memory.tlbRead(index, vpn, pfn, mask, valid))
    {
        raiseCop0Exception(ctx, EXCEPTION_RESERVED_INSTRUCTION);
        return;
    }

    // Preserve low ASID bits in EntryHi.
    ctx->cop0_entryhi = (ctx->cop0_entryhi & 0x00000FFFu) | (vpn & 0xFFFFF000u);
    ctx->cop0_entrylo0 = (ctx->cop0_entrylo0 & ~0x03FFFFC2u) |
                         ((pfn & 0x000FFFFFu) << 6) |
                         (valid ? 0x2u : 0u);
    ctx->cop0_pagemask = mask & 0x01FFE000u;
}

void PS2Runtime::handleTLBWI(uint8_t *rdram, R5900Context *ctx)
{
    const uint32_t index = ctx->cop0_index & 0x3Fu;
    const uint32_t vpn = ctx->cop0_entryhi & 0xFFFFF000u;
    const uint32_t pfn = (ctx->cop0_entrylo0 >> 6) & 0x000FFFFFu;
    const uint32_t mask = ctx->cop0_pagemask & 0x01FFE000u;
    const bool valid = (ctx->cop0_entrylo0 & 0x2u) != 0u;

    if (!m_memory.tlbWrite(index, vpn, pfn, mask, valid))
    {
        raiseCop0Exception(ctx, EXCEPTION_RESERVED_INSTRUCTION);
    }
}

void PS2Runtime::handleTLBWR(uint8_t *rdram, R5900Context *ctx)
{
    const uint32_t entryCount = static_cast<uint32_t>(m_memory.tlbEntryCount());
    if (entryCount == 0)
    {
        raiseCop0Exception(ctx, EXCEPTION_RESERVED_INSTRUCTION);
        return;
    }

    const uint32_t wired = std::min(ctx->cop0_wired, entryCount - 1);
    uint32_t random = ctx->cop0_random % entryCount;
    if (random < wired)
    {
        random = wired;
    }

    const uint32_t vpn = ctx->cop0_entryhi & 0xFFFFF000u;
    const uint32_t pfn = (ctx->cop0_entrylo0 >> 6) & 0x000FFFFFu;
    const uint32_t mask = ctx->cop0_pagemask & 0x01FFE000u;
    const bool valid = (ctx->cop0_entrylo0 & 0x2u) != 0u;

    if (!m_memory.tlbWrite(random, vpn, pfn, mask, valid))
    {
        raiseCop0Exception(ctx, EXCEPTION_RESERVED_INSTRUCTION);
        return;
    }

    // Keep COP0 bookkeeping in sync with the selected slot.
    ctx->cop0_index = (ctx->cop0_index & ~0x3Fu) | (random & 0x3Fu);
    ctx->cop0_random = (random <= wired) ? (entryCount - 1) : (random - 1);
}

void PS2Runtime::handleTLBP(uint8_t *rdram, R5900Context *ctx)
{
    const int32_t index = m_memory.tlbProbe(ctx->cop0_entryhi & 0xFFFFF000u);
    if (index >= 0)
    {
        ctx->cop0_index = (ctx->cop0_index & ~0x8000003Fu) |
                          (static_cast<uint32_t>(index) & 0x3Fu);
    }
    else
    {
        // MIPS sets probe failure bit (P) in Index[31].
        ctx->cop0_index |= 0x80000000u;
    }
}

void PS2Runtime::clearLLBit(R5900Context *ctx)
{
    // LL/SC reservation is tracked separately from COP0 Status.
    ctx->llbit = 0;
    ctx->lladdr = 0;
}

uint32_t PS2Runtime::alignGuestHeapValue(uint32_t value, uint32_t alignment)
{
    if (alignment == 0)
    {
        return value;
    }

    const uint32_t mask = alignment - 1u;
    if (value > (std::numeric_limits<uint32_t>::max() - mask))
    {
        return std::numeric_limits<uint32_t>::max();
    }
    return (value + mask) & ~mask;
}

bool PS2Runtime::isGuestHeapAlignmentValid(uint32_t alignment)
{
    return alignment != 0u && (alignment & (alignment - 1u)) == 0u;
}

uint32_t PS2Runtime::normalizeGuestHeapAlignment(uint32_t alignment)
{
    if (!isGuestHeapAlignmentValid(alignment))
    {
        return kGuestHeapDefaultAlignment;
    }
    return std::max(alignment, kGuestHeapDefaultAlignment);
}

uint32_t PS2Runtime::clampGuestHeapBase(uint32_t guestBase) const
{
    uint32_t normalized = guestBase;
    if (normalized >= PS2_RAM_SIZE)
    {
        normalized &= PS2_RAM_MASK;
    }
    const uint32_t hardLimit = std::min(kGuestHeapHardLimit, PS2_RAM_SIZE);
    return std::min(normalized, hardLimit);
}

uint32_t PS2Runtime::clampGuestHeapLimit(uint32_t guestLimit) const
{
    const uint32_t hardLimit = std::min(kGuestHeapHardLimit, PS2_RAM_SIZE);
    if (guestLimit == 0u || guestLimit > hardLimit)
    {
        return hardLimit;
    }
    return guestLimit;
}

void PS2Runtime::resetGuestHeapLocked(uint32_t guestBase, uint32_t guestLimit)
{
    uint32_t base = alignGuestHeapValue(clampGuestHeapBase(guestBase), kGuestHeapDefaultAlignment);
    uint32_t limit = clampGuestHeapLimit(guestLimit);
    if (base == 0u)
    {
        const uint32_t fallbackBase = (m_guestHeapSuggestedBase != 0u) ? m_guestHeapSuggestedBase : kGuestHeapDefaultBase;
        base = alignGuestHeapValue(clampGuestHeapBase(fallbackBase), kGuestHeapDefaultAlignment);
    }

    if (limit <= base)
    {
        base = alignGuestHeapValue(clampGuestHeapBase(m_guestHeapSuggestedBase), kGuestHeapDefaultAlignment);
        limit = clampGuestHeapLimit(0u);
    }

    if (limit <= base)
    {
        base = 0u;
        limit = 0u;
    }

    m_guestHeapBlocks.clear();
    if (limit > base)
    {
        m_guestHeapBlocks.push_back({base, limit - base, true});
    }

    m_guestHeapBase = base;
    m_guestHeapEnd = base;
    m_guestHeapLimit = limit;
    m_guestHeapConfigured = true;
}

void PS2Runtime::ensureGuestHeapInitializedLocked()
{
    if (m_guestHeapConfigured)
    {
        return;
    }

    const uint32_t suggested = (m_guestHeapSuggestedBase == 0u) ? kGuestHeapDefaultBase : m_guestHeapSuggestedBase;
    resetGuestHeapLocked(suggested, clampGuestHeapLimit(0u));
}

int32_t PS2Runtime::findGuestHeapBlockIndexLocked(uint32_t guestAddr) const
{
    const uint32_t normalizedAddr = guestAddr & PS2_RAM_MASK;
    for (size_t i = 0; i < m_guestHeapBlocks.size(); ++i)
    {
        const GuestHeapBlock &block = m_guestHeapBlocks[i];
        if (!block.free && block.addr == normalizedAddr)
        {
            return static_cast<int32_t>(i);
        }
    }
    return -1;
}

uint32_t PS2Runtime::allocateGuestBlockLocked(uint32_t size, uint32_t alignment)
{
    if (size == 0u)
    {
        return 0u;
    }

    const uint32_t normalizedAlignment = normalizeGuestHeapAlignment(alignment);
    if (size > (std::numeric_limits<uint32_t>::max() - (kGuestHeapDefaultAlignment - 1u)))
    {
        return 0u;
    }

    const uint32_t allocSize = alignGuestHeapValue(size, kGuestHeapDefaultAlignment);
    if (allocSize == 0u)
    {
        return 0u;
    }

    for (size_t i = 0; i < m_guestHeapBlocks.size(); ++i)
    {
        const GuestHeapBlock block = m_guestHeapBlocks[i];
        if (!block.free)
        {
            continue;
        }

        const uint64_t blockStart = block.addr;
        const uint64_t blockEnd = blockStart + static_cast<uint64_t>(block.size);
        const uint32_t alignedAddr = alignGuestHeapValue(block.addr, normalizedAlignment);
        if (alignedAddr < block.addr)
        {
            continue;
        }

        const uint64_t alignedStart = alignedAddr;
        if (alignedStart > blockEnd)
        {
            continue;
        }

        const uint64_t allocEnd = alignedStart + static_cast<uint64_t>(allocSize);
        if (allocEnd > blockEnd)
        {
            continue;
        }

        const uint32_t prefixSize = static_cast<uint32_t>(alignedStart - blockStart);
        const uint32_t suffixSize = static_cast<uint32_t>(blockEnd - allocEnd);

        std::vector<GuestHeapBlock> replacement;
        replacement.reserve(3);
        if (prefixSize > 0u)
        {
            replacement.push_back({block.addr, prefixSize, true});
        }
        replacement.push_back({alignedAddr, allocSize, false});
        if (suffixSize > 0u)
        {
            replacement.push_back({static_cast<uint32_t>(allocEnd), suffixSize, true});
        }

        m_guestHeapBlocks.erase(m_guestHeapBlocks.begin() + static_cast<std::ptrdiff_t>(i));
        m_guestHeapBlocks.insert(m_guestHeapBlocks.begin() + static_cast<std::ptrdiff_t>(i),
                                 replacement.begin(),
                                 replacement.end());

        m_guestHeapEnd = std::max(m_guestHeapEnd, static_cast<uint32_t>(allocEnd));
        return alignedAddr;
    }

    return 0u;
}

void PS2Runtime::coalesceGuestHeapLocked()
{
    if (m_guestHeapBlocks.empty())
    {
        return;
    }

    size_t i = 1;
    while (i < m_guestHeapBlocks.size())
    {
        GuestHeapBlock &prev = m_guestHeapBlocks[i - 1];
        GuestHeapBlock &curr = m_guestHeapBlocks[i];
        const uint64_t prevEnd = static_cast<uint64_t>(prev.addr) + static_cast<uint64_t>(prev.size);
        if (prev.free && curr.free && prevEnd == curr.addr)
        {
            prev.size += curr.size;
            m_guestHeapBlocks.erase(m_guestHeapBlocks.begin() + static_cast<std::ptrdiff_t>(i));
            continue;
        }
        ++i;
    }
}

void PS2Runtime::freeGuestBlockLocked(uint32_t guestAddr)
{
    const int32_t index = findGuestHeapBlockIndexLocked(guestAddr);
    if (index < 0)
    {
        return;
    }

    m_guestHeapBlocks[static_cast<size_t>(index)].free = true;
    coalesceGuestHeapLocked();
}

void PS2Runtime::configureGuestHeap(uint32_t guestBase, uint32_t guestLimit)
{
    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    uint32_t normalizedBase = alignGuestHeapValue(clampGuestHeapBase(guestBase), kGuestHeapDefaultAlignment);
    if (normalizedBase == 0u)
    {
        normalizedBase = (m_guestHeapSuggestedBase != 0u) ? m_guestHeapSuggestedBase : kGuestHeapDefaultBase;
    }
    m_guestHeapSuggestedBase = normalizedBase;
    resetGuestHeapLocked(normalizedBase, guestLimit);
}

uint32_t PS2Runtime::guestMalloc(uint32_t size, uint32_t alignment)
{
    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    ensureGuestHeapInitializedLocked();
    return allocateGuestBlockLocked(size, alignment);
}

uint32_t PS2Runtime::guestCalloc(uint32_t count, uint32_t size, uint32_t alignment)
{
    if (count == 0u || size == 0u)
    {
        return 0u;
    }
    if (count > (std::numeric_limits<uint32_t>::max() / size))
    {
        return 0u;
    }

    const uint32_t totalSize = count * size;
    const uint32_t guestAddr = guestMalloc(totalSize, alignment);
    if (guestAddr != 0u)
    {
        uint8_t *rdram = m_memory.getRDRAM();
        if (rdram)
        {
            uint32_t physAddr = guestAddr & PS2_RAM_MASK;
            if (physAddr + totalSize <= PS2_RAM_SIZE)
                std::memset(rdram + physAddr, 0, totalSize);
        }
    }

    return guestAddr;
}

uint32_t PS2Runtime::guestRealloc(uint32_t guestAddr, uint32_t newSize, uint32_t alignment)
{
    if (guestAddr == 0u)
    {
        return guestMalloc(newSize, alignment);
    }
    if (newSize == 0u)
    {
        guestFree(guestAddr);
        return 0u;
    }

    if (newSize > (std::numeric_limits<uint32_t>::max() - (kGuestHeapDefaultAlignment - 1u)))
    {
        return 0u;
    }

    const uint32_t normalizedAlignment = normalizeGuestHeapAlignment(alignment);
    const uint32_t requestedSize = alignGuestHeapValue(newSize, kGuestHeapDefaultAlignment);

    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    ensureGuestHeapInitializedLocked();

    const int32_t index = findGuestHeapBlockIndexLocked(guestAddr);
    if (index < 0)
    {
        return 0u;
    }

    const size_t blockIndex = static_cast<size_t>(index);
    const uint32_t oldAddr = m_guestHeapBlocks[blockIndex].addr;
    const uint32_t oldSize = m_guestHeapBlocks[blockIndex].size;

    if (requestedSize <= oldSize)
    {
        if (requestedSize < oldSize)
        {
            const uint32_t tailAddr = oldAddr + requestedSize;
            const uint32_t tailSize = oldSize - requestedSize;
            m_guestHeapBlocks[blockIndex].size = requestedSize;
            m_guestHeapBlocks.insert(m_guestHeapBlocks.begin() + static_cast<std::ptrdiff_t>(blockIndex + 1u),
                                     GuestHeapBlock{tailAddr, tailSize, true});
            coalesceGuestHeapLocked();
        }
        return oldAddr;
    }

    if (blockIndex + 1u < m_guestHeapBlocks.size())
    {
        GuestHeapBlock &next = m_guestHeapBlocks[blockIndex + 1u];
        const uint64_t blockEnd = static_cast<uint64_t>(m_guestHeapBlocks[blockIndex].addr) +
                                  static_cast<uint64_t>(m_guestHeapBlocks[blockIndex].size);
        if (next.free && blockEnd == next.addr)
        {
            const uint64_t combined = static_cast<uint64_t>(m_guestHeapBlocks[blockIndex].size) +
                                      static_cast<uint64_t>(next.size);
            if (combined >= requestedSize)
            {
                const uint32_t extraNeeded = requestedSize - m_guestHeapBlocks[blockIndex].size;
                m_guestHeapBlocks[blockIndex].size = requestedSize;
                if (next.size == extraNeeded)
                {
                    m_guestHeapBlocks.erase(m_guestHeapBlocks.begin() + static_cast<std::ptrdiff_t>(blockIndex + 1u));
                }
                else
                {
                    next.addr += extraNeeded;
                    next.size -= extraNeeded;
                }
                m_guestHeapEnd = std::max(m_guestHeapEnd, oldAddr + requestedSize);
                return oldAddr;
            }
        }
    }

    const uint32_t newAddr = allocateGuestBlockLocked(newSize, normalizedAlignment);
    if (newAddr == 0u)
    {
        return 0u;
    }

    uint8_t *rdram = m_memory.getRDRAM();
    if (rdram)
    {
        const uint32_t copyBytes = std::min(oldSize, newSize);
        uint32_t dstPhys = newAddr & PS2_RAM_MASK;
        uint32_t srcPhys = oldAddr & PS2_RAM_MASK;
        if (dstPhys + copyBytes <= PS2_RAM_SIZE && srcPhys + copyBytes <= PS2_RAM_SIZE)
            std::memmove(rdram + dstPhys, rdram + srcPhys, copyBytes);
    }

    freeGuestBlockLocked(oldAddr);
    return newAddr;
}

void PS2Runtime::guestFree(uint32_t guestAddr)
{
    if (guestAddr == 0u)
    {
        return;
    }

    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    ensureGuestHeapInitializedLocked();
    freeGuestBlockLocked(guestAddr);
}

uint32_t PS2Runtime::guestHeapBase() const
{
    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    return m_guestHeapConfigured ? m_guestHeapBase : m_guestHeapSuggestedBase;
}

uint32_t PS2Runtime::guestHeapEnd() const
{
    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    return m_guestHeapConfigured ? m_guestHeapEnd : m_guestHeapSuggestedBase;
}

uint32_t PS2Runtime::reserveAsyncCallbackStack(uint32_t size, uint32_t alignment)
{
    if (size == 0u)
    {
        return 0u;
    }

    const uint32_t normalizedAlignment = normalizeGuestHeapAlignment(alignment);
    const uint32_t allocSize = alignGuestHeapValue(size, kGuestHeapDefaultAlignment);
    if (allocSize == 0u)
    {
        return 0u;
    }

    std::lock_guard<std::mutex> lock(m_asyncCallbackStackMutex);
    uint32_t top = m_asyncCallbackStackTop;
    if (top > PS2_RAM_SIZE)
    {
        top = PS2_RAM_SIZE;
    }
    top &= ~(kGuestHeapDefaultAlignment - 1u);

    if (top <= allocSize)
    {
        return 0u;
    }

    uint32_t base = top - allocSize;
    base &= ~(normalizedAlignment - 1u);
    if (base < m_asyncCallbackStackFloor || base >= top)
    {
        return 0u;
    }

    m_asyncCallbackStackTop = base;
    return top - 0x10u;
}

void PS2Runtime::dispatchLoop(uint8_t *rdram, R5900Context *ctx)
{
    uint32_t lastPc = std::numeric_limits<uint32_t>::max();
    uint32_t samePcCount = 0;
    constexpr uint32_t kSamePcYieldInterval = 0x400u;

    // Boot tracer: imprime os primeiros 300 PCs despachados para diagnóstico
    static std::atomic<uint32_t> s_bootTraceCount{0};
    constexpr uint32_t kBootTraceLimit = 300u;
    thread_local uint32_t tl_dispatchCount = 0u;

    while (!isStopRequested())
    {
        const uint32_t pc = ctx->pc;

        if (pc == lastPc)
        {
            ++samePcCount;
            if ((samePcCount % kSamePcYieldInterval) == 0u)
            {
                const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
                const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
                std::cout << "[dispatch:stuck-pc] pc=0x" << std::hex << pc
                          << " ra=0x" << ra
                          << " sp=0x" << sp
                          << " samePcCount=" << std::dec << samePcCount
                          << " trace=" << formatDispatchHistory()
                          << std::endl;
                std::this_thread::yield();
            }
        }
        else
        {
            samePcCount = 0;
            lastPc = pc;
        }

        m_debugPc.store(pc, std::memory_order_relaxed);
        m_debugRa.store(static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0)), std::memory_order_relaxed);
        m_debugSp.store(static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0)), std::memory_order_relaxed);
        m_debugGp.store(static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0)), std::memory_order_relaxed);

        RecompiledFunction fn = lookupFunction(pc);
        const uint32_t dispatchedPc = pc;
        const uint32_t dispatchedRa = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
        const uint32_t dispatchedSp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));

        // Boot tracer: loga os primeiros kBootTraceLimit dispatches globais
        ++tl_dispatchCount;
        if (s_bootTraceCount.fetch_add(1u, std::memory_order_relaxed) < kBootTraceLimit)
        {
            const uint32_t dispatchedGp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0));
            const uint32_t dispatchedA0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0));
            std::cout << "[BOOT#" << std::dec << tl_dispatchCount
                      << "] pc=0x" << std::hex << dispatchedPc
                      << " ra=0x" << dispatchedRa
                      << " sp=0x" << dispatchedSp
                      << " gp=0x" << dispatchedGp
                      << " a0=0x" << dispatchedA0
                      << std::dec << std::endl;
        }

        // ----- Detector de ciclo de PCs -----
        // Diagnostica loops infinitos com 2..8 PCs alternando, que escapam
        // do detector samePcCount acima (que so pega PC repetido identico).
        // Camada 1 (sempre ligada): loga padrao + stack walk do guest a cada
        //   PS2_LOOP_REPORT_AFTER iteracoes do mesmo ciclo (default 100k).
        // Camada 2 (opt-in via PS2_LOOP_BREAK_AFTER=N): pede stop limpo do
        //   guest quando o ciclo bate N repeticoes. Default 0 = desligado.
        {
            const uint32_t cycleLen = detectCycleLength(g_dispatchHistory);
            LoopDetector &ld = g_loopDetector;

            if (cycleLen != 0u && (ld.cycleLen == 0u || ld.cycleLen == cycleLen))
            {
                if (ld.cycleLen == 0u)
                {
                    ld.cycleLen = cycleLen;
                    const uint32_t cap = static_cast<uint32_t>(g_dispatchHistory.pcs.size());
                    for (uint32_t i = 0u; i < cycleLen; ++i)
                    {
                        const uint32_t idx = (g_dispatchHistory.next + cap - cycleLen + i) % cap;
                        ld.pattern[i] = g_dispatchHistory.pcs[idx];
                    }
                    ld.cycleCount = 1u;
                    ld.lastReportedCount = 0u;
                }
                else
                {
                    ++ld.cycleCount;
                }

                const uint64_t reportThr = loopReportThreshold();
                if (reportThr > 0u && ld.cycleCount >= reportThr &&
                    (ld.cycleCount - ld.lastReportedCount) >= reportThr)
                {
                    ld.lastReportedCount = ld.cycleCount;
                    const uint32_t gp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0));

                    std::cerr << "[dispatch:cycle-detected] len=" << std::dec << ld.cycleLen
                              << " repeated=" << ld.cycleCount
                              << " pattern=";
                    for (uint32_t i = 0u; i < ld.cycleLen; ++i)
                    {
                        if (i > 0u) std::cerr << " -> ";
                        std::cerr << "0x" << std::hex << ld.pattern[i];
                    }
                    std::cerr << std::dec
                              << " ra=0x" << std::hex << dispatchedRa
                              << " sp=0x" << dispatchedSp
                              << " gp=0x" << gp << std::dec
                              << "\n  guestStackWalk=" << formatGuestStackWalk(this, rdram, dispatchedSp)
                              << "\n  dispatchHistory=" << formatDispatchHistory()
                              << std::endl;

                    const uint64_t breakThr = loopBreakThreshold();
                    if (breakThr > 0u && ld.cycleCount >= breakThr)
                    {
                        std::cerr << "[dispatch:cycle-break] threshold PS2_LOOP_BREAK_AFTER="
                                  << std::dec << breakThr
                                  << " reached; requesting runtime stop"
                                  << std::endl;
                        requestStop();
                        break;
                    }
                }
            }
            else if (cycleLen == 0u && ld.cycleLen != 0u)
            {
                // Padrao quebrou — reseta detector pra capturar o proximo.
                ld.cycleLen = 0u;
                ld.cycleCount = 0u;
                ld.lastReportedCount = 0u;
            }
        }

        // Registra a chamada de função no tracer (ativado via PS2_TRACE=1)
        g_callTracer.trace(dispatchedPc, dispatchedRa, dispatchedSp);

        // Snapshot do estado ANTES da chamada (pra delta no EXIT log)
        const bool bootTraceActive =
            (s_bootTraceCount.load(std::memory_order_relaxed) <= kBootTraceLimit);
        const uint32_t entryGp = bootTraceActive
            ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0)) : 0u;
        const uint32_t entrySp = bootTraceActive
            ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0)) : 0u;
        const uint32_t entryA0 = bootTraceActive
            ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0)) : 0u;

        {
            GuestExecutionScope guestExecution(this);
            fn(rdram, ctx, this);
        }

        // EXIT log: estado APOS a funcao recompilada retornar.
        // Permite ver se entry saiu cedo (early-return apos jal interno) ou
        // executou ate o fim, e se gp/sp/a0 foram modificados como esperado.
        if (bootTraceActive)
        {
            const uint32_t exitPc = ctx->pc;
            const uint32_t exitRa = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
            const uint32_t exitGp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0));
            const uint32_t exitSp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
            const uint32_t exitA0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0));
            std::cout << "[EXIT#" << std::dec << tl_dispatchCount
                      << "] from=0x" << std::hex << dispatchedPc
                      << " -> pc=0x" << exitPc
                      << " ra=0x" << exitRa
                      << " sp=0x" << exitSp << "(was 0x" << entrySp << ")"
                      << " gp=0x" << exitGp << "(was 0x" << entryGp << ")"
                      << " a0=0x" << exitA0 << "(was 0x" << entryA0 << ")"
                      << std::dec << std::endl;
        }

        if (ctx->pc == 0u)
        {
            const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
            const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
            const uint32_t gp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0));
            // Registra erro de PC=0 no tracer
            g_callTracer.traceEvent("ERRO_PC_ZERO",
                dispatchedPc, dispatchedRa,
                ("sp=0x" + std::to_string(sp) + " gp=0x" + std::to_string(gp)).c_str());
            std::cerr << "[dispatch:pc-zero] from=0x" << std::hex << dispatchedPc
                      << " fromRa=0x" << dispatchedRa
                      << " ra=0x" << ra
                      << " sp=0x" << sp
                      << " gp=0x" << gp
                      << " trace=" << formatDispatchHistory()
                      << std::dec << std::endl;

            // PC=0 means this guest thread returned (usually via jr $ra with RA=0).
            // Do not request a global runtime stop here: other guest threads may still run.
            break;
        }
    }
}

void PS2Runtime::enterGuestExecution()
{
    m_guestExecutionWaiters.fetch_add(1u, std::memory_order_acq_rel);
    m_guestExecutionMutex.lock();
    m_guestExecutionWaiters.fetch_sub(1u, std::memory_order_acq_rel);
    ++g_guestExecutionDepths[this];
}

void PS2Runtime::leaveGuestExecution()
{
    auto it = g_guestExecutionDepths.find(this);
    if (it == g_guestExecutionDepths.end() || it->second == 0u)
    {
        return;
    }

    --it->second;
    m_guestExecutionMutex.unlock();
    if (it->second == 0u)
    {
        g_guestExecutionDepths.erase(it);
    }
}

uint32_t PS2Runtime::releaseGuestExecution()
{
    auto it = g_guestExecutionDepths.find(this);
    if (it == g_guestExecutionDepths.end() || it->second == 0u)
    {
        return 0u;
    }

    const uint32_t depth = it->second;
    for (uint32_t i = 0; i < depth; ++i)
    {
        m_guestExecutionMutex.unlock();
    }
    g_guestExecutionDepths.erase(it);
    return depth;
}

void PS2Runtime::reacquireGuestExecution(uint32_t depth)
{
    if (depth == 0u)
    {
        return;
    }

    uint32_t &heldDepth = g_guestExecutionDepths[this];
    for (uint32_t i = 0; i < depth; ++i)
    {
        m_guestExecutionWaiters.fetch_add(1u, std::memory_order_acq_rel);
        m_guestExecutionMutex.lock();
        m_guestExecutionWaiters.fetch_sub(1u, std::memory_order_acq_rel);
        ++heldDepth;
    }
}

void PS2Runtime::cooperativeGuestYield()
{
    GuestExecutionReleaseScope release(this);
    if (m_guestExecutionWaiters.load(std::memory_order_acquire) != 0u)
    {
        std::this_thread::sleep_for(std::chrono::microseconds(100));
    }
    else
    {
        std::this_thread::yield();
    }
}

uint8_t PS2Runtime::Load8(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr)
{
    try
    {
        return m_memory.read8(vaddr);
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_LOAD);
        return 0;
    }
}

uint16_t PS2Runtime::Load16(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr)
{
    try
    {
        return m_memory.read16(vaddr);
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_LOAD);
        return 0;
    }
}

uint32_t PS2Runtime::Load32(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr)
{
    try
    {
        return m_memory.read32(vaddr);
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_LOAD);
        return 0;
    }
}

uint64_t PS2Runtime::Load64(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr)
{
    try
    {
        return m_memory.read64(vaddr);
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_LOAD);
        return 0;
    }
}

__m128i PS2Runtime::Load128(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr)
{
    try
    {
        return m_memory.read128(vaddr);
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_LOAD);
        return _mm_setzero_si128();
    }
}

void PS2Runtime::Store8(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr, uint8_t value)
{
    ps2TraceGuestWrite(rdram, vaddr, 1u, value, 0u, "WRITE8", ctx);
    try
    {
        m_memory.write8(vaddr, value);
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_STORE);
    }
}

void PS2Runtime::Store16(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr, uint16_t value)
{
    ps2TraceGuestWrite(rdram, vaddr, 2u, value, 0u, "WRITE16", ctx);
    try
    {
        m_memory.write16(vaddr, value);
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_STORE);
    }
}

void PS2Runtime::Store32(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr, uint32_t value)
{
    ps2TraceGuestWrite(rdram, vaddr, 4u, value, 0u, "WRITE32", ctx);
    try
    {
        m_memory.write32(vaddr, value);
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_STORE);
    }
}

void PS2Runtime::Store64(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr, uint64_t value)
{
    ps2TraceGuestWrite(rdram, vaddr, 8u, value, 0u, "WRITE64", ctx);
    try
    {
        m_memory.write64(vaddr, value);
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_STORE);
    }
}

void PS2Runtime::Store128(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr, __m128i value)
{
    alignas(16) uint64_t _parts[2];
    _mm_storeu_si128(reinterpret_cast<__m128i *>(_parts), value);
    ps2TraceGuestWrite(rdram, vaddr, 16u, _parts[0], _parts[1], "WRITE128", ctx);
    try
    {
        m_memory.write128(vaddr, value);
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_STORE);
    }
}

void PS2Runtime::requestStop()
{
    m_stopRequested.store(true, std::memory_order_relaxed);
    ps2_syscalls::notifyRuntimeStop();
}

bool PS2Runtime::isStopRequested() const
{
    return m_stopRequested.load(std::memory_order_relaxed);
}

void PS2Runtime::HandleIntegerOverflow(R5900Context *ctx)
{
    raiseCop0Exception(ctx, EXCEPTION_INTEGER_OVERFLOW);
}

void PS2Runtime::run()
{
    // Inicializa o relatorio de funcoes/syscalls/stubs ausentes.
    // Idempotente — pode ser chamado em todo run().
    ps2_missing_report::init();

    m_stopRequested.store(false, std::memory_order_relaxed);
    ps2_stubs::resetSifState();
    ps2_stubs::resetGsSyncVCallbackState();
    ps2_syscalls::initializeGuestKernelState(m_memory.getRDRAM());

    // === BOOT STUB INIT — agora OPT-IN (default OFF) ===
    //
    // HISTÓRICO: este stub foi criado quando o crt0 (entry_0x100008.cpp)
    // estava truncado em 132 bytes e o ps2_recomp injetava um "Patch: Jump
    // to next entry point" pulando 81 instruções essenciais (BSS clear,
    // setup de $a0/$gp/$sp, syscalls 60/61, jal __libc_init/main).
    //
    // SESSÃO 2026-04-25: a regeneração via tools/regen_truncated.sh --all
    // expandiu entry_0x100008.cpp pro range completo 0x100008-0x100db8
    // (3504 bytes, todas as 9 instruções críticas presentes — confirmado
    // por tools/diagnose_crt0.py). O crt0 real agora seta $a0=0x002cf070
    // sozinho via lui+addiu em 0x100148+0x10015c, e $gp via daddu em
    // 0x100170. NÃO precisa do kernel pra setar $a0.
    //
    // Manter este stub LIGADO sabota o crt0:
    //   - linha 2476 zera $a0 antes de cada init, deixando o estado sujo
    //   - chama main()/__libc_init com $gp=0, podendo crashar globals
    //   - duplica trabalho que o crt0 fará quando dispatchLoop rodar
    //
    // Default agora: stub LIGADO (necessario porque o crt0 truncado nao roda a
    // cadeia de init). Para desativar (debug/regressao):
    //   PS2_NO_BOOT_STUB=1 bash jogar.sh
    if (!std::getenv("PS2_NO_BOOT_STUB"))
    {
        uint8_t* rdram = m_memory.getRDRAM();
        if (rdram)
        {
            // 1) Zera BSS (loop original em 0x10011c-0x100144).
            //    Range: 0x2c7080 (BSS start) -> 0x35d080 (BSS end real do ELF)
            //    Tamanho corrigido: ELF memsz cobre 0x100000+0x25d080=0x35d080.
            std::memset(rdram + 0x2c7080u, 0, 0x35d080u - 0x2c7080u);

            // 1b) Sentinela da lista encadeada de eventos em mem[0x20].
            //
            // func_100408 recebe $a0=0 no boot e lê a cabeça da lista em
            // mem[$a0+0x20] = mem[0x20].  A condição de lista vazia é:
            //   mem[0x20] == ($a0 + 0x20) == 0x20  (ponteiro apontando para si)
            //
            // A RDRAM inicia zerada → mem[0x20]=0 ≠ 0x20 → func_100408 entra em
            // loop infinito iterando ponteiros nulos, chamando sub_00100E28 a cada
            // iteração com stack leak de 0x40 bytes até stack overflow.
            //
            // Corrijo escrevendo a sentinela de lista vazia antes de qualquer init.
            {
                uint32_t sentinel = 0x00000020u;
                std::memcpy(rdram + 0x20u, &sentinel, sizeof(sentinel));
            }

            // 2) SetupThread (syscall 0x3C, original em 0x100174-0x100178).
            //    Args do disassembly em 0x100148-0x10016c:
            //      $a0=gp=0x2cf070   $a1=stack=0x1ff8000
            //      $a2=ssize=0x8000  $a3=args=0x2c7080
            //      $t0=root=0x1001d8
            m_cpuContext.r[4] = _mm_set_epi64x(0, 0x2cf070);
            m_cpuContext.r[5] = _mm_set_epi64x(0, 0x1ff8000);
            m_cpuContext.r[6] = _mm_set_epi64x(0, 0x8000);
            m_cpuContext.r[7] = _mm_set_epi64x(0, 0x2c7080);
            m_cpuContext.r[8] = _mm_set_epi64x(0, 0x1001d8);
            ps2_syscalls::SetupThread(rdram, &m_cpuContext, this);
            // SetupThread retorna o novo SP em $v0 ($r2) — copia para $sp ($r29)
            const int64_t newSp = static_cast<int64_t>(
                static_cast<uint32_t>(_mm_extract_epi32(m_cpuContext.r[2], 0)));
            m_cpuContext.r[29] = _mm_set_epi64x(0, newSp);

            // 3) SetupHeap (syscall 0x3D, original em 0x100190-0x100194).
            //    Args do disassembly em 0x100180-0x10018c:
            //      $a0=heapBase=0x35c1a8 (=fim de BSS)  $a1=size=0
            //    SetupHeap não está exportada no header — chamamos via
            //    dispatchNumericSyscall que é a API pública e respeita
            //    eventuais overrides registrados pelo jogo.
            m_cpuContext.r[4] = _mm_set_epi64x(0, 0x35c1a8);
            m_cpuContext.r[5] = _mm_setzero_si128();
            ps2_syscalls::dispatchNumericSyscall(0x3Du, rdram, &m_cpuContext, this);

            // 4) Inits de runtime/libc — JAL original em 0x100198, 0x1001a0,
            //    0x1001a8, 0x1001c0.
            //
            // ATENÇÃO: 0x138d48 foi REMOVIDA desta lista após análise de
            // GDB backtrace (sessão 04-25 noite, resumo_1777126039981.txt):
            // ela faz busy-wait via cooperativeGuestYield() esperando um
            // evento (provavelmente sinal de outra thread) que NUNCA chega
            // porque o scheduler de threads do runtime só começa a rodar
            // dentro do dispatchLoop. Stack do GDB:
            //   sub_0013FAB8 (loop) -> sub_0013FCA8 -> entry_182ff0
            //   -> sub_0017A910 -> sub_00138D48 -> PS2Runtime::run
            //
            // 0x138d48 deve ser chamada naturalmente pelo fluxo do crt0
            // depois que dispatchLoop estiver rodando (j 0x2996B0 -> main).
            // As 3 inits abaixo são suficientes pra destravar o boot até
            // GsSetCrt — confirmado em log.
            // Configura $gp (global pointer) ANTES de chamar as inits.
            // Sem isso, qualquer funcao da cadeia que acesse variaveis globais
            // via $gp+offset le zeros (BSS ou lixo), causando falhas silenciosas.
            // 0x2cf070 = simbolo _gp do ELF do God of War (confirmado no disassembly).
            m_cpuContext.r[28] = _mm_set_epi64x(0, static_cast<int64_t>(0x002cf070u));
            std::cout << "[boot_stub] $gp configurado para 0x2cf070" << std::endl;

            // -----------------------------------------------------------------
            // SENTINELAS DE LISTAS CIRCULARES VAZIAS — PRECISAM VIR ANTES DOS INITS.
            // -----------------------------------------------------------------
            // Movido pra ca em 2026-04-26 PARTE 3.
            //
            // Motivo: as funcoes do init chain (sub_0029a4a0, sub_00138d48,
            // etc.) ja chamam internamente codigo que percorre essas listas
            // (ex.: sub_0013FAB8 chamada via 138D48 -> 17A910 -> ... -> 13FCA8).
            // Se as sentinelas estiverem zeradas durante o init, o codigo do
            // jogo entra em loop infinito buscando em uma "lista" cujo head=0
            // e cujo proximo node tambem e 0 — loop nunca termina, init nunca
            // retorna, boot_stub nunca chega no entry final.
            //
            // No PS2 real, esses sentinels seriam escritos pelo BIOS antes do
            // crt0 rodar, ou por funcoes de init que nao foram registradas no
            // nosso runtime ainda (ex.: 0x283770, 0x17acb8, 0x138b10, 0x1838d0).
            // Inicializar manualmente aqui resolve sem depender delas.

            // Fix 1: sentinel da lista circular usada por sub_00100408
            // (a0=0x2cf070, sentinel em a0+0x20 = 0x2cf090).
            {
                constexpr uint32_t A0       = 0x2cf070u;
                constexpr uint32_t SENTINEL = A0 + 0x20u; // = 0x2cf090
                uint32_t* mem = reinterpret_cast<uint32_t*>(rdram + (SENTINEL & 0x01FFFFFFu));
                mem[0] = SENTINEL; // next = self
                mem[1] = SENTINEL; // prev = self
                std::cout << "[boot_stub] FIX 1: sentinel lista circular #1 inicializado em 0x"
                          << std::hex << SENTINEL << std::dec
                          << " -> lista vazia, sub_00100408 retornara imediatamente"
                          << std::endl;
            }

            // Fix 6: sentinel da lista circular usada por sub_0013FAB8
            // (head em 0x2cbbb0, lista duplamente encadeada, +0=next +4=prev +8=key).
            {
                constexpr uint32_t SENTINEL_2 = 0x2cbbb0u;
                uint32_t* mem = reinterpret_cast<uint32_t*>(rdram + (SENTINEL_2 & 0x01FFFFFFu));
                mem[0] = SENTINEL_2; // next = self
                mem[1] = SENTINEL_2; // prev = self
                std::cout << "[boot_stub] FIX 6: sentinel lista circular #2 inicializado em 0x"
                          << std::hex << SENTINEL_2 << std::dec
                          << " -> lista vazia, sub_0013FAB8 nao loopa"
                          << std::endl;
            }

            // ---------------------------------------------------------------
            // Init chain 1-3: identica ao crt0 original (0x100198-0x1001a8).
            // ---------------------------------------------------------------
            constexpr uint32_t kInitChain[] = {
                0x2994a0u, 0x293ea0u, 0x138cb0u
            };
            const uint32_t savedSp = static_cast<uint32_t>(
                _mm_extract_epi32(m_cpuContext.r[29], 0));
            for (uint32_t initAddr : kInitChain)
            {
                RecompiledFunction fn = lookupFunction(initAddr);
                if (fn)
                {
                    m_cpuContext.pc = initAddr;
                    // RA sentinela: dispatchLoop trata pc=0 como retorno final;
                    // como aqui chamamos diretamente, o jr $ra final volta a 0
                    // e o controle volta a este loop sem entrar no dispatchLoop.
                    m_cpuContext.r[31] = _mm_setzero_si128();
                    m_cpuContext.r[4]  = _mm_setzero_si128();
                    std::cout << "[boot_stub] init 0x"
                              << std::hex << initAddr << std::dec << std::endl;
                    {
                        GuestExecutionScope guestExecution(this);
                        fn(rdram, &m_cpuContext, this);
                    }
                    // Restaura SP (cada init pode ter usado stack frame próprio
                    // mas deveria restaurar; mantemos garantia).
                    m_cpuContext.r[29] = _mm_set_epi64x(0, savedSp);
                }
                else
                {
                    std::cerr << "[boot_stub] AVISO: init 0x"
                              << std::hex << initAddr << std::dec
                              << " nao registrado, pulando" << std::endl;
                }
            }

            // ---------------------------------------------------------------
            // Init chain 4: sub_00138D48 (0x1001c0 no crt0 real).
            // Chamada com a0 = rdram[0x2c7080] (BSS = 0), a1 = 0x2c7084.
            // Esta e a ultima funcao chamada pelo crt0 ANTES de j 0x2996b0.
            // Ela inicializa 11 subsistemas e retorna um handle em v0 ($r2)
            // que se torna a0 para entry_2996b0 (real game main).
            // ---------------------------------------------------------------
            {
                constexpr uint32_t k138D48 = 0x138d48u;
                RecompiledFunction fn138d48 = lookupFunction(k138D48);
                m_cpuContext.r[31] = _mm_setzero_si128();
                // a0 = rdram[0x2c7080] = 0 (BSS, equivale ao crt0 real)
                m_cpuContext.r[4]  = _mm_setzero_si128();
                // a1 = 0x2c7084 (argumento exato do crt0: addiu $a1,$v0,0x4)
                m_cpuContext.r[5]  = _mm_set_epi64x(0, static_cast<int64_t>(0x2c7084u));
                m_cpuContext.r[29] = _mm_set_epi64x(0, static_cast<int64_t>(savedSp));
                std::cout << "[boot_stub] init 0x138d48 (4o init, pre-main)" << std::endl;
                if (fn138d48)
                {
                    m_cpuContext.pc = k138D48;
                    GuestExecutionScope guestExecution(this);
                    fn138d48(rdram, &m_cpuContext, this);
                }
                else
                {
                    std::cerr << "[boot_stub] AVISO: 0x138d48 nao registrada, pulando"
                              << std::endl;
                }
                // v0 (r2) = return value de sub_00138D48 → sera a0 para entry_2996b0
                // (crt0 real: daddu $a0, $v0, $zero antes do j 0x2996b0)
                m_cpuContext.r[4] = m_cpuContext.r[2];
                std::cout << "[boot_stub] 0x138d48 retornou v0=0x"
                          << std::hex
                          << static_cast<uint32_t>(_mm_extract_epi32(m_cpuContext.r[2], 0))
                          << std::dec << ", passando como a0 para entry_2996b0" << std::endl;
            }

            // NOTA (2026-04-26 PARTE 3): Fix 1 e Fix 6 (sentinelas das listas
            // circulares) foram MOVIDOS para ANTES do init chain — eles eram
            // necessarios DURANTE os inits, nao depois. Ver bloco SENTINELAS
            // logo apos `[boot_stub] $gp configurado` mais acima neste arquivo.

            // ---------------------------------------------------------------
            // Entry point final: 0x2996b0 (real main do jogo).
            // O crt0 original faz "j 0x2996b0" apos a cadeia de inits.
            // NÃO mais 0x100008 → entry_0x100008 → 0x1003c0 (caminho errado).
            // a0 ja foi setado acima: v0 de sub_00138D48 ou 0 se nao registrada.
            // ---------------------------------------------------------------
            m_cpuContext.pc = 0x2996b0u;
            m_cpuContext.r[29] = _mm_set_epi64x(0, static_cast<int64_t>(savedSp));
            m_cpuContext.r[31] = _mm_setzero_si128(); // ra sentinela
            std::cout << "[boot_stub] init concluido, entry=0x2996b0 (real game main)"
                      << std::endl;
        }
    }
    // === FIM BOOT STUB ====================================================

    m_cpuContext.r[4] = _mm_setzero_si128();
    m_cpuContext.r[5] = _mm_setzero_si128();
    m_cpuContext.r[29] = _mm_set_epi64x(0, static_cast<int64_t>(PS2_RAM_SIZE - 0x10u));
    m_debugPc.store(m_cpuContext.pc, std::memory_order_relaxed);
    m_debugRa.store(static_cast<uint32_t>(_mm_extract_epi32(m_cpuContext.r[31], 0)), std::memory_order_relaxed);
    m_debugSp.store(static_cast<uint32_t>(_mm_extract_epi32(m_cpuContext.r[29], 0)), std::memory_order_relaxed);
    m_debugGp.store(static_cast<uint32_t>(_mm_extract_epi32(m_cpuContext.r[28], 0)), std::memory_order_relaxed);

    std::cout << "Starting execution at address 0x" << std::hex << m_cpuContext.pc << std::dec << std::endl;

    // A blank image to use as a framebuffer
    Image blank = GenImageColor(FB_WIDTH, FB_HEIGHT, BLANK);
    Texture2D frameTex = LoadTextureFromImage(blank);
    UnloadImage(blank);

    g_activeThreads.store(1, std::memory_order_relaxed);
    std::atomic<bool> gameThreadFinished{false};

    std::thread gameThread([&]()
                           {
        ThreadNaming::SetCurrentThreadName("GameThread");
        try
        {
            dispatchLoop(m_memory.getRDRAM(), &m_cpuContext);
            uint32_t pc = m_debugPc.load(std::memory_order_relaxed);
            std::cout << "Game thread returned. PC=0x" << std::hex << pc
                      << " RA=0x" << static_cast<uint32_t>(_mm_extract_epi32(m_cpuContext.r[31], 0)) << std::dec << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << "Error during program execution: " << e.what() << std::endl;
        }
        catch (...)
        {
            std::cerr << "Error during program execution: unknown exception" << std::endl;
        }
        g_activeThreads.fetch_sub(1, std::memory_order_relaxed);
        gameThreadFinished.store(true, std::memory_order_release); });

    uint64_t tick = 0;
    while (!isStopRequested() && g_activeThreads.load(std::memory_order_relaxed) > 0)
    {
        tick++;
        if ((tick % 120) == 0)
        {
            uint64_t curDma = m_memory.dmaStartCount();
            uint64_t curGif = m_memory.gifCopyCount();
            uint64_t curGs = m_memory.gsWriteCount();
            uint64_t curVif = m_memory.vifWriteCount();
            const GSRegisters &gs = m_memory.gs();
            const uint32_t dbgPc = m_debugPc.load(std::memory_order_relaxed);
            const uint32_t dbgRa = m_debugRa.load(std::memory_order_relaxed);
            const uint32_t dbgSp = m_debugSp.load(std::memory_order_relaxed);
            const uint32_t dbgGp = m_debugGp.load(std::memory_order_relaxed);
            const int activeThreads = g_activeThreads.load(std::memory_order_relaxed);
            // m_debugPc/Ra/Sp/Gp sao atualizados APENAS no topo do dispatchLoop;
            // se a fn() em execucao ainda nao retornou (ex: loop C++ infinito
            // dentro de uma funcao recompilada), esses valores ficam stale.
            // Lemos diretamente do contexto pra ter a PC viva (race benigna,
            // x86 garante load/store atomico de uint32 alinhado).
            const uint32_t livePc = m_cpuContext.pc;
            const uint32_t liveRa = static_cast<uint32_t>(_mm_extract_epi32(m_cpuContext.r[31], 0));
            const uint32_t liveSp = static_cast<uint32_t>(_mm_extract_epi32(m_cpuContext.r[29], 0));

            constexpr uint32_t kSndTransTypeAddr = 0x01E0E1C0u;
            constexpr uint32_t kSndTransBankAddr = 0x01E0E1C8u;
            constexpr uint32_t kSndTransLevelAddr = 0x01E0E1B8u;
            constexpr uint32_t kSndGetAdrsAddr = 0x01E212D8u;
            constexpr uint32_t kSndStatusMirrorAddr = 0x01E213C0u;
            constexpr uint32_t kSndSeCheckAddr = 0x01E0EF10u;
            constexpr uint32_t kSndMidiCheckAddr = 0x01E0EF20u;

            const uint32_t sndTransType = readGuestU32Wrapped(m_memory.getRDRAM(), kSndTransTypeAddr);
            const uint32_t sndTransLevel = readGuestU32Wrapped(m_memory.getRDRAM(), kSndTransLevelAddr);
            const uint32_t sndTransBank = readGuestU32Wrapped(m_memory.getRDRAM(), kSndTransBankAddr);
            const uint32_t sndGetAdrs = readGuestU32Wrapped(m_memory.getRDRAM(), kSndGetAdrsAddr);
            auto readGuestS16 = [&](uint32_t addr) -> int32_t
            {
                const uint8_t *rdram = m_memory.getRDRAM();
                if (!rdram)
                {
                    return 0;
                }
                const uint16_t raw = static_cast<uint16_t>(
                    static_cast<uint16_t>(rdram[(addr + 0u) & PS2_RAM_MASK]) |
                    (static_cast<uint16_t>(rdram[(addr + 1u) & PS2_RAM_MASK]) << 8));
                return static_cast<int16_t>(raw);
            };
            const int32_t sndMirrorMidi0 = readGuestS16(kSndStatusMirrorAddr + 0x1Eu);
            const int32_t sndMirrorSe0 = readGuestS16(kSndStatusMirrorAddr + 0x26u);
            int32_t sndBankMidiCheck = 0;
            int32_t sndBankSeCheck = 0;
            if (sndTransBank < 4u)
            {
                sndBankMidiCheck = readGuestS16(kSndMidiCheckAddr + (sndTransBank * 2u));
            }
            if (sndTransBank < 5u)
            {
                sndBankSeCheck = readGuestS16(kSndSeCheckAddr + (sndTransBank * 2u));
            }
            std::cout << "[run:tick] tick=" << tick
                      << " pc=0x" << std::hex << dbgPc
                      << " livePc=0x" << livePc
                      << " liveRa=0x" << liveRa
                      << " liveSp=0x" << liveSp
                      << " ra=0x" << dbgRa
                      << " sp=0x" << dbgSp
                      << " gp=0x" << dbgGp
                      << " dispfb1=0x" << gs.dispfb1
                      << " display1=0x" << gs.display1
                      << std::dec
                      << " activeThreads=" << activeThreads
                      << " dma=" << curDma
                      << " gif=" << curGif
                      << " gsw=" << curGs
                      << " vif=" << curVif
                      << " sndType=" << sndTransType
                      << " sndLvl=" << sndTransLevel
                      << " sndBank=" << sndTransBank
                      << " getAdrs=0x" << std::hex << sndGetAdrs << std::dec
                      << " sndMirrorMidi0=" << sndMirrorMidi0
                      << " sndMirrorSe0=" << sndMirrorSe0
                      << " sndChkMidi=" << sndBankMidiCheck
                      << " sndChkSe=" << sndBankSeCheck
                      << std::endl;
        }
        UploadFrame(frameTex, this);

        BeginDrawing();
        ClearBackground(BLACK);
        DrawTexture(frameTex, 0, 0, WHITE);
        EndDrawing();

        if (WindowShouldClose())
        {
            std::cout << "[run] window close requested, breaking out of loop" << std::endl;
            requestStop();
            break;
        }
    }

    requestStop();

    const auto joinDeadline = std::chrono::steady_clock::now() + std::chrono::seconds(2);
    while (!gameThreadFinished.load(std::memory_order_acquire) &&
           std::chrono::steady_clock::now() < joinDeadline)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }

    if (gameThread.joinable())
    {
        if (gameThreadFinished.load(std::memory_order_acquire))
        {
            gameThread.join();
        }
        else
        {
            std::cerr << "[run] game thread did not stop within timeout; detaching" << std::endl;
            gameThread.detach();
        }
    }

    const auto workerDeadline = std::chrono::steady_clock::now() + std::chrono::milliseconds(1000);
    while (g_activeThreads.load(std::memory_order_relaxed) > 0 &&
           std::chrono::steady_clock::now() < workerDeadline)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }

    if (g_activeThreads.load(std::memory_order_relaxed) > 0)
    {
        requestStop();
        const auto finalWorkerDeadline = std::chrono::steady_clock::now() + std::chrono::milliseconds(1000);
        while (g_activeThreads.load(std::memory_order_relaxed) > 0 &&
               std::chrono::steady_clock::now() < finalWorkerDeadline)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    }

    if (g_activeThreads.load(std::memory_order_relaxed) == 0)
    {
        ps2_syscalls::joinAllGuestHostThreads();
    }
    else
    {
        std::cerr << "[run] guest host threads did not stop within timeout; detaching remaining worker threads"
                  << std::endl;
        ps2_syscalls::detachAllGuestHostThreads();
    }

    UnloadTexture(frameTex);
    CloseWindow();

    const int remainingThreads = g_activeThreads.load(std::memory_order_relaxed);
    std::cout << "[run] exiting loop, activeThreads=" << remainingThreads << std::endl;
    if (remainingThreads > 0)
    {
        std::cerr << "[run] warning: " << remainingThreads
                  << " guest worker thread(s) still active during shutdown." << std::endl;
    }
}
