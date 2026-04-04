#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001964A0
// Address: 0x1964a0 - 0x1965a8
void sub_001964A0_0x1964a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001964A0_0x1964a0");
#endif

    ctx->pc = 0x1964a0u;

    // 0x1964a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1964a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1964a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1964a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1964a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1964a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1964ac: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1964acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1964b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1964b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964b4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1964b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1964b8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1964b8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1964bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1964bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1964c0: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1964c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1964c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1964c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1964c8: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1964c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1964cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1964ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1964d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1964d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1964d4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1964d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1964d8: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1964d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1964dc: 0x40f809  jalr        $v0
    ctx->pc = 0x1964DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1964E4u);
        ctx->pc = 0x1964E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1964DCu;
            // 0x1964e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1964E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19654Cu: goto label_19654c;
            case 0x196578u: goto label_196578;
            case 0x196588u: goto label_196588;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1964E4u; }
            if (ctx->pc != 0x1964E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1964E4u;
    // 0x1964e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1964e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1964e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1964ec: 0x12220026  beq         $s1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1964ECu;
    {
        const bool branch_taken_0x1964ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1964F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1964ECu;
            // 0x1964f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964ec) {
            ctx->pc = 0x196588u;
            goto label_196588;
        }
    }
    ctx->pc = 0x1964F4u;
    // 0x1964f4: 0x8c9000ac  lw          $s0, 0xAC($a0)
    ctx->pc = 0x1964f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x1964f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1964f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964fc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1964fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196504: 0xc0401be  jal         func_1006F8
    ctx->pc = 0x196504u;
    SET_GPR_U32(ctx, 31, 0x19650Cu);
    ctx->pc = 0x196508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196504u;
            // 0x196508: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1006F8u;
    if (runtime->hasFunction(0x1006F8u)) {
        auto targetFn = runtime->lookupFunction(0x1006F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19650Cu; }
        if (ctx->pc != 0x19650Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001006F8_0x1006f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19650Cu; }
        if (ctx->pc != 0x19650Cu) { return; }
    }
    ctx->pc = 0x19650Cu;
    // 0x19650c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19650Cu;
    {
        const bool branch_taken_0x19650c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19650Cu;
            // 0x196510: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19650c) {
            ctx->pc = 0x19654Cu;
            goto label_19654c;
        }
    }
    ctx->pc = 0x196514u;
    // 0x196514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196518: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19651c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19651cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196520: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196524: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x196524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196528: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x196528u;
    SET_GPR_U32(ctx, 31, 0x196530u);
    ctx->pc = 0x19652Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196528u;
            // 0x19652c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196530u; }
        if (ctx->pc != 0x196530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196530u; }
        if (ctx->pc != 0x196530u) { return; }
    }
    ctx->pc = 0x196530u;
    // 0x196530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196534: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196538: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19653c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x19653cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196540: 0xc0401be  jal         func_1006F8
    ctx->pc = 0x196540u;
    SET_GPR_U32(ctx, 31, 0x196548u);
    ctx->pc = 0x196544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196540u;
            // 0x196544: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1006F8u;
    if (runtime->hasFunction(0x1006F8u)) {
        auto targetFn = runtime->lookupFunction(0x1006F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196548u; }
        if (ctx->pc != 0x196548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001006F8_0x1006f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196548u; }
        if (ctx->pc != 0x196548u) { return; }
    }
    ctx->pc = 0x196548u;
    // 0x196548: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x196548u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_19654c:
    // 0x19654c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19654cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196550: 0xc040144  jal         func_100510
    ctx->pc = 0x196550u;
    SET_GPR_U32(ctx, 31, 0x196558u);
    ctx->pc = 0x196554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196550u;
            // 0x196554: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100510u;
    if (runtime->hasFunction(0x100510u)) {
        auto targetFn = runtime->lookupFunction(0x100510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196558u; }
        if (ctx->pc != 0x196558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100510_0x100510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196558u; }
        if (ctx->pc != 0x196558u) { return; }
    }
    ctx->pc = 0x196558u;
    // 0x196558: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x196558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19655c: 0x46146036  c.le.s      $f12, $f20
    ctx->pc = 0x19655cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196560: 0x0  nop
    ctx->pc = 0x196560u;
    // NOP
    // 0x196564: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x196564u;
    {
        const bool branch_taken_0x196564 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x196568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196564u;
            // 0x196568: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196564) {
            ctx->pc = 0x196588u;
            goto label_196588;
        }
    }
    ctx->pc = 0x19656Cu;
    // 0x19656c: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x19656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x196570: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x196570u;
    {
        const bool branch_taken_0x196570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196570) {
            ctx->pc = 0x196574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x196570u;
            // 0x196574: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x196578u;
            goto label_196578;
        }
    }
    ctx->pc = 0x196578u;
label_196578:
    // 0x196578: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x196578u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x19657c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19657cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196580: 0xc04018a  jal         func_100628
    ctx->pc = 0x196580u;
    SET_GPR_U32(ctx, 31, 0x196588u);
    ctx->pc = 0x196584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196580u;
            // 0x196584: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100628u;
    if (runtime->hasFunction(0x100628u)) {
        auto targetFn = runtime->lookupFunction(0x100628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196588u; }
        if (ctx->pc != 0x196588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100628_0x100628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196588u; }
        if (ctx->pc != 0x196588u) { return; }
    }
    ctx->pc = 0x196588u;
label_196588:
    // 0x196588: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x196588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19658c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19658cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x196590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196594: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x196594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x196598: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x196598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19659c: 0x3e00008  jr          $ra
    ctx->pc = 0x19659Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1965A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19659Cu;
            // 0x1965a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19654Cu: goto label_19654c;
            case 0x196578u: goto label_196578;
            case 0x196588u: goto label_196588;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1965A4u;
    // 0x1965a4: 0x0  nop
    ctx->pc = 0x1965a4u;
    // NOP
}
