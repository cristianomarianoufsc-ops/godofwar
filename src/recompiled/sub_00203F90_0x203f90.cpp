#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00203F90
// Address: 0x203f90 - 0x204048
void sub_00203F90_0x203f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203F90_0x203f90");
#endif

    ctx->pc = 0x203f90u;

    // 0x203f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x203f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x203f94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x203f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x203f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x203f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x203f9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x203f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x203fa4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x203fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203fa8: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x203fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x203fac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x203facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x203fb0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x203fb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x203fb4: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x203fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x203fb8: 0x40f809  jalr        $v0
    ctx->pc = 0x203FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203FC0u);
        ctx->pc = 0x203FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203FB8u;
            // 0x203fbc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203FC0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204010u: goto label_204010;
            case 0x204030u: goto label_204030;
            case 0x204034u: goto label_204034;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203FC0u; }
            if (ctx->pc != 0x203FC0u) { return; }
        }
        }
    }
    ctx->pc = 0x203FC0u;
    // 0x203fc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203fc4: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x203FC4u;
    {
        const bool branch_taken_0x203fc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x203FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203FC4u;
            // 0x203fc8: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203fc4) {
            ctx->pc = 0x204030u;
            goto label_204030;
        }
    }
    ctx->pc = 0x203FCCu;
    // 0x203fcc: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x203fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x203fd0: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x203fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x203fd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x203fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x203fd8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x203FD8u;
    {
        const bool branch_taken_0x203fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203fd8) {
            ctx->pc = 0x203FDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203FD8u;
            // 0x203fdc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204034u;
            goto label_204034;
        }
    }
    ctx->pc = 0x203FE0u;
    // 0x203fe0: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x203FE0u;
    {
        const bool branch_taken_0x203fe0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x203FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203FE0u;
            // 0x203fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203fe0) {
            ctx->pc = 0x204010u;
            goto label_204010;
        }
    }
    ctx->pc = 0x203FE8u;
    // 0x203fe8: 0xc080434  jal         func_2010D0
    ctx->pc = 0x203FE8u;
    SET_GPR_U32(ctx, 31, 0x203FF0u);
    ctx->pc = 0x203FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203FE8u;
            // 0x203fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2010D0u;
    if (runtime->hasFunction(0x2010D0u)) {
        auto targetFn = runtime->lookupFunction(0x2010D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203FF0u; }
        if (ctx->pc != 0x203FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002010D0_0x2010d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203FF0u; }
        if (ctx->pc != 0x203FF0u) { return; }
    }
    ctx->pc = 0x203FF0u;
    // 0x203ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203ff4: 0xc080434  jal         func_2010D0
    ctx->pc = 0x203FF4u;
    SET_GPR_U32(ctx, 31, 0x203FFCu);
    ctx->pc = 0x203FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203FF4u;
            // 0x203ff8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2010D0u;
    if (runtime->hasFunction(0x2010D0u)) {
        auto targetFn = runtime->lookupFunction(0x2010D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203FFCu; }
        if (ctx->pc != 0x203FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002010D0_0x2010d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203FFCu; }
        if (ctx->pc != 0x203FFCu) { return; }
    }
    ctx->pc = 0x203FFCu;
    // 0x203ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204000: 0xc080434  jal         func_2010D0
    ctx->pc = 0x204000u;
    SET_GPR_U32(ctx, 31, 0x204008u);
    ctx->pc = 0x204004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204000u;
            // 0x204004: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2010D0u;
    if (runtime->hasFunction(0x2010D0u)) {
        auto targetFn = runtime->lookupFunction(0x2010D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204008u; }
        if (ctx->pc != 0x204008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002010D0_0x2010d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204008u; }
        if (ctx->pc != 0x204008u) { return; }
    }
    ctx->pc = 0x204008u;
    // 0x204008: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x204008u;
    {
        const bool branch_taken_0x204008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20400Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204008u;
            // 0x20400c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204008) {
            ctx->pc = 0x204034u;
            goto label_204034;
        }
    }
    ctx->pc = 0x204010u;
label_204010:
    // 0x204010: 0xc08048c  jal         func_201230
    ctx->pc = 0x204010u;
    SET_GPR_U32(ctx, 31, 0x204018u);
    ctx->pc = 0x204014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204010u;
            // 0x204014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201230u;
    if (runtime->hasFunction(0x201230u)) {
        auto targetFn = runtime->lookupFunction(0x201230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204018u; }
        if (ctx->pc != 0x204018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201230_0x201230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204018u; }
        if (ctx->pc != 0x204018u) { return; }
    }
    ctx->pc = 0x204018u;
    // 0x204018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20401c: 0xc08048c  jal         func_201230
    ctx->pc = 0x20401Cu;
    SET_GPR_U32(ctx, 31, 0x204024u);
    ctx->pc = 0x204020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20401Cu;
            // 0x204020: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201230u;
    if (runtime->hasFunction(0x201230u)) {
        auto targetFn = runtime->lookupFunction(0x201230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204024u; }
        if (ctx->pc != 0x204024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201230_0x201230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204024u; }
        if (ctx->pc != 0x204024u) { return; }
    }
    ctx->pc = 0x204024u;
    // 0x204024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204028: 0xc08048c  jal         func_201230
    ctx->pc = 0x204028u;
    SET_GPR_U32(ctx, 31, 0x204030u);
    ctx->pc = 0x20402Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204028u;
            // 0x20402c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201230u;
    if (runtime->hasFunction(0x201230u)) {
        auto targetFn = runtime->lookupFunction(0x201230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204030u; }
        if (ctx->pc != 0x204030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201230_0x201230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204030u; }
        if (ctx->pc != 0x204030u) { return; }
    }
    ctx->pc = 0x204030u;
label_204030:
    // 0x204030: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x204030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_204034:
    // 0x204034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20403c: 0x3e00008  jr          $ra
    ctx->pc = 0x20403Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20403Cu;
            // 0x204040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204010u: goto label_204010;
            case 0x204030u: goto label_204030;
            case 0x204034u: goto label_204034;
            default: break;
        }
        return;
    }
    ctx->pc = 0x204044u;
    // 0x204044: 0x0  nop
    ctx->pc = 0x204044u;
    // NOP
}
