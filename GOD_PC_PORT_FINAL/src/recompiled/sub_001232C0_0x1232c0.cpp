#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001232C0
// Address: 0x1232c0 - 0x1237e8
void sub_001232C0_0x1232c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001232C0_0x1232c0");
#endif

    ctx->pc = 0x1232c0u;

    // 0x1232c0: 0x27bdfaa0  addiu       $sp, $sp, -0x560
    ctx->pc = 0x1232c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965920));
    // 0x1232c4: 0x7fb30520  sq          $s3, 0x520($sp)
    ctx->pc = 0x1232c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 19));
    // 0x1232c8: 0x7fb00550  sq          $s0, 0x550($sp)
    ctx->pc = 0x1232c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 16));
    // 0x1232cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1232ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1232d0: 0x7fb10540  sq          $s1, 0x540($sp)
    ctx->pc = 0x1232d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 17));
    // 0x1232d4: 0x7fb20530  sq          $s2, 0x530($sp)
    ctx->pc = 0x1232d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 18));
    // 0x1232d8: 0x7fb40510  sq          $s4, 0x510($sp)
    ctx->pc = 0x1232d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 20));
    // 0x1232dc: 0x7fb50500  sq          $s5, 0x500($sp)
    ctx->pc = 0x1232dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 21));
    // 0x1232e0: 0xffbf04f0  sd          $ra, 0x4F0($sp)
    ctx->pc = 0x1232e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1264), GPR_U64(ctx, 31));
    // 0x1232e4: 0xc04c050  jal         func_130140
    ctx->pc = 0x1232E4u;
    SET_GPR_U32(ctx, 31, 0x1232ECu);
    ctx->pc = 0x1232E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1232E4u;
            // 0x1232e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1232ECu; }
        if (ctx->pc != 0x1232ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130140_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1232ECu; }
        if (ctx->pc != 0x1232ECu) { return; }
    }
    ctx->pc = 0x1232ECu;
    // 0x1232ec: 0x4be5033c  vmove.xyzw  $vf5, $vf0
    ctx->pc = 0x1232ecu;
    ctx->vu0_vf[5] = ctx->vu0_vf[0];
    // 0x1232f0: 0x4be42b3d  vmr32.xyzw  $vf4, $vf5
    ctx->pc = 0x1232f0u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,1));
    // 0x1232f4: 0xfba50080  sqc2        $vf5, 0x80($sp)
    ctx->pc = 0x1232f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1232f8: 0x4be2233d  vmr32.xyzw  $vf2, $vf4
    ctx->pc = 0x1232f8u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x1232fc: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1232fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123300: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x123300u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x123304: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x123304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123308: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x123308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12330c: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x12330cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x123310: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x123310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123314: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x123314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123318: 0xfba50070  sqc2        $vf5, 0x70($sp)
    ctx->pc = 0x123318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12331c: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x12331cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x123320: 0x3c054180  lui         $a1, 0x4180
    ctx->pc = 0x123320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16768 << 16));
    // 0x123324: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x123324u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x123328: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x123328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x12332c: 0x3c054180  lui         $a1, 0x4180
    ctx->pc = 0x12332cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16768 << 16));
    // 0x123330: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x123330u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x123334: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x123334u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x123338: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x123338u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12333c: 0x4be129aa  vmul.xyzw   $vf6, $vf5, $vf1
    ctx->pc = 0x12333cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x123340: 0x4be119ea  vmul.xyzw   $vf7, $vf3, $vf1
    ctx->pc = 0x123340u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x123344: 0x4be1122a  vmul.xyzw   $vf8, $vf2, $vf1
    ctx->pc = 0x123344u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x123348: 0x4be1226a  vmul.xyzw   $vf9, $vf4, $vf1
    ctx->pc = 0x123348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x12334c: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x12334cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x123350: 0xfba104d0  sqc2        $vf1, 0x4D0($sp)
    ctx->pc = 0x123350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x123354: 0xfba700d0  sqc2        $vf7, 0xD0($sp)
    ctx->pc = 0x123354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x123358: 0xfba70040  sqc2        $vf7, 0x40($sp)
    ctx->pc = 0x123358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12335c: 0xfba800e0  sqc2        $vf8, 0xE0($sp)
    ctx->pc = 0x12335cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x123360: 0xfba80050  sqc2        $vf8, 0x50($sp)
    ctx->pc = 0x123360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x123364: 0xfba900f0  sqc2        $vf9, 0xF0($sp)
    ctx->pc = 0x123364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x123368: 0xfba90060  sqc2        $vf9, 0x60($sp)
    ctx->pc = 0x123368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x12336c: 0xfba60100  sqc2        $vf6, 0x100($sp)
    ctx->pc = 0x12336cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x123370: 0xfba60070  sqc2        $vf6, 0x70($sp)
    ctx->pc = 0x123370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x123374: 0xfba50150  sqc2        $vf5, 0x150($sp)
    ctx->pc = 0x123374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x123378: 0xfba50140  sqc2        $vf5, 0x140($sp)
    ctx->pc = 0x123378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12337c: 0xfba40160  sqc2        $vf4, 0x160($sp)
    ctx->pc = 0x12337cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123380: 0xfba20170  sqc2        $vf2, 0x170($sp)
    ctx->pc = 0x123380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123384: 0xfba30180  sqc2        $vf3, 0x180($sp)
    ctx->pc = 0x123384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x123388: 0xfba30110  sqc2        $vf3, 0x110($sp)
    ctx->pc = 0x123388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12338c: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x12338cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123390: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x123390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123394: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x123394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x123398: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x123398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x12339c: 0x8c47002c  lw          $a3, 0x2C($v0)
    ctx->pc = 0x12339cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1233a0: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x1233a0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1233a4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1233a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1233a8: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1233a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1233ac: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x1233acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x1233b0: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x1233b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1233b4: 0x8e92bde8  lw          $s2, -0x4218($s4)
    ctx->pc = 0x1233b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950376)));
    // 0x1233b8: 0x70433cc8  ppacw       $a3, $v0, $v1
    ctx->pc = 0x1233b8u;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1233bc: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1233bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1233c0: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x1233c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1233c4: 0xfba104e0  sqc2        $vf1, 0x4E0($sp)
    ctx->pc = 0x1233c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1233c8: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x1233c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1233cc: 0x4be339bc  vmulax.xyzw $ACC, $vf7, $vf3x
    ctx->pc = 0x1233ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1233d0: 0x4be340bd  vmadday.xyzw $ACC, $vf8, $vf3y
    ctx->pc = 0x1233d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1233d4: 0x4be348be  vmaddaz.xyzw $ACC, $vf9, $vf3z
    ctx->pc = 0x1233d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1233d8: 0x4be330cb  vmaddw.xyzw $vf3, $vf6, $vf3w
    ctx->pc = 0x1233d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1233dc: 0x4be239bc  vmulax.xyzw $ACC, $vf7, $vf2x
    ctx->pc = 0x1233dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1233e0: 0xfba30260  sqc2        $vf3, 0x260($sp)
    ctx->pc = 0x1233e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1233e4: 0x4be240bd  vmadday.xyzw $ACC, $vf8, $vf2y
    ctx->pc = 0x1233e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1233e8: 0x4be248be  vmaddaz.xyzw $ACC, $vf9, $vf2z
    ctx->pc = 0x1233e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1233ec: 0x4be2308b  vmaddw.xyzw $vf2, $vf6, $vf2w
    ctx->pc = 0x1233ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1233f0: 0x4be439bc  vmulax.xyzw $ACC, $vf7, $vf4x
    ctx->pc = 0x1233f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1233f4: 0xfba20270  sqc2        $vf2, 0x270($sp)
    ctx->pc = 0x1233f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1233f8: 0x4be440bd  vmadday.xyzw $ACC, $vf8, $vf4y
    ctx->pc = 0x1233f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1233fc: 0x4be448be  vmaddaz.xyzw $ACC, $vf9, $vf4z
    ctx->pc = 0x1233fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123400: 0x4be4310b  vmaddw.xyzw $vf4, $vf6, $vf4w
    ctx->pc = 0x123400u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123404: 0x4be139bc  vmulax.xyzw $ACC, $vf7, $vf1x
    ctx->pc = 0x123404u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123408: 0xfba40280  sqc2        $vf4, 0x280($sp)
    ctx->pc = 0x123408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12340c: 0x4be140bd  vmadday.xyzw $ACC, $vf8, $vf1y
    ctx->pc = 0x12340cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123410: 0x4be148be  vmaddaz.xyzw $ACC, $vf9, $vf1z
    ctx->pc = 0x123410u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123414: 0x4be1318b  vmaddw.xyzw $vf6, $vf6, $vf1w
    ctx->pc = 0x123414u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123418: 0xfba60290  sqc2        $vf6, 0x290($sp)
    ctx->pc = 0x123418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12341c: 0xfba30220  sqc2        $vf3, 0x220($sp)
    ctx->pc = 0x12341cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x123420: 0xfba20230  sqc2        $vf2, 0x230($sp)
    ctx->pc = 0x123420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123424: 0xfba40240  sqc2        $vf4, 0x240($sp)
    ctx->pc = 0x123424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123428: 0xfba60250  sqc2        $vf6, 0x250($sp)
    ctx->pc = 0x123428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12342c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x12342cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123430: 0xdba70010  lqc2        $vf7, 0x10($sp)
    ctx->pc = 0x123430u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123434: 0xdba80020  lqc2        $vf8, 0x20($sp)
    ctx->pc = 0x123434u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123438: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x123438u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12343c: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x12343cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123440: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x123440u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123444: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x123444u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123448: 0x4be308cb  vmaddw.xyzw $vf3, $vf1, $vf3w
    ctx->pc = 0x123448u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x12344c: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x12344cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123450: 0xfba302a0  sqc2        $vf3, 0x2A0($sp)
    ctx->pc = 0x123450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x123454: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x123454u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123458: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x123458u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12345c: 0x4be2088b  vmaddw.xyzw $vf2, $vf1, $vf2w
    ctx->pc = 0x12345cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123460: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x123460u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123464: 0xfba202b0  sqc2        $vf2, 0x2B0($sp)
    ctx->pc = 0x123464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123468: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x123468u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12346c: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x12346cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123470: 0x4be4090b  vmaddw.xyzw $vf4, $vf1, $vf4w
    ctx->pc = 0x123470u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123474: 0x4be629bc  vmulax.xyzw $ACC, $vf5, $vf6x
    ctx->pc = 0x123474u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123478: 0xfba402c0  sqc2        $vf4, 0x2C0($sp)
    ctx->pc = 0x123478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12347c: 0x4be638bd  vmadday.xyzw $ACC, $vf7, $vf6y
    ctx->pc = 0x12347cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123480: 0x4be640be  vmaddaz.xyzw $ACC, $vf8, $vf6z
    ctx->pc = 0x123480u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123484: 0x4be6084b  vmaddw.xyzw $vf1, $vf1, $vf6w
    ctx->pc = 0x123484u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123488: 0xfba102d0  sqc2        $vf1, 0x2D0($sp)
    ctx->pc = 0x123488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12348c: 0xfba301e0  sqc2        $vf3, 0x1E0($sp)
    ctx->pc = 0x12348cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x123490: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x123490u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x123494: 0xdea5bdf8  ld          $a1, -0x4208($s5)
    ctx->pc = 0x123494u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 4294950392)));
    // 0x123498: 0xfba201f0  sqc2        $vf2, 0x1F0($sp)
    ctx->pc = 0x123498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12349c: 0xfba40200  sqc2        $vf4, 0x200($sp)
    ctx->pc = 0x12349cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1234a0: 0xfba10210  sqc2        $vf1, 0x210($sp)
    ctx->pc = 0x1234a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1234a4: 0x8e7000a8  lw          $s0, 0xA8($s3)
    ctx->pc = 0x1234a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
    // 0x1234a8: 0xde020068  ld          $v0, 0x68($s0)
    ctx->pc = 0x1234a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1234ac: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1234ACu;
    {
        const bool branch_taken_0x1234ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1234ac) {
            ctx->pc = 0x1234B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1234ACu;
            // 0x1234b0: 0xde030068  ld          $v1, 0x68($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1234C0u;
            goto label_1234c0;
        }
    }
    ctx->pc = 0x1234B4u;
    // 0x1234b4: 0xc056f5e  jal         func_15BD78
    ctx->pc = 0x1234B4u;
    SET_GPR_U32(ctx, 31, 0x1234BCu);
    ctx->pc = 0x1234B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1234B4u;
            // 0x1234b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD78u;
    if (runtime->hasFunction(0x15BD78u)) {
        auto targetFn = runtime->lookupFunction(0x15BD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1234BCu; }
        if (ctx->pc != 0x1234BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BD78_0x15bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1234BCu; }
        if (ctx->pc != 0x1234BCu) { return; }
    }
    ctx->pc = 0x1234BCu;
    // 0x1234bc: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1234bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
