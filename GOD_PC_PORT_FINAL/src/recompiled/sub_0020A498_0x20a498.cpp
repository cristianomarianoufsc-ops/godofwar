#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020A498
// Address: 0x20a498 - 0x20acd0
void sub_0020A498_0x20a498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A498_0x20a498");
#endif

    ctx->pc = 0x20a498u;

    // 0x20a498: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x20a498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x20a49c: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x20a49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x20a4a0: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x20a4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x20a4a4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20a4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4a8: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x20a4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x20a4ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20a4acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4b0: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x20a4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x20a4b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20a4b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4b8: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x20a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x20a4bc: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x20a4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x20a4c0: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x20a4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x20a4c4: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x20a4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x20a4c8: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x20a4c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20a4cc: 0xda260010  lqc2        $vf6, 0x10($s1)
    ctx->pc = 0x20a4ccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x20a4d0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x20a4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x20a4d4: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x20a4d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20a4d8: 0x4be608aa  vmul.xyzw   $vf2, $vf1, $vf6
    ctx->pc = 0x20a4d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a4dc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x20a4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a4e0: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x20a4e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x20a4e4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x20a4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x20a4e8: 0xda030030  lqc2        $vf3, 0x30($s0)
    ctx->pc = 0x20a4e8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20a4ec: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x20a4ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4f0: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x20a4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20a4f4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20a4f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a4f8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20a4f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a4fc: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x20a4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x20a500: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x20a500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x20a504: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20a504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a508: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x20a508u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a50c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x20a50cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a510: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20a510u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a514: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20a514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a518: 0x0  nop
    ctx->pc = 0x20a518u;
    // NOP
    // 0x20a51c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x20A51Cu;
    {
        const bool branch_taken_0x20a51c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a51c) {
            ctx->pc = 0x20A520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A51Cu;
            // 0x20a520: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A528u;
            goto label_20a528;
        }
    }
    ctx->pc = 0x20A524u;
    // 0x20a524: 0x0  nop
    ctx->pc = 0x20a524u;
    // NOP
label_20a528:
    // 0x20a528: 0xda250030  lqc2        $vf5, 0x30($s1)
    ctx->pc = 0x20a528u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x20a52c: 0x4be3286c  vsub.xyzw   $vf1, $vf5, $vf3
    ctx->pc = 0x20a52cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a530: 0x4be1306a  vmul.xyzw   $vf1, $vf6, $vf1
    ctx->pc = 0x20a530u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a534: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x20a534u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a538: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x20a538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a53c: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x20a53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x20a540: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20a540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a544: 0x4be211fd  vabs.xyzw   $vf2, $vf2
    ctx->pc = 0x20a544u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[2], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a548: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x20a548u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a54c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x20a54cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20a550: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20a550u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a554: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20a554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a558: 0x0  nop
    ctx->pc = 0x20a558u;
    // NOP
    // 0x20a55c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x20A55Cu;
    {
        const bool branch_taken_0x20a55c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a55c) {
            ctx->pc = 0x20A560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A55Cu;
            // 0x20a560: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A568u;
            goto label_20a568;
        }
    }
    ctx->pc = 0x20A564u;
    // 0x20a564: 0x0  nop
    ctx->pc = 0x20a564u;
    // NOP
label_20a568:
    // 0x20a568: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x20a568u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x20a56c: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x20a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x20a570: 0x8ec2cd48  lw          $v0, -0x32B8($s6)
    ctx->pc = 0x20a570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954312)));
    // 0x20a574: 0x16400048  bnez        $s2, . + 4 + (0x48 << 2)
    ctx->pc = 0x20A574u;
    {
        const bool branch_taken_0x20a574 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A574u;
            // 0x20a578: 0x62a82b  sltu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a574) {
            ctx->pc = 0x20A698u;
            goto label_20a698;
        }
    }
    ctx->pc = 0x20A57Cu;
    // 0x20a57c: 0x56600047  bnel        $s3, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x20A57Cu;
    {
        const bool branch_taken_0x20a57c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a57c) {
            ctx->pc = 0x20A580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A57Cu;
            // 0x20a580: 0x7a050030  lq          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A69Cu;
            goto label_20a69c;
        }
    }
    ctx->pc = 0x20A584u;
    // 0x20a584: 0x56800045  bnel        $s4, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x20A584u;
    {
        const bool branch_taken_0x20a584 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a584) {
            ctx->pc = 0x20A588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A584u;
            // 0x20a588: 0x7a050030  lq          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A69Cu;
            goto label_20a69c;
        }
    }
    ctx->pc = 0x20A58Cu;
    // 0x20a58c: 0x56a00043  bnel        $s5, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x20A58Cu;
    {
        const bool branch_taken_0x20a58c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a58c) {
            ctx->pc = 0x20A590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A58Cu;
            // 0x20a590: 0x7a050030  lq          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A69Cu;
            goto label_20a69c;
        }
    }
    ctx->pc = 0x20A594u;
    // 0x20a594: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x20a594u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a598: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20a598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20a59c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x20a59cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20a5a0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x20a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20a5a4: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x20a5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20a5a8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x20a5a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x20a5ac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A5ACu;
    {
        const bool branch_taken_0x20a5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a5ac) {
            ctx->pc = 0x20A5B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A5ACu;
            // 0x20a5b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A5B4u;
            goto label_20a5b4;
        }
    }
    ctx->pc = 0x20A5B4u;
