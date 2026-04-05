#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018E668
// Address: 0x18e668 - 0x18e9b8
void sub_0018E668_0x18e668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E668_0x18e668");
#endif

    ctx->pc = 0x18e668u;

label_18e668:
    // 0x18e668: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18e668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18e66c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18e66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18e670: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x18e670u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x18e674: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x18e674u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x18e678: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x18e678u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x18e67c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e680: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x18e680u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x18e684: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x18e684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18e688: 0x84430060  lh          $v1, 0x60($v0)
    ctx->pc = 0x18e688u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x18e68c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x18e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x18e690: 0x40f809  jalr        $v0
    ctx->pc = 0x18E690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E698u);
        ctx->pc = 0x18E694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E690u;
            // 0x18e694: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18E698u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E668u: goto label_18e668;
            case 0x18E6F0u: goto label_18e6f0;
            case 0x18E6F4u: goto label_18e6f4;
            case 0x18E730u: goto label_18e730;
            case 0x18E734u: goto label_18e734;
            case 0x18E7C0u: goto label_18e7c0;
            case 0x18E7C4u: goto label_18e7c4;
            case 0x18E7D4u: goto label_18e7d4;
            case 0x18E7D8u: goto label_18e7d8;
            case 0x18E840u: goto label_18e840;
            case 0x18E844u: goto label_18e844;
            case 0x18E890u: goto label_18e890;
            case 0x18E8A8u: goto label_18e8a8;
            case 0x18E8B0u: goto label_18e8b0;
            case 0x18E8F8u: goto label_18e8f8;
            case 0x18E91Cu: goto label_18e91c;
            case 0x18E950u: goto label_18e950;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18E698u; }
            if (ctx->pc != 0x18E698u) { return; }
        }
        }
    }
    ctx->pc = 0x18E698u;
    // 0x18e698: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e69c: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x18e69cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x18e6a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e6a4: 0xe6150024  swc1        $f21, 0x24($s0)
    ctx->pc = 0x18e6a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x18e6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6ac: 0xc081504  jal         func_205410
    ctx->pc = 0x18E6ACu;
    SET_GPR_U32(ctx, 31, 0x18E6B4u);
    ctx->pc = 0x18E6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E6ACu;
            // 0x18e6b0: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205410u;
    if (runtime->hasFunction(0x205410u)) {
        auto targetFn = runtime->lookupFunction(0x205410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E6B4u; }
        if (ctx->pc != 0x18E6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205410_0x205410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E6B4u; }
        if (ctx->pc != 0x18E6B4u) { return; }
    }
    ctx->pc = 0x18E6B4u;
    // 0x18e6b4: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x18e6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x18e6b8: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x18e6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x18e6bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18E6BCu;
    {
        const bool branch_taken_0x18e6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E6BCu;
            // 0x18e6c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6bc) {
            ctx->pc = 0x18E6F4u;
            goto label_18e6f4;
        }
    }
    ctx->pc = 0x18E6C4u;
    // 0x18e6c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x18e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18e6c8: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x18e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x18e6cc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18e6ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18e6d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18e6d4: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x18e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x18e6d8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18e6dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e6e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18e6e4: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E6E4u;
    {
        const bool branch_taken_0x18e6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x18E6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E6E4u;
            // 0x18e6e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6e4) {
            ctx->pc = 0x18E6F0u;
            goto label_18e6f0;
        }
    }
    ctx->pc = 0x18E6ECu;
    // 0x18e6ec: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x18e6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18e6f0:
    // 0x18e6f0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x18e6f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18e6f4:
    // 0x18e6f4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x18E6F4u;
    {
        const bool branch_taken_0x18e6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E6F4u;
            // 0x18e6f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6f4) {
            ctx->pc = 0x18E734u;
            goto label_18e734;
        }
    }
    ctx->pc = 0x18E6FCu;
    // 0x18e6fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x18e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18e700: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x18e700u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x18e704: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x18e704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x18e708: 0x40f809  jalr        $v0
    ctx->pc = 0x18E708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E710u);
        ctx->pc = 0x18E70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E708u;
            // 0x18e70c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18E710u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E668u: goto label_18e668;
            case 0x18E6F0u: goto label_18e6f0;
            case 0x18E6F4u: goto label_18e6f4;
            case 0x18E730u: goto label_18e730;
            case 0x18E734u: goto label_18e734;
            case 0x18E7C0u: goto label_18e7c0;
            case 0x18E7C4u: goto label_18e7c4;
            case 0x18E7D4u: goto label_18e7d4;
            case 0x18E7D8u: goto label_18e7d8;
            case 0x18E840u: goto label_18e840;
            case 0x18E844u: goto label_18e844;
            case 0x18E890u: goto label_18e890;
            case 0x18E8A8u: goto label_18e8a8;
            case 0x18E8B0u: goto label_18e8b0;
            case 0x18E8F8u: goto label_18e8f8;
            case 0x18E91Cu: goto label_18e91c;
            case 0x18E950u: goto label_18e950;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18E710u; }
            if (ctx->pc != 0x18E710u) { return; }
        }
        }
    }
    ctx->pc = 0x18E710u;
    // 0x18e710: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18e710u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e714: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E714u;
    {
        const bool branch_taken_0x18e714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E714u;
            // 0x18e718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e714) {
            ctx->pc = 0x18E730u;
            goto label_18e730;
        }
    }
    ctx->pc = 0x18E71Cu;
    // 0x18e71c: 0xe4740020  swc1        $f20, 0x20($v1)
    ctx->pc = 0x18e71cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x18e720: 0xe4750024  swc1        $f21, 0x24($v1)
    ctx->pc = 0x18e720u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x18e724: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x18e724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e728: 0xc081504  jal         func_205410
    ctx->pc = 0x18E728u;
    SET_GPR_U32(ctx, 31, 0x18E730u);
    ctx->pc = 0x18E72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E728u;
            // 0x18e72c: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205410u;
    if (runtime->hasFunction(0x205410u)) {
        auto targetFn = runtime->lookupFunction(0x205410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E730u; }
        if (ctx->pc != 0x18E730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205410_0x205410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E730u; }
        if (ctx->pc != 0x18E730u) { return; }
    }
    ctx->pc = 0x18E730u;