label_1234c0:
    // 0x1234c0: 0xde020140  ld          $v0, 0x140($s0)
    ctx->pc = 0x1234c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x1234c4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1234c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1234c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1234C8u;
    {
        const bool branch_taken_0x1234c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1234CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1234C8u;
            // 0x1234cc: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234c8) {
            ctx->pc = 0x1234FCu;
            goto label_1234fc;
        }
    }
    ctx->pc = 0x1234D0u;
    // 0x1234d0: 0xfe030140  sd          $v1, 0x140($s0)
    ctx->pc = 0x1234d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 320), GPR_U64(ctx, 3));
    // 0x1234d4: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x1234D4u;
    SET_GPR_U32(ctx, 31, 0x1234DCu);
    ctx->pc = 0x1234D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1234D4u;
            // 0x1234d8: 0x27a402e0  addiu       $a0, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1234DCu; }
        if (ctx->pc != 0x1234DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1234DCu; }
        if (ctx->pc != 0x1234DCu) { return; }
    }
    ctx->pc = 0x1234DCu;
    // 0x1234dc: 0x7ba202e0  lq          $v0, 0x2E0($sp)
    ctx->pc = 0x1234dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1234e0: 0x7e0200e0  sq          $v0, 0xE0($s0)
    ctx->pc = 0x1234e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
    // 0x1234e4: 0x7ba202f0  lq          $v0, 0x2F0($sp)
    ctx->pc = 0x1234e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1234e8: 0x7e0200f0  sq          $v0, 0xF0($s0)
    ctx->pc = 0x1234e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), GPR_VEC(ctx, 2));
    // 0x1234ec: 0x7ba20300  lq          $v0, 0x300($sp)
    ctx->pc = 0x1234ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1234f0: 0x7e020100  sq          $v0, 0x100($s0)
    ctx->pc = 0x1234f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), GPR_VEC(ctx, 2));
    // 0x1234f4: 0x7ba20310  lq          $v0, 0x310($sp)
    ctx->pc = 0x1234f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1234f8: 0x7e020110  sq          $v0, 0x110($s0)
    ctx->pc = 0x1234f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 272), GPR_VEC(ctx, 2));