label_20a5b4:
    // 0x20a5b4: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x20a5b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x20a5b8: 0x4be22058  vmulx.xyzw  $vf1, $vf4, $vf2x
    ctx->pc = 0x20a5b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a5bc: 0x4be12868  vadd.xyzw   $vf1, $vf5, $vf1
    ctx->pc = 0x20a5bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a5c0: 0xda250020  lqc2        $vf5, 0x20($s1)
    ctx->pc = 0x20a5c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x20a5c4: 0xfba500b0  sqc2        $vf5, 0xB0($sp)
    ctx->pc = 0x20a5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x20a5c8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A5C8u;
    {
        const bool branch_taken_0x20a5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a5c8) {
            ctx->pc = 0x20A5CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A5C8u;
            // 0x20a5cc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A5D0u;
            goto label_20a5d0;
        }
    }
    ctx->pc = 0x20A5D0u;
label_20a5d0:
    // 0x20a5d0: 0x4be22898  vmulx.xyzw  $vf2, $vf5, $vf2x
    ctx->pc = 0x20a5d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a5d4: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x20a5d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a5d8: 0x4be308ec  vsub.xyzw   $vf3, $vf1, $vf3
    ctx->pc = 0x20a5d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20a5dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20a5dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a5e0: 0x4be618aa  vmul.xyzw   $vf2, $vf3, $vf6
    ctx->pc = 0x20a5e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a5e4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20a5e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a5e8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20a5e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a5ec: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x20a5ecu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a5f0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x20a5f0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a5f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20a5f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a5f8: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x20A5F8u;
    {
        const bool branch_taken_0x20a5f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a5f8) {
            ctx->pc = 0x20A690u;
            goto label_20a690;
        }
    }
    ctx->pc = 0x20A600u;
    // 0x20a600: 0x4be418aa  vmul.xyzw   $vf2, $vf3, $vf4
    ctx->pc = 0x20a600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a604: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20a604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a608: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20a608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a60c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x20a60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x20a610: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20a610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a614: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x20a614u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a618: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20a618u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a61c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20a61cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a620: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x20A620u;
    {
        const bool branch_taken_0x20a620 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a620) {
            ctx->pc = 0x20A690u;
            goto label_20a690;
        }
    }
    ctx->pc = 0x20A628u;
    // 0x20a628: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20a628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a62c: 0x3c01c180  lui         $at, 0xC180
    ctx->pc = 0x20a62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49536 << 16));
    // 0x20a630: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20a630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20a634: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20a634u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a638: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x20a638u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a63c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20a63cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a640: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x20a640u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a644: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x20A644u;
    {
        const bool branch_taken_0x20a644 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a644) {
            ctx->pc = 0x20A690u;
            goto label_20a690;
        }
    }
    ctx->pc = 0x20A64Cu;
    // 0x20a64c: 0x4be518aa  vmul.xyzw   $vf2, $vf3, $vf5
    ctx->pc = 0x20a64cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a650: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20a650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a654: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20a654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a658: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x20a658u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a65c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x20a65cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a660: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20a660u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a664: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x20A664u;
    {
        const bool branch_taken_0x20a664 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a664) {
            ctx->pc = 0x20A690u;
            goto label_20a690;
        }
    }
    ctx->pc = 0x20A66Cu;
    // 0x20a66c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20a66cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a670: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20a670u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a674: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x20a674u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a678: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20a678u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a67c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x20a67cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a680: 0x0  nop
    ctx->pc = 0x20a680u;
    // NOP
    // 0x20a684: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x20A684u;
    {
        const bool branch_taken_0x20a684 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a684) {
            ctx->pc = 0x20A688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A684u;
            // 0x20a688: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A690u;
            goto label_20a690;
        }
    }
    ctx->pc = 0x20A68Cu;
    // 0x20a68c: 0x0  nop
    ctx->pc = 0x20a68cu;
    // NOP
label_20a690:
    // 0x20a690: 0x14600181  bnez        $v1, . + 4 + (0x181 << 2)
    ctx->pc = 0x20A690u;
    {
        const bool branch_taken_0x20a690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A690u;
            // 0x20a694: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a690) {
            ctx->pc = 0x20AC98u;
            goto label_20ac98;
        }
    }
    ctx->pc = 0x20A698u;
