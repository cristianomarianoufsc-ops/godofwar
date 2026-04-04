#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EA310
// Address: 0x1ea310 - 0x1ea820
void sub_001EA310_0x1ea310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA310_0x1ea310");
#endif

    ctx->pc = 0x1ea310u;

    // 0x1ea310: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1ea310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1ea314: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ea314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ea318: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1ea318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x1ea31c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1ea31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x1ea320: 0x700784a9  por         $s0, $zero, $a3
    ctx->pc = 0x1ea320u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x1ea324: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1ea324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x1ea328: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ea328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea32c: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x1ea32cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1ea330: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1ea330u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea334: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1ea334u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1ea338: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1ea338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x1ea33c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1ea33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1ea340: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x1ea340u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1ea344: 0x7fa60090  sq          $a2, 0x90($sp)
    ctx->pc = 0x1ea344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 6));
    // 0x1ea348: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1ea348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ea34c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1ea34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ea350: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x1ea350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
    // 0x1ea354: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1ea354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1ea358: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1ea358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1ea35c: 0x40f809  jalr        $v0
    ctx->pc = 0x1EA35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA364u);
        ctx->pc = 0x1EA360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA35Cu;
            // 0x1ea360: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EA364u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA3BCu: goto label_1ea3bc;
            case 0x1EA3C4u: goto label_1ea3c4;
            case 0x1EA400u: goto label_1ea400;
            case 0x1EA408u: goto label_1ea408;
            case 0x1EA520u: goto label_1ea520;
            case 0x1EA578u: goto label_1ea578;
            case 0x1EA660u: goto label_1ea660;
            case 0x1EA6D0u: goto label_1ea6d0;
            case 0x1EA6E8u: goto label_1ea6e8;
            case 0x1EA700u: goto label_1ea700;
            case 0x1EA7E8u: goto label_1ea7e8;
            case 0x1EA7F0u: goto label_1ea7f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EA364u; }
            if (ctx->pc != 0x1EA364u) { return; }
        }
        }
    }
    ctx->pc = 0x1EA364u;
    // 0x1ea364: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1ea364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1ea368: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ea368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ea36c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ea36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ea370: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1ea370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1ea374: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ea374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ea378: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ea378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ea37c: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1ea37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1ea380: 0xc621016c  lwc1        $f1, 0x16C($s1)
    ctx->pc = 0x1ea380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea384: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ea384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ea388: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ea388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ea38c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ea38cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ea390: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EA390u;
    {
        const bool branch_taken_0x1ea390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA390u;
            // 0x1ea394: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea390) {
            ctx->pc = 0x1EA3BCu;
            goto label_1ea3bc;
        }
    }
    ctx->pc = 0x1EA398u;
    // 0x1ea398: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x1ea398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x1ea39c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1ea39cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1ea3a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ea3a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ea3a4: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1ea3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1ea3a8: 0x4601a843  div.s       $f1, $f21, $f1
    ctx->pc = 0x1ea3a8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[1];
    // 0x1ea3ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ea3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ea3b0: 0xc44000fc  lwc1        $f0, 0xFC($v0)
    ctx->pc = 0x1ea3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea3b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA3B4u;
    {
        const bool branch_taken_0x1ea3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA3B4u;
            // 0x1ea3b8: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea3b4) {
            ctx->pc = 0x1EA3C4u;
            goto label_1ea3c4;
        }
    }
    ctx->pc = 0x1EA3BCu;
