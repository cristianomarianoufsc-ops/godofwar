#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AE9D8
// Address: 0x1ae9d8 - 0x1aea58
void sub_001AE9D8_0x1ae9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE9D8_0x1ae9d8");
#endif

    ctx->pc = 0x1ae9d8u;

    // 0x1ae9d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ae9dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ae9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ae9e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ae9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ae9e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ae9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae9e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ae9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ae9ec: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1ae9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1ae9f0: 0x2610e6b8  addiu       $s0, $s0, -0x1948
    ctx->pc = 0x1ae9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960824));
    // 0x1ae9f4: 0x8e021704  lw          $v0, 0x1704($s0)
    ctx->pc = 0x1ae9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5892)));
    // 0x1ae9f8: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1AE9F8u;
    SET_GPR_U32(ctx, 31, 0x1AEA00u);
    ctx->pc = 0x1AE9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE9F8u;
            // 0x1ae9fc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA00u; }
        if (ctx->pc != 0x1AEA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA00u; }
        if (ctx->pc != 0x1AEA00u) { return; }
    }
    ctx->pc = 0x1AEA00u;
    // 0x1aea00: 0x8e021708  lw          $v0, 0x1708($s0)
    ctx->pc = 0x1aea00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5896)));
    // 0x1aea04: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x1aea04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1aea08: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1aea08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aea0c: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1AEA0Cu;
    SET_GPR_U32(ctx, 31, 0x1AEA14u);
    ctx->pc = 0x1AEA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA0Cu;
            // 0x1aea10: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA14u; }
        if (ctx->pc != 0x1AEA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA14u; }
        if (ctx->pc != 0x1AEA14u) { return; }
    }
    ctx->pc = 0x1AEA14u;
    // 0x1aea14: 0x8e051704  lw          $a1, 0x1704($s0)
    ctx->pc = 0x1aea14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5892)));
    // 0x1aea18: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1aea18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1aea1c: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1AEA1Cu;
    SET_GPR_U32(ctx, 31, 0x1AEA24u);
    ctx->pc = 0x1AEA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA1Cu;
            // 0x1aea20: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA24u; }
        if (ctx->pc != 0x1AEA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA24u; }
        if (ctx->pc != 0x1AEA24u) { return; }
    }
    ctx->pc = 0x1AEA24u;
    // 0x1aea24: 0x8e021708  lw          $v0, 0x1708($s0)
    ctx->pc = 0x1aea24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5896)));
    // 0x1aea28: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1aea28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1aea2c: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1aea2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1aea30: 0x2812  mflo        $a1
    ctx->pc = 0x1aea30u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1aea34: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1AEA34u;
    SET_GPR_U32(ctx, 31, 0x1AEA3Cu);
    ctx->pc = 0x1AEA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA34u;
            // 0x1aea38: 0x26040804  addiu       $a0, $s0, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA3Cu; }
        if (ctx->pc != 0x1AEA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA3Cu; }
        if (ctx->pc != 0x1AEA3Cu) { return; }
    }
    ctx->pc = 0x1AEA3Cu;
    // 0x1aea3c: 0x26041604  addiu       $a0, $s0, 0x1604
    ctx->pc = 0x1aea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5636));
    // 0x1aea40: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1AEA40u;
    SET_GPR_U32(ctx, 31, 0x1AEA48u);
    ctx->pc = 0x1AEA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA40u;
            // 0x1aea44: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA48u; }
        if (ctx->pc != 0x1AEA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA48u; }
        if (ctx->pc != 0x1AEA48u) { return; }
    }
    ctx->pc = 0x1AEA48u;
    // 0x1aea48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1aea48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aea4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aea4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aea50: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA50u;
            // 0x1aea54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEA58u;
}