label_20a698:
    // 0x20a698: 0x7a050030  lq          $a1, 0x30($s0)
    ctx->pc = 0x20a698u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_20a69c:
    // 0x20a69c: 0xc0828e4  jal         func_20A390
    ctx->pc = 0x20A69Cu;
    SET_GPR_U32(ctx, 31, 0x20A6A4u);
    ctx->pc = 0x20A6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A69Cu;
            // 0x20a6a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A390u;
    if (runtime->hasFunction(0x20A390u)) {
        auto targetFn = runtime->lookupFunction(0x20A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A6A4u; }
        if (ctx->pc != 0x20A6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20a390_0x20a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A6A4u; }
        if (ctx->pc != 0x20A6A4u) { return; }
    }
    ctx->pc = 0x20A6A4u;
    // 0x20a6a4: 0x12400089  beqz        $s2, . + 4 + (0x89 << 2)
    ctx->pc = 0x20A6A4u;
    {
        const bool branch_taken_0x20a6a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A6A4u;
            // 0x20a6a8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a6a4) {
            ctx->pc = 0x20A8CCu;
            goto label_20a8cc;
        }
    }
    ctx->pc = 0x20A6ACu;
    // 0x20a6ac: 0xda030030  lqc2        $vf3, 0x30($s0)
    ctx->pc = 0x20a6acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20a6b0: 0xda410030  lqc2        $vf1, 0x30($s2)
    ctx->pc = 0x20a6b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x20a6b4: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x20a6b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20a6b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20a6bc: 0xfba30130  sqc2        $vf3, 0x130($sp)
    ctx->pc = 0x20a6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20a6c0: 0xc06149c  jal         func_185270
    ctx->pc = 0x20A6C0u;
    SET_GPR_U32(ctx, 31, 0x20A6C8u);
    ctx->pc = 0x20A6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A6C0u;
            // 0x20a6c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185270u;
    if (runtime->hasFunction(0x185270u)) {
        auto targetFn = runtime->lookupFunction(0x185270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A6C8u; }
        if (ctx->pc != 0x20A6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_185270_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A6C8u; }
        if (ctx->pc != 0x20A6C8u) { return; }
    }
    ctx->pc = 0x20A6C8u;
    // 0x20a6c8: 0xdba60040  lqc2        $vf6, 0x40($sp)
    ctx->pc = 0x20a6c8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20a6cc: 0xdba70060  lqc2        $vf7, 0x60($sp)
    ctx->pc = 0x20a6ccu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20a6d0: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x20a6d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20a6d4: 0xdba30130  lqc2        $vf3, 0x130($sp)
    ctx->pc = 0x20a6d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x20a6d8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x20a6d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20a6dc: 0x4be3312a  vmul.xyzw   $vf4, $vf6, $vf3
    ctx->pc = 0x20a6dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20a6e0: 0xfa260000  sqc2        $vf6, 0x0($s1)
    ctx->pc = 0x20a6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x20a6e4: 0xfa220010  sqc2        $vf2, 0x10($s1)
    ctx->pc = 0x20a6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20a6e8: 0xfa270020  sqc2        $vf7, 0x20($s1)
    ctx->pc = 0x20a6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x20a6ec: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x20a6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x20a6f0: 0xda450030  lqc2        $vf5, 0x30($s2)
    ctx->pc = 0x20a6f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x20a6f4: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x20a6f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a6f8: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x20a6f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a6fc: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x20a6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
    // 0x20a700: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20a700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20a704: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x20a704u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a708: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x20a708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x20a70c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x20a70cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20a710: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20a710u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a714: 0x4be310aa  vmul.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x20a714u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a718: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20a718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20a71c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20a71cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x20a720: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x20a720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20a724: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20a724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a728: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20a728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20a72c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x20a72cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x20a730: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20a730u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a734: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20a734u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a738: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x20a738u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a73c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20a73cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a740: 0x4be338aa  vmul.xyzw   $vf2, $vf7, $vf3
    ctx->pc = 0x20a740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a744: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20a744u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a748: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20a748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a74c: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x20a74cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a750: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x20a750u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a754: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20a754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20a758: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20a758u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x20a75c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x20a75cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20a760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20a760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a764: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20a764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20a768: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x20a768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x20a76c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x20a76cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20a770: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x20a770u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x20a774: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20a774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a778: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x20a778u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x20a77c: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x20a77cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x20a780: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x20a780u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x20a784: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x20a784u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20a788: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x20a788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x20a78c: 0x4be12968  vadd.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x20a78cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20a790: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x20a790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x20a794: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x20a794u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a798: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x20a798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a79c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x20a79cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20a7a0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x20a7a0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a7a4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x20a7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x20a7a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20a7a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a7ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20a7acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a7b0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20a7b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a7b4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x20A7B4u;
    {
        const bool branch_taken_0x20a7b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a7b4) {
            ctx->pc = 0x20A7C8u;
            goto label_20a7c8;
        }
    }
    ctx->pc = 0x20A7BCu;
    // 0x20a7bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20a7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20a7c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20a7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a7c4: 0x0  nop
    ctx->pc = 0x20a7c4u;
    // NOP
