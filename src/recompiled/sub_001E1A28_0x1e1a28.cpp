#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1A28
// Address: 0x1e1a28 - 0x1e2220
void sub_001E1A28_0x1e1a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1A28_0x1e1a28");
#endif

    ctx->pc = 0x1e1a28u;

    // 0x1e1a28: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e1a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e1a2c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1e1a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1e1a30: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1e1a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1e1a34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1a38: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1e1a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1e1a3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e1a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1a40: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1e1a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1e1a44: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e1a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e1a48: 0xda230120  lqc2        $vf3, 0x120($s1)
    ctx->pc = 0x1e1a48u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1e1a4c: 0xda210050  lqc2        $vf1, 0x50($s1)
    ctx->pc = 0x1e1a4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1e1a50: 0x4b030084  vsubx.x     $vf2, $vf0, $vf3x
    ctx->pc = 0x1e1a50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1a54: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e1a54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1a58: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e1a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1a5c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e1a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e1a60: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e1a60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e1a64: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e1a64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1a68: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e1a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1a6c: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x1e1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1e1a70: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1e1a70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e1a74: 0x4be30859  vmuly.xyzw  $vf1, $vf1, $vf3y
    ctx->pc = 0x1e1a74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1a78: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e1a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1a7c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e1a7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1a80: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e1a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1a84: 0xd8440010  lqc2        $vf4, 0x10($v0)
    ctx->pc = 0x1e1a84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e1a88: 0x4a8218d8  vmulx.y     $vf3, $vf3, $vf2x
    ctx->pc = 0x1e1a88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e1a8c: 0x8e230140  lw          $v1, 0x140($s1)
    ctx->pc = 0x1e1a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x1e1a90: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e1a90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e1a94: 0x4b030845  vsuby.x     $vf1, $vf1, $vf3y
    ctx->pc = 0x1e1a94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1a98: 0x4be12098  vmulx.xyzw  $vf2, $vf4, $vf1x
    ctx->pc = 0x1e1a98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1a9c: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1e1a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e1aa0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1e1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1e1aa4: 0x8e240258  lw          $a0, 0x258($s1)
    ctx->pc = 0x1e1aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x1e1aa8: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x1e1aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x1e1aac: 0x8e280254  lw          $t0, 0x254($s1)
    ctx->pc = 0x1e1aacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x1e1ab0: 0x3c050430  lui         $a1, 0x430
    ctx->pc = 0x1e1ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1072 << 16));
    // 0x1e1ab4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1e1ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1e1ab8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1e1ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1e1abc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1e1abcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1e1ac0: 0x34631ff3  ori         $v1, $v1, 0x1FF3
    ctx->pc = 0x1e1ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8179);
    // 0x1e1ac4: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1e1ac4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1e1ac8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1e1ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1e1acc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1e1accu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e1ad0: 0x681827  nor         $v1, $v1, $t0
    ctx->pc = 0x1e1ad0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 8)));
    // 0x1e1ad4: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1e1ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e1ad8: 0x24a2f170  addiu       $v0, $a1, -0xE90
    ctx->pc = 0x1e1ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x1e1adc: 0xaca3f170  sw          $v1, -0xE90($a1)
    ctx->pc = 0x1e1adcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963568), GPR_U32(ctx, 3));
    // 0x1e1ae0: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e1ae0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1ae4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e1ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1ae8: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x1e1ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x1e1aec: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1e1aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1e1af0: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1e1af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1e1af4: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1e1af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1e1af8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e1af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e1afc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e1afcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e1b00: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1e1b00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1e1b04: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1e1b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1e1b08: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1e1b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1e1b0c: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1e1b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1b10: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x1e1b10u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x1e1b14: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1e1b14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e1b18: 0x8e64bcf8  lw          $a0, -0x4308($s3)
    ctx->pc = 0x1e1b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950136)));
    // 0x1e1b1c: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x1e1b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x1e1b20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e1b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e1b24: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1e1b24u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1b28: 0xc047ada  jal         func_11EB68
    ctx->pc = 0x1E1B28u;
    SET_GPR_U32(ctx, 31, 0x1E1B30u);
    ctx->pc = 0x1E1B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B28u;
            // 0x1e1b2c: 0xfba30050  sqc2        $vf3, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EB68u;
    if (runtime->hasFunction(0x11EB68u)) {
        auto targetFn = runtime->lookupFunction(0x11EB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B30u; }
        if (ctx->pc != 0x1E1B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EB68_0x11eb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B30u; }
        if (ctx->pc != 0x1E1B30u) { return; }
    }
    ctx->pc = 0x1E1B30u;
    // 0x1e1b30: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e1b30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1b34: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1e1b34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e1b38: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1e1b38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1b3c: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1e1b3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1b44: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1e1b44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e1b48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e1b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1b4c: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1B4Cu;
    SET_GPR_U32(ctx, 31, 0x1E1B54u);
    ctx->pc = 0x1E1B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B4Cu;
            // 0x1e1b50: 0x48261800  qmfc2.ni    $a2, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B54u; }
        if (ctx->pc != 0x1E1B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B54u; }
        if (ctx->pc != 0x1E1B54u) { return; }
    }
    ctx->pc = 0x1E1B54u;
    // 0x1e1b54: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1e1b54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1b58: 0x24100040  addiu       $s0, $zero, 0x40
    ctx->pc = 0x1e1b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e1b5c: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e1b5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1b60: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x1e1b60u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x1e1b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1b68: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1e1b68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e1b6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e1b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1b70: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1B70u;
    SET_GPR_U32(ctx, 31, 0x1E1B78u);
    ctx->pc = 0x1E1B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B70u;
            // 0x1e1b74: 0x48261800  qmfc2.ni    $a2, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B78u; }
        if (ctx->pc != 0x1E1B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B78u; }
        if (ctx->pc != 0x1E1B78u) { return; }
    }
    ctx->pc = 0x1E1B78u;
    // 0x1e1b78: 0x36030100  ori         $v1, $s0, 0x100
    ctx->pc = 0x1e1b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)256);
    // 0x1e1b7c: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x1e1b7cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1b80: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1e1b80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1e1b84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1b88: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1B88u;
    SET_GPR_U32(ctx, 31, 0x1E1B90u);
    ctx->pc = 0x1E1B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B88u;
            // 0x1e1b8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B90u; }
        if (ctx->pc != 0x1E1B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B90u; }
        if (ctx->pc != 0x1E1B90u) { return; }
    }
    ctx->pc = 0x1E1B90u;
    // 0x1e1b90: 0x36030040  ori         $v1, $s0, 0x40
    ctx->pc = 0x1e1b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x1e1b94: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1e1b94u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1e1b98: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e1b98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1b9c: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1e1b9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e1ba0: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1e1ba0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1ba4: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1e1ba4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1ba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1bac: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1e1bacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e1bb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e1bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1bb4: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1BB4u;
    SET_GPR_U32(ctx, 31, 0x1E1BBCu);
    ctx->pc = 0x1E1BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1BB4u;
            // 0x1e1bb8: 0x48261800  qmfc2.ni    $a2, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1BBCu; }
        if (ctx->pc != 0x1E1BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1BBCu; }
        if (ctx->pc != 0x1E1BBCu) { return; }
    }
    ctx->pc = 0x1E1BBCu;
    // 0x1e1bbc: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1e1bbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1bc0: 0x36030040  ori         $v1, $s0, 0x40
    ctx->pc = 0x1e1bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x1e1bc4: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e1bc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1bc8: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1e1bc8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1e1bcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1bd0: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1e1bd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e1bd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e1bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1bd8: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1BD8u;
    SET_GPR_U32(ctx, 31, 0x1E1BE0u);
    ctx->pc = 0x1E1BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1BD8u;
            // 0x1e1bdc: 0x48261800  qmfc2.ni    $a2, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1BE0u; }
        if (ctx->pc != 0x1E1BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1BE0u; }
        if (ctx->pc != 0x1E1BE0u) { return; }
    }
    ctx->pc = 0x1E1BE0u;
    // 0x1e1be0: 0x36030100  ori         $v1, $s0, 0x100
    ctx->pc = 0x1e1be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)256);
    // 0x1e1be4: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1e1be4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1e1be8: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e1be8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1bec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1bf0: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1e1bf0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e1bf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e1bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1bf8: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e1bf8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1bfc: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1BFCu;
    SET_GPR_U32(ctx, 31, 0x1E1C04u);
    ctx->pc = 0x1E1C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1BFCu;
            // 0x1e1c00: 0x48261000  qmfc2.ni    $a2, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C04u; }
        if (ctx->pc != 0x1E1C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C04u; }
        if (ctx->pc != 0x1E1C04u) { return; }
    }
    ctx->pc = 0x1E1C04u;
    // 0x1e1c04: 0x36030040  ori         $v1, $s0, 0x40
    ctx->pc = 0x1e1c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x1e1c08: 0x3c043eaa  lui         $a0, 0x3EAA
    ctx->pc = 0x1e1c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16042 << 16));
    // 0x1e1c0c: 0x3484aa9f  ori         $a0, $a0, 0xAA9F
    ctx->pc = 0x1e1c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43679);
    // 0x1e1c10: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1e1c10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e1c14: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1e1c14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1e1c18: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1e1c18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1c1c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1e1c1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1c20: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1e1c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e1c24: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e1c24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1c28: 0xdba30050  lqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1e1c28u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e1c2c: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x1e1c2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1c30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c34: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1e1c34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e1c38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e1c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c3c: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1C3Cu;
    SET_GPR_U32(ctx, 31, 0x1E1C44u);
    ctx->pc = 0x1E1C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C3Cu;
            // 0x1e1c40: 0x48261800  qmfc2.ni    $a2, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C44u; }
        if (ctx->pc != 0x1E1C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C44u; }
        if (ctx->pc != 0x1E1C44u) { return; }
    }
    ctx->pc = 0x1E1C44u;
    // 0x1e1c44: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1e1c44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1c48: 0x36030040  ori         $v1, $s0, 0x40
    ctx->pc = 0x1e1c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x1e1c4c: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e1c4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1c50: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1e1c50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1e1c54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c58: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1e1c58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e1c5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e1c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c60: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1C60u;
    SET_GPR_U32(ctx, 31, 0x1E1C68u);
    ctx->pc = 0x1E1C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C60u;
            // 0x1e1c64: 0x48261800  qmfc2.ni    $a2, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C68u; }
        if (ctx->pc != 0x1E1C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C68u; }
        if (ctx->pc != 0x1E1C68u) { return; }
    }
    ctx->pc = 0x1E1C68u;
    // 0x1e1c68: 0x36030100  ori         $v1, $s0, 0x100
    ctx->pc = 0x1e1c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)256);
    // 0x1e1c6c: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1e1c6cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1e1c70: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e1c70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1c74: 0xdba30050  lqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1e1c74u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e1c78: 0x4be118ac  vsub.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1e1c78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1c7c: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e1c7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c84: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1e1c84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e1c88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e1c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c8c: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1C8Cu;
    SET_GPR_U32(ctx, 31, 0x1E1C94u);
    ctx->pc = 0x1E1C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C8Cu;
            // 0x1e1c90: 0x48261800  qmfc2.ni    $a2, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C94u; }
        if (ctx->pc != 0x1E1C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C94u; }
        if (ctx->pc != 0x1E1C94u) { return; }
    }
    ctx->pc = 0x1E1C94u;
    // 0x1e1c94: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1e1c94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1c98: 0x36030040  ori         $v1, $s0, 0x40
    ctx->pc = 0x1e1c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x1e1c9c: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e1c9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1ca0: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1e1ca0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1e1ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1ca8: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1e1ca8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e1cac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e1cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1cb0: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1CB0u;
    SET_GPR_U32(ctx, 31, 0x1E1CB8u);
    ctx->pc = 0x1E1CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CB0u;
            // 0x1e1cb4: 0x48261800  qmfc2.ni    $a2, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CB8u; }
        if (ctx->pc != 0x1E1CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CB8u; }
        if (ctx->pc != 0x1E1CB8u) { return; }
    }
    ctx->pc = 0x1E1CB8u;
    // 0x1e1cb8: 0x36030100  ori         $v1, $s0, 0x100
    ctx->pc = 0x1e1cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)256);
    // 0x1e1cbc: 0x8e64bcf8  lw          $a0, -0x4308($s3)
    ctx->pc = 0x1e1cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950136)));
    // 0x1e1cc0: 0xc047b18  jal         func_11EC60
    ctx->pc = 0x1E1CC0u;
    SET_GPR_U32(ctx, 31, 0x1E1CC8u);
    ctx->pc = 0x1E1CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CC0u;
            // 0x1e1cc4: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EC60u;
    if (runtime->hasFunction(0x11EC60u)) {
        auto targetFn = runtime->lookupFunction(0x11EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CC8u; }
        if (ctx->pc != 0x1E1CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EC60_0x11ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CC8u; }
        if (ctx->pc != 0x1E1CC8u) { return; }
    }
    ctx->pc = 0x1E1CC8u;
    // 0x1e1cc8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1e1cc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e1ccc: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1e1cccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1cd0: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e1cd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1cd4: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1e1cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1cd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1cdc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1e1cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e1ce0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1e1ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e1ce4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1e1ce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e1ce8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1e1ce8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e1cec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e1cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e1cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CF0u;
            // 0x1e1cf4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1D38u: goto label_1e1d38;
            case 0x1E1D60u: goto label_1e1d60;
            case 0x1E1D98u: goto label_1e1d98;
            case 0x1E1D9Cu: goto label_1e1d9c;
            case 0x1E1DE4u: goto label_1e1de4;
            case 0x1E1DF0u: goto label_1e1df0;
            case 0x1E1E90u: goto label_1e1e90;
            case 0x1E1E98u: goto label_1e1e98;
            case 0x1E1FC8u: goto label_1e1fc8;
            case 0x1E2028u: goto label_1e2028;
            case 0x1E2080u: goto label_1e2080;
            case 0x1E2098u: goto label_1e2098;
            case 0x1E20E0u: goto label_1e20e0;
            case 0x1E20F0u: goto label_1e20f0;
            case 0x1E2190u: goto label_1e2190;
            case 0x1E21D8u: goto label_1e21d8;
            case 0x1E21DCu: goto label_1e21dc;
            case 0x1E21F8u: goto label_1e21f8;
            case 0x1E21FCu: goto label_1e21fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E1CF8u;
    // 0x1e1cf8: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1e1cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1e1cfc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1e1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1e1d00: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x1e1d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x1e1d04: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x1e1d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x1e1d08: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x1e1d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x1e1d0c: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x1e1d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x1e1d10: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1e1d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x1e1d14: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x1e1d14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1e1d18: 0x8c4277b4  lw          $v0, 0x77B4($v0)
    ctx->pc = 0x1e1d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30644)));
    // 0x1e1d1c: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1e1d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1e1d20: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E1D20u;
    {
        const bool branch_taken_0x1e1d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D20u;
            // 0x1e1d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d20) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E1D28u;
    // 0x1e1d28: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1e1d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1e1d2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1d30: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E1D30u;
    {
        const bool branch_taken_0x1e1d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E1D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D30u;
            // 0x1e1d34: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d30) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E1D38u;
label_1e1d38:
    // 0x1e1d38: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1e1d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e1d3c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e1d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e1d40: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1e1d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1e1d44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1D44u;
    {
        const bool branch_taken_0x1e1d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D44u;
            // 0x1e1d48: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d44) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E1D4Cu;
    // 0x1e1d4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e1d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e1d50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e1d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1d54: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E1D54u;
    {
        const bool branch_taken_0x1e1d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E1D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D54u;
            // 0x1e1d58: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d54) {
            ctx->pc = 0x1E1D38u;
            runtime->cooperativeGuestYield();
            goto label_1e1d38;
        }
    }
    ctx->pc = 0x1E1D5Cu;
    // 0x1e1d5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d60:
    // 0x1e1d60: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1e1d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1e1d64: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E1D64u;
    {
        const bool branch_taken_0x1e1d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D64u;
            // 0x1e1d68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d64) {
            ctx->pc = 0x1E1D9Cu;
            goto label_1e1d9c;
        }
    }
    ctx->pc = 0x1E1D6Cu;
    // 0x1e1d6c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e1d70: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1e1d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1e1d74: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1e1d74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e1d78: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e1d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e1d7c: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1e1d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1e1d80: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1e1d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e1d84: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e1d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e1d88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e1d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1d8c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E1D8Cu;
    {
        const bool branch_taken_0x1e1d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1E1D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D8Cu;
            // 0x1e1d90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d8c) {
            ctx->pc = 0x1E1D98u;
            goto label_1e1d98;
        }
    }
    ctx->pc = 0x1E1D94u;
    // 0x1e1d94: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1e1d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e1d98:
    // 0x1e1d98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e1d98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d9c:
    // 0x1e1d9c: 0x12400116  beqz        $s2, . + 4 + (0x116 << 2)
    ctx->pc = 0x1E1D9Cu;
    {
        const bool branch_taken_0x1e1d9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D9Cu;
            // 0x1e1da0: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d9c) {
            ctx->pc = 0x1E21F8u;
            goto label_1e21f8;
        }
    }
    ctx->pc = 0x1E1DA4u;
    // 0x1e1da4: 0x8c424f78  lw          $v0, 0x4F78($v0)
    ctx->pc = 0x1e1da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20344)));
    // 0x1e1da8: 0x10520114  beq         $v0, $s2, . + 4 + (0x114 << 2)
    ctx->pc = 0x1E1DA8u;
    {
        const bool branch_taken_0x1e1da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1E1DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DA8u;
            // 0x1e1dac: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1da8) {
            ctx->pc = 0x1E21FCu;
            goto label_1e21fc;
        }
    }
    ctx->pc = 0x1E1DB0u;
    // 0x1e1db0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1e1db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e1db4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e1db4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e1db8: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1e1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1e1dbc: 0x40f809  jalr        $v0
    ctx->pc = 0x1E1DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1DC4u);
        ctx->pc = 0x1E1DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DBCu;
            // 0x1e1dc0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E1DC4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1D38u: goto label_1e1d38;
            case 0x1E1D60u: goto label_1e1d60;
            case 0x1E1D98u: goto label_1e1d98;
            case 0x1E1D9Cu: goto label_1e1d9c;
            case 0x1E1DE4u: goto label_1e1de4;
            case 0x1E1DF0u: goto label_1e1df0;
            case 0x1E1E90u: goto label_1e1e90;
            case 0x1E1E98u: goto label_1e1e98;
            case 0x1E1FC8u: goto label_1e1fc8;
            case 0x1E2028u: goto label_1e2028;
            case 0x1E2080u: goto label_1e2080;
            case 0x1E2098u: goto label_1e2098;
            case 0x1E20E0u: goto label_1e20e0;
            case 0x1E20F0u: goto label_1e20f0;
            case 0x1E2190u: goto label_1e2190;
            case 0x1E21D8u: goto label_1e21d8;
            case 0x1E21DCu: goto label_1e21dc;
            case 0x1E21F8u: goto label_1e21f8;
            case 0x1E21FCu: goto label_1e21fc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DC4u; }
            if (ctx->pc != 0x1E1DC4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E1DC4u;
    // 0x1e1dc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1dc8: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1e1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1e1dcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1DCCu;
    {
        const bool branch_taken_0x1e1dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1dcc) {
            ctx->pc = 0x1E1DE4u;
            goto label_1e1de4;
        }
    }
    ctx->pc = 0x1E1DD4u;
    // 0x1e1dd4: 0xc090d56  jal         func_243558
    ctx->pc = 0x1E1DD4u;
    SET_GPR_U32(ctx, 31, 0x1E1DDCu);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DDCu; }
        if (ctx->pc != 0x1E1DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DDCu; }
        if (ctx->pc != 0x1E1DDCu) { return; }
    }
    ctx->pc = 0x1E1DDCu;
    // 0x1e1ddc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1DDCu;
    {
        const bool branch_taken_0x1e1ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DDCu;
            // 0x1e1de0: 0x90420012  lbu         $v0, 0x12($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ddc) {
            ctx->pc = 0x1E1DF0u;
            goto label_1e1df0;
        }
    }
    ctx->pc = 0x1E1DE4u;
