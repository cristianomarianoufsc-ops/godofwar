#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00217E08
// Address: 0x217e08 - 0x217f10
void sub_00217E08_0x217e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217E08_0x217e08");
#endif

    ctx->pc = 0x217e08u;

    // 0x217e08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x217e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x217e0c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x217e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x217e10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x217e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x217e14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x217e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x217e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x217e1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217e20: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x217e20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x217e24: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x217e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x217e28: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x217e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x217e2c: 0x8c42ec64  lw          $v0, -0x139C($v0)
    ctx->pc = 0x217e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962276)));
    // 0x217e30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x217e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x217e34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x217e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217e38: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x217e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x217e3c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217E3Cu;
    {
        const bool branch_taken_0x217e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x217E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217E3Cu;
            // 0x217e40: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217e3c) {
            ctx->pc = 0x217E50u;
            goto label_217e50;
        }
    }
    ctx->pc = 0x217E44u;
    // 0x217e44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x217e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x217E48u;
    {
        const bool branch_taken_0x217e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217E48u;
            // 0x217e4c: 0x44800b  movn        $s0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217e48) {
            ctx->pc = 0x217E54u;
            goto label_217e54;
        }
    }
    ctx->pc = 0x217E50u;
label_217e50:
    // 0x217e50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x217e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217e54:
    // 0x217e54: 0x52000027  beql        $s0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x217E54u;
    {
        const bool branch_taken_0x217e54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x217e54) {
            ctx->pc = 0x217E58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x217E54u;
            // 0x217e58: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x217EF4u;
            goto label_217ef4;
        }
    }
    ctx->pc = 0x217E5Cu;
    // 0x217e5c: 0xc040314  jal         func_100C50
    ctx->pc = 0x217E5Cu;
    SET_GPR_U32(ctx, 31, 0x217E64u);
    ctx->pc = 0x217E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217E5Cu;
            // 0x217e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100C50u;
    if (runtime->hasFunction(0x100C50u)) {
        auto targetFn = runtime->lookupFunction(0x100C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217E64u; }
        if (ctx->pc != 0x217E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100C50_0x100c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217E64u; }
        if (ctx->pc != 0x217E64u) { return; }
    }
    ctx->pc = 0x217E64u;
    // 0x217e64: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x217e64u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x217e68: 0xc0402fc  jal         func_100BF0
    ctx->pc = 0x217E68u;
    SET_GPR_U32(ctx, 31, 0x217E70u);
    ctx->pc = 0x217E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217E68u;
            // 0x217e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100BF0u;
    if (runtime->hasFunction(0x100BF0u)) {
        auto targetFn = runtime->lookupFunction(0x100BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217E70u; }
        if (ctx->pc != 0x217E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100BF0_0x100bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217E70u; }
        if (ctx->pc != 0x217E70u) { return; }
    }
    ctx->pc = 0x217E70u;
    // 0x217e70: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x217e70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217e74: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x217E74u;
    {
        const bool branch_taken_0x217e74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x217e74) {
            ctx->pc = 0x217E90u;
            goto label_217e90;
        }
    }
    ctx->pc = 0x217E7Cu;
    // 0x217e7c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x217e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217e80: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x217e80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217e84: 0x0  nop
    ctx->pc = 0x217e84u;
    // NOP
    // 0x217e88: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x217E88u;
    {
        const bool branch_taken_0x217e88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x217e88) {
            ctx->pc = 0x217E8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x217E88u;
            // 0x217e8c: 0xe6540000  swc1        $f20, 0x0($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x217EF0u;
            goto label_217ef0;
        }
    }
    ctx->pc = 0x217E90u;
label_217e90:
    // 0x217e90: 0xc08e498  jal         func_239260
    ctx->pc = 0x217E90u;
    SET_GPR_U32(ctx, 31, 0x217E98u);
    ctx->pc = 0x217E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217E90u;
            // 0x217e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239260u;
    if (runtime->hasFunction(0x239260u)) {
        auto targetFn = runtime->lookupFunction(0x239260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217E98u; }
        if (ctx->pc != 0x217E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239260_0x239268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217E98u; }
        if (ctx->pc != 0x217E98u) { return; }
    }
    ctx->pc = 0x217E98u;
    // 0x217e98: 0x8c510014  lw          $s1, 0x14($v0)
    ctx->pc = 0x217e98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x217e9c: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x217e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x217ea0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x217EA0u;
    {
        const bool branch_taken_0x217ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217ea0) {
            ctx->pc = 0x217EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x217EA0u;
            // 0x217ea4: 0xe6540000  swc1        $f20, 0x0($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x217EF0u;
            goto label_217ef0;
        }
    }
    ctx->pc = 0x217EA8u;
    // 0x217ea8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x217ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x217eac: 0x0  nop
    ctx->pc = 0x217eacu;
    // NOP
label_217eb0:
    // 0x217eb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x217eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217eb4: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x217EB4u;
    SET_GPR_U32(ctx, 31, 0x217EBCu);
    ctx->pc = 0x217EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217EB4u;
            // 0x217eb8: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217EBCu; }
        if (ctx->pc != 0x217EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217EBCu; }
        if (ctx->pc != 0x217EBCu) { return; }
    }
    ctx->pc = 0x217EBCu;
    // 0x217ebc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x217ebcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ec0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x217ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x217ec4: 0x1062fffa  beq         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x217EC4u;
    {
        const bool branch_taken_0x217ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x217EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217EC4u;
            // 0x217ec8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ec4) {
            ctx->pc = 0x217EB0u;
            runtime->cooperativeGuestYield();
            goto label_217eb0;
        }
    }
    ctx->pc = 0x217ECCu;
    // 0x217ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ed0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x217ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ed4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x217ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x217ed8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x217ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217edc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x217edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ee0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x217ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217ee4: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x217EE4u;
    SET_GPR_U32(ctx, 31, 0x217EECu);
    ctx->pc = 0x217EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217EE4u;
            // 0x217ee8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217EECu; }
        if (ctx->pc != 0x217EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217EECu; }
        if (ctx->pc != 0x217EECu) { return; }
    }
    ctx->pc = 0x217EECu;
    // 0x217eec: 0xe6540000  swc1        $f20, 0x0($s2)
    ctx->pc = 0x217eecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_217ef0:
    // 0x217ef0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x217ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_217ef4:
    // 0x217ef4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x217ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217ef8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x217ef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217efc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217f00: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x217f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x217f04: 0x3e00008  jr          $ra
    ctx->pc = 0x217F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217F04u;
            // 0x217f08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217E50u: goto label_217e50;
            case 0x217E54u: goto label_217e54;
            case 0x217E90u: goto label_217e90;
            case 0x217EB0u: goto label_217eb0;
            case 0x217EF0u: goto label_217ef0;
            case 0x217EF4u: goto label_217ef4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217F0Cu;
    // 0x217f0c: 0x0  nop
    ctx->pc = 0x217f0cu;
    // NOP
}