label_20a7c8:
    // 0x20a7c8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x20a7c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x20a7cc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x20a7ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x20a7d0: 0x4be13058  vmulx.xyzw  $vf1, $vf6, $vf1x
    ctx->pc = 0x20a7d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a7d4: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x20a7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a7d8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x20a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x20a7dc: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x20a7dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20a7e0: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x20a7e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a7e4: 0x4be12928  vadd.xyzw   $vf4, $vf5, $vf1
    ctx->pc = 0x20a7e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20a7e8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20a7e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a7ec: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20a7ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a7f0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x20a7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x20a7f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20a7f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a7f8: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x20a7f8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a7fc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20a7fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a800: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20a800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a804: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x20A804u;
    {
        const bool branch_taken_0x20a804 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a804) {
            ctx->pc = 0x20A818u;
            goto label_20a818;
        }
    }
    ctx->pc = 0x20A80Cu;
    // 0x20a80c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20a80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20a810: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20a810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a814: 0x0  nop
    ctx->pc = 0x20a814u;
    // NOP
label_20a818:
    // 0x20a818: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x20a818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x20a81c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x20a81cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x20a820: 0x4be13858  vmulx.xyzw  $vf1, $vf7, $vf1x
    ctx->pc = 0x20a820u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a824: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x20a824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a828: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x20a828u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a82c: 0x4be12068  vadd.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x20a82cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a830: 0xfa210030  sqc2        $vf1, 0x30($s1)
    ctx->pc = 0x20a830u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a834: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20a834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a838: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x20a838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
    // 0x20a83c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20a83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20a840:
    // 0x20a840: 0xc082b34  jal         func_20ACD0
    ctx->pc = 0x20A840u;
    SET_GPR_U32(ctx, 31, 0x20A848u);
    ctx->pc = 0x20A844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A840u;
            // 0x20a844: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20ACD0u;
    if (runtime->hasFunction(0x20ACD0u)) {
        auto targetFn = runtime->lookupFunction(0x20ACD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A848u; }
        if (ctx->pc != 0x20A848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20acd0_0x20aec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A848u; }
        if (ctx->pc != 0x20A848u) { return; }
    }
    ctx->pc = 0x20A848u;
    // 0x20a848: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20A848u;
    {
        const bool branch_taken_0x20a848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A848u;
            // 0x20a84c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a848) {
            ctx->pc = 0x20A880u;
            goto label_20a880;
        }
    }
    ctx->pc = 0x20A850u;
    // 0x20a850: 0x2603001f  addiu       $v1, $s0, 0x1F
    ctx->pc = 0x20a850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x20a854: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x20a854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x20a858: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x20a858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x20a85c: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x20a85cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x20a860: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x20a860u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x20a864: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20a864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a868: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20a868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20a86c: 0x2042004  sllv        $a0, $a0, $s0
    ctx->pc = 0x20a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x20a870: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20a870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20a874: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20a874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20a878: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20A878u;
    {
        const bool branch_taken_0x20a878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A878u;
            // 0x20a87c: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a878) {
            ctx->pc = 0x20A8B0u;
            goto label_20a8b0;
        }
    }
    ctx->pc = 0x20A880u;
label_20a880:
    // 0x20a880: 0x2603001f  addiu       $v1, $s0, 0x1F
    ctx->pc = 0x20a880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x20a884: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x20a884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x20a888: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x20a888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x20a88c: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x20a88cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x20a890: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20a890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a894: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x20a894u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x20a898: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20a898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20a89c: 0x2042004  sllv        $a0, $a0, $s0
    ctx->pc = 0x20a89cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x20a8a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20a8a4: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x20a8a4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x20a8a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20a8ac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20a8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_20a8b0:
    // 0x20a8b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20a8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x20a8b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20a8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20a8b8: 0x2a020079  slti        $v0, $s0, 0x79
    ctx->pc = 0x20a8b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x20a8bc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x20A8BCu;
    {
        const bool branch_taken_0x20a8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A8BCu;
            // 0x20a8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8bc) {
            ctx->pc = 0x20A840u;
            runtime->cooperativeGuestYield();
            goto label_20a840;
        }
    }
    ctx->pc = 0x20A8C4u;
    // 0x20a8c4: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x20A8C4u;
    {
        const bool branch_taken_0x20a8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A8C4u;
            // 0x20a8c8: 0xae20006c  sw          $zero, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8c4) {
            ctx->pc = 0x20AC84u;
            goto label_20ac84;
        }
    }
    ctx->pc = 0x20A8CCu;