label_1ea3bc:
    // 0x1ea3bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ea3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ea3c0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1ea3c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1ea3c4:
    // 0x1ea3c4: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1ea3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ea3c8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ea3c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ea3cc: 0xda210260  lqc2        $vf1, 0x260($s1)
    ctx->pc = 0x1ea3ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1ea3d0: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x1ea3d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea3d4: 0xfa210260  sqc2        $vf1, 0x260($s1)
    ctx->pc = 0x1ea3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea3d8: 0x26320260  addiu       $s2, $s1, 0x260
    ctx->pc = 0x1ea3d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
    // 0x1ea3dc: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1ea3dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea3e0: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1ea3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1ea3e4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ea3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ea3e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA3E8u;
    {
        const bool branch_taken_0x1ea3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA3E8u;
            // 0x1ea3ec: 0xfa210260  sqc2        $vf1, 0x260($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 608), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea3e8) {
            ctx->pc = 0x1EA400u;
            goto label_1ea400;
        }
    }
    ctx->pc = 0x1EA3F0u;
    // 0x1ea3f0: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1ea3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1ea3f4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ea3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ea3f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA3F8u;
    {
        const bool branch_taken_0x1ea3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA3F8u;
            // 0x1ea3fc: 0xc4420230  lwc1        $f2, 0x230($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea3f8) {
            ctx->pc = 0x1EA408u;
            goto label_1ea408;
        }
    }
    ctx->pc = 0x1EA400u;
label_1ea400:
    // 0x1ea400: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ea400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ea404: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ea404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ea408:
    // 0x1ea408: 0xdba200a0  lqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x1ea408u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ea40c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ea40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea410: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x1ea410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1ea414: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x1ea414u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea418: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1ea418u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea41c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ea41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ea420: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ea420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ea424: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1ea424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ea428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea42c: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x1ea42cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x1ea430: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1ea430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1ea434: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ea434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ea438: 0xc46c0178  lwc1        $f12, 0x178($v1)
    ctx->pc = 0x1ea438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ea43c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1ea43cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x1ea440: 0xc46e016c  lwc1        $f14, 0x16C($v1)
    ctx->pc = 0x1ea440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ea444: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x1ea444u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1ea448: 0xc46f0170  lwc1        $f15, 0x170($v1)
    ctx->pc = 0x1ea448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ea44c: 0x46147382  mul.s       $f14, $f14, $f20
    ctx->pc = 0x1ea44cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x1ea450: 0x7a220260  lq          $v0, 0x260($s1)
    ctx->pc = 0x1ea450u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1ea454: 0x46147bc2  mul.s       $f15, $f15, $f20
    ctx->pc = 0x1ea454u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[20]);
    // 0x1ea458: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1ea458u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1ea45c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ea45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ea460: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x1ea460u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x1ea464: 0x46157382  mul.s       $f14, $f14, $f21
    ctx->pc = 0x1ea464u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[21]);
    // 0x1ea468: 0x46157bc2  mul.s       $f15, $f15, $f21
    ctx->pc = 0x1ea468u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[21]);
    // 0x1ea46c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x1ea46cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1ea470: 0xc07950a  jal         func_1E5428
    ctx->pc = 0x1EA470u;
    SET_GPR_U32(ctx, 31, 0x1EA478u);
    ctx->pc = 0x1EA474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA470u;
            // 0x1ea474: 0x46026302  mul.s       $f12, $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5428u;
    if (runtime->hasFunction(0x1E5428u)) {
        auto targetFn = runtime->lookupFunction(0x1E5428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA478u; }
        if (ctx->pc != 0x1EA478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5428_0x1e54c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA478u; }
        if (ctx->pc != 0x1EA478u) { return; }
    }
    ctx->pc = 0x1EA478u;
    // 0x1ea478: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ea478u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ea47c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1ea47cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ea480: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1ea480u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ea484: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x1ea484u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea488: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1ea488u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea48c: 0x7a2200e0  lq          $v0, 0xE0($s1)
    ctx->pc = 0x1ea48cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1ea490: 0x70022789  pexew       $a0, $v0
    ctx->pc = 0x1ea490u;
    SET_GPR_VEC(ctx, 4, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1ea494: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1ea494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea498: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x1ea498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea49c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ea49cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea4a0: 0x70e22389  pcpyld      $a0, $a3, $v0
    ctx->pc = 0x1ea4a0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x1ea4a4: 0x70e31389  pcpyld      $v0, $a3, $v1
    ctx->pc = 0x1ea4a4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x1ea4a8: 0x70441cc8  ppacw       $v1, $v0, $a0
    ctx->pc = 0x1ea4a8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1ea4ac: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1ea4acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ea4b0: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1ea4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ea4b4: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1ea4b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ea4b8: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1ea4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ea4bc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1ea4bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea4c0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1ea4c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea4c4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1ea4c4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea4c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ea4c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea4cc: 0x46000004  c1          0x4
    ctx->pc = 0x1ea4ccu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ea4d0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ea4d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea4d4: 0x0  nop
    ctx->pc = 0x1ea4d4u;
    // NOP
    // 0x1ea4d8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1EA4D8u;
    {
        const bool branch_taken_0x1ea4d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA4D8u;
            // 0x1ea4dc: 0x7ba500a0  lq          $a1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea4d8) {
            ctx->pc = 0x1EA520u;
            goto label_1ea520;
        }
    }
    ctx->pc = 0x1EA4E0u;
    // 0x1ea4e0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x1ea4e0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ea4e4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1ea4e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1ea4e8: 0xc07954c  jal         func_1E5530
    ctx->pc = 0x1EA4E8u;
    SET_GPR_U32(ctx, 31, 0x1EA4F0u);
    ctx->pc = 0x1EA4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA4E8u;
            // 0x1ea4ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5530u;
    if (runtime->hasFunction(0x1E5530u)) {
        auto targetFn = runtime->lookupFunction(0x1E5530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4F0u; }
        if (ctx->pc != 0x1EA4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5530_0x1e5530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4F0u; }
        if (ctx->pc != 0x1EA4F0u) { return; }
    }
    ctx->pc = 0x1EA4F0u;
    // 0x1ea4f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1ea4f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ea4f4: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1ea4f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ea4f8: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1ea4f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ea4fc: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1ea4fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ea500: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1ea500u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ea504: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ea504u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ea508: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1ea508u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea50c: 0x4a0002ff  vnop
    ctx->pc = 0x1ea50cu;
    // NOP operation, no action needed for VU0
    // 0x1ea510: 0x4a0002ff  vnop
    ctx->pc = 0x1ea510u;
    // NOP operation, no action needed for VU0
    // 0x1ea514: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1ea514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea518: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1EA518u;
    {
        const bool branch_taken_0x1ea518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA518u;
            // 0x1ea51c: 0xfba10010  sqc2        $vf1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea518) {
            ctx->pc = 0x1EA578u;
            goto label_1ea578;
        }
    }
    ctx->pc = 0x1EA520u;