label_1234fc:
    // 0x1234fc: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1234fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x123500: 0xda0600e0  lqc2        $vf6, 0xE0($s0)
    ctx->pc = 0x123500u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x123504: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x123504u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x123508: 0xd8470010  lqc2        $vf7, 0x10($v0)
    ctx->pc = 0x123508u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12350c: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x12350cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x123510: 0xdba301e0  lqc2        $vf3, 0x1E0($sp)
    ctx->pc = 0x123510u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x123514: 0xdba101f0  lqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x123514u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x123518: 0xdba20200  lqc2        $vf2, 0x200($sp)
    ctx->pc = 0x123518u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x12351c: 0xdba50210  lqc2        $vf5, 0x210($sp)
    ctx->pc = 0x12351cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x123520: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x123520u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123524: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x123524u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123528: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x123528u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12352c: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x12352cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123530: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x123530u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123534: 0xfba30320  sqc2        $vf3, 0x320($sp)
    ctx->pc = 0x123534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x123538: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x123538u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12353c: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x12353cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123540: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x123540u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123544: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x123544u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123548: 0xfba10330  sqc2        $vf1, 0x330($sp)
    ctx->pc = 0x123548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12354c: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x12354cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123550: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x123550u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123554: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x123554u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123558: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x123558u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x12355c: 0xfba20340  sqc2        $vf2, 0x340($sp)
    ctx->pc = 0x12355cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123560: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x123560u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123564: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x123564u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123568: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x123568u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x12356c: 0xfba40350  sqc2        $vf4, 0x350($sp)
    ctx->pc = 0x12356cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123570: 0xfba301a0  sqc2        $vf3, 0x1A0($sp)
    ctx->pc = 0x123570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x123574: 0xfba101b0  sqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x123574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x123578: 0xfba201c0  sqc2        $vf2, 0x1C0($sp)
    ctx->pc = 0x123578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12357c: 0xfba401d0  sqc2        $vf4, 0x1D0($sp)
    ctx->pc = 0x12357cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123580: 0xfa4300c0  sqc2        $vf3, 0xC0($s2)
    ctx->pc = 0x123580u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x123584: 0x8e91bde8  lw          $s1, -0x4218($s4)
    ctx->pc = 0x123584u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950376)));
    // 0x123588: 0x7ba201b0  lq          $v0, 0x1B0($sp)
    ctx->pc = 0x123588u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x12358c: 0x262300c0  addiu       $v1, $s1, 0xC0
    ctx->pc = 0x12358cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x123590: 0x7e4200d0  sq          $v0, 0xD0($s2)
    ctx->pc = 0x123590u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 208), GPR_VEC(ctx, 2));
    // 0x123594: 0x7ba201c0  lq          $v0, 0x1C0($sp)
    ctx->pc = 0x123594u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x123598: 0x7e4200e0  sq          $v0, 0xE0($s2)
    ctx->pc = 0x123598u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 224), GPR_VEC(ctx, 2));
    // 0x12359c: 0x7ba201d0  lq          $v0, 0x1D0($sp)
    ctx->pc = 0x12359cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1235a0: 0x7e4200f0  sq          $v0, 0xF0($s2)
    ctx->pc = 0x1235a0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 240), GPR_VEC(ctx, 2));
    // 0x1235a4: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x1235a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1235a8: 0xda620080  lqc2        $vf2, 0x80($s3)
    ctx->pc = 0x1235a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1235ac: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1235acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1235b0: 0xf8610030  sqc2        $vf1, 0x30($v1)
    ctx->pc = 0x1235b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1235b4: 0xdba70000  lqc2        $vf7, 0x0($sp)
    ctx->pc = 0x1235b4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1235b8: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x1235b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1235bc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1235bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1235c0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1235c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1235c4: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x1235c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1235c8: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1235c8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1235cc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1235ccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1235d0: 0x4bc039dc  vmulq.xyz   $vf7, $vf7, $Q
    ctx->pc = 0x1235d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1235d4: 0x4a0002ff  vnop
    ctx->pc = 0x1235d4u;
    // NOP operation, no action needed for VU0
    // 0x1235d8: 0x4a0002ff  vnop
    ctx->pc = 0x1235d8u;
    // NOP operation, no action needed for VU0
    // 0x1235dc: 0x4be528aa  vmul.xyzw   $vf2, $vf5, $vf5
    ctx->pc = 0x1235dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1235e0: 0xfba70360  sqc2        $vf7, 0x360($sp)
    ctx->pc = 0x1235e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1235e4: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x1235e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1235e8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1235e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1235ec: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1235ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1235f0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1235f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1235f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1235f4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1235f8: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x1235f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1235fc: 0x4a0002ff  vnop
    ctx->pc = 0x1235fcu;
    // NOP operation, no action needed for VU0
    // 0x123600: 0x4a0002ff  vnop
    ctx->pc = 0x123600u;
    // NOP operation, no action needed for VU0
    // 0x123604: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x123604u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123608: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x123608u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12360c: 0xfba50370  sqc2        $vf5, 0x370($sp)
    ctx->pc = 0x12360cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x123610: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x123610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x123614: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x123614u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123618: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x123618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12361c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x12361cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x123620: 0x4a0003bf  vwaitq
    ctx->pc = 0x123620u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x123624: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x123624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x123628: 0x4a0002ff  vnop
    ctx->pc = 0x123628u;
    // NOP operation, no action needed for VU0
    // 0x12362c: 0x4a0002ff  vnop
    ctx->pc = 0x12362cu;
    // NOP operation, no action needed for VU0
    // 0x123630: 0xfba20380  sqc2        $vf2, 0x380($sp)
    ctx->pc = 0x123630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123634: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x123634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123638: 0xdba60030  lqc2        $vf6, 0x30($sp)
    ctx->pc = 0x123638u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12363c: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x12363cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x123640: 0xdba30050  lqc2        $vf3, 0x50($sp)
    ctx->pc = 0x123640u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x123644: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x123644u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x123648: 0xdba80070  lqc2        $vf8, 0x70($sp)
    ctx->pc = 0x123648u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12364c: 0x4be139bc  vmulax.xyzw $ACC, $vf7, $vf1x
    ctx->pc = 0x12364cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123650: 0x4be128bd  vmadday.xyzw $ACC, $vf5, $vf1y
    ctx->pc = 0x123650u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123654: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x123654u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123658: 0x4be1304b  vmaddw.xyzw $vf1, $vf6, $vf1w
    ctx->pc = 0x123658u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x12365c: 0x4be339bc  vmulax.xyzw $ACC, $vf7, $vf3x
    ctx->pc = 0x12365cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123660: 0xfba10410  sqc2        $vf1, 0x410($sp)
    ctx->pc = 0x123660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x123664: 0x4be328bd  vmadday.xyzw $ACC, $vf5, $vf3y
    ctx->pc = 0x123664u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123668: 0x4be310be  vmaddaz.xyzw $ACC, $vf2, $vf3z
    ctx->pc = 0x123668u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12366c: 0x4be330cb  vmaddw.xyzw $vf3, $vf6, $vf3w
    ctx->pc = 0x12366cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123670: 0x4be439bc  vmulax.xyzw $ACC, $vf7, $vf4x
    ctx->pc = 0x123670u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123674: 0xfba30420  sqc2        $vf3, 0x420($sp)
    ctx->pc = 0x123674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x123678: 0x4be428bd  vmadday.xyzw $ACC, $vf5, $vf4y
    ctx->pc = 0x123678u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12367c: 0x4be410be  vmaddaz.xyzw $ACC, $vf2, $vf4z
    ctx->pc = 0x12367cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123680: 0x4be4310b  vmaddw.xyzw $vf4, $vf6, $vf4w
    ctx->pc = 0x123680u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123684: 0x4be839bc  vmulax.xyzw $ACC, $vf7, $vf8x
    ctx->pc = 0x123684u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123688: 0xfba40430  sqc2        $vf4, 0x430($sp)
    ctx->pc = 0x123688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12368c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12368cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123690: 0x4be810be  vmaddaz.xyzw $ACC, $vf2, $vf8z
    ctx->pc = 0x123690u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123694: 0x4be8318b  vmaddw.xyzw $vf6, $vf6, $vf8w
    ctx->pc = 0x123694u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123698: 0xfba60440  sqc2        $vf6, 0x440($sp)
    ctx->pc = 0x123698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12369c: 0xfba103d0  sqc2        $vf1, 0x3D0($sp)
    ctx->pc = 0x12369cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1236a0: 0xfba303e0  sqc2        $vf3, 0x3E0($sp)
    ctx->pc = 0x1236a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1236a4: 0xfba403f0  sqc2        $vf4, 0x3F0($sp)
    ctx->pc = 0x1236a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1236a8: 0xfba60400  sqc2        $vf6, 0x400($sp)
    ctx->pc = 0x1236a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1236ac: 0xdea5bdf8  ld          $a1, -0x4208($s5)
    ctx->pc = 0x1236acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 4294950392)));
    // 0x1236b0: 0x8e7000a8  lw          $s0, 0xA8($s3)
    ctx->pc = 0x1236b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
    // 0x1236b4: 0xde020068  ld          $v0, 0x68($s0)
    ctx->pc = 0x1236b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1236b8: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1236B8u;
    {
        const bool branch_taken_0x1236b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1236b8) {
            ctx->pc = 0x1236BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1236B8u;
            // 0x1236bc: 0xde030068  ld          $v1, 0x68($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1236D0u;
            goto label_1236d0;
        }
    }
    ctx->pc = 0x1236C0u;
    // 0x1236c0: 0xc056f5e  jal         func_15BD78
    ctx->pc = 0x1236C0u;
    SET_GPR_U32(ctx, 31, 0x1236C8u);
    ctx->pc = 0x1236C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1236C0u;
            // 0x1236c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD78u;
    if (runtime->hasFunction(0x15BD78u)) {
        auto targetFn = runtime->lookupFunction(0x15BD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1236C8u; }
        if (ctx->pc != 0x1236C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BD78_0x15bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1236C8u; }
        if (ctx->pc != 0x1236C8u) { return; }
    }
    ctx->pc = 0x1236C8u;
    // 0x1236c8: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1236c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1236cc: 0x0  nop
    ctx->pc = 0x1236ccu;
    // NOP