label_20a8cc:
    // 0x20a8cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20a8d0: 0x50e20008  beql        $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20A8D0u;
    {
        const bool branch_taken_0x20a8d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x20a8d0) {
            ctx->pc = 0x20A8D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A8D0u;
            // 0x20a8d4: 0xda040000  lqc2        $vf4, 0x0($s0) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A8F4u;
            goto label_20a8f4;
        }
    }
    ctx->pc = 0x20A8D8u;
    // 0x20a8d8: 0x56800006  bnel        $s4, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20A8D8u;
    {
        const bool branch_taken_0x20a8d8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a8d8) {
            ctx->pc = 0x20A8DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A8D8u;
            // 0x20a8dc: 0xda040000  lqc2        $vf4, 0x0($s0) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A8F4u;
            goto label_20a8f4;
        }
    }
    ctx->pc = 0x20A8E0u;
    // 0x20a8e0: 0x56600004  bnel        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A8E0u;
    {
        const bool branch_taken_0x20a8e0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a8e0) {
            ctx->pc = 0x20A8E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A8E0u;
            // 0x20a8e4: 0xda040000  lqc2        $vf4, 0x0($s0) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A8F4u;
            goto label_20a8f4;
        }
    }
    ctx->pc = 0x20A8E8u;
    // 0x20a8e8: 0x12a0005e  beqz        $s5, . + 4 + (0x5E << 2)
    ctx->pc = 0x20A8E8u;
    {
        const bool branch_taken_0x20a8e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A8E8u;
            // 0x20a8ec: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8e8) {
            ctx->pc = 0x20AA64u;
            goto label_20aa64;
        }
    }
    ctx->pc = 0x20A8F0u;
    // 0x20a8f0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x20a8f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_20a8f4:
    // 0x20a8f4: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x20a8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20a8f8: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x20a8f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20a8fc: 0xfa250010  sqc2        $vf5, 0x10($s1)
    ctx->pc = 0x20a8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x20a900: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x20a900u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x20a904: 0xfa260020  sqc2        $vf6, 0x20($s1)
    ctx->pc = 0x20a904u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x20a908: 0xda030030  lqc2        $vf3, 0x30($s0)
    ctx->pc = 0x20a908u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20a90c: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x20a90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20a910: 0x4be320aa  vmul.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x20a910u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a914: 0xfa230030  sqc2        $vf3, 0x30($s1)
    ctx->pc = 0x20a914u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20a918: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20a918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a91c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20a91cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a920: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x20a920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
    // 0x20a924: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20a924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a928: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x20a928u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a92c: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x20a92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x20a930: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x20a930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20a934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20a934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a938: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x20a938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x20a93c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20a93cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20a940: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20a940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20a944: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20a944u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x20a948: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x20a948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20a94c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20a94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a950: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20a950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20a954: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x20a954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x20a958: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x20a958u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x20a95c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x20a95cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x20a960: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x20a960u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x20a964: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x20a964u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20a968: 0x4be328aa  vmul.xyzw   $vf2, $vf5, $vf3
    ctx->pc = 0x20a968u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a96c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20a96cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a970: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20a970u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a974: 0x4be12958  vmulx.xyzw  $vf5, $vf5, $vf1x
    ctx->pc = 0x20a974u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20a978: 0x4be52128  vadd.xyzw   $vf4, $vf4, $vf5
    ctx->pc = 0x20a978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20a97c: 0xfba60100  sqc2        $vf6, 0x100($sp)
    ctx->pc = 0x20a97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x20a980: 0x4be330ea  vmul.xyzw   $vf3, $vf6, $vf3
    ctx->pc = 0x20a980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20a984: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x20a984u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a988: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x20a988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a98c: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x20a98cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a990: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20a990u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a994: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20a994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20a998: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20a998u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x20a99c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x20a99cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20a9a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20a9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a9a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20a9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20a9a8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x20a9a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x20a9ac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x20a9acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x20a9b0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x20a9b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x20a9b4: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x20a9b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x20a9b8: 0x4be13198  vmulx.xyzw  $vf6, $vf6, $vf1x
    ctx->pc = 0x20a9b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x20a9bc: 0x4be62128  vadd.xyzw   $vf4, $vf4, $vf6
    ctx->pc = 0x20a9bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20a9c0: 0xfa240030  sqc2        $vf4, 0x30($s1)
    ctx->pc = 0x20a9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20a9c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20a9c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a9c8: 0x8ec2cd48  lw          $v0, -0x32B8($s6)
    ctx->pc = 0x20a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954312)));
    // 0x20a9cc: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x20a9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x20a9d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20a9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a9d4: 0x0  nop
    ctx->pc = 0x20a9d4u;
    // NOP
