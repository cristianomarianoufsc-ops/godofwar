#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019FAD0
// Address: 0x19fad0 - 0x19fb98
void sub_0019FAD0_0x19fad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FAD0_0x19fad0");
#endif

    ctx->pc = 0x19fad0u;

    // 0x19fad0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19fad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19fad4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19fad8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19fad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19fadc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x19fadcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x19fae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19fae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fae4: 0x8c43cd58  lw          $v1, -0x32A8($v0)
    ctx->pc = 0x19fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x19fae8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19fae8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x19faec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19faecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19faf0: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x19FAF0u;
    {
        const bool branch_taken_0x19faf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FAF0u;
            // 0x19faf4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19faf0) {
            ctx->pc = 0x19FB7Cu;
            goto label_19fb7c;
        }
    }
    ctx->pc = 0x19FAF8u;
    // 0x19faf8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19fafc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19fb00: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x19fb00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x19fb04: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x19fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x19fb08: 0x40f809  jalr        $v0
    ctx->pc = 0x19FB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19FB10u);
        ctx->pc = 0x19FB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB08u;
            // 0x19fb0c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19FB10u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FB60u: goto label_19fb60;
            case 0x19FB7Cu: goto label_19fb7c;
            case 0x19FB80u: goto label_19fb80;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19FB10u; }
            if (ctx->pc != 0x19FB10u) { return; }
        }
        }
    }
    ctx->pc = 0x19FB10u;
    // 0x19fb10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19fb18: 0x12220018  beq         $s1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19FB18u;
    {
        const bool branch_taken_0x19fb18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x19FB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB18u;
            // 0x19fb1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb18) {
            ctx->pc = 0x19FB7Cu;
            goto label_19fb7c;
        }
    }
    ctx->pc = 0x19FB20u;
    // 0x19fb20: 0x8c9000ac  lw          $s0, 0xAC($a0)
    ctx->pc = 0x19fb20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x19fb24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fb24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb28: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x19fb28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb30: 0xc0401be  jal         func_1006F8
    ctx->pc = 0x19FB30u;
    SET_GPR_U32(ctx, 31, 0x19FB38u);
    ctx->pc = 0x19FB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB30u;
            // 0x19fb34: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1006F8u;
    if (runtime->hasFunction(0x1006F8u)) {
        auto targetFn = runtime->lookupFunction(0x1006F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB38u; }
        if (ctx->pc != 0x19FB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001006F8_0x1006f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB38u; }
        if (ctx->pc != 0x19FB38u) { return; }
    }
    ctx->pc = 0x19FB38u;
    // 0x19fb38: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x19FB38u;
    {
        const bool branch_taken_0x19fb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fb38) {
            ctx->pc = 0x19FB3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB38u;
            // 0x19fb3c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19FB80u;
            goto label_19fb80;
        }
    }
    ctx->pc = 0x19FB40u;
    // 0x19fb40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19fb40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19fb44: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x19fb44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19fb48: 0x0  nop
    ctx->pc = 0x19fb48u;
    // NOP
    // 0x19fb4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x19FB4Cu;
    {
        const bool branch_taken_0x19fb4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19FB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB4Cu;
            // 0x19fb50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb4c) {
            ctx->pc = 0x19FB60u;
            goto label_19fb60;
        }
    }
    ctx->pc = 0x19FB54u;
    // 0x19fb54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb58: 0xc040144  jal         func_100510
    ctx->pc = 0x19FB58u;
    SET_GPR_U32(ctx, 31, 0x19FB60u);
    ctx->pc = 0x19FB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB58u;
            // 0x19fb5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100510u;
    if (runtime->hasFunction(0x100510u)) {
        auto targetFn = runtime->lookupFunction(0x100510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB60u; }
        if (ctx->pc != 0x19FB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100510_0x100510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB60u; }
        if (ctx->pc != 0x19FB60u) { return; }
    }
    ctx->pc = 0x19FB60u;
label_19fb60:
    // 0x19fb60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19fb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fb68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19fb6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb70: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x19fb70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fb74: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x19FB74u;
    SET_GPR_U32(ctx, 31, 0x19FB7Cu);
    ctx->pc = 0x19FB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB74u;
            // 0x19fb78: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB7Cu; }
        if (ctx->pc != 0x19FB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB7Cu; }
        if (ctx->pc != 0x19FB7Cu) { return; }
    }
    ctx->pc = 0x19FB7Cu;
label_19fb7c:
    // 0x19fb7c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19fb7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19fb80:
    // 0x19fb80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19fb80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fb84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19fb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fb88: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x19fb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19fb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x19FB8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB8Cu;
            // 0x19fb90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FB60u: goto label_19fb60;
            case 0x19FB7Cu: goto label_19fb7c;
            case 0x19FB80u: goto label_19fb80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19FB94u;
    // 0x19fb94: 0x0  nop
    ctx->pc = 0x19fb94u;
    // NOP
}
