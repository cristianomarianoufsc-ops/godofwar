#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00294990
// Address: 0x294990 - 0x294a28
// Manual rewrite — Bug Q fix (2026-05-01)
//
// Disassembly obtido via tools/mips_inspect.py 0x294990
//
// Lógica geral:
//   GetThreadId (syscall -0x2F) → compara $s0 (arg) com tid corrente ($v0)
//   Se diferente: chama entry_293b50 em 0x293b60, retorna o que ela retornar
//   Se igual e s0 >= 256: retorna -1
//   Se igual e s0 < 256 e mem[0x2A4AB0] == 0: retorna -1
//   Se igual e s0 < 256 e mem[0x2A4AB0] != 0: insere no ring buffer em 0x326f48,
//     chama entry_293c50, retorna s0
void FUN_00294990_0x294990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00294990_0x294990");
#endif

    ctx->pc = 0x294990u;

    // 0x294990: addiu $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), (uint32_t)(-0x20)));

    // 0x294994: sq $ra, 0x10($sp)  — R5900 128-bit (salva 64 bits inferiores)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0x10u), GPR_U64(ctx, 31));

    // 0x294998: sq $s0, 0x00($sp)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0x00u), GPR_U64(ctx, 16));

    // 0x29499c: addiu $v1, $zero, -0x2f  (número do syscall GetThreadId)
    SET_GPR_S32(ctx, 3, -0x2F);

    // 0x2949a0: syscall  (GetThreadId → $v0 = tid da thread corrente)
    ctx->pc = 0x2949a0u;
    runtime->handleSyscall(rdram, ctx, 0x0u);

    // 0x2949a4: daddu $a0, $v0, $zero  (a0 = tid retornado pelo syscall)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));

    // 0x2949a8: beq $s0, $a0, label_2949c0
    // 0x2949ac: sltiu $v0, $s0, 0x100   — delay slot (sempre executa)
    uint32_t v0_slt = (GPR_U32(ctx, 16) < 0x100u) ? 1u : 0u;
    SET_GPR_U32(ctx, 2, v0_slt);

    if (GPR_U32(ctx, 16) == GPR_U32(ctx, 4)) {
        // label_2949c0: s0 == tid_atual (mesma thread)

        // 0x2949c0: beqz $v0, label_2949d4
        // 0x2949c4: lui $v0, 0x2a   — delay slot (sempre executa, sobrescreve $v0)
        bool branch_s0_ge_256 = (v0_slt == 0u);
        SET_GPR_U32(ctx, 2, 0x2A0000u);

        if (branch_s0_ge_256) {
            // s0 >= 256 → retorna -1
            // 0x2949d4: b 0x294a14, delay: addiu $v0, $zero, -1
            SET_GPR_S32(ctx, 2, -1);
            goto label_epilogue_ra;
        }

        // s0 < 256: verifica mem[0x2A4AB0]
        // 0x2949c8: lw $v1, 0x4ab0($v0)  ($v0 = 0x2a0000 do delay slot acima)
        uint32_t mem_2a4ab0 = READ32(ADD32(GPR_U32(ctx, 2), 0x4AB0u));
        SET_GPR_U32(ctx, 3, mem_2a4ab0);

        // 0x2949cc: bnez $v1, label_2949dc
        // 0x2949d0: lui $v1, 0x32   — delay slot (sempre executa, sobrescreve $v1)
        bool branch_ring_buf = (mem_2a4ab0 != 0u);
        SET_GPR_U32(ctx, 3, 0x320000u);

        if (!branch_ring_buf) {
            // mem[0x2A4AB0] == 0 → retorna -1
            // 0x2949d0: b 0x294a14, delay: addiu $v0, $zero, -1
            SET_GPR_S32(ctx, 2, -1);
            goto label_epilogue_ra;
        }

        // label_2949dc: caminho do ring buffer
        // 0x2949dc: lui $a1, 0x32
        SET_GPR_U32(ctx, 5, 0x320000u);

        // 0x2949e0: addiu $v1, $v1, 0x6f48  ($v1 = 0x326f48 = ring_base)
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), 0x6F48u));

        // 0x2949e4: lw $a0, 0x6f40($a1)  (a0 = mem[0x326f40])
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0x6F40u)));

        // 0x2949e8: lw $v0, 4($v1)  (v0 = índice do ring buffer em mem[0x326f4c])
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4u)));

        // 0x2949ec: andi $v0, $v0, 0x1ff  (máscara 9 bits = 512 entradas)
        SET_GPR_U32(ctx, 2, GPR_U32(ctx, 2) & 0x1FFu);

        // 0x2949f0: sll $a2, $v0, 1  (a2 = ring_idx * 2)
        SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2) << 1u);

        // 0x2949f4: addiu $v0, $v0, 1  (incrementa índice)
        SET_GPR_U32(ctx, 2, GPR_U32(ctx, 2) + 1u);

        // 0x2949f8: addu $a1, $v1, $a2  (a1 = ring_base + ring_idx*2 = ring_entry)
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));

        // 0x2949fc: sw $v0, 4($v1)  (grava índice incrementado)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4u), GPR_U32(ctx, 2));

        // 0x294a00: daddu $v1, $a1, $zero  ($v1 = ring_entry)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5));

        // 0x294a04: sb $zero, 8($a1)  (zera flag em ring_entry+8)
        WRITE8(ADD32(GPR_U32(ctx, 5), 8u), 0u);

        // 0x294a08: jal 0x293c50
        // 0x294a0c: sb $s0, 9($v1)  — delay slot: grava s0 em ring_entry+9
        WRITE8(ADD32(GPR_U32(ctx, 3), 9u), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x294a08u;
        SET_GPR_U32(ctx, 31, 0x294a10u);
        if (runtime->hasFunction(0x293c50u)) {
            auto targetFn = runtime->lookupFunction(0x293c50u);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x294a10u; }
            if (ctx->pc != 0x294a10u) { return; }
        } else {
            const uint32_t __entryPc = ctx->pc;
            entry_293c50_0x293c60(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x294a10u; }
            if (ctx->pc != 0x294a10u) { return; }
        }
        ctx->pc = 0x294a10u;

        // 0x294a10: daddu $v0, $s0, $zero  (valor de retorno = s0)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16));

        goto label_epilogue_ra;
    }

    // s0 != tid_atual: chama entry_293b50 com pc=0x293b60
    // 0x2949b0: jal 0x293b60  (delay slot: nop)
    ctx->pc = 0x293b60u;
    SET_GPR_U32(ctx, 31, 0x2949b8u);
    if (runtime->hasFunction(0x293b60u)) {
        auto targetFn = runtime->lookupFunction(0x293b60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2949b8u; }
        if (ctx->pc != 0x2949b8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293b50_0x293b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2949b8u; }
        if (ctx->pc != 0x2949b8u) { return; }
    }
    ctx->pc = 0x2949b8u;

    // 0x2949b8: b 0x294a18
    // 0x2949bc: ld $ra, 0x10($sp)  — delay slot: restaura $ra antes do salto
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0x10u)));
    goto label_epilogue_s0;

label_epilogue_ra:
    // 0x294a14: ld $ra, 0x10($sp)
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0x10u)));

label_epilogue_s0:
    // 0x294a18: ld $s0, 0x00($sp)
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0x00u)));

    // 0x294a1c: jr $ra  (delay slot: addiu $sp, $sp, 0x20)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 0x20u));
    ctx->pc = GPR_U32(ctx, 31);
}