label_20a9d8:
    // 0x20a9d8: 0xc082b34  jal         func_20ACD0
    ctx->pc = 0x20A9D8u;
    SET_GPR_U32(ctx, 31, 0x20A9E0u);
    ctx->pc = 0x20A9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A9D8u;
            // 0x20a9dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20ACD0u;
    if (runtime->hasFunction(0x20ACD0u)) {
        auto targetFn = runtime->lookupFunction(0x20ACD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A9E0u; }
        if (ctx->pc != 0x20A9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20acd0_0x20aec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A9E0u; }
        if (ctx->pc != 0x20A9E0u) { return; }
    }
    ctx->pc = 0x20A9E0u;
    // 0x20a9e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20A9E0u;
    {
        const bool branch_taken_0x20a9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A9E0u;
            // 0x20a9e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9e0) {
            ctx->pc = 0x20AA18u;
            goto label_20aa18;
        }
    }
    ctx->pc = 0x20A9E8u;
    // 0x20a9e8: 0x2603001f  addiu       $v1, $s0, 0x1F
    ctx->pc = 0x20a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x20a9ec: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x20a9ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x20a9f0: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x20a9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x20a9f4: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x20a9f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x20a9f8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x20a9f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x20a9fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20aa00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20aa04: 0x2042004  sllv        $a0, $a0, $s0
    ctx->pc = 0x20aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x20aa08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20aa0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20aa10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20AA10u;
    {
        const bool branch_taken_0x20aa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AA10u;
            // 0x20aa14: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa10) {
            ctx->pc = 0x20AA48u;
            goto label_20aa48;
        }
    }
    ctx->pc = 0x20AA18u;
label_20aa18:
    // 0x20aa18: 0x2603001f  addiu       $v1, $s0, 0x1F
    ctx->pc = 0x20aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x20aa1c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x20aa1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x20aa20: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x20aa20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x20aa24: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x20aa24u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x20aa28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20aa28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20aa2c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x20aa2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x20aa30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20aa34: 0x2042004  sllv        $a0, $a0, $s0
    ctx->pc = 0x20aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x20aa38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20aa3c: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x20aa3cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x20aa40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20aa44: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20aa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_20aa48:
    // 0x20aa48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20aa48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x20aa4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20aa4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20aa50: 0x2a020079  slti        $v0, $s0, 0x79
    ctx->pc = 0x20aa50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x20aa54: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x20AA54u;
    {
        const bool branch_taken_0x20aa54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AA54u;
            // 0x20aa58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa54) {
            ctx->pc = 0x20A9D8u;
            runtime->cooperativeGuestYield();
            goto label_20a9d8;
        }
    }
    ctx->pc = 0x20AA5Cu;
    // 0x20aa5c: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x20AA5Cu;
    {
        const bool branch_taken_0x20aa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AA5Cu;
            // 0x20aa60: 0xae20006c  sw          $zero, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa5c) {
            ctx->pc = 0x20AC84u;
            goto label_20ac84;
        }
    }
    ctx->pc = 0x20AA64u;
label_20aa64:
    // 0x20aa64: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20aa68: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x20aa68u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20aa6c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20AA6Cu;
    {
        const bool branch_taken_0x20aa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aa6c) {
            ctx->pc = 0x20AA70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20AA6Cu;
            // 0x20aa70: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20AA74u;
            goto label_20aa74;
        }
    }
    ctx->pc = 0x20AA74u;
label_20aa74:
    // 0x20aa74: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x20aa74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x20aa78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20aa78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20aa7c: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x20aa7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20aa80: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20aa80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20aa84: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x20aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x20aa88: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x20aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x20aa8c: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x20aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x20aa90: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x20aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x20aa94: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x20aa94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x20aa98: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x20aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x20aa9c: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x20aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x20aaa0: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x20aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x20aaa4: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x20aaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20aaa8: 0xda230030  lqc2        $vf3, 0x30($s1)
    ctx->pc = 0x20aaa8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x20aaac: 0x3812  mflo        $a3
    ctx->pc = 0x20aaacu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x20aab0: 0x4010  mfhi        $t0
    ctx->pc = 0x20aab0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x20aab4: 0x24f6fffb  addiu       $s6, $a3, -0x5
    ctx->pc = 0x20aab4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967291));
    // 0x20aab8: 0x2515fffb  addiu       $s5, $t0, -0x5
    ctx->pc = 0x20aab8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967291));
    // 0x20aabc: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x20aabcu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20aac0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20aac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20aac4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20aac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20aac8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x20aac8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20aacc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x20aaccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20aad0: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x20aad0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20aad4: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x20aad4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20aad8: 0xda220020  lqc2        $vf2, 0x20($s1)
    ctx->pc = 0x20aad8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x20aadc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x20aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20aae0: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x20aae0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20aae4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20aae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20aae8: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x20aae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20aaec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20AAECu;
    {
        const bool branch_taken_0x20aaec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aaec) {
            ctx->pc = 0x20AAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20AAECu;
            // 0x20aaf0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20AAF4u;
            goto label_20aaf4;
        }
    }
    ctx->pc = 0x20AAF4u;
label_20aaf4:
    // 0x20aaf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20aaf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20aaf8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x20aaf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x20aafc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x20aafcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x20ab00: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x20ab00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20ab04: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x20ab04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20ab08: 0xfa230030  sqc2        $vf3, 0x30($s1)
    ctx->pc = 0x20ab08u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20ab0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20ab0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ab10: 0x276a021  addu        $s4, $s3, $s6
    ctx->pc = 0x20ab10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x20ab14: 0x0  nop
    ctx->pc = 0x20ab14u;
    // NOP
