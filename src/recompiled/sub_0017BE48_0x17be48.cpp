#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017BE48
// Address: 0x17be48 - 0x17bed0
void sub_0017BE48_0x17be48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BE48_0x17be48");
#endif

    ctx->pc = 0x17be48u;

    // 0x17be48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17be48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17be4c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17be4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17be50: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17be50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17be54: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x17be54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x17be58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17be58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17be5c: 0x8e42c600  lw          $v0, -0x3A00($s2)
    ctx->pc = 0x17be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952448)));
    // 0x17be60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17be60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17be64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17be68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17be68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17be6c: 0xae40c600  sw          $zero, -0x3A00($s2)
    ctx->pc = 0x17be6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294952448), GPR_U32(ctx, 0));
    // 0x17be70: 0xac62c604  sw          $v0, -0x39FC($v1)
    ctx->pc = 0x17be70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952452), GPR_U32(ctx, 2));
    // 0x17be74: 0x0  nop
    ctx->pc = 0x17be74u;
    // NOP
label_17be78:
    // 0x17be78: 0x241001c0  addiu       $s0, $zero, 0x1C0
    ctx->pc = 0x17be78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x17be7c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x17be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x17be80: 0x2308018  mult        $s0, $s1, $s0
    ctx->pc = 0x17be80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x17be84: 0x2442d9c0  addiu       $v0, $v0, -0x2640
    ctx->pc = 0x17be84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957504));
    // 0x17be88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17be88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17be8c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17be8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17be90: 0xc05f04c  jal         func_17C130
    ctx->pc = 0x17BE90u;
    SET_GPR_U32(ctx, 31, 0x17BE98u);
    ctx->pc = 0x17BE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE90u;
            // 0x17be94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C130u;
    if (runtime->hasFunction(0x17C130u)) {
        auto targetFn = runtime->lookupFunction(0x17C130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE98u; }
        if (ctx->pc != 0x17BE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C130_0x17c130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE98u; }
        if (ctx->pc != 0x17BE98u) { return; }
    }
    ctx->pc = 0x17BE98u;
    // 0x17be98: 0xc05efde  jal         func_17BF78
    ctx->pc = 0x17BE98u;
    SET_GPR_U32(ctx, 31, 0x17BEA0u);
    ctx->pc = 0x17BE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE98u;
            // 0x17be9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17BF78u;
    if (runtime->hasFunction(0x17BF78u)) {
        auto targetFn = runtime->lookupFunction(0x17BF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BEA0u; }
        if (ctx->pc != 0x17BEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17bf78_0x17bfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BEA0u; }
        if (ctx->pc != 0x17BEA0u) { return; }
    }
    ctx->pc = 0x17BEA0u;
    // 0x17bea0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x17bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17bea4: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x17bea4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17bea8: 0x8e42c600  lw          $v0, -0x3A00($s2)
    ctx->pc = 0x17bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952448)));
    // 0x17beac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17beacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17beb0: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x17BEB0u;
    {
        const bool branch_taken_0x17beb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BEB0u;
            // 0x17beb4: 0xae42c600  sw          $v0, -0x3A00($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294952448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17beb0) {
            ctx->pc = 0x17BE78u;
            runtime->cooperativeGuestYield();
            goto label_17be78;
        }
    }
    ctx->pc = 0x17BEB8u;
    // 0x17beb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17beb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17bebc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17bebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bec0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17bec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bec8: 0x3e00008  jr          $ra
    ctx->pc = 0x17BEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BEC8u;
            // 0x17becc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BE78u: goto label_17be78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17BED0u;
}
