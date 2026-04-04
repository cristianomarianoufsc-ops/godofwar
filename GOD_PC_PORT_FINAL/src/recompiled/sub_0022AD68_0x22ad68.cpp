#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022AD68
// Address: 0x22ad68 - 0x22adc8
void sub_0022AD68_0x22ad68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AD68_0x22ad68");
#endif

    ctx->pc = 0x22ad68u;

    // 0x22ad68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22ad68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22ad6c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22ad6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22ad70: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22ad70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22ad74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22ad74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ad78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22ad78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22ad7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22ad7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ad80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ad80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ad84: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x22ad84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22ad88: 0x24110060  addiu       $s1, $zero, 0x60
    ctx->pc = 0x22ad88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x22ad8c: 0x911018  mult        $v0, $a0, $s1
    ctx->pc = 0x22ad8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22ad90: 0xc08ab04  jal         func_22AC10
    ctx->pc = 0x22AD90u;
    SET_GPR_U32(ctx, 31, 0x22AD98u);
    ctx->pc = 0x22AD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AD90u;
            // 0x22ad94: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AC10u;
    if (runtime->hasFunction(0x22AC10u)) {
        auto targetFn = runtime->lookupFunction(0x22AC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AD98u; }
        if (ctx->pc != 0x22AD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022AC10_0x22ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AD98u; }
        if (ctx->pc != 0x22AD98u) { return; }
    }
    ctx->pc = 0x22AD98u;
    // 0x22ad98: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x22ad98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22ad9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22ad9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ada0: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x22ada0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x22ada4: 0x911018  mult        $v0, $a0, $s1
    ctx->pc = 0x22ada4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22ada8: 0xc08ab04  jal         func_22AC10
    ctx->pc = 0x22ADA8u;
    SET_GPR_U32(ctx, 31, 0x22ADB0u);
    ctx->pc = 0x22ADACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22ADA8u;
            // 0x22adac: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AC10u;
    if (runtime->hasFunction(0x22AC10u)) {
        auto targetFn = runtime->lookupFunction(0x22AC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ADB0u; }
        if (ctx->pc != 0x22ADB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022AC10_0x22ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ADB0u; }
        if (ctx->pc != 0x22ADB0u) { return; }
    }
    ctx->pc = 0x22ADB0u;
    // 0x22adb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22adb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22adb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22adb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22adb8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22adb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22adbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22adbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22adc0: 0x3e00008  jr          $ra
    ctx->pc = 0x22ADC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ADC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ADC0u;
            // 0x22adc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22ADC8u;
}