label_20ab18:
    // 0x20ab18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20ab18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ab1c: 0x2e82000b  sltiu       $v0, $s4, 0xB
    ctx->pc = 0x20ab1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_20ab20:
    // 0x20ab20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20AB20u;
    {
        const bool branch_taken_0x20ab20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AB20u;
            // 0x20ab24: 0x2551821  addu        $v1, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab20) {
            ctx->pc = 0x20AB34u;
            goto label_20ab34;
        }
    }
    ctx->pc = 0x20AB28u;
    // 0x20ab28: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x20ab28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x20ab2c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x20AB2Cu;
    {
        const bool branch_taken_0x20ab2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AB2Cu;
            // 0x20ab30: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab2c) {
            ctx->pc = 0x20ABB0u;
            goto label_20abb0;
        }
    }
    ctx->pc = 0x20AB34u;
label_20ab34:
    // 0x20ab34: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x20ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20ab38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20ab38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ab3c: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x20ab3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20ab40: 0x728021  addu        $s0, $v1, $s2
    ctx->pc = 0x20ab40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x20ab44: 0xc082b34  jal         func_20ACD0
    ctx->pc = 0x20AB44u;
    SET_GPR_U32(ctx, 31, 0x20AB4Cu);
    ctx->pc = 0x20AB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AB44u;
            // 0x20ab48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20ACD0u;
    if (runtime->hasFunction(0x20ACD0u)) {
        auto targetFn = runtime->lookupFunction(0x20ACD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB4Cu; }
        if (ctx->pc != 0x20AB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20acd0_0x20aec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB4Cu; }
        if (ctx->pc != 0x20AB4Cu) { return; }
    }
    ctx->pc = 0x20AB4Cu;
    // 0x20ab4c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20AB4Cu;
    {
        const bool branch_taken_0x20ab4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AB4Cu;
            // 0x20ab50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab4c) {
            ctx->pc = 0x20AB84u;
            goto label_20ab84;
        }
    }
    ctx->pc = 0x20AB54u;
    // 0x20ab54: 0x2603001f  addiu       $v1, $s0, 0x1F
    ctx->pc = 0x20ab54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x20ab58: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x20ab58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x20ab5c: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x20ab5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x20ab60: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x20ab60u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x20ab64: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x20ab64u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x20ab68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20ab68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ab6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20ab70: 0x2042004  sllv        $a0, $a0, $s0
    ctx->pc = 0x20ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x20ab74: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20ab74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20ab78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ab7c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x20AB7Cu;
    {
        const bool branch_taken_0x20ab7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AB7Cu;
            // 0x20ab80: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab7c) {
            ctx->pc = 0x20AC58u;
            goto label_20ac58;
        }
    }
    ctx->pc = 0x20AB84u;
label_20ab84:
    // 0x20ab84: 0x2603001f  addiu       $v1, $s0, 0x1F
    ctx->pc = 0x20ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x20ab88: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x20ab88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x20ab8c: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x20ab8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x20ab90: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x20ab90u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x20ab94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20ab94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ab98: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x20ab98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x20ab9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20aba0: 0x2042004  sllv        $a0, $a0, $s0
    ctx->pc = 0x20aba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x20aba4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20aba8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x20ABA8u;
    {
        const bool branch_taken_0x20aba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ABACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ABA8u;
            // 0x20abac: 0x42027  nor         $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aba8) {
            ctx->pc = 0x20AC50u;
            goto label_20ac50;
        }
    }
    ctx->pc = 0x20ABB0u;
label_20abb0:
    // 0x20abb0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x20abb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20abb4: 0x2851018  mult        $v0, $s4, $a1
    ctx->pc = 0x20abb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20abb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20abb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20abbc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x20abbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20abc0: 0xc3202a  slt         $a0, $a2, $v1
    ctx->pc = 0x20abc0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20abc4: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x20abc8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x20abc8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x20abcc: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20abccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20abd0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x20abd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20abd4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x20abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x20abd8: 0x3a42021  addu        $a0, $sp, $a0
    ctx->pc = 0x20abd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x20abdc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x20abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20abe0: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x20abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x20abe4: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x20abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x20abe8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20abe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20abec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20ABECu;
    {
        const bool branch_taken_0x20abec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ABF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ABECu;
            // 0x20abf0: 0x2651018  mult        $v0, $s3, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abec) {
            ctx->pc = 0x20AC28u;
            goto label_20ac28;
        }
    }
    ctx->pc = 0x20ABF4u;
    // 0x20abf4: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x20abf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x20abf8: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x20abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20abfc: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x20abfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20ac00: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x20ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x20ac04: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x20ac04u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x20ac08: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20ac08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20ac0c: 0x872004  sllv        $a0, $a3, $a0
    ctx->pc = 0x20ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x20ac10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ac14: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20ac18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ac1c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x20ac1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x20ac20: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20AC20u;
    {
        const bool branch_taken_0x20ac20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AC20u;
            // 0x20ac24: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac20) {
            ctx->pc = 0x20AC5Cu;
            goto label_20ac5c;
        }
    }
    ctx->pc = 0x20AC28u;