label_1e1de4:
    // 0x1e1de4: 0xc090d54  jal         func_243550
    ctx->pc = 0x1E1DE4u;
    SET_GPR_U32(ctx, 31, 0x1E1DECu);
    ctx->pc = 0x243550u;
    if (runtime->hasFunction(0x243550u)) {
        auto targetFn = runtime->lookupFunction(0x243550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DECu; }
        if (ctx->pc != 0x1E1DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243550_0x243558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DECu; }
        if (ctx->pc != 0x1E1DECu) { return; }
    }
    ctx->pc = 0x1E1DECu;
    // 0x1e1dec: 0x94420038  lhu         $v0, 0x38($v0)
    ctx->pc = 0x1e1decu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1e1df0:
    // 0x1e1df0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e1df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e1df4: 0x10400101  beqz        $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x1E1DF4u;
    {
        const bool branch_taken_0x1e1df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DF4u;
            // 0x1e1df8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1df4) {
            ctx->pc = 0x1E21FCu;
            goto label_1e21fc;
        }
    }
    ctx->pc = 0x1E1DFCu;
    // 0x1e1dfc: 0x7a420130  lq          $v0, 0x130($s2)
    ctx->pc = 0x1e1dfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x1e1e00: 0x70022789  pexew       $a0, $v0
    ctx->pc = 0x1e1e00u;
    SET_GPR_VEC(ctx, 4, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1e1e04: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1e1e04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1e08: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x1e1e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1e0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e1e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1e10: 0x70e22389  pcpyld      $a0, $a3, $v0
    ctx->pc = 0x1e1e10u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x1e1e14: 0x70e31389  pcpyld      $v0, $a3, $v1
    ctx->pc = 0x1e1e14u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x1e1e18: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e1e18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1e1c: 0x70441cc8  ppacw       $v1, $v0, $a0
    ctx->pc = 0x1e1e1cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1e1e20: 0x48310800  qmfc2.ni    $s1, $vf1
    ctx->pc = 0x1e1e20u;
    SET_GPR_VEC(ctx, 17, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1e24: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e1e24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e1e28: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1e1e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e1e2c: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x1e1e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e1e30: 0x707110a8  pceqw       $v0, $v1, $s1
    ctx->pc = 0x1e1e30u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 17)));
    // 0x1e1e34: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x1e1e34u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1e1e38: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1e1e38u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1e1e3c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e1e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1e40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1e1e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e1e44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e1e44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1e1e48: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E1E48u;
    {
        const bool branch_taken_0x1e1e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E48u;
            // 0x1e1e4c: 0x26420050  addiu       $v0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e48) {
            ctx->pc = 0x1E1E90u;
            goto label_1e1e90;
        }
    }
    ctx->pc = 0x1E1E50u;
    // 0x1e1e50: 0xda410050  lqc2        $vf1, 0x50($s2)
    ctx->pc = 0x1e1e50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1e1e54: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1e1e54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e1e58: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e1e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1e5c: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1e1e5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e1e60: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1e1e60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e1e64: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e1e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1e68: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1e1e68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e1e6c: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1e1e6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e1e70: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e1e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1e74: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1e1e74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e1e78: 0x4be2088b  vmaddw.xyzw $vf2, $vf1, $vf2w
    ctx->pc = 0x1e1e78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e1e7c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e1e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1e80: 0x4be20a28  vadd.xyzw   $vf8, $vf1, $vf2
    ctx->pc = 0x1e1e80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1e1e84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1E84u;
    {
        const bool branch_taken_0x1e1e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E84u;
            // 0x1e1e88: 0x3c100030  lui         $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e84) {
            ctx->pc = 0x1E1E98u;
            goto label_1e1e98;
        }
    }
    ctx->pc = 0x1E1E8Cu;
    // 0x1e1e8c: 0x0  nop
    ctx->pc = 0x1e1e8cu;
    // NOP
