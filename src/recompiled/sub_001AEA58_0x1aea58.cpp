#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AEA58
// Address: 0x1aea58 - 0x1aeb40
void sub_001AEA58_0x1aea58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEA58_0x1aea58");
#endif

    ctx->pc = 0x1aea58u;

    // 0x1aea58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1aea58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1aea5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aea5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea60: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1aea60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1aea64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1aea64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1aea68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1aea68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1aea6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aea6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aea70: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x1aea70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x1aea74: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1aea74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1aea78:
    // 0x1aea78: 0x24e2e6b8  addiu       $v0, $a3, -0x1948
    ctx->pc = 0x1aea78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960824));
    // 0x1aea7c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1aea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aea80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aea80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aea84: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1aea84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1aea88: 0xa4440004  sh          $a0, 0x4($v0)
    ctx->pc = 0x1aea88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x1aea8c: 0x28c20400  slti        $v0, $a2, 0x400
    ctx->pc = 0x1aea8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1aea90: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AEA90u;
    {
        const bool branch_taken_0x1aea90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA90u;
            // 0x1aea94: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aea90) {
            ctx->pc = 0x1AEA78u;
            runtime->cooperativeGuestYield();
            goto label_1aea78;
        }
    }
    ctx->pc = 0x1AEA98u;
    // 0x1aea98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aea98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea9c: 0x2412001c  addiu       $s2, $zero, 0x1C
    ctx->pc = 0x1aea9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1aeaa0: 0x24f0e6b8  addiu       $s0, $a3, -0x1948
    ctx->pc = 0x1aeaa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960824));
    // 0x1aeaa4: 0x0  nop
    ctx->pc = 0x1aeaa4u;
    // NOP
label_1aeaa8:
    // 0x1aeaa8: 0xd21018  mult        $v0, $a2, $s2
    ctx->pc = 0x1aeaa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1aeaac: 0x26110804  addiu       $s1, $s0, 0x804
    ctx->pc = 0x1aeaacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2052));
    // 0x1aeab0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1aeab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1aeab4: 0x28c50080  slti        $a1, $a2, 0x80
    ctx->pc = 0x1aeab4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1aeab8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1aeab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1aeabc: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x1aeabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1aeac0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1aeac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1aeac4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1aeac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1aeac8: 0xac800808  sw          $zero, 0x808($a0)
    ctx->pc = 0x1aeac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2056), GPR_U32(ctx, 0));
    // 0x1aeacc: 0xa040081d  sb          $zero, 0x81D($v0)
    ctx->pc = 0x1aeaccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2077), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aead0: 0xa040080c  sb          $zero, 0x80C($v0)
    ctx->pc = 0x1aead0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2060), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aead4: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1AEAD4u;
    {
        const bool branch_taken_0x1aead4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEAD4u;
            // 0x1aead8: 0xa040081c  sb          $zero, 0x81C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2076), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aead4) {
            ctx->pc = 0x1AEAA8u;
            runtime->cooperativeGuestYield();
            goto label_1aeaa8;
        }
    }
    ctx->pc = 0x1AEADCu;
    // 0x1aeadc: 0x26041704  addiu       $a0, $s0, 0x1704
    ctx->pc = 0x1aeadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5892));
    // 0x1aeae0: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1AEAE0u;
    SET_GPR_U32(ctx, 31, 0x1AEAE8u);
    ctx->pc = 0x1AEAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEAE0u;
            // 0x1aeae4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEAE8u; }
        if (ctx->pc != 0x1AEAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEAE8u; }
        if (ctx->pc != 0x1AEAE8u) { return; }
    }
    ctx->pc = 0x1AEAE8u;
    // 0x1aeae8: 0x26041708  addiu       $a0, $s0, 0x1708
    ctx->pc = 0x1aeae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5896));
    // 0x1aeaec: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1AEAECu;
    SET_GPR_U32(ctx, 31, 0x1AEAF4u);
    ctx->pc = 0x1AEAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEAECu;
            // 0x1aeaf0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEAF4u; }
        if (ctx->pc != 0x1AEAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEAF4u; }
        if (ctx->pc != 0x1AEAF4u) { return; }
    }
    ctx->pc = 0x1AEAF4u;
    // 0x1aeaf4: 0x8e051704  lw          $a1, 0x1704($s0)
    ctx->pc = 0x1aeaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5892)));
    // 0x1aeaf8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1aeaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1aeafc: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1AEAFCu;
    SET_GPR_U32(ctx, 31, 0x1AEB04u);
    ctx->pc = 0x1AEB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEAFCu;
            // 0x1aeb00: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB04u; }
        if (ctx->pc != 0x1AEB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB04u; }
        if (ctx->pc != 0x1AEB04u) { return; }
    }
    ctx->pc = 0x1AEB04u;
    // 0x1aeb04: 0x8e051708  lw          $a1, 0x1708($s0)
    ctx->pc = 0x1aeb04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5896)));
    // 0x1aeb08: 0xb20018  mult        $zero, $a1, $s2
    ctx->pc = 0x1aeb08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1aeb0c: 0x2812  mflo        $a1
    ctx->pc = 0x1aeb0cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1aeb10: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1AEB10u;
    SET_GPR_U32(ctx, 31, 0x1AEB18u);
    ctx->pc = 0x1AEB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB10u;
            // 0x1aeb14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB18u; }
        if (ctx->pc != 0x1AEB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB18u; }
        if (ctx->pc != 0x1AEB18u) { return; }
    }
    ctx->pc = 0x1AEB18u;
    // 0x1aeb18: 0x26041604  addiu       $a0, $s0, 0x1604
    ctx->pc = 0x1aeb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5636));
    // 0x1aeb1c: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1AEB1Cu;
    SET_GPR_U32(ctx, 31, 0x1AEB24u);
    ctx->pc = 0x1AEB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB1Cu;
            // 0x1aeb20: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB24u; }
        if (ctx->pc != 0x1AEB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB24u; }
        if (ctx->pc != 0x1AEB24u) { return; }
    }
    ctx->pc = 0x1AEB24u;
    // 0x1aeb24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1aeb24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aeb28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1aeb28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aeb2c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1aeb2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeb30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aeb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aeb34: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEB34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB34u;
            // 0x1aeb38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AEA78u: goto label_1aea78;
            case 0x1AEAA8u: goto label_1aeaa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AEB3Cu;
    // 0x1aeb3c: 0x0  nop
    ctx->pc = 0x1aeb3cu;
    // NOP
}
