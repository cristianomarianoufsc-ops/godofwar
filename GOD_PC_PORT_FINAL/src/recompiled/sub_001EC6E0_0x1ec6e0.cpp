#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EC6E0
// Address: 0x1ec6e0 - 0x1ec748
void sub_001EC6E0_0x1ec6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC6E0_0x1ec6e0");
#endif

    ctx->pc = 0x1ec6e0u;

    // 0x1ec6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec6e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ec6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ec6e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ec6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ec6ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec6f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec6f4: 0x86020352  lh          $v0, 0x352($s0)
    ctx->pc = 0x1ec6f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 850)));
    // 0x1ec6f8: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC6F8u;
    {
        const bool branch_taken_0x1ec6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ec6f8) {
            ctx->pc = 0x1EC6FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC6F8u;
            // 0x1ec6fc: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC70Cu;
            goto label_1ec70c;
        }
    }
    ctx->pc = 0x1EC700u;
    // 0x1ec700: 0xc079d98  jal         func_1E7660
    ctx->pc = 0x1EC700u;
    SET_GPR_U32(ctx, 31, 0x1EC708u);
    ctx->pc = 0x1E7660u;
    if (runtime->hasFunction(0x1E7660u)) {
        auto targetFn = runtime->lookupFunction(0x1E7660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC708u; }
        if (ctx->pc != 0x1EC708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7660_0x1e7660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC708u; }
        if (ctx->pc != 0x1EC708u) { return; }
    }
    ctx->pc = 0x1EC708u;
    // 0x1ec708: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x1ec708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_1ec70c:
    // 0x1ec70c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC70Cu;
    {
        const bool branch_taken_0x1ec70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec70c) {
            ctx->pc = 0x1EC72Cu;
            goto label_1ec72c;
        }
    }
    ctx->pc = 0x1EC714u;
    // 0x1ec714: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1ec714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1ec718: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ec718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ec71c: 0xc080172  jal         func_2005C8
    ctx->pc = 0x1EC71Cu;
    SET_GPR_U32(ctx, 31, 0x1EC724u);
    ctx->pc = 0x1EC720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC71Cu;
            // 0x1ec720: 0x84450082  lh          $a1, 0x82($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 130)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2005C8u;
    if (runtime->hasFunction(0x2005C8u)) {
        auto targetFn = runtime->lookupFunction(0x2005C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC724u; }
        if (ctx->pc != 0x1EC724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002005C8_0x2005c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC724u; }
        if (ctx->pc != 0x1EC724u) { return; }
    }
    ctx->pc = 0x1EC724u;
    // 0x1ec724: 0xc08014c  jal         func_200530
    ctx->pc = 0x1EC724u;
    SET_GPR_U32(ctx, 31, 0x1EC72Cu);
    ctx->pc = 0x1EC728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC724u;
            // 0x1ec728: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200530u;
    if (runtime->hasFunction(0x200530u)) {
        auto targetFn = runtime->lookupFunction(0x200530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC72Cu; }
        if (ctx->pc != 0x1EC72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200530_0x200530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC72Cu; }
        if (ctx->pc != 0x1EC72Cu) { return; }
    }
    ctx->pc = 0x1EC72Cu;
label_1ec72c:
    // 0x1ec72c: 0xc081370  jal         func_204DC0
    ctx->pc = 0x1EC72Cu;
    SET_GPR_U32(ctx, 31, 0x1EC734u);
    ctx->pc = 0x1EC730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC72Cu;
            // 0x1ec730: 0x8e040324  lw          $a0, 0x324($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204DC0u;
    if (runtime->hasFunction(0x204DC0u)) {
        auto targetFn = runtime->lookupFunction(0x204DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC734u; }
        if (ctx->pc != 0x1EC734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204DC0_0x204dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC734u; }
        if (ctx->pc != 0x1EC734u) { return; }
    }
    ctx->pc = 0x1EC734u;
    // 0x1ec734: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ec734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec73c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC73Cu;
            // 0x1ec740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC70Cu: goto label_1ec70c;
            case 0x1EC72Cu: goto label_1ec72c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EC744u;
    // 0x1ec744: 0x0  nop
    ctx->pc = 0x1ec744u;
    // NOP
}
