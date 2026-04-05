#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169450
// Address: 0x169450 - 0x1696c8
void sub_00169450_0x169450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169450_0x169450");
#endif

    ctx->pc = 0x169450u;

    // 0x169450: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x169450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x169454: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x169454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x169458: 0x8ca2dd58  lw          $v0, -0x22A8($a1)
    ctx->pc = 0x169458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294958424)));
    // 0x16945c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16945Cu;
    {
        const bool branch_taken_0x16945c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x169460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16945Cu;
            // 0x169460: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16945c) {
            ctx->pc = 0x169474u;
            goto label_169474;
        }
    }
    ctx->pc = 0x169464u;
    // 0x169464: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x169464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x169468: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x169468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x16946c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16946Cu;
    {
        const bool branch_taken_0x16946c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16946c) {
            ctx->pc = 0x16948Cu;
            goto label_16948c;
        }
    }
    ctx->pc = 0x169474u;
label_169474:
    // 0x169474: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x169474u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x169478: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x169478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16947c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16947cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x169480: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x169480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x169484: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x169484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x169488: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x169488u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_16948c:
    // 0x16948c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x16948cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x169490: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x169490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x169494: 0x24a2dd58  addiu       $v0, $a1, -0x22A8
    ctx->pc = 0x169494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958424));
    // 0x169498: 0xc5000374  lwc1        $f0, 0x374($t0)
    ctx->pc = 0x169498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16949c: 0xc5020370  lwc1        $f2, 0x370($t0)
    ctx->pc = 0x16949cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1694a0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1694a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1694a4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1694a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1694a8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1694a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1694ac: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1694ACu;
    {
        const bool branch_taken_0x1694ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1694B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1694ACu;
            // 0x1694b0: 0x460009c2  mul.s       $f7, $f1, $f0 (Delay Slot)
        ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694ac) {
            ctx->pc = 0x1694C4u;
            goto label_1694c4;
        }
    }
    ctx->pc = 0x1694B4u;
    // 0x1694b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1694b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1694b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1694b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1694bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1694BCu;
    {
        const bool branch_taken_0x1694bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1694C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1694BCu;
            // 0x1694c0: 0xc50403a8  lwc1        $f4, 0x3A8($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694bc) {
            ctx->pc = 0x1694E0u;
            goto label_1694e0;
        }
    }
    ctx->pc = 0x1694C4u;
