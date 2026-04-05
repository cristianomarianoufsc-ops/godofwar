#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_20acd0
// Address: 0x20acd0 - 0x20aec0
void entry_20acd0_0x20aec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_20acd0_0x20aec0");
#endif

    ctx->pc = 0x20acd0u;

    // 0x20acd0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20acd4: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20acd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20acd8: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x20acd8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20acdc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x20acdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x20ace0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20ace0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x20ace4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20ace4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ace8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x20ace8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x20acec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20acecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20acf0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x20acf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x20acf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20acf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20acf8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x20acf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x20acfc: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x20acfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x20ad00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20ad00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20ad04: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x20ad04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20ad08: 0x8c53cd44  lw          $s3, -0x32BC($v0)
    ctx->pc = 0x20ad08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954308)));
    // 0x20ad0c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x20ad0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20ad10: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20AD10u;
    {
        const bool branch_taken_0x20ad10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ad10) {
            ctx->pc = 0x20AD14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20AD10u;
            // 0x20ad14: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20AD18u;
            goto label_20ad18;
        }
    }
    ctx->pc = 0x20AD18u;
label_20ad18:
    // 0x20ad18: 0xda430030  lqc2        $vf3, 0x30($s2)
    ctx->pc = 0x20ad18u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x20ad1c: 0x2812  mflo        $a1
    ctx->pc = 0x20ad1cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x20ad20: 0x2010  mfhi        $a0
    ctx->pc = 0x20ad20u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20ad24: 0x24a5fffb  addiu       $a1, $a1, -0x5
    ctx->pc = 0x20ad24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
    // 0x20ad28: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20ad28u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ad2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20ad2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20ad30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20ad30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20ad34: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x20ad34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20ad38: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x20ad38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20ad3c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x20ad3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20ad40: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x20ad40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20ad44: 0xda420020  lqc2        $vf2, 0x20($s2)
    ctx->pc = 0x20ad44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x20ad48: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x20ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20ad4c: 0x2484fffb  addiu       $a0, $a0, -0x5
    ctx->pc = 0x20ad4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
    // 0x20ad50: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x20ad50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20ad54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20ad54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ad58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20ad58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20ad5c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20AD5Cu;
    {
        const bool branch_taken_0x20ad5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ad5c) {
            ctx->pc = 0x20AD60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20AD5Cu;
            // 0x20ad60: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20AD64u;
            goto label_20ad64;
        }
    }
    ctx->pc = 0x20AD64u;