label_18e730:
    // 0x18e730: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18e730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18e734:
    // 0x18e734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e738: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x18e738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18e73c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x18e73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18e740: 0x3e00008  jr          $ra
    ctx->pc = 0x18E740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E740u;
            // 0x18e744: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E668u: goto label_18e668;
            case 0x18E6F0u: goto label_18e6f0;
            case 0x18E6F4u: goto label_18e6f4;
            case 0x18E730u: goto label_18e730;
            case 0x18E734u: goto label_18e734;
            case 0x18E7C0u: goto label_18e7c0;
            case 0x18E7C4u: goto label_18e7c4;
            case 0x18E7D4u: goto label_18e7d4;
            case 0x18E7D8u: goto label_18e7d8;
            case 0x18E840u: goto label_18e840;
            case 0x18E844u: goto label_18e844;
            case 0x18E890u: goto label_18e890;
            case 0x18E8A8u: goto label_18e8a8;
            case 0x18E8B0u: goto label_18e8b0;
            case 0x18E8F8u: goto label_18e8f8;
            case 0x18E91Cu: goto label_18e91c;
            case 0x18E950u: goto label_18e950;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E748u;
    // 0x18e748: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x18e748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x18e74c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e74cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e750: 0x8c62c8cc  lw          $v0, -0x3734($v1)
    ctx->pc = 0x18e750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953164)));
    // 0x18e754: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18e754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18e758: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18e758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18e75c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18e760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e764: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18E764u;
    {
        const bool branch_taken_0x18e764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E764u;
            // 0x18e768: 0xac62c8cc  sw          $v0, -0x3734($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e764) {
            ctx->pc = 0x18E7D4u;
            goto label_18e7d4;
        }
    }
    ctx->pc = 0x18E76Cu;
    // 0x18e76c: 0xc04cb8e  jal         func_132E38
    ctx->pc = 0x18E76Cu;
    SET_GPR_U32(ctx, 31, 0x18E774u);
    ctx->pc = 0x132E38u;
    if (runtime->hasFunction(0x132E38u)) {
        auto targetFn = runtime->lookupFunction(0x132E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E774u; }
        if (ctx->pc != 0x18E774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E38_0x132e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E774u; }
        if (ctx->pc != 0x18E774u) { return; }
    }
    ctx->pc = 0x18E774u;
    // 0x18e774: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x18e774u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18e778: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18e778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18e77c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x18E77Cu;
    {
        const bool branch_taken_0x18e77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e77c) {
            ctx->pc = 0x18E780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E77Cu;
            // 0x18e780: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E7D8u;
            goto label_18e7d8;
        }
    }
    ctx->pc = 0x18E784u;
    // 0x18e784: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x18e784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x18e788: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x18e788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x18e78c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x18E78Cu;
    {
        const bool branch_taken_0x18e78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e78c) {
            ctx->pc = 0x18E790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E78Cu;
            // 0x18e790: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E7C4u;
            goto label_18e7c4;
        }
    }
    ctx->pc = 0x18E794u;
    // 0x18e794: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x18e794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18e798: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x18e798u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x18e79c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18e79cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18e7a0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18e7a4: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x18e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x18e7a8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18e7ac: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e7b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18e7b4: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E7B4u;
    {
        const bool branch_taken_0x18e7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x18E7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E7B4u;
            // 0x18e7b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7b4) {
            ctx->pc = 0x18E7C0u;
            goto label_18e7c0;
        }
    }
    ctx->pc = 0x18E7BCu;
    // 0x18e7bc: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x18e7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18e7c0:
    // 0x18e7c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18e7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18e7c4:
    // 0x18e7c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E7C4u;
    {
        const bool branch_taken_0x18e7c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E7C4u;
            // 0x18e7c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7c4) {
            ctx->pc = 0x18E7D8u;
            goto label_18e7d8;
        }
    }
    ctx->pc = 0x18E7CCu;
    // 0x18e7cc: 0xc0783d6  jal         func_1E0F58
    ctx->pc = 0x18E7CCu;
    SET_GPR_U32(ctx, 31, 0x18E7D4u);
    ctx->pc = 0x1E0F58u;
    if (runtime->hasFunction(0x1E0F58u)) {
        auto targetFn = runtime->lookupFunction(0x1E0F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E7D4u; }
        if (ctx->pc != 0x18E7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0F58_0x1e0f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E7D4u; }
        if (ctx->pc != 0x18E7D4u) { return; }
    }
    ctx->pc = 0x18E7D4u;
