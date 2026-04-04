#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F05E8
// Address: 0x1f05e8 - 0x1f0ee8
void sub_001F05E8_0x1f05e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F05E8_0x1f05e8");
#endif

    ctx->pc = 0x1f05e8u;

    // 0x1f05e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f05e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f05ec: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1f05ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1f05f0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1f05f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1f05f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f05f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f05f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f05f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f05fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f05fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0600: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x1f0600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1f0604: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1f0604u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f0608: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x1f0608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1f060c: 0x26270024  addiu       $a3, $s1, 0x24
    ctx->pc = 0x1f060cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x1f0610: 0xc07c140  jal         func_1F0500
    ctx->pc = 0x1F0610u;
    SET_GPR_U32(ctx, 31, 0x1F0618u);
    ctx->pc = 0x1F0614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0610u;
            // 0x1f0614: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0500u;
    if (runtime->hasFunction(0x1F0500u)) {
        auto targetFn = runtime->lookupFunction(0x1F0500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0618u; }
        if (ctx->pc != 0x1F0618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0500_0x1f0500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0618u; }
        if (ctx->pc != 0x1F0618u) { return; }
    }
    ctx->pc = 0x1F0618u;
    // 0x1f0618: 0xda010030  lqc2        $vf1, 0x30($s0)
    ctx->pc = 0x1f0618u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1f061c: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1f061cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0620: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1f0620u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f0624: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f0624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0628: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f0628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f062c: 0xc0613b4  jal         func_184ED0
    ctx->pc = 0x1F062Cu;
    SET_GPR_U32(ctx, 31, 0x1F0634u);
    ctx->pc = 0x1F0630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F062Cu;
            // 0x1f0630: 0xfba30050  sqc2        $vf3, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184ED0u;
    if (runtime->hasFunction(0x184ED0u)) {
        auto targetFn = runtime->lookupFunction(0x184ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0634u; }
        if (ctx->pc != 0x1F0634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_184ed0_0x184f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0634u; }
        if (ctx->pc != 0x1F0634u) { return; }
    }
    ctx->pc = 0x1F0634u;
    // 0x1f0634: 0xdba30050  lqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1f0634u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0638: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1f0638u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f063c: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x1f063cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f0640: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1f0640u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f0644: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1f0644u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0648: 0x4be308bd  vmadday.xyzw $ACC, $vf1, $vf3y
    ctx->pc = 0x1f0648u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f064c: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1f064cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0650: 0x4be308be  vmaddaz.xyzw $ACC, $vf1, $vf3z
    ctx->pc = 0x1f0650u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f0654: 0x4be3108b  vmaddw.xyzw $vf2, $vf2, $vf3w
    ctx->pc = 0x1f0654u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f0658: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1f0658u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f065c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1f065cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0660: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1f0660u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0664: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1f0664u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f0668: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f066c: 0x46000004  c1          0x4
    ctx->pc = 0x1f066cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f0670: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1f0670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1f0674: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f0674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f0678: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1f0678u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f067c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1f067cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0680: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x1f0680u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0684: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1f0684u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x1f0688: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1f0688u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f068c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1f068cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0690: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x1f0690u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x1f0694: 0x4bc2086e  vopmsub.xyz $vf1, $vf1, $vf2
    ctx->pc = 0x1f0694u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f0698: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1f0698u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f069c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1f069cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f06a0: 0x2627001c  addiu       $a3, $s1, 0x1C
    ctx->pc = 0x1f06a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1f06a4: 0x26260018  addiu       $a2, $s1, 0x18
    ctx->pc = 0x1f06a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1f06a8: 0xc07c0ca  jal         func_1F0328
    ctx->pc = 0x1F06A8u;
    SET_GPR_U32(ctx, 31, 0x1F06B0u);
    ctx->pc = 0x1F06ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F06A8u;
            // 0x1f06ac: 0x48250800  qmfc2.ni    $a1, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0328u;
    if (runtime->hasFunction(0x1F0328u)) {
        auto targetFn = runtime->lookupFunction(0x1F0328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F06B0u; }
        if (ctx->pc != 0x1F06B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0328_0x1f0328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F06B0u; }
        if (ctx->pc != 0x1F06B0u) { return; }
    }
    ctx->pc = 0x1F06B0u;
    // 0x1f06b0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1f06b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f06b4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1f06b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f06b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f06b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f06bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F06BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F06C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F06BCu;
            // 0x1f06c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0718u: goto label_1f0718;
            case 0x1F072Cu: goto label_1f072c;
            case 0x1F07E8u: goto label_1f07e8;
            case 0x1F0810u: goto label_1f0810;
            case 0x1F0814u: goto label_1f0814;
            case 0x1F0848u: goto label_1f0848;
            case 0x1F0860u: goto label_1f0860;
            case 0x1F08B0u: goto label_1f08b0;
            case 0x1F08C4u: goto label_1f08c4;
            case 0x1F0A40u: goto label_1f0a40;
            case 0x1F0A4Cu: goto label_1f0a4c;
            case 0x1F0B48u: goto label_1f0b48;
            case 0x1F0B70u: goto label_1f0b70;
            case 0x1F0B74u: goto label_1f0b74;
            case 0x1F0BA8u: goto label_1f0ba8;
            case 0x1F0BC0u: goto label_1f0bc0;
            case 0x1F0DC0u: goto label_1f0dc0;
            case 0x1F0DD4u: goto label_1f0dd4;
            case 0x1F0E50u: goto label_1f0e50;
            case 0x1F0E84u: goto label_1f0e84;
            case 0x1F0EB0u: goto label_1f0eb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F06C4u;
    // 0x1f06c4: 0x0  nop
    ctx->pc = 0x1f06c4u;
    // NOP
    // 0x1f06c8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1f06c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1f06cc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1f06ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f06d0: 0x24425570  addiu       $v0, $v0, 0x5570
    ctx->pc = 0x1f06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21872));
    // 0x1f06d4: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x1f06d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1f06d8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1f06d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f06dc: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1f06dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f06e0: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x1f06e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f06e4: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1f06e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f06e8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1f06e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f06ec: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1f06ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f06f0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1f06f0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f06f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f06f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f06f8: 0x46000004  c1          0x4
    ctx->pc = 0x1f06f8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f06fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f06fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0700: 0x0  nop
    ctx->pc = 0x1f0700u;
    // NOP
    // 0x1f0704: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0704u;
    {
        const bool branch_taken_0x1f0704 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0704) {
            ctx->pc = 0x1F0708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0704u;
            // 0x1f0708: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0718u;
            goto label_1f0718;
        }
    }
    ctx->pc = 0x1F070Cu;
    // 0x1f070c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F070Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F070Cu;
            // 0x1f0710: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0718u: goto label_1f0718;
            case 0x1F072Cu: goto label_1f072c;
            case 0x1F07E8u: goto label_1f07e8;
            case 0x1F0810u: goto label_1f0810;
            case 0x1F0814u: goto label_1f0814;
            case 0x1F0848u: goto label_1f0848;
            case 0x1F0860u: goto label_1f0860;
            case 0x1F08B0u: goto label_1f08b0;
            case 0x1F08C4u: goto label_1f08c4;
            case 0x1F0A40u: goto label_1f0a40;
            case 0x1F0A4Cu: goto label_1f0a4c;
            case 0x1F0B48u: goto label_1f0b48;
            case 0x1F0B70u: goto label_1f0b70;
            case 0x1F0B74u: goto label_1f0b74;
            case 0x1F0BA8u: goto label_1f0ba8;
            case 0x1F0BC0u: goto label_1f0bc0;
            case 0x1F0DC0u: goto label_1f0dc0;
            case 0x1F0DD4u: goto label_1f0dd4;
            case 0x1F0E50u: goto label_1f0e50;
            case 0x1F0E84u: goto label_1f0e84;
            case 0x1F0EB0u: goto label_1f0eb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0714u;
    // 0x1f0714: 0x0  nop
    ctx->pc = 0x1f0714u;
    // NOP
