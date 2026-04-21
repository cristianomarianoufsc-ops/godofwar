#ifndef PS2_MISSING_REPORT_H
#define PS2_MISSING_REPORT_H

#include <cstdint>

struct R5900Context;

namespace ps2_missing_report
{
    // Categoria do item ausente — só pra organizar o relatório.
    enum class Kind : int
    {
        Stub = 0,         // ps2_stubs::TODO_NAMED — função libc/SDK não implementada
        Syscall = 1,      // syscall com ID desconhecido
        FunctionAddr = 2, // endereço sem função recompilada registrada
    };

    // Inicializa o sistema (instala atexit + signal handlers SIGINT/SIGTERM).
    // Idempotente — pode ser chamado várias vezes.
    void init();

    // Registra uma chamada para algo não implementado.
    // Captura: contador, primeira ocorrência (PC chamador, RA, args), última.
    // Custo: ~1 lock + lookup numa hashmap (rápido o suficiente pra prod).
    void record(Kind kind, const char *name, const R5900Context *ctx);

    // Atalho: registra um syscall numérico (formata como "syscall_0x..").
    void recordSyscall(uint32_t syscallId, const R5900Context *ctx);

    // Atalho: registra uma função não encontrada por endereço.
    void recordFunctionAddr(uint32_t address, const R5900Context *ctx);

    // Força gravação do relatório agora (normalmente chamado por atexit/signal).
    // Path padrão: $PS2_MISSING_LOG ou ./ps2_missing.log
    void flush();
}

#endif // PS2_MISSING_REPORT_H
