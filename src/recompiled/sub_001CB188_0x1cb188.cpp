#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CB188
// Address: 0x1cb188 - 0x1cb2e0
void sub_001CB188_0x1cb188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB188_0x1cb188");
#endif

    ctx->pc = 0x1cb188u;

    // 0x1cb188: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cb188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1cb18c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1cb18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1cb190: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1cb190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1cb194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb198: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cb198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cb19c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cb19cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1a0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1cb1a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1cb1a4: 0x8e080030  lw          $t0, 0x30($s0)
    ctx->pc = 0x1cb1a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1cb1a8: 0x8d070010  lw          $a3, 0x10($t0)
    ctx->pc = 0x1cb1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1cb1ac: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x1cb1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1cb1b0: 0x9462002c  lhu         $v0, 0x2C($v1)
    ctx->pc = 0x1cb1b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1cb1b4: 0x222202a  slt         $a0, $s1, $v0
    ctx->pc = 0x1cb1b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cb1b8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1cb1b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cb1bc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1CB1BCu;
    {
        const bool branch_taken_0x1cb1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb1bc) {
            ctx->pc = 0x1CB260u;
            goto label_1cb260;
        }
    }
    ctx->pc = 0x1CB1C4u;
    // 0x1cb1c4: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1CB1C4u;
    {
        const bool branch_taken_0x1cb1c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB1C4u;
            // 0x1cb1c8: 0x30c5ffff  andi        $a1, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1c4) {
            ctx->pc = 0x1CB2A0u;
            goto label_1cb2a0;
        }
    }
    ctx->pc = 0x1CB1CCu;
    // 0x1cb1cc: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x1cb1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1cb1d0: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x1cb1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1cb1d4: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x1cb1d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cb1d8: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x1cb1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x1cb1dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb1e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cb1e4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cb1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cb1e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cb1e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb1ec: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1cb1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1f0: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x1cb1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cb1f4: 0xc061eee  jal         func_187BB8
    ctx->pc = 0x1CB1F4u;
    SET_GPR_U32(ctx, 31, 0x1CB1FCu);
    ctx->pc = 0x1CB1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB1F4u;
            // 0x1cb1f8: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x187BB8u;
    if (runtime->hasFunction(0x187BB8u)) {
        auto targetFn = runtime->lookupFunction(0x187BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1FCu; }
        if (ctx->pc != 0x1CB1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187BB8_0x187bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1FCu; }
        if (ctx->pc != 0x1CB1FCu) { return; }
    }
    ctx->pc = 0x1CB1FCu;
    // 0x1cb1fc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1cb1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1cb200: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cb200u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cb204: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x1cb204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1cb208: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1cb208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1cb20c: 0xc061eee  jal         func_187BB8
    ctx->pc = 0x1CB20Cu;
    SET_GPR_U32(ctx, 31, 0x1CB214u);
    ctx->pc = 0x1CB210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB20Cu;
            // 0x1cb210: 0xfba20010  sqc2        $vf2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187BB8u;
    if (runtime->hasFunction(0x187BB8u)) {
        auto targetFn = runtime->lookupFunction(0x187BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB214u; }
        if (ctx->pc != 0x1CB214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187BB8_0x187bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB214u; }
        if (ctx->pc != 0x1CB214u) { return; }
    }
    ctx->pc = 0x1CB214u;
    // 0x1cb214: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1cb214u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb218: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1cb218u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cb21c: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1cb21cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cb220: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1cb220u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cb224: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1cb224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cb228: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1cb228u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cb22c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cb22cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cb230: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1cb230u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1cb234: 0x4a0003bf  vwaitq
    ctx->pc = 0x1cb234u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1cb238: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1cb238u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cb23c: 0x4a0002ff  vnop
    ctx->pc = 0x1cb23cu;
    // NOP operation, no action needed for VU0
    // 0x1cb240: 0x4a0002ff  vnop
    ctx->pc = 0x1cb240u;
    // NOP operation, no action needed for VU0
    // 0x1cb244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb248: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1cb248u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cb24c: 0xc072b94  jal         func_1CAE50
    ctx->pc = 0x1CB24Cu;
    SET_GPR_U32(ctx, 31, 0x1CB254u);
    ctx->pc = 0x1CB250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB24Cu;
            // 0x1cb250: 0xfba20000  sqc2        $vf2, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAE50u;
    if (runtime->hasFunction(0x1CAE50u)) {
        auto targetFn = runtime->lookupFunction(0x1CAE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB254u; }
        if (ctx->pc != 0x1CB254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAE50_0x1cae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB254u; }
        if (ctx->pc != 0x1CB254u) { return; }
    }
    ctx->pc = 0x1CB254u;
    // 0x1cb254: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1CB254u;
    {
        const bool branch_taken_0x1cb254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb254) {
            ctx->pc = 0x1CB2B0u;
            goto label_1cb2b0;
        }
    }
    ctx->pc = 0x1CB25Cu;
    // 0x1cb25c: 0x0  nop
    ctx->pc = 0x1cb25cu;
    // NOP
label_1cb260:
    // 0x1cb260: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CB260u;
    {
        const bool branch_taken_0x1cb260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb260) {
            ctx->pc = 0x1CB2A0u;
            goto label_1cb2a0;
        }
    }
    ctx->pc = 0x1CB268u;
    // 0x1cb268: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x1cb268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1cb26c: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x1cb26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1cb270: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x1cb270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cb274: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x1cb274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x1cb278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb27c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cb27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cb280: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cb280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb288: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cb288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cb28c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cb28cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb290: 0xc072bd2  jal         func_1CAF48
    ctx->pc = 0x1CB290u;
    SET_GPR_U32(ctx, 31, 0x1CB298u);
    ctx->pc = 0x1CB294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB290u;
            // 0x1cb294: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAF48u;
    if (runtime->hasFunction(0x1CAF48u)) {
        auto targetFn = runtime->lookupFunction(0x1CAF48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB298u; }
        if (ctx->pc != 0x1CB298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAF48_0x1caf48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB298u; }
        if (ctx->pc != 0x1CB298u) { return; }
    }
    ctx->pc = 0x1CB298u;
    // 0x1cb298: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB298u;
    {
        const bool branch_taken_0x1cb298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb298) {
            ctx->pc = 0x1CB2B0u;
            goto label_1cb2b0;
        }
    }
    ctx->pc = 0x1CB2A0u;
label_1cb2a0:
    // 0x1cb2a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb2a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb2a4: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x1cb2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x1cb2a8: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1cb2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1cb2ac: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x1cb2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_1cb2b0:
    // 0x1cb2b0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1cb2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x1cb2b4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1cb2b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x1cb2b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cb2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb2bc: 0xa611006e  sh          $s1, 0x6E($s0)
    ctx->pc = 0x1cb2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 110), (uint16_t)GPR_U32(ctx, 17));
    // 0x1cb2c0: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x1cb2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1cb2c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1cb2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cb2c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1cb2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb2cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cb2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb2d0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1cb2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cb2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB2D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB2D4u;
            // 0x1cb2d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB260u: goto label_1cb260;
            case 0x1CB2A0u: goto label_1cb2a0;
            case 0x1CB2B0u: goto label_1cb2b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CB2DCu;
    // 0x1cb2dc: 0x0  nop
    ctx->pc = 0x1cb2dcu;
    // NOP
}