label_18e7d4:
    // 0x18e7d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18e7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18e7d8:
    // 0x18e7d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x18E7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E7DCu;
            // 0x18e7e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E668u: goto label_18e668;
            case 0x18E6F0u: goto label_18e6f0;
            case 0x18E6F4u: goto label_18e6f4;
            case 0x18E730u: goto label_18e730;
            case 0x18E734u: goto label_18e734;
            case 0x18E7C0u: goto label_18e7c0;
            case 0x18E7C4u: goto label_18e7c4;
            case 0x18E7D4u: goto label_18e7d4;
            case 0x18E7D8u: goto label_18e7d8;
            case 0x18E840u: goto label_18e840;
            case 0x18E844u: goto label_18e844;
            case 0x18E890u: goto label_18e890;
            case 0x18E8A8u: goto label_18e8a8;
            case 0x18E8B0u: goto label_18e8b0;
            case 0x18E8F8u: goto label_18e8f8;
            case 0x18E91Cu: goto label_18e91c;
            case 0x18E950u: goto label_18e950;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E7E4u;
    // 0x18e7e4: 0x0  nop
    ctx->pc = 0x18e7e4u;
    // NOP
    // 0x18e7e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18e7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18e7ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18e7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18e7f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18e7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18e7f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18e7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e7f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x18e7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x18e7fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e800: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x18e800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x18e804: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x18e804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x18e808: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18E808u;
    {
        const bool branch_taken_0x18e808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E808u;
            // 0x18e80c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e808) {
            ctx->pc = 0x18E844u;
            goto label_18e844;
        }
    }
    ctx->pc = 0x18E810u;
    // 0x18e810: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x18e810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18e814: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x18e814u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x18e818: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18e818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18e81c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18e820: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x18e820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x18e824: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18e824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18e828: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18e828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e82c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18e830: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E830u;
    {
        const bool branch_taken_0x18e830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x18E834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E830u;
            // 0x18e834: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e830) {
            ctx->pc = 0x18E840u;
            goto label_18e840;
        }
    }
    ctx->pc = 0x18E838u;
    // 0x18e838: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x18e838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18e83c: 0x0  nop
    ctx->pc = 0x18e83cu;
    // NOP
