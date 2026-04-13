#pragma once

#include <atomic>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <thread>
#include <string>
#include <array>

// Tracer leve para chamadas de função PS2 em tempo real.
// Usa um ring buffer lock-free para não bloquear a thread de execução.
// Ativado pela variável de ambiente PS2_TRACE=1
// Log gerado em: /tmp/ps2_trace.log

class PS2CallTracer
{
public:
    struct Entry
    {
        uint32_t pc;
        uint32_t ra;
        uint32_t sp;
        uint64_t timestamp_ns;
        uint32_t call_seq;
    };

    static constexpr size_t BUFFER_SIZE = 1024 * 64; // 64k entradas no buffer

    PS2CallTracer()
    {
        const char* env = std::getenv("PS2_TRACE");
        m_enabled = (env && std::strcmp(env, "1") == 0);
        if (!m_enabled) return;

        m_logFile = std::fopen("/tmp/ps2_trace.log", "w");
        if (!m_logFile) { m_enabled = false; return; }

        std::fprintf(m_logFile,
            "# God of War PC Port - Trace de Chamadas de Funcao\n"
            "# Formato: SEQ | TIMESTAMP_NS | PC | RA | SP\n"
            "SEQ,TIMESTAMP_NS,PC,RA,SP\n");
        std::fflush(m_logFile);

        m_running = true;
        m_writerThread = std::thread(&PS2CallTracer::writerLoop, this);
    }

    ~PS2CallTracer()
    {
        if (!m_enabled) return;
        m_running = false;
        if (m_writerThread.joinable()) m_writerThread.join();
        if (m_logFile)
        {
            std::fprintf(m_logFile, "# Total de chamadas registradas: %u\n",
                         m_totalCalls.load(std::memory_order_relaxed));
            std::fclose(m_logFile);
        }
    }

    inline void trace(uint32_t pc, uint32_t ra, uint32_t sp) noexcept
    {
        if (!m_enabled) return;

        const uint32_t seq = m_totalCalls.fetch_add(1u, std::memory_order_relaxed);

        // Só registrar a cada N chamadas para não sobrecarregar o disco
        // Registra: a cada 100 chamadas, ou se o PC mudou muito (salto >0x1000)
        if ((seq % 100) != 0 && (m_lastPc != 0) && 
            (pc - m_lastPc < 0x1000u) && (m_lastPc - pc < 0x1000u))
        {
            m_lastPc = pc;
            return;
        }
        m_lastPc = pc;

        const size_t writeIdx = m_writeIdx.fetch_add(1u, std::memory_order_acq_rel) % BUFFER_SIZE;
        Entry& e = m_buffer[writeIdx];
        e.pc = pc;
        e.ra = ra;
        e.sp = sp;
        e.timestamp_ns = currentTimeNs();
        e.call_seq = seq;

        m_pending.fetch_add(1u, std::memory_order_release);
    }

    // Registra um evento especial (erro, stub, syscall)
    void traceEvent(const char* tipo, uint32_t pc, uint32_t ra, const char* detalhe = nullptr)
    {
        if (!m_enabled || !m_logFile) return;
        // Escrita direta para eventos importantes
        std::fprintf(m_logFile, "[%s] PC=0x%08X RA=0x%08X %s\n",
                     tipo, pc, ra, detalhe ? detalhe : "");
        std::fflush(m_logFile);
    }

    bool isEnabled() const { return m_enabled; }
    uint32_t totalCalls() const { return m_totalCalls.load(std::memory_order_relaxed); }

private:
    void writerLoop()
    {
        size_t readIdx = 0;
        char lineBuf[128];

        while (m_running || m_pending.load(std::memory_order_acquire) > 0)
        {
            const size_t pending = m_pending.load(std::memory_order_acquire);
            if (pending == 0)
            {
                std::this_thread::sleep_for(std::chrono::milliseconds(10));
                continue;
            }

            const size_t toWrite = std::min(pending, (size_t)512);
            for (size_t i = 0; i < toWrite; ++i)
            {
                const Entry& e = m_buffer[readIdx % BUFFER_SIZE];
                int n = std::snprintf(lineBuf, sizeof(lineBuf),
                    "%u,%llu,0x%08X,0x%08X,0x%08X\n",
                    e.call_seq,
                    (unsigned long long)e.timestamp_ns,
                    e.pc, e.ra, e.sp);
                std::fwrite(lineBuf, 1, n, m_logFile);
                ++readIdx;
            }
            std::fflush(m_logFile);
            m_pending.fetch_sub(toWrite, std::memory_order_release);
        }
    }

    static uint64_t currentTimeNs()
    {
        struct timespec ts;
        clock_gettime(CLOCK_MONOTONIC, &ts);
        return (uint64_t)ts.tv_sec * 1'000'000'000ULL + ts.tv_nsec;
    }

    bool m_enabled = false;
    FILE* m_logFile = nullptr;
    std::atomic<bool> m_running{false};
    std::thread m_writerThread;

    alignas(64) std::array<Entry, BUFFER_SIZE> m_buffer{};
    alignas(64) std::atomic<size_t> m_writeIdx{0};
    alignas(64) std::atomic<size_t> m_pending{0};
    alignas(64) std::atomic<uint32_t> m_totalCalls{0};

    uint32_t m_lastPc = 0;
};

// Instância global acessível por todo o runtime
extern PS2CallTracer g_callTracer;