label_1694c4:
    // 0x1694c4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1694c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1694c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1694c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1694cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1694ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1694d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1694d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1694d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1694d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1694d8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1694d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1694dc: 0xc50403a8  lwc1        $f4, 0x3A8($t0)
    ctx->pc = 0x1694dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1694e0:
    // 0x1694e0: 0xc5030368  lwc1        $f3, 0x368($t0)
    ctx->pc = 0x1694e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1694e4: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x1694e4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x1694e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1694e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1694ec: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1694ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1694f0: 0xc502036c  lwc1        $f2, 0x36C($t0)
    ctx->pc = 0x1694f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1694f4: 0x3c010300  lui         $at, 0x300
    ctx->pc = 0x1694f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)768 << 16));
    // 0x1694f8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1694f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1694fc: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x1694fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x169500: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x169500u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x169504: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x169504u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x169508: 0x3c010d00  lui         $at, 0xD00
    ctx->pc = 0x169508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3328 << 16));
    // 0x16950c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x16950cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x169510: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x169510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x169514: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x169514u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x169518: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x169518u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16951c: 0x3c073300  lui         $a3, 0x3300
    ctx->pc = 0x16951cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)13056 << 16));
    // 0x169520: 0x44063800  mfc1        $a2, $f7
    ctx->pc = 0x169520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x169524: 0x70662b89  pcpyld      $a1, $v1, $a2
    ctx->pc = 0x169524u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x169528: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x169528u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x16952c: 0x70e91b89  pcpyld      $v1, $a3, $t1
    ctx->pc = 0x16952cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 9)));
    // 0x169530: 0x706514c8  ppacw       $v0, $v1, $a1
    ctx->pc = 0x169530u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x169534: 0x7d020330  sq          $v0, 0x330($t0)
    ctx->pc = 0x169534u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 816), GPR_VEC(ctx, 2));
    // 0x169538: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x169538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16953c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x16953cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x169540: 0x3c0644ff  lui         $a2, 0x44FF
    ctx->pc = 0x169540u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17663 << 16));
    // 0x169544: 0x34c6f000  ori         $a2, $a2, 0xF000
    ctx->pc = 0x169544u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)61440);
    // 0x169548: 0x3c0244ff  lui         $v0, 0x44FF
    ctx->pc = 0x169548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17663 << 16));
    // 0x16954c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x16954cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x169550: 0x70c22389  pcpyld      $a0, $a2, $v0
    ctx->pc = 0x169550u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x169554: 0x70641cc8  ppacw       $v1, $v1, $a0
    ctx->pc = 0x169554u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x169558: 0x7d030340  sq          $v1, 0x340($t0)
    ctx->pc = 0x169558u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 832), GPR_VEC(ctx, 3));
    // 0x16955c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x16955cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x169560: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x169560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x169564: 0x3c064900  lui         $a2, 0x4900
    ctx->pc = 0x169564u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18688 << 16));
    // 0x169568: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x169568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x16956c: 0x3c074900  lui         $a3, 0x4900
    ctx->pc = 0x16956cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)18688 << 16));
    // 0x169570: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x169570u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x169574: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x169574u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x169578: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x169578u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16957c: 0x44091800  mfc1        $t1, $f3
    ctx->pc = 0x16957cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x169580: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x169580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x169584: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x169584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169588: 0x71491389  pcpyld      $v0, $t2, $t1
    ctx->pc = 0x169588u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x16958c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x16958cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x169590: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x169590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x169594: 0x7d020350  sq          $v0, 0x350($t0)
    ctx->pc = 0x169594u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 848), GPR_VEC(ctx, 2));
    // 0x169598: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x169598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x16959c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x16959cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1695a0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1695a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1695a4: 0x71471389  pcpyld      $v0, $t2, $a3
    ctx->pc = 0x1695a4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x1695a8: 0x70454cc8  ppacw       $t1, $v0, $a1
    ctx->pc = 0x1695a8u;
    SET_GPR_VEC(ctx, 9, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x1695ac: 0x48a92000  qmtc2.ni    $t1, $vf4
    ctx->pc = 0x1695acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x1695b0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1695b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1695b4: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1695b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1695b8: 0xf9040300  sqc2        $vf4, 0x300($t0)
    ctx->pc = 0x1695b8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 768), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1695bc: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x1695bcu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1695c0: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x1695c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x1695c4: 0x3c014900  lui         $at, 0x4900
    ctx->pc = 0x1695c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18688 << 16));
    // 0x1695c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1695c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1695cc: 0x7d020310  sq          $v0, 0x310($t0)
    ctx->pc = 0x1695ccu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 784), GPR_VEC(ctx, 2));
    // 0x1695d0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1695d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1695d4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1695d4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1695d8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1695d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1695dc: 0x3c044500  lui         $a0, 0x4500
    ctx->pc = 0x1695dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17664 << 16));
    // 0x1695e0: 0x3c054500  lui         $a1, 0x4500
    ctx->pc = 0x1695e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17664 << 16));
    // 0x1695e4: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1695e4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1695e8: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1695e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1695ec: 0x44062000  mfc1        $a2, $f4
    ctx->pc = 0x1695ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1695f0: 0x71461389  pcpyld      $v0, $t2, $a2
    ctx->pc = 0x1695f0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 6)));
    // 0x1695f4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1695f4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1695f8: 0x250501c0  addiu       $a1, $t0, 0x1C0
    ctx->pc = 0x1695f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 448));
    // 0x1695fc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1695fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x169600: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x169600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x169604: 0x7d020320  sq          $v0, 0x320($t0)
    ctx->pc = 0x169604u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 800), GPR_VEC(ctx, 2));
    // 0x169608: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x169608u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x16960c: 0x4b040840  vaddx.x     $vf1, $vf1, $vf4x
    ctx->pc = 0x16960cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x169610: 0x4be51b3c  vmove.xyzw  $vf5, $vf3
    ctx->pc = 0x169610u;
    ctx->vu0_vf[5] = ctx->vu0_vf[3];
    // 0x169614: 0x4a842941  vaddy.y     $vf5, $vf5, $vf4y
    ctx->pc = 0x169614u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169618: 0x4be21b3c  vmove.xyzw  $vf2, $vf3
    ctx->pc = 0x169618u;
    ctx->vu0_vf[2] = ctx->vu0_vf[3];
    // 0x16961c: 0x4a441082  vaddz.z     $vf2, $vf2, $vf4z
    ctx->pc = 0x16961cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x169620: 0x70021f89  pexew       $v1, $v0
    ctx->pc = 0x169620u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x169624: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x169624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169628: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x169628u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16962c: 0x700237c9  prot3w      $a2, $v0
    ctx->pc = 0x16962cu;
    SET_GPR_VEC(ctx, 6, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x169630: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x169630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169634: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x169634u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x169638: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x169638u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x16963c: 0x71241389  pcpyld      $v0, $t1, $a0
    ctx->pc = 0x16963cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 4)));
    // 0x169640: 0xf90101c0  sqc2        $vf1, 0x1C0($t0)
    ctx->pc = 0x169640u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 448), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169644: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x169644u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x169648: 0x25060200  addiu       $a2, $t0, 0x200
    ctx->pc = 0x169648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
    // 0x16964c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x16964cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x169650: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x169650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x169654: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x169654u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169658: 0xf8a20020  sqc2        $vf2, 0x20($a1)
    ctx->pc = 0x169658u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16965c: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x16965cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x169660: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x169660u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x169664: 0xd9010310  lqc2        $vf1, 0x310($t0)
    ctx->pc = 0x169664u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 784)));
    // 0x169668: 0x4be21b3c  vmove.xyzw  $vf2, $vf3
    ctx->pc = 0x169668u;
    ctx->vu0_vf[2] = ctx->vu0_vf[3];
    // 0x16966c: 0x4b011080  vaddx.x     $vf2, $vf2, $vf1x
    ctx->pc = 0x16966cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x169670: 0x4be41b3c  vmove.xyzw  $vf4, $vf3
    ctx->pc = 0x169670u;
    ctx->vu0_vf[4] = ctx->vu0_vf[3];
    // 0x169674: 0x4a812101  vaddy.y     $vf4, $vf4, $vf1y
    ctx->pc = 0x169674u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x169678: 0x4a4118c2  vaddz.z     $vf3, $vf3, $vf1z
    ctx->pc = 0x169678u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16967c: 0x79020320  lq          $v0, 0x320($t0)
    ctx->pc = 0x16967cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 800)));
    // 0x169680: 0x70021f89  pexew       $v1, $v0
    ctx->pc = 0x169680u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x169684: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x169684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169688: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x169688u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16968c: 0x70022fc9  prot3w      $a1, $v0
    ctx->pc = 0x16968cu;
    SET_GPR_VEC(ctx, 5, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x169690: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x169690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169694: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x169694u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x169698: 0x71241389  pcpyld      $v0, $t1, $a0
    ctx->pc = 0x169698u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 4)));
    // 0x16969c: 0xf9020200  sqc2        $vf2, 0x200($t0)
    ctx->pc = 0x16969cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 512), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1696a0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1696a0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1696a4: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1696a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1696a8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1696a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1696ac: 0xf8c40010  sqc2        $vf4, 0x10($a2)
    ctx->pc = 0x1696acu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1696b0: 0xf8c30020  sqc2        $vf3, 0x20($a2)
    ctx->pc = 0x1696b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1696b4: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x1696b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1696b8: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x1696b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x1696bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1696BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1696C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1696BCu;
            // 0x1696c0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169474u: goto label_169474;
            case 0x16948Cu: goto label_16948c;
            case 0x1694C4u: goto label_1694c4;
            case 0x1694E0u: goto label_1694e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1696C4u;
    // 0x1696c4: 0x0  nop
    ctx->pc = 0x1696c4u;
    // NOP
}
