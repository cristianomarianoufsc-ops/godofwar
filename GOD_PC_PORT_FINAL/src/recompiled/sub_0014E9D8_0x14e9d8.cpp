#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014E9D8
// Address: 0x14e9d8 - 0x14eb00
void sub_0014E9D8_0x14e9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E9D8_0x14e9d8");
#endif

    ctx->pc = 0x14e9d8u;

    // 0x14e9d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14e9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14e9dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14e9dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e9e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x14e9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14e9e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14e9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14e9e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14e9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14e9ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x14e9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x14e9f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e9f4: 0x0  nop
    ctx->pc = 0x14e9f4u;
    // NOP
label_14e9f8:
    // 0x14e9f8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14e9fc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x14e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14ea00: 0x24421910  addiu       $v0, $v0, 0x1910
    ctx->pc = 0x14ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6416));
    // 0x14ea04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14ea04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14ea08: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x14ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14ea0c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x14ea0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ea10: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x14ea10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x14ea14: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x14ea14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea18: 0xaca00800  sw          $zero, 0x800($a1)
    ctx->pc = 0x14ea18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2048), GPR_U32(ctx, 0));
    // 0x14ea1c: 0x28c30200  slti        $v1, $a2, 0x200
    ctx->pc = 0x14ea1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x14ea20: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x14EA20u;
    {
        const bool branch_taken_0x14ea20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EA20u;
            // 0x14ea24: 0xac401000  sw          $zero, 0x1000($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4096), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea20) {
            ctx->pc = 0x14E9F8u;
            runtime->cooperativeGuestYield();
            goto label_14e9f8;
        }
    }
    ctx->pc = 0x14EA28u;
    // 0x14ea28: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x14ea28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x14ea2c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14ea30: 0x2611dd58  addiu       $s1, $s0, -0x22A8
    ctx->pc = 0x14ea30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958424));
    // 0x14ea34: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x14ea34u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x14ea38: 0x8c44f1ac  lw          $a0, -0xE54($v0)
    ctx->pc = 0x14ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963628)));
    // 0x14ea3c: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x14ea3cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x14ea40: 0x9647f1a8  lhu         $a3, -0xE58($s2)
    ctx->pc = 0x14ea40u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294963624)));
    // 0x14ea44: 0x8605dd58  lh          $a1, -0x22A8($s0)
    ctx->pc = 0x14ea44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294958424)));
    // 0x14ea48: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x14ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x14ea4c: 0xc053a3c  jal         func_14E8F0
    ctx->pc = 0x14EA4Cu;
    SET_GPR_U32(ctx, 31, 0x14EA54u);
    ctx->pc = 0x14EA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EA4Cu;
            // 0x14ea50: 0x86260004  lh          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E8F0u;
    if (runtime->hasFunction(0x14E8F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EA54u; }
        if (ctx->pc != 0x14EA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E8F0_0x14e8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EA54u; }
        if (ctx->pc != 0x14EA54u) { return; }
    }
    ctx->pc = 0x14EA54u;
    // 0x14ea54: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14ea58: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x14ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x14ea5c: 0x8c441074  lw          $a0, 0x1074($v0)
    ctx->pc = 0x14ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4212)));
    // 0x14ea60: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x14ea60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x14ea64: 0x2462dd50  addiu       $v0, $v1, -0x22B0
    ctx->pc = 0x14ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958416));
    // 0x14ea68: 0x8465dd50  lh          $a1, -0x22B0($v1)
    ctx->pc = 0x14ea68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294958416)));
    // 0x14ea6c: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x14ea6cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14ea70: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x14ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x14ea74: 0xc053a3c  jal         func_14E8F0
    ctx->pc = 0x14EA74u;
    SET_GPR_U32(ctx, 31, 0x14EA7Cu);
    ctx->pc = 0x14EA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EA74u;
            // 0x14ea78: 0x94e71070  lhu         $a3, 0x1070($a3) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E8F0u;
    if (runtime->hasFunction(0x14E8F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EA7Cu; }
        if (ctx->pc != 0x14EA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E8F0_0x14e8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EA7Cu; }
        if (ctx->pc != 0x14EA7Cu) { return; }
    }
    ctx->pc = 0x14EA7Cu;
    // 0x14ea7c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14ea80: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14ea84: 0x8c44f1a0  lw          $a0, -0xE60($v0)
    ctx->pc = 0x14ea84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963616)));
    // 0x14ea88: 0x8605dd58  lh          $a1, -0x22A8($s0)
    ctx->pc = 0x14ea88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294958424)));
    // 0x14ea8c: 0x9467f19c  lhu         $a3, -0xE64($v1)
    ctx->pc = 0x14ea8cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963612)));
    // 0x14ea90: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x14ea90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x14ea94: 0xc053a3c  jal         func_14E8F0
    ctx->pc = 0x14EA94u;
    SET_GPR_U32(ctx, 31, 0x14EA9Cu);
    ctx->pc = 0x14EA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EA94u;
            // 0x14ea98: 0x86260004  lh          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E8F0u;
    if (runtime->hasFunction(0x14E8F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EA9Cu; }
        if (ctx->pc != 0x14EA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E8F0_0x14e8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EA9Cu; }
        if (ctx->pc != 0x14EA9Cu) { return; }
    }
    ctx->pc = 0x14EA9Cu;
    // 0x14ea9c: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x14ea9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14eaa0: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x14eaa0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x14eaa4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14eaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14eaa8: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x14eaa8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x14eaac: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x14eaacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x14eab0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14eab4: 0x9646f1a8  lhu         $a2, -0xE58($s2)
    ctx->pc = 0x14eab4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294963624)));
    // 0x14eab8: 0x254b3110  addiu       $t3, $t2, 0x3110
    ctx->pc = 0x14eab8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 12560));
    // 0x14eabc: 0xac603124  sw          $zero, 0x3124($v1)
    ctx->pc = 0x14eabcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12580), GPR_U32(ctx, 0));
    // 0x14eac0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x14eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14eac4: 0xad00311c  sw          $zero, 0x311C($t0)
    ctx->pc = 0x14eac4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12572), GPR_U32(ctx, 0));
    // 0x14eac8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14eac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eacc: 0xad203118  sw          $zero, 0x3118($t1)
    ctx->pc = 0x14eaccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12568), GPR_U32(ctx, 0));
    // 0x14ead0: 0xad403110  sw          $zero, 0x3110($t2)
    ctx->pc = 0x14ead0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12560), GPR_U32(ctx, 0));
    // 0x14ead4: 0xac403120  sw          $zero, 0x3120($v0)
    ctx->pc = 0x14ead4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12576), GPR_U32(ctx, 0));
    // 0x14ead8: 0xc0538ec  jal         func_14E3B0
    ctx->pc = 0x14EAD8u;
    SET_GPR_U32(ctx, 31, 0x14EAE0u);
    ctx->pc = 0x14EADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EAD8u;
            // 0x14eadc: 0xad600004  sw          $zero, 0x4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3B0u;
    if (runtime->hasFunction(0x14E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EAE0u; }
        if (ctx->pc != 0x14EAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3B0_0x14e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EAE0u; }
        if (ctx->pc != 0x14EAE0u) { return; }
    }
    ctx->pc = 0x14EAE0u;
    // 0x14eae0: 0xae62f1a4  sw          $v0, -0xE5C($s3)
    ctx->pc = 0x14eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294963620), GPR_U32(ctx, 2));
    // 0x14eae4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x14eae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14eae8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14eae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14eaec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14eaecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14eaf0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x14eaf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14eaf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14eaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14eaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x14EAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EAF8u;
            // 0x14eafc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E9F8u: goto label_14e9f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14EB00u;
}
