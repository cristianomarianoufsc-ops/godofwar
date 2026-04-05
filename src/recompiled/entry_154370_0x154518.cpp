#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_154370
// Address: 0x154370 - 0x154518
void entry_154370_0x154518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_154370_0x154518");
#endif

    ctx->pc = 0x154370u;

    // 0x154370: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x154370u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154374: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x154374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x154378: 0xdd470000  ld          $a3, 0x0($t2)
    ctx->pc = 0x154378u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x15437c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15437cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x154380: 0x24c20014  addiu       $v0, $a2, 0x14
    ctx->pc = 0x154380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x154384: 0x48a81800  qmtc2.ni    $t0, $vf3
    ctx->pc = 0x154384u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x154388: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x154388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x15438c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x15438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154390: 0xc446000c  lwc1        $f6, 0xC($v0)
    ctx->pc = 0x154390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x154394: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x154394u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x154398: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x154398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15439c: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x15439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1543a0: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x1543a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1543a4: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1543a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1543a8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1543a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1543ac: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x1543acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1543b0: 0xdd430008  ld          $v1, 0x8($t2)
    ctx->pc = 0x1543b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1543b4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1543b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1543b8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x1543b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1543bc: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x1543bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1543c0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1543c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x1543c4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1543c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1543c8: 0x440b1800  mfc1        $t3, $f3
    ctx->pc = 0x1543c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x1543cc: 0x704b1b89  pcpyld      $v1, $v0, $t3
    ctx->pc = 0x1543ccu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 11)));
    // 0x1543d0: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x1543d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x1543d4: 0x440b0800  mfc1        $t3, $f1
    ctx->pc = 0x1543d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x1543d8: 0x718b1389  pcpyld      $v0, $t4, $t3
    ctx->pc = 0x1543d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x1543dc: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1543dcu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1543e0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1543e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1543e4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1543e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1543e8: 0x4be3106a  vmul.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x1543e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1543ec: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1543ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1543f0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1543f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1543f4: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1543f4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1543f8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1543f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1543fc: 0x8c8b0020  lw          $t3, 0x20($a0)
    ctx->pc = 0x1543fcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x154400: 0x704b1b89  pcpyld      $v1, $v0, $t3
    ctx->pc = 0x154400u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 11)));
    // 0x154404: 0x8c8c002c  lw          $t4, 0x2C($a0)
    ctx->pc = 0x154404u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x154408: 0x8c8b0028  lw          $t3, 0x28($a0)
    ctx->pc = 0x154408u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x15440c: 0x718b1389  pcpyld      $v0, $t4, $t3
    ctx->pc = 0x15440cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x154410: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x154410u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x154414: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x154414u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x154418: 0x8c8c0038  lw          $t4, 0x38($a0)
    ctx->pc = 0x154418u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x15441c: 0x48ac0800  qmtc2.ni    $t4, $vf1
    ctx->pc = 0x15441cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
    // 0x154420: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x154420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x154424: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x154424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x154428: 0xd8a20020  lqc2        $vf2, 0x20($a1)
    ctx->pc = 0x154428u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x15442c: 0x4b010080  vaddx.x     $vf2, $vf0, $vf1x
    ctx->pc = 0x15442cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x154430: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x154430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x154434: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x154434u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x154438: 0xf8a20020  sqc2        $vf2, 0x20($a1)
    ctx->pc = 0x154438u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15443c: 0x4a2118d8  vmulx.w     $vf3, $vf3, $vf1x
    ctx->pc = 0x15443cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x154440: 0x8cc60024  lw          $a2, 0x24($a2)
    ctx->pc = 0x154440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x154444: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x154444u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x154448: 0x4a2118d8  vmulx.w     $vf3, $vf3, $vf1x
    ctx->pc = 0x154448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15444c: 0x4b0300c3  vaddw.x     $vf3, $vf0, $vf3w
    ctx->pc = 0x15444cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x154450: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x154450u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x154454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154458: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x154458u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15445c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15445cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x154460: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x154460u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x154464: 0x4a211880  vaddx.w     $vf2, $vf3, $vf1x
    ctx->pc = 0x154464u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x154468: 0x30e70004  andi        $a3, $a3, 0x4
    ctx->pc = 0x154468u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x15446c: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x15446Cu;
    {
        const bool branch_taken_0x15446c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x154470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15446Cu;
            // 0x154470: 0xf8a20020  sqc2        $vf2, 0x20($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15446c) {
            ctx->pc = 0x154480u;
            goto label_154480;
        }
    }
    ctx->pc = 0x154474u;
    // 0x154474: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x154474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x154478: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x154478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x15447c: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x15447cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
