#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00104708
// Address: 0x104708 - 0x105ad8
void sub_00104708_0x104708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104708_0x104708");
#endif

    ctx->pc = 0x104708u;

    // 0x104708: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x104708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x10470c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x10470cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104710: 0x7fb301a0  sq          $s3, 0x1A0($sp)
    ctx->pc = 0x104710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 19));
    // 0x104714: 0x7fb40190  sq          $s4, 0x190($sp)
    ctx->pc = 0x104714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 20));
    // 0x104718: 0x7fb60170  sq          $s6, 0x170($sp)
    ctx->pc = 0x104718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 22));
    // 0x10471c: 0x7fb70160  sq          $s7, 0x160($sp)
    ctx->pc = 0x10471cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 23));
    // 0x104720: 0x7fbe0150  sq          $fp, 0x150($sp)
    ctx->pc = 0x104720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 30));
    // 0x104724: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x104724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
    // 0x104728: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x104728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
    // 0x10472c: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x10472cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
    // 0x104730: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x104730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
    // 0x104734: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x104734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x104738: 0x8c821130  lw          $v0, 0x1130($a0)
    ctx->pc = 0x104738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4400)));
    // 0x10473c: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x10473cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x104740: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x104740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x104744: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x104744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x104748: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x104748u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10474c: 0x2f140  sll         $fp, $v0, 5
    ctx->pc = 0x10474cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x104750: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x104750u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x104754: 0x8c8b0000  lw          $t3, 0x0($a0)
    ctx->pc = 0x104754u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104758: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x104758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x10475c: 0xafa6012c  sw          $a2, 0x12C($sp)
    ctx->pc = 0x10475cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 6));
    // 0x104760: 0xafa70128  sw          $a3, 0x128($sp)
    ctx->pc = 0x104760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 7));
    // 0x104764: 0x17ea021  addu        $s4, $t3, $fp
    ctx->pc = 0x104764u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 30)));
    // 0x104768: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x104768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x10476c: 0x24a3fffe  addiu       $v1, $a1, -0x2
    ctx->pc = 0x10476cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x104770: 0x29eb821  addu        $s7, $s4, $fp
    ctx->pc = 0x104770u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
    // 0x104774: 0x8c8c1120  lw          $t4, 0x1120($a0)
    ctx->pc = 0x104774u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4384)));
    // 0x104778: 0x8c980004  lw          $t8, 0x4($a0)
    ctx->pc = 0x104778u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10477c: 0x1869821  addu        $s3, $t4, $a2
    ctx->pc = 0x10477cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x104780: 0x3074021  addu        $t0, $t8, $a3
    ctx->pc = 0x104780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
    // 0x104784: 0x266b021  addu        $s6, $s3, $a2
    ctx->pc = 0x104784u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x104788: 0x186001f8  blez        $v1, . + 4 + (0x1F8 << 2)
    ctx->pc = 0x104788u;
    {
        const bool branch_taken_0x104788 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10478Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104788u;
            // 0x10478c: 0xafa80124  sw          $t0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104788) {
            ctx->pc = 0x104F6Cu;
            goto label_104f6c;
        }
    }
    ctx->pc = 0x104790u;
    // 0x104790: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x104790u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104794: 0x0  nop
    ctx->pc = 0x104794u;
    // NOP
label_104798:
    // 0x104798: 0x8faa0120  lw          $t2, 0x120($sp)
    ctx->pc = 0x104798u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x10479c: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x10479cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1047a0: 0x194000f0  blez        $t2, . + 4 + (0xF0 << 2)
    ctx->pc = 0x1047A0u;
    {
        const bool branch_taken_0x1047a0 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x1047A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1047A0u;
            // 0x1047a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1047a0) {
            ctx->pc = 0x104B64u;
            goto label_104b64;
        }
    }
    ctx->pc = 0x1047A8u;
    // 0x1047a8: 0x25670020  addiu       $a3, $t3, 0x20
    ctx->pc = 0x1047a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x1047ac: 0x25920004  addiu       $s2, $t4, 0x4
    ctx->pc = 0x1047acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x1047b0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1047b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1047b4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1047b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1047b8: 0x180802d  daddu       $s0, $t4, $zero
    ctx->pc = 0x1047b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1047bc: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x1047bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1047c0: 0x300682d  daddu       $t5, $t8, $zero
    ctx->pc = 0x1047c0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1047c4: 0x0  nop
    ctx->pc = 0x1047c4u;
    // NOP
label_1047c8:
    // 0x1047c8: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x1047c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1047cc: 0x124102a  slt         $v0, $t1, $a0
    ctx->pc = 0x1047ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1047d0: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x1047D0u;
    {
        const bool branch_taken_0x1047d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1047D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1047D0u;
            // 0x1047d4: 0x8e080000  lw          $t0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1047d0) {
            ctx->pc = 0x104A2Cu;
            goto label_104a2c;
        }
    }
    ctx->pc = 0x1047D8u;
    // 0x1047d8: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x1047d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1047dc: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1047dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1047e0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1047e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1047e4: 0x3a0702d  daddu       $t6, $sp, $zero
    ctx->pc = 0x1047e4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1047e8: 0xc5a10004  lwc1        $f1, 0x4($t5)
    ctx->pc = 0x1047e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1047ec: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1047ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1047f0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1047f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1047f4: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1047f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1047f8: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1047f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1047fc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1047fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104800: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x104800u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104804: 0x39050001  xori        $a1, $t0, 0x1
    ctx->pc = 0x104804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
    // 0x104808: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x104808u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10480c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10480cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104810: 0x46000004  c1          0x4
    ctx->pc = 0x104810u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x104814: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x104814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x104818: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x104818u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x10481c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x10481cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x104820: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x104820u;
    {
        const bool branch_taken_0x104820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104820u;
            // 0x104824: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104820) {
            ctx->pc = 0x104868u;
            goto label_104868;
        }
    }
    ctx->pc = 0x104828u;
    // 0x104828: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x104828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10482c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10482Cu;
    {
        const bool branch_taken_0x10482c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10482Cu;
            // 0x104830: 0x31020001  andi        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10482c) {
            ctx->pc = 0x10486Cu;
            goto label_10486c;
        }
    }
    ctx->pc = 0x104834u;
    // 0x104834: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x104834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x104838: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x104838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10483c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x10483cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x104840: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x104840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x104844: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x104844u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x104848: 0x4be21898  vmulx.xyzw  $vf2, $vf3, $vf2x
    ctx->pc = 0x104848u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10484c: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x10484cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x104850: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x104850u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x104854: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x104854u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104858: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x104858u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10485c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x10485Cu;
    {
        const bool branch_taken_0x10485c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10485Cu;
            // 0x104860: 0xdba20010  lqc2        $vf2, 0x10($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10485c) {
            ctx->pc = 0x1048D0u;
            goto label_1048d0;
        }
    }
    ctx->pc = 0x104864u;
    // 0x104864: 0x0  nop
    ctx->pc = 0x104864u;
    // NOP
label_104868:
    // 0x104868: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x104868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_10486c:
    // 0x10486c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10486Cu;
    {
        const bool branch_taken_0x10486c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10486Cu;
            // 0x104870: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10486c) {
            ctx->pc = 0x1048A8u;
            goto label_1048a8;
        }
    }
    ctx->pc = 0x104874u;
    // 0x104874: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x104874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x104878: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104878u;
    {
        const bool branch_taken_0x104878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10487Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104878u;
            // 0x10487c: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104878) {
            ctx->pc = 0x1048ACu;
            goto label_1048ac;
        }
    }
    ctx->pc = 0x104880u;
    // 0x104880: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x104880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x104884: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x104884u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x104888: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x104888u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10488c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x10488cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104890: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x104890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x104894: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x104894u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x104898: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x104898u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10489c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10489Cu;
    {
        const bool branch_taken_0x10489c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1048A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10489Cu;
            // 0x1048a0: 0xf9410000  sqc2        $vf1, 0x0($t2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10489c) {
            ctx->pc = 0x1048E0u;
            goto label_1048e0;
        }
    }
    ctx->pc = 0x1048A4u;
    // 0x1048a4: 0x0  nop
    ctx->pc = 0x1048a4u;
    // NOP
label_1048a8:
    // 0x1048a8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1048a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1048ac:
    // 0x1048ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1048ACu;
    {
        const bool branch_taken_0x1048ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1048B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1048ACu;
            // 0x1048b0: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1048ac) {
            ctx->pc = 0x1048E0u;
            goto label_1048e0;
        }
    }
    ctx->pc = 0x1048B4u;
    // 0x1048b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1048B4u;
    {
        const bool branch_taken_0x1048b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1048b4) {
            ctx->pc = 0x1048E0u;
            goto label_1048e0;
        }
    }
    ctx->pc = 0x1048BCu;
    // 0x1048bc: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x1048bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x1048c0: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x1048c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x1048c4: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1048c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1048c8: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1048c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1048cc: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1048ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
label_1048d0:
    // 0x1048d0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1048d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1048d4: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1048d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1048d8: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1048d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1048dc: 0x0  nop
    ctx->pc = 0x1048dcu;
    // NOP
label_1048e0:
    // 0x1048e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1048e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1048e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1048e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1048e8: 0x0  nop
    ctx->pc = 0x1048e8u;
    // NOP
    // 0x1048ec: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1048ECu;
    {
        const bool branch_taken_0x1048ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1048ec) {
            ctx->pc = 0x1048F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1048ECu;
            // 0x1048f0: 0xd8c20000  lqc2        $vf2, 0x0($a2) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x104904u;
            goto label_104904;
        }
    }
    ctx->pc = 0x1048F4u;
    // 0x1048f4: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1048f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1048f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1048f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1048fc: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x1048fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x104900: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x104900u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_104904:
    // 0x104904: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x104904u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104908: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x104908u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10490c: 0x3a0702d  daddu       $t6, $sp, $zero
    ctx->pc = 0x10490cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104910: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x104910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104914: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x104914u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104918: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x104918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10491c: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x10491cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x104920: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x104920u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104924: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x104924u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104928: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x104928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10492c: 0x39050001  xori        $a1, $t0, 0x1
    ctx->pc = 0x10492cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
    // 0x104930: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x104930u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x104934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104938: 0x46000004  c1          0x4
    ctx->pc = 0x104938u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x10493c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x10493cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x104940: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x104940u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x104944: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x104944u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x104948: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x104948u;
    {
        const bool branch_taken_0x104948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10494Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104948u;
            // 0x10494c: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104948) {
            ctx->pc = 0x104990u;
            goto label_104990;
        }
    }
    ctx->pc = 0x104950u;
    // 0x104950: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x104950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x104954: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x104954u;
    {
        const bool branch_taken_0x104954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104954u;
            // 0x104958: 0x31020001  andi        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104954) {
            ctx->pc = 0x104994u;
            goto label_104994;
        }
    }
    ctx->pc = 0x10495Cu;
    // 0x10495c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10495cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x104960: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x104960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104964: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x104964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x104968: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x104968u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10496c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x10496cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x104970: 0x4be21898  vmulx.xyzw  $vf2, $vf3, $vf2x
    ctx->pc = 0x104970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104974: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x104974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x104978: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x104978u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10497c: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x10497cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104980: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x104980u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104984: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x104984u;
    {
        const bool branch_taken_0x104984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104984u;
            // 0x104988: 0xdba20020  lqc2        $vf2, 0x20($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104984) {
            ctx->pc = 0x1049F8u;
            goto label_1049f8;
        }
    }
    ctx->pc = 0x10498Cu;
    // 0x10498c: 0x0  nop
    ctx->pc = 0x10498cu;
    // NOP