label_1ea520:
    // 0x1ea520: 0x70051789  pexew       $v0, $a1
    ctx->pc = 0x1ea520u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1ea524: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ea524u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea528: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ea528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea52c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ea52cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea530: 0x70e22389  pcpyld      $a0, $a3, $v0
    ctx->pc = 0x1ea530u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x1ea534: 0x70e31389  pcpyld      $v0, $a3, $v1
    ctx->pc = 0x1ea534u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x1ea538: 0x70441cc8  ppacw       $v1, $v0, $a0
    ctx->pc = 0x1ea538u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1ea53c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1ea53cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ea540: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1ea540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ea544: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1ea544u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ea548: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1ea548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ea54c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1ea54cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea550: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1ea550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea554: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1ea554u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ea558: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ea558u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ea55c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1ea55cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ea560: 0x4a0002ff  vnop
    ctx->pc = 0x1ea560u;
    // NOP operation, no action needed for VU0
    // 0x1ea564: 0x4a0002ff  vnop
    ctx->pc = 0x1ea564u;
    // NOP operation, no action needed for VU0
    // 0x1ea568: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x1ea568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ea56c: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1ea56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ea570: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1ea570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ea574: 0x0  nop
    ctx->pc = 0x1ea574u;
    // NOP
label_1ea578:
    // 0x1ea578: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1ea578u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea57c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ea57cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea580: 0xda230260  lqc2        $vf3, 0x260($s1)
    ctx->pc = 0x1ea580u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1ea584: 0x4b03089a  vmulz.x     $vf2, $vf1, $vf3z
    ctx->pc = 0x1ea584u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ea588: 0x7a2200e0  lq          $v0, 0xE0($s1)
    ctx->pc = 0x1ea588u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1ea58c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1ea58cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ea590: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1ea590u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea594: 0x4a43085a  vmulz.z     $vf1, $vf1, $vf3z
    ctx->pc = 0x1ea594u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea598: 0x700227c9  prot3w      $a0, $v0
    ctx->pc = 0x1ea598u;
    SET_GPR_VEC(ctx, 4, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1ea59c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ea59cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5a0: 0x4b010042  vaddz.x     $vf1, $vf0, $vf1z
    ctx->pc = 0x1ea5a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea5a4: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1ea5a4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea5a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ea5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5ac: 0xda2200f0  lqc2        $vf2, 0xF0($s1)
    ctx->pc = 0x1ea5acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ea5b0: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1ea5b0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ea5b4: 0x70e41389  pcpyld      $v0, $a3, $a0
    ctx->pc = 0x1ea5b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x1ea5b8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1ea5b8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ea5bc: 0x7e2200e0  sq          $v0, 0xE0($s1)
    ctx->pc = 0x1ea5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), GPR_VEC(ctx, 2));
    // 0x1ea5c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1ea5c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ea5c4: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1ea5c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ea5c8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1ea5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1ea5cc: 0xfa2300e0  sqc2        $vf3, 0xE0($s1)
    ctx->pc = 0x1ea5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ea5d0: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1ea5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ea5d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1ea5d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ea5d8: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1ea5d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ea5dc: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1ea5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1ea5e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ea5e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5e4: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1EA5E4u;
    {
        const bool branch_taken_0x1ea5e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EA5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA5E4u;
            // 0x1ea5e8: 0xfa2200f0  sqc2        $vf2, 0xF0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 240), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea5e4) {
            ctx->pc = 0x1EA660u;
            goto label_1ea660;
        }
    }
    ctx->pc = 0x1EA5ECu;
    // 0x1ea5ec: 0x8e22024c  lw          $v0, 0x24C($s1)
    ctx->pc = 0x1ea5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1ea5f0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EA5F0u;
    {
        const bool branch_taken_0x1ea5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA5F0u;
            // 0x1ea5f4: 0x48241800  qmfc2.ni    $a0, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea5f0) {
            ctx->pc = 0x1EA660u;
            goto label_1ea660;
        }
    }
    ctx->pc = 0x1EA5F8u;
    // 0x1ea5f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ea5f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ea5fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ea5fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea600: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ea600u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea604: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1EA604u;
    {
        const bool branch_taken_0x1ea604 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea604) {
            ctx->pc = 0x1EA660u;
            goto label_1ea660;
        }
    }
    ctx->pc = 0x1EA60Cu;
    // 0x1ea60c: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x1ea60cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1ea610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea614: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ea614u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea618: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1EA618u;
    {
        const bool branch_taken_0x1ea618 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea618) {
            ctx->pc = 0x1EA660u;
            goto label_1ea660;
        }
    }
    ctx->pc = 0x1EA620u;
    // 0x1ea620: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1ea620u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea624: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ea624u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea628: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1EA628u;
    {
        const bool branch_taken_0x1ea628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea628) {
            ctx->pc = 0x1EA660u;
            goto label_1ea660;
        }
    }
    ctx->pc = 0x1EA630u;
    // 0x1ea630: 0x701017c9  prot3w      $v0, $s0
    ctx->pc = 0x1ea630u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1ea634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea638: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ea638u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea63c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA63Cu;
    {
        const bool branch_taken_0x1ea63c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea63c) {
            ctx->pc = 0x1EA660u;
            goto label_1ea660;
        }
    }
    ctx->pc = 0x1EA644u;
    // 0x1ea644: 0x70101789  pexew       $v0, $s0
    ctx->pc = 0x1ea644u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1ea648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea64c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ea64cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea650: 0x0  nop
    ctx->pc = 0x1ea650u;
    // NOP
    // 0x1ea654: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1EA654u;
    {
        const bool branch_taken_0x1ea654 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea654) {
            ctx->pc = 0x1EA658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA654u;
            // 0x1ea658: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EA660u;
            goto label_1ea660;
        }
    }
    ctx->pc = 0x1EA65Cu;
    // 0x1ea65c: 0x0  nop
    ctx->pc = 0x1ea65cu;
    // NOP