label_1f0718:
    // 0x1f0718: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f0718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f071c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f071cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0720: 0x0  nop
    ctx->pc = 0x1f0720u;
    // NOP
    // 0x1f0724: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F0724u;
    {
        const bool branch_taken_0x1f0724 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0724) {
            ctx->pc = 0x1F0728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0724u;
            // 0x1f0728: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F072Cu;
            goto label_1f072c;
        }
    }
    ctx->pc = 0x1F072Cu;
label_1f072c:
    // 0x1f072c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F072Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0718u: goto label_1f0718;
            case 0x1F072Cu: goto label_1f072c;
            case 0x1F07E8u: goto label_1f07e8;
            case 0x1F0810u: goto label_1f0810;
            case 0x1F0814u: goto label_1f0814;
            case 0x1F0848u: goto label_1f0848;
            case 0x1F0860u: goto label_1f0860;
            case 0x1F08B0u: goto label_1f08b0;
            case 0x1F08C4u: goto label_1f08c4;
            case 0x1F0A40u: goto label_1f0a40;
            case 0x1F0A4Cu: goto label_1f0a4c;
            case 0x1F0B48u: goto label_1f0b48;
            case 0x1F0B70u: goto label_1f0b70;
            case 0x1F0B74u: goto label_1f0b74;
            case 0x1F0BA8u: goto label_1f0ba8;
            case 0x1F0BC0u: goto label_1f0bc0;
            case 0x1F0DC0u: goto label_1f0dc0;
            case 0x1F0DD4u: goto label_1f0dd4;
            case 0x1F0E50u: goto label_1f0e50;
            case 0x1F0E84u: goto label_1f0e84;
            case 0x1F0EB0u: goto label_1f0eb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0734u;
    // 0x1f0734: 0x0  nop
    ctx->pc = 0x1f0734u;
    // NOP
    // 0x1f0738: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1f0738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1f073c: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x1f073cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x1f0740: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1f0740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x1f0744: 0x24e25570  addiu       $v0, $a3, 0x5570
    ctx->pc = 0x1f0744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 21872));
    // 0x1f0748: 0xe7bc0150  swc1        $f28, 0x150($sp)
    ctx->pc = 0x1f0748u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1f074c: 0x48a43000  qmtc2.ni    $a0, $vf6
    ctx->pc = 0x1f074cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f0750: 0xe7bb0148  swc1        $f27, 0x148($sp)
    ctx->pc = 0x1f0750u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1f0754: 0xe7ba0140  swc1        $f26, 0x140($sp)
    ctx->pc = 0x1f0754u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1f0758: 0xe7b90138  swc1        $f25, 0x138($sp)
    ctx->pc = 0x1f0758u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1f075c: 0xe7b80130  swc1        $f24, 0x130($sp)
    ctx->pc = 0x1f075cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1f0760: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x1f0760u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x1f0764: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x1f0764u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1f0768: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x1f0768u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1f076c: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1f076cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1f0770: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1f0770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f0774: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1F0774u;
    {
        const bool branch_taken_0x1f0774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0774u;
            // 0x1f0778: 0x48a51800  qmtc2.ni    $a1, $vf3 (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0774) {
            ctx->pc = 0x1F0848u;
            goto label_1f0848;
        }
    }
    ctx->pc = 0x1F077Cu;
    // 0x1f077c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1f077cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1f0780: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0784: 0x460c6040  add.s       $f1, $f12, $f12
    ctx->pc = 0x1f0784u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x1f0788: 0x8ce65570  lw          $a2, 0x5570($a3)
    ctx->pc = 0x1f0788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 21872)));
    // 0x1f078c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1f078cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1f0790: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1f0790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1f0794: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f0794u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f0798: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1f0798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1f079c: 0x70481b89  pcpyld      $v1, $v0, $t0
    ctx->pc = 0x1f079cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x1f07a0: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1f07a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1f07a4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1f07a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1f07a8: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1f07a8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1f07ac: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1f07acu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f07b0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1f07b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f07b4: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x1f07b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f07b8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1f07b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1f07bc: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1f07bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1f07c0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1f07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f07c4: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F07C4u;
    {
        const bool branch_taken_0x1f07c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F07C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F07C4u;
            // 0x1f07c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f07c4) {
            ctx->pc = 0x1F0810u;
            goto label_1f0810;
        }
    }
    ctx->pc = 0x1F07CCu;
    // 0x1f07cc: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1f07ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1f07d0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f07d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f07d4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1f07d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f07d8: 0x0  nop
    ctx->pc = 0x1f07d8u;
    // NOP
    // 0x1f07dc: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x1F07DCu;
    {
        const bool branch_taken_0x1f07dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f07dc) {
            ctx->pc = 0x1F07E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F07DCu;
            // 0x1f07e0: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0814u;
            goto label_1f0814;
        }
    }
    ctx->pc = 0x1F07E4u;
    // 0x1f07e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f07e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f07e8:
    // 0x1f07e8: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1f07e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f07ec: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1f07ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f07f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F07F0u;
    {
        const bool branch_taken_0x1f07f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F07F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F07F0u;
            // 0x1f07f4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f07f0) {
            ctx->pc = 0x1F0810u;
            goto label_1f0810;
        }
    }
    ctx->pc = 0x1F07F8u;
    // 0x1f07f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f07fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f07fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0800: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1f0800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0804: 0x0  nop
    ctx->pc = 0x1f0804u;
    // NOP
    // 0x1f0808: 0x4502fff7  bc1fl       . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F0808u;
    {
        const bool branch_taken_0x1f0808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0808) {
            ctx->pc = 0x1F080Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0808u;
            // 0x1f080c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F07E8u;
            runtime->cooperativeGuestYield();
            goto label_1f07e8;
        }
    }
    ctx->pc = 0x1F0810u;