label_18e840:
    // 0x18e840: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18e840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18e844:
    // 0x18e844: 0x96020044  lhu         $v0, 0x44($s0)
    ctx->pc = 0x18e844u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x18e848: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x18e848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x18e84c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x18E84Cu;
    {
        const bool branch_taken_0x18e84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E84Cu;
            // 0x18e850: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e84c) {
            ctx->pc = 0x18E8B0u;
            goto label_18e8b0;
        }
    }
    ctx->pc = 0x18E854u;
    // 0x18e854: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x18e854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x18e858: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18e858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18e85c: 0x8ca3c8cc  lw          $v1, -0x3734($a1)
    ctx->pc = 0x18e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953164)));
    // 0x18e860: 0x2442e748  addiu       $v0, $v0, -0x18B8
    ctx->pc = 0x18e860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960968));
    // 0x18e864: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x18e864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x18e868: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x18e868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x18e86c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e870: 0xa6040044  sh          $a0, 0x44($s0)
    ctx->pc = 0x18e870u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x18e874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e878: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E878u;
    {
        const bool branch_taken_0x18e878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18E87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E878u;
            // 0x18e87c: 0xaca3c8cc  sw          $v1, -0x3734($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294953164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e878) {
            ctx->pc = 0x18E890u;
            goto label_18e890;
        }
    }
    ctx->pc = 0x18E880u;
    // 0x18e880: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x18e880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18e884: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x18e884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x18e888: 0xac405000  sw          $zero, 0x5000($v0)
    ctx->pc = 0x18e888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20480), GPR_U32(ctx, 0));
    // 0x18e88c: 0xac605004  sw          $zero, 0x5004($v1)
    ctx->pc = 0x18e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20484), GPR_U32(ctx, 0));
label_18e890:
    // 0x18e890: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x18e890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18e894: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18e894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x18e898: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18e898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18e89c: 0xc44d5000  lwc1        $f13, 0x5000($v0)
    ctx->pc = 0x18e89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18e8a0: 0xc06399a  jal         func_18E668
    ctx->pc = 0x18E8A0u;
    SET_GPR_U32(ctx, 31, 0x18E8A8u);
    ctx->pc = 0x18E8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E8A0u;
            // 0x18e8a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E668u;
    runtime->cooperativeGuestYield();
    goto label_18e668;
    ctx->pc = 0x18E8A8u;
label_18e8a8:
    // 0x18e8a8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18e8ac: 0x0  nop
    ctx->pc = 0x18e8acu;
    // NOP
