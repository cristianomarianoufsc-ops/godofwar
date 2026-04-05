#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136BD8
// Address: 0x136bd8 - 0x136e48
void sub_00136BD8_0x136bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136BD8_0x136bd8");
#endif

    ctx->pc = 0x136bd8u;

    // 0x136bd8: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x136bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x136bdc: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x136bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
    // 0x136be0: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x136be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x136be4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x136be4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136be8: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x136be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
    // 0x136bec: 0x8cb00048  lw          $s0, 0x48($a1)
    ctx->pc = 0x136becu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x136bf0: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x136bf0u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x136bf4: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x136bf4u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x136bf8: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x136bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136bfc: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x136bfcu;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x136c00: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x136c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x136c04: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x136c04u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x136c08: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x136c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136c0c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x136c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136c10: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x136c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136c14: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x136c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x136c18: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x136c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136c1c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x136c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136c20: 0x8ca40050  lw          $a0, 0x50($a1)
    ctx->pc = 0x136c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x136c24: 0x18c0002c  blez        $a2, . + 4 + (0x2C << 2)
    ctx->pc = 0x136C24u;
    {
        const bool branch_taken_0x136c24 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x136C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136C24u;
            // 0x136c28: 0x8ca30058  lw          $v1, 0x58($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c24) {
            ctx->pc = 0x136CD8u;
            goto label_136cd8;
        }
    }
    ctx->pc = 0x136C2Cu;
    // 0x136c2c: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x136c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_136c30:
    // 0x136c30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x136c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x136c34: 0xd8470000  lqc2        $vf7, 0x0($v0)
    ctx->pc = 0x136c34u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136c38: 0xd8480030  lqc2        $vf8, 0x30($v0)
    ctx->pc = 0x136c38u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x136c3c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x136c3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x136c40: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x136c40u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x136c44: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x136c44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136c48: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x136c48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136c4c: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x136c4cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136c50: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x136c50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136c54: 0x4be139bc  vmulax.xyzw $ACC, $vf7, $vf1x
    ctx->pc = 0x136c54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136c58: 0x4be128bd  vmadday.xyzw $ACC, $vf5, $vf1y
    ctx->pc = 0x136c58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136c5c: 0x4be130be  vmaddaz.xyzw $ACC, $vf6, $vf1z
    ctx->pc = 0x136c5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136c60: 0x4be1428b  vmaddw.xyzw $vf10, $vf8, $vf1w
    ctx->pc = 0x136c60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136c64: 0x4be239bc  vmulax.xyzw $ACC, $vf7, $vf2x
    ctx->pc = 0x136c64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136c68: 0x4be228bd  vmadday.xyzw $ACC, $vf5, $vf2y
    ctx->pc = 0x136c68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136c6c: 0x4be230be  vmaddaz.xyzw $ACC, $vf6, $vf2z
    ctx->pc = 0x136c6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136c70: 0x4be2424b  vmaddw.xyzw $vf9, $vf8, $vf2w
    ctx->pc = 0x136c70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136c74: 0x4be339bc  vmulax.xyzw $ACC, $vf7, $vf3x
    ctx->pc = 0x136c74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136c78: 0x4be328bd  vmadday.xyzw $ACC, $vf5, $vf3y
    ctx->pc = 0x136c78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136c7c: 0x4be330be  vmaddaz.xyzw $ACC, $vf6, $vf3z
    ctx->pc = 0x136c7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136c80: 0x4be3408b  vmaddw.xyzw $vf2, $vf8, $vf3w
    ctx->pc = 0x136c80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136c84: 0x4be439bc  vmulax.xyzw $ACC, $vf7, $vf4x
    ctx->pc = 0x136c84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136c88: 0x4be428bd  vmadday.xyzw $ACC, $vf5, $vf4y
    ctx->pc = 0x136c88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136c8c: 0x4be430be  vmaddaz.xyzw $ACC, $vf6, $vf4z
    ctx->pc = 0x136c8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136c90: 0x4be4404b  vmaddw.xyzw $vf1, $vf8, $vf4w
    ctx->pc = 0x136c90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136c94: 0xfbaa0080  sqc2        $vf10, 0x80($sp)
    ctx->pc = 0x136c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x136c98: 0xfba90090  sqc2        $vf9, 0x90($sp)
    ctx->pc = 0x136c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x136c9c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x136c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x136ca0: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x136ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136ca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x136ca8: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x136ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136cac: 0xfbaa0000  sqc2        $vf10, 0x0($sp)
    ctx->pc = 0x136cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x136cb0: 0xfba90010  sqc2        $vf9, 0x10($sp)
    ctx->pc = 0x136cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x136cb4: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x136cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136cb8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x136cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136cbc: 0x84460008  lh          $a2, 0x8($v0)
    ctx->pc = 0x136cbcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x136cc0: 0x1cc0ffdb  bgtz        $a2, . + 4 + (-0x25 << 2)
    ctx->pc = 0x136CC0u;
    {
        const bool branch_taken_0x136cc0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x136CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136CC0u;
            // 0x136cc4: 0x61180  sll         $v0, $a2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136cc0) {
            ctx->pc = 0x136C30u;
            runtime->cooperativeGuestYield();
            goto label_136c30;
        }
    }
    ctx->pc = 0x136CC8u;
    // 0x136cc8: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x136cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136ccc: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x136cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136cd0: 0xfba900d0  sqc2        $vf9, 0xD0($sp)
    ctx->pc = 0x136cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x136cd4: 0xfbaa00c0  sqc2        $vf10, 0xC0($sp)
    ctx->pc = 0x136cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[10]));