label_154480:
    // 0x154480: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x154480u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154484: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x154484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x154488: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x154488u;
    {
        const bool branch_taken_0x154488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15448Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154488u;
            // 0x15448c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154488) {
            ctx->pc = 0x1544C8u;
            goto label_1544c8;
        }
    }
    ctx->pc = 0x154490u;
    // 0x154490: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x154490u;
    {
        const bool branch_taken_0x154490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154490u;
            // 0x154494: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154490) {
            ctx->pc = 0x1544B4u;
            goto label_1544b4;
        }
    }
    ctx->pc = 0x154498u;
    // 0x154498: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x154498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x15449c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x15449cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1544a0: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x1544a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1544a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1544a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1544a8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1544a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1544ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1544ACu;
    {
        const bool branch_taken_0x1544ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1544B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1544ACu;
            // 0x1544b0: 0xaca20030  sw          $v0, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544ac) {
            ctx->pc = 0x1544C8u;
            goto label_1544c8;
        }
    }
    ctx->pc = 0x1544B4u;
label_1544b4:
    // 0x1544b4: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x1544b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1544b8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1544b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1544bc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1544bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1544c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1544c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1544c4: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1544c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_1544c8:
    // 0x1544c8: 0xdd430000  ld          $v1, 0x0($t2)
    ctx->pc = 0x1544c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1544cc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1544ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1544d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1544D0u;
    {
        const bool branch_taken_0x1544d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1544d0) {
            ctx->pc = 0x1544D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1544D0u;
            // 0x1544d4: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1544E4u;
            goto label_1544e4;
        }
    }
    ctx->pc = 0x1544D8u;
    // 0x1544d8: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1544d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1544dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1544DCu;
    {
        const bool branch_taken_0x1544dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1544E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1544DCu;
            // 0x1544e0: 0x34420082  ori         $v0, $v0, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)130);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544dc) {
            ctx->pc = 0x1544F4u;
            goto label_1544f4;
        }
    }
    ctx->pc = 0x1544E4u;
label_1544e4:
    // 0x1544e4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1544E4u;
    {
        const bool branch_taken_0x1544e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1544e4) {
            ctx->pc = 0x1544E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1544E4u;
            // 0x1544e8: 0xdd420000  ld          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1544FCu;
            goto label_1544fc;
        }
    }
    ctx->pc = 0x1544ECu;
    // 0x1544ec: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1544ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1544f0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1544f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1544f4:
    // 0x1544f4: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x1544f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x1544f8: 0xdd420000  ld          $v0, 0x0($t2)
    ctx->pc = 0x1544f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 0)));
label_1544fc:
    // 0x1544fc: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1544fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x154500: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154500u;
    {
        const bool branch_taken_0x154500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154500u;
            // 0x154504: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154500) {
            ctx->pc = 0x15450Cu;
            goto label_15450c;
        }
    }
    ctx->pc = 0x154508u;
    // 0x154508: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x154508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
label_15450c:
    // 0x15450c: 0x3e00008  jr          $ra
    ctx->pc = 0x15450Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15450Cu;
            // 0x154510: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154480u: goto label_154480;
            case 0x1544B4u: goto label_1544b4;
            case 0x1544C8u: goto label_1544c8;
            case 0x1544E4u: goto label_1544e4;
            case 0x1544F4u: goto label_1544f4;
            case 0x1544FCu: goto label_1544fc;
            case 0x15450Cu: goto label_15450c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x154514u;
    // 0x154514: 0x0  nop
    ctx->pc = 0x154514u;
    // NOP
}