label_1ea660:
    // 0x1ea660: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EA660u;
    {
        const bool branch_taken_0x1ea660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA660u;
            // 0x1ea664: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea660) {
            ctx->pc = 0x1EA6E8u;
            goto label_1ea6e8;
        }
    }
    ctx->pc = 0x1EA668u;
    // 0x1ea668: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ea668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ea66c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1ea66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1ea670: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ea670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ea674: 0xc4405e98  lwc1        $f0, 0x5E98($v0)
    ctx->pc = 0x1ea674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea678: 0xda2200e0  lqc2        $vf2, 0xE0($s1)
    ctx->pc = 0x1ea678u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1ea67c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1ea67cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1ea680: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ea680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ea684: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ea684u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1ea688: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1ea688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1ea68c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1ea68cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1ea690: 0x4a811040  vaddx.y     $vf1, $vf2, $vf1x
    ctx->pc = 0x1ea690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea694: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1ea694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea698: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1ea698u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea69c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ea69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1ea6a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ea6a4: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1ea6a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ea6a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ea6a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea6ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ea6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ea6b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ea6b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea6b4: 0x0  nop
    ctx->pc = 0x1ea6b4u;
    // NOP
    // 0x1ea6b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA6B8u;
    {
        const bool branch_taken_0x1ea6b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA6B8u;
            // 0x1ea6bc: 0xfa2200e0  sqc2        $vf2, 0xE0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea6b8) {
            ctx->pc = 0x1EA6D0u;
            goto label_1ea6d0;
        }
    }
    ctx->pc = 0x1EA6C0u;
    // 0x1ea6c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ea6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6c4: 0xc07a11e  jal         func_1E8478
    ctx->pc = 0x1EA6C4u;
    SET_GPR_U32(ctx, 31, 0x1EA6CCu);
    ctx->pc = 0x1EA6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA6C4u;
            // 0x1ea6c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8478u;
    if (runtime->hasFunction(0x1E8478u)) {
        auto targetFn = runtime->lookupFunction(0x1E8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA6CCu; }
        if (ctx->pc != 0x1EA6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8478_0x1e8478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA6CCu; }
        if (ctx->pc != 0x1EA6CCu) { return; }
    }
    ctx->pc = 0x1EA6CCu;
    // 0x1ea6cc: 0x0  nop
    ctx->pc = 0x1ea6ccu;
    // NOP
