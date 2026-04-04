#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E4838
// Address: 0x1e4838 - 0x1e4a80
void sub_001E4838_0x1e4838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4838_0x1e4838");
#endif

    ctx->pc = 0x1e4838u;

    // 0x1e4838: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e4838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e483c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e483cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4840: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1e4840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1e4844: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1e4844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1e4848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e4848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e484c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1e484cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1e4850: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e4850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4854: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1e4854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1e4858: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e4858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1e485c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e485cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e4860: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e4860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4864: 0x0  nop
    ctx->pc = 0x1e4864u;
    // NOP
label_1e4868:
    // 0x1e4868: 0x0  nop
    ctx->pc = 0x1e4868u;
    // NOP
    // 0x1e486c: 0x0  nop
    ctx->pc = 0x1e486cu;
    // NOP
    // 0x1e4870: 0x0  nop
    ctx->pc = 0x1e4870u;
    // NOP
    // 0x1e4874: 0x0  nop
    ctx->pc = 0x1e4874u;
    // NOP
    // 0x1e4878: 0x0  nop
    ctx->pc = 0x1e4878u;
    // NOP
    // 0x1e487c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E487Cu;
    {
        const bool branch_taken_0x1e487c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E487Cu;
            // 0x1e4880: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e487c) {
            ctx->pc = 0x1E4868u;
            runtime->cooperativeGuestYield();
            goto label_1e4868;
        }
    }
    ctx->pc = 0x1E4884u;
    // 0x1e4884: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4888: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e4888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e488c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e488cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4890:
    // 0x1e4890: 0x0  nop
    ctx->pc = 0x1e4890u;
    // NOP
    // 0x1e4894: 0x0  nop
    ctx->pc = 0x1e4894u;
    // NOP
    // 0x1e4898: 0x0  nop
    ctx->pc = 0x1e4898u;
    // NOP
    // 0x1e489c: 0x0  nop
    ctx->pc = 0x1e489cu;
    // NOP
    // 0x1e48a0: 0x0  nop
    ctx->pc = 0x1e48a0u;
    // NOP
    // 0x1e48a4: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E48A4u;
    {
        const bool branch_taken_0x1e48a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E48A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E48A4u;
            // 0x1e48a8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48a4) {
            ctx->pc = 0x1E4890u;
            runtime->cooperativeGuestYield();
            goto label_1e4890;
        }
    }
    ctx->pc = 0x1E48ACu;
    // 0x1e48ac: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x1e48acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e48b0: 0xda020050  lqc2        $vf2, 0x50($s0)
    ctx->pc = 0x1e48b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1e48b4: 0xda010120  lqc2        $vf1, 0x120($s0)
    ctx->pc = 0x1e48b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1e48b8: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1e48b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e48bc: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1e48bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e48c0: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1e48c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e48c4: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1e48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x1e48c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e48c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e48cc: 0x4be11118  vmulx.xyzw  $vf4, $vf2, $vf1x
    ctx->pc = 0x1e48ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e48d0: 0x4be5233c  vmove.xyzw  $vf5, $vf4
    ctx->pc = 0x1e48d0u;
    ctx->vu0_vf[5] = ctx->vu0_vf[4];
    // 0x1e48d4: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x1e48d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1e48d8: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1e48d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e48dc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1e48dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1e48e0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e48e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e48e4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e48e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e48e8: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e48e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e48ec: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1e48ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e48f0: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1e48f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1e48f4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e48f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1e48f8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e48f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e48fc: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e48fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4900: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1e4900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e4904: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x1e4904u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1e4908: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x1e4908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
    // 0x1e490c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E490Cu;
    {
        const bool branch_taken_0x1e490c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E490Cu;
            // 0x1e4910: 0xfba10020  sqc2        $vf1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e490c) {
            ctx->pc = 0x1E4938u;
            goto label_1e4938;
        }
    }
    ctx->pc = 0x1E4914u;
    // 0x1e4914: 0x4be40868  vadd.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x1e4914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4918: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4918u;
    {
        const bool branch_taken_0x1e4918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E491Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4918u;
            // 0x1e491c: 0xfba10020  sqc2        $vf1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4918) {
            ctx->pc = 0x1E4940u;
            goto label_1e4940;
        }
    }
    ctx->pc = 0x1E4920u;
label_1e4920:
    // 0x1e4920: 0x36620008  ori         $v0, $s3, 0x8
    ctx->pc = 0x1e4920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
    // 0x1e4924: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x1e4924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1e4928: 0x7e030220  sq          $v1, 0x220($s0)
    ctx->pc = 0x1e4928u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 544), GPR_VEC(ctx, 3));
    // 0x1e492c: 0xae050238  sw          $a1, 0x238($s0)
    ctx->pc = 0x1e492cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 5));
    // 0x1e4930: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1E4930u;
    {
        const bool branch_taken_0x1e4930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4930u;
            // 0x1e4934: 0xae040244  sw          $a0, 0x244($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4930) {
            ctx->pc = 0x1E4A64u;
            goto label_1e4a64;
        }
    }
    ctx->pc = 0x1E4938u;
