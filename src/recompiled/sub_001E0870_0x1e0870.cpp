#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0870
// Address: 0x1e0870 - 0x1e0a80
void sub_001E0870_0x1e0870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0870_0x1e0870");
#endif

    ctx->pc = 0x1e0870u;

    // 0x1e0870: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1e0870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1e0874: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1e0874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x1e0878: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x1e0878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x1e087c: 0x10a0006f  beqz        $a1, . + 4 + (0x6F << 2)
    ctx->pc = 0x1E087Cu;
    {
        const bool branch_taken_0x1e087c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E087Cu;
            // 0x1e0880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e087c) {
            ctx->pc = 0x1E0A3Cu;
            goto label_1e0a3c;
        }
    }
    ctx->pc = 0x1E0884u;
    // 0x1e0884: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x1e0884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1e0888: 0x54400079  bnel        $v0, $zero, . + 4 + (0x79 << 2)
    ctx->pc = 0x1E0888u;
    {
        const bool branch_taken_0x1e0888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0888) {
            ctx->pc = 0x1E088Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0888u;
            // 0x1e088c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0A70u;
            goto label_1e0a70;
        }
    }
    ctx->pc = 0x1E0890u;
    // 0x1e0890: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1e0890u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1e0894: 0x8e0301b0  lw          $v1, 0x1B0($s0)
    ctx->pc = 0x1e0894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x1e0898: 0x4be20b3d  vmr32.xyzw  $vf2, $vf1
    ctx->pc = 0x1e0898u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1e089c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e089cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e08a0: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x1e08a0u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x1e08a4: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1e08a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e08a8: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x1e08a8u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1e08ac: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e08acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e08b0: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1e08b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e08b4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1e08b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e08b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e08b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e08bc: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1e08bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e08c0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1e08c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e08c4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1e08c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1e08c8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1e08c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e08cc: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1e08ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e08d0: 0x40f809  jalr        $v0
    ctx->pc = 0x1E08D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E08D8u);
        ctx->pc = 0x1E08D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E08D0u;
            // 0x1e08d4: 0xfba40070  sqc2        $vf4, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E08D8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0A10u: goto label_1e0a10;
            case 0x1E0A3Cu: goto label_1e0a3c;
            case 0x1E0A70u: goto label_1e0a70;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E08D8u; }
            if (ctx->pc != 0x1E08D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E08D8u;
    // 0x1e08d8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e08d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e08dc: 0x4b010083  vaddw.x     $vf2, $vf0, $vf1w
    ctx->pc = 0x1e08dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e08e0: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1e08e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e08e4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e08e4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e08e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e08e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e08ec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e08ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e08f0: 0x70421b89  pcpyld      $v1, $v0, $v0
    ctx->pc = 0x1e08f0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x1e08f4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1e08f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1e08f8: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x1e08f8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1e08fc: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1e08fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0900: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1e0900u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1e0904: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1e0904u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0908: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1e0908u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e090c: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1e090cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0910: 0x4be1296a  vmul.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x1e0910u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e0914: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1e0914u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0918: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1e0918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e091c: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e091cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e0920: 0x4be1212a  vmul.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1e0920u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e0924: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1e0924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e0928: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1e0928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e092c: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1e092cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e0930: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1e0930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e0934: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e0934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e0938: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1e0938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e093c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1e093cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1e0940: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1e0940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1e0944: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1e0944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0948: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1e0948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1e094c: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x1e094cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e0950: 0xfba50090  sqc2        $vf5, 0x90($sp)
    ctx->pc = 0x1e0950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e0954: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x1e0954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e0958: 0x60f809  jalr        $v1
    ctx->pc = 0x1E0958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0960u);
        ctx->pc = 0x1E095Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0958u;
            // 0x1e095c: 0xfba400b0  sqc2        $vf4, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0960u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0A10u: goto label_1e0a10;
            case 0x1E0A3Cu: goto label_1e0a3c;
            case 0x1E0A70u: goto label_1e0a70;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0960u; }
            if (ctx->pc != 0x1E0960u) { return; }
        }
        }
    }
    ctx->pc = 0x1E0960u;
    // 0x1e0960: 0xdba100e0  lqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1e0960u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e0964: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1e0964u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0968: 0x700617c9  prot3w      $v0, $a2
    ctx->pc = 0x1e0968u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e096c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e096cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0970: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e0970u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0974: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1e0974u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e0978: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e0978u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e097c: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1e097cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0980: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1e0980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0984: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1e0984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1e0988: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e0988u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e098c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e098cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0990: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1e0990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0994: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1e0994u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1e0998: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1e0998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e099c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e099cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e09a0: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1e09a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1e09a4: 0xc04c992  jal         func_132648
    ctx->pc = 0x1E09A4u;
    SET_GPR_U32(ctx, 31, 0x1E09ACu);
    ctx->pc = 0x1E09A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E09A4u;
            // 0x1e09a8: 0x24846d48  addiu       $a0, $a0, 0x6D48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09ACu; }
        if (ctx->pc != 0x1E09ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09ACu; }
        if (ctx->pc != 0x1E09ACu) { return; }
    }
    ctx->pc = 0x1E09ACu;
    // 0x1e09ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e09acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09b0: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E09B0u;
    {
        const bool branch_taken_0x1e09b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E09B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E09B0u;
            // 0x1e09b4: 0xae0701b8  sw          $a3, 0x1B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e09b0) {
            ctx->pc = 0x1E0A10u;
            goto label_1e0a10;
        }
    }
    ctx->pc = 0x1E09B8u;
    // 0x1e09b8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1e09b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e09bc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1e09bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1e09c0: 0xdca4bdf8  ld          $a0, -0x4208($a1)
    ctx->pc = 0x1e09c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4294950392)));
    // 0x1e09c4: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x1e09c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1e09c8: 0x7ce20020  sq          $v0, 0x20($a3)
    ctx->pc = 0x1e09c8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 2));
    // 0x1e09cc: 0x84e30060  lh          $v1, 0x60($a3)
    ctx->pc = 0x1e09ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x1e09d0: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x1e09d0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x1e09d4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1e09d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e09d8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1e09d8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1e09dc: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x1e09dcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x1e09e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e09e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09e4: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1e09e4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1e09e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e09e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09ec: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1e09ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e09f0: 0x7ce20040  sq          $v0, 0x40($a3)
    ctx->pc = 0x1e09f0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 2));
    // 0x1e09f4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1e09f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e09f8: 0x7ce20050  sq          $v0, 0x50($a3)
    ctx->pc = 0x1e09f8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
    // 0x1e09fc: 0xfca4bdf8  sd          $a0, -0x4208($a1)
    ctx->pc = 0x1e09fcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294950392), GPR_U64(ctx, 4));
    // 0x1e0a00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e0a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0a04: 0x8e0501b8  lw          $a1, 0x1B8($s0)
    ctx->pc = 0x1e0a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1e0a08: 0xc04c518  jal         func_131460
    ctx->pc = 0x1E0A08u;
    SET_GPR_U32(ctx, 31, 0x1E0A10u);
    ctx->pc = 0x1E0A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A08u;
            // 0x1e0a0c: 0xfce30068  sd          $v1, 0x68($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A10u; }
        if (ctx->pc != 0x1E0A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131460_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A10u; }
        if (ctx->pc != 0x1E0A10u) { return; }
    }
    ctx->pc = 0x1E0A10u;