label_136cd8:
    // 0x136cd8: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x136cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x136cdc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x136cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x136ce0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136CE0u;
    {
        const bool branch_taken_0x136ce0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x136CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136CE0u;
            // 0x136ce4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ce0) {
            ctx->pc = 0x136CF8u;
            goto label_136cf8;
        }
    }
    ctx->pc = 0x136CE8u;
    // 0x136ce8: 0x94a20086  lhu         $v0, 0x86($a1)
    ctx->pc = 0x136ce8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 134)));
    // 0x136cec: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x136cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x136cf0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x136cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x136cf4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x136cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_136cf8:
    // 0x136cf8: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x136cf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x136cfc: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x136cfcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x136d00: 0xd8a70010  lqc2        $vf7, 0x10($a1)
    ctx->pc = 0x136d00u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x136d04: 0xd8a80020  lqc2        $vf8, 0x20($a1)
    ctx->pc = 0x136d04u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x136d08: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x136d08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x136d0c: 0xd8860030  lqc2        $vf6, 0x30($a0)
    ctx->pc = 0x136d0cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x136d10: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x136d10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x136d14: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x136d14u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x136d18: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x136d18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136d1c: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x136d1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136d20: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x136d20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136d24: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x136d24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136d28: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x136d28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136d2c: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x136d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136d30: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x136d30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136d34: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x136d34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136d38: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x136d38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136d3c: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x136d3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136d40: 0xfba20150  sqc2        $vf2, 0x150($sp)
    ctx->pc = 0x136d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136d44: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x136d44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136d48: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x136d48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136d4c: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x136d4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136d50: 0x4be629bc  vmulax.xyzw $ACC, $vf5, $vf6x
    ctx->pc = 0x136d50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136d54: 0xfba30160  sqc2        $vf3, 0x160($sp)
    ctx->pc = 0x136d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x136d58: 0x4be638bd  vmadday.xyzw $ACC, $vf7, $vf6y
    ctx->pc = 0x136d58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136d5c: 0x4be640be  vmaddaz.xyzw $ACC, $vf8, $vf6z
    ctx->pc = 0x136d5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136d60: 0x4be6210b  vmaddw.xyzw $vf4, $vf4, $vf6w
    ctx->pc = 0x136d60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136d64: 0xfba40170  sqc2        $vf4, 0x170($sp)
    ctx->pc = 0x136d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136d68: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x136d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136d6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x136d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136d70: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x136d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136d74: 0xfba30120  sqc2        $vf3, 0x120($sp)
    ctx->pc = 0x136d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x136d78: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x136d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136d7c: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x136d7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x136d80: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x136D80u;
    {
        const bool branch_taken_0x136d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x136D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136D80u;
            // 0x136d84: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d80) {
            ctx->pc = 0x136D90u;
            goto label_136d90;
        }
    }
    ctx->pc = 0x136D88u;
    // 0x136d88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x136D88u;
    {
        const bool branch_taken_0x136d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136D88u;
            // 0x136d8c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d88) {
            ctx->pc = 0x136DACu;
            goto label_136dac;
        }
    }
    ctx->pc = 0x136D90u;
