#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F9C8
// Address: 0x19f9c8 - 0x19fad0
void sub_0019F9C8_0x19f9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F9C8_0x19f9c8");
#endif

    ctx->pc = 0x19f9c8u;

    // 0x19f9c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19f9cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19f9d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19f9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19f9d4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x19f9d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x19f9d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19f9d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f9dc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x19f9dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x19f9e0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x19f9e0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x19f9e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19f9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19f9e8: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x19f9e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x19f9ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19f9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19f9f0: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x19f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x19f9f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f9f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19f9fc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x19f9fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x19fa00: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x19fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x19fa04: 0x40f809  jalr        $v0
    ctx->pc = 0x19FA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19FA0Cu);
        ctx->pc = 0x19FA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA04u;
            // 0x19fa08: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19FA0Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FA74u: goto label_19fa74;
            case 0x19FAA0u: goto label_19faa0;
            case 0x19FAB0u: goto label_19fab0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19FA0Cu; }
            if (ctx->pc != 0x19FA0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19FA0Cu;
    // 0x19fa0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19fa14: 0x12220026  beq         $s1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x19FA14u;
    {
        const bool branch_taken_0x19fa14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x19FA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA14u;
            // 0x19fa18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa14) {
            ctx->pc = 0x19FAB0u;
            goto label_19fab0;
        }
    }
    ctx->pc = 0x19FA1Cu;
    // 0x19fa1c: 0x8c9000ac  lw          $s0, 0xAC($a0)
    ctx->pc = 0x19fa1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x19fa20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19fa20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa24: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x19fa24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fa28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa2c: 0xc0401be  jal         func_1006F8
    ctx->pc = 0x19FA2Cu;
    SET_GPR_U32(ctx, 31, 0x19FA34u);
    ctx->pc = 0x19FA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA2Cu;
            // 0x19fa30: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1006F8u;
    if (runtime->hasFunction(0x1006F8u)) {
        auto targetFn = runtime->lookupFunction(0x1006F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA34u; }
        if (ctx->pc != 0x19FA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001006F8_0x1006f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA34u; }
        if (ctx->pc != 0x19FA34u) { return; }
    }
    ctx->pc = 0x19FA34u;
    // 0x19fa34: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19FA34u;
    {
        const bool branch_taken_0x19fa34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA34u;
            // 0x19fa38: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa34) {
            ctx->pc = 0x19FA74u;
            goto label_19fa74;
        }
    }
    ctx->pc = 0x19FA3Cu;
    // 0x19fa3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19fa40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fa44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19fa48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa4c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x19fa4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fa50: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x19FA50u;
    SET_GPR_U32(ctx, 31, 0x19FA58u);
    ctx->pc = 0x19FA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA50u;
            // 0x19fa54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA58u; }
        if (ctx->pc != 0x19FA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA58u; }
        if (ctx->pc != 0x19FA58u) { return; }
    }
    ctx->pc = 0x19FA58u;
    // 0x19fa58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19fa5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fa60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa64: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x19fa64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa68: 0xc0401be  jal         func_1006F8
    ctx->pc = 0x19FA68u;
    SET_GPR_U32(ctx, 31, 0x19FA70u);
    ctx->pc = 0x19FA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA68u;
            // 0x19fa6c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1006F8u;
    if (runtime->hasFunction(0x1006F8u)) {
        auto targetFn = runtime->lookupFunction(0x1006F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA70u; }
        if (ctx->pc != 0x19FA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001006F8_0x1006f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA70u; }
        if (ctx->pc != 0x19FA70u) { return; }
    }
    ctx->pc = 0x19FA70u;
    // 0x19fa70: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x19fa70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_19fa74:
    // 0x19fa74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa78: 0xc040144  jal         func_100510
    ctx->pc = 0x19FA78u;
    SET_GPR_U32(ctx, 31, 0x19FA80u);
    ctx->pc = 0x19FA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA78u;
            // 0x19fa7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100510u;
    if (runtime->hasFunction(0x100510u)) {
        auto targetFn = runtime->lookupFunction(0x100510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA80u; }
        if (ctx->pc != 0x19FA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100510_0x100510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA80u; }
        if (ctx->pc != 0x19FA80u) { return; }
    }
    ctx->pc = 0x19FA80u;
    // 0x19fa80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19fa80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19fa84: 0x46146036  c.le.s      $f12, $f20
    ctx->pc = 0x19fa84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19fa88: 0x0  nop
    ctx->pc = 0x19fa88u;
    // NOP
    // 0x19fa8c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x19FA8Cu;
    {
        const bool branch_taken_0x19fa8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19FA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA8Cu;
            // 0x19fa90: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa8c) {
            ctx->pc = 0x19FAB0u;
            goto label_19fab0;
        }
    }
    ctx->pc = 0x19FA94u;
    // 0x19fa94: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x19fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x19fa98: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x19FA98u;
    {
        const bool branch_taken_0x19fa98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fa98) {
            ctx->pc = 0x19FA9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA98u;
            // 0x19fa9c: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x19FAA0u;
            goto label_19faa0;
        }
    }
    ctx->pc = 0x19FAA0u;
label_19faa0:
    // 0x19faa0: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x19faa0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x19faa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19faa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19faa8: 0xc04018a  jal         func_100628
    ctx->pc = 0x19FAA8u;
    SET_GPR_U32(ctx, 31, 0x19FAB0u);
    ctx->pc = 0x19FAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FAA8u;
            // 0x19faac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100628u;
    if (runtime->hasFunction(0x100628u)) {
        auto targetFn = runtime->lookupFunction(0x100628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAB0u; }
        if (ctx->pc != 0x19FAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100628_0x100628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAB0u; }
        if (ctx->pc != 0x19FAB0u) { return; }
    }
    ctx->pc = 0x19FAB0u;
label_19fab0:
    // 0x19fab0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19fab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19fab4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19fab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fab8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19fab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fabc: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x19fabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19fac0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x19fac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19fac4: 0x3e00008  jr          $ra
    ctx->pc = 0x19FAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FAC4u;
            // 0x19fac8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FA74u: goto label_19fa74;
            case 0x19FAA0u: goto label_19faa0;
            case 0x19FAB0u: goto label_19fab0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19FACCu;
    // 0x19facc: 0x0  nop
    ctx->pc = 0x19faccu;
    // NOP
}