label_1e1e90:
    // 0x1e1e90: 0xda480080  lqc2        $vf8, 0x80($s2)
    ctx->pc = 0x1e1e90u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1e1e94: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1e1e94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
label_1e1e98:
    // 0x1e1e98: 0xc6014f6c  lwc1        $f1, 0x4F6C($s0)
    ctx->pc = 0x1e1e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1e9c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1e1e9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e1ea0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1e1ea0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e1ea4: 0x48b12800  qmtc2.ni    $s1, $vf5
    ctx->pc = 0x1e1ea4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
    // 0x1e1ea8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1e1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1e1eac: 0x4a812940  vaddx.y     $vf5, $vf5, $vf1x
    ctx->pc = 0x1e1eacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e1eb0: 0x24532ff0  addiu       $s3, $v0, 0x2FF0
    ctx->pc = 0x1e1eb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
    // 0x1e1eb4: 0xda660000  lqc2        $vf6, 0x0($s3)
    ctx->pc = 0x1e1eb4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e1eb8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1e1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1e1ebc: 0xc4404f70  lwc1        $f0, 0x4F70($v0)
    ctx->pc = 0x1e1ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1ec0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e1ec0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e1ec4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1e1ec4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1e1ec8: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1e1ec8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1e1ecc: 0x48b12000  qmtc2.ni    $s1, $vf4
    ctx->pc = 0x1e1eccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
    // 0x1e1ed0: 0x4a812100  vaddx.y     $vf4, $vf4, $vf1x
    ctx->pc = 0x1e1ed0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e1ed4: 0xda420120  lqc2        $vf2, 0x120($s2)
    ctx->pc = 0x1e1ed4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x1e1ed8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e1ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e1edc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e1edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1ee0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1e1ee0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e1ee4: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x1e1ee4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e1ee8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1e1ee8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1e1eec: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x1e1eecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e1ef0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1e1ef0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e1ef4: 0x48b11800  qmtc2.ni    $s1, $vf3
    ctx->pc = 0x1e1ef4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
    // 0x1e1ef8: 0x4a8118c0  vaddx.y     $vf3, $vf3, $vf1x
    ctx->pc = 0x1e1ef8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e1efc: 0x4a811084  vsubx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x1e1efcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1f00: 0x48b10800  qmtc2.ni    $s1, $vf1
    ctx->pc = 0x1e1f00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
    // 0x1e1f04: 0x4a820841  vaddy.y     $vf1, $vf1, $vf2y
    ctx->pc = 0x1e1f04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1f08: 0x4be530a8  vadd.xyzw   $vf2, $vf6, $vf5
    ctx->pc = 0x1e1f08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1f0c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1e1f0cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e1f10: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x1e1f10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e1f14: 0x4be430a8  vadd.xyzw   $vf2, $vf6, $vf4
    ctx->pc = 0x1e1f14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1f18: 0xfba80120  sqc2        $vf8, 0x120($sp)
    ctx->pc = 0x1e1f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1e1f1c: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1e1f1cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e1f20: 0x27a900d4  addiu       $t1, $sp, 0xD4
    ctx->pc = 0x1e1f20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1e1f24: 0x4be340a8  vadd.xyzw   $vf2, $vf8, $vf3
    ctx->pc = 0x1e1f24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1f28: 0x27aa00e0  addiu       $t2, $sp, 0xE0
    ctx->pc = 0x1e1f28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e1f2c: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x1e1f2cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e1f30: 0x27ab00f0  addiu       $t3, $sp, 0xF0
    ctx->pc = 0x1e1f30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e1f34: 0x4be140a8  vadd.xyzw   $vf2, $vf8, $vf1
    ctx->pc = 0x1e1f34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1f38: 0xc04bdfe  jal         func_12F7F8
    ctx->pc = 0x1E1F38u;
    SET_GPR_U32(ctx, 31, 0x1E1F40u);
    ctx->pc = 0x1E1F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F38u;
            // 0x1e1f3c: 0x48271000  qmfc2.ni    $a3, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F7F8u;
    if (runtime->hasFunction(0x12F7F8u)) {
        auto targetFn = runtime->lookupFunction(0x12F7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F40u; }
        if (ctx->pc != 0x1E1F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12f7f8_0x12fa08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F40u; }
        if (ctx->pc != 0x1E1F40u) { return; }
    }
    ctx->pc = 0x1E1F40u;
    // 0x1e1f40: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1e1f40u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1e1f44: 0xc6004f6c  lwc1        $f0, 0x4F6C($s0)
    ctx->pc = 0x1e1f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1f48: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1e1f48u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1e1f4c: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x1e1f4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1f50: 0x0  nop
    ctx->pc = 0x1e1f50u;
    // NOP
    // 0x1e1f54: 0x450000a8  bc1f        . + 4 + (0xA8 << 2)
    ctx->pc = 0x1E1F54u;
    {
        const bool branch_taken_0x1e1f54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F54u;
            // 0x1e1f58: 0xdba80120  lqc2        $vf8, 0x120($sp) (Delay Slot)
        ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f54) {
            ctx->pc = 0x1E21F8u;
            goto label_1e21f8;
        }
    }
    ctx->pc = 0x1E1F5Cu;
    // 0x1e1f5c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1e1f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1e1f60: 0x8c454f74  lw          $a1, 0x4F74($v0)
    ctx->pc = 0x1e1f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20340)));
    // 0x1e1f64: 0x8ca40174  lw          $a0, 0x174($a1)
    ctx->pc = 0x1e1f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 372)));
    // 0x1e1f68: 0x3082004c  andi        $v0, $a0, 0x4C
    ctx->pc = 0x1e1f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)76);
    // 0x1e1f6c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E1F6Cu;
    {
        const bool branch_taken_0x1e1f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F6Cu;
            // 0x1e1f70: 0xdba100f0  lqc2        $vf1, 0xF0($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f6c) {
            ctx->pc = 0x1E1FC8u;
            goto label_1e1fc8;
        }
    }
    ctx->pc = 0x1E1F74u;
    // 0x1e1f74: 0xdba200e0  lqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x1e1f74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e1f78: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e1f78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1f7c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1e1f7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e1f80: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1e1f80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1f84: 0x4602a001  sub.s       $f0, $f20, $f2
    ctx->pc = 0x1e1f84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x1e1f88: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1e1f88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1f8c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e1f8cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e1f90: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e1f90u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e1f94: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1e1f94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1f98: 0x4a0002ff  vnop
    ctx->pc = 0x1e1f98u;
    // NOP operation, no action needed for VU0
    // 0x1e1f9c: 0x4a0002ff  vnop
    ctx->pc = 0x1e1f9cu;
    // NOP operation, no action needed for VU0
    // 0x1e1fa0: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x1e1fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e1fa4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e1fa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e1fa8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e1fa8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e1fac: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1e1facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e1fb0: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1e1fb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1fb4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e1fb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e1fb8: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e1fb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1fbc: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e1fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1fc0: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x1E1FC0u;
    {
        const bool branch_taken_0x1e1fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1FC0u;
            // 0x1e1fc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fc0) {
            ctx->pc = 0x1E21FCu;
            goto label_1e21fc;
        }
    }
    ctx->pc = 0x1E1FC8u;