label_104990:
    // 0x104990: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x104990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_104994:
    // 0x104994: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x104994u;
    {
        const bool branch_taken_0x104994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104994u;
            // 0x104998: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104994) {
            ctx->pc = 0x1049D0u;
            goto label_1049d0;
        }
    }
    ctx->pc = 0x10499Cu;
    // 0x10499c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10499cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1049a0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1049A0u;
    {
        const bool branch_taken_0x1049a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1049A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1049A0u;
            // 0x1049a4: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1049a0) {
            ctx->pc = 0x1049D4u;
            goto label_1049d4;
        }
    }
    ctx->pc = 0x1049A8u;
    // 0x1049a8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1049a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1049ac: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x1049acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1049b0: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1049b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1049b4: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1049b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1049b8: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1049b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1049bc: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x1049bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1049c0: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1049c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1049c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1049C4u;
    {
        const bool branch_taken_0x1049c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1049C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1049C4u;
            // 0x1049c8: 0xf9410000  sqc2        $vf1, 0x0($t2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1049c4) {
            ctx->pc = 0x104A08u;
            goto label_104a08;
        }
    }
    ctx->pc = 0x1049CCu;
    // 0x1049cc: 0x0  nop
    ctx->pc = 0x1049ccu;
    // NOP
label_1049d0:
    // 0x1049d0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1049d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1049d4:
    // 0x1049d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1049D4u;
    {
        const bool branch_taken_0x1049d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1049D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1049D4u;
            // 0x1049d8: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1049d4) {
            ctx->pc = 0x104A08u;
            goto label_104a08;
        }
    }
    ctx->pc = 0x1049DCu;
    // 0x1049dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1049DCu;
    {
        const bool branch_taken_0x1049dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1049dc) {
            ctx->pc = 0x104A08u;
            goto label_104a08;
        }
    }
    ctx->pc = 0x1049E4u;
    // 0x1049e4: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x1049e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x1049e8: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x1049e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x1049ec: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1049ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1049f0: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1049f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1049f4: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1049f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
label_1049f8:
    // 0x1049f8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1049f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1049fc: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1049fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104a00: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x104a00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104a04: 0x0  nop
    ctx->pc = 0x104a04u;
    // NOP
label_104a08:
    // 0x104a08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x104a08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104a0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x104a0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104a10: 0x0  nop
    ctx->pc = 0x104a10u;
    // NOP
    // 0x104a14: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x104A14u;
    {
        const bool branch_taken_0x104a14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x104A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104A14u;
            // 0x104a18: 0x8fa80120  lw          $t0, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a14) {
            ctx->pc = 0x104B34u;
            goto label_104b34;
        }
    }
    ctx->pc = 0x104A1Cu;
    // 0x104a1c: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x104a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104a20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x104a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x104a24: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x104A24u;
    {
        const bool branch_taken_0x104a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104A24u;
            // 0x104a28: 0xe5c00000  swc1        $f0, 0x0($t6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a24) {
            ctx->pc = 0x104B30u;
            goto label_104b30;
        }
    }
    ctx->pc = 0x104A2Cu;
label_104a2c:
    // 0x104a2c: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x104a2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x104a30: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x104a30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104a34: 0xc5a10004  lwc1        $f1, 0x4($t5)
    ctx->pc = 0x104a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104a38: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x104a38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104a3c: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x104a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x104a40: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x104a40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104a44: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x104a44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104a48: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x104a48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104a4c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x104a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x104a50: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x104a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x104a54: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x104a54u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104a58: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x104a58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104a5c: 0x46000004  c1          0x4
    ctx->pc = 0x104a5cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x104a60: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x104a60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x104a64: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x104a64u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x104a68: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x104a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x104a6c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x104a6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x104a70: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x104a70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x104a74: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x104a74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104a78: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x104a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x104a7c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x104a7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x104a80: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x104a80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104a84: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x104a84u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104a88: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x104a88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104a8c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x104a8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104a90: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x104a90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104a94: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x104a94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x104a98: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x104a98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104a9c: 0x0  nop
    ctx->pc = 0x104a9cu;
    // NOP
    // 0x104aa0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x104AA0u;
    {
        const bool branch_taken_0x104aa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x104AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104AA0u;
            // 0x104aa4: 0xf8610000  sqc2        $vf1, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104aa0) {
            ctx->pc = 0x104AB8u;
            goto label_104ab8;
        }
    }
    ctx->pc = 0x104AA8u;
    // 0x104aa8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x104aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104aac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x104aacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x104ab0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x104ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x104ab4: 0x0  nop
    ctx->pc = 0x104ab4u;
    // NOP
label_104ab8:
    // 0x104ab8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x104ab8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104abc: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x104abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104ac0: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x104ac0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104ac4: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x104ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x104ac8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x104ac8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104acc: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x104accu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104ad0: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x104ad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104ad4: 0x482a0800  qmfc2.ni    $t2, $vf1
    ctx->pc = 0x104ad4u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104ad8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x104ad8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104adc: 0x46000004  c1          0x4
    ctx->pc = 0x104adcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x104ae0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x104ae0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x104ae4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x104ae4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x104ae8: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x104ae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x104aec: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x104aecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x104af0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x104af0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x104af4: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x104af4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104af8: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x104af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x104afc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x104afcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104b00: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x104b00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104b04: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x104b04u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104b08: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x104b08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104b0c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x104b0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104b10: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x104b10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104b14: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x104b14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104b18: 0x0  nop
    ctx->pc = 0x104b18u;
    // NOP
    // 0x104b1c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x104B1Cu;
    {
        const bool branch_taken_0x104b1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x104B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104B1Cu;
            // 0x104b20: 0xf8610000  sqc2        $vf1, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b1c) {
            ctx->pc = 0x104B30u;
            goto label_104b30;
        }
    }
    ctx->pc = 0x104B24u;
    // 0x104b24: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x104b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104b28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x104b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x104b2c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x104b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_104b30:
    // 0x104b30: 0x8fa80120  lw          $t0, 0x120($sp)
    ctx->pc = 0x104b30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_104b34:
    // 0x104b34: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x104b34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x104b38: 0x25ef0002  addiu       $t7, $t7, 0x2
    ctx->pc = 0x104b38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x104b3c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x104b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x104b40: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x104b40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x104b44: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x104b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x104b48: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x104b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x104b4c: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x104b4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x104b50: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x104b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x104b54: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x104b54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x104b58: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x104b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x104b5c: 0x1440ff1a  bnez        $v0, . + 4 + (-0xE6 << 2)
    ctx->pc = 0x104B5Cu;
    {
        const bool branch_taken_0x104b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104B5Cu;
            // 0x104b60: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b5c) {
            ctx->pc = 0x1047C8u;
            runtime->cooperativeGuestYield();
            goto label_1047c8;
        }
    }
    ctx->pc = 0x104B64u;
label_104b64:
    // 0x104b64: 0x191140  sll         $v0, $t9, 5
    ctx->pc = 0x104b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 5));
    // 0x104b68: 0x94140  sll         $t0, $t1, 5
    ctx->pc = 0x104b68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x104b6c: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x104b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x104b70: 0x97100  sll         $t6, $t1, 4
    ctx->pc = 0x104b70u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x104b74: 0x191080  sll         $v0, $t9, 2
    ctx->pc = 0x104b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x104b78: 0x95080  sll         $t2, $t1, 2
    ctx->pc = 0x104b78u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x104b7c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x104b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x104b80: 0x10b3021  addu        $a2, $t0, $t3
    ctx->pc = 0x104b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x104b84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x104b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104b88: 0x14c1821  addu        $v1, $t2, $t4
    ctx->pc = 0x104b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x104b8c: 0x1d81021  addu        $v0, $t6, $t8
    ctx->pc = 0x104b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
    // 0x104b90: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x104b90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104b94: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x104b94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104b98: 0x3a0682d  daddu       $t5, $sp, $zero
    ctx->pc = 0x104b98u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b9c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x104b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104ba0: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x104ba0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104ba4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x104ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104ba8: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x104ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x104bac: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x104bacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104bb0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x104bb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104bb4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x104bb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104bb8: 0x38670001  xori        $a3, $v1, 0x1
    ctx->pc = 0x104bb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x104bbc: 0x48300800  qmfc2.ni    $s0, $vf1
    ctx->pc = 0x104bbcu;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104bc0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x104bc0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104bc4: 0x46000004  c1          0x4
    ctx->pc = 0x104bc4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x104bc8: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x104bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x104bcc: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x104bccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x104bd0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x104bd0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x104bd4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x104BD4u;
    {
        const bool branch_taken_0x104bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104BD4u;
            // 0x104bd8: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bd4) {
            ctx->pc = 0x104C18u;
            goto label_104c18;
        }
    }
    ctx->pc = 0x104BDCu;
    // 0x104bdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x104bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x104be0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x104BE0u;
    {
        const bool branch_taken_0x104be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104BE0u;
            // 0x104be4: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104be0) {
            ctx->pc = 0x104C1Cu;
            goto label_104c1c;
        }
    }
    ctx->pc = 0x104BE8u;
    // 0x104be8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x104be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x104bec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x104becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104bf0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x104bf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x104bf4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x104bf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x104bf8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x104bf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x104bfc: 0x4be21898  vmulx.xyzw  $vf2, $vf3, $vf2x
    ctx->pc = 0x104bfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104c00: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x104c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x104c04: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x104c04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104c08: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x104c08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104c0c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x104c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104c10: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x104C10u;
    {
        const bool branch_taken_0x104c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104C10u;
            // 0x104c14: 0xdba20050  lqc2        $vf2, 0x50($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c10) {
            ctx->pc = 0x104C80u;
            goto label_104c80;
        }
    }
    ctx->pc = 0x104C18u;
label_104c18:
    // 0x104c18: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x104c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_104c1c:
    // 0x104c1c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x104C1Cu;
    {
        const bool branch_taken_0x104c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104C1Cu;
            // 0x104c20: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c1c) {
            ctx->pc = 0x104C58u;
            goto label_104c58;
        }
    }
    ctx->pc = 0x104C24u;
    // 0x104c24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x104c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x104c28: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104C28u;
    {
        const bool branch_taken_0x104c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104C28u;
            // 0x104c2c: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c28) {
            ctx->pc = 0x104C5Cu;
            goto label_104c5c;
        }
    }
    ctx->pc = 0x104C30u;
    // 0x104c30: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x104c30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x104c34: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x104c34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x104c38: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x104c38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104c3c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x104c3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104c40: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x104c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x104c44: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x104c44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104c48: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x104c48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104c4c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x104C4Cu;
    {
        const bool branch_taken_0x104c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104C4Cu;
            // 0x104c50: 0xf8a10000  sqc2        $vf1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c4c) {
            ctx->pc = 0x104C90u;
            goto label_104c90;
        }
    }
    ctx->pc = 0x104C54u;
    // 0x104c54: 0x0  nop
    ctx->pc = 0x104c54u;
    // NOP
