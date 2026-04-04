#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161DF0
// Address: 0x161df0 - 0x161ef0
void sub_00161DF0_0x161df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161DF0_0x161df0");
#endif

    ctx->pc = 0x161df0u;

    // 0x161df0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x161df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x161df4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x161df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x161df8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x161df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x161dfc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x161dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x161e00: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x161e00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x161e04: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x161e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x161e08: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x161e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161e0c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x161e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x161e10: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x161e10u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x161e14: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x161e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x161e18: 0x36528000  ori         $s2, $s2, 0x8000
    ctx->pc = 0x161e18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32768);
    // 0x161e1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161e20: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x161E20u;
    SET_GPR_U32(ctx, 31, 0x161E28u);
    ctx->pc = 0x161E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E20u;
            // 0x161e24: 0x3c140033  lui         $s4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E28u; }
        if (ctx->pc != 0x161E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E28u; }
        if (ctx->pc != 0x161E28u) { return; }
    }
    ctx->pc = 0x161E28u;
    // 0x161e28: 0x8e03f168  lw          $v1, -0xE98($s0)
    ctx->pc = 0x161e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x161e2c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x161e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x161e30: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x161e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x161e34: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x161e34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x161e38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x161e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x161e3c: 0x26731080  addiu       $s3, $s3, 0x1080
    ctx->pc = 0x161e3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4224));
    // 0x161e40: 0x3c056000  lui         $a1, 0x6000
    ctx->pc = 0x161e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24576 << 16));
    // 0x161e44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x161e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e48: 0x8e871088  lw          $a3, 0x1088($s4)
    ctx->pc = 0x161e48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4232)));
    // 0x161e4c: 0x8e03f168  lw          $v1, -0xE98($s0)
    ctx->pc = 0x161e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x161e50: 0x2273823  subu        $a3, $s1, $a3
    ctx->pc = 0x161e50u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x161e54: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x161e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x161e58: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x161e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x161e5c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x161e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x161e60: 0xae03f168  sw          $v1, -0xE98($s0)
    ctx->pc = 0x161e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 3));
    // 0x161e64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x161e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161e68: 0xc04fe5c  jal         func_13F970
    ctx->pc = 0x161E68u;
    SET_GPR_U32(ctx, 31, 0x161E70u);
    ctx->pc = 0x161E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E68u;
            // 0x161e6c: 0xae871088  sw          $a3, 0x1088($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4232), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F970u;
    if (runtime->hasFunction(0x13F970u)) {
        auto targetFn = runtime->lookupFunction(0x13F970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E70u; }
        if (ctx->pc != 0x161E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f970_0x13f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E70u; }
        if (ctx->pc != 0x161E70u) { return; }
    }
    ctx->pc = 0x161E70u;
    // 0x161e70: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x161e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x161e74: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x161e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x161e78: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x161e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x161e7c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x161e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x161e80: 0xc04fe72  jal         func_13F9C8
    ctx->pc = 0x161E80u;
    SET_GPR_U32(ctx, 31, 0x161E88u);
    ctx->pc = 0x161E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E80u;
            // 0x161e84: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F9C8u;
    if (runtime->hasFunction(0x13F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E88u; }
        if (ctx->pc != 0x161E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f9c8_0x13fa20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E88u; }
        if (ctx->pc != 0x161E88u) { return; }
    }
    ctx->pc = 0x161E88u;
    // 0x161e88: 0x8e821088  lw          $v0, 0x1088($s4)
    ctx->pc = 0x161e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4232)));
    // 0x161e8c: 0x3c056000  lui         $a1, 0x6000
    ctx->pc = 0x161e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24576 << 16));
    // 0x161e90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x161e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e94: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x161e94u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x161e98: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x161e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x161e9c: 0xae911088  sw          $s1, 0x1088($s4)
    ctx->pc = 0x161e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4232), GPR_U32(ctx, 17));
    // 0x161ea0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x161ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x161ea4: 0xc04fe5c  jal         func_13F970
    ctx->pc = 0x161EA4u;
    SET_GPR_U32(ctx, 31, 0x161EACu);
    ctx->pc = 0x161EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161EA4u;
            // 0x161ea8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F970u;
    if (runtime->hasFunction(0x13F970u)) {
        auto targetFn = runtime->lookupFunction(0x13F970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EACu; }
        if (ctx->pc != 0x161EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f970_0x13f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EACu; }
        if (ctx->pc != 0x161EACu) { return; }
    }
    ctx->pc = 0x161EACu;
    // 0x161eac: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x161eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x161eb0: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x161eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x161eb4: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x161eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x161eb8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x161eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x161ebc: 0xc04fe72  jal         func_13F9C8
    ctx->pc = 0x161EBCu;
    SET_GPR_U32(ctx, 31, 0x161EC4u);
    ctx->pc = 0x161EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161EBCu;
            // 0x161ec0: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F9C8u;
    if (runtime->hasFunction(0x13F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EC4u; }
        if (ctx->pc != 0x161EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f9c8_0x13fa20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EC4u; }
        if (ctx->pc != 0x161EC4u) { return; }
    }
    ctx->pc = 0x161EC4u;
    // 0x161ec4: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x161EC4u;
    SET_GPR_U32(ctx, 31, 0x161ECCu);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161ECCu; }
        if (ctx->pc != 0x161ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161ECCu; }
        if (ctx->pc != 0x161ECCu) { return; }
    }
    ctx->pc = 0x161ECCu;
    // 0x161ecc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x161eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161ed0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x161ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161ed4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x161ed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161ed8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x161ed8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161edc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x161edcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x161EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161EE4u;
            // 0x161ee8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161EECu;
    // 0x161eec: 0x0  nop
    ctx->pc = 0x161eecu;
    // NOP
}
