#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00242410
// Address: 0x242410 - 0x242460
void sub_00242410_0x242410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242410_0x242410");
#endif

    ctx->pc = 0x242410u;

    // 0x242410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x242414: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x242414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x242418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24241c: 0x24422338  addiu       $v0, $v0, 0x2338
    ctx->pc = 0x24241cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9016));
    // 0x242420: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x242420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x242424: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x242424u;
    {
        const bool branch_taken_0x242424 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x242428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242424u;
            // 0x242428: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242424) {
            ctx->pc = 0x242434u;
            goto label_242434;
        }
    }
    ctx->pc = 0x24242Cu;
    // 0x24242c: 0xc069284  jal         func_1A4A10
    ctx->pc = 0x24242Cu;
    SET_GPR_U32(ctx, 31, 0x242434u);
    ctx->pc = 0x1A4A10u;
    if (runtime->hasFunction(0x1A4A10u)) {
        auto targetFn = runtime->lookupFunction(0x1A4A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242434u; }
        if (ctx->pc != 0x242434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a4a10_0x1a4a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242434u; }
        if (ctx->pc != 0x242434u) { return; }
    }
    ctx->pc = 0x242434u;
label_242434:
    // 0x242434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242438: 0x3e00008  jr          $ra
    ctx->pc = 0x242438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24243Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242438u;
            // 0x24243c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242434u: goto label_242434;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242440u;
    // 0x242440: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x242440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x242444: 0x0  nop
    ctx->pc = 0x242444u;
    // NOP
    // 0x242448: 0x3e00008  jr          $ra
    ctx->pc = 0x242448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24244Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242448u;
            // 0x24244c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242434u: goto label_242434;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242450u;
    // 0x242450: 0x3e00008  jr          $ra
    ctx->pc = 0x242450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242450u;
            // 0x242454: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242434u: goto label_242434;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242458u;
    // 0x242458: 0x3e00008  jr          $ra
    ctx->pc = 0x242458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24245Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242458u;
            // 0x24245c: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242434u: goto label_242434;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242460u;
}