label_18e8b0:
    // 0x18e8b0: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x18e8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x18e8b4: 0x8c44c8c8  lw          $a0, -0x3738($v0)
    ctx->pc = 0x18e8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953160)));
    // 0x18e8b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18e8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e8bc: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x18E8BCu;
    SET_GPR_U32(ctx, 31, 0x18E8C4u);
    ctx->pc = 0x18E8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E8BCu;
            // 0x18e8c0: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E8C4u; }
        if (ctx->pc != 0x18E8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E8C4u; }
        if (ctx->pc != 0x18E8C4u) { return; }
    }
    ctx->pc = 0x18E8C4u;
    // 0x18e8c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e8c8: 0xc063926  jal         func_18E498
    ctx->pc = 0x18E8C8u;
    SET_GPR_U32(ctx, 31, 0x18E8D0u);
    ctx->pc = 0x18E8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E8C8u;
            // 0x18e8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E498u;
    if (runtime->hasFunction(0x18E498u)) {
        auto targetFn = runtime->lookupFunction(0x18E498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E8D0u; }
        if (ctx->pc != 0x18E8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E498_0x18e498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E8D0u; }
        if (ctx->pc != 0x18E8D0u) { return; }
    }
    ctx->pc = 0x18E8D0u;
    // 0x18e8d0: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x18e8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e8d4: 0xc6405000  lwc1        $f0, 0x5000($s2)
    ctx->pc = 0x18e8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e8d8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x18e8d8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x18e8dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18e8dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18e8e0: 0x0  nop
    ctx->pc = 0x18e8e0u;
    // NOP
    // 0x18e8e4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x18E8E4u;
    {
        const bool branch_taken_0x18e8e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18e8e4) {
            ctx->pc = 0x18E8E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E8E4u;
            // 0x18e8e8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E8F8u;
            goto label_18e8f8;
        }
    }
    ctx->pc = 0x18E8ECu;
    // 0x18e8ec: 0xc0783be  jal         func_1E0EF8
    ctx->pc = 0x18E8ECu;
    SET_GPR_U32(ctx, 31, 0x18E8F4u);
    ctx->pc = 0x18E8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E8ECu;
            // 0x18e8f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EF8u;
    if (runtime->hasFunction(0x1E0EF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E8F4u; }
        if (ctx->pc != 0x18E8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EF8_0x1e0ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E8F4u; }
        if (ctx->pc != 0x18E8F4u) { return; }
    }
    ctx->pc = 0x18E8F4u;
    // 0x18e8f4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x18e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18e8f8:
    // 0x18e8f8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x18e8f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x18e8fc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x18e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x18e900: 0x40f809  jalr        $v0
    ctx->pc = 0x18E900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E908u);
        ctx->pc = 0x18E904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E900u;
            // 0x18e904: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18E908u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E668u: goto label_18e668;
            case 0x18E6F0u: goto label_18e6f0;
            case 0x18E6F4u: goto label_18e6f4;
            case 0x18E730u: goto label_18e730;
            case 0x18E734u: goto label_18e734;
            case 0x18E7C0u: goto label_18e7c0;
            case 0x18E7C4u: goto label_18e7c4;
            case 0x18E7D4u: goto label_18e7d4;
            case 0x18E7D8u: goto label_18e7d8;
            case 0x18E840u: goto label_18e840;
            case 0x18E844u: goto label_18e844;
            case 0x18E890u: goto label_18e890;
            case 0x18E8A8u: goto label_18e8a8;
            case 0x18E8B0u: goto label_18e8b0;
            case 0x18E8F8u: goto label_18e8f8;
            case 0x18E91Cu: goto label_18e91c;
            case 0x18E950u: goto label_18e950;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18E908u; }
            if (ctx->pc != 0x18E908u) { return; }
        }
        }
    }
    ctx->pc = 0x18E908u;
    // 0x18e908: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x18e908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x18e90c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x18e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x18e910: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18e910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18e914: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18E914u;
    {
        const bool branch_taken_0x18e914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e914) {
            ctx->pc = 0x18E918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E914u;
            // 0x18e918: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E91Cu;
            goto label_18e91c;
        }
    }
    ctx->pc = 0x18E91Cu;