label_104c58:
    // 0x104c58: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x104c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_104c5c:
    // 0x104c5c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104C5Cu;
    {
        const bool branch_taken_0x104c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104C5Cu;
            // 0x104c60: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c5c) {
            ctx->pc = 0x104C90u;
            goto label_104c90;
        }
    }
    ctx->pc = 0x104C64u;
    // 0x104c64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x104C64u;
    {
        const bool branch_taken_0x104c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104c64) {
            ctx->pc = 0x104C90u;
            goto label_104c90;
        }
    }
    ctx->pc = 0x104C6Cu;
    // 0x104c6c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x104c6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x104c70: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x104c70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x104c74: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x104c74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104c78: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x104c78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104c7c: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x104c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
label_104c80:
    // 0x104c80: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x104c80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104c84: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x104c84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104c88: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x104c88u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104c8c: 0x0  nop
    ctx->pc = 0x104c8cu;
    // NOP
label_104c90:
    // 0x104c90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x104c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104c94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x104c94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104c98: 0x0  nop
    ctx->pc = 0x104c98u;
    // NOP
    // 0x104c9c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x104C9Cu;
    {
        const bool branch_taken_0x104c9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x104CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104C9Cu;
            // 0x104ca0: 0x1531021  addu        $v0, $t2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c9c) {
            ctx->pc = 0x104CB0u;
            goto label_104cb0;
        }
    }
    ctx->pc = 0x104CA4u;
    // 0x104ca4: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x104ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104ca8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x104ca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x104cac: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x104cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
label_104cb0:
    // 0x104cb0: 0x1142021  addu        $a0, $t0, $s4
    ctx->pc = 0x104cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
    // 0x104cb4: 0x10b3021  addu        $a2, $t0, $t3
    ctx->pc = 0x104cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x104cb8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x104cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104cbc: 0x1d81821  addu        $v1, $t6, $t8
    ctx->pc = 0x104cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
    // 0x104cc0: 0x14c1021  addu        $v0, $t2, $t4
    ctx->pc = 0x104cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x104cc4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x104cc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104cc8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x104cc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ccc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x104cccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104cd0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x104cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104cd4: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x104cd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104cd8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x104cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104cdc: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x104cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x104ce0: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x104ce0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104ce4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x104ce4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104ce8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x104ce8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104cec: 0x38e30001  xori        $v1, $a3, 0x1
    ctx->pc = 0x104cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x104cf0: 0x482a0800  qmfc2.ni    $t2, $vf1
    ctx->pc = 0x104cf0u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104cf4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x104cf4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104cf8: 0x46000004  c1          0x4
    ctx->pc = 0x104cf8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x104cfc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x104cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x104d00: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x104d00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x104d04: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x104d04u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x104d08: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x104D08u;
    {
        const bool branch_taken_0x104d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104D08u;
            // 0x104d0c: 0x38a20001  xori        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d08) {
            ctx->pc = 0x104D50u;
            goto label_104d50;
        }
    }
    ctx->pc = 0x104D10u;
    // 0x104d10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x104d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x104d14: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x104D14u;
    {
        const bool branch_taken_0x104d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104D14u;
            // 0x104d18: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d14) {
            ctx->pc = 0x104D54u;
            goto label_104d54;
        }
    }
    ctx->pc = 0x104D1Cu;
    // 0x104d1c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x104d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x104d20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x104d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104d24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x104d24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x104d28: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x104d28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x104d2c: 0x48b01000  qmtc2.ni    $s0, $vf2
    ctx->pc = 0x104d2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x104d30: 0x4be21898  vmulx.xyzw  $vf2, $vf3, $vf2x
    ctx->pc = 0x104d30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104d34: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x104d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x104d38: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x104d38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104d3c: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x104d3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104d40: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x104d40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104d44: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x104D44u;
    {
        const bool branch_taken_0x104d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104D44u;
            // 0x104d48: 0xdba20060  lqc2        $vf2, 0x60($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d44) {
            ctx->pc = 0x104DB8u;
            goto label_104db8;
        }
    }
    ctx->pc = 0x104D4Cu;
    // 0x104d4c: 0x0  nop
    ctx->pc = 0x104d4cu;
    // NOP
label_104d50:
    // 0x104d50: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x104d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_104d54:
    // 0x104d54: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x104D54u;
    {
        const bool branch_taken_0x104d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104D54u;
            // 0x104d58: 0x38a20001  xori        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d54) {
            ctx->pc = 0x104D90u;
            goto label_104d90;
        }
    }
    ctx->pc = 0x104D5Cu;
    // 0x104d5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x104d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x104d60: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104D60u;
    {
        const bool branch_taken_0x104d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104D60u;
            // 0x104d64: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d60) {
            ctx->pc = 0x104D94u;
            goto label_104d94;
        }
    }
    ctx->pc = 0x104D68u;
    // 0x104d68: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x104d68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x104d6c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x104d6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x104d70: 0xdba20060  lqc2        $vf2, 0x60($sp)
    ctx->pc = 0x104d70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x104d74: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x104d74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104d78: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x104d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x104d7c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x104d7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104d80: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x104d80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104d84: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x104D84u;
    {
        const bool branch_taken_0x104d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104D84u;
            // 0x104d88: 0xf8810000  sqc2        $vf1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d84) {
            ctx->pc = 0x104DC8u;
            goto label_104dc8;
        }
    }
    ctx->pc = 0x104D8Cu;
    // 0x104d8c: 0x0  nop
    ctx->pc = 0x104d8cu;
    // NOP
label_104d90:
    // 0x104d90: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x104d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_104d94:
    // 0x104d94: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104D94u;
    {
        const bool branch_taken_0x104d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104D94u;
            // 0x104d98: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d94) {
            ctx->pc = 0x104DC8u;
            goto label_104dc8;
        }
    }
    ctx->pc = 0x104D9Cu;
    // 0x104d9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x104D9Cu;
    {
        const bool branch_taken_0x104d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104d9c) {
            ctx->pc = 0x104DC8u;
            goto label_104dc8;
        }
    }
    ctx->pc = 0x104DA4u;
    // 0x104da4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x104da4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x104da8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x104da8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x104dac: 0xdba20060  lqc2        $vf2, 0x60($sp)
    ctx->pc = 0x104dacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x104db0: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x104db0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104db4: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x104db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
label_104db8:
    // 0x104db8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x104db8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104dbc: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x104dbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104dc0: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x104dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104dc4: 0x0  nop
    ctx->pc = 0x104dc4u;
    // NOP
label_104dc8:
    // 0x104dc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x104dc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104dcc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x104dccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104dd0: 0x0  nop
    ctx->pc = 0x104dd0u;
    // NOP
    // 0x104dd4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x104DD4u;
    {
        const bool branch_taken_0x104dd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x104DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104DD4u;
            // 0x104dd8: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104dd4) {
            ctx->pc = 0x104DE8u;
            goto label_104de8;
        }
    }
    ctx->pc = 0x104DDCu;
    // 0x104ddc: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x104ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104de0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x104de0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x104de4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x104de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_104de8:
    // 0x104de8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x104de8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104dec: 0x91140  sll         $v0, $t1, 5
    ctx->pc = 0x104decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x104df0: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x104df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x104df4: 0x4b3021  addu        $a2, $v0, $t3
    ctx->pc = 0x104df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x104df8: 0x542821  addu        $a1, $v0, $s4
    ctx->pc = 0x104df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x104dfc: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x104dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x104e00: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x104e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x104e04: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x104e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x104e08: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x104e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x104e0c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x104e0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104e10: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x104e10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104e14: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x104e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104e18: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x104e18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104e1c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x104e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104e20: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x104e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104e24: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x104e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x104e28: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x104e28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104e2c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x104e2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104e30: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x104e30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104e34: 0x38870001  xori        $a3, $a0, 0x1
    ctx->pc = 0x104e34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x104e38: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x104e38u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104e3c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x104e3cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104e40: 0x46000004  c1          0x4
    ctx->pc = 0x104e40u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x104e44: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x104e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x104e48: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x104e48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x104e4c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x104e4cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x104e50: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x104E50u;
    {
        const bool branch_taken_0x104e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104E50u;
            // 0x104e54: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e50) {
            ctx->pc = 0x104E98u;
            goto label_104e98;
        }
    }
    ctx->pc = 0x104E58u;
    // 0x104e58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x104e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x104e5c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x104E5Cu;
    {
        const bool branch_taken_0x104e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104E5Cu;
            // 0x104e60: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e5c) {
            ctx->pc = 0x104E9Cu;
            goto label_104e9c;
        }
    }
    ctx->pc = 0x104E64u;
    // 0x104e64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x104e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x104e68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x104e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104e6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x104e6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x104e70: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x104e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x104e74: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x104e74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x104e78: 0x4be21898  vmulx.xyzw  $vf2, $vf3, $vf2x
    ctx->pc = 0x104e78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104e7c: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x104e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x104e80: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x104e80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104e84: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x104e84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104e88: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x104e88u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104e8c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x104E8Cu;
    {
        const bool branch_taken_0x104e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104E8Cu;
            // 0x104e90: 0xdba20070  lqc2        $vf2, 0x70($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e8c) {
            ctx->pc = 0x104F00u;
            goto label_104f00;
        }
    }
    ctx->pc = 0x104E94u;
    // 0x104e94: 0x0  nop
    ctx->pc = 0x104e94u;
    // NOP
label_104e98:
    // 0x104e98: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x104e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_104e9c:
    // 0x104e9c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x104E9Cu;
    {
        const bool branch_taken_0x104e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104E9Cu;
            // 0x104ea0: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e9c) {
            ctx->pc = 0x104ED8u;
            goto label_104ed8;
        }
    }
    ctx->pc = 0x104EA4u;
    // 0x104ea4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x104ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x104ea8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104EA8u;
    {
        const bool branch_taken_0x104ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104EA8u;
            // 0x104eac: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ea8) {
            ctx->pc = 0x104EDCu;
            goto label_104edc;
        }
    }
    ctx->pc = 0x104EB0u;
    // 0x104eb0: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x104eb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x104eb4: 0x48b00800  qmtc2.ni    $s0, $vf1
    ctx->pc = 0x104eb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x104eb8: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x104eb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x104ebc: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x104ebcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104ec0: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x104ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x104ec4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x104ec4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104ec8: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x104ec8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104ecc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x104ECCu;
    {
        const bool branch_taken_0x104ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104ECCu;
            // 0x104ed0: 0xf8a10000  sqc2        $vf1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ecc) {
            ctx->pc = 0x104F10u;
            goto label_104f10;
        }
    }
    ctx->pc = 0x104ED4u;
    // 0x104ed4: 0x0  nop
    ctx->pc = 0x104ed4u;
    // NOP
