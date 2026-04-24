#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0029aa48
// Address: 0x29aa48 - 0x29aa88
//
// !!! RECONSTRUIDA MANUALMENTE !!!
// O recompilador PS2Recomp truncou esta funcao para apenas 1 instrucao
// (somente o "addiu $sp, $sp, -0x10" inicial), o que causava boot loop
// infinito porque a funcao nao retornava (nenhum jr $ra gerado).
//
// As 15 instrucoes reais foram decodificadas do ELF original:
//   0x29aa48: addiu $sp, $sp, -0x10   ; aloca stack
//   0x29aa4c: sd    $ra, 0x0($sp)     ; salva ra
//   0x29aa50: jal   func_294080       ; chama syscall stub (v1=0x7F)
//   0x29aa54: nop                     ; (delay slot)
//   0x29aa58: lui   $v1, 0x200        ; v1 = 0x02000000
//   0x29aa5c: bne   $v0, $v1, 0x29aa74; se ($v0 != 0x02000000) goto label_29aa74
//   0x29aa60: nop                     ; (delay slot)
//   0x29aa64: jal   sub_29aa88        ; chama sub_29aa88
//   0x29aa68: nop                     ; (delay slot)
//   0x29aa6c: beq   $zero,$zero,0x29aa80 ; goto label_29aa80 (incondicional)
//   0x29aa70: ld    $ra, 0x0($sp)     ; (delay slot - sempre executa)
//   0x29aa74: jal   func_294090       ; (label_29aa74) chama syscall stub (v1=0x82)
//   0x29aa78: nop                     ; (delay slot)
//   0x29aa7c: ld    $ra, 0x0($sp)     ; restaura ra
//   0x29aa80: jr    $ra               ; (label_29aa80) retorna
//   0x29aa84: addiu $sp, $sp, 0x10    ; (delay slot - libera stack)
//
// NOTA: func_294080 e func_294090 sao labels INTERNOS de
// entry_294050_0x2940a0.cpp (nao registradas no register_functions.cpp).
// Cada uma e uma mini-funcao de 3 instrucoes (addiu v1,zero,N; syscall 0; jr ra)
// que foi expandida INLINE abaixo para evitar dependencia de re-registro.
//   0x294080: v1 = 0x7F; syscall; jr ra
//   0x294090: v1 = 0x82; syscall; jr ra
void FUN_0029aa48_0x29aa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0029aa48_0x29aa48");
#endif

    ctx->pc = 0x29aa48u;

    // 0x29aa48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29aa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280u));

    // 0x29aa4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29aa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));

    // 0x29aa50: 0x0c0a5020  jal         0x294080  (INLINE: v1 = 0x7F; syscall 0; jr ra)
    // 0x29aa54: 0x00000000  nop  (Delay Slot)
    ctx->pc = 0x29AA50u;
    SET_GPR_U32(ctx, 31, 0x29AA58u);
    ctx->pc = 0x29AA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AA50u;
        // NOP (delay slot)
        ctx->in_delay_slot = false;
    // --- Inline expansion de func_294080 ---
    // 0x294080: addiu $v1, $zero, 0x7F
    ctx->pc = 0x294080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x294084: syscall 0
    ctx->pc = 0x294084u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x294088: jr $ra (retorna pra 0x29AA58 que ja foi setado em ra)
    ctx->pc = 0x29AA58u;

    // 0x29aa58: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x29aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));

    // 0x29aa5c: 0x14430005  bne         $v0, $v1, . + 4 + (5 << 2)  -> label_29aa74
    // 0x29aa60: 0x00000000  nop  (Delay Slot)
    ctx->pc = 0x29AA5Cu;
    {
        const bool branch_taken_0x29aa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29AA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AA5Cu;
            // NOP (delay slot)
            ctx->in_delay_slot = false;
        if (branch_taken_0x29aa5c) {
            ctx->pc = 0x29AA74u;
            goto label_29aa74;
        }
    }
    ctx->pc = 0x29AA64u;

    // 0x29aa64: 0x0c0a6aa2  jal         sub_29aa88
    // 0x29aa68: 0x00000000  nop  (Delay Slot)
    ctx->pc = 0x29AA64u;
    SET_GPR_U32(ctx, 31, 0x29AA6Cu);
    ctx->pc = 0x29AA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AA64u;
        // NOP (delay slot)
        ctx->in_delay_slot = false;
    ctx->pc = 0x29aa88u;
    if (runtime->hasFunction(0x29aa88u)) {
        auto targetFn = runtime->lookupFunction(0x29aa88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AA6Cu; }
        if (ctx->pc != 0x29AA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029AA88_0x29aa88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AA6Cu; }
        if (ctx->pc != 0x29AA6Cu) { return; }
    }
    ctx->pc = 0x29AA6Cu;

    // 0x29aa6c: 0x10000004  beq         $zero, $zero, . + 4 + (4 << 2)  -> label_29aa80 (incondicional)
    // 0x29aa70: 0xdfbf0000  ld          $ra, 0x0($sp)  (Delay Slot - sempre executa)
    ctx->pc = 0x29AA6Cu;
    {
        const bool branch_taken_0x29aa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AA6Cu;
            // ld $ra, 0x0($sp)  (delay slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
        if (branch_taken_0x29aa6c) {
            ctx->pc = 0x29AA80u;
            goto label_29aa80;
        }
    }
    ctx->pc = 0x29AA74u;

label_29aa74:
    // 0x29aa74: 0x0c0a5024  jal         0x294090  (INLINE: v1 = 0x82; syscall 0; jr ra)
    // 0x29aa78: 0x00000000  nop  (Delay Slot)
    ctx->pc = 0x29AA74u;
    SET_GPR_U32(ctx, 31, 0x29AA7Cu);
    ctx->pc = 0x29AA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AA74u;
        // NOP (delay slot)
        ctx->in_delay_slot = false;
    // --- Inline expansion de func_294090 ---
    // 0x294090: addiu $v1, $zero, 0x82
    ctx->pc = 0x294090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x294094: syscall 0
    ctx->pc = 0x294094u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x294098: jr $ra (retorna pra 0x29AA7C que ja foi setado em ra)
    ctx->pc = 0x29AA7Cu;

    // 0x29aa7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29aa7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));

label_29aa80:
    // 0x29aa80: 0x03e00008  jr          $ra
    // 0x29aa84: 0x27bd0010  addiu       $sp, $sp, 0x10  (Delay Slot)
    ctx->pc = 0x29AA80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AA80u;
            // addiu $sp, $sp, 0x10 (delay slot)
            SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
}
