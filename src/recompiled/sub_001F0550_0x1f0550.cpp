#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F0550
// Address: 0x1f0550 - 0x1f05e8
void sub_001F0550_0x1f0550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0550_0x1f0550");
#endif

    ctx->pc = 0x1f0550u;

    // 0x1f0550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f0550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f0554: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f0554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f0558: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f0558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f055c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f055cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0560: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f0560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f0564: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f0564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0568: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1f0568u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f056c: 0xc60e0024  lwc1        $f14, 0x24($s0)
    ctx->pc = 0x1f056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1f0570: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x1f0570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f0574: 0xc60d0010  lwc1        $f13, 0x10($s0)
    ctx->pc = 0x1f0574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f0578: 0xc07c112  jal         func_1F0448
    ctx->pc = 0x1F0578u;
    SET_GPR_U32(ctx, 31, 0x1F0580u);
    ctx->pc = 0x1F057Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0578u;
            // 0x1f057c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0448u;
    if (runtime->hasFunction(0x1F0448u)) {
        auto targetFn = runtime->lookupFunction(0x1F0448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0580u; }
        if (ctx->pc != 0x1F0580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0448_0x1f0448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0580u; }
        if (ctx->pc != 0x1F0580u) { return; }
    }
    ctx->pc = 0x1F0580u;
    // 0x1f0580: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f0580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0584: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x1f0584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f0588: 0xc07c0b0  jal         func_1F02C0
    ctx->pc = 0x1F0588u;
    SET_GPR_U32(ctx, 31, 0x1F0590u);
    ctx->pc = 0x1F058Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0588u;
            // 0x1f058c: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F02C0u;
    if (runtime->hasFunction(0x1F02C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F02C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0590u; }
        if (ctx->pc != 0x1F0590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F02C0_0x1f02c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0590u; }
        if (ctx->pc != 0x1F0590u) { return; }
    }
    ctx->pc = 0x1F0590u;
    // 0x1f0590: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1f0590u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0594: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1f0594u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f0598: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1f0598u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f059c: 0xda210010  lqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1f059cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1f05a0: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1f05a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f05a4: 0xda210020  lqc2        $vf1, 0x20($s1)
    ctx->pc = 0x1f05a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1f05a8: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1f05a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f05ac: 0xda210030  lqc2        $vf1, 0x30($s1)
    ctx->pc = 0x1f05acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1f05b0: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1f05b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f05b4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1f05b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f05b8: 0x8e100020  lw          $s0, 0x20($s0)
    ctx->pc = 0x1f05b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1f05bc: 0x48b01000  qmtc2.ni    $s0, $vf2
    ctx->pc = 0x1f05bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x1f05c0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1f05c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f05c4: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1f05c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f05c8: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1f05c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f05cc: 0xfa210030  sqc2        $vf1, 0x30($s1)
    ctx->pc = 0x1f05ccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f05d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f05d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f05d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f05d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f05d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f05d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f05dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F05DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F05E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F05DCu;
            // 0x1f05e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F05E4u;
    // 0x1f05e4: 0x0  nop
    ctx->pc = 0x1f05e4u;
    // NOP
}
