#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027B828
// Address: 0x27b828 - 0x27b890
void sub_0027B828_0x27b828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B828_0x27b828");
#endif

    ctx->pc = 0x27b828u;

    // 0x27b828: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27b828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27b82c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27b830: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27b830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27b834: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27b834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x27b838: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27b838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27b83c: 0x2471d008  addiu       $s1, $v1, -0x2FF8
    ctx->pc = 0x27b83cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955016));
    // 0x27b840: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27b840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27b844: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27b844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b848: 0xac4032e0  sw          $zero, 0x32E0($v0)
    ctx->pc = 0x27b848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13024), GPR_U32(ctx, 0));
    // 0x27b84c: 0x0  nop
    ctx->pc = 0x27b84cu;
    // NOP
label_27b850:
    // 0x27b850: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27b850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27b854: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B854u;
    {
        const bool branch_taken_0x27b854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b854) {
            ctx->pc = 0x27B858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27B854u;
            // 0x27b858: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27B86Cu;
            goto label_27b86c;
        }
    }
    ctx->pc = 0x27B85Cu;
    // 0x27b85c: 0xc09ee66  jal         func_27B998
    ctx->pc = 0x27B85Cu;
    SET_GPR_U32(ctx, 31, 0x27B864u);
    ctx->pc = 0x27B860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B85Cu;
            // 0x27b860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B998u;
    if (runtime->hasFunction(0x27B998u)) {
        auto targetFn = runtime->lookupFunction(0x27B998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B864u; }
        if (ctx->pc != 0x27B864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B998_0x27b998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B864u; }
        if (ctx->pc != 0x27B864u) { return; }
    }
    ctx->pc = 0x27B864u;
    // 0x27b864: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B864u;
    {
        const bool branch_taken_0x27b864 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27B868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B864u;
            // 0x27b868: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b864) {
            ctx->pc = 0x27B87Cu;
            goto label_27b87c;
        }
    }
    ctx->pc = 0x27B86Cu;
label_27b86c:
    // 0x27b86c: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x27b86cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x27b870: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x27B870u;
    {
        const bool branch_taken_0x27b870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B870u;
            // 0x27b874: 0x26310334  addiu       $s1, $s1, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b870) {
            ctx->pc = 0x27B850u;
            runtime->cooperativeGuestYield();
            goto label_27b850;
        }
    }
    ctx->pc = 0x27B878u;
    // 0x27b878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b87c:
    // 0x27b87c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27b87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b880: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27b880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27b884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b888: 0x3e00008  jr          $ra
    ctx->pc = 0x27B888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B888u;
            // 0x27b88c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27B850u: goto label_27b850;
            case 0x27B86Cu: goto label_27b86c;
            case 0x27B87Cu: goto label_27b87c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27B890u;
}
