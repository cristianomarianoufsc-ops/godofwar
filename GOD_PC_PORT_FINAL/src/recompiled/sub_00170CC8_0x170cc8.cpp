#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170CC8
// Address: 0x170cc8 - 0x170da0
void sub_00170CC8_0x170cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170CC8_0x170cc8");
#endif

    ctx->pc = 0x170cc8u;

    // 0x170cc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x170ccc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x170cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x170cd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170cd4: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x170cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x170cd8: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x170cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x170cdc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x170cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x170ce0: 0x1044002b  beq         $v0, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x170CE0u;
    {
        const bool branch_taken_0x170ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x170CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170CE0u;
            // 0x170ce4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ce0) {
            ctx->pc = 0x170D90u;
            goto label_170d90;
        }
    }
    ctx->pc = 0x170CE8u;
label_170ce8:
    // 0x170ce8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x170ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x170cec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x170cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170cf0: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x170cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x170cf4: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x170cf4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x170cf8: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x170cf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x170cfc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x170CFCu;
    {
        const bool branch_taken_0x170cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170cfc) {
            ctx->pc = 0x170D18u;
            goto label_170d18;
        }
    }
    ctx->pc = 0x170D04u;
    // 0x170d04: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x170d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x170d08: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x170d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x170d0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x170d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x170d10: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x170D10u;
    {
        const bool branch_taken_0x170d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x170d10) {
            ctx->pc = 0x170D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x170D10u;
            // 0x170d14: 0x92020019  lbu         $v0, 0x19($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170D24u;
            goto label_170d24;
        }
    }
    ctx->pc = 0x170D18u;
label_170d18:
    // 0x170d18: 0xc09ae46  jal         func_26B918
    ctx->pc = 0x170D18u;
    SET_GPR_U32(ctx, 31, 0x170D20u);
    ctx->pc = 0x26B918u;
    if (runtime->hasFunction(0x26B918u)) {
        auto targetFn = runtime->lookupFunction(0x26B918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D20u; }
        if (ctx->pc != 0x170D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B918_0x26b918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D20u; }
        if (ctx->pc != 0x170D20u) { return; }
    }
    ctx->pc = 0x170D20u;
    // 0x170d20: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x170d20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
label_170d24:
    // 0x170d24: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x170D24u;
    {
        const bool branch_taken_0x170d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170D24u;
            // 0x170d28: 0x3c04534d  lui         $a0, 0x534D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170d24) {
            ctx->pc = 0x170D40u;
            goto label_170d40;
        }
    }
    ctx->pc = 0x170D2Cu;
    // 0x170d2c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x170d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x170d30: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x170d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x170d34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x170d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x170d38: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x170D38u;
    {
        const bool branch_taken_0x170d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x170d38) {
            ctx->pc = 0x170D74u;
            goto label_170d74;
        }
    }
    ctx->pc = 0x170D40u;
label_170d40:
    // 0x170d40: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x170d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x170d44: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x170d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x170d48: 0x2406022b  addiu       $a2, $zero, 0x22B
    ctx->pc = 0x170d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 555));
    // 0x170d4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x170d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170d50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170d50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170d54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170d54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170d58: 0xc09b250  jal         func_26C940
    ctx->pc = 0x170D58u;
    SET_GPR_U32(ctx, 31, 0x170D60u);
    ctx->pc = 0x170D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170D58u;
            // 0x170d5c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C940u;
    if (runtime->hasFunction(0x26C940u)) {
        auto targetFn = runtime->lookupFunction(0x26C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D60u; }
        if (ctx->pc != 0x170D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26c940_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D60u; }
        if (ctx->pc != 0x170D60u) { return; }
    }
    ctx->pc = 0x170D60u;
    // 0x170d60: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x170d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x170d64: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x170d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x170d68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x170d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x170d6c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x170D6Cu;
    {
        const bool branch_taken_0x170d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x170D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170D6Cu;
            // 0x170d70: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170d6c) {
            ctx->pc = 0x170D80u;
            goto label_170d80;
        }
    }
    ctx->pc = 0x170D74u;
label_170d74:
    // 0x170d74: 0xc05cdfe  jal         func_1737F8
    ctx->pc = 0x170D74u;
    SET_GPR_U32(ctx, 31, 0x170D7Cu);
    ctx->pc = 0x170D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170D74u;
            // 0x170d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1737F8u;
    if (runtime->hasFunction(0x1737F8u)) {
        auto targetFn = runtime->lookupFunction(0x1737F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D7Cu; }
        if (ctx->pc != 0x170D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1737f8_0x173848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D7Cu; }
        if (ctx->pc != 0x170D7Cu) { return; }
    }
    ctx->pc = 0x170D7Cu;
    // 0x170d7c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x170d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_170d80:
    // 0x170d80: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x170d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170d84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x170d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170d88: 0x1443ffd7  bne         $v0, $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x170D88u;
    {
        const bool branch_taken_0x170d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x170D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170D88u;
            // 0x170d8c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170d88) {
            ctx->pc = 0x170CE8u;
            runtime->cooperativeGuestYield();
            goto label_170ce8;
        }
    }
    ctx->pc = 0x170D90u;
label_170d90:
    // 0x170d90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x170d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170d94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170d98: 0x3e00008  jr          $ra
    ctx->pc = 0x170D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170D98u;
            // 0x170d9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170CE8u: goto label_170ce8;
            case 0x170D18u: goto label_170d18;
            case 0x170D24u: goto label_170d24;
            case 0x170D40u: goto label_170d40;
            case 0x170D74u: goto label_170d74;
            case 0x170D80u: goto label_170d80;
            case 0x170D90u: goto label_170d90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170DA0u;
}