label_1f0810:
    // 0x1f0810: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1f0810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1f0814:
    // 0x1f0814: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x1f0814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1f0818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f0818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f081c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f081cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0820: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x1f0820u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f0824: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1f0824u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f0828: 0x4be508bd  vmadday.xyzw $ACC, $vf1, $vf5y
    ctx->pc = 0x1f0828u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f082c: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1f082cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f0830: 0x4be508be  vmaddaz.xyzw $ACC, $vf1, $vf5z
    ctx->pc = 0x1f0830u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f0834: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1f0834u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f0838: 0x4be5090b  vmaddw.xyzw $vf4, $vf1, $vf5w
    ctx->pc = 0x1f0838u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f083c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F083Cu;
    {
        const bool branch_taken_0x1f083c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F083Cu;
            // 0x1f0840: 0x24e25570  addiu       $v0, $a3, 0x5570 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 21872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f083c) {
            ctx->pc = 0x1F0860u;
            goto label_1f0860;
        }
    }
    ctx->pc = 0x1F0844u;
    // 0x1f0844: 0x0  nop
    ctx->pc = 0x1f0844u;
    // NOP
label_1f0848:
    // 0x1f0848: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f0848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f084c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1f084cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f0850: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1f0850u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0854: 0x4be40b3c  vmove.xyzw  $vf4, $vf1
    ctx->pc = 0x1f0854u;
    ctx->vu0_vf[4] = ctx->vu0_vf[1];
    // 0x1f0858: 0x4a422100  vaddx.z     $vf4, $vf4, $vf2x
    ctx->pc = 0x1f0858u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f085c: 0x24e25570  addiu       $v0, $a3, 0x5570
    ctx->pc = 0x1f085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 21872));
label_1f0860:
    // 0x1f0860: 0x4be331ac  vsub.xyzw   $vf6, $vf6, $vf3
    ctx->pc = 0x1f0860u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1f0864: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1f0864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0868: 0xc45b001c  lwc1        $f27, 0x1C($v0)
    ctx->pc = 0x1f0868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1f086c: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x1f086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0870: 0xc4590010  lwc1        $f25, 0x10($v0)
    ctx->pc = 0x1f0870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1f0874: 0xc45c0014  lwc1        $f28, 0x14($v0)
    ctx->pc = 0x1f0874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1f0878: 0xc45a0018  lwc1        $f26, 0x18($v0)
    ctx->pc = 0x1f0878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1f087c: 0x4be630aa  vmul.xyzw   $vf2, $vf6, $vf6
    ctx->pc = 0x1f087cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f0880: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1f0880u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0884: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1f0884u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0888: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1f0888u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f088c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f088cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0890: 0x46000604  c1          0x604
    ctx->pc = 0x1f0890u;
    ctx->f[24] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f0894: 0x4601c034  c.lt.s      $f24, $f1
    ctx->pc = 0x1f0894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0898: 0x0  nop
    ctx->pc = 0x1f0898u;
    // NOP
    // 0x1f089c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1F089Cu;
    {
        const bool branch_taken_0x1f089c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f089c) {
            ctx->pc = 0x1F08A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F089Cu;
            // 0x1f08a0: 0x4602c601  sub.s       $f24, $f24, $f2 (Delay Slot)
        ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F08B0u;
            goto label_1f08b0;
        }
    }
    ctx->pc = 0x1F08A4u;
    // 0x1f08a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F08A4u;
    {
        const bool branch_taken_0x1f08a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F08A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F08A4u;
            // 0x1f08a8: 0x46180e01  sub.s       $f24, $f1, $f24 (Delay Slot)
        ctx->f[24] = FPU_SUB_S(ctx->f[1], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f08a4) {
            ctx->pc = 0x1F08C4u;
            goto label_1f08c4;
        }
    }
    ctx->pc = 0x1F08ACu;
    // 0x1f08ac: 0x0  nop
    ctx->pc = 0x1f08acu;
    // NOP
label_1f08b0:
    // 0x1f08b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f08b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f08b4: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x1f08b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f08b8: 0x0  nop
    ctx->pc = 0x1f08b8u;
    // NOP
    // 0x1f08bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F08BCu;
    {
        const bool branch_taken_0x1f08bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f08bc) {
            ctx->pc = 0x1F08C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F08BCu;
            // 0x1f08c0: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F08C4u;
            goto label_1f08c4;
        }
    }
    ctx->pc = 0x1F08C4u;