label_136d90:
    // 0x136d90: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x136d90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x136d94: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x136d94u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x136d98: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x136D98u;
    {
        const bool branch_taken_0x136d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x136D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136D98u;
            // 0x136d9c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d98) {
            ctx->pc = 0x136DACu;
            goto label_136dac;
        }
    }
    ctx->pc = 0x136DA0u;
    // 0x136da0: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x136DA0u;
    SET_GPR_U32(ctx, 31, 0x136DA8u);
    ctx->pc = 0x136DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136DA0u;
            // 0x136da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136DA8u; }
        if (ctx->pc != 0x136DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136DA8u; }
        if (ctx->pc != 0x136DA8u) { return; }
    }
    ctx->pc = 0x136DA8u;
    // 0x136da8: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x136da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_136dac:
    // 0x136dac: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x136dacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x136db0: 0xd8860000  lqc2        $vf6, 0x0($a0)
    ctx->pc = 0x136db0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x136db4: 0xd8870010  lqc2        $vf7, 0x10($a0)
    ctx->pc = 0x136db4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x136db8: 0xd8880020  lqc2        $vf8, 0x20($a0)
    ctx->pc = 0x136db8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x136dbc: 0xdba10100  lqc2        $vf1, 0x100($sp)
    ctx->pc = 0x136dbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x136dc0: 0xdba20110  lqc2        $vf2, 0x110($sp)
    ctx->pc = 0x136dc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x136dc4: 0xdba30120  lqc2        $vf3, 0x120($sp)
    ctx->pc = 0x136dc4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x136dc8: 0xdba50130  lqc2        $vf5, 0x130($sp)
    ctx->pc = 0x136dc8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x136dcc: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x136dccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136dd0: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x136dd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136dd4: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x136dd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136dd8: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x136dd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136ddc: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x136ddcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136de0: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x136de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136de4: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x136de4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136de8: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x136de8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136dec: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x136decu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136df0: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x136df0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136df4: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x136df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136df8: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x136df8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136dfc: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x136dfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136e00: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x136e00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136e04: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x136e04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136e08: 0xfba301a0  sqc2        $vf3, 0x1A0($sp)
    ctx->pc = 0x136e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x136e0c: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x136e0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136e10: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x136e10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136e14: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x136e14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136e18: 0xfba401b0  sqc2        $vf4, 0x1B0($sp)
    ctx->pc = 0x136e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136e1c: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x136e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136e20: 0xfa220010  sqc2        $vf2, 0x10($s1)
    ctx->pc = 0x136e20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136e24: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x136e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e28: 0xfa230020  sqc2        $vf3, 0x20($s1)
    ctx->pc = 0x136e28u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x136e2c: 0xfa240030  sqc2        $vf4, 0x30($s1)
    ctx->pc = 0x136e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136e30: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x136e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x136e34: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x136e34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x136e38: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x136e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x136e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x136E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136E3Cu;
            // 0x136e40: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136C30u: goto label_136c30;
            case 0x136CD8u: goto label_136cd8;
            case 0x136CF8u: goto label_136cf8;
            case 0x136D90u: goto label_136d90;
            case 0x136DACu: goto label_136dac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x136E44u;
    // 0x136e44: 0x0  nop
    ctx->pc = 0x136e44u;
    // NOP
}