label_1ea6d0:
    // 0x1ea6d0: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1ea6d0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1ea6d4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1ea6d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1ea6d8: 0xc0794f6  jal         func_1E53D8
    ctx->pc = 0x1EA6D8u;
    SET_GPR_U32(ctx, 31, 0x1EA6E0u);
    ctx->pc = 0x1EA6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA6D8u;
            // 0x1ea6dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E53D8u;
    if (runtime->hasFunction(0x1E53D8u)) {
        auto targetFn = runtime->lookupFunction(0x1E53D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA6E0u; }
        if (ctx->pc != 0x1EA6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e53d8_0x1e5428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA6E0u; }
        if (ctx->pc != 0x1EA6E0u) { return; }
    }
    ctx->pc = 0x1EA6E0u;
    // 0x1ea6e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EA6E0u;
    {
        const bool branch_taken_0x1ea6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA6E0u;
            // 0x1ea6e4: 0x700294a9  por         $s2, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea6e0) {
            ctx->pc = 0x1EA700u;
            goto label_1ea700;
        }
    }
    ctx->pc = 0x1EA6E8u;
label_1ea6e8:
    // 0x1ea6e8: 0x7a320110  lq          $s2, 0x110($s1)
    ctx->pc = 0x1ea6e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1ea6ec: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1ea6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ea6f0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ea6f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ea6f4: 0xda2100e0  lqc2        $vf1, 0xE0($s1)
    ctx->pc = 0x1ea6f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1ea6f8: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1ea6f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea6fc: 0xfa2100e0  sqc2        $vf1, 0xE0($s1)
    ctx->pc = 0x1ea6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_1ea700:
    // 0x1ea700: 0x26300050  addiu       $s0, $s1, 0x50
    ctx->pc = 0x1ea700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1ea704: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1ea704u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ea708: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1ea708u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ea70c: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x1ea70cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ea710: 0x4be118ac  vsub.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1ea710u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ea714: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ea714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea718: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1ea718u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ea71c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1ea71cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1ea720: 0xc07954c  jal         func_1E5530
    ctx->pc = 0x1EA720u;
    SET_GPR_U32(ctx, 31, 0x1EA728u);
    ctx->pc = 0x1EA724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA720u;
            // 0x1ea724: 0xfba300b0  sqc2        $vf3, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5530u;
    if (runtime->hasFunction(0x1E5530u)) {
        auto targetFn = runtime->lookupFunction(0x1E5530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA728u; }
        if (ctx->pc != 0x1EA728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5530_0x1e5530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA728u; }
        if (ctx->pc != 0x1EA728u) { return; }
    }
    ctx->pc = 0x1EA728u;
    // 0x1ea728: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ea728u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ea72c: 0xfa020020  sqc2        $vf2, 0x20($s0)
    ctx->pc = 0x1ea72cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ea730: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ea730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ea734: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1ea734u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ea738: 0xdba300b0  lqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x1ea738u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea73c: 0x4a8118c0  vaddx.y     $vf3, $vf3, $vf1x
    ctx->pc = 0x1ea73cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ea740: 0x4be2112a  vmul.xyzw   $vf4, $vf2, $vf2
    ctx->pc = 0x1ea740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ea744: 0xfa030010  sqc2        $vf3, 0x10($s0)
    ctx->pc = 0x1ea744u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ea748: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1ea748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea74c: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1ea74cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea750: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1ea750u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ea754: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ea754u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ea758: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1ea758u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ea75c: 0x4a0002ff  vnop
    ctx->pc = 0x1ea75cu;
    // NOP operation, no action needed for VU0
    // 0x1ea760: 0x4a0002ff  vnop
    ctx->pc = 0x1ea760u;
    // NOP operation, no action needed for VU0
    // 0x1ea764: 0x4bc21afe  vopmula.xyz $ACC, $vf3, $vf2
    ctx->pc = 0x1ea764u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]);
    // 0x1ea768: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1ea768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ea76c: 0x4bc310ee  vopmsub.xyz $vf3, $vf2, $vf3
    ctx->pc = 0x1ea76cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ea770: 0xfa020020  sqc2        $vf2, 0x20($s0)
    ctx->pc = 0x1ea770u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ea774: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x1ea774u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ea778: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1ea778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ea77c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1ea77cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea780: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1ea780u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea784: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1ea784u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ea788: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ea788u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ea78c: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1ea78cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ea790: 0x4a0002ff  vnop
    ctx->pc = 0x1ea790u;
    // NOP operation, no action needed for VU0
    // 0x1ea794: 0x4a0002ff  vnop
    ctx->pc = 0x1ea794u;
    // NOP operation, no action needed for VU0
    // 0x1ea798: 0xfa230050  sqc2        $vf3, 0x50($s1)
    ctx->pc = 0x1ea798u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ea79c: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1ea79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ea7a0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1ea7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ea7a4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EA7A4u;
    {
        const bool branch_taken_0x1ea7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7A4u;
            // 0x1ea7a8: 0x70122ca9  por         $a1, $zero, $s2 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7a4) {
            ctx->pc = 0x1EA7E8u;
            goto label_1ea7e8;
        }
    }
    ctx->pc = 0x1EA7ACu;
    // 0x1ea7ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ea7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ea7b0: 0xae20024c  sw          $zero, 0x24C($s1)
    ctx->pc = 0x1ea7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
    // 0x1ea7b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ea7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ea7b8: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x1ea7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x1ea7bc: 0xc07a68e  jal         func_1E9A38
    ctx->pc = 0x1EA7BCu;
    SET_GPR_U32(ctx, 31, 0x1EA7C4u);
    ctx->pc = 0x1EA7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7BCu;
            // 0x1ea7c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9A38u;
    if (runtime->hasFunction(0x1E9A38u)) {
        auto targetFn = runtime->lookupFunction(0x1E9A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7C4u; }
        if (ctx->pc != 0x1EA7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9A38_0x1e9a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7C4u; }
        if (ctx->pc != 0x1EA7C4u) { return; }
    }
    ctx->pc = 0x1EA7C4u;
    // 0x1ea7c4: 0x8e2302dc  lw          $v1, 0x2DC($s1)
    ctx->pc = 0x1ea7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x1ea7c8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1ea7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1ea7cc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA7CCu;
    {
        const bool branch_taken_0x1ea7cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7CCu;
            // 0x1ea7d0: 0x700294a9  por         $s2, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7cc) {
            ctx->pc = 0x1EA7F0u;
            goto label_1ea7f0;
        }
    }
    ctx->pc = 0x1EA7D4u;
    // 0x1ea7d4: 0x70122ca9  por         $a1, $zero, $s2
    ctx->pc = 0x1ea7d4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x1ea7d8: 0xc0723fe  jal         func_1C8FF8
    ctx->pc = 0x1EA7D8u;
    SET_GPR_U32(ctx, 31, 0x1EA7E0u);
    ctx->pc = 0x1EA7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7D8u;
            // 0x1ea7dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8FF8u;
    if (runtime->hasFunction(0x1C8FF8u)) {
        auto targetFn = runtime->lookupFunction(0x1C8FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7E0u; }
        if (ctx->pc != 0x1EA7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8FF8_0x1c8ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7E0u; }
        if (ctx->pc != 0x1EA7E0u) { return; }
    }
    ctx->pc = 0x1EA7E0u;
    // 0x1ea7e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA7E0u;
    {
        const bool branch_taken_0x1ea7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7E0u;
            // 0x1ea7e4: 0x700294a9  por         $s2, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7e0) {
            ctx->pc = 0x1EA7F0u;
            goto label_1ea7f0;
        }
    }
    ctx->pc = 0x1EA7E8u;