label_1e1fc8:
    // 0x1e1fc8: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1e1fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1e1fcc: 0x3042004c  andi        $v0, $v0, 0x4C
    ctx->pc = 0x1e1fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)76);
    // 0x1e1fd0: 0x1440008a  bnez        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1E1FD0u;
    {
        const bool branch_taken_0x1e1fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1FD0u;
            // 0x1e1fd4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fd0) {
            ctx->pc = 0x1E21FCu;
            goto label_1e21fc;
        }
    }
    ctx->pc = 0x1E1FD8u;
    // 0x1e1fd8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1e1fd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1fdc: 0x48b13800  qmtc2.ni    $s1, $vf7
    ctx->pc = 0x1e1fdcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
    // 0x1e1fe0: 0x30620030  andi        $v0, $v1, 0x30
    ctx->pc = 0x1e1fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x1e1fe4: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1E1FE4u;
    {
        const bool branch_taken_0x1e1fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1FE4u;
            // 0x1e1fe8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fe4) {
            ctx->pc = 0x1E2190u;
            goto label_1e2190;
        }
    }
    ctx->pc = 0x1E1FECu;
    // 0x1e1fec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e1ff0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e1ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e1ff4: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1E1FF4u;
    {
        const bool branch_taken_0x1e1ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ff4) {
            ctx->pc = 0x1E1FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1FF4u;
            // 0x1e1ff8: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2080u;
            goto label_1e2080;
        }
    }
    ctx->pc = 0x1E1FFCu;
    // 0x1e1ffc: 0x48244000  qmfc2.ni    $a0, $vf8
    ctx->pc = 0x1e1ffcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1e2000: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x1e2000u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e2004: 0x70041fc9  prot3w      $v1, $a0
    ctx->pc = 0x1e2004u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e2008: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e2008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e200c: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e200cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e2010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2014: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e2014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2018: 0x0  nop
    ctx->pc = 0x1e2018u;
    // NOP
    // 0x1e201c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E201Cu;
    {
        const bool branch_taken_0x1e201c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E201Cu;
            // 0x1e2020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e201c) {
            ctx->pc = 0x1E2028u;
            goto label_1e2028;
        }
    }
    ctx->pc = 0x1E2024u;
    // 0x1e2024: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e2024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2028:
    // 0x1e2028: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1E2028u;
    {
        const bool branch_taken_0x1e2028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E202Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2028u;
            // 0x1e202c: 0xdba100f0  lqc2        $vf1, 0xF0($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2028) {
            ctx->pc = 0x1E21D8u;
            goto label_1e21d8;
        }
    }
    ctx->pc = 0x1E2030u;
    // 0x1e2030: 0xdba200e0  lqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x1e2030u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e2034: 0xd8c40060  lqc2        $vf4, 0x60($a2)
    ctx->pc = 0x1e2034u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x1e2038: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e2038u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e203c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1e203cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2040: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1e2040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2044: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1e2044u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2048: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e2048u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e204c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e204cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e2050: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1e2050u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2054: 0x4a0002ff  vnop
    ctx->pc = 0x1e2054u;
    // NOP operation, no action needed for VU0
    // 0x1e2058: 0x4a0002ff  vnop
    ctx->pc = 0x1e2058u;
    // NOP operation, no action needed for VU0
    // 0x1e205c: 0x4be410ea  vmul.xyzw   $vf3, $vf2, $vf4
    ctx->pc = 0x1e205cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2060: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x1e2060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2064: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1e2064u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2068: 0x4602a001  sub.s       $f0, $f20, $f2
    ctx->pc = 0x1e2068u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x1e206c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1e206cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2070: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1e2070u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1e2074: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x1e2074u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1e2078: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1E2078u;
    {
        const bool branch_taken_0x1e2078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2078) {
            ctx->pc = 0x1E20E0u;
            goto label_1e20e0;
        }
    }
    ctx->pc = 0x1E2080u;
