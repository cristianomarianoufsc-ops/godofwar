#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D3100
// Address: 0x1d3100 - 0x1d3228
void sub_001D3100_0x1d3100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3100_0x1d3100");
#endif

    ctx->pc = 0x1d3100u;

    // 0x1d3100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d3100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d3104: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d3104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d3108: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d3108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d310c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d310cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d3110: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d3114: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d3114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3118: 0x8c43d2ac  lw          $v1, -0x2D54($v0)
    ctx->pc = 0x1d3118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1d311c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1d311cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d3120: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x1d3120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1d3124: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x1d3124u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1d3128: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1d3128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d312c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d312cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d3130: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d3130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d3134: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d3134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d3138: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3138u;
    {
        const bool branch_taken_0x1d3138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D313Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3138u;
            // 0x1d313c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3138) {
            ctx->pc = 0x1D3144u;
            goto label_1d3144;
        }
    }
    ctx->pc = 0x1D3140u;
    // 0x1d3140: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1d3140u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d3144:
    // 0x1d3144: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1D3144u;
    {
        const bool branch_taken_0x1d3144 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3144u;
            // 0x1d3148: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3144) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D314Cu;
    // 0x1d314c: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x1d314cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1d3150: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3150u;
    {
        const bool branch_taken_0x1d3150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3150u;
            // 0x1d3154: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3150) {
            ctx->pc = 0x1D3160u;
            goto label_1d3160;
        }
    }
    ctx->pc = 0x1D3158u;
    // 0x1d3158: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3158u;
    {
        const bool branch_taken_0x1d3158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D315Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3158u;
            // 0x1d315c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3158) {
            ctx->pc = 0x1D317Cu;
            goto label_1d317c;
        }
    }
    ctx->pc = 0x1D3160u;
label_1d3160:
    // 0x1d3160: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1d3160u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1d3164: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1d3164u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1d3168: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3168u;
    {
        const bool branch_taken_0x1d3168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D316Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3168u;
            // 0x1d316c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3168) {
            ctx->pc = 0x1D317Cu;
            goto label_1d317c;
        }
    }
    ctx->pc = 0x1D3170u;
    // 0x1d3170: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1D3170u;
    SET_GPR_U32(ctx, 31, 0x1D3178u);
    ctx->pc = 0x1D3174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3170u;
            // 0x1d3174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3178u; }
        if (ctx->pc != 0x1D3178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3178u; }
        if (ctx->pc != 0x1D3178u) { return; }
    }
    ctx->pc = 0x1D3178u;
    // 0x1d3178: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1d3178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1d317c:
    // 0x1d317c: 0x78840030  lq          $a0, 0x30($a0)
    ctx->pc = 0x1d317cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1d3180: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d3180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3184: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d3184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3188: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x1d3188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x1d318c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1d318cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3190: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1d3190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1d3194: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3194u;
    {
        const bool branch_taken_0x1d3194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d3194) {
            ctx->pc = 0x1D3198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3194u;
            // 0x1d3198: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D31A4u;
            goto label_1d31a4;
        }
    }
    ctx->pc = 0x1D319Cu;
    // 0x1d319c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D319Cu;
    {
        const bool branch_taken_0x1d319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D31A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D319Cu;
            // 0x1d31a0: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d319c) {
            ctx->pc = 0x1D31C0u;
            goto label_1d31c0;
        }
    }
    ctx->pc = 0x1D31A4u;
label_1d31a4:
    // 0x1d31a4: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1d31a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1d31a8: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1d31a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1d31ac: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D31ACu;
    {
        const bool branch_taken_0x1d31ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d31ac) {
            ctx->pc = 0x1D31B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D31ACu;
            // 0x1d31b0: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D31C0u;
            goto label_1d31c0;
        }
    }
    ctx->pc = 0x1D31B4u;
    // 0x1d31b4: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1D31B4u;
    SET_GPR_U32(ctx, 31, 0x1D31BCu);
    ctx->pc = 0x1D31B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D31B4u;
            // 0x1d31b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D31BCu; }
        if (ctx->pc != 0x1D31BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D31BCu; }
        if (ctx->pc != 0x1D31BCu) { return; }
    }
    ctx->pc = 0x1D31BCu;
    // 0x1d31bc: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x1d31bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1d31c0:
    // 0x1d31c0: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1d31c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d31c4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1d31c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d31c8: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1d31c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d31cc: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1d31ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d31d0: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1d31d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d31d4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d31d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d31d8: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1d31d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d31dc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1d31dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1d31e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d31e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d31e4: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1d31e4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d31e8: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x1d31e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d31ec: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1d31ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d31f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d31f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d31f4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1d31f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1d31f8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1d31f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d31fc: 0x0  nop
    ctx->pc = 0x1d31fcu;
    // NOP
    // 0x1d3200: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3200u;
    {
        const bool branch_taken_0x1d3200 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D3204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3200u;
            // 0x1d3204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3200) {
            ctx->pc = 0x1D3214u;
            goto label_1d3214;
        }
    }
    ctx->pc = 0x1D3208u;
    // 0x1d3208: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3208u;
    {
        const bool branch_taken_0x1d3208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D320Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3208u;
            // 0x1d320c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3208) {
            ctx->pc = 0x1D3214u;
            goto label_1d3214;
        }
    }
    ctx->pc = 0x1D3210u;
label_1d3210:
    // 0x1d3210: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d3210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3214:
    // 0x1d3214: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d3214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3218: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d3218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d321c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d321cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3220: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3220u;
            // 0x1d3224: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3144u: goto label_1d3144;
            case 0x1D3160u: goto label_1d3160;
            case 0x1D317Cu: goto label_1d317c;
            case 0x1D31A4u: goto label_1d31a4;
            case 0x1D31C0u: goto label_1d31c0;
            case 0x1D3210u: goto label_1d3210;
            case 0x1D3214u: goto label_1d3214;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3228u;
}