label_104ed8:
    // 0x104ed8: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x104ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_104edc:
    // 0x104edc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104EDCu;
    {
        const bool branch_taken_0x104edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104EDCu;
            // 0x104ee0: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104edc) {
            ctx->pc = 0x104F10u;
            goto label_104f10;
        }
    }
    ctx->pc = 0x104EE4u;
    // 0x104ee4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x104EE4u;
    {
        const bool branch_taken_0x104ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104ee4) {
            ctx->pc = 0x104F10u;
            goto label_104f10;
        }
    }
    ctx->pc = 0x104EECu;
    // 0x104eec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x104eecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x104ef0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x104ef0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x104ef4: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x104ef4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x104ef8: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x104ef8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104efc: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x104efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
label_104f00:
    // 0x104f00: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x104f00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104f04: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x104f04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104f08: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x104f08u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104f0c: 0x0  nop
    ctx->pc = 0x104f0cu;
    // NOP
label_104f10:
    // 0x104f10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x104f10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104f14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x104f14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104f18: 0x0  nop
    ctx->pc = 0x104f18u;
    // NOP
    // 0x104f1c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x104F1Cu;
    {
        const bool branch_taken_0x104f1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x104F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104F1Cu;
            // 0x104f20: 0x8fb80124  lw          $t8, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f1c) {
            ctx->pc = 0x104F34u;
            goto label_104f34;
        }
    }
    ctx->pc = 0x104F24u;
    // 0x104f24: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x104f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104f28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x104f28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x104f2c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x104f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x104f30: 0x8fb80124  lw          $t8, 0x124($sp)
    ctx->pc = 0x104f30u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_104f34:
    // 0x104f34: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x104f34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f38: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x104f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x104f3c: 0x260602d  daddu       $t4, $s3, $zero
    ctx->pc = 0x104f3cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f40: 0x300202d  daddu       $a0, $t8, $zero
    ctx->pc = 0x104f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f44: 0x8fa7012c  lw          $a3, 0x12C($sp)
    ctx->pc = 0x104f44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x104f48: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x104f48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f4c: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x104f4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f50: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x104f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x104f54: 0x25ef0003  addiu       $t7, $t7, 0x3
    ctx->pc = 0x104f54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
    // 0x104f58: 0xafa40124  sw          $a0, 0x124($sp)
    ctx->pc = 0x104f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 4));
    // 0x104f5c: 0x2feb821  addu        $s7, $s7, $fp
    ctx->pc = 0x104f5cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 30)));
    // 0x104f60: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x104f60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x104f64: 0x16a0fe0c  bnez        $s5, . + 4 + (-0x1F4 << 2)
    ctx->pc = 0x104F64u;
    {
        const bool branch_taken_0x104f64 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x104F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104F64u;
            // 0x104f68: 0x2c7b021  addu        $s6, $s6, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f64) {
            ctx->pc = 0x104798u;
            runtime->cooperativeGuestYield();
            goto label_104798;
        }
    }
    ctx->pc = 0x104F6Cu;
label_104f6c:
    // 0x104f6c: 0x8fa90120  lw          $t1, 0x120($sp)
    ctx->pc = 0x104f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x104f70: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x104f70u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104f74: 0x192000ef  blez        $t1, . + 4 + (0xEF << 2)
    ctx->pc = 0x104F74u;
    {
        const bool branch_taken_0x104f74 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x104F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104F74u;
            // 0x104f78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f74) {
            ctx->pc = 0x105334u;
            goto label_105334;
        }
    }
    ctx->pc = 0x104F7Cu;
    // 0x104f7c: 0x25670020  addiu       $a3, $t3, 0x20
    ctx->pc = 0x104f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x104f80: 0x25920004  addiu       $s2, $t4, 0x4
    ctx->pc = 0x104f80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x104f84: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x104f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f88: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x104f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f8c: 0x180802d  daddu       $s0, $t4, $zero
    ctx->pc = 0x104f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f90: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x104f90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f94: 0x300682d  daddu       $t5, $t8, $zero
    ctx->pc = 0x104f94u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_104f98:
    // 0x104f98: 0x8faa0130  lw          $t2, 0x130($sp)
    ctx->pc = 0x104f98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x104f9c: 0x10a102a  slt         $v0, $t0, $t2
    ctx->pc = 0x104f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x104fa0: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x104FA0u;
    {
        const bool branch_taken_0x104fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104FA0u;
            // 0x104fa4: 0x8e090000  lw          $t1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fa0) {
            ctx->pc = 0x1051FCu;
            goto label_1051fc;
        }
    }
    ctx->pc = 0x104FA8u;
    // 0x104fa8: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x104fa8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x104fac: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x104facu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fb0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x104fb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104fb4: 0x3a0702d  daddu       $t6, $sp, $zero
    ctx->pc = 0x104fb4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fb8: 0xc5a10004  lwc1        $f1, 0x4($t5)
    ctx->pc = 0x104fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104fbc: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x104fbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104fc0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x104fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x104fc4: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x104fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x104fc8: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x104fc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104fcc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x104fccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104fd0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x104fd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104fd4: 0x39250001  xori        $a1, $t1, 0x1
    ctx->pc = 0x104fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x104fd8: 0x48350800  qmfc2.ni    $s5, $vf1
    ctx->pc = 0x104fd8u;
    SET_GPR_VEC(ctx, 21, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104fdc: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x104fdcu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104fe0: 0x46000004  c1          0x4
    ctx->pc = 0x104fe0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x104fe4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x104fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x104fe8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x104fe8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x104fec: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x104fecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x104ff0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x104FF0u;
    {
        const bool branch_taken_0x104ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104FF0u;
            // 0x104ff4: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ff0) {
            ctx->pc = 0x105038u;
            goto label_105038;
        }
    }
    ctx->pc = 0x104FF8u;
    // 0x104ff8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x104ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x104ffc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x104FFCu;
    {
        const bool branch_taken_0x104ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104FFCu;
            // 0x105000: 0x31220001  andi        $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ffc) {
            ctx->pc = 0x10503Cu;
            goto label_10503c;
        }
    }
    ctx->pc = 0x105004u;
    // 0x105004: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x105004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x105008: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x105008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10500c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x10500cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x105010: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x105010u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x105014: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x105014u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x105018: 0x4be21898  vmulx.xyzw  $vf2, $vf3, $vf2x
    ctx->pc = 0x105018u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10501c: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x10501cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x105020: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x105020u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x105024: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x105024u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105028: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x105028u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10502c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x10502Cu;
    {
        const bool branch_taken_0x10502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10502Cu;
            // 0x105030: 0xdba20080  lqc2        $vf2, 0x80($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10502c) {
            ctx->pc = 0x1050A0u;
            goto label_1050a0;
        }
    }
    ctx->pc = 0x105034u;
    // 0x105034: 0x0  nop
    ctx->pc = 0x105034u;
    // NOP
label_105038:
    // 0x105038: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x105038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_10503c:
    // 0x10503c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10503Cu;
    {
        const bool branch_taken_0x10503c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10503Cu;
            // 0x105040: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10503c) {
            ctx->pc = 0x105078u;
            goto label_105078;
        }
    }
    ctx->pc = 0x105044u;
    // 0x105044: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x105044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105048: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x105048u;
    {
        const bool branch_taken_0x105048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10504Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105048u;
            // 0x10504c: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105048) {
            ctx->pc = 0x10507Cu;
            goto label_10507c;
        }
    }
    ctx->pc = 0x105050u;
    // 0x105050: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x105050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x105054: 0x48b50800  qmtc2.ni    $s5, $vf1
    ctx->pc = 0x105054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 21));
    // 0x105058: 0xdba20080  lqc2        $vf2, 0x80($sp)
    ctx->pc = 0x105058u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10505c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x10505cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105060: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x105060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x105064: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x105064u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x105068: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x105068u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10506c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10506Cu;
    {
        const bool branch_taken_0x10506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10506Cu;
            // 0x105070: 0xf9410000  sqc2        $vf1, 0x0($t2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10506c) {
            ctx->pc = 0x1050B0u;
            goto label_1050b0;
        }
    }
    ctx->pc = 0x105074u;
    // 0x105074: 0x0  nop
    ctx->pc = 0x105074u;
    // NOP
label_105078:
    // 0x105078: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x105078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_10507c:
    // 0x10507c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10507Cu;
    {
        const bool branch_taken_0x10507c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10507Cu;
            // 0x105080: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10507c) {
            ctx->pc = 0x1050B0u;
            goto label_1050b0;
        }
    }
    ctx->pc = 0x105084u;
    // 0x105084: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x105084u;
    {
        const bool branch_taken_0x105084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105084) {
            ctx->pc = 0x1050B0u;
            goto label_1050b0;
        }
    }
    ctx->pc = 0x10508Cu;
    // 0x10508c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x10508cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x105090: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x105090u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x105094: 0xdba20080  lqc2        $vf2, 0x80($sp)
    ctx->pc = 0x105094u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x105098: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x105098u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10509c: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x10509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
label_1050a0:
    // 0x1050a0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1050a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1050a4: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1050a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1050a8: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1050a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1050ac: 0x0  nop
    ctx->pc = 0x1050acu;
    // NOP
label_1050b0:
    // 0x1050b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1050b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1050b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1050b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1050b8: 0x0  nop
    ctx->pc = 0x1050b8u;
    // NOP
    // 0x1050bc: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1050BCu;
    {
        const bool branch_taken_0x1050bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1050bc) {
            ctx->pc = 0x1050C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1050BCu;
            // 0x1050c0: 0xd8c20000  lqc2        $vf2, 0x0($a2) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1050D4u;
            goto label_1050d4;
        }
    }
    ctx->pc = 0x1050C4u;
    // 0x1050c4: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1050c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1050c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1050c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1050cc: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x1050ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x1050d0: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1050d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1050d4:
    // 0x1050d4: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x1050d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050d8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1050d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1050dc: 0x3a0702d  daddu       $t6, $sp, $zero
    ctx->pc = 0x1050dcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050e0: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x1050e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1050e4: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1050e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1050e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1050e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1050ec: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x1050ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1050f0: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1050f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1050f4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1050f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1050f8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1050f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1050fc: 0x39250001  xori        $a1, $t1, 0x1
    ctx->pc = 0x1050fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x105100: 0x48350800  qmfc2.ni    $s5, $vf1
    ctx->pc = 0x105100u;
    SET_GPR_VEC(ctx, 21, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105104: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x105104u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105108: 0x46000004  c1          0x4
    ctx->pc = 0x105108u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x10510c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x10510cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x105110: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x105110u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x105114: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x105114u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x105118: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x105118u;
    {
        const bool branch_taken_0x105118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10511Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105118u;
            // 0x10511c: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105118) {
            ctx->pc = 0x105160u;
            goto label_105160;
        }
    }
    ctx->pc = 0x105120u;
    // 0x105120: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x105120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105124: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x105124u;
    {
        const bool branch_taken_0x105124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105124u;
            // 0x105128: 0x31220001  andi        $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105124) {
            ctx->pc = 0x105164u;
            goto label_105164;
        }
    }
    ctx->pc = 0x10512Cu;
    // 0x10512c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10512cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x105130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x105130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105134: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x105134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x105138: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x105138u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10513c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x10513cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x105140: 0x4be21898  vmulx.xyzw  $vf2, $vf3, $vf2x
    ctx->pc = 0x105140u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105144: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x105144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x105148: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x105148u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10514c: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x10514cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105150: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x105150u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105154: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x105154u;
    {
        const bool branch_taken_0x105154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105154u;
            // 0x105158: 0xdba20090  lqc2        $vf2, 0x90($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105154) {
            ctx->pc = 0x1051C8u;
            goto label_1051c8;
        }
    }
    ctx->pc = 0x10515Cu;
    // 0x10515c: 0x0  nop
    ctx->pc = 0x10515cu;
    // NOP