label_1e2080:
    // 0x1e2080: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2080u;
    {
        const bool branch_taken_0x1e2080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2080u;
            // 0x1e2084: 0xdba100f0  lqc2        $vf1, 0xF0($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2080) {
            ctx->pc = 0x1E2098u;
            goto label_1e2098;
        }
    }
    ctx->pc = 0x1E2088u;
    // 0x1e2088: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1e2088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1e208c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e208cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e2090: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E2090u;
    {
        const bool branch_taken_0x1e2090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2090) {
            ctx->pc = 0x1E2094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2090u;
            // 0x1e2094: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E20F0u;
            goto label_1e20f0;
        }
    }
    ctx->pc = 0x1E2098u;
label_1e2098:
    // 0x1e2098: 0xdba200e0  lqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x1e2098u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e209c: 0xd8c40050  lqc2        $vf4, 0x50($a2)
    ctx->pc = 0x1e209cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x1e20a0: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e20a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e20a4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1e20a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e20a8: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1e20a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e20ac: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1e20acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e20b0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e20b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e20b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e20b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e20b8: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1e20b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e20bc: 0x4a0002ff  vnop
    ctx->pc = 0x1e20bcu;
    // NOP operation, no action needed for VU0
    // 0x1e20c0: 0x4a0002ff  vnop
    ctx->pc = 0x1e20c0u;
    // NOP operation, no action needed for VU0
    // 0x1e20c4: 0x4be410ea  vmul.xyzw   $vf3, $vf2, $vf4
    ctx->pc = 0x1e20c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e20c8: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1e20c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e20cc: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1e20ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e20d0: 0x4602a001  sub.s       $f0, $f20, $f2
    ctx->pc = 0x1e20d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x1e20d4: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1e20d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e20d8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e20d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e20dc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e20dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e20e0:
    // 0x1e20e0: 0x4b020858  vmulx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x1e20e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e20e4: 0x4be121d8  vmulx.xyzw  $vf7, $vf4, $vf1x
    ctx->pc = 0x1e20e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1e20e8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1E20E8u;
    {
        const bool branch_taken_0x1e20e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E20E8u;
            // 0x1e20ec: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20e8) {
            ctx->pc = 0x1E21DCu;
            goto label_1e21dc;
        }
    }
    ctx->pc = 0x1E20F0u;
