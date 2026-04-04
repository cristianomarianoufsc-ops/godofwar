#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00290CD8
// Address: 0x290cd8 - 0x290e48
void sub_00290CD8_0x290cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290CD8_0x290cd8");
#endif

    ctx->pc = 0x290cd8u;

    // 0x290cd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x290cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x290cdc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x290cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x290ce0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x290ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x290ce4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x290ce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ce8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x290ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x290cec: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x290cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x290cf0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x290cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x290cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290cf8: 0xc0a2d92  jal         func_28B648
    ctx->pc = 0x290CF8u;
    SET_GPR_U32(ctx, 31, 0x290D00u);
    ctx->pc = 0x290CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290CF8u;
            // 0x290cfc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B648u;
    if (runtime->hasFunction(0x28B648u)) {
        auto targetFn = runtime->lookupFunction(0x28B648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D00u; }
        if (ctx->pc != 0x290D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B648_0x28b648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D00u; }
        if (ctx->pc != 0x290D00u) { return; }
    }
    ctx->pc = 0x290D00u;
    // 0x290d00: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x290d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x290d04: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x290d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x290d08: 0x24544638  addiu       $s4, $v0, 0x4638
    ctx->pc = 0x290d08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 17976));
    // 0x290d0c: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x290d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x290d10: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x290d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x290d14: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x290d14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x290d18: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x290d18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x290d1c: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x290d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x290d20: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x290d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x290d24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x290d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x290d28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x290d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x290d2c: 0x2883e  dsrl32      $s1, $v0, 0
    ctx->pc = 0x290d2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x290d30: 0x230802f  dsubu       $s0, $s1, $s0
    ctx->pc = 0x290d30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) - GPR_U64(ctx, 16));
    // 0x290d34: 0xc0a0fc6  jal         func_283F18
    ctx->pc = 0x290D34u;
    SET_GPR_U32(ctx, 31, 0x290D3Cu);
    ctx->pc = 0x290D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290D34u;
            // 0x290d38: 0x66040fef  daddiu      $a0, $s0, 0xFEF (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4079);
        ctx->in_delay_slot = false;
    ctx->pc = 0x283F18u;
    if (runtime->hasFunction(0x283F18u)) {
        auto targetFn = runtime->lookupFunction(0x283F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D3Cu; }
        if (ctx->pc != 0x290D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283f18_0x2844e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D3Cu; }
        if (ctx->pc != 0x290D3Cu) { return; }
    }
    ctx->pc = 0x290D3Cu;
    // 0x290d3c: 0x6444ffff  daddiu      $a0, $v0, -0x1
    ctx->pc = 0x290d3cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x290d40: 0xc0a0fac  jal         func_283EB0
    ctx->pc = 0x290D40u;
    SET_GPR_U32(ctx, 31, 0x290D48u);
    ctx->pc = 0x290D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290D40u;
            // 0x290d44: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283EB0u;
    if (runtime->hasFunction(0x283EB0u)) {
        auto targetFn = runtime->lookupFunction(0x283EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D48u; }
        if (ctx->pc != 0x290D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283eb0_0x283f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D48u; }
        if (ctx->pc != 0x290D48u) { return; }
    }
    ctx->pc = 0x290D48u;
    // 0x290d48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290d4c: 0x2a021000  slti        $v0, $s0, 0x1000
    ctx->pc = 0x290d4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x290d50: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x290D50u;
    {
        const bool branch_taken_0x290d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290D50u;
            // 0x290d54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d50) {
            ctx->pc = 0x290DE0u;
            goto label_290de0;
        }
    }
    ctx->pc = 0x290D58u;
    // 0x290d58: 0xc0a4870  jal         func_2921C0
    ctx->pc = 0x290D58u;
    SET_GPR_U32(ctx, 31, 0x290D60u);
    ctx->pc = 0x290D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290D58u;
            // 0x290d5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2921C0u;
    if (runtime->hasFunction(0x2921C0u)) {
        auto targetFn = runtime->lookupFunction(0x2921C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D60u; }
        if (ctx->pc != 0x290D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002921C0_0x2921c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D60u; }
        if (ctx->pc != 0x290D60u) { return; }
    }
    ctx->pc = 0x290D60u;
    // 0x290d60: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x290d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x290d64: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x290d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x290d68: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x290d68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x290d6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x290d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290d70: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x290D70u;
    {
        const bool branch_taken_0x290d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x290D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290D70u;
            // 0x290d74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d70) {
            ctx->pc = 0x290DE0u;
            goto label_290de0;
        }
    }
    ctx->pc = 0x290D78u;
    // 0x290d78: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x290d78u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x290d7c: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x290d7cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x290d80: 0xc0a4870  jal         func_2921C0
    ctx->pc = 0x290D80u;
    SET_GPR_U32(ctx, 31, 0x290D88u);
    ctx->pc = 0x290D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290D80u;
            // 0x290d84: 0x132823  negu        $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2921C0u;
    if (runtime->hasFunction(0x2921C0u)) {
        auto targetFn = runtime->lookupFunction(0x2921C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D88u; }
        if (ctx->pc != 0x290D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002921C0_0x2921c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D88u; }
        if (ctx->pc != 0x290D88u) { return; }
    }
    ctx->pc = 0x290D88u;
    // 0x290d88: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x290d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x290d8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x290d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x290d90: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x290D90u;
    {
        const bool branch_taken_0x290d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x290D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290D90u;
            // 0x290d94: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d90) {
            ctx->pc = 0x290DF0u;
            goto label_290df0;
        }
    }
    ctx->pc = 0x290D98u;
    // 0x290d98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290d9c: 0xc0a4870  jal         func_2921C0
    ctx->pc = 0x290D9Cu;
    SET_GPR_U32(ctx, 31, 0x290DA4u);
    ctx->pc = 0x290DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290D9Cu;
            // 0x290da0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2921C0u;
    if (runtime->hasFunction(0x2921C0u)) {
        auto targetFn = runtime->lookupFunction(0x2921C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290DA4u; }
        if (ctx->pc != 0x290DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002921C0_0x2921c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290DA4u; }
        if (ctx->pc != 0x290DA4u) { return; }
    }
    ctx->pc = 0x290DA4u;
    // 0x290da4: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x290da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x290da8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x290da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290dac: 0xa68823  subu        $s1, $a1, $a2
    ctx->pc = 0x290dacu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x290db0: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x290db0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x290db4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x290DB4u;
    {
        const bool branch_taken_0x290db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290DB4u;
            // 0x290db8: 0x3c04002a  lui         $a0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290db4) {
            ctx->pc = 0x290DE0u;
            goto label_290de0;
        }
    }
    ctx->pc = 0x290DBCu;
    // 0x290dbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290dc0: 0x8c834a50  lw          $v1, 0x4A50($a0)
    ctx->pc = 0x290dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 19024)));
    // 0x290dc4: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x290dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x290dc8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x290dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x290dcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x290dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x290dd0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x290dd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x290dd4: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x290dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x290dd8: 0xac834a68  sw          $v1, 0x4A68($a0)
    ctx->pc = 0x290dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 19048), GPR_U32(ctx, 3));
    // 0x290ddc: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x290ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_290de0:
    // 0x290de0: 0xc0a2daa  jal         func_28B6A8
    ctx->pc = 0x290DE0u;
    SET_GPR_U32(ctx, 31, 0x290DE8u);
    ctx->pc = 0x290DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290DE0u;
            // 0x290de4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B6A8u;
    if (runtime->hasFunction(0x28B6A8u)) {
        auto targetFn = runtime->lookupFunction(0x28B6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290DE8u; }
        if (ctx->pc != 0x290DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B6A8_0x28b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290DE8u; }
        if (ctx->pc != 0x290DE8u) { return; }
    }
    ctx->pc = 0x290DE8u;
    // 0x290de8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x290DE8u;
    {
        const bool branch_taken_0x290de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290DE8u;
            // 0x290dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290de8) {
            ctx->pc = 0x290E24u;
            goto label_290e24;
        }
    }
    ctx->pc = 0x290DF0u;