label_20ac28:
    // 0x20ac28: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x20ac28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x20ac2c: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x20ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20ac30: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x20ac30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20ac34: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x20ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x20ac38: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x20ac38u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x20ac3c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x20ac3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x20ac40: 0x872004  sllv        $a0, $a3, $a0
    ctx->pc = 0x20ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x20ac44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20ac48: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x20ac48u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x20ac4c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20ac50:
    // 0x20ac50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ac54: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20ac54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_20ac58:
    // 0x20ac58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_20ac5c:
    // 0x20ac5c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20ac5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20ac60: 0x2a42000b  slti        $v0, $s2, 0xB
    ctx->pc = 0x20ac60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x20ac64: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x20AC64u;
    {
        const bool branch_taken_0x20ac64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AC64u;
            // 0x20ac68: 0x2e82000b  sltiu       $v0, $s4, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac64) {
            ctx->pc = 0x20AB20u;
            runtime->cooperativeGuestYield();
            goto label_20ab20;
        }
    }
    ctx->pc = 0x20AC6Cu;
    // 0x20ac6c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x20ac6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x20ac70: 0x2a62000b  slti        $v0, $s3, 0xB
    ctx->pc = 0x20ac70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x20ac74: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x20AC74u;
    {
        const bool branch_taken_0x20ac74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AC74u;
            // 0x20ac78: 0x276a021  addu        $s4, $s3, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac74) {
            ctx->pc = 0x20AB18u;
            runtime->cooperativeGuestYield();
            goto label_20ab18;
        }
    }
    ctx->pc = 0x20AC7Cu;
    // 0x20ac7c: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x20ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x20ac80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20ac80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ac84:
    // 0x20ac84: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x20ac84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x20ac88: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x20ac88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x20ac8c: 0xc082f52  jal         func_20BD48
    ctx->pc = 0x20AC8Cu;
    SET_GPR_U32(ctx, 31, 0x20AC94u);
    ctx->pc = 0x20AC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AC8Cu;
            // 0x20ac90: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20BD48u;
    if (runtime->hasFunction(0x20BD48u)) {
        auto targetFn = runtime->lookupFunction(0x20BD48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AC94u; }
        if (ctx->pc != 0x20AC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20bd48_0x20c1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AC94u; }
        if (ctx->pc != 0x20AC94u) { return; }
    }
    ctx->pc = 0x20AC94u;
    // 0x20ac94: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_20ac98:
    // 0x20ac98: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x20ac98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x20ac9c: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x20ac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x20aca0: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x20aca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x20aca4: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x20aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x20aca8: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x20aca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x20acac: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x20acacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x20acb0: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x20acb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x20acb4: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x20acb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x20acb8: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x20acb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x20acbc: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x20acbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x20acc0: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x20acc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x20acc4: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x20acc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x20acc8: 0x3e00008  jr          $ra
    ctx->pc = 0x20ACC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ACCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ACC8u;
            // 0x20accc: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A528u: goto label_20a528;
            case 0x20A568u: goto label_20a568;
            case 0x20A5B4u: goto label_20a5b4;
            case 0x20A5D0u: goto label_20a5d0;
            case 0x20A690u: goto label_20a690;
            case 0x20A698u: goto label_20a698;
            case 0x20A69Cu: goto label_20a69c;
            case 0x20A7C8u: goto label_20a7c8;
            case 0x20A818u: goto label_20a818;
            case 0x20A840u: goto label_20a840;
            case 0x20A880u: goto label_20a880;
            case 0x20A8B0u: goto label_20a8b0;
            case 0x20A8CCu: goto label_20a8cc;
            case 0x20A8F4u: goto label_20a8f4;
            case 0x20A9D8u: goto label_20a9d8;
            case 0x20AA18u: goto label_20aa18;
            case 0x20AA48u: goto label_20aa48;
            case 0x20AA64u: goto label_20aa64;
            case 0x20AA74u: goto label_20aa74;
            case 0x20AAF4u: goto label_20aaf4;
            case 0x20AB18u: goto label_20ab18;
            case 0x20AB20u: goto label_20ab20;
            case 0x20AB34u: goto label_20ab34;
            case 0x20AB84u: goto label_20ab84;
            case 0x20ABB0u: goto label_20abb0;
            case 0x20AC28u: goto label_20ac28;
            case 0x20AC50u: goto label_20ac50;
            case 0x20AC58u: goto label_20ac58;
            case 0x20AC5Cu: goto label_20ac5c;
            case 0x20AC84u: goto label_20ac84;
            case 0x20AC98u: goto label_20ac98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20ACD0u;
}