label_105160:
    // 0x105160: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x105160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_105164:
    // 0x105164: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x105164u;
    {
        const bool branch_taken_0x105164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105164u;
            // 0x105168: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105164) {
            ctx->pc = 0x1051A0u;
            goto label_1051a0;
        }
    }
    ctx->pc = 0x10516Cu;
    // 0x10516c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10516cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105170: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x105170u;
    {
        const bool branch_taken_0x105170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105170u;
            // 0x105174: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105170) {
            ctx->pc = 0x1051A4u;
            goto label_1051a4;
        }
    }
    ctx->pc = 0x105178u;
    // 0x105178: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x105178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x10517c: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x10517cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x105180: 0xdba20090  lqc2        $vf2, 0x90($sp)
    ctx->pc = 0x105180u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x105184: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x105184u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105188: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x105188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10518c: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x10518cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x105190: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x105190u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105194: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x105194u;
    {
        const bool branch_taken_0x105194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105194u;
            // 0x105198: 0xf9410000  sqc2        $vf1, 0x0($t2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105194) {
            ctx->pc = 0x1051D8u;
            goto label_1051d8;
        }
    }
    ctx->pc = 0x10519Cu;
    // 0x10519c: 0x0  nop
    ctx->pc = 0x10519cu;
    // NOP
label_1051a0:
    // 0x1051a0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1051a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1051a4:
    // 0x1051a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1051A4u;
    {
        const bool branch_taken_0x1051a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1051A4u;
            // 0x1051a8: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051a4) {
            ctx->pc = 0x1051D8u;
            goto label_1051d8;
        }
    }
    ctx->pc = 0x1051ACu;
    // 0x1051ac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1051ACu;
    {
        const bool branch_taken_0x1051ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1051ac) {
            ctx->pc = 0x1051D8u;
            goto label_1051d8;
        }
    }
    ctx->pc = 0x1051B4u;
    // 0x1051b4: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x1051b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x1051b8: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x1051b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x1051bc: 0xdba20090  lqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1051bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1051c0: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1051c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1051c4: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1051c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
label_1051c8:
    // 0x1051c8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1051c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1051cc: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1051ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1051d0: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1051d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1051d4: 0x0  nop
    ctx->pc = 0x1051d4u;
    // NOP
label_1051d8:
    // 0x1051d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1051d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1051dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1051dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1051e0: 0x0  nop
    ctx->pc = 0x1051e0u;
    // NOP
    // 0x1051e4: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x1051E4u;
    {
        const bool branch_taken_0x1051e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1051E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1051E4u;
            // 0x1051e8: 0x8fb50120  lw          $s5, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051e4) {
            ctx->pc = 0x105304u;
            goto label_105304;
        }
    }
    ctx->pc = 0x1051ECu;
    // 0x1051ec: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1051ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1051f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1051f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1051f4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1051F4u;
    {
        const bool branch_taken_0x1051f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1051F4u;
            // 0x1051f8: 0xe5c00000  swc1        $f0, 0x0($t6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051f4) {
            ctx->pc = 0x105300u;
            goto label_105300;
        }
    }
    ctx->pc = 0x1051FCu;
label_1051fc:
    // 0x1051fc: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x1051fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x105200: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x105200u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105204: 0xc5a10004  lwc1        $f1, 0x4($t5)
    ctx->pc = 0x105204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105208: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x105208u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10520c: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x10520cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x105210: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x105210u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x105214: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x105214u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105218: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x105218u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10521c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10521cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x105220: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x105220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x105224: 0x48350800  qmfc2.ni    $s5, $vf1
    ctx->pc = 0x105224u;
    SET_GPR_VEC(ctx, 21, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105228: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x105228u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10522c: 0x46000004  c1          0x4
    ctx->pc = 0x10522cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x105230: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x105230u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x105234: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x105234u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x105238: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x105238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x10523c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x10523cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x105240: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x105240u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x105244: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x105244u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105248: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x105248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10524c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x10524cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x105250: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x105250u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105254: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x105254u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105258: 0xdba200a0  lqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x105258u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10525c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x10525cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105260: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x105260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105264: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x105264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x105268: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x105268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10526c: 0x0  nop
    ctx->pc = 0x10526cu;
    // NOP
    // 0x105270: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x105270u;
    {
        const bool branch_taken_0x105270 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x105274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105270u;
            // 0x105274: 0xf8610000  sqc2        $vf1, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105270) {
            ctx->pc = 0x105288u;
            goto label_105288;
        }
    }
    ctx->pc = 0x105278u;
    // 0x105278: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x105278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10527c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10527cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x105280: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x105280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x105284: 0x0  nop
    ctx->pc = 0x105284u;
    // NOP
label_105288:
    // 0x105288: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x105288u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10528c: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x10528cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105290: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x105290u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105294: 0xfba200b0  sqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x105294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x105298: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x105298u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x10529c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x10529cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1052a0: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1052a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1052a4: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x1052a4u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1052a8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1052a8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1052ac: 0x46000004  c1          0x4
    ctx->pc = 0x1052acu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1052b0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1052b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1052b4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1052b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1052b8: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x1052b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1052bc: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x1052bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x1052c0: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x1052c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x1052c4: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1052c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1052c8: 0xfba200b0  sqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x1052c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1052cc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1052ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1052d0: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1052d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1052d4: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1052d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1052d8: 0xdba200b0  lqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x1052d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1052dc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1052dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1052e0: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1052e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1052e4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1052e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1052e8: 0x0  nop
    ctx->pc = 0x1052e8u;
    // NOP
    // 0x1052ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1052ECu;
    {
        const bool branch_taken_0x1052ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1052F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1052ECu;
            // 0x1052f0: 0xf8610000  sqc2        $vf1, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052ec) {
            ctx->pc = 0x105300u;
            goto label_105300;
        }
    }
    ctx->pc = 0x1052F4u;
    // 0x1052f4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1052f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1052f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1052f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1052fc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1052fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_105300:
    // 0x105300: 0x8fb50120  lw          $s5, 0x120($sp)
    ctx->pc = 0x105300u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_105304:
    // 0x105304: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x105304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x105308: 0x25ef0002  addiu       $t7, $t7, 0x2
    ctx->pc = 0x105308u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x10530c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x10530cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x105310: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x105310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x105314: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x105314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x105318: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x105318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x10531c: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x10531cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x105320: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x105320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x105324: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x105324u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x105328: 0x115102a  slt         $v0, $t0, $s5
    ctx->pc = 0x105328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x10532c: 0x1440ff1a  bnez        $v0, . + 4 + (-0xE6 << 2)
    ctx->pc = 0x10532Cu;
    {
        const bool branch_taken_0x10532c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10532Cu;
            // 0x105330: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10532c) {
            ctx->pc = 0x104F98u;
            runtime->cooperativeGuestYield();
            goto label_104f98;
        }
    }
    ctx->pc = 0x105334u;
label_105334:
    // 0x105334: 0x191140  sll         $v0, $t9, 5
    ctx->pc = 0x105334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 5));
    // 0x105338: 0x84940  sll         $t1, $t0, 5
    ctx->pc = 0x105338u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x10533c: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x10533cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x105340: 0x87100  sll         $t6, $t0, 4
    ctx->pc = 0x105340u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x105344: 0x191080  sll         $v0, $t9, 2
    ctx->pc = 0x105344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x105348: 0x85080  sll         $t2, $t0, 2
    ctx->pc = 0x105348u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x10534c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x10534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x105350: 0x12b3021  addu        $a2, $t1, $t3
    ctx->pc = 0x105350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x105354: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x105354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105358: 0x14c1821  addu        $v1, $t2, $t4
    ctx->pc = 0x105358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x10535c: 0x1d81021  addu        $v0, $t6, $t8
    ctx->pc = 0x10535cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
    // 0x105360: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x105360u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105364: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x105364u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x105368: 0x3a0682d  daddu       $t5, $sp, $zero
    ctx->pc = 0x105368u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10536c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x10536cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105370: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x105370u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x105374: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x105374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105378: 0xfba300c0  sqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x105378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10537c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x10537cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105380: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x105380u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105384: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x105384u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105388: 0x38670001  xori        $a3, $v1, 0x1
    ctx->pc = 0x105388u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x10538c: 0x48300800  qmfc2.ni    $s0, $vf1
    ctx->pc = 0x10538cu;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105390: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x105390u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105394: 0x46000004  c1          0x4
    ctx->pc = 0x105394u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x105398: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x105398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x10539c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x10539cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1053a0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1053a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1053a4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1053A4u;
    {
        const bool branch_taken_0x1053a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1053A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1053A4u;
            // 0x1053a8: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053a4) {
            ctx->pc = 0x1053E8u;
            goto label_1053e8;
        }
    }
    ctx->pc = 0x1053ACu;
    // 0x1053ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1053acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1053b0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1053B0u;
    {
        const bool branch_taken_0x1053b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1053B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1053B0u;
            // 0x1053b4: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053b0) {
            ctx->pc = 0x1053ECu;
            goto label_1053ec;
        }
    }
    ctx->pc = 0x1053B8u;
    // 0x1053b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1053b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1053bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1053bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1053c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1053c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1053c4: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x1053c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1053c8: 0x48b51000  qmtc2.ni    $s5, $vf2
    ctx->pc = 0x1053c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 21));
    // 0x1053cc: 0x4be21898  vmulx.xyzw  $vf2, $vf3, $vf2x
    ctx->pc = 0x1053ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1053d0: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x1053d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1053d4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1053d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1053d8: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1053d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1053dc: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1053dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1053e0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1053E0u;
    {
        const bool branch_taken_0x1053e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1053E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1053E0u;
            // 0x1053e4: 0xdba200c0  lqc2        $vf2, 0xC0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053e0) {
            ctx->pc = 0x105450u;
            goto label_105450;
        }
    }
    ctx->pc = 0x1053E8u;
label_1053e8:
    // 0x1053e8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1053e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1053ec:
    // 0x1053ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1053ECu;
    {
        const bool branch_taken_0x1053ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1053F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1053ECu;
            // 0x1053f0: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053ec) {
            ctx->pc = 0x105428u;
            goto label_105428;
        }
    }
    ctx->pc = 0x1053F4u;
    // 0x1053f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1053f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1053f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1053F8u;
    {
        const bool branch_taken_0x1053f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1053FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1053F8u;
            // 0x1053fc: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053f8) {
            ctx->pc = 0x10542Cu;
            goto label_10542c;
        }
    }
    ctx->pc = 0x105400u;
    // 0x105400: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x105400u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x105404: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x105404u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x105408: 0xdba200c0  lqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x105408u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10540c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x10540cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105410: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x105410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x105414: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x105414u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105418: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x105418u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10541c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10541Cu;
    {
        const bool branch_taken_0x10541c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10541Cu;
            // 0x105420: 0xf8a10000  sqc2        $vf1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10541c) {
            ctx->pc = 0x105460u;
            goto label_105460;
        }
    }
    ctx->pc = 0x105424u;
    // 0x105424: 0x0  nop
    ctx->pc = 0x105424u;
    // NOP
