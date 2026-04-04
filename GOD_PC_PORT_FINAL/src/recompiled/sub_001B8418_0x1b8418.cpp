#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8418
// Address: 0x1b8418 - 0x1b8478
void sub_001B8418_0x1b8418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8418_0x1b8418");
#endif

    ctx->pc = 0x1b8418u;

    // 0x1b8418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b841c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b841cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b8420: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b8424: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b8424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b842c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b842cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8430: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b8430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b8434: 0x0  nop
    ctx->pc = 0x1b8434u;
    // NOP
label_1b8438:
    // 0x1b8438: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b8438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b843c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b843cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b8440: 0x8c421558  lw          $v0, 0x1558($v0)
    ctx->pc = 0x1b8440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5464)));
    // 0x1b8444: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8444u;
    {
        const bool branch_taken_0x1b8444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8444u;
            // 0x1b8448: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8444) {
            ctx->pc = 0x1B8454u;
            goto label_1b8454;
        }
    }
    ctx->pc = 0x1B844Cu;
    // 0x1b844c: 0xc052a34  jal         func_14A8D0
    ctx->pc = 0x1B844Cu;
    SET_GPR_U32(ctx, 31, 0x1B8454u);
    ctx->pc = 0x14A8D0u;
    if (runtime->hasFunction(0x14A8D0u)) {
        auto targetFn = runtime->lookupFunction(0x14A8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8454u; }
        if (ctx->pc != 0x1B8454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14a8d0_0x14a8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8454u; }
        if (ctx->pc != 0x1B8454u) { return; }
    }
    ctx->pc = 0x1B8454u;
label_1b8454:
    // 0x1b8454: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1b8454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b8458: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B8458u;
    {
        const bool branch_taken_0x1b8458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8458) {
            ctx->pc = 0x1B845Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8458u;
            // 0x1b845c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8438u;
            runtime->cooperativeGuestYield();
            goto label_1b8438;
        }
    }
    ctx->pc = 0x1B8460u;
    // 0x1b8460: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b8460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8464: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b846c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B846Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B846Cu;
            // 0x1b8470: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8438u: goto label_1b8438;
            case 0x1B8454u: goto label_1b8454;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8474u;
    // 0x1b8474: 0x0  nop
    ctx->pc = 0x1b8474u;
    // NOP
}