label_1e0a10:
    // 0x1e0a10: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1e0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1e0a14: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e0a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e0a18: 0xc4405ea0  lwc1        $f0, 0x5EA0($v0)
    ctx->pc = 0x1e0a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0a1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e0a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0a20: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x1e0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x1e0a24: 0xe60001bc  swc1        $f0, 0x1BC($s0)
    ctx->pc = 0x1e0a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
    // 0x1e0a28: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x1e0a28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x1e0a2c: 0x40f809  jalr        $v0
    ctx->pc = 0x1E0A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0A34u);
        ctx->pc = 0x1E0A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A2Cu;
            // 0x1e0a30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0A34u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0A10u: goto label_1e0a10;
            case 0x1E0A3Cu: goto label_1e0a3c;
            case 0x1E0A70u: goto label_1e0a70;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A34u; }
            if (ctx->pc != 0x1E0A34u) { return; }
        }
        }
    }
    ctx->pc = 0x1E0A34u;
    // 0x1e0a34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E0A34u;
    {
        const bool branch_taken_0x1e0a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A34u;
            // 0x1e0a38: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a34) {
            ctx->pc = 0x1E0A70u;
            goto label_1e0a70;
        }
    }
    ctx->pc = 0x1E0A3Cu;
label_1e0a3c:
    // 0x1e0a3c: 0x8e0401b8  lw          $a0, 0x1B8($s0)
    ctx->pc = 0x1e0a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1e0a40: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1E0A40u;
    {
        const bool branch_taken_0x1e0a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0a40) {
            ctx->pc = 0x1E0A44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A40u;
            // 0x1e0a44: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0A70u;
            goto label_1e0a70;
        }
    }
    ctx->pc = 0x1E0A48u;
    // 0x1e0a48: 0xc04c9da  jal         func_132768
    ctx->pc = 0x1E0A48u;
    SET_GPR_U32(ctx, 31, 0x1E0A50u);
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A50u; }
        if (ctx->pc != 0x1E0A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A50u; }
        if (ctx->pc != 0x1E0A50u) { return; }
    }
    ctx->pc = 0x1E0A50u;
    // 0x1e0a50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e0a54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a58: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x1e0a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x1e0a5c: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1e0a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1e0a60: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1e0a60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x1e0a64: 0x60f809  jalr        $v1
    ctx->pc = 0x1E0A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0A6Cu);
        ctx->pc = 0x1E0A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A64u;
            // 0x1e0a68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0A6Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0A10u: goto label_1e0a10;
            case 0x1E0A3Cu: goto label_1e0a3c;
            case 0x1E0A70u: goto label_1e0a70;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A6Cu; }
            if (ctx->pc != 0x1E0A6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E0A6Cu;
    // 0x1e0a6c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1e0a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1e0a70:
    // 0x1e0a70: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1e0a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e0a74: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A74u;
            // 0x1e0a78: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0A10u: goto label_1e0a10;
            case 0x1E0A3Cu: goto label_1e0a3c;
            case 0x1E0A70u: goto label_1e0a70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0A7Cu;
    // 0x1e0a7c: 0x0  nop
    ctx->pc = 0x1e0a7cu;
    // NOP
}