label_1f08c4:
    // 0x1f08c4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1f08c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1f08c8: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1f08c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1f08cc: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1f08ccu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1f08d0: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x1f08d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f08d4: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1f08d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1f08d8: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1f08d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1f08dc: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1f08dcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1f08e0: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1f08e0u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f08e4: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x1f08e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f08e8: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1f08e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f08ec: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x1f08ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f08f0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1f08f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f08f4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1f08f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f08f8: 0x4be5233c  vmove.xyzw  $vf5, $vf4
    ctx->pc = 0x1f08f8u;
    ctx->vu0_vf[5] = ctx->vu0_vf[4];
    // 0x1f08fc: 0x4bc41afe  vopmula.xyz $ACC, $vf3, $vf4
    ctx->pc = 0x1f08fcu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]);
    // 0x1f0900: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1f0900u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f0904: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f0904u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f0908: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x1f0908u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1f090c: 0x4a0002ff  vnop
    ctx->pc = 0x1f090cu;
    // NOP operation, no action needed for VU0
    // 0x1f0910: 0x4a0002ff  vnop
    ctx->pc = 0x1f0910u;
    // NOP operation, no action needed for VU0
    // 0x1f0914: 0x4bc320ee  vopmsub.xyz $vf3, $vf4, $vf3
    ctx->pc = 0x1f0914u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f0918: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x1f0918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1f091c: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x1f091cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f0920: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1f0920u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f0924: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1f0924u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0928: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1f0928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f092c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1f092cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f0930: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f0930u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f0934: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1f0934u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f0938: 0x4a0002ff  vnop
    ctx->pc = 0x1f0938u;
    // NOP operation, no action needed for VU0
    // 0x1f093c: 0x4a0002ff  vnop
    ctx->pc = 0x1f093cu;
    // NOP operation, no action needed for VU0
    // 0x1f0940: 0x4bc32afe  vopmula.xyz $ACC, $vf5, $vf3
    ctx->pc = 0x1f0940u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]);
    // 0x1f0944: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1f0944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f0948: 0x4bc5186e  vopmsub.xyz $vf1, $vf3, $vf5
    ctx->pc = 0x1f0948u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f094c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1f094cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0950: 0x4be1092a  vmul.xyzw   $vf4, $vf1, $vf1
    ctx->pc = 0x1f0950u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f0954: 0x4b042081  vaddy.x     $vf2, $vf4, $vf4y
    ctx->pc = 0x1f0954u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f0958: 0x4b041082  vaddz.x     $vf2, $vf2, $vf4z
    ctx->pc = 0x1f0958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f095c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1f095cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f0960: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f0960u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f0964: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1f0964u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0968: 0x4a0002ff  vnop
    ctx->pc = 0x1f0968u;
    // NOP operation, no action needed for VU0
    // 0x1f096c: 0x4a0002ff  vnop
    ctx->pc = 0x1f096cu;
    // NOP operation, no action needed for VU0
    // 0x1f0970: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x1f0970u;
    ctx->vu0_vf[4] = ctx->vu0_vf[0];
    // 0x1f0974: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1f0974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f0978: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x1f0978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f097c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1f097cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f0980: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1f0980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f0984: 0xfba500b0  sqc2        $vf5, 0xB0($sp)
    ctx->pc = 0x1f0984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1f0988: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f0988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f098c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1f098cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f0990: 0xc0613b4  jal         func_184ED0
    ctx->pc = 0x1F0990u;
    SET_GPR_U32(ctx, 31, 0x1F0998u);
    ctx->pc = 0x1F0994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0990u;
            // 0x1f0994: 0xfba600f0  sqc2        $vf6, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184ED0u;
    if (runtime->hasFunction(0x184ED0u)) {
        auto targetFn = runtime->lookupFunction(0x184ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0998u; }
        if (ctx->pc != 0x1F0998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_184ed0_0x184f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0998u; }
        if (ctx->pc != 0x1F0998u) { return; }
    }
    ctx->pc = 0x1F0998u;
    // 0x1f0998: 0xdba600f0  lqc2        $vf6, 0xF0($sp)
    ctx->pc = 0x1f0998u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f099c: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1f099cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f09a0: 0x4be609bc  vmulax.xyzw $ACC, $vf1, $vf6x
    ctx->pc = 0x1f09a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f09a4: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1f09a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f09a8: 0x4be608bd  vmadday.xyzw $ACC, $vf1, $vf6y
    ctx->pc = 0x1f09a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f09ac: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1f09acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f09b0: 0x4be608be  vmaddaz.xyzw $ACC, $vf1, $vf6z
    ctx->pc = 0x1f09b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f09b4: 0xdba10080  lqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1f09b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f09b8: 0x4be6084b  vmaddw.xyzw $vf1, $vf1, $vf6w
    ctx->pc = 0x1f09b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f09bc: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x1f09bcu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f09c0: 0x4488a000  mtc1        $t0, $f20
    ctx->pc = 0x1f09c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f09c4: 0x70081789  pexew       $v0, $t0
    ctx->pc = 0x1f09c4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1f09c8: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1f09c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f09cc: 0x4614a342  mul.s       $f13, $f20, $f20
    ctx->pc = 0x1f09ccu;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1f09d0: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x1f09d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x1f09d4: 0x700817c9  prot3w      $v0, $t0
    ctx->pc = 0x1f09d4u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1f09d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f09d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f09dc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f09dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f09e0: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1f09e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1f09e4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f09e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f09e8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f09e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f09ec: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1f09ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1f09f0: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x1f09f0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1f09f4: 0x460d0344  c1          0xD0344
    ctx->pc = 0x1f09f4u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f09f8: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x1F09F8u;
    SET_GPR_U32(ctx, 31, 0x1F0A00u);
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A00u; }
        if (ctx->pc != 0x1F0A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A00u; }
        if (ctx->pc != 0x1F0A00u) { return; }
    }
    ctx->pc = 0x1F0A00u;
    // 0x1f0a00: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x1f0a00u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x1f0a04: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x1f0a04u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x1f0a08: 0x4600ab47  neg.s       $f13, $f21
    ctx->pc = 0x1f0a08u;
    ctx->f[13] = FPU_NEG_S(ctx->f[21]);
    // 0x1f0a0c: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x1F0A0Cu;
    SET_GPR_U32(ctx, 31, 0x1F0A14u);
    ctx->pc = 0x1F0A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0A0Cu;
            // 0x1f0a10: 0x46170502  mul.s       $f20, $f0, $f23 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A14u; }
        if (ctx->pc != 0x1F0A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A14u; }
        if (ctx->pc != 0x1F0A14u) { return; }
    }
    ctx->pc = 0x1F0A14u;
    // 0x1f0a14: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x1f0a14u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x1f0a18: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x1f0a18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x1f0a1c: 0x4600db86  mov.s       $f14, $f27
    ctx->pc = 0x1f0a1cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[27]);
    // 0x1f0a20: 0xc07c052  jal         func_1F0148
    ctx->pc = 0x1F0A20u;
    SET_GPR_U32(ctx, 31, 0x1F0A28u);
    ctx->pc = 0x1F0A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0A20u;
            // 0x1f0a24: 0x46170302  mul.s       $f12, $f0, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0148u;
    if (runtime->hasFunction(0x1F0148u)) {
        auto targetFn = runtime->lookupFunction(0x1F0148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A28u; }
        if (ctx->pc != 0x1F0A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f0148_0x1f0210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A28u; }
        if (ctx->pc != 0x1F0A28u) { return; }
    }
    ctx->pc = 0x1F0A28u;
    // 0x1f0a28: 0x4619a034  c.lt.s      $f20, $f25
    ctx->pc = 0x1f0a28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0a2c: 0x0  nop
    ctx->pc = 0x1f0a2cu;
    // NOP
    // 0x1f0a30: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0A30u;
    {
        const bool branch_taken_0x1f0a30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F0A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0A30u;
            // 0x1f0a34: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a30) {
            ctx->pc = 0x1F0A40u;
            goto label_1f0a40;
        }
    }
    ctx->pc = 0x1F0A38u;
    // 0x1f0a38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0A38u;
    {
        const bool branch_taken_0x1f0a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0A38u;
            // 0x1f0a3c: 0x4614c801  sub.s       $f0, $f25, $f20 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a38) {
            ctx->pc = 0x1F0A4Cu;
            goto label_1f0a4c;
        }
    }
    ctx->pc = 0x1F0A40u;
label_1f0a40:
    // 0x1f0a40: 0x461ca041  sub.s       $f1, $f20, $f28
    ctx->pc = 0x1f0a40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[28]);
    // 0x1f0a44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0a48: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x1f0a48u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
