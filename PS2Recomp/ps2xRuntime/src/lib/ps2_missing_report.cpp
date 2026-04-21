#include "ps2_missing_report.h"
#include "ps2_runtime.h"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <csignal>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <mutex>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

#include <smmintrin.h>

namespace ps2_missing_report
{
    namespace
    {
        struct Entry
        {
            Kind kind = Kind::Stub;
            std::string name;
            uint64_t count = 0;
            uint64_t firstTickMs = 0;
            uint64_t lastTickMs = 0;
            uint32_t firstPC = 0;
            uint32_t firstRA = 0;
            uint32_t firstA0 = 0;
            uint32_t firstA1 = 0;
            uint32_t firstA2 = 0;
            uint32_t firstA3 = 0;
        };

        std::mutex g_mutex;
        std::unordered_map<std::string, Entry> g_entries;
        std::once_flag g_initFlag;
        std::atomic<bool> g_flushedAtExit{false};
        std::chrono::steady_clock::time_point g_startTime;

        uint64_t elapsedMs()
        {
            using namespace std::chrono;
            return static_cast<uint64_t>(
                duration_cast<milliseconds>(steady_clock::now() - g_startTime).count());
        }

        uint32_t readReg32(const R5900Context *ctx, int reg)
        {
            if (!ctx)
                return 0u;
            return static_cast<uint32_t>(_mm_extract_epi32(ctx->r[reg], 0));
        }

        const char *kindName(Kind k)
        {
            switch (k)
            {
            case Kind::Stub:
                return "STUB";
            case Kind::Syscall:
                return "SYSCALL";
            case Kind::FunctionAddr:
                return "FUNCTION";
            }
            return "?";
        }

        std::string defaultLogPath()
        {
            const char *env = std::getenv("PS2_MISSING_LOG");
            if (env && *env)
                return env;
            return "./ps2_missing.log";
        }

        void writeReportToStream(std::ostream &out)
        {
            std::vector<Entry> sorted;
            uint64_t totalCalls = 0;
            {
                std::lock_guard<std::mutex> lock(g_mutex);
                sorted.reserve(g_entries.size());
                for (const auto &kv : g_entries)
                {
                    sorted.push_back(kv.second);
                    totalCalls += kv.second.count;
                }
            }

            std::sort(sorted.begin(), sorted.end(),
                      [](const Entry &a, const Entry &b) { return a.count > b.count; });

            const uint64_t runtimeMs = elapsedMs();

            out << "================================================================\n"
                << "  PS2 Missing-Functions Report\n"
                << "================================================================\n"
                << "  Tempo de execucao : " << runtimeMs << " ms\n"
                << "  Itens distintos   : " << sorted.size() << "\n"
                << "  Total de chamadas : " << totalCalls << "\n"
                << "----------------------------------------------------------------\n"
                << "  Ordem: por contagem decrescente (mais chamados primeiro)\n"
                << "  Use estes dados para priorizar implementacao de stubs/syscalls.\n"
                << "================================================================\n\n";

            // Cabecalho da tabela
            out << std::left
                << std::setw(9)  << "kind"
                << std::setw(12) << "calls"
                << std::setw(8)  << "1stMs"
                << std::setw(12) << "1stPC"
                << std::setw(12) << "1stRA"
                << "name (args do 1o call: a0,a1,a2,a3)\n"
                << std::string(72, '-') << "\n";

            for (const auto &e : sorted)
            {
                std::ostringstream pc, ra, args;
                pc << "0x" << std::hex << e.firstPC;
                ra << "0x" << std::hex << e.firstRA;
                args << "(" << std::hex << "0x" << e.firstA0
                     << ",0x" << e.firstA1
                     << ",0x" << e.firstA2
                     << ",0x" << e.firstA3 << ")";

                out << std::left
                    << std::setw(9)  << kindName(e.kind)
                    << std::setw(12) << e.count
                    << std::setw(8)  << e.firstTickMs
                    << std::setw(12) << pc.str()
                    << std::setw(12) << ra.str()
                    << e.name << " " << args.str() << "\n";
            }

            out << "\n--- fim do relatorio ---\n";
            out.flush();
        }

        // Handlers — não usar mutex/IO complexo aqui pode dar problema, mas como o
        // programa esta encerrando de qualquer jeito, vale o risco.
        void onSignal(int sig)
        {
            std::cerr << "\n[ps2_missing_report] sinal " << sig
                      << " recebido — gerando relatorio...\n";
            flush();
            // Restaura handler default e re-raise pra processo morrer normalmente
            std::signal(sig, SIG_DFL);
            std::raise(sig);
        }

        void onAtExit()
        {
            if (g_flushedAtExit.exchange(true))
                return;
            flush();
        }
    }

    void init()
    {
        std::call_once(g_initFlag, []() {
            g_startTime = std::chrono::steady_clock::now();
            std::atexit(&onAtExit);
            std::signal(SIGINT, &onSignal);
            std::signal(SIGTERM, &onSignal);
            std::cerr << "[ps2_missing_report] ativado. Relatorio sera salvo em "
                      << defaultLogPath()
                      << " ao encerrar (ou Ctrl+C).\n";
        });
    }

    void record(Kind kind, const char *name, const R5900Context *ctx)
    {
        if (!name)
            name = "(null)";

        std::lock_guard<std::mutex> lock(g_mutex);
        auto it = g_entries.find(name);
        if (it == g_entries.end())
        {
            Entry e;
            e.kind = kind;
            e.name = name;
            e.count = 1;
            e.firstTickMs = elapsedMs();
            e.lastTickMs = e.firstTickMs;
            e.firstPC = ctx ? ctx->pc : 0u;
            e.firstRA = readReg32(ctx, 31);
            e.firstA0 = readReg32(ctx, 4);
            e.firstA1 = readReg32(ctx, 5);
            e.firstA2 = readReg32(ctx, 6);
            e.firstA3 = readReg32(ctx, 7);
            g_entries.emplace(name, std::move(e));
        }
        else
        {
            it->second.count += 1;
            it->second.lastTickMs = elapsedMs();
        }
    }

    void recordSyscall(uint32_t syscallId, const R5900Context *ctx)
    {
        char buf[40];
        std::snprintf(buf, sizeof(buf), "syscall_0x%X", syscallId);
        record(Kind::Syscall, buf, ctx);
    }

    void recordFunctionAddr(uint32_t address, const R5900Context *ctx)
    {
        char buf[40];
        std::snprintf(buf, sizeof(buf), "func_0x%X", address);
        record(Kind::FunctionAddr, buf, ctx);
    }

    void flush()
    {
        const std::string path = defaultLogPath();
        std::ofstream f(path, std::ios::trunc);
        if (f.is_open())
        {
            writeReportToStream(f);
            std::cerr << "[ps2_missing_report] relatorio salvo em " << path << "\n";
        }
        else
        {
            std::cerr << "[ps2_missing_report] FALHA ao abrir " << path
                      << " — imprimindo em stderr:\n";
            writeReportToStream(std::cerr);
        }
    }
}