label_20ad64:
    // 0x20ad64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20ad64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20ad68: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x20ad68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x20ad6c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x20ad6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x20ad70: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x20ad70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20ad74: 0x4be21868  vadd.xyzw   $vf1, $vf3, $vf2
    ctx->pc = 0x20ad74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20ad78: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x20ad78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20ad7c: 0x1a600047  blez        $s3, . + 4 + (0x47 << 2)
    ctx->pc = 0x20AD7Cu;
    {
        const bool branch_taken_0x20ad7c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x20AD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AD7Cu;
            // 0x20ad80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad7c) {
            ctx->pc = 0x20AE9Cu;
            goto label_20ae9c;
        }
    }
    ctx->pc = 0x20AD84u;
    // 0x20ad84: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_20ad88:
    // 0x20ad88: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x20ad88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x20ad8c: 0x24426160  addiu       $v0, $v0, 0x6160
    ctx->pc = 0x20ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24928));
    // 0x20ad90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20ad94: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x20ad94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20ad98: 0x5200003d  beql        $s0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x20AD98u;
    {
        const bool branch_taken_0x20ad98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ad98) {
            ctx->pc = 0x20AD9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20AD98u;
            // 0x20ad9c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20AE90u;
            goto label_20ae90;
        }
    }
    ctx->pc = 0x20ADA0u;
    // 0x20ada0: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x20ada0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ada4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20ada4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20ada8: 0xc074ce4  jal         func_1D3390
    ctx->pc = 0x20ADA8u;
    SET_GPR_U32(ctx, 31, 0x20ADB0u);
    ctx->pc = 0x20ADACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20ADA8u;
            // 0x20adac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3390u;
    if (runtime->hasFunction(0x1D3390u)) {
        auto targetFn = runtime->lookupFunction(0x1D3390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ADB0u; }
        if (ctx->pc != 0x20ADB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3390_0x1d3390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ADB0u; }
        if (ctx->pc != 0x20ADB0u) { return; }
    }
    ctx->pc = 0x20ADB0u;
    // 0x20adb0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x20adb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20adb4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x20adb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20adb8: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x20adb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20adbc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x20adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x20adc0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x20adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x20adc4: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x20adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x20adc8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x20adc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20adcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20adccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20add0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x20add0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20add4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x20add4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20add8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x20add8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x20addc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20addcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ade0: 0xc061eee  jal         func_187BB8
    ctx->pc = 0x20ADE0u;
    SET_GPR_U32(ctx, 31, 0x20ADE8u);
    ctx->pc = 0x20ADE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20ADE0u;
            // 0x20ade4: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x187BB8u;
    if (runtime->hasFunction(0x187BB8u)) {
        auto targetFn = runtime->lookupFunction(0x187BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ADE8u; }
        if (ctx->pc != 0x20ADE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187BB8_0x187bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ADE8u; }
        if (ctx->pc != 0x20ADE8u) { return; }
    }
    ctx->pc = 0x20ADE8u;
    // 0x20ade8: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x20ade8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20adec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x20adecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20adf0: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x20adf0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20adf4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20adf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20adf8: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x20adf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20adfc: 0x4be310aa  vmul.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x20adfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20ae00: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20ae00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20ae04: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20ae04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20ae08: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x20ae08u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20ae0c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x20ae0cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20ae10: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20ae10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ae14: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x20ae14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ae18: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x20AE18u;
    {
        const bool branch_taken_0x20ae18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ae18) {
            ctx->pc = 0x20AE80u;
            goto label_20ae80;
        }
    }
    ctx->pc = 0x20AE20u;
    // 0x20ae20: 0xda420020  lqc2        $vf2, 0x20($s2)
    ctx->pc = 0x20ae20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x20ae24: 0x4be310aa  vmul.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x20ae24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20ae28: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20ae28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20ae2c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20ae2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20ae30: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x20ae30u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20ae34: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x20ae34u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20ae38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20ae38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ae3c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x20ae3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ae40: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x20AE40u;
    {
        const bool branch_taken_0x20ae40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ae40) {
            ctx->pc = 0x20AE80u;
            goto label_20ae80;
        }
    }
    ctx->pc = 0x20AE48u;
    // 0x20ae48: 0xda420010  lqc2        $vf2, 0x10($s2)
    ctx->pc = 0x20ae48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x20ae4c: 0x4be310aa  vmul.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x20ae4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20ae50: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20ae50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20ae54: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20ae54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20ae58: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x20ae58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x20ae5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20ae5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20ae60: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x20ae60u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20ae64: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x20ae64u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20ae68: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20ae68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ae6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20ae6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ae70: 0x0  nop
    ctx->pc = 0x20ae70u;
    // NOP
    // 0x20ae74: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x20AE74u;
    {
        const bool branch_taken_0x20ae74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ae74) {
            ctx->pc = 0x20AE78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20AE74u;
            // 0x20ae78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20AE80u;
            goto label_20ae80;
        }
    }
    ctx->pc = 0x20AE7Cu;
    // 0x20ae7c: 0x0  nop
    ctx->pc = 0x20ae7cu;
    // NOP
label_20ae80:
    // 0x20ae80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20AE80u;
    {
        const bool branch_taken_0x20ae80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AE80u;
            // 0x20ae84: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae80) {
            ctx->pc = 0x20AE90u;
            goto label_20ae90;
        }
    }
    ctx->pc = 0x20AE88u;
    // 0x20ae88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20AE88u;
    {
        const bool branch_taken_0x20ae88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AE88u;
            // 0x20ae8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae88) {
            ctx->pc = 0x20AEA0u;
            goto label_20aea0;
        }
    }
    ctx->pc = 0x20AE90u;
label_20ae90:
    // 0x20ae90: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x20ae90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x20ae94: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x20AE94u;
    {
        const bool branch_taken_0x20ae94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AE94u;
            // 0x20ae98: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae94) {
            ctx->pc = 0x20AD88u;
            runtime->cooperativeGuestYield();
            goto label_20ad88;
        }
    }
    ctx->pc = 0x20AE9Cu;
label_20ae9c:
    // 0x20ae9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20aea0:
    // 0x20aea0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x20aea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20aea4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x20aea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20aea8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x20aea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20aeac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20aeacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20aeb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20aeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20aeb4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x20aeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20aeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x20AEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AEB8u;
            // 0x20aebc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20AD18u: goto label_20ad18;
            case 0x20AD64u: goto label_20ad64;
            case 0x20AD88u: goto label_20ad88;
            case 0x20AE80u: goto label_20ae80;
            case 0x20AE90u: goto label_20ae90;
            case 0x20AE9Cu: goto label_20ae9c;
            case 0x20AEA0u: goto label_20aea0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20AEC0u;
}
