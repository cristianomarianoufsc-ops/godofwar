#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DA598
// Address: 0x1da598 - 0x1da600
void sub_001DA598_0x1da598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA598_0x1da598");
#endif

    ctx->pc = 0x1da598u;

    // 0x1da598: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1da598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1da59c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1da59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1da5a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1da5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da5a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da5ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1da5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5b0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1da5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1da5b4: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1da5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1da5b8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1da5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1da5bc: 0x0  nop
    ctx->pc = 0x1da5bcu;
    // NOP
label_1da5c0:
    // 0x1da5c0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1da5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1da5c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1da5c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1da5c8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1da5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1da5cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA5CCu;
    {
        const bool branch_taken_0x1da5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA5CCu;
            // 0x1da5d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da5cc) {
            ctx->pc = 0x1DA5DCu;
            goto label_1da5dc;
        }
    }
    ctx->pc = 0x1DA5D4u;
    // 0x1da5d4: 0xc04c9da  jal         func_132768
    ctx->pc = 0x1DA5D4u;
    SET_GPR_U32(ctx, 31, 0x1DA5DCu);
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA5DCu; }
        if (ctx->pc != 0x1DA5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA5DCu; }
        if (ctx->pc != 0x1DA5DCu) { return; }
    }
    ctx->pc = 0x1DA5DCu;
label_1da5dc:
    // 0x1da5dc: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x1da5dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1da5e0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DA5E0u;
    {
        const bool branch_taken_0x1da5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da5e0) {
            ctx->pc = 0x1DA5E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA5E0u;
            // 0x1da5e4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA5C0u;
            runtime->cooperativeGuestYield();
            goto label_1da5c0;
        }
    }
    ctx->pc = 0x1DA5E8u;
    // 0x1da5e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1da5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da5ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1da5ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da5f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA5F4u;
            // 0x1da5f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA5C0u: goto label_1da5c0;
            case 0x1DA5DCu: goto label_1da5dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA5FCu;
    // 0x1da5fc: 0x0  nop
    ctx->pc = 0x1da5fcu;
    // NOP
}