label_290df0:
    // 0x290df0: 0x230102f  dsubu       $v0, $s1, $s0
    ctx->pc = 0x290df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) - GPR_U64(ctx, 16));
    // 0x290df4: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x290df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x290df8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x290df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x290dfc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x290dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x290e00: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x290e00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x290e04: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x290e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x290e08: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x290e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x290e0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x290e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e10: 0x8c624a68  lw          $v0, 0x4A68($v1)
    ctx->pc = 0x290e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19048)));
    // 0x290e14: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x290e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x290e18: 0xc0a2daa  jal         func_28B6A8
    ctx->pc = 0x290E18u;
    SET_GPR_U32(ctx, 31, 0x290E20u);
    ctx->pc = 0x290E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290E18u;
            // 0x290e1c: 0xac624a68  sw          $v0, 0x4A68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 19048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B6A8u;
    if (runtime->hasFunction(0x28B6A8u)) {
        auto targetFn = runtime->lookupFunction(0x28B6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290E20u; }
        if (ctx->pc != 0x290E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B6A8_0x28b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290E20u; }
        if (ctx->pc != 0x290E20u) { return; }
    }
    ctx->pc = 0x290E20u;
    // 0x290e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290e24:
    // 0x290e24: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x290e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290e28: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x290e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290e2c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x290e2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290e30: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x290e30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290e34: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x290e34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x290E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290E3Cu;
            // 0x290e40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290DE0u: goto label_290de0;
            case 0x290DF0u: goto label_290df0;
            case 0x290E24u: goto label_290e24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x290E44u;
    // 0x290e44: 0x0  nop
    ctx->pc = 0x290e44u;
    // NOP
}