label_105428:
    // 0x105428: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x105428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_10542c:
    // 0x10542c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10542Cu;
    {
        const bool branch_taken_0x10542c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10542Cu;
            // 0x105430: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10542c) {
            ctx->pc = 0x105460u;
            goto label_105460;
        }
    }
    ctx->pc = 0x105434u;
    // 0x105434: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x105434u;
    {
        const bool branch_taken_0x105434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105434) {
            ctx->pc = 0x105460u;
            goto label_105460;
        }
    }
    ctx->pc = 0x10543Cu;
    // 0x10543c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x10543cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x105440: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x105440u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x105444: 0xdba200c0  lqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x105444u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x105448: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x105448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10544c: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x10544cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
label_105450:
    // 0x105450: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x105450u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x105454: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x105454u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105458: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x105458u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10545c: 0x0  nop
    ctx->pc = 0x10545cu;
    // NOP
label_105460:
    // 0x105460: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x105460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105464: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x105464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105468: 0x0  nop
    ctx->pc = 0x105468u;
    // NOP
    // 0x10546c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x10546Cu;
    {
        const bool branch_taken_0x10546c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x105470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10546Cu;
            // 0x105470: 0x1531021  addu        $v0, $t2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10546c) {
            ctx->pc = 0x105480u;
            goto label_105480;
        }
    }
    ctx->pc = 0x105474u;
    // 0x105474: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x105474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105478: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x105478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x10547c: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x10547cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
label_105480:
    // 0x105480: 0x1342021  addu        $a0, $t1, $s4
    ctx->pc = 0x105480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x105484: 0x12b3021  addu        $a2, $t1, $t3
    ctx->pc = 0x105484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x105488: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x105488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10548c: 0x1d81821  addu        $v1, $t6, $t8
    ctx->pc = 0x10548cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
    // 0x105490: 0x14c1021  addu        $v0, $t2, $t4
    ctx->pc = 0x105490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x105494: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x105494u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x105498: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x105498u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10549c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x10549cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1054a0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1054a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1054a4: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1054a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1054a8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1054a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1054ac: 0xfba300d0  sqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x1054acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1054b0: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1054b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1054b4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1054b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1054b8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1054b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1054bc: 0x38e30001  xori        $v1, $a3, 0x1
    ctx->pc = 0x1054bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x1054c0: 0x482a0800  qmfc2.ni    $t2, $vf1
    ctx->pc = 0x1054c0u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1054c4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x1054c4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1054c8: 0x46000004  c1          0x4
    ctx->pc = 0x1054c8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1054cc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1054ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1054d0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1054d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1054d4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1054d4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1054d8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1054D8u;
    {
        const bool branch_taken_0x1054d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1054D8u;
            // 0x1054dc: 0x38a20001  xori        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054d8) {
            ctx->pc = 0x105520u;
            goto label_105520;
        }
    }
    ctx->pc = 0x1054E0u;
    // 0x1054e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1054e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1054e4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1054E4u;
    {
        const bool branch_taken_0x1054e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1054E4u;
            // 0x1054e8: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054e4) {
            ctx->pc = 0x105524u;
            goto label_105524;
        }
    }
    ctx->pc = 0x1054ECu;
    // 0x1054ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1054ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1054f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1054f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1054f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1054f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1054f8: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1054f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1054fc: 0x48b01000  qmtc2.ni    $s0, $vf2
    ctx->pc = 0x1054fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x105500: 0x4be21898  vmulx.xyzw  $vf2, $vf3, $vf2x
    ctx->pc = 0x105500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105504: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x105504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x105508: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x105508u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10550c: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x10550cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105510: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x105510u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105514: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x105514u;
    {
        const bool branch_taken_0x105514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105514u;
            // 0x105518: 0xdba200d0  lqc2        $vf2, 0xD0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105514) {
            ctx->pc = 0x105588u;
            goto label_105588;
        }
    }
    ctx->pc = 0x10551Cu;
    // 0x10551c: 0x0  nop
    ctx->pc = 0x10551cu;
    // NOP
label_105520:
    // 0x105520: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x105520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_105524:
    // 0x105524: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x105524u;
    {
        const bool branch_taken_0x105524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105524u;
            // 0x105528: 0x38a20001  xori        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105524) {
            ctx->pc = 0x105560u;
            goto label_105560;
        }
    }
    ctx->pc = 0x10552Cu;
    // 0x10552c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10552cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105530: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x105530u;
    {
        const bool branch_taken_0x105530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105530u;
            // 0x105534: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105530) {
            ctx->pc = 0x105564u;
            goto label_105564;
        }
    }
    ctx->pc = 0x105538u;
    // 0x105538: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x105538u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x10553c: 0x48b50800  qmtc2.ni    $s5, $vf1
    ctx->pc = 0x10553cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 21));
    // 0x105540: 0xdba200d0  lqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x105540u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x105544: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x105544u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105548: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x105548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10554c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x10554cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x105550: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x105550u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105554: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x105554u;
    {
        const bool branch_taken_0x105554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105554u;
            // 0x105558: 0xf8810000  sqc2        $vf1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105554) {
            ctx->pc = 0x105598u;
            goto label_105598;
        }
    }
    ctx->pc = 0x10555Cu;
    // 0x10555c: 0x0  nop
    ctx->pc = 0x10555cu;
    // NOP
label_105560:
    // 0x105560: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x105560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_105564:
    // 0x105564: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x105564u;
    {
        const bool branch_taken_0x105564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105564u;
            // 0x105568: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105564) {
            ctx->pc = 0x105598u;
            goto label_105598;
        }
    }
    ctx->pc = 0x10556Cu;
    // 0x10556c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10556Cu;
    {
        const bool branch_taken_0x10556c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10556c) {
            ctx->pc = 0x105598u;
            goto label_105598;
        }
    }
    ctx->pc = 0x105574u;
    // 0x105574: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x105574u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x105578: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x105578u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10557c: 0xdba200d0  lqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x10557cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x105580: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x105580u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105584: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x105584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
label_105588:
    // 0x105588: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x105588u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10558c: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x10558cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105590: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x105590u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105594: 0x0  nop
    ctx->pc = 0x105594u;
    // NOP
label_105598:
    // 0x105598: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x105598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10559c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10559cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1055a0: 0x0  nop
    ctx->pc = 0x1055a0u;
    // NOP
    // 0x1055a4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1055A4u;
    {
        const bool branch_taken_0x1055a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1055A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1055A4u;
            // 0x1055a8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055a4) {
            ctx->pc = 0x1055B8u;
            goto label_1055b8;
        }
    }
    ctx->pc = 0x1055ACu;
    // 0x1055ac: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x1055acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1055b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1055b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1055b4: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x1055b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_1055b8:
    // 0x1055b8: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x1055b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055bc: 0x81140  sll         $v0, $t0, 5
    ctx->pc = 0x1055bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x1055c0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1055c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1055c4: 0x4b3021  addu        $a2, $v0, $t3
    ctx->pc = 0x1055c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1055c8: 0x542821  addu        $a1, $v0, $s4
    ctx->pc = 0x1055c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1055cc: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x1055ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1055d0: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x1055d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1055d4: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x1055d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1055d8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1055d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1055dc: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1055dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1055e0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1055e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1055e4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1055e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1055e8: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1055e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1055ec: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1055ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1055f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1055f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1055f4: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x1055f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1055f8: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1055f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1055fc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1055fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105600: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x105600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105604: 0x38870001  xori        $a3, $a0, 0x1
    ctx->pc = 0x105604u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x105608: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x105608u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10560c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x10560cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105610: 0x46000004  c1          0x4
    ctx->pc = 0x105610u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x105614: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x105614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x105618: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x105618u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x10561c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x10561cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x105620: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x105620u;
    {
        const bool branch_taken_0x105620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105620u;
            // 0x105624: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105620) {
            ctx->pc = 0x105668u;
            goto label_105668;
        }
    }
    ctx->pc = 0x105628u;
    // 0x105628: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x105628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10562c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10562Cu;
    {
        const bool branch_taken_0x10562c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10562Cu;
            // 0x105630: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10562c) {
            ctx->pc = 0x10566Cu;
            goto label_10566c;
        }
    }
    ctx->pc = 0x105634u;
    // 0x105634: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x105634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x105638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x105638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10563c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x10563cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x105640: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x105640u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x105644: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x105644u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x105648: 0x4be21898  vmulx.xyzw  $vf2, $vf3, $vf2x
    ctx->pc = 0x105648u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10564c: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x10564cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x105650: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x105650u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105654: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x105654u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105658: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x105658u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10565c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x10565Cu;
    {
        const bool branch_taken_0x10565c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10565Cu;
            // 0x105660: 0xdba200e0  lqc2        $vf2, 0xE0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10565c) {
            ctx->pc = 0x1056D0u;
            goto label_1056d0;
        }
    }
    ctx->pc = 0x105664u;
    // 0x105664: 0x0  nop
    ctx->pc = 0x105664u;
    // NOP
label_105668:
    // 0x105668: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x105668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_10566c:
    // 0x10566c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10566Cu;
    {
        const bool branch_taken_0x10566c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10566Cu;
            // 0x105670: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10566c) {
            ctx->pc = 0x1056A8u;
            goto label_1056a8;
        }
    }
    ctx->pc = 0x105674u;
    // 0x105674: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x105674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105678: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x105678u;
    {
        const bool branch_taken_0x105678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10567Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105678u;
            // 0x10567c: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105678) {
            ctx->pc = 0x1056ACu;
            goto label_1056ac;
        }
    }
    ctx->pc = 0x105680u;
    // 0x105680: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x105680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x105684: 0x48b00800  qmtc2.ni    $s0, $vf1
    ctx->pc = 0x105684u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x105688: 0xdba200e0  lqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x105688u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x10568c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x10568cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105690: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x105690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x105694: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x105694u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105698: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x105698u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10569c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10569Cu;
    {
        const bool branch_taken_0x10569c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1056A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10569Cu;
            // 0x1056a0: 0xf8a10000  sqc2        $vf1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10569c) {
            ctx->pc = 0x1056E0u;
            goto label_1056e0;
        }
    }
    ctx->pc = 0x1056A4u;
    // 0x1056a4: 0x0  nop
    ctx->pc = 0x1056a4u;
    // NOP
label_1056a8:
    // 0x1056a8: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x1056a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_1056ac:
    // 0x1056ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1056ACu;
    {
        const bool branch_taken_0x1056ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1056B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1056ACu;
            // 0x1056b0: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1056ac) {
            ctx->pc = 0x1056E0u;
            goto label_1056e0;
        }
    }
    ctx->pc = 0x1056B4u;
    // 0x1056b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1056B4u;
    {
        const bool branch_taken_0x1056b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1056b4) {
            ctx->pc = 0x1056E0u;
            goto label_1056e0;
        }
    }
    ctx->pc = 0x1056BCu;
    // 0x1056bc: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x1056bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1056c0: 0x48b50800  qmtc2.ni    $s5, $vf1
    ctx->pc = 0x1056c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 21));
    // 0x1056c4: 0xdba200e0  lqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x1056c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1056c8: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1056c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1056cc: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x1056ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
