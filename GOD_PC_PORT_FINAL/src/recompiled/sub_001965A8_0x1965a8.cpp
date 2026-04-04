#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001965A8
// Address: 0x1965a8 - 0x196670
void sub_001965A8_0x1965a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001965A8_0x1965a8");
#endif

    ctx->pc = 0x1965a8u;

    // 0x1965a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1965a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1965ac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1965acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1965b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1965b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1965b4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1965b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1965b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1965b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965bc: 0x8c43cd58  lw          $v1, -0x32A8($v0)
    ctx->pc = 0x1965bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1965c0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1965c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1965c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1965c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1965c8: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1965C8u;
    {
        const bool branch_taken_0x1965c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1965CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1965C8u;
            // 0x1965cc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1965c8) {
            ctx->pc = 0x196654u;
            goto label_196654;
        }
    }
    ctx->pc = 0x1965D0u;
    // 0x1965d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1965d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1965d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1965d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1965d8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1965d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1965dc: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1965dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1965e0: 0x40f809  jalr        $v0
    ctx->pc = 0x1965E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1965E8u);
        ctx->pc = 0x1965E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1965E0u;
            // 0x1965e4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1965E8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196638u: goto label_196638;
            case 0x196654u: goto label_196654;
            case 0x196658u: goto label_196658;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1965E8u; }
            if (ctx->pc != 0x1965E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1965E8u;
    // 0x1965e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1965e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1965ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1965f0: 0x12220018  beq         $s1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1965F0u;
    {
        const bool branch_taken_0x1965f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1965F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1965F0u;
            // 0x1965f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1965f0) {
            ctx->pc = 0x196654u;
            goto label_196654;
        }
    }
    ctx->pc = 0x1965F8u;
    // 0x1965f8: 0x8c9000ac  lw          $s0, 0xAC($a0)
    ctx->pc = 0x1965f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x1965fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1965fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196600: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x196600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196608: 0xc0401be  jal         func_1006F8
    ctx->pc = 0x196608u;
    SET_GPR_U32(ctx, 31, 0x196610u);
    ctx->pc = 0x19660Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196608u;
            // 0x19660c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1006F8u;
    if (runtime->hasFunction(0x1006F8u)) {
        auto targetFn = runtime->lookupFunction(0x1006F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196610u; }
        if (ctx->pc != 0x196610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001006F8_0x1006f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196610u; }
        if (ctx->pc != 0x196610u) { return; }
    }
    ctx->pc = 0x196610u;
    // 0x196610: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x196610u;
    {
        const bool branch_taken_0x196610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196610) {
            ctx->pc = 0x196614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x196610u;
            // 0x196614: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x196658u;
            goto label_196658;
        }
    }
    ctx->pc = 0x196618u;
    // 0x196618: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x196618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19661c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x19661cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196620: 0x0  nop
    ctx->pc = 0x196620u;
    // NOP
    // 0x196624: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x196624u;
    {
        const bool branch_taken_0x196624 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x196628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196624u;
            // 0x196628: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x196624) {
            ctx->pc = 0x196638u;
            goto label_196638;
        }
    }
    ctx->pc = 0x19662Cu;
    // 0x19662c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19662cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196630: 0xc040144  jal         func_100510
    ctx->pc = 0x196630u;
    SET_GPR_U32(ctx, 31, 0x196638u);
    ctx->pc = 0x196634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196630u;
            // 0x196634: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100510u;
    if (runtime->hasFunction(0x100510u)) {
        auto targetFn = runtime->lookupFunction(0x100510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196638u; }
        if (ctx->pc != 0x196638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100510_0x100510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196638u; }
        if (ctx->pc != 0x196638u) { return; }
    }
    ctx->pc = 0x196638u;
label_196638:
    // 0x196638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19663c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19663cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196640: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196648: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x196648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19664c: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x19664Cu;
    SET_GPR_U32(ctx, 31, 0x196654u);
    ctx->pc = 0x196650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19664Cu;
            // 0x196650: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196654u; }
        if (ctx->pc != 0x196654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196654u; }
        if (ctx->pc != 0x196654u) { return; }
    }
    ctx->pc = 0x196654u;
label_196654:
    // 0x196654: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x196654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_196658:
    // 0x196658: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x196658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19665c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19665cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196660: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x196660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x196664: 0x3e00008  jr          $ra
    ctx->pc = 0x196664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196664u;
            // 0x196668: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196638u: goto label_196638;
            case 0x196654u: goto label_196654;
            case 0x196658u: goto label_196658;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19666Cu;
    // 0x19666c: 0x0  nop
    ctx->pc = 0x19666cu;
    // NOP
}
