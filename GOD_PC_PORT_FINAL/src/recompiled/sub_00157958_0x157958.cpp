#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00157958
// Address: 0x157958 - 0x157a60
void sub_00157958_0x157958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157958_0x157958");
#endif

    ctx->pc = 0x157958u;

    // 0x157958: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x157958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x15795c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x15795cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x157960: 0x2127c  dsll32      $v0, $v0, 9
    ctx->pc = 0x157960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 9));
    // 0x157964: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x157964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x157968: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x157968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x15796c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x15796cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x157970: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x157970u;
    {
        const bool branch_taken_0x157970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157970u;
            // 0x157974: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157970) {
            ctx->pc = 0x1579A8u;
            goto label_1579a8;
        }
    }
    ctx->pc = 0x157978u;
    // 0x157978: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x157978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15797c: 0x8c4449a0  lw          $a0, 0x49A0($v0)
    ctx->pc = 0x15797cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18848)));
    // 0x157980: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x157980u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x157984: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x157984u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157988: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x157988u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x15798c: 0x4b030840  vaddx.x     $vf1, $vf1, $vf3x
    ctx->pc = 0x15798cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x157990: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x157990u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x157994: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x157994u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x157998: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x157998u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15799c: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x15799cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1579a0: 0x4a431080  vaddx.z     $vf2, $vf2, $vf3x
    ctx->pc = 0x1579a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1579a4: 0xfa020020  sqc2        $vf2, 0x20($s0)
    ctx->pc = 0x1579a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[2]));
label_1579a8:
    // 0x1579a8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1579a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1579ac: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x1579acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x1579b0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1579b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1579b4: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1579B4u;
    {
        const bool branch_taken_0x1579b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1579b4) {
            ctx->pc = 0x1579B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1579B4u;
            // 0x1579b8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157A50u;
            goto label_157a50;
        }
    }
    ctx->pc = 0x1579BCu;
    // 0x1579bc: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x1579bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1579c0: 0xda030030  lqc2        $vf3, 0x30($s0)
    ctx->pc = 0x1579c0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1579c4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1579c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1579c8: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x1579c8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]);
    // 0x1579cc: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x1579ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1579d0: 0x4bc2186e  vopmsub.xyz $vf1, $vf3, $vf2
    ctx->pc = 0x1579d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1579d4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1579d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1579d8: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1579d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1579dc: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1579dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1579e0: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1579e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1579e4: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1579e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1579e8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1579e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1579ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1579ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1579f0: 0xc06149c  jal         func_185270
    ctx->pc = 0x1579F0u;
    SET_GPR_U32(ctx, 31, 0x1579F8u);
    ctx->pc = 0x1579F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1579F0u;
            // 0x1579f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185270u;
    if (runtime->hasFunction(0x185270u)) {
        auto targetFn = runtime->lookupFunction(0x185270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1579F8u; }
        if (ctx->pc != 0x1579F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_185270_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1579F8u; }
        if (ctx->pc != 0x1579F8u) { return; }
    }
    ctx->pc = 0x1579F8u;
    // 0x1579f8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1579f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1579fc: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1579fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157a00: 0x8c4449a0  lw          $a0, 0x49A0($v0)
    ctx->pc = 0x157a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18848)));
    // 0x157a04: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x157a04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x157a08: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x157a08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x157a0c: 0xdba30060  lqc2        $vf3, 0x60($sp)
    ctx->pc = 0x157a0cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x157a10: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x157a10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x157a14: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x157a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x157a18: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x157a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x157a1c: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x157a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157a20: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x157a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x157a24: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x157a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x157a28: 0x4be40858  vmulx.xyzw  $vf1, $vf1, $vf4x
    ctx->pc = 0x157a28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x157a2c: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x157a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x157a30: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x157a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157a34: 0x4be41098  vmulx.xyzw  $vf2, $vf2, $vf4x
    ctx->pc = 0x157a34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157a38: 0xfa020010  sqc2        $vf2, 0x10($s0)
    ctx->pc = 0x157a38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157a3c: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x157a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x157a40: 0x4be418d8  vmulx.xyzw  $vf3, $vf3, $vf4x
    ctx->pc = 0x157a40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x157a44: 0xfa030020  sqc2        $vf3, 0x20($s0)
    ctx->pc = 0x157a44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x157a48: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x157a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x157a4c: 0x0  nop
    ctx->pc = 0x157a4cu;
    // NOP
label_157a50:
    // 0x157a50: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x157a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x157a54: 0x3e00008  jr          $ra
    ctx->pc = 0x157A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157A54u;
            // 0x157a58: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1579A8u: goto label_1579a8;
            case 0x157A50u: goto label_157a50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x157A5Cu;
    // 0x157a5c: 0x0  nop
    ctx->pc = 0x157a5cu;
    // NOP
}
