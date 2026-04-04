#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011E7B0
// Address: 0x11e7b0 - 0x11e8d0
void sub_0011E7B0_0x11e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E7B0_0x11e7b0");
#endif

    ctx->pc = 0x11e7b0u;

    // 0x11e7b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11e7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11e7b4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x11e7b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x11e7b8: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x11e7b8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x11e7bc: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x11e7bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x11e7c0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11e7c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x11e7c4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x11e7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x11e7c8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x11e7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x11e7cc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x11e7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x11e7d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11e7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11e7d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11e7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11e7d8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x11e7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11e7dc: 0x3c13002c  lui         $s3, 0x2C
    ctx->pc = 0x11e7dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)44 << 16));
    // 0x11e7e0: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x11e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x11e7e4: 0x26627790  addiu       $v0, $s3, 0x7790
    ctx->pc = 0x11e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 30608));
    // 0x11e7e8: 0xc4601444  lwc1        $f0, 0x1444($v1)
    ctx->pc = 0x11e7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e7ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11e7ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e7f0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x11e7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x11e7f4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x11e7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x11e7f8: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x11e7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x11e7fc: 0xa4400034  sh          $zero, 0x34($v0)
    ctx->pc = 0x11e7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x11e800: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x11e800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x11e804: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x11e804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x11e808: 0xa4400036  sh          $zero, 0x36($v0)
    ctx->pc = 0x11e808u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x11e80c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x11e80cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11e810: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x11e810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x11e814: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x11e814u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x11e818: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x11e818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11e81c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x11e81cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11e820: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x11e820u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e824: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x11e824u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x11e828: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x11e828u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11e82c: 0x2610f170  addiu       $s0, $s0, -0xE90
    ctx->pc = 0x11e82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963568));
    // 0x11e830: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x11e830u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11e834: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x11e834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11e838: 0xc047824  jal         func_11E090
    ctx->pc = 0x11E838u;
    SET_GPR_U32(ctx, 31, 0x11E840u);
    ctx->pc = 0x11E83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E838u;
            // 0x11e83c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E090u;
    if (runtime->hasFunction(0x11E090u)) {
        auto targetFn = runtime->lookupFunction(0x11E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E840u; }
        if (ctx->pc != 0x11E840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E090_0x11e090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E840u; }
        if (ctx->pc != 0x11E840u) { return; }
    }
    ctx->pc = 0x11E840u;
    // 0x11e840: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11e840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e844: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x11E844u;
    {
        const bool branch_taken_0x11e844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E844u;
            // 0x11e848: 0x8e110014  lw          $s1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e844) {
            ctx->pc = 0x11E8ACu;
            goto label_11e8ac;
        }
    }
    ctx->pc = 0x11E84Cu;
    // 0x11e84c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e850:
    // 0x11e850: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E850u;
    {
        const bool branch_taken_0x11e850 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E850u;
            // 0x11e854: 0x8c640018  lw          $a0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e850) {
            ctx->pc = 0x11E860u;
            goto label_11e860;
        }
    }
    ctx->pc = 0x11E858u;
    // 0x11e858: 0x52240011  beql        $s1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11E858u;
    {
        const bool branch_taken_0x11e858 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x11e858) {
            ctx->pc = 0x11E85Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E858u;
            // 0x11e85c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E8A0u;
            goto label_11e8a0;
        }
    }
    ctx->pc = 0x11E860u;
label_11e860:
    // 0x11e860: 0x8c660048  lw          $a2, 0x48($v1)
    ctx->pc = 0x11e860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x11e864: 0x26627790  addiu       $v0, $s3, 0x7790
    ctx->pc = 0x11e864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 30608));
    // 0x11e868: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x11e868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x11e86c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11e86cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11e870: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x11e870u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e874: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11e874u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11e878: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x11e878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x11e87c: 0xac440024  sw          $a0, 0x24($v0)
    ctx->pc = 0x11e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 4));
    // 0x11e880: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x11e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x11e884: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x11e884u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x11e888: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x11e888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x11e88c: 0x40f809  jalr        $v0
    ctx->pc = 0x11E88Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E894u);
        ctx->pc = 0x11E890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E88Cu;
            // 0x11e890: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11E894u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E850u: goto label_11e850;
            case 0x11E860u: goto label_11e860;
            case 0x11E8A0u: goto label_11e8a0;
            case 0x11E8ACu: goto label_11e8ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11E894u; }
            if (ctx->pc != 0x11E894u) { return; }
        }
        }
    }
    ctx->pc = 0x11E894u;
    // 0x11e894: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x11e894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11e898: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E898u;
    {
        const bool branch_taken_0x11e898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11E89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E898u;
            // 0x11e89c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e898) {
            ctx->pc = 0x11E8ACu;
            goto label_11e8ac;
        }
    }
    ctx->pc = 0x11E8A0u;
label_11e8a0:
    // 0x11e8a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11e8a4: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x11E8A4u;
    {
        const bool branch_taken_0x11e8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e8a4) {
            ctx->pc = 0x11E850u;
            runtime->cooperativeGuestYield();
            goto label_11e850;
        }
    }
    ctx->pc = 0x11E8ACu;
label_11e8ac:
    // 0x11e8ac: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11e8acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e8b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x11e8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11e8b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x11e8b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e8b8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x11e8b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e8bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11e8bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e8c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11e8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e8c4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x11e8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11e8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x11E8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E8C8u;
            // 0x11e8cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E850u: goto label_11e850;
            case 0x11E860u: goto label_11e860;
            case 0x11E8A0u: goto label_11e8a0;
            case 0x11E8ACu: goto label_11e8ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E8D0u;
}
