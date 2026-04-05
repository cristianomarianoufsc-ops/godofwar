#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EE2D0
// Address: 0x1ee2d0 - 0x1ee3e8
void sub_001EE2D0_0x1ee2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE2D0_0x1ee2d0");
#endif

    ctx->pc = 0x1ee2d0u;

    // 0x1ee2d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ee2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ee2d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ee2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ee2d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ee2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ee2dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ee2dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee2e0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1ee2e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ee2e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ee2e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee2e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ee2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ee2ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ee2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ee2f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ee2f4: 0x8e020750  lw          $v0, 0x750($s0)
    ctx->pc = 0x1ee2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
    // 0x1ee2f8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1ee2f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ee2fc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1ee2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ee300: 0x8e050754  lw          $a1, 0x754($s0)
    ctx->pc = 0x1ee300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1876)));
    // 0x1ee304: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ee304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ee308: 0x263202a  slt         $a0, $s3, $v1
    ctx->pc = 0x1ee308u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ee30c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1ee30cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1ee310: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x1ee310u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1ee314: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1ee314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ee318: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x1ee318u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee31c: 0x16250010  bne         $s1, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EE31Cu;
    {
        const bool branch_taken_0x1ee31c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x1EE320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE31Cu;
            // 0x1ee320: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee31c) {
            ctx->pc = 0x1EE360u;
            goto label_1ee360;
        }
    }
    ctx->pc = 0x1EE324u;
    // 0x1ee324: 0x24040170  addiu       $a0, $zero, 0x170
    ctx->pc = 0x1ee324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x1ee328: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x1ee328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ee32c: 0x24840190  addiu       $a0, $a0, 0x190
    ctx->pc = 0x1ee32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x1ee330: 0xc07c68e  jal         func_1F1A38
    ctx->pc = 0x1EE330u;
    SET_GPR_U32(ctx, 31, 0x1EE338u);
    ctx->pc = 0x1EE334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE330u;
            // 0x1ee334: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1A38u;
    if (runtime->hasFunction(0x1F1A38u)) {
        auto targetFn = runtime->lookupFunction(0x1F1A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE338u; }
        if (ctx->pc != 0x1EE338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A38_0x1f1a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE338u; }
        if (ctx->pc != 0x1EE338u) { return; }
    }
    ctx->pc = 0x1EE338u;
    // 0x1ee338: 0x8e020754  lw          $v0, 0x754($s0)
    ctx->pc = 0x1ee338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1876)));
    // 0x1ee33c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1ee33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ee340: 0x264182a  slt         $v1, $s3, $a0
    ctx->pc = 0x1ee340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ee344: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ee344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ee348: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1ee348u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1ee34c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1ee34cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1ee350: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ee350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ee354: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1ee354u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ee358: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE358u;
    {
        const bool branch_taken_0x1ee358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE358u;
            // 0x1ee35c: 0xae040754  sw          $a0, 0x754($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1876), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee358) {
            ctx->pc = 0x1EE368u;
            goto label_1ee368;
        }
    }
    ctx->pc = 0x1EE360u;
label_1ee360:
    // 0x1ee360: 0x4a20001  bltzl       $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EE360u;
    {
        const bool branch_taken_0x1ee360 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1ee360) {
            ctx->pc = 0x1EE364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE360u;
            // 0x1ee364: 0xae110754  sw          $s1, 0x754($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1876), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE368u;
            goto label_1ee368;
        }
    }
    ctx->pc = 0x1EE368u;
label_1ee368:
    // 0x1ee368: 0x24050170  addiu       $a1, $zero, 0x170
    ctx->pc = 0x1ee368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x1ee36c: 0x8e030750  lw          $v1, 0x750($s0)
    ctx->pc = 0x1ee36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
    // 0x1ee370: 0x2251018  mult        $v0, $s1, $a1
    ctx->pc = 0x1ee370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ee374: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x1ee374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x1ee378: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE378u;
    {
        const bool branch_taken_0x1ee378 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1EE37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE378u;
            // 0x1ee37c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee378) {
            ctx->pc = 0x1EE390u;
            goto label_1ee390;
        }
    }
    ctx->pc = 0x1EE380u;
    // 0x1ee380: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x1ee380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ee384: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x1ee384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x1ee388: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EE388u;
    {
        const bool branch_taken_0x1ee388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE388u;
            // 0x1ee38c: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee388) {
            ctx->pc = 0x1EE394u;
            goto label_1ee394;
        }
    }
    ctx->pc = 0x1EE390u;
label_1ee390:
    // 0x1ee390: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ee390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee394:
    // 0x1ee394: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ee394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee398: 0xc07cba0  jal         func_1F2E80
    ctx->pc = 0x1EE398u;
    SET_GPR_U32(ctx, 31, 0x1EE3A0u);
    ctx->pc = 0x1EE39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE398u;
            // 0x1ee39c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2E80u;
    if (runtime->hasFunction(0x1F2E80u)) {
        auto targetFn = runtime->lookupFunction(0x1F2E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE3A0u; }
        if (ctx->pc != 0x1EE3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2E80_0x1f2e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE3A0u; }
        if (ctx->pc != 0x1EE3A0u) { return; }
    }
    ctx->pc = 0x1EE3A0u;
    // 0x1ee3a0: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x1ee3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1ee3a4: 0x2404040d  addiu       $a0, $zero, 0x40D
    ctx->pc = 0x1ee3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1037));
    // 0x1ee3a8: 0xae110750  sw          $s1, 0x750($s0)
    ctx->pc = 0x1ee3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1872), GPR_U32(ctx, 17));
    // 0x1ee3ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ee3acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee3b0: 0xae120050  sw          $s2, 0x50($s0)
    ctx->pc = 0x1ee3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 18));
    // 0x1ee3b4: 0x24a5007c  addiu       $a1, $a1, 0x7C
    ctx->pc = 0x1ee3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 124));
    // 0x1ee3b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ee3b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee3bc: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x1EE3BCu;
    SET_GPR_U32(ctx, 31, 0x1EE3C4u);
    ctx->pc = 0x1EE3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE3BCu;
            // 0x1ee3c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE3C4u; }
        if (ctx->pc != 0x1EE3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE3C4u; }
        if (ctx->pc != 0x1EE3C4u) { return; }
    }
    ctx->pc = 0x1EE3C4u;
    // 0x1ee3c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ee3c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ee3c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ee3c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee3cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ee3ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee3d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ee3d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee3d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee3d8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1ee3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ee3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE3DCu;
            // 0x1ee3e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE360u: goto label_1ee360;
            case 0x1EE368u: goto label_1ee368;
            case 0x1EE390u: goto label_1ee390;
            case 0x1EE394u: goto label_1ee394;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EE3E4u;
    // 0x1ee3e4: 0x0  nop
    ctx->pc = 0x1ee3e4u;
    // NOP
}