label_1e20f0:
    // 0x1e20f0: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1E20F0u;
    {
        const bool branch_taken_0x1e20f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E20F0u;
            // 0x1e20f4: 0xdba100f0  lqc2        $vf1, 0xF0($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20f0) {
            ctx->pc = 0x1E21D8u;
            goto label_1e21d8;
        }
    }
    ctx->pc = 0x1E20F8u;
    // 0x1e20f8: 0xdba300e0  lqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x1e20f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e20fc: 0xd8a50050  lqc2        $vf5, 0x50($a1)
    ctx->pc = 0x1e20fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x1e2100: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1e2100u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2104: 0xd8a70060  lqc2        $vf7, 0x60($a1)
    ctx->pc = 0x1e2104u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1e2108: 0x4be3192a  vmul.xyzw   $vf4, $vf3, $vf3
    ctx->pc = 0x1e2108u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e210c: 0x4b042081  vaddy.x     $vf2, $vf4, $vf4y
    ctx->pc = 0x1e210cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2110: 0x4b041082  vaddz.x     $vf2, $vf2, $vf4z
    ctx->pc = 0x1e2110u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2114: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x1e2114u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1e2118: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e2118u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e211c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e211cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e2120: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1e2120u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2124: 0x4a0002ff  vnop
    ctx->pc = 0x1e2124u;
    // NOP operation, no action needed for VU0
    // 0x1e2128: 0x4a0002ff  vnop
    ctx->pc = 0x1e2128u;
    // NOP operation, no action needed for VU0
    // 0x1e212c: 0x4be708aa  vmul.xyzw   $vf2, $vf1, $vf7
    ctx->pc = 0x1e212cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2130: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1e2130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2134: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e2134u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2138: 0x4602a001  sub.s       $f0, $f20, $f2
    ctx->pc = 0x1e2138u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x1e213c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e213cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2140: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1e2140u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e2144: 0x48a43000  qmtc2.ni    $a0, $vf6
    ctx->pc = 0x1e2144u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e2148: 0x4b060858  vmulx.x     $vf1, $vf1, $vf6x
    ctx->pc = 0x1e2148u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e214c: 0x4be139d8  vmulx.xyzw  $vf7, $vf7, $vf1x
    ctx->pc = 0x1e214cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1e2150: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1e2150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2154: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1e2154u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2158: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e2158u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e215c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e215cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e2160: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1e2160u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2164: 0x4a0002ff  vnop
    ctx->pc = 0x1e2164u;
    // NOP operation, no action needed for VU0
    // 0x1e2168: 0x4a0002ff  vnop
    ctx->pc = 0x1e2168u;
    // NOP operation, no action needed for VU0
    // 0x1e216c: 0x4be518aa  vmul.xyzw   $vf2, $vf3, $vf5
    ctx->pc = 0x1e216cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2170: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x1e2170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e2174: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e2174u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2178: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e2178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e217c: 0x4b060858  vmulx.x     $vf1, $vf1, $vf6x
    ctx->pc = 0x1e217cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2180: 0x4be12958  vmulx.xyzw  $vf5, $vf5, $vf1x
    ctx->pc = 0x1e2180u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e2184: 0x4be539e8  vadd.xyzw   $vf7, $vf7, $vf5
    ctx->pc = 0x1e2184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1e2188: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E2188u;
    {
        const bool branch_taken_0x1e2188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E218Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2188u;
            // 0x1e218c: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2188) {
            ctx->pc = 0x1E21DCu;
            goto label_1e21dc;
        }
    }
    ctx->pc = 0x1E2190u;