label_18e91c:
    // 0x18e91c: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x18e91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18e920: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18e920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18e924: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18e924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e928: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x18e928u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x18e92c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18e92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x18e930: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18e930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18e934: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x18e934u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x18e938: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x18e938u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x18e93c: 0x46016328  max.s       $f12, $f12, $f1
    ctx->pc = 0x18e93cu;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[1]);
    // 0x18e940: 0xc64d5000  lwc1        $f13, 0x5000($s2)
    ctx->pc = 0x18e940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18e944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e948: 0xc06399a  jal         func_18E668
    ctx->pc = 0x18E948u;
    SET_GPR_U32(ctx, 31, 0x18E950u);
    ctx->pc = 0x18E94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E948u;
            // 0x18e94c: 0x46006329  min.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = std::min(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E668u;
    runtime->cooperativeGuestYield();
    goto label_18e668;
    ctx->pc = 0x18E950u;
label_18e950:
    // 0x18e950: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18e950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e954: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18e954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e958: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x18e958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e960: 0x3e00008  jr          $ra
    ctx->pc = 0x18E960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E960u;
            // 0x18e964: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E668u: goto label_18e668;
            case 0x18E6F0u: goto label_18e6f0;
            case 0x18E6F4u: goto label_18e6f4;
            case 0x18E730u: goto label_18e730;
            case 0x18E734u: goto label_18e734;
            case 0x18E7C0u: goto label_18e7c0;
            case 0x18E7C4u: goto label_18e7c4;
            case 0x18E7D4u: goto label_18e7d4;
            case 0x18E7D8u: goto label_18e7d8;
            case 0x18E840u: goto label_18e840;
            case 0x18E844u: goto label_18e844;
            case 0x18E890u: goto label_18e890;
            case 0x18E8A8u: goto label_18e8a8;
            case 0x18E8B0u: goto label_18e8b0;
            case 0x18E8F8u: goto label_18e8f8;
            case 0x18E91Cu: goto label_18e91c;
            case 0x18E950u: goto label_18e950;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E968u;
    // 0x18e968: 0x3c030780  lui         $v1, 0x780
    ctx->pc = 0x18e968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1920 << 16));
    // 0x18e96c: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x18e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x18e970: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x18e970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18e974: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x18e974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x18e978: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x18e978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x18e97c: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x18e97cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x18e980: 0xc462c658  lwc1        $f2, -0x39A8($v1)
    ctx->pc = 0x18e980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18e984: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x18e984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x18e988: 0xc4815004  lwc1        $f1, 0x5004($a0)
    ctx->pc = 0x18e988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e98c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x18e98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x18e990: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x18e990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x18e994: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18e994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18e998: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18e998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18e99c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e9a0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x18e9a0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x18e9a4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18e9a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18e9a8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18e9a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18e9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x18E9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E9ACu;
            // 0x18e9b0: 0xe4815004  swc1        $f1, 0x5004($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20484), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E668u: goto label_18e668;
            case 0x18E6F0u: goto label_18e6f0;
            case 0x18E6F4u: goto label_18e6f4;
            case 0x18E730u: goto label_18e730;
            case 0x18E734u: goto label_18e734;
            case 0x18E7C0u: goto label_18e7c0;
            case 0x18E7C4u: goto label_18e7c4;
            case 0x18E7D4u: goto label_18e7d4;
            case 0x18E7D8u: goto label_18e7d8;
            case 0x18E840u: goto label_18e840;
            case 0x18E844u: goto label_18e844;
            case 0x18E890u: goto label_18e890;
            case 0x18E8A8u: goto label_18e8a8;
            case 0x18E8B0u: goto label_18e8b0;
            case 0x18E8F8u: goto label_18e8f8;
            case 0x18E91Cu: goto label_18e91c;
            case 0x18E950u: goto label_18e950;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E9B4u;
    // 0x18e9b4: 0x0  nop
    ctx->pc = 0x18e9b4u;
    // NOP
}