label_1ea7e8:
    // 0x1ea7e8: 0xc07a22e  jal         func_1E88B8
    ctx->pc = 0x1EA7E8u;
    SET_GPR_U32(ctx, 31, 0x1EA7F0u);
    ctx->pc = 0x1EA7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7E8u;
            // 0x1ea7ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E88B8u;
    if (runtime->hasFunction(0x1E88B8u)) {
        auto targetFn = runtime->lookupFunction(0x1E88B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7F0u; }
        if (ctx->pc != 0x1EA7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E88B8_0x1e88b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7F0u; }
        if (ctx->pc != 0x1EA7F0u) { return; }
    }
    ctx->pc = 0x1EA7F0u;
label_1ea7f0:
    // 0x1ea7f0: 0x701214a9  por         $v0, $zero, $s2
    ctx->pc = 0x1ea7f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x1ea7f4: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1ea7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ea7f8: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1ea7f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ea7fc: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1ea7fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ea800: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1ea800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ea804: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1ea804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ea808: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x1ea808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ea80c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x1ea80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ea810: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1ea810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ea814: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA814u;
            // 0x1ea818: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA3BCu: goto label_1ea3bc;
            case 0x1EA3C4u: goto label_1ea3c4;
            case 0x1EA400u: goto label_1ea400;
            case 0x1EA408u: goto label_1ea408;
            case 0x1EA520u: goto label_1ea520;
            case 0x1EA578u: goto label_1ea578;
            case 0x1EA660u: goto label_1ea660;
            case 0x1EA6D0u: goto label_1ea6d0;
            case 0x1EA6E8u: goto label_1ea6e8;
            case 0x1EA700u: goto label_1ea700;
            case 0x1EA7E8u: goto label_1ea7e8;
            case 0x1EA7F0u: goto label_1ea7f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EA81Cu;
    // 0x1ea81c: 0x0  nop
    ctx->pc = 0x1ea81cu;
    // NOP
}