label_1e2190:
    // 0x1e2190: 0xdba200f0  lqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x1e2190u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e2194: 0xdba100e0  lqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1e2194u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e2198: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e2198u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e219c: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1e219cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e21a0: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1e21a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e21a4: 0x4602a001  sub.s       $f0, $f20, $f2
    ctx->pc = 0x1e21a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x1e21a8: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1e21a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e21ac: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e21acu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e21b0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e21b0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e21b4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1e21b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e21b8: 0x4a0002ff  vnop
    ctx->pc = 0x1e21b8u;
    // NOP operation, no action needed for VU0
    // 0x1e21bc: 0x4a0002ff  vnop
    ctx->pc = 0x1e21bcu;
    // NOP operation, no action needed for VU0
    // 0x1e21c0: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1e21c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e21c4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1e21c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1e21c8: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x1e21c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1e21cc: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1e21ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e21d0: 0x4be209d8  vmulx.xyzw  $vf7, $vf1, $vf2x
    ctx->pc = 0x1e21d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1e21d4: 0x0  nop
    ctx->pc = 0x1e21d4u;
    // NOP
label_1e21d8:
    // 0x1e21d8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1e21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_1e21dc:
    // 0x1e21dc: 0x24422ff0  addiu       $v0, $v0, 0x2FF0
    ctx->pc = 0x1e21dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
    // 0x1e21e0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e21e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e21e4: 0x4be70868  vadd.xyzw   $vf1, $vf1, $vf7
    ctx->pc = 0x1e21e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e21e8: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e21e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e21ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E21ECu;
    {
        const bool branch_taken_0x1e21ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E21F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E21ECu;
            // 0x1e21f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e21ec) {
            ctx->pc = 0x1E21FCu;
            goto label_1e21fc;
        }
    }
    ctx->pc = 0x1E21F4u;
    // 0x1e21f4: 0x0  nop
    ctx->pc = 0x1e21f4u;
    // NOP