label_1056d0:
    // 0x1056d0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1056d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1056d4: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1056d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1056d8: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1056d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1056dc: 0x0  nop
    ctx->pc = 0x1056dcu;
    // NOP
label_1056e0:
    // 0x1056e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1056e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1056e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1056e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1056e8: 0x0  nop
    ctx->pc = 0x1056e8u;
    // NOP
    // 0x1056ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1056ECu;
    {
        const bool branch_taken_0x1056ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1056F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1056ECu;
            // 0x1056f0: 0x8fa20120  lw          $v0, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1056ec) {
            ctx->pc = 0x105704u;
            goto label_105704;
        }
    }
    ctx->pc = 0x1056F4u;
    // 0x1056f4: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x1056f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1056f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1056f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1056fc: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x1056fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x105700: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x105700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_105704:
    // 0x105704: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x105704u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105708: 0x260602d  daddu       $t4, $s3, $zero
    ctx->pc = 0x105708u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10570c: 0x25ef0003  addiu       $t7, $t7, 0x3
    ctx->pc = 0x10570cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
    // 0x105710: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x105710u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105714: 0x18400083  blez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x105714u;
    {
        const bool branch_taken_0x105714 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105714u;
            // 0x105718: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105714) {
            ctx->pc = 0x105924u;
            goto label_105924;
        }
    }
    ctx->pc = 0x10571Cu;
    // 0x10571c: 0x8faa0124  lw          $t2, 0x124($sp)
    ctx->pc = 0x10571cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x105720: 0x25650020  addiu       $a1, $t3, 0x20
    ctx->pc = 0x105720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x105724: 0x258e0004  addiu       $t6, $t4, 0x4
    ctx->pc = 0x105724u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x105728: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x105728u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10572c: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x10572cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_105730:
    // 0x105730: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x105730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x105734: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x105734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x105738: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x105738u;
    {
        const bool branch_taken_0x105738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10573Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105738u;
            // 0x10573c: 0x8da70000  lw          $a3, 0x0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105738) {
            ctx->pc = 0x10586Cu;
            goto label_10586c;
        }
    }
    ctx->pc = 0x105740u;
    // 0x105740: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x105740u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105744: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x105744u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105748: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x105748u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10574c: 0x3a0c02d  daddu       $t8, $sp, $zero
    ctx->pc = 0x10574cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105750: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x105750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105754: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x105754u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x105758: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x105758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x10575c: 0xfba300f0  sqc2        $vf3, 0xF0($sp)
    ctx->pc = 0x10575cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x105760: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x105760u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105764: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x105764u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105768: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x105768u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10576c: 0x38e60001  xori        $a2, $a3, 0x1
    ctx->pc = 0x10576cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x105770: 0x48300800  qmfc2.ni    $s0, $vf1
    ctx->pc = 0x105770u;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105774: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x105774u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105778: 0x46000004  c1          0x4
    ctx->pc = 0x105778u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x10577c: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x10577cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x105780: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x105780u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x105784: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x105784u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x105788: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x105788u;
    {
        const bool branch_taken_0x105788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10578Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105788u;
            // 0x10578c: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105788) {
            ctx->pc = 0x1057D0u;
            goto label_1057d0;
        }
    }
    ctx->pc = 0x105790u;
    // 0x105790: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x105790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105794: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x105794u;
    {
        const bool branch_taken_0x105794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105794u;
            // 0x105798: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105794) {
            ctx->pc = 0x1057D4u;
            goto label_1057d4;
        }
    }
    ctx->pc = 0x10579Cu;
    // 0x10579c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10579cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1057a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1057a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1057a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1057a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1057a8: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x1057a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1057ac: 0x48b51000  qmtc2.ni    $s5, $vf2
    ctx->pc = 0x1057acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 21));
    // 0x1057b0: 0x4be21898  vmulx.xyzw  $vf2, $vf3, $vf2x
    ctx->pc = 0x1057b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1057b4: 0xfba200f0  sqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x1057b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1057b8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1057b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1057bc: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1057bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1057c0: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1057c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1057c4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1057C4u;
    {
        const bool branch_taken_0x1057c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1057C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1057C4u;
            // 0x1057c8: 0xdba200f0  lqc2        $vf2, 0xF0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057c4) {
            ctx->pc = 0x105838u;
            goto label_105838;
        }
    }
    ctx->pc = 0x1057CCu;
    // 0x1057cc: 0x0  nop
    ctx->pc = 0x1057ccu;
    // NOP
label_1057d0:
    // 0x1057d0: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x1057d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_1057d4:
    // 0x1057d4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1057D4u;
    {
        const bool branch_taken_0x1057d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1057D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1057D4u;
            // 0x1057d8: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057d4) {
            ctx->pc = 0x105810u;
            goto label_105810;
        }
    }
    ctx->pc = 0x1057DCu;
    // 0x1057dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1057dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1057e0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1057E0u;
    {
        const bool branch_taken_0x1057e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1057E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1057E0u;
            // 0x1057e4: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057e0) {
            ctx->pc = 0x105814u;
            goto label_105814;
        }
    }
    ctx->pc = 0x1057E8u;
    // 0x1057e8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1057e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1057ec: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1057ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1057f0: 0xdba200f0  lqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x1057f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1057f4: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1057f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1057f8: 0xfba200f0  sqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x1057f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1057fc: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x1057fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x105800: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x105800u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105804: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x105804u;
    {
        const bool branch_taken_0x105804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105804u;
            // 0x105808: 0xf9210000  sqc2        $vf1, 0x0($t1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105804) {
            ctx->pc = 0x105848u;
            goto label_105848;
        }
    }
    ctx->pc = 0x10580Cu;
    // 0x10580c: 0x0  nop
    ctx->pc = 0x10580cu;
    // NOP
label_105810:
    // 0x105810: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x105810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_105814:
    // 0x105814: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x105814u;
    {
        const bool branch_taken_0x105814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105814u;
            // 0x105818: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105814) {
            ctx->pc = 0x105848u;
            goto label_105848;
        }
    }
    ctx->pc = 0x10581Cu;
    // 0x10581c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10581Cu;
    {
        const bool branch_taken_0x10581c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10581c) {
            ctx->pc = 0x105848u;
            goto label_105848;
        }
    }
    ctx->pc = 0x105824u;
    // 0x105824: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x105824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x105828: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x105828u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x10582c: 0xdba200f0  lqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x10582cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x105830: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x105830u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105834: 0xfba200f0  sqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x105834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[2]));
label_105838:
    // 0x105838: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x105838u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10583c: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x10583cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105840: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x105840u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105844: 0x0  nop
    ctx->pc = 0x105844u;
    // NOP
label_105848:
    // 0x105848: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x105848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10584c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10584cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105850: 0x0  nop
    ctx->pc = 0x105850u;
    // NOP
    // 0x105854: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x105854u;
    {
        const bool branch_taken_0x105854 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x105858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105854u;
            // 0x105858: 0x8fb00120  lw          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105854) {
            ctx->pc = 0x1058FCu;
            goto label_1058fc;
        }
    }
    ctx->pc = 0x10585Cu;
    // 0x10585c: 0xc7000000  lwc1        $f0, 0x0($t8)
    ctx->pc = 0x10585cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105860: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x105860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x105864: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x105864u;
    {
        const bool branch_taken_0x105864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105864u;
            // 0x105868: 0xe7000000  swc1        $f0, 0x0($t8) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105864) {
            ctx->pc = 0x1058F8u;
            goto label_1058f8;
        }
    }
    ctx->pc = 0x10586Cu;
label_10586c:
    // 0x10586c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x10586cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105870: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x105870u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x105874: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x105874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105878: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x105878u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10587c: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x10587cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x105880: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x105880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x105884: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x105884u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105888: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x105888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10588c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10588cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x105890: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x105890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x105894: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x105894u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105898: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x105898u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10589c: 0x46000004  c1          0x4
    ctx->pc = 0x10589cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1058a0: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x1058a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1058a4: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1058a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x1058a8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1058a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1058ac: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x1058acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1058b0: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x1058b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x1058b4: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1058b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1058b8: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1058b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1058bc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1058bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1058c0: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1058c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1058c4: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1058c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1058c8: 0xdba20100  lqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1058c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1058cc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1058ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1058d0: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1058d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1058d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1058d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1058d8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1058d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1058dc: 0x0  nop
    ctx->pc = 0x1058dcu;
    // NOP
    // 0x1058e0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1058E0u;
    {
        const bool branch_taken_0x1058e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1058E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1058E0u;
            // 0x1058e4: 0xf8810000  sqc2        $vf1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058e0) {
            ctx->pc = 0x1058F8u;
            goto label_1058f8;
        }
    }
    ctx->pc = 0x1058E8u;
    // 0x1058e8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1058e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1058ec: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1058ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1058f0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1058f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1058f4: 0x0  nop
    ctx->pc = 0x1058f4u;
    // NOP
label_1058f8:
    // 0x1058f8: 0x8fb00120  lw          $s0, 0x120($sp)
    ctx->pc = 0x1058f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1058fc:
    // 0x1058fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1058fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x105900: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x105900u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x105904: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x105904u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x105908: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x105908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10590c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x10590cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x105910: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x105910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x105914: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x105914u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x105918: 0x110102a  slt         $v0, $t0, $s0
    ctx->pc = 0x105918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x10591c: 0x1440ff84  bnez        $v0, . + 4 + (-0x7C << 2)
    ctx->pc = 0x10591Cu;
    {
        const bool branch_taken_0x10591c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10591Cu;
            // 0x105920: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10591c) {
            ctx->pc = 0x105730u;
            runtime->cooperativeGuestYield();
            goto label_105730;
        }
    }
    ctx->pc = 0x105924u;
label_105924:
    // 0x105924: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x105924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x105928: 0x191140  sll         $v0, $t9, 5
    ctx->pc = 0x105928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 5));
    // 0x10592c: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x10592cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x105930: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x105930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x105934: 0x8fb50124  lw          $s5, 0x124($sp)
    ctx->pc = 0x105934u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x105938: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x105938u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x10593c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x10593cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x105940: 0x191880  sll         $v1, $t9, 2
    ctx->pc = 0x105940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x105944: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x105944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x105948: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x105948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x10594c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x10594cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x105950: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x105950u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105954: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x105954u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x105958: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x105958u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10595c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x10595cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105960: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x105960u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x105964: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x105964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105968: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x105968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10596c: 0xfba30110  sqc2        $vf3, 0x110($sp)
    ctx->pc = 0x10596cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x105970: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x105970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105974: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x105974u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105978: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x105978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10597c: 0x38e40001  xori        $a0, $a3, 0x1
    ctx->pc = 0x10597cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x105980: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x105980u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105984: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x105984u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105988: 0x46000004  c1          0x4
    ctx->pc = 0x105988u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x10598c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x10598cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x105990: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x105990u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x105994: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x105994u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x105998: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x105998u;
    {
        const bool branch_taken_0x105998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105998u;
            // 0x10599c: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105998) {
            ctx->pc = 0x1059E0u;
            goto label_1059e0;
        }
    }
    ctx->pc = 0x1059A0u;
    // 0x1059a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1059a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1059a4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1059A4u;
    {
        const bool branch_taken_0x1059a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1059A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1059A4u;
            // 0x1059a8: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059a4) {
            ctx->pc = 0x1059E4u;
            goto label_1059e4;
        }
    }
    ctx->pc = 0x1059ACu;
    // 0x1059ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1059acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1059b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1059b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1059b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1059b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1059b8: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x1059b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x1059bc: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x1059bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x1059c0: 0x4be21898  vmulx.xyzw  $vf2, $vf3, $vf2x
    ctx->pc = 0x1059c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1059c4: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x1059c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1059c8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1059c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1059cc: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1059ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1059d0: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1059d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1059d4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1059D4u;
    {
        const bool branch_taken_0x1059d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1059D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1059D4u;
            // 0x1059d8: 0xdba20110  lqc2        $vf2, 0x110($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059d4) {
            ctx->pc = 0x105A48u;
            goto label_105a48;
        }
    }
    ctx->pc = 0x1059DCu;
    // 0x1059dc: 0x0  nop
    ctx->pc = 0x1059dcu;
    // NOP