label_1f0a4c:
    // 0x1f0a4c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1f0a4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1f0a50: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1f0a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1f0a54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f0a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0a58: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1f0a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f0a5c: 0xc7bc0150  lwc1        $f28, 0x150($sp)
    ctx->pc = 0x1f0a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1f0a60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f0a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f0a64: 0xc7bb0148  lwc1        $f27, 0x148($sp)
    ctx->pc = 0x1f0a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1f0a68: 0xc7ba0140  lwc1        $f26, 0x140($sp)
    ctx->pc = 0x1f0a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1f0a6c: 0xc7b90138  lwc1        $f25, 0x138($sp)
    ctx->pc = 0x1f0a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1f0a70: 0x4600c028  max.s       $f0, $f24, $f0
    ctx->pc = 0x1f0a70u;
    ctx->f[0] = std::max(ctx->f[24], ctx->f[0]);
    // 0x1f0a74: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x1f0a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f0a78: 0xc7b80130  lwc1        $f24, 0x130($sp)
    ctx->pc = 0x1f0a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f0a7c: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x1f0a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f0a80: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x1f0a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f0a84: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1f0a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f0a88: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0A88u;
            // 0x1f0a8c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0718u: goto label_1f0718;
            case 0x1F072Cu: goto label_1f072c;
            case 0x1F07E8u: goto label_1f07e8;
            case 0x1F0810u: goto label_1f0810;
            case 0x1F0814u: goto label_1f0814;
            case 0x1F0848u: goto label_1f0848;
            case 0x1F0860u: goto label_1f0860;
            case 0x1F08B0u: goto label_1f08b0;
            case 0x1F08C4u: goto label_1f08c4;
            case 0x1F0A40u: goto label_1f0a40;
            case 0x1F0A4Cu: goto label_1f0a4c;
            case 0x1F0B48u: goto label_1f0b48;
            case 0x1F0B70u: goto label_1f0b70;
            case 0x1F0B74u: goto label_1f0b74;
            case 0x1F0BA8u: goto label_1f0ba8;
            case 0x1F0BC0u: goto label_1f0bc0;
            case 0x1F0DC0u: goto label_1f0dc0;
            case 0x1F0DD4u: goto label_1f0dd4;
            case 0x1F0E50u: goto label_1f0e50;
            case 0x1F0E84u: goto label_1f0e84;
            case 0x1F0EB0u: goto label_1f0eb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0A90u;
    // 0x1f0a90: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1f0a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1f0a94: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x1f0a94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x1f0a98: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1f0a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x1f0a9c: 0x24e25570  addiu       $v0, $a3, 0x5570
    ctx->pc = 0x1f0a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 21872));
    // 0x1f0aa0: 0xe7be0190  swc1        $f30, 0x190($sp)
    ctx->pc = 0x1f0aa0u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x1f0aa4: 0xe7bd0188  swc1        $f29, 0x188($sp)
    ctx->pc = 0x1f0aa4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x1f0aa8: 0xe7bc0180  swc1        $f28, 0x180($sp)
    ctx->pc = 0x1f0aa8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1f0aac: 0xe7bb0178  swc1        $f27, 0x178($sp)
    ctx->pc = 0x1f0aacu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x1f0ab0: 0xe7ba0170  swc1        $f26, 0x170($sp)
    ctx->pc = 0x1f0ab0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x1f0ab4: 0xe7b90168  swc1        $f25, 0x168($sp)
    ctx->pc = 0x1f0ab4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1f0ab8: 0xe7b80160  swc1        $f24, 0x160($sp)
    ctx->pc = 0x1f0ab8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1f0abc: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x1f0abcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x1f0ac0: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x1f0ac0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1f0ac4: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x1f0ac4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1f0ac8: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x1f0ac8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1f0acc: 0x7fa40100  sq          $a0, 0x100($sp)
    ctx->pc = 0x1f0accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 4));
    // 0x1f0ad0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1f0ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f0ad4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1F0AD4u;
    {
        const bool branch_taken_0x1f0ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0AD4u;
            // 0x1f0ad8: 0x7fa50110  sq          $a1, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ad4) {
            ctx->pc = 0x1F0BA8u;
            goto label_1f0ba8;
        }
    }
    ctx->pc = 0x1F0ADCu;
    // 0x1f0adc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1f0adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1f0ae0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0ae4: 0x460c6040  add.s       $f1, $f12, $f12
    ctx->pc = 0x1f0ae4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x1f0ae8: 0x8ce65570  lw          $a2, 0x5570($a3)
    ctx->pc = 0x1f0ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 21872)));
    // 0x1f0aec: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1f0aecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1f0af0: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1f0af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1f0af4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f0af4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f0af8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1f0af8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1f0afc: 0x70481b89  pcpyld      $v1, $v0, $t0
    ctx->pc = 0x1f0afcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x1f0b00: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1f0b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1f0b04: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1f0b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1f0b08: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1f0b08u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1f0b0c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1f0b0cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f0b10: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1f0b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f0b14: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x1f0b14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f0b18: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1f0b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1f0b1c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1f0b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1f0b20: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1f0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f0b24: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F0B24u;
    {
        const bool branch_taken_0x1f0b24 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F0B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0B24u;
            // 0x1f0b28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b24) {
            ctx->pc = 0x1F0B70u;
            goto label_1f0b70;
        }
    }
    ctx->pc = 0x1F0B2Cu;
    // 0x1f0b2c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1f0b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1f0b30: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f0b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0b34: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1f0b34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0b38: 0x0  nop
    ctx->pc = 0x1f0b38u;
    // NOP
    // 0x1f0b3c: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x1F0B3Cu;
    {
        const bool branch_taken_0x1f0b3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0b3c) {
            ctx->pc = 0x1F0B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0B3Cu;
            // 0x1f0b40: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0B74u;
            goto label_1f0b74;
        }
    }
    ctx->pc = 0x1F0B44u;
    // 0x1f0b44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f0b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f0b48:
    // 0x1f0b48: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1f0b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f0b4c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1f0b4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f0b50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0B50u;
    {
        const bool branch_taken_0x1f0b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0B50u;
            // 0x1f0b54: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b50) {
            ctx->pc = 0x1F0B70u;
            goto label_1f0b70;
        }
    }
    ctx->pc = 0x1F0B58u;
    // 0x1f0b58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f0b5c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f0b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0b60: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1f0b60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0b64: 0x0  nop
    ctx->pc = 0x1f0b64u;
    // NOP
    // 0x1f0b68: 0x4502fff7  bc1fl       . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F0B68u;
    {
        const bool branch_taken_0x1f0b68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0b68) {
            ctx->pc = 0x1F0B6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0B68u;
            // 0x1f0b6c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0B48u;
            runtime->cooperativeGuestYield();
            goto label_1f0b48;
        }
    }
    ctx->pc = 0x1F0B70u;
label_1f0b70:
    // 0x1f0b70: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1f0b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1f0b74:
    // 0x1f0b74: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x1f0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1f0b78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f0b7c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f0b7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0b80: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x1f0b80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f0b84: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1f0b84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f0b88: 0x4be508bd  vmadday.xyzw $ACC, $vf1, $vf5y
    ctx->pc = 0x1f0b88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f0b8c: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1f0b8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f0b90: 0x4be508be  vmaddaz.xyzw $ACC, $vf1, $vf5z
    ctx->pc = 0x1f0b90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f0b94: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1f0b94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f0b98: 0x4be5090b  vmaddw.xyzw $vf4, $vf1, $vf5w
    ctx->pc = 0x1f0b98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f0b9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0B9Cu;
    {
        const bool branch_taken_0x1f0b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0B9Cu;
            // 0x1f0ba0: 0x24e25570  addiu       $v0, $a3, 0x5570 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 21872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b9c) {
            ctx->pc = 0x1F0BC0u;
            goto label_1f0bc0;
        }
    }
    ctx->pc = 0x1F0BA4u;
    // 0x1f0ba4: 0x0  nop
    ctx->pc = 0x1f0ba4u;
    // NOP
label_1f0ba8:
    // 0x1f0ba8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f0ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f0bac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1f0bacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f0bb0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1f0bb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0bb4: 0x4be40b3c  vmove.xyzw  $vf4, $vf1
    ctx->pc = 0x1f0bb4u;
    ctx->vu0_vf[4] = ctx->vu0_vf[1];
    // 0x1f0bb8: 0x4a422100  vaddx.z     $vf4, $vf4, $vf2x
    ctx->pc = 0x1f0bb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f0bbc: 0x24e25570  addiu       $v0, $a3, 0x5570
    ctx->pc = 0x1f0bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 21872));