label_1e4938:
    // 0x1e4938: 0x4be5186c  vsub.xyzw   $vf1, $vf3, $vf5
    ctx->pc = 0x1e4938u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e493c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e493cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e4940:
    // 0x1e4940: 0xc6000140  lwc1        $f0, 0x140($s0)
    ctx->pc = 0x1e4940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4944: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e4944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e4948: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e4948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e494c: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x1e494cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e4950: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e4950u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e4954: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e4954u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e4958: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e4958u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e495c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1e495cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4960: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e4960u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4964: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e4964u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4968: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e4968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e496c: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e496cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4970: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e4970u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4974: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e4974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4978: 0x3c020903  lui         $v0, 0x903
    ctx->pc = 0x1e4978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2307 << 16));
    // 0x1e497c: 0x3c03ff94  lui         $v1, 0xFF94
    ctx->pc = 0x1e497cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65428 << 16));
    // 0x1e4980: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x1e4980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x1e4984: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1e4984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1e4988: 0x8e040258  lw          $a0, 0x258($s0)
    ctx->pc = 0x1e4988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1e498c: 0x3463e00c  ori         $v1, $v1, 0xE00C
    ctx->pc = 0x1e498cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57356);
    // 0x1e4990: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1e4990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e4994: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e4994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e4998: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1e4998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1e499c: 0xacc3f170  sw          $v1, -0xE90($a2)
    ctx->pc = 0x1e499cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963568), GPR_U32(ctx, 3));
    // 0x1e49a0: 0x24c2f170  addiu       $v0, $a2, -0xE90
    ctx->pc = 0x1e49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963568));
    // 0x1e49a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e49a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e49a8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1e49a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1e49ac: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x1e49acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e49b0: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1e49b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1e49b4: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1e49b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1e49b8: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1e49b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1e49bc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e49bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e49c0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e49c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e49c4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1e49c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1e49c8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1e49c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1e49cc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1e49ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_1e49d0:
    // 0x1e49d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e49d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e49d4: 0x7a250000  lq          $a1, 0x0($s1)
    ctx->pc = 0x1e49d4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e49d8: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1e49d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1e49dc: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E49DCu;
    SET_GPR_U32(ctx, 31, 0x1E49E4u);
    ctx->pc = 0x1E49E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E49DCu;
            // 0x1e49e0: 0x7a260020  lq          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E49E4u; }
        if (ctx->pc != 0x1E49E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E49E4u; }
        if (ctx->pc != 0x1E49E4u) { return; }
    }
    ctx->pc = 0x1E49E4u;
    // 0x1e49e4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E49E4u;
    {
        const bool branch_taken_0x1e49e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E49E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E49E4u;
            // 0x1e49e8: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49e4) {
            ctx->pc = 0x1E4A50u;
            goto label_1e4a50;
        }
    }
    ctx->pc = 0x1E49ECu;
    // 0x1e49ec: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e49ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e49f0: 0x244377a0  addiu       $v1, $v0, 0x77A0
    ctx->pc = 0x1e49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30624));
    // 0x1e49f4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e49f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e49f8: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e49f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e49fc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e49fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4a00: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e4a00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4a04: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1e4a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1e4a08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e4a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4a0c: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x1e4a0cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4a10: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1e4a10u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4a14: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e4a14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4a18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e4a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4a1c: 0x0  nop
    ctx->pc = 0x1e4a1cu;
    // NOP
    // 0x1e4a20: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1E4A20u;
    {
        const bool branch_taken_0x1e4a20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A20u;
            // 0x1e4a24: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a20) {
            ctx->pc = 0x1E4A50u;
            goto label_1e4a50;
        }
    }
    ctx->pc = 0x1E4A28u;
    // 0x1e4a28: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x1e4a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1e4a2c: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x1e4a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1e4a30: 0x8c425e6c  lw          $v0, 0x5E6C($v0)
    ctx->pc = 0x1e4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24172)));
    // 0x1e4a34: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1e4a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e4a38: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E4A38u;
    {
        const bool branch_taken_0x1e4a38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A38u;
            // 0x1e4a3c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a38) {
            ctx->pc = 0x1E4A50u;
            goto label_1e4a50;
        }
    }
    ctx->pc = 0x1E4A40u;
    // 0x1e4a40: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x1e4a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x1e4a44: 0x5440ffb6  bnel        $v0, $zero, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1E4A44u;
    {
        const bool branch_taken_0x1e4a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4a44) {
            ctx->pc = 0x1E4A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A44u;
            // 0x1e4a48: 0x78830010  lq          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4920u;
            runtime->cooperativeGuestYield();
            goto label_1e4920;
        }
    }
    ctx->pc = 0x1E4A4Cu;
    // 0x1e4a4c: 0x0  nop
    ctx->pc = 0x1e4a4cu;
    // NOP
label_1e4a50:
    // 0x1e4a50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e4a50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e4a54: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1e4a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e4a58: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1E4A58u;
    {
        const bool branch_taken_0x1e4a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A58u;
            // 0x1e4a5c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a58) {
            ctx->pc = 0x1E49D0u;
            runtime->cooperativeGuestYield();
            goto label_1e49d0;
        }
    }
    ctx->pc = 0x1E4A60u;
    // 0x1e4a60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e4a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a64:
    // 0x1e4a64: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1e4a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4a68: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1e4a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e4a6c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1e4a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e4a70: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1e4a70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e4a74: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1e4a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e4a78: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A78u;
            // 0x1e4a7c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4868u: goto label_1e4868;
            case 0x1E4890u: goto label_1e4890;
            case 0x1E4920u: goto label_1e4920;
            case 0x1E4938u: goto label_1e4938;
            case 0x1E4940u: goto label_1e4940;
            case 0x1E49D0u: goto label_1e49d0;
            case 0x1E4A50u: goto label_1e4a50;
            case 0x1E4A64u: goto label_1e4a64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E4A80u;
}