label_1059e0:
    // 0x1059e0: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x1059e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_1059e4:
    // 0x1059e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1059E4u;
    {
        const bool branch_taken_0x1059e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1059E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1059E4u;
            // 0x1059e8: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059e4) {
            ctx->pc = 0x105A20u;
            goto label_105a20;
        }
    }
    ctx->pc = 0x1059ECu;
    // 0x1059ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1059ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1059f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1059F0u;
    {
        const bool branch_taken_0x1059f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1059F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1059F0u;
            // 0x1059f4: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059f0) {
            ctx->pc = 0x105A24u;
            goto label_105a24;
        }
    }
    ctx->pc = 0x1059F8u;
    // 0x1059f8: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1059f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1059fc: 0x48b00800  qmtc2.ni    $s0, $vf1
    ctx->pc = 0x1059fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x105a00: 0xdba20110  lqc2        $vf2, 0x110($sp)
    ctx->pc = 0x105a00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x105a04: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x105a04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105a08: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x105a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x105a0c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x105a0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105a10: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x105a10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105a14: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x105A14u;
    {
        const bool branch_taken_0x105a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105A14u;
            // 0x105a18: 0xf8a10000  sqc2        $vf1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a14) {
            ctx->pc = 0x105A58u;
            goto label_105a58;
        }
    }
    ctx->pc = 0x105A1Cu;
    // 0x105a1c: 0x0  nop
    ctx->pc = 0x105a1cu;
    // NOP
label_105a20:
    // 0x105a20: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x105a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_105a24:
    // 0x105a24: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x105A24u;
    {
        const bool branch_taken_0x105a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105A24u;
            // 0x105a28: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a24) {
            ctx->pc = 0x105A58u;
            goto label_105a58;
        }
    }
    ctx->pc = 0x105A2Cu;
    // 0x105a2c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x105A2Cu;
    {
        const bool branch_taken_0x105a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105a2c) {
            ctx->pc = 0x105A58u;
            goto label_105a58;
        }
    }
    ctx->pc = 0x105A34u;
    // 0x105a34: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x105a34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x105a38: 0x48b50800  qmtc2.ni    $s5, $vf1
    ctx->pc = 0x105a38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 21));
    // 0x105a3c: 0xdba20110  lqc2        $vf2, 0x110($sp)
    ctx->pc = 0x105a3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x105a40: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x105a40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105a44: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x105a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
label_105a48:
    // 0x105a48: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x105a48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x105a4c: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x105a4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105a50: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x105a50u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105a54: 0x0  nop
    ctx->pc = 0x105a54u;
    // NOP
label_105a58:
    // 0x105a58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x105a58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105a5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x105a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105a60: 0x0  nop
    ctx->pc = 0x105a60u;
    // NOP
    // 0x105a64: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x105A64u;
    {
        const bool branch_taken_0x105a64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x105A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105A64u;
            // 0x105a68: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a64) {
            ctx->pc = 0x105A78u;
            goto label_105a78;
        }
    }
    ctx->pc = 0x105A6Cu;
    // 0x105a6c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x105a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105a70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x105a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x105a74: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x105a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_105a78:
    // 0x105a78: 0x5e00005  bltz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x105A78u;
    {
        const bool branch_taken_0x105a78 = (GPR_S32(ctx, 15) < 0);
        ctx->pc = 0x105A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105A78u;
            // 0x105a7c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a78) {
            ctx->pc = 0x105A90u;
            goto label_105a90;
        }
    }
    ctx->pc = 0x105A80u;
    // 0x105a80: 0x448f0800  mtc1        $t7, $f1
    ctx->pc = 0x105a80u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x105a84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x105a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x105a88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x105A88u;
    {
        const bool branch_taken_0x105a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105A88u;
            // 0x105a8c: 0x7bb001d0  lq          $s0, 0x1D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a88) {
            ctx->pc = 0x105AACu;
            goto label_105aac;
        }
    }
    ctx->pc = 0x105A90u;
label_105a90:
    // 0x105a90: 0xf1842  srl         $v1, $t7, 1
    ctx->pc = 0x105a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
    // 0x105a94: 0x31e20001  andi        $v0, $t7, 0x1
    ctx->pc = 0x105a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x105a98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x105a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x105a9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x105a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x105aa0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x105aa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x105aa4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x105aa4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x105aa8: 0x7bb001d0  lq          $s0, 0x1D0($sp)
    ctx->pc = 0x105aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_105aac:
    // 0x105aac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x105aacu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x105ab0: 0x7bb101c0  lq          $s1, 0x1C0($sp)
    ctx->pc = 0x105ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x105ab4: 0x7bb201b0  lq          $s2, 0x1B0($sp)
    ctx->pc = 0x105ab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x105ab8: 0x7bb301a0  lq          $s3, 0x1A0($sp)
    ctx->pc = 0x105ab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x105abc: 0x7bb40190  lq          $s4, 0x190($sp)
    ctx->pc = 0x105abcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x105ac0: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x105ac0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x105ac4: 0x7bb60170  lq          $s6, 0x170($sp)
    ctx->pc = 0x105ac4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x105ac8: 0x7bb70160  lq          $s7, 0x160($sp)
    ctx->pc = 0x105ac8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x105acc: 0x7bbe0150  lq          $fp, 0x150($sp)
    ctx->pc = 0x105accu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x105ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x105AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105AD0u;
            // 0x105ad4: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x104798u: goto label_104798;
            case 0x1047C8u: goto label_1047c8;
            case 0x104868u: goto label_104868;
            case 0x10486Cu: goto label_10486c;
            case 0x1048A8u: goto label_1048a8;
            case 0x1048ACu: goto label_1048ac;
            case 0x1048D0u: goto label_1048d0;
            case 0x1048E0u: goto label_1048e0;
            case 0x104904u: goto label_104904;
            case 0x104990u: goto label_104990;
            case 0x104994u: goto label_104994;
            case 0x1049D0u: goto label_1049d0;
            case 0x1049D4u: goto label_1049d4;
            case 0x1049F8u: goto label_1049f8;
            case 0x104A08u: goto label_104a08;
            case 0x104A2Cu: goto label_104a2c;
            case 0x104AB8u: goto label_104ab8;
            case 0x104B30u: goto label_104b30;
            case 0x104B34u: goto label_104b34;
            case 0x104B64u: goto label_104b64;
            case 0x104C18u: goto label_104c18;
            case 0x104C1Cu: goto label_104c1c;
            case 0x104C58u: goto label_104c58;
            case 0x104C5Cu: goto label_104c5c;
            case 0x104C80u: goto label_104c80;
            case 0x104C90u: goto label_104c90;
            case 0x104CB0u: goto label_104cb0;
            case 0x104D50u: goto label_104d50;
            case 0x104D54u: goto label_104d54;
            case 0x104D90u: goto label_104d90;
            case 0x104D94u: goto label_104d94;
            case 0x104DB8u: goto label_104db8;
            case 0x104DC8u: goto label_104dc8;
            case 0x104DE8u: goto label_104de8;
            case 0x104E98u: goto label_104e98;
            case 0x104E9Cu: goto label_104e9c;
            case 0x104ED8u: goto label_104ed8;
            case 0x104EDCu: goto label_104edc;
            case 0x104F00u: goto label_104f00;
            case 0x104F10u: goto label_104f10;
            case 0x104F34u: goto label_104f34;
            case 0x104F6Cu: goto label_104f6c;
            case 0x104F98u: goto label_104f98;
            case 0x105038u: goto label_105038;
            case 0x10503Cu: goto label_10503c;
            case 0x105078u: goto label_105078;
            case 0x10507Cu: goto label_10507c;
            case 0x1050A0u: goto label_1050a0;
            case 0x1050B0u: goto label_1050b0;
            case 0x1050D4u: goto label_1050d4;
            case 0x105160u: goto label_105160;
            case 0x105164u: goto label_105164;
            case 0x1051A0u: goto label_1051a0;
            case 0x1051A4u: goto label_1051a4;
            case 0x1051C8u: goto label_1051c8;
            case 0x1051D8u: goto label_1051d8;
            case 0x1051FCu: goto label_1051fc;
            case 0x105288u: goto label_105288;
            case 0x105300u: goto label_105300;
            case 0x105304u: goto label_105304;
            case 0x105334u: goto label_105334;
            case 0x1053E8u: goto label_1053e8;
            case 0x1053ECu: goto label_1053ec;
            case 0x105428u: goto label_105428;
            case 0x10542Cu: goto label_10542c;
            case 0x105450u: goto label_105450;
            case 0x105460u: goto label_105460;
            case 0x105480u: goto label_105480;
            case 0x105520u: goto label_105520;
            case 0x105524u: goto label_105524;
            case 0x105560u: goto label_105560;
            case 0x105564u: goto label_105564;
            case 0x105588u: goto label_105588;
            case 0x105598u: goto label_105598;
            case 0x1055B8u: goto label_1055b8;
            case 0x105668u: goto label_105668;
            case 0x10566Cu: goto label_10566c;
            case 0x1056A8u: goto label_1056a8;
            case 0x1056ACu: goto label_1056ac;
            case 0x1056D0u: goto label_1056d0;
            case 0x1056E0u: goto label_1056e0;
            case 0x105704u: goto label_105704;
            case 0x105730u: goto label_105730;
            case 0x1057D0u: goto label_1057d0;
            case 0x1057D4u: goto label_1057d4;
            case 0x105810u: goto label_105810;
            case 0x105814u: goto label_105814;
            case 0x105838u: goto label_105838;
            case 0x105848u: goto label_105848;
            case 0x10586Cu: goto label_10586c;
            case 0x1058F8u: goto label_1058f8;
            case 0x1058FCu: goto label_1058fc;
            case 0x105924u: goto label_105924;
            case 0x1059E0u: goto label_1059e0;
            case 0x1059E4u: goto label_1059e4;
            case 0x105A20u: goto label_105a20;
            case 0x105A24u: goto label_105a24;
            case 0x105A48u: goto label_105a48;
            case 0x105A58u: goto label_105a58;
            case 0x105A78u: goto label_105a78;
            case 0x105A90u: goto label_105a90;
            case 0x105AACu: goto label_105aac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x105AD8u;
}