label_1236d0:
    // 0x1236d0: 0xde020140  ld          $v0, 0x140($s0)
    ctx->pc = 0x1236d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x1236d4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1236d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1236d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1236D8u;
    {
        const bool branch_taken_0x1236d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1236DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1236D8u;
            // 0x1236dc: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236d8) {
            ctx->pc = 0x12370Cu;
            goto label_12370c;
        }
    }
    ctx->pc = 0x1236E0u;
    // 0x1236e0: 0xfe030140  sd          $v1, 0x140($s0)
    ctx->pc = 0x1236e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 320), GPR_U64(ctx, 3));
    // 0x1236e4: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x1236E4u;
    SET_GPR_U32(ctx, 31, 0x1236ECu);
    ctx->pc = 0x1236E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1236E4u;
            // 0x1236e8: 0x27a40450  addiu       $a0, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1236ECu; }
        if (ctx->pc != 0x1236ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1236ECu; }
        if (ctx->pc != 0x1236ECu) { return; }
    }
    ctx->pc = 0x1236ECu;
    // 0x1236ec: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x1236ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x1236f0: 0x7e0200e0  sq          $v0, 0xE0($s0)
    ctx->pc = 0x1236f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
    // 0x1236f4: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x1236f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x1236f8: 0x7e0200f0  sq          $v0, 0xF0($s0)
    ctx->pc = 0x1236f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), GPR_VEC(ctx, 2));
    // 0x1236fc: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x1236fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x123700: 0x7e020100  sq          $v0, 0x100($s0)
    ctx->pc = 0x123700u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), GPR_VEC(ctx, 2));
    // 0x123704: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x123704u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x123708: 0x7e020110  sq          $v0, 0x110($s0)
    ctx->pc = 0x123708u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 272), GPR_VEC(ctx, 2));