label_1f0bc0:
    // 0x1f0bc0: 0xc45d0008  lwc1        $f29, 0x8($v0)
    ctx->pc = 0x1f0bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x1f0bc4: 0xc45c001c  lwc1        $f28, 0x1C($v0)
    ctx->pc = 0x1f0bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1f0bc8: 0xc4590010  lwc1        $f25, 0x10($v0)
    ctx->pc = 0x1f0bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1f0bcc: 0xc45a0014  lwc1        $f26, 0x14($v0)
    ctx->pc = 0x1f0bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1f0bd0: 0xc45b0018  lwc1        $f27, 0x18($v0)
    ctx->pc = 0x1f0bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1f0bd4: 0xc45e000c  lwc1        $f30, 0xC($v0)
    ctx->pc = 0x1f0bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x1f0bd8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1f0bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1f0bdc: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1f0bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1f0be0: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1f0be0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1f0be4: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1f0be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1f0be8: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1f0be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1f0bec: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1f0becu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1f0bf0: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x1f0bf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f0bf4: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1f0bf4u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f0bf8: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x1f0bf8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f0bfc: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1f0bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f0c00: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x1f0c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f0c04: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1f0c04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0c08: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1f0c08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0c0c: 0x4be5233c  vmove.xyzw  $vf5, $vf4
    ctx->pc = 0x1f0c0cu;
    ctx->vu0_vf[5] = ctx->vu0_vf[4];
    // 0x1f0c10: 0x4bc41afe  vopmula.xyz $ACC, $vf3, $vf4
    ctx->pc = 0x1f0c10u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]);
    // 0x1f0c14: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1f0c14u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f0c18: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f0c18u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f0c1c: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x1f0c1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1f0c20: 0x4a0002ff  vnop
    ctx->pc = 0x1f0c20u;
    // NOP operation, no action needed for VU0
    // 0x1f0c24: 0x4a0002ff  vnop
    ctx->pc = 0x1f0c24u;
    // NOP operation, no action needed for VU0
    // 0x1f0c28: 0x4bc320ee  vopmsub.xyz $vf3, $vf4, $vf3
    ctx->pc = 0x1f0c28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f0c2c: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x1f0c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1f0c30: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x1f0c30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f0c34: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1f0c34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f0c38: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1f0c38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0c3c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1f0c3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0c40: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1f0c40u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f0c44: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f0c44u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f0c48: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1f0c48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f0c4c: 0x4a0002ff  vnop
    ctx->pc = 0x1f0c4cu;
    // NOP operation, no action needed for VU0
    // 0x1f0c50: 0x4a0002ff  vnop
    ctx->pc = 0x1f0c50u;
    // NOP operation, no action needed for VU0
    // 0x1f0c54: 0x4bc32afe  vopmula.xyz $ACC, $vf5, $vf3
    ctx->pc = 0x1f0c54u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]);
    // 0x1f0c58: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1f0c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f0c5c: 0x4bc5186e  vopmsub.xyz $vf1, $vf3, $vf5
    ctx->pc = 0x1f0c5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f0c60: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1f0c60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0c64: 0x4be1092a  vmul.xyzw   $vf4, $vf1, $vf1
    ctx->pc = 0x1f0c64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f0c68: 0x4b042081  vaddy.x     $vf2, $vf4, $vf4y
    ctx->pc = 0x1f0c68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f0c6c: 0x4b041082  vaddz.x     $vf2, $vf2, $vf4z
    ctx->pc = 0x1f0c6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f0c70: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1f0c70u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f0c74: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f0c74u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f0c78: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1f0c78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0c7c: 0x4a0002ff  vnop
    ctx->pc = 0x1f0c7cu;
    // NOP operation, no action needed for VU0
    // 0x1f0c80: 0x4a0002ff  vnop
    ctx->pc = 0x1f0c80u;
    // NOP operation, no action needed for VU0
    // 0x1f0c84: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x1f0c84u;
    ctx->vu0_vf[4] = ctx->vu0_vf[0];
    // 0x1f0c88: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1f0c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f0c8c: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1f0c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f0c90: 0xdba20100  lqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1f0c90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f0c94: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1f0c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f0c98: 0xdba30110  lqc2        $vf3, 0x110($sp)
    ctx->pc = 0x1f0c98u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f0c9c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1f0c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f0ca0: 0x4be310ac  vsub.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1f0ca0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f0ca4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1f0ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f0ca8: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x1f0ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f0cac: 0xfba50070  sqc2        $vf5, 0x70($sp)
    ctx->pc = 0x1f0cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1f0cb0: 0xc0613b4  jal         func_184ED0
    ctx->pc = 0x1F0CB0u;
    SET_GPR_U32(ctx, 31, 0x1F0CB8u);
    ctx->pc = 0x1F0CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0CB0u;
            // 0x1f0cb4: 0xfba40080  sqc2        $vf4, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184ED0u;
    if (runtime->hasFunction(0x184ED0u)) {
        auto targetFn = runtime->lookupFunction(0x184ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0CB8u; }
        if (ctx->pc != 0x1F0CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_184ed0_0x184f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0CB8u; }
        if (ctx->pc != 0x1F0CB8u) { return; }
    }
    ctx->pc = 0x1F0CB8u;
    // 0x1f0cb8: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1f0cb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f0cbc: 0xdba20120  lqc2        $vf2, 0x120($sp)
    ctx->pc = 0x1f0cbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f0cc0: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1f0cc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f0cc4: 0xdba100a0  lqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1f0cc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0cc8: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1f0cc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f0ccc: 0xdba100b0  lqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1f0cccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f0cd0: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1f0cd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f0cd4: 0xdba100c0  lqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1f0cd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f0cd8: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1f0cd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f0cdc: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1f0cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f0ce0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f0ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f0ce4: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1f0ce4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1f0ce8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1f0ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1f0cec: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f0cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f0cf0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1f0cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1f0cf4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1f0cf4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f0cf8: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x1f0cf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f0cfc: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x1f0cfcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1f0d00: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x1f0d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f0d04: 0x4615ab42  mul.s       $f13, $f21, $f21
    ctx->pc = 0x1f0d04u;
    ctx->f[13] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x1f0d08: 0x4616b002  mul.s       $f0, $f22, $f22
    ctx->pc = 0x1f0d08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x1f0d0c: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1f0d0cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1f0d10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f0d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f0d14: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x1f0d14u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1f0d18: 0x460d0344  c1          0xD0344
    ctx->pc = 0x1f0d18u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f0d1c: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x1F0D1Cu;
    SET_GPR_U32(ctx, 31, 0x1F0D24u);
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0D24u; }
        if (ctx->pc != 0x1F0D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0D24u; }
        if (ctx->pc != 0x1F0D24u) { return; }
    }
    ctx->pc = 0x1F0D24u;
    // 0x1f0d24: 0x46170503  div.s       $f20, $f0, $f23
    ctx->pc = 0x1f0d24u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[23];
    // 0x1f0d28: 0x4600ab07  neg.s       $f12, $f21
    ctx->pc = 0x1f0d28u;
    ctx->f[12] = FPU_NEG_S(ctx->f[21]);
    // 0x1f0d2c: 0x4600b347  neg.s       $f13, $f22
    ctx->pc = 0x1f0d2cu;
    ctx->f[13] = FPU_NEG_S(ctx->f[22]);
    // 0x1f0d30: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x1F0D30u;
    SET_GPR_U32(ctx, 31, 0x1F0D38u);
    ctx->pc = 0x1F0D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0D30u;
            // 0x1f0d34: 0x4618a502  mul.s       $f20, $f20, $f24 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0D38u; }
        if (ctx->pc != 0x1F0D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0D38u; }
        if (ctx->pc != 0x1F0D38u) { return; }
    }
    ctx->pc = 0x1F0D38u;
    // 0x1f0d38: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x1f0d38u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[23];
    // 0x1f0d3c: 0x4619a528  max.s       $f20, $f20, $f25
    ctx->pc = 0x1f0d3cu;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[25]);
    // 0x1f0d40: 0x46180302  mul.s       $f12, $f0, $f24
    ctx->pc = 0x1f0d40u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x1f0d44: 0x461aa529  min.s       $f20, $f20, $f26
    ctx->pc = 0x1f0d44u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[26]);
    // 0x1f0d48: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x1f0d48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x1f0d4c: 0xc07c020  jal         func_1F0080
    ctx->pc = 0x1F0D4Cu;
    SET_GPR_U32(ctx, 31, 0x1F0D54u);
    ctx->pc = 0x1F0D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0D4Cu;
            // 0x1f0d50: 0x4600e386  mov.s       $f14, $f28 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0080u;
    if (runtime->hasFunction(0x1F0080u)) {
        auto targetFn = runtime->lookupFunction(0x1F0080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0D54u; }
        if (ctx->pc != 0x1F0D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f0080_0x1f0148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0D54u; }
        if (ctx->pc != 0x1F0D54u) { return; }
    }
    ctx->pc = 0x1F0D54u;
    // 0x1f0d54: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f0d54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f0d58: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1f0d58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1f0d5c: 0xc07c0b0  jal         func_1F02C0
    ctx->pc = 0x1F0D5Cu;
    SET_GPR_U32(ctx, 31, 0x1F0D64u);
    ctx->pc = 0x1F0D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0D5Cu;
            // 0x1f0d60: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F02C0u;
    if (runtime->hasFunction(0x1F02C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F02C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0D64u; }
        if (ctx->pc != 0x1F0D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F02C0_0x1f02c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0D64u; }
        if (ctx->pc != 0x1F0D64u) { return; }
    }
    ctx->pc = 0x1F0D64u;
    // 0x1f0d64: 0xdba200f0  lqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x1f0d64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f0d68: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1f0d68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0d6c: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1f0d6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f0d70: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1f0d70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f0d74: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1f0d74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f0d78: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1f0d78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f0d7c: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1f0d7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f0d80: 0xdba10080  lqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1f0d80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f0d84: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1f0d84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f0d88: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1f0d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f0d8c: 0xdba30120  lqc2        $vf3, 0x120($sp)
    ctx->pc = 0x1f0d8cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f0d90: 0x4be118aa  vmul.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1f0d90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f0d94: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1f0d94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0d98: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1f0d98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0d9c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1f0d9cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f0da0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0da4: 0x461d0034  c.lt.s      $f0, $f29
    ctx->pc = 0x1f0da4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[29])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0da8: 0x0  nop
    ctx->pc = 0x1f0da8u;
    // NOP
    // 0x1f0dac: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0DACu;
    {
        const bool branch_taken_0x1f0dac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0dac) {
            ctx->pc = 0x1F0DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0DACu;
            // 0x1f0db0: 0x461e0001  sub.s       $f0, $f0, $f30 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[30]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0DC0u;
            goto label_1f0dc0;
        }
    }
    ctx->pc = 0x1F0DB4u;
    // 0x1f0db4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0DB4u;
    {
        const bool branch_taken_0x1f0db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0DB4u;
            // 0x1f0db8: 0x4600e801  sub.s       $f0, $f29, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[29], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0db4) {
            ctx->pc = 0x1F0DD4u;
            goto label_1f0dd4;
        }
    }
    ctx->pc = 0x1F0DBCu;
    // 0x1f0dbc: 0x0  nop
    ctx->pc = 0x1f0dbcu;
    // NOP
