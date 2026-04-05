#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ffea8
// Address: 0x1ffea8 - 0x1fffa0
void entry_1ffea8_0x1fffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ffea8_0x1fffa0");
#endif

    ctx->pc = 0x1ffea8u;

    // 0x1ffea8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ffea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ffeac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ffeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ffeb0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ffeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ffeb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ffeb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffeb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ffeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ffebc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ffebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffec0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ffec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ffec4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ffec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffec8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FFEC8u;
    {
        const bool branch_taken_0x1ffec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFEC8u;
            // 0x1ffecc: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffec8) {
            ctx->pc = 0x1FFEECu;
            goto label_1ffeec;
        }
    }
    ctx->pc = 0x1FFED0u;
label_1ffed0:
    // 0x1ffed0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ffed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ffed4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ffed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ffed8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ffed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ffedc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ffedcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ffee0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ffee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ffee4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ffee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ffee8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ffee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1ffeec:
    // 0x1ffeec: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x1ffeecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ffef0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FFEF0u;
    {
        const bool branch_taken_0x1ffef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFEF0u;
            // 0x1ffef4: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffef0) {
            ctx->pc = 0x1FFF3Cu;
            goto label_1fff3c;
        }
    }
    ctx->pc = 0x1FFEF8u;
    // 0x1ffef8: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1ffef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ffefc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ffefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff00: 0x24a579d0  addiu       $a1, $a1, 0x79D0
    ctx->pc = 0x1fff00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31184));
    // 0x1fff04: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1FFF04u;
    SET_GPR_U32(ctx, 31, 0x1FFF0Cu);
    ctx->pc = 0x1FFF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFF04u;
            // 0x1fff08: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFF0Cu; }
        if (ctx->pc != 0x1FFF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFF0Cu; }
        if (ctx->pc != 0x1FFF0Cu) { return; }
    }
    ctx->pc = 0x1FFF0Cu;
    // 0x1fff0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fff0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff10: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1FFF10u;
    SET_GPR_U32(ctx, 31, 0x1FFF18u);
    ctx->pc = 0x1FFF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFF10u;
            // 0x1fff14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFF18u; }
        if (ctx->pc != 0x1FFF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFF18u; }
        if (ctx->pc != 0x1FFF18u) { return; }
    }
    ctx->pc = 0x1FFF18u;
    // 0x1fff18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fff18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff1c: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1FFF1Cu;
    SET_GPR_U32(ctx, 31, 0x1FFF24u);
    ctx->pc = 0x1FFF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFF1Cu;
            // 0x1fff20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFF24u; }
        if (ctx->pc != 0x1FFF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFF24u; }
        if (ctx->pc != 0x1FFF24u) { return; }
    }
    ctx->pc = 0x1FFF24u;
    // 0x1fff24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fff24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fff28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fff2c: 0x5462ffe8  bnel        $v1, $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1FFF2Cu;
    {
        const bool branch_taken_0x1fff2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fff2c) {
            ctx->pc = 0x1FFF30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFF2Cu;
            // 0x1fff30: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FFED0u;
            runtime->cooperativeGuestYield();
            goto label_1ffed0;
        }
    }
    ctx->pc = 0x1FFF34u;
    // 0x1fff34: 0x5a20ffe6  blezl       $s1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1FFF34u;
    {
        const bool branch_taken_0x1fff34 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x1fff34) {
            ctx->pc = 0x1FFF38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFF34u;
            // 0x1fff38: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FFED0u;
            runtime->cooperativeGuestYield();
            goto label_1ffed0;
        }
    }
    ctx->pc = 0x1FFF3Cu;
label_1fff3c:
    // 0x1fff3c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1fff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1fff40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fff40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fff44: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFF44u;
    {
        const bool branch_taken_0x1fff44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FFF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFF44u;
            // 0x1fff48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff44) {
            ctx->pc = 0x1FFF58u;
            goto label_1fff58;
        }
    }
    ctx->pc = 0x1FFF4Cu;
    // 0x1fff4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fff50: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FFF50u;
    {
        const bool branch_taken_0x1fff50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fff50) {
            ctx->pc = 0x1FFF54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFF50u;
            // 0x1fff54: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FFF58u;
            goto label_1fff58;
        }
    }
    ctx->pc = 0x1FFF58u;
label_1fff58:
    // 0x1fff58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fff58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fff5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fff5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fff60: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1fff60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1fff64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fff64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fff68: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1fff68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1fff6c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1fff6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1fff70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fff70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fff74: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1fff74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1fff78: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x1fff78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1fff7c: 0xe602002c  swc1        $f2, 0x2C($s0)
    ctx->pc = 0x1fff7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1fff80: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1fff80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1fff84: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1fff84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fff88: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1fff88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fff8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fff8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fff90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fff90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fff94: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFF94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFF94u;
            // 0x1fff98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FFED0u: goto label_1ffed0;
            case 0x1FFEECu: goto label_1ffeec;
            case 0x1FFF3Cu: goto label_1fff3c;
            case 0x1FFF58u: goto label_1fff58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FFF9Cu;
    // 0x1fff9c: 0x0  nop
    ctx->pc = 0x1fff9cu;
    // NOP
}
