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
// Reconstruída manualmente a partir dos bytes do ELF (instruções 0x29aa48-0x29aa84)
void FUN_0029aa48_0x29aa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0029aa48_0x29aa48");
#endif

    ctx->pc = 0x29aa48u;

    // 0x29aa48: addiu $sp, $sp, -0x10
    ctx->pc = 0x29aa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280u));

    // 0x29aa4c: sd $ra, 0($sp)
    ctx->pc = 0x29aa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0u), GPR_U64(ctx, 31));

    // 0x29aa50: jal 0x294080  (delay slot: nop @ 0x29aa54)
    // 0x294080 é o wrapper: addiu $v1, $zero, 0x7F; syscall; jr $ra
    ctx->pc = 0x29aa50u;
    SET_GPR_U32(ctx, 31, 0x29aa58u);
    ctx->pc = 0x29aa54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29aa50u;
    // nop (delay slot)
    ctx->in_delay_slot = false;
    ctx->pc = 0x294080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127)); // addiu $v1, $zero, 0x7F
    ctx->pc = 0x294084u;
    runtime->handleSyscall(rdram, ctx, 0x0u);                   // syscall
    // jr $ra → retorna para 0x29aa58 (RA setado pelo jal)
    ctx->pc = 0x29aa58u;

    // 0x29aa58: lui $v1, 0x0200  →  $v1 = 0x02000000
    ctx->pc = 0x29aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0x0200u << 16));

    // 0x29aa5c: bne $v0, $v1, 0x29aa74  (delay slot: nop @ 0x29aa60)
    ctx->pc = 0x29aa5cu;
    {
        const bool branch_taken_29aa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29aa60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29aa5cu;
        // nop (delay slot)
        ctx->in_delay_slot = false;
        if (branch_taken_29aa5c) {
            ctx->pc = 0x29aa74u;
            goto label_29aa74;
        }
    }

    // --- Caminho A: $v0 == 0x02000000 ---
    // 0x29aa64: jal 0x29aa88  (delay slot: nop @ 0x29aa68)
    ctx->pc = 0x29aa64u;
    SET_GPR_U32(ctx, 31, 0x29aa6cu);
    ctx->pc = 0x29aa68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29aa64u;
    // nop (delay slot)
    ctx->in_delay_slot = false;
    ctx->pc = 0x29aa88u;
    {
        if (runtime->hasFunction(0x29aa88u)) {
            auto targetFn = runtime->lookupFunction(0x29aa88u);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29aa6cu; }
            if (ctx->pc != 0x29aa6cu) { return; }
        } else {
            extern void sub_0029AA88_0x29aa88(uint8_t*, R5900Context*, PS2Runtime*);
            const uint32_t __entryPc = ctx->pc;
            sub_0029AA88_0x29aa88(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29aa6cu; }
            if (ctx->pc != 0x29aa6cu) { return; }
        }
    }
    ctx->pc = 0x29aa6cu;

    // 0x29aa6c: b 0x29aa80  (delay slot: ld $ra, 0($sp) @ 0x29aa70)
    ctx->pc = 0x29aa6cu;
    {
        ctx->pc = 0x29aa70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29aa6cu;
        // 0x29aa70: ld $ra, 0($sp)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0u)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29aa80u;
    }
    goto label_29aa80;

label_29aa74:
    // --- Caminho B: $v0 != 0x02000000 ---
    ctx->pc = 0x29aa74u;
    // 0x29aa74: jal 0x294090  (delay slot: nop @ 0x29aa78)
    // 0x294090 é o wrapper: addiu $v1, $zero, 0x82; syscall; jr $ra
    SET_GPR_U32(ctx, 31, 0x29aa7cu);
    ctx->pc = 0x29aa78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29aa74u;
    // nop (delay slot)
    ctx->in_delay_slot = false;
    ctx->pc = 0x294090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130)); // addiu $v1, $zero, 0x82
    ctx->pc = 0x294094u;
    runtime->handleSyscall(rdram, ctx, 0x0u);                   // syscall
    ctx->pc = 0x29aa7cu;

    // 0x29aa7c: ld $ra, 0($sp)
    ctx->pc = 0x29aa7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0u)));

label_29aa80:
    ctx->pc = 0x29aa80u;
    // 0x29aa80: jr $ra  (delay slot: addiu $sp, $sp, 0x10 @ 0x29aa84)
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29aa84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29aa80u;
        // 0x29aa84: addiu $sp, $sp, 0x10
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16u));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29aa88u;
}