label_1e21f8:
    // 0x1e21f8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1e21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1e21fc:
    // 0x1e21fc: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x1e21fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e2200: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x1e2200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1e2204: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x1e2204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e2208: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x1e2208u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e220c: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1e220cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1e2210: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x1e2210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e2214: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2214u;
            // 0x1e2218: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1D38u: goto label_1e1d38;
            case 0x1E1D60u: goto label_1e1d60;
            case 0x1E1D98u: goto label_1e1d98;
            case 0x1E1D9Cu: goto label_1e1d9c;
            case 0x1E1DE4u: goto label_1e1de4;
            case 0x1E1DF0u: goto label_1e1df0;
            case 0x1E1E90u: goto label_1e1e90;
            case 0x1E1E98u: goto label_1e1e98;
            case 0x1E1FC8u: goto label_1e1fc8;
            case 0x1E2028u: goto label_1e2028;
            case 0x1E2080u: goto label_1e2080;
            case 0x1E2098u: goto label_1e2098;
            case 0x1E20E0u: goto label_1e20e0;
            case 0x1E20F0u: goto label_1e20f0;
            case 0x1E2190u: goto label_1e2190;
            case 0x1E21D8u: goto label_1e21d8;
            case 0x1E21DCu: goto label_1e21dc;
            case 0x1E21F8u: goto label_1e21f8;
            case 0x1E21FCu: goto label_1e21fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E221Cu;
    // 0x1e221c: 0x0  nop
    ctx->pc = 0x1e221cu;
    // NOP
}