label_12370c:
    // 0x12370c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x12370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x123710: 0xda0600e0  lqc2        $vf6, 0xE0($s0)
    ctx->pc = 0x123710u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x123714: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x123714u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x123718: 0xd8470010  lqc2        $vf7, 0x10($v0)
    ctx->pc = 0x123718u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12371c: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x12371cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x123720: 0xdba303d0  lqc2        $vf3, 0x3D0($sp)
    ctx->pc = 0x123720u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x123724: 0xdba103e0  lqc2        $vf1, 0x3E0($sp)
    ctx->pc = 0x123724u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x123728: 0xdba203f0  lqc2        $vf2, 0x3F0($sp)
    ctx->pc = 0x123728u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x12372c: 0xdba50400  lqc2        $vf5, 0x400($sp)
    ctx->pc = 0x12372cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x123730: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x123730u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123734: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x123734u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123738: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x123738u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12373c: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x12373cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123740: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x123740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123744: 0xfba30490  sqc2        $vf3, 0x490($sp)
    ctx->pc = 0x123744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x123748: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x123748u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12374c: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x12374cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123750: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x123750u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123754: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x123754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123758: 0xfba104a0  sqc2        $vf1, 0x4A0($sp)
    ctx->pc = 0x123758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12375c: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x12375cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123760: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x123760u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123764: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x123764u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123768: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x123768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x12376c: 0xfba204b0  sqc2        $vf2, 0x4B0($sp)
    ctx->pc = 0x12376cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123770: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x123770u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123774: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x123774u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123778: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x123778u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x12377c: 0xfba404c0  sqc2        $vf4, 0x4C0($sp)
    ctx->pc = 0x12377cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123780: 0xfba30390  sqc2        $vf3, 0x390($sp)
    ctx->pc = 0x123780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x123784: 0xfba103a0  sqc2        $vf1, 0x3A0($sp)
    ctx->pc = 0x123784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x123788: 0xfba203b0  sqc2        $vf2, 0x3B0($sp)
    ctx->pc = 0x123788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12378c: 0xfba403c0  sqc2        $vf4, 0x3C0($sp)
    ctx->pc = 0x12378cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123790: 0xfa230100  sqc2        $vf3, 0x100($s1)
    ctx->pc = 0x123790u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 256), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x123794: 0x8e83bde8  lw          $v1, -0x4218($s4)
    ctx->pc = 0x123794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950376)));
    // 0x123798: 0x7ba203a0  lq          $v0, 0x3A0($sp)
    ctx->pc = 0x123798u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x12379c: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x12379cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x1237a0: 0x7e220110  sq          $v0, 0x110($s1)
    ctx->pc = 0x1237a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 272), GPR_VEC(ctx, 2));
    // 0x1237a4: 0x7ba203b0  lq          $v0, 0x3B0($sp)
    ctx->pc = 0x1237a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x1237a8: 0x7e220120  sq          $v0, 0x120($s1)
    ctx->pc = 0x1237a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 288), GPR_VEC(ctx, 2));
    // 0x1237ac: 0x7ba203c0  lq          $v0, 0x3C0($sp)
    ctx->pc = 0x1237acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x1237b0: 0x7e220130  sq          $v0, 0x130($s1)
    ctx->pc = 0x1237b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 304), GPR_VEC(ctx, 2));
    // 0x1237b4: 0xda620090  lqc2        $vf2, 0x90($s3)
    ctx->pc = 0x1237b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x1237b8: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x1237b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1237bc: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1237bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1237c0: 0xf8610030  sqc2        $vf1, 0x30($v1)
    ctx->pc = 0x1237c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1237c4: 0x7bb00550  lq          $s0, 0x550($sp)
    ctx->pc = 0x1237c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
    // 0x1237c8: 0x7bb10540  lq          $s1, 0x540($sp)
    ctx->pc = 0x1237c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
    // 0x1237cc: 0x7bb20530  lq          $s2, 0x530($sp)
    ctx->pc = 0x1237ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x1237d0: 0x7bb30520  lq          $s3, 0x520($sp)
    ctx->pc = 0x1237d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x1237d4: 0x7bb40510  lq          $s4, 0x510($sp)
    ctx->pc = 0x1237d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x1237d8: 0x7bb50500  lq          $s5, 0x500($sp)
    ctx->pc = 0x1237d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x1237dc: 0xdfbf04f0  ld          $ra, 0x4F0($sp)
    ctx->pc = 0x1237dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x1237e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1237E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1237E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1237E0u;
            // 0x1237e4: 0x27bd0560  addiu       $sp, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1234C0u: goto label_1234c0;
            case 0x1234FCu: goto label_1234fc;
            case 0x1236D0u: goto label_1236d0;
            case 0x12370Cu: goto label_12370c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1237E8u;
}