label_1f0dc0:
    // 0x1f0dc0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f0dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0dc4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f0dc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0dc8: 0x0  nop
    ctx->pc = 0x1f0dc8u;
    // NOP
    // 0x1f0dcc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F0DCCu;
    {
        const bool branch_taken_0x1f0dcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0dcc) {
            ctx->pc = 0x1F0DD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0DCCu;
            // 0x1f0dd0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0DD4u;
            goto label_1f0dd4;
        }
    }
    ctx->pc = 0x1F0DD4u;
label_1f0dd4:
    // 0x1f0dd4: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1f0dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f0dd8: 0xc7be0190  lwc1        $f30, 0x190($sp)
    ctx->pc = 0x1f0dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x1f0ddc: 0xc7bd0188  lwc1        $f29, 0x188($sp)
    ctx->pc = 0x1f0ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x1f0de0: 0xc7bc0180  lwc1        $f28, 0x180($sp)
    ctx->pc = 0x1f0de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1f0de4: 0xc7bb0178  lwc1        $f27, 0x178($sp)
    ctx->pc = 0x1f0de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1f0de8: 0xc7ba0170  lwc1        $f26, 0x170($sp)
    ctx->pc = 0x1f0de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1f0dec: 0xc7b90168  lwc1        $f25, 0x168($sp)
    ctx->pc = 0x1f0decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1f0df0: 0xc7b80160  lwc1        $f24, 0x160($sp)
    ctx->pc = 0x1f0df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f0df4: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x1f0df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f0df8: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x1f0df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f0dfc: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x1f0dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f0e00: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x1f0e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f0e04: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E04u;
            // 0x1f0e08: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0718u: goto label_1f0718;
            case 0x1F072Cu: goto label_1f072c;
            case 0x1F07E8u: goto label_1f07e8;
            case 0x1F0810u: goto label_1f0810;
            case 0x1F0814u: goto label_1f0814;
            case 0x1F0848u: goto label_1f0848;
            case 0x1F0860u: goto label_1f0860;
            case 0x1F08B0u: goto label_1f08b0;
            case 0x1F08C4u: goto label_1f08c4;
            case 0x1F0A40u: goto label_1f0a40;
            case 0x1F0A4Cu: goto label_1f0a4c;
            case 0x1F0B48u: goto label_1f0b48;
            case 0x1F0B70u: goto label_1f0b70;
            case 0x1F0B74u: goto label_1f0b74;
            case 0x1F0BA8u: goto label_1f0ba8;
            case 0x1F0BC0u: goto label_1f0bc0;
            case 0x1F0DC0u: goto label_1f0dc0;
            case 0x1F0DD4u: goto label_1f0dd4;
            case 0x1F0E50u: goto label_1f0e50;
            case 0x1F0E84u: goto label_1f0e84;
            case 0x1F0EB0u: goto label_1f0eb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0E0Cu;
    // 0x1f0e0c: 0x0  nop
    ctx->pc = 0x1f0e0cu;
    // NOP
    // 0x1f0e10: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x1f0e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1f0e14: 0x0  nop
    ctx->pc = 0x1f0e14u;
    // NOP
    // 0x1f0e18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f0e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f0e1c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1f0e1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f0e20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f0e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f0e24: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1f0e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1f0e28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f0e28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0e2c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1f0e2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1f0e30: 0x70059ca9  por         $s3, $zero, $a1
    ctx->pc = 0x1f0e30u;
    SET_GPR_VEC(ctx, 19, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x1f0e34: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f0e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f0e38: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1f0e38u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1f0e3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f0e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f0e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f0e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0e44: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1f0e44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f0e48: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1f0e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1f0e4c: 0x0  nop
    ctx->pc = 0x1f0e4cu;
    // NOP
label_1f0e50:
    // 0x1f0e50: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1f0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1f0e54: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1f0e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f0e58: 0x24423010  addiu       $v0, $v0, 0x3010
    ctx->pc = 0x1f0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12304));
    // 0x1f0e5c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1f0e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f0e60: 0xc07cd3e  jal         func_1F34F8
    ctx->pc = 0x1F0E60u;
    SET_GPR_U32(ctx, 31, 0x1F0E68u);
    ctx->pc = 0x1F0E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E60u;
            // 0x1f0e64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F34F8u;
    if (runtime->hasFunction(0x1F34F8u)) {
        auto targetFn = runtime->lookupFunction(0x1F34F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0E68u; }
        if (ctx->pc != 0x1F0E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F34F8_0x1f34f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0E68u; }
        if (ctx->pc != 0x1F0E68u) { return; }
    }
    ctx->pc = 0x1F0E68u;
    // 0x1f0e68: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0E68u;
    {
        const bool branch_taken_0x1f0e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0e68) {
            ctx->pc = 0x1F0E6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E68u;
            // 0x1f0e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0E84u;
            goto label_1f0e84;
        }
    }
    ctx->pc = 0x1F0E70u;
    // 0x1f0e70: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1f0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1f0e74: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1f0e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1f0e78: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1F0E78u;
    {
        const bool branch_taken_0x1f0e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0e78) {
            ctx->pc = 0x1F0E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E78u;
            // 0x1f0e7c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0EB0u;
            goto label_1f0eb0;
        }
    }
    ctx->pc = 0x1F0E80u;
    // 0x1f0e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f0e84:
    // 0x1f0e84: 0xc07cd5e  jal         func_1F3578
    ctx->pc = 0x1F0E84u;
    SET_GPR_U32(ctx, 31, 0x1F0E8Cu);
    ctx->pc = 0x1F0E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E84u;
            // 0x1f0e88: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3578u;
    if (runtime->hasFunction(0x1F3578u)) {
        auto targetFn = runtime->lookupFunction(0x1F3578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0E8Cu; }
        if (ctx->pc != 0x1F0E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f3578_0x1f3580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0E8Cu; }
        if (ctx->pc != 0x1F0E8Cu) { return; }
    }
    ctx->pc = 0x1F0E8Cu;
    // 0x1f0e8c: 0x8e03e2b8  lw          $v1, -0x1D48($s0)
    ctx->pc = 0x1f0e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959800)));
    // 0x1f0e90: 0x700224a9  por         $a0, $zero, $v0
    ctx->pc = 0x1f0e90u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1f0e94: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1f0e94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1f0e98: 0x60f809  jalr        $v1
    ctx->pc = 0x1F0E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0EA0u);
        ctx->pc = 0x1F0E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E98u;
            // 0x1f0e9c: 0x70132ca9  por         $a1, $zero, $s3 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 19)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F0EA0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0718u: goto label_1f0718;
            case 0x1F072Cu: goto label_1f072c;
            case 0x1F07E8u: goto label_1f07e8;
            case 0x1F0810u: goto label_1f0810;
            case 0x1F0814u: goto label_1f0814;
            case 0x1F0848u: goto label_1f0848;
            case 0x1F0860u: goto label_1f0860;
            case 0x1F08B0u: goto label_1f08b0;
            case 0x1F08C4u: goto label_1f08c4;
            case 0x1F0A40u: goto label_1f0a40;
            case 0x1F0A4Cu: goto label_1f0a4c;
            case 0x1F0B48u: goto label_1f0b48;
            case 0x1F0B70u: goto label_1f0b70;
            case 0x1F0B74u: goto label_1f0b74;
            case 0x1F0BA8u: goto label_1f0ba8;
            case 0x1F0BC0u: goto label_1f0bc0;
            case 0x1F0DC0u: goto label_1f0dc0;
            case 0x1F0DD4u: goto label_1f0dd4;
            case 0x1F0E50u: goto label_1f0e50;
            case 0x1F0E84u: goto label_1f0e84;
            case 0x1F0EB0u: goto label_1f0eb0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F0EA0u; }
            if (ctx->pc != 0x1F0EA0u) { return; }
        }
        }
    }
    ctx->pc = 0x1F0EA0u;
    // 0x1f0ea0: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x1f0ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0ea4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f0ea4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f0ea8: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x1f0ea8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x1f0eac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f0eacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f0eb0:
    // 0x1f0eb0: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x1f0eb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f0eb4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1F0EB4u;
    {
        const bool branch_taken_0x1f0eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0EB4u;
            // 0x1f0eb8: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0eb4) {
            ctx->pc = 0x1F0E50u;
            runtime->cooperativeGuestYield();
            goto label_1f0e50;
        }
    }
    ctx->pc = 0x1F0EBCu;
    // 0x1f0ebc: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1f0ebcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x1f0ec0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f0ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0ec4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f0ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f0ec8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f0ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0ecc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1f0eccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0ed4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1f0ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f0ed8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1f0ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f0edc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0EDCu;
            // 0x1f0ee0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0718u: goto label_1f0718;
            case 0x1F072Cu: goto label_1f072c;
            case 0x1F07E8u: goto label_1f07e8;
            case 0x1F0810u: goto label_1f0810;
            case 0x1F0814u: goto label_1f0814;
            case 0x1F0848u: goto label_1f0848;
            case 0x1F0860u: goto label_1f0860;
            case 0x1F08B0u: goto label_1f08b0;
            case 0x1F08C4u: goto label_1f08c4;
            case 0x1F0A40u: goto label_1f0a40;
            case 0x1F0A4Cu: goto label_1f0a4c;
            case 0x1F0B48u: goto label_1f0b48;
            case 0x1F0B70u: goto label_1f0b70;
            case 0x1F0B74u: goto label_1f0b74;
            case 0x1F0BA8u: goto label_1f0ba8;
            case 0x1F0BC0u: goto label_1f0bc0;
            case 0x1F0DC0u: goto label_1f0dc0;
            case 0x1F0DD4u: goto label_1f0dd4;
            case 0x1F0E50u: goto label_1f0e50;
            case 0x1F0E84u: goto label_1f0e84;
            case 0x1F0EB0u: goto label_1f0eb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0EE4u;
    // 0x1f0ee4: 0x0  nop
    ctx->pc = 0x1f0ee4u;
    // NOP
}
