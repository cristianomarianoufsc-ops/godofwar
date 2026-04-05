#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FBCB8
// Address: 0x1fbcb8 - 0x1fcd48
void sub_001FBCB8_0x1fbcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBCB8_0x1fbcb8");
#endif

    ctx->pc = 0x1fbcb8u;

    // 0x1fbcb8: 0x27bdfb90  addiu       $sp, $sp, -0x470
    ctx->pc = 0x1fbcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966160));
    // 0x1fbcbc: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x1fbcbcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1fbcc0: 0x7fb403d0  sq          $s4, 0x3D0($sp)
    ctx->pc = 0x1fbcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 20));
    // 0x1fbcc4: 0x48a72000  qmtc2.ni    $a3, $vf4
    ctx->pc = 0x1fbcc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1fbcc8: 0x7fa801b0  sq          $t0, 0x1B0($sp)
    ctx->pc = 0x1fbcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 8));
    // 0x1fbccc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fbcccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbcd0: 0x7fb00410  sq          $s0, 0x410($sp)
    ctx->pc = 0x1fbcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 16));
    // 0x1fbcd4: 0x4be320ac  vsub.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x1fbcd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fbcd8: 0x7fb10400  sq          $s1, 0x400($sp)
    ctx->pc = 0x1fbcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 17));
    // 0x1fbcdc: 0x7fb203f0  sq          $s2, 0x3F0($sp)
    ctx->pc = 0x1fbcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 18));
    // 0x1fbce0: 0x7fb303e0  sq          $s3, 0x3E0($sp)
    ctx->pc = 0x1fbce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 19));
    // 0x1fbce4: 0x7fb503c0  sq          $s5, 0x3C0($sp)
    ctx->pc = 0x1fbce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 21));
    // 0x1fbce8: 0x7fb603b0  sq          $s6, 0x3B0($sp)
    ctx->pc = 0x1fbce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 22));
    // 0x1fbcec: 0x7fb703a0  sq          $s7, 0x3A0($sp)
    ctx->pc = 0x1fbcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 23));
    // 0x1fbcf0: 0x7fbe0390  sq          $fp, 0x390($sp)
    ctx->pc = 0x1fbcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 30));
    // 0x1fbcf4: 0xffbf0380  sd          $ra, 0x380($sp)
    ctx->pc = 0x1fbcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 31));
    // 0x1fbcf8: 0xe7bd0468  swc1        $f29, 0x468($sp)
    ctx->pc = 0x1fbcf8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1128), bits); }
    // 0x1fbcfc: 0xe7bc0460  swc1        $f28, 0x460($sp)
    ctx->pc = 0x1fbcfcu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
    // 0x1fbd00: 0xe7bb0458  swc1        $f27, 0x458($sp)
    ctx->pc = 0x1fbd00u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1112), bits); }
    // 0x1fbd04: 0xe7ba0450  swc1        $f26, 0x450($sp)
    ctx->pc = 0x1fbd04u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
    // 0x1fbd08: 0xe7b90448  swc1        $f25, 0x448($sp)
    ctx->pc = 0x1fbd08u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1096), bits); }
    // 0x1fbd0c: 0xe7b80440  swc1        $f24, 0x440($sp)
    ctx->pc = 0x1fbd0cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
    // 0x1fbd10: 0xe7b70438  swc1        $f23, 0x438($sp)
    ctx->pc = 0x1fbd10u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
    // 0x1fbd14: 0xe7b60430  swc1        $f22, 0x430($sp)
    ctx->pc = 0x1fbd14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
    // 0x1fbd18: 0xe7b50428  swc1        $f21, 0x428($sp)
    ctx->pc = 0x1fbd18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1064), bits); }
    // 0x1fbd1c: 0xe7b40420  swc1        $f20, 0x420($sp)
    ctx->pc = 0x1fbd1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1056), bits); }
    // 0x1fbd20: 0x7fa500c0  sq          $a1, 0xC0($sp)
    ctx->pc = 0x1fbd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 5));
    // 0x1fbd24: 0x7fa700f0  sq          $a3, 0xF0($sp)
    ctx->pc = 0x1fbd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 7));
    // 0x1fbd28: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1fbd28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fbd2c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1fbd2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbd30: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1fbd30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbd34: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x1fbd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x1fbd38: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1fbd38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1fbd3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fbd3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fbd40: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1fbd40u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbd44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fbd44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbd48: 0x46000004  c1          0x4
    ctx->pc = 0x1fbd48u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fbd4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fbd4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fbd50: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1fbd50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1fbd54: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1fbd54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1fbd58: 0x48a62800  qmtc2.ni    $a2, $vf5
    ctx->pc = 0x1fbd58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1fbd5c: 0x4be12898  vmulx.xyzw  $vf2, $vf5, $vf1x
    ctx->pc = 0x1fbd5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fbd60: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x1fbd60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fbd64: 0xfba300d0  sqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x1fbd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fbd68: 0x48a83800  qmtc2.ni    $t0, $vf7
    ctx->pc = 0x1fbd68u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1fbd6c: 0x4be13858  vmulx.xyzw  $vf1, $vf7, $vf1x
    ctx->pc = 0x1fbd6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbd70: 0x4be12128  vadd.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1fbd70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fbd74: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x1fbd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fbd78: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1fbd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1fbd7c: 0x8c42e2a4  lw          $v0, -0x1D5C($v0)
    ctx->pc = 0x1fbd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
    // 0x1fbd80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBD80u;
    {
        const bool branch_taken_0x1fbd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBD80u;
            // 0x1fbd84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd80) {
            ctx->pc = 0x1FBD90u;
            goto label_1fbd90;
        }
    }
    ctx->pc = 0x1FBD88u;
    // 0x1fbd88: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1fbd88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fbd8c: 0x0  nop
    ctx->pc = 0x1fbd8cu;
    // NOP
label_1fbd90:
    // 0x1fbd90: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x1fbd90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1fbd94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fbd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fbd98: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBD98u;
    {
        const bool branch_taken_0x1fbd98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FBD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBD98u;
            // 0x1fbd9c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd98) {
            ctx->pc = 0x1FBDA8u;
            goto label_1fbda8;
        }
    }
    ctx->pc = 0x1FBDA0u;
    // 0x1fbda0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBDA0u;
    {
        const bool branch_taken_0x1fbda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBDA0u;
            // 0x1fbda4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbda0) {
            ctx->pc = 0x1FBDC4u;
            goto label_1fbdc4;
        }
    }
    ctx->pc = 0x1FBDA8u;
label_1fbda8:
    // 0x1fbda8: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1fbda8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1fbdac: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1fbdacu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1fbdb0: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBDB0u;
    {
        const bool branch_taken_0x1fbdb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FBDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBDB0u;
            // 0x1fbdb4: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbdb0) {
            ctx->pc = 0x1FBDC4u;
            goto label_1fbdc4;
        }
    }
    ctx->pc = 0x1FBDB8u;
    // 0x1fbdb8: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1FBDB8u;
    SET_GPR_U32(ctx, 31, 0x1FBDC0u);
    ctx->pc = 0x1FBDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBDB8u;
            // 0x1fbdbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBDC0u; }
        if (ctx->pc != 0x1FBDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBDC0u; }
        if (ctx->pc != 0x1FBDC0u) { return; }
    }
    ctx->pc = 0x1FBDC0u;
    // 0x1fbdc0: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1fbdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1fbdc4:
    // 0x1fbdc4: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x1fbdc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1fbdc8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1fbdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1fbdcc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1fbdccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fbdd0: 0xfba201c0  sqc2        $vf2, 0x1C0($sp)
    ctx->pc = 0x1fbdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fbdd4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1fbdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbdd8: 0x4be208d8  vmulx.xyzw  $vf3, $vf1, $vf2x
    ctx->pc = 0x1fbdd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fbddc: 0xfba301d0  sqc2        $vf3, 0x1D0($sp)
    ctx->pc = 0x1fbddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fbde0: 0xd8810020  lqc2        $vf1, 0x20($a0)
    ctx->pc = 0x1fbde0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1fbde4: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1fbde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbde8: 0x4be20918  vmulx.xyzw  $vf4, $vf1, $vf2x
    ctx->pc = 0x1fbde8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fbdec: 0xfba401e0  sqc2        $vf4, 0x1E0($sp)
    ctx->pc = 0x1fbdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fbdf0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1fbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1fbdf4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1fbdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1fbdf8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1fbdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1fbdfc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1fbdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1fbe00: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1fbe00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1fbe04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fbe04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbe08: 0xc441e3e4  lwc1        $f1, -0x1C1C($v0)
    ctx->pc = 0x1fbe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fbe0c: 0xc462e3e8  lwc1        $f2, -0x1C18($v1)
    ctx->pc = 0x1fbe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294960104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fbe10: 0xc483e3ec  lwc1        $f3, -0x1C14($a0)
    ctx->pc = 0x1fbe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294960108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fbe14: 0x46000e42  mul.s       $f25, $f1, $f0
    ctx->pc = 0x1fbe14u;
    ctx->f[25] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbe18: 0xc4a4e3e0  lwc1        $f4, -0x1C20($a1)
    ctx->pc = 0x1fbe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294960096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1fbe1c: 0x46001682  mul.s       $f26, $f2, $f0
    ctx->pc = 0x1fbe1cu;
    ctx->f[26] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1fbe20: 0xdba300c0  lqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x1fbe20u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1fbe24: 0x46001ec2  mul.s       $f27, $f3, $f0
    ctx->pc = 0x1fbe24u;
    ctx->f[27] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1fbe28: 0xdba500f0  lqc2        $vf5, 0xF0($sp)
    ctx->pc = 0x1fbe28u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1fbe2c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x1fbe2cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1fbe30: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1fbe30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fbe34: 0x4be3286c  vsub.xyzw   $vf1, $vf5, $vf3
    ctx->pc = 0x1fbe34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe38: 0xdba600e0  lqc2        $vf6, 0xE0($sp)
    ctx->pc = 0x1fbe38u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1fbe3c: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1fbe3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe40: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1fbe40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe44: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1fbe44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe48: 0x4be320ec  vsub.xyzw   $vf3, $vf4, $vf3
    ctx->pc = 0x1fbe48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe4c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1fbe4cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fbe50: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1fbe50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fbe54: 0x46020084  c1          0x20084
    ctx->pc = 0x1fbe54u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fbe58: 0x4be318ea  vmul.xyzw   $vf3, $vf3, $vf3
    ctx->pc = 0x1fbe58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe5c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1fbe5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe60: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1fbe60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe64: 0x4be4312c  vsub.xyzw   $vf4, $vf6, $vf4
    ctx->pc = 0x1fbe64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe68: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1fbe68u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbe6c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1fbe6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fbe70: 0x46010044  c1          0x10044
    ctx->pc = 0x1fbe70u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fbe74: 0x4be4212a  vmul.xyzw   $vf4, $vf4, $vf4
    ctx->pc = 0x1fbe74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe78: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1fbe78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe7c: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1fbe7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe80: 0x4be6296c  vsub.xyzw   $vf5, $vf5, $vf6
    ctx->pc = 0x1fbe80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe84: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1fbe84u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbe88: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1fbe88u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbe8c: 0x46000004  c1          0x4
    ctx->pc = 0x1fbe8cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fbe90: 0x4be5296a  vmul.xyzw   $vf5, $vf5, $vf5
    ctx->pc = 0x1fbe90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe94: 0x4b052841  vaddy.x     $vf1, $vf5, $vf5y
    ctx->pc = 0x1fbe94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe98: 0x4b050842  vaddz.x     $vf1, $vf1, $vf5z
    ctx->pc = 0x1fbe98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe9c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1fbe9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fbea0: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1fbea0u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbea4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fbea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1fbea8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fbea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fbeac: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1fbeacu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbeb0: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1fbeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1fbeb4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1fbeb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1fbeb8: 0x46000004  c1          0x4
    ctx->pc = 0x1fbeb8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fbebc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fbebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fbec0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1fbec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1fbec4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1fbec4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fbec8: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1fbec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1fbecc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1fbeccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1fbed0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1fbed0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1fbed4: 0x46041503  div.s       $f20, $f2, $f4
    ctx->pc = 0x1fbed4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[20] = ctx->f[2] / ctx->f[4];
    // 0x1fbed8: 0x4618a002  mul.s       $f0, $f20, $f24
    ctx->pc = 0x1fbed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x1fbedc: 0x46170028  max.s       $f0, $f0, $f23
    ctx->pc = 0x1fbedcu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[23]);
    // 0x1fbee0: 0x46160029  min.s       $f0, $f0, $f22
    ctx->pc = 0x1fbee0u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[22]);
    // 0x1fbee4: 0x8e8400c8  lw          $a0, 0xC8($s4)
    ctx->pc = 0x1fbee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x1fbee8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fbee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fbeec: 0x70421b89  pcpyld      $v1, $v0, $v0
    ctx->pc = 0x1fbeecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x1fbef0: 0x4407b800  mfc1        $a3, $f23
    ctx->pc = 0x1fbef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1fbef4: 0x70e21389  pcpyld      $v0, $a3, $v0
    ctx->pc = 0x1fbef4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x1fbef8: 0x4616a036  c.le.s      $f20, $f22
    ctx->pc = 0x1fbef8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fbefc: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1fbefcu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1fbf00: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1fbf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1fbf04: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1fbf04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fbf08: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1fbf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1fbf0c: 0xd88100b0  lqc2        $vf1, 0xB0($a0)
    ctx->pc = 0x1fbf0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1fbf10: 0x4a220b3c  vmove.w     $vf2, $vf1
    ctx->pc = 0x1fbf10u;
    ctx->vu0_vf[2] = ctx->vu0_vf[1];
    // 0x1fbf14: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x1fbf14u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1fbf18: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1fbf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbf1c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBF1Cu;
    {
        const bool branch_taken_0x1fbf1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FBF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF1Cu;
            // 0x1fbf20: 0xf88100b0  sqc2        $vf1, 0xB0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf1c) {
            ctx->pc = 0x1FBF38u;
            goto label_1fbf38;
        }
    }
    ctx->pc = 0x1FBF24u;
    // 0x1fbf24: 0xc07f394  jal         func_1FCE50
    ctx->pc = 0x1FBF24u;
    SET_GPR_U32(ctx, 31, 0x1FBF2Cu);
    ctx->pc = 0x1FBF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF24u;
            // 0x1fbf28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCE50u;
    if (runtime->hasFunction(0x1FCE50u)) {
        auto targetFn = runtime->lookupFunction(0x1FCE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF2Cu; }
        if (ctx->pc != 0x1FBF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCE50_0x1fce50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF2Cu; }
        if (ctx->pc != 0x1FBF2Cu) { return; }
    }
    ctx->pc = 0x1FBF2Cu;
    // 0x1fbf2c: 0x10000371  b           . + 4 + (0x371 << 2)
    ctx->pc = 0x1FBF2Cu;
    {
        const bool branch_taken_0x1fbf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF2Cu;
            // 0x1fbf30: 0x7bb00410  lq          $s0, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf2c) {
            ctx->pc = 0x1FCCF4u;
            goto label_1fccf4;
        }
    }
    ctx->pc = 0x1FBF34u;
    // 0x1fbf34: 0x0  nop
    ctx->pc = 0x1fbf34u;
    // NOP
label_1fbf38:
    // 0x1fbf38: 0xdba100c0  lqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1fbf38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1fbf3c: 0xdba301c0  lqc2        $vf3, 0x1C0($sp)
    ctx->pc = 0x1fbf3cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1fbf40: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1fbf40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbf44: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1fbf44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbf48: 0xdba100d0  lqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1fbf48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fbf4c: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1fbf4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbf50: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1fbf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbf54: 0xdba100e0  lqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1fbf54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1fbf58: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1fbf58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbf5c: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1fbf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbf60: 0xdba100f0  lqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1fbf60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1fbf64: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1fbf64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbf68: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1fbf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbf6c: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x1fbf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
    // 0x1fbf70: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fbf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fbf74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fbf74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbf78: 0x8e8400c0  lw          $a0, 0xC0($s4)
    ctx->pc = 0x1fbf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x1fbf7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fbf7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbf80: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x1fbf80u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x1fbf84: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1FBF84u;
    SET_GPR_U32(ctx, 31, 0x1FBF8Cu);
    ctx->pc = 0x1FBF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF84u;
            // 0x1fbf88: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF8Cu; }
        if (ctx->pc != 0x1FBF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF8Cu; }
        if (ctx->pc != 0x1FBF8Cu) { return; }
    }
    ctx->pc = 0x1FBF8Cu;
    // 0x1fbf8c: 0x8e8400c0  lw          $a0, 0xC0($s4)
    ctx->pc = 0x1fbf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x1fbf90: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1fbf90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbf94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fbf94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbf98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fbf98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbf9c: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x1fbf9cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x1fbfa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fbfa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfa4: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1FBFA4u;
    SET_GPR_U32(ctx, 31, 0x1FBFACu);
    ctx->pc = 0x1FBFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBFA4u;
            // 0x1fbfa8: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBFACu; }
        if (ctx->pc != 0x1FBFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBFACu; }
        if (ctx->pc != 0x1FBFACu) { return; }
    }
    ctx->pc = 0x1FBFACu;
    // 0x1fbfac: 0x8e8400c8  lw          $a0, 0xC8($s4)
    ctx->pc = 0x1fbfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x1fbfb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1fbfb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfb4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fbfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fbfb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fbfb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfbc: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x1fbfbcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x1fbfc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fbfc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfc4: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1FBFC4u;
    SET_GPR_U32(ctx, 31, 0x1FBFCCu);
    ctx->pc = 0x1FBFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBFC4u;
            // 0x1fbfc8: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBFCCu; }
        if (ctx->pc != 0x1FBFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBFCCu; }
        if (ctx->pc != 0x1FBFCCu) { return; }
    }
    ctx->pc = 0x1FBFCCu;
    // 0x1fbfcc: 0x8e8400c8  lw          $a0, 0xC8($s4)
    ctx->pc = 0x1fbfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x1fbfd0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1fbfd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fbfd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fbfd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfdc: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x1fbfdcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x1fbfe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fbfe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfe4: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1FBFE4u;
    SET_GPR_U32(ctx, 31, 0x1FBFECu);
    ctx->pc = 0x1FBFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBFE4u;
            // 0x1fbfe8: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBFECu; }
        if (ctx->pc != 0x1FBFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBFECu; }
        if (ctx->pc != 0x1FBFECu) { return; }
    }
    ctx->pc = 0x1FBFECu;
    // 0x1fbfec: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x1fbfecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1fbff0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fbff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbff4: 0xdba301d0  lqc2        $vf3, 0x1D0($sp)
    ctx->pc = 0x1fbff4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1fbff8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1fbff8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1fbffc: 0x7fa30200  sq          $v1, 0x200($sp)
    ctx->pc = 0x1fbffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 3));
    // 0x1fc000: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1fc000u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc004: 0xdba401b0  lqc2        $vf4, 0x1B0($sp)
    ctx->pc = 0x1fc004u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1fc008: 0x4bc412fe  vopmula.xyz $ACC, $vf2, $vf4
    ctx->pc = 0x1fc008u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]);
    // 0x1fc00c: 0x4bc220ae  vopmsub.xyz $vf2, $vf4, $vf2
    ctx->pc = 0x1fc00cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fc010: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1fc010u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc014: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1fc014u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fc018: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1fc018u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc01c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1fc01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1fc020: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1fc020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1fc024: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1fc024u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc028: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1fc028u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1fc02c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1fc02cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1fc030: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1fc030u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc034: 0x4a0002ff  vnop
    ctx->pc = 0x1fc034u;
    // NOP operation, no action needed for VU0
    // 0x1fc038: 0x4a0002ff  vnop
    ctx->pc = 0x1fc038u;
    // NOP operation, no action needed for VU0
    // 0x1fc03c: 0x4615c802  mul.s       $f0, $f25, $f21
    ctx->pc = 0x1fc03cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[21]);
    // 0x1fc040: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1fc040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fc044: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1fc044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fc048: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1fc048u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1fc04c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1fc04cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1fc050: 0x4be111d8  vmulx.xyzw  $vf7, $vf2, $vf1x
    ctx->pc = 0x1fc050u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1fc054: 0x4615d002  mul.s       $f0, $f26, $f21
    ctx->pc = 0x1fc054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[21]);
    // 0x1fc058: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1fc058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1fc05c: 0xafa40210  sw          $a0, 0x210($sp)
    ctx->pc = 0x1fc05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 4));
    // 0x1fc060: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1fc060u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1fc064: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1fc064u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1fc068: 0x4be11218  vmulx.xyzw  $vf8, $vf2, $vf1x
    ctx->pc = 0x1fc068u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1fc06c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1fc06cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fc070: 0xfba40150  sqc2        $vf4, 0x150($sp)
    ctx->pc = 0x1fc070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fc074: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x1fc074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x1fc078: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fc078u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fc07c: 0x4be3233c  vmove.xyzw  $vf3, $vf4
    ctx->pc = 0x1fc07cu;
    ctx->vu0_vf[3] = ctx->vu0_vf[4];
    // 0x1fc080: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x1fc080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x1fc084: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fc084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fc088: 0x4a8118c0  vaddx.y     $vf3, $vf3, $vf1x
    ctx->pc = 0x1fc088u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fc08c: 0xfba30160  sqc2        $vf3, 0x160($sp)
    ctx->pc = 0x1fc08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fc090: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x1fc090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1fc094: 0x46180702  mul.s       $f28, $f0, $f24
    ctx->pc = 0x1fc094u;
    ctx->f[28] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x1fc098: 0xfba40170  sqc2        $vf4, 0x170($sp)
    ctx->pc = 0x1fc098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fc09c: 0xfba30180  sqc2        $vf3, 0x180($sp)
    ctx->pc = 0x1fc09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fc0a0: 0xdba20200  lqc2        $vf2, 0x200($sp)
    ctx->pc = 0x1fc0a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1fc0a4: 0x46000f46  mov.s       $f29, $f1
    ctx->pc = 0x1fc0a4u;
    ctx->f[29] = FPU_MOV_S(ctx->f[1]);
    // 0x1fc0a8: 0x4be71068  vadd.xyzw   $vf1, $vf2, $vf7
    ctx->pc = 0x1fc0a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc0ac: 0x4be5097c  vftoi0.xyzw $vf5, $vf1
    ctx->pc = 0x1fc0acu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1fc0b0: 0x4be7106c  vsub.xyzw   $vf1, $vf2, $vf7
    ctx->pc = 0x1fc0b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc0b4: 0xfba50220  sqc2        $vf5, 0x220($sp)
    ctx->pc = 0x1fc0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1fc0b8: 0x4be7097c  vftoi0.xyzw $vf7, $vf1
    ctx->pc = 0x1fc0b8u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1fc0bc: 0xdba501e0  lqc2        $vf5, 0x1E0($sp)
    ctx->pc = 0x1fc0bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1fc0c0: 0xfba70230  sqc2        $vf7, 0x230($sp)
    ctx->pc = 0x1fc0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1fc0c4: 0x4be51068  vadd.xyzw   $vf1, $vf2, $vf5
    ctx->pc = 0x1fc0c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc0c8: 0x4be808a8  vadd.xyzw   $vf2, $vf1, $vf8
    ctx->pc = 0x1fc0c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc0cc: 0x4be7117c  vftoi0.xyzw $vf7, $vf2
    ctx->pc = 0x1fc0ccu;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1fc0d0: 0xfba70240  sqc2        $vf7, 0x240($sp)
    ctx->pc = 0x1fc0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1fc0d4: 0x4be8086c  vsub.xyzw   $vf1, $vf1, $vf8
    ctx->pc = 0x1fc0d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc0d8: 0x4be2097c  vftoi0.xyzw $vf2, $vf1
    ctx->pc = 0x1fc0d8u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc0dc: 0xfba20250  sqc2        $vf2, 0x250($sp)
    ctx->pc = 0x1fc0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fc0e0: 0x4be5217c  vftoi0.xyzw $vf5, $vf4
    ctx->pc = 0x1fc0e0u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1fc0e4: 0xfba50260  sqc2        $vf5, 0x260($sp)
    ctx->pc = 0x1fc0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1fc0e8: 0x4be7197c  vftoi0.xyzw $vf7, $vf3
    ctx->pc = 0x1fc0e8u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1fc0ec: 0xfba70270  sqc2        $vf7, 0x270($sp)
    ctx->pc = 0x1fc0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1fc0f0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1fc0f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1fc0f4: 0x7fa20280  sq          $v0, 0x280($sp)
    ctx->pc = 0x1fc0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
    // 0x1fc0f8: 0x48233800  qmfc2.ni    $v1, $vf7
    ctx->pc = 0x1fc0f8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1fc0fc: 0x7fa30290  sq          $v1, 0x290($sp)
    ctx->pc = 0x1fc0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 3));
    // 0x1fc100: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1fc100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc104: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x1fc104u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
    // 0x1fc108: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1fc108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fc10c: 0x7ba40290  lq          $a0, 0x290($sp)
    ctx->pc = 0x1fc10cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1fc110: 0x7ee40010  sq          $a0, 0x10($s7)
    ctx->pc = 0x1fc110u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), GPR_VEC(ctx, 4));
    // 0x1fc114: 0xafa601f0  sw          $a2, 0x1F0($sp)
    ctx->pc = 0x1fc114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 6));
    // 0x1fc118: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x1fc118u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x1fc11c: 0x7ba70220  lq          $a3, 0x220($sp)
    ctx->pc = 0x1fc11cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1fc120: 0x7e670000  sq          $a3, 0x0($s3)
    ctx->pc = 0x1fc120u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 7));
    // 0x1fc124: 0x7ba30230  lq          $v1, 0x230($sp)
    ctx->pc = 0x1fc124u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1fc128: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1fc128u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x1fc12c: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x1fc12cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
    // 0x1fc130: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x1fc130u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    // 0x1fc134: 0x3c033fcc  lui         $v1, 0x3FCC
    ctx->pc = 0x1fc134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16332 << 16));
    // 0x1fc138: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1fc138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1fc13c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1fc13cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1fc140: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1fc140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1fc144: 0x7ba40280  lq          $a0, 0x280($sp)
    ctx->pc = 0x1fc144u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1fc148: 0x7ea40000  sq          $a0, 0x0($s5)
    ctx->pc = 0x1fc148u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 4));
    // 0x1fc14c: 0x7ba60290  lq          $a2, 0x290($sp)
    ctx->pc = 0x1fc14cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1fc150: 0x7ea60010  sq          $a2, 0x10($s5)
    ctx->pc = 0x1fc150u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 6));
    // 0x1fc154: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x1fc154u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1fc158: 0x7ba70240  lq          $a3, 0x240($sp)
    ctx->pc = 0x1fc158u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1fc15c: 0x7e470000  sq          $a3, 0x0($s2)
    ctx->pc = 0x1fc15cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 7));
    // 0x1fc160: 0x7ba30250  lq          $v1, 0x250($sp)
    ctx->pc = 0x1fc160u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1fc164: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1fc164u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1fc168: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x1fc168u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
    // 0x1fc16c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x1fc16cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x1fc170: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x1fc170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1fc174: 0xda810060  lqc2        $vf1, 0x60($s4)
    ctx->pc = 0x1fc174u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x1fc178: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1fc178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fc17c: 0x4a220884  vsubx.w     $vf2, $vf1, $vf2x
    ctx->pc = 0x1fc17cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc180: 0xdba301c0  lqc2        $vf3, 0x1C0($sp)
    ctx->pc = 0x1fc180u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1fc184: 0x4a231098  vmulx.w     $vf2, $vf2, $vf3x
    ctx->pc = 0x1fc184u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc188: 0x4a21133c  vmove.w     $vf1, $vf2
    ctx->pc = 0x1fc188u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1fc18c: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1fc18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fc190: 0x3c024099  lui         $v0, 0x4099
    ctx->pc = 0x1fc190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16537 << 16));
    // 0x1fc194: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1fc194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1fc198: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1fc198u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fc19c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1fc19cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc1a0: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x1fc1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fc1a4: 0x4be30918  vmulx.xyzw  $vf4, $vf1, $vf3x
    ctx->pc = 0x1fc1a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fc1a8: 0x4a24212c  vsub.w      $vf4, $vf4, $vf4
    ctx->pc = 0x1fc1a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fc1ac: 0xfba402a0  sqc2        $vf4, 0x2A0($sp)
    ctx->pc = 0x1fc1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fc1b0: 0xda810070  lqc2        $vf1, 0x70($s4)
    ctx->pc = 0x1fc1b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x1fc1b4: 0x4be30958  vmulx.xyzw  $vf5, $vf1, $vf3x
    ctx->pc = 0x1fc1b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1fc1b8: 0xfba502b0  sqc2        $vf5, 0x2B0($sp)
    ctx->pc = 0x1fc1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1fc1bc: 0xafa002d0  sw          $zero, 0x2D0($sp)
    ctx->pc = 0x1fc1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 0));
    // 0x1fc1c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fc1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc1c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fc1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc1c8: 0x8e8400d8  lw          $a0, 0xD8($s4)
    ctx->pc = 0x1fc1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x1fc1cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fc1ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc1d0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1fc1d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc1d4: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x1fc1d4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x1fc1d8: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1FC1D8u;
    SET_GPR_U32(ctx, 31, 0x1FC1E0u);
    ctx->pc = 0x1FC1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC1D8u;
            // 0x1fc1dc: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC1E0u; }
        if (ctx->pc != 0x1FC1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC1E0u; }
        if (ctx->pc != 0x1FC1E0u) { return; }
    }
    ctx->pc = 0x1FC1E0u;
    // 0x1fc1e0: 0x8e8300a8  lw          $v1, 0xA8($s4)
    ctx->pc = 0x1fc1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x1fc1e4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1fc1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fc1e8: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1FC1E8u;
    {
        const bool branch_taken_0x1fc1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC1E8u;
            // 0x1fc1ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1e8) {
            ctx->pc = 0x1FC2A8u;
            goto label_1fc2a8;
        }
    }
    ctx->pc = 0x1FC1F0u;
    // 0x1fc1f0: 0xdba70200  lqc2        $vf7, 0x200($sp)
    ctx->pc = 0x1fc1f0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1fc1f4: 0x4a27033c  vmove.w     $vf7, $vf0
    ctx->pc = 0x1fc1f4u;
    ctx->vu0_vf[7] = ctx->vu0_vf[0];
    // 0x1fc1f8: 0xfba70200  sqc2        $vf7, 0x200($sp)
    ctx->pc = 0x1fc1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1fc1fc: 0xdba102b0  lqc2        $vf1, 0x2B0($sp)
    ctx->pc = 0x1fc1fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1fc200: 0x4be1392c  vsub.xyzw   $vf4, $vf7, $vf1
    ctx->pc = 0x1fc200u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fc204: 0xdba20110  lqc2        $vf2, 0x110($sp)
    ctx->pc = 0x1fc204u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1fc208: 0x4be220ea  vmul.xyzw   $vf3, $vf4, $vf2
    ctx->pc = 0x1fc208u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fc20c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1fc20cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc210: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1fc210u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc214: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1fc214u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fc218: 0x4be238ea  vmul.xyzw   $vf3, $vf7, $vf2
    ctx->pc = 0x1fc218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fc21c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fc21cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fc220: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1fc220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc224: 0x4a2318c2  vaddz.w     $vf3, $vf3, $vf3z
    ctx->pc = 0x1fc224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fc228: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1fc228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fc22c: 0x4b030843  vaddw.x     $vf1, $vf1, $vf3w
    ctx->pc = 0x1fc22cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc230: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1fc230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fc234: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1fc234u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fc238: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fc238u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc23c: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x1fc23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fc240: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fc240u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1fc244: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1fc244u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1fc248: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1fc248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1fc24c: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1fc24cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fc250: 0x4be4386c  vsub.xyzw   $vf1, $vf7, $vf4
    ctx->pc = 0x1fc250u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc254: 0xdba301b0  lqc2        $vf3, 0x1B0($sp)
    ctx->pc = 0x1fc254u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1fc258: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x1fc258u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]);
    // 0x1fc25c: 0xfba102c0  sqc2        $vf1, 0x2C0($sp)
    ctx->pc = 0x1fc25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fc260: 0x4bc218ae  vopmsub.xyz $vf2, $vf3, $vf2
    ctx->pc = 0x1fc260u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fc264: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1fc264u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc268: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1fc268u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fc26c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1fc26cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc270: 0x4615d802  mul.s       $f0, $f27, $f21
    ctx->pc = 0x1fc270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[27], ctx->f[21]);
    // 0x1fc274: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1fc274u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc278: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1fc278u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1fc27c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1fc27cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1fc280: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1fc280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc284: 0x4a0002ff  vnop
    ctx->pc = 0x1fc284u;
    // NOP operation, no action needed for VU0
    // 0x1fc288: 0x4a0002ff  vnop
    ctx->pc = 0x1fc288u;
    // NOP operation, no action needed for VU0
    // 0x1fc28c: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1fc28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fc290: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1fc290u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1fc294: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1fc294u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1fc298: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1fc298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fc29c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1fc29cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc2a0: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1fc2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fc2a4: 0x0  nop
    ctx->pc = 0x1fc2a4u;
    // NOP
label_1fc2a8:
    // 0x1fc2a8: 0x4614b603  div.s       $f24, $f22, $f20
    ctx->pc = 0x1fc2a8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[24] = ctx->f[22] / ctx->f[20];
    // 0x1fc2ac: 0x4600b806  mov.s       $f0, $f23
    ctx->pc = 0x1fc2acu;
    ctx->f[0] = FPU_MOV_S(ctx->f[23]);
    // 0x1fc2b0: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x1fc2b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x1fc2b4: 0x0  nop
    ctx->pc = 0x1fc2b4u;
    // NOP
label_1fc2b8:
    // 0x1fc2b8: 0x4618a501  sub.s       $f20, $f20, $f24
    ctx->pc = 0x1fc2b8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[24]);
    // 0x1fc2bc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1fc2bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fc2c0: 0x0  nop
    ctx->pc = 0x1fc2c0u;
    // NOP
    // 0x1fc2c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC2C4u;
    {
        const bool branch_taken_0x1fc2c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fc2c4) {
            ctx->pc = 0x1FC2C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC2C4u;
            // 0x1fc2c8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FC2CCu;
            goto label_1fc2cc;
        }
    }
    ctx->pc = 0x1FC2CCu;
label_1fc2cc:
    // 0x1fc2cc: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x1fc2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x1fc2d0: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1fc2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1fc2d4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1fc2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fc2d8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1fc2d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fc2dc: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1FC2DCu;
    {
        const bool branch_taken_0x1fc2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC2DCu;
            // 0x1fc2e0: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2dc) {
            ctx->pc = 0x1FC460u;
            goto label_1fc460;
        }
    }
    ctx->pc = 0x1FC2E4u;
    // 0x1fc2e4: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x1fc2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x1fc2e8: 0x80440147  lb          $a0, 0x147($v0)
    ctx->pc = 0x1fc2e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 327)));
    // 0x1fc2ec: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1fc2ecu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fc2f0: 0xa0440146  sb          $a0, 0x146($v0)
    ctx->pc = 0x1fc2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 326), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fc2f4: 0x8fa701f4  lw          $a3, 0x1F4($sp)
    ctx->pc = 0x1fc2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1fc2f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fc2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fc2fc: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1fc2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1fc300: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1fc300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1fc304: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x1fc304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x1fc308: 0x34678000  ori         $a3, $v1, 0x8000
    ctx->pc = 0x1fc308u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1fc30c: 0x8e8500c8  lw          $a1, 0xC8($s4)
    ctx->pc = 0x1fc30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x1fc310: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1fc310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fc314: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fc314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fc318: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fc318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fc31c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fc31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc320: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc328: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1fc328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1fc32c: 0x80a30147  lb          $v1, 0x147($a1)
    ctx->pc = 0x1fc32cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 327)));
    // 0x1fc330: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1fc330u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fc334: 0xa0a30146  sb          $v1, 0x146($a1)
    ctx->pc = 0x1fc334u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 326), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fc338: 0x8ca20140  lw          $v0, 0x140($a1)
    ctx->pc = 0x1fc338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 320)));
    // 0x1fc33c: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x1fc33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x1fc340: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1fc340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fc344: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc348: 0x8fa601f4  lw          $a2, 0x1F4($sp)
    ctx->pc = 0x1fc348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1fc34c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1fc34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fc350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc354: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fc354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fc358: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fc358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc35c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fc35cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fc360: 0xafa601f4  sw          $a2, 0x1F4($sp)
    ctx->pc = 0x1fc360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 6));
    // 0x1fc364: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fc364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fc368: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1fc368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1fc36c: 0x8e8200d0  lw          $v0, 0xD0($s4)
    ctx->pc = 0x1fc36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x1fc370: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1fc370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fc374: 0x104001cf  beqz        $v0, . + 4 + (0x1CF << 2)
    ctx->pc = 0x1FC374u;
    {
        const bool branch_taken_0x1fc374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC374u;
            // 0x1fc378: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc374) {
            ctx->pc = 0x1FCAB4u;
            goto label_1fcab4;
        }
    }
    ctx->pc = 0x1FC37Cu;
    // 0x1fc37c: 0x8e8400c0  lw          $a0, 0xC0($s4)
    ctx->pc = 0x1fc37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x1fc380: 0x8fa701f4  lw          $a3, 0x1F4($sp)
    ctx->pc = 0x1fc380u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1fc384: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fc384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fc388: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x1fc388u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x1fc38c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fc38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc390: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x1fc390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
    // 0x1fc394: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1FC394u;
    SET_GPR_U32(ctx, 31, 0x1FC39Cu);
    ctx->pc = 0x1FC398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC394u;
            // 0x1fc398: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC39Cu; }
        if (ctx->pc != 0x1FC39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC39Cu; }
        if (ctx->pc != 0x1FC39Cu) { return; }
    }
    ctx->pc = 0x1FC39Cu;
    // 0x1fc39c: 0x8e8400c0  lw          $a0, 0xC0($s4)
    ctx->pc = 0x1fc39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x1fc3a0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1fc3a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3a4: 0x8fa701f4  lw          $a3, 0x1F4($sp)
    ctx->pc = 0x1fc3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1fc3a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fc3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3ac: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x1fc3acu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x1fc3b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fc3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3b4: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1FC3B4u;
    SET_GPR_U32(ctx, 31, 0x1FC3BCu);
    ctx->pc = 0x1FC3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC3B4u;
            // 0x1fc3b8: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC3BCu; }
        if (ctx->pc != 0x1FC3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC3BCu; }
        if (ctx->pc != 0x1FC3BCu) { return; }
    }
    ctx->pc = 0x1FC3BCu;
    // 0x1fc3bc: 0x8e8400c8  lw          $a0, 0xC8($s4)
    ctx->pc = 0x1fc3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x1fc3c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1fc3c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3c4: 0x8fa701f4  lw          $a3, 0x1F4($sp)
    ctx->pc = 0x1fc3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1fc3c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fc3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fc3cc: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x1fc3ccu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x1fc3d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fc3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3d4: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1FC3D4u;
    SET_GPR_U32(ctx, 31, 0x1FC3DCu);
    ctx->pc = 0x1FC3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC3D4u;
            // 0x1fc3d8: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC3DCu; }
        if (ctx->pc != 0x1FC3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC3DCu; }
        if (ctx->pc != 0x1FC3DCu) { return; }
    }
    ctx->pc = 0x1FC3DCu;
    // 0x1fc3dc: 0x8e8400c8  lw          $a0, 0xC8($s4)
    ctx->pc = 0x1fc3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x1fc3e0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1fc3e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3e4: 0x8fa701f4  lw          $a3, 0x1F4($sp)
    ctx->pc = 0x1fc3e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1fc3e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fc3e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3ec: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x1fc3ecu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x1fc3f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fc3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3f4: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1FC3F4u;
    SET_GPR_U32(ctx, 31, 0x1FC3FCu);
    ctx->pc = 0x1FC3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC3F4u;
            // 0x1fc3f8: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC3FCu; }
        if (ctx->pc != 0x1FC3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC3FCu; }
        if (ctx->pc != 0x1FC3FCu) { return; }
    }
    ctx->pc = 0x1FC3FCu;
    // 0x1fc3fc: 0x7ba30260  lq          $v1, 0x260($sp)
    ctx->pc = 0x1fc3fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1fc400: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fc400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc404: 0x7ee30000  sq          $v1, 0x0($s7)
    ctx->pc = 0x1fc404u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 3));
    // 0x1fc408: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1fc408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fc40c: 0x7ba40270  lq          $a0, 0x270($sp)
    ctx->pc = 0x1fc40cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1fc410: 0x7ee40010  sq          $a0, 0x10($s7)
    ctx->pc = 0x1fc410u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), GPR_VEC(ctx, 4));
    // 0x1fc414: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x1fc414u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1fc418: 0x7e660000  sq          $a2, 0x0($s3)
    ctx->pc = 0x1fc418u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 6));
    // 0x1fc41c: 0x7ba70230  lq          $a3, 0x230($sp)
    ctx->pc = 0x1fc41cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1fc420: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x1fc420u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x1fc424: 0x7e670010  sq          $a3, 0x10($s3)
    ctx->pc = 0x1fc424u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 7));
    // 0x1fc428: 0xae63001c  sw          $v1, 0x1C($s3)
    ctx->pc = 0x1fc428u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
    // 0x1fc42c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1fc42cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1fc430: 0x7ba20280  lq          $v0, 0x280($sp)
    ctx->pc = 0x1fc430u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1fc434: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x1fc434u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x1fc438: 0x7ba40290  lq          $a0, 0x290($sp)
    ctx->pc = 0x1fc438u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1fc43c: 0x7ea40010  sq          $a0, 0x10($s5)
    ctx->pc = 0x1fc43cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 4));
    // 0x1fc440: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x1fc440u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1fc444: 0x7ba60240  lq          $a2, 0x240($sp)
    ctx->pc = 0x1fc444u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1fc448: 0x7e460000  sq          $a2, 0x0($s2)
    ctx->pc = 0x1fc448u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 6));
    // 0x1fc44c: 0x7ba70250  lq          $a3, 0x250($sp)
    ctx->pc = 0x1fc44cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1fc450: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1fc450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1fc454: 0x7e470010  sq          $a3, 0x10($s2)
    ctx->pc = 0x1fc454u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 7));
    // 0x1fc458: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x1fc458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x1fc45c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x1fc45cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1fc460:
    // 0x1fc460: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fc460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fc464: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fc464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fc468: 0x4614a102  mul.s       $f4, $f20, $f20
    ctx->pc = 0x1fc468u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1fc46c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1fc46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1fc470: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fc470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fc474: 0x461418c1  sub.s       $f3, $f3, $f20
    ctx->pc = 0x1fc474u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
    // 0x1fc478: 0xdba300d0  lqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x1fc478u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fc47c: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x1fc47cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x1fc480: 0xdba400e0  lqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x1fc480u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1fc484: 0xdba500f0  lqc2        $vf5, 0xF0($sp)
    ctx->pc = 0x1fc484u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1fc488: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1fc488u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1fc48c: 0xdba200c0  lqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x1fc48cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1fc490: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x1fc490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1fc494: 0x46140882  mul.s       $f2, $f1, $f20
    ctx->pc = 0x1fc494u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1fc498: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1fc498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1fc49c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1fc49cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1fc4a0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1fc4a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x1fc4a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1fc4a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1fc4a8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1fc4a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1fc4ac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1fc4acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1fc4b0: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1fc4b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc4b4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1fc4b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1fc4b8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1fc4b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1fc4bc: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1fc4bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fc4c0: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1fc4c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc4c4: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x1fc4c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1fc4c8: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1fc4c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1fc4cc: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1fc4ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fc4d0: 0x4be410a8  vadd.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x1fc4d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc4d4: 0x44072000  mfc1        $a3, $f4
    ctx->pc = 0x1fc4d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1fc4d8: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1fc4d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1fc4dc: 0x4be12958  vmulx.xyzw  $vf5, $vf5, $vf1x
    ctx->pc = 0x1fc4dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1fc4e0: 0x4be51268  vadd.xyzw   $vf9, $vf2, $vf5
    ctx->pc = 0x1fc4e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1fc4e4: 0xdba201d0  lqc2        $vf2, 0x1D0($sp)
    ctx->pc = 0x1fc4e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1fc4e8: 0x4be2486c  vsub.xyzw   $vf1, $vf9, $vf2
    ctx->pc = 0x1fc4e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc4ec: 0xdba30200  lqc2        $vf3, 0x200($sp)
    ctx->pc = 0x1fc4ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1fc4f0: 0x4be348ac  vsub.xyzw   $vf2, $vf9, $vf3
    ctx->pc = 0x1fc4f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc4f4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1fc4f4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x1fc4f8: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1fc4f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fc4fc: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1fc4fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc500: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1fc500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fc504: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1fc504u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc508: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1fc508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1fc50c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1fc50cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1fc510: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1fc510u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc514: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1fc514u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1fc518: 0x4a0003bf  vwaitq
    ctx->pc = 0x1fc518u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1fc51c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1fc51cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc520: 0x4a0002ff  vnop
    ctx->pc = 0x1fc520u;
    // NOP operation, no action needed for VU0
    // 0x1fc524: 0x4a0002ff  vnop
    ctx->pc = 0x1fc524u;
    // NOP operation, no action needed for VU0
    // 0x1fc528: 0x4615c802  mul.s       $f0, $f25, $f21
    ctx->pc = 0x1fc528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[21]);
    // 0x1fc52c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1fc52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fc530: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1fc530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fc534: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1fc534u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1fc538: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1fc538u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1fc53c: 0x4be209d8  vmulx.xyzw  $vf7, $vf1, $vf2x
    ctx->pc = 0x1fc53cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1fc540: 0x4615d002  mul.s       $f0, $f26, $f21
    ctx->pc = 0x1fc540u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[21]);
    // 0x1fc544: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1fc544u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1fc548: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1fc548u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1fc54c: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x1fc54cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1fc550: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1fc550u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fc554: 0x4be20a18  vmulx.xyzw  $vf8, $vf1, $vf2x
    ctx->pc = 0x1fc554u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1fc558: 0x4603e002  mul.s       $f0, $f28, $f3
    ctx->pc = 0x1fc558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[3]);
    // 0x1fc55c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1fc55cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1fc560: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1fc560u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1fc564: 0xdba60150  lqc2        $vf6, 0x150($sp)
    ctx->pc = 0x1fc564u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1fc568: 0x4b010180  vaddx.x     $vf6, $vf0, $vf1x
    ctx->pc = 0x1fc568u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1fc56c: 0xfba60150  sqc2        $vf6, 0x150($sp)
    ctx->pc = 0x1fc56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1fc570: 0xdba50160  lqc2        $vf5, 0x160($sp)
    ctx->pc = 0x1fc570u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1fc574: 0x4b010140  vaddx.x     $vf5, $vf0, $vf1x
    ctx->pc = 0x1fc574u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1fc578: 0x4603e8c2  mul.s       $f3, $f29, $f3
    ctx->pc = 0x1fc578u;
    ctx->f[3] = FPU_MUL_S(ctx->f[29], ctx->f[3]);
    // 0x1fc57c: 0xfba50160  sqc2        $vf5, 0x160($sp)
    ctx->pc = 0x1fc57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1fc580: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x1fc580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1fc584: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1fc584u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1fc588: 0xdba40170  lqc2        $vf4, 0x170($sp)
    ctx->pc = 0x1fc588u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1fc58c: 0x4b010100  vaddx.x     $vf4, $vf0, $vf1x
    ctx->pc = 0x1fc58cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fc590: 0xfba40170  sqc2        $vf4, 0x170($sp)
    ctx->pc = 0x1fc590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fc594: 0xdba30180  lqc2        $vf3, 0x180($sp)
    ctx->pc = 0x1fc594u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1fc598: 0x4b0100c0  vaddx.x     $vf3, $vf0, $vf1x
    ctx->pc = 0x1fc598u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fc59c: 0x4be74868  vadd.xyzw   $vf1, $vf9, $vf7
    ctx->pc = 0x1fc59cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc5a0: 0xfba30180  sqc2        $vf3, 0x180($sp)
    ctx->pc = 0x1fc5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fc5a4: 0x4be2097c  vftoi0.xyzw $vf2, $vf1
    ctx->pc = 0x1fc5a4u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc5a8: 0xfba20220  sqc2        $vf2, 0x220($sp)
    ctx->pc = 0x1fc5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fc5ac: 0x4be7486c  vsub.xyzw   $vf1, $vf9, $vf7
    ctx->pc = 0x1fc5acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc5b0: 0x4be7097c  vftoi0.xyzw $vf7, $vf1
    ctx->pc = 0x1fc5b0u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1fc5b4: 0xdba201e0  lqc2        $vf2, 0x1E0($sp)
    ctx->pc = 0x1fc5b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1fc5b8: 0xfba70230  sqc2        $vf7, 0x230($sp)
    ctx->pc = 0x1fc5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1fc5bc: 0x4be24868  vadd.xyzw   $vf1, $vf9, $vf2
    ctx->pc = 0x1fc5bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc5c0: 0x4be808a8  vadd.xyzw   $vf2, $vf1, $vf8
    ctx->pc = 0x1fc5c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc5c4: 0x4be7117c  vftoi0.xyzw $vf7, $vf2
    ctx->pc = 0x1fc5c4u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1fc5c8: 0xfba70240  sqc2        $vf7, 0x240($sp)
    ctx->pc = 0x1fc5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1fc5cc: 0x4be8086c  vsub.xyzw   $vf1, $vf1, $vf8
    ctx->pc = 0x1fc5ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc5d0: 0x4be2097c  vftoi0.xyzw $vf2, $vf1
    ctx->pc = 0x1fc5d0u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc5d4: 0xfba20250  sqc2        $vf2, 0x250($sp)
    ctx->pc = 0x1fc5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fc5d8: 0x4be7317c  vftoi0.xyzw $vf7, $vf6
    ctx->pc = 0x1fc5d8u;
    { __m128 src = ctx->vu0_vf[6]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1fc5dc: 0xfba70260  sqc2        $vf7, 0x260($sp)
    ctx->pc = 0x1fc5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1fc5e0: 0x4be1297c  vftoi0.xyzw $vf1, $vf5
    ctx->pc = 0x1fc5e0u;
    { __m128 src = ctx->vu0_vf[5]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc5e4: 0xfba10270  sqc2        $vf1, 0x270($sp)
    ctx->pc = 0x1fc5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fc5e8: 0x4be2217c  vftoi0.xyzw $vf2, $vf4
    ctx->pc = 0x1fc5e8u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc5ec: 0xfba20280  sqc2        $vf2, 0x280($sp)
    ctx->pc = 0x1fc5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fc5f0: 0x4be4197c  vftoi0.xyzw $vf4, $vf3
    ctx->pc = 0x1fc5f0u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fc5f4: 0xfba40290  sqc2        $vf4, 0x290($sp)
    ctx->pc = 0x1fc5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fc5f8: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x1fc5f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1fc5fc: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x1fc5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
    // 0x1fc600: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1fc600u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fc604: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1fc604u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fc608: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1fc608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1fc60c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fc60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fc610: 0xafa301f0  sw          $v1, 0x1F0($sp)
    ctx->pc = 0x1fc610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
    // 0x1fc614: 0x7ee40010  sq          $a0, 0x10($s7)
    ctx->pc = 0x1fc614u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), GPR_VEC(ctx, 4));
    // 0x1fc618: 0x48232000  qmfc2.ni    $v1, $vf4
    ctx->pc = 0x1fc618u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fc61c: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x1fc61cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x1fc620: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x1fc620u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1fc624: 0x7e660000  sq          $a2, 0x0($s3)
    ctx->pc = 0x1fc624u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 6));
    // 0x1fc628: 0x7ba70230  lq          $a3, 0x230($sp)
    ctx->pc = 0x1fc628u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1fc62c: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x1fc62cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x1fc630: 0x7e670010  sq          $a3, 0x10($s3)
    ctx->pc = 0x1fc630u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 7));
    // 0x1fc634: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x1fc634u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
    // 0x1fc638: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x1fc638u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x1fc63c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1fc63cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1fc640: 0x7ea30010  sq          $v1, 0x10($s5)
    ctx->pc = 0x1fc640u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 3));
    // 0x1fc644: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x1fc644u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1fc648: 0x7ba40240  lq          $a0, 0x240($sp)
    ctx->pc = 0x1fc648u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1fc64c: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x1fc64cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
    // 0x1fc650: 0x7ba60250  lq          $a2, 0x250($sp)
    ctx->pc = 0x1fc650u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1fc654: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1fc654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1fc658: 0x7e460010  sq          $a2, 0x10($s2)
    ctx->pc = 0x1fc658u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 6));
    // 0x1fc65c: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x1fc65cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x1fc660: 0x8e8200a8  lw          $v0, 0xA8($s4)
    ctx->pc = 0x1fc660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x1fc664: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1fc664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1fc668: 0x1040010d  beqz        $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x1FC668u;
    {
        const bool branch_taken_0x1fc668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC668u;
            // 0x1fc66c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc668) {
            ctx->pc = 0x1FCAA0u;
            goto label_1fcaa0;
        }
    }
    ctx->pc = 0x1FC670u;
    // 0x1fc670: 0x8e8200e4  lw          $v0, 0xE4($s4)
    ctx->pc = 0x1fc670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
    // 0x1fc674: 0x8fa702d0  lw          $a3, 0x2D0($sp)
    ctx->pc = 0x1fc674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1fc678: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1fc678u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1fc67c: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1fc67cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fc680: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FC680u;
    {
        const bool branch_taken_0x1fc680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC680u;
            // 0x1fc684: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc680) {
            ctx->pc = 0x1FC700u;
            goto label_1fc700;
        }
    }
    ctx->pc = 0x1FC688u;
    // 0x1fc688: 0x8e8200d8  lw          $v0, 0xD8($s4)
    ctx->pc = 0x1fc688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x1fc68c: 0x80440147  lb          $a0, 0x147($v0)
    ctx->pc = 0x1fc68cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 327)));
    // 0x1fc690: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1fc690u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fc694: 0xa0440146  sb          $a0, 0x146($v0)
    ctx->pc = 0x1fc694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 326), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fc698: 0x3c31818  mult        $v1, $fp, $v1
    ctx->pc = 0x1fc698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1fc69c: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x1fc69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x1fc6a0: 0x34e58000  ori         $a1, $a3, 0x8000
    ctx->pc = 0x1fc6a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x1fc6a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fc6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fc6a8: 0xafa002d0  sw          $zero, 0x2D0($sp)
    ctx->pc = 0x1fc6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 0));
    // 0x1fc6ac: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1fc6acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1fc6b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc6b4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fc6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fc6b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fc6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fc6bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fc6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc6c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc6c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc6c8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1fc6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1fc6cc: 0x8e8200e0  lw          $v0, 0xE0($s4)
    ctx->pc = 0x1fc6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
    // 0x1fc6d0: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x1fc6d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fc6d4: 0x104000f7  beqz        $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x1FC6D4u;
    {
        const bool branch_taken_0x1fc6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC6D4u;
            // 0x1fc6d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6d4) {
            ctx->pc = 0x1FCAB4u;
            goto label_1fcab4;
        }
    }
    ctx->pc = 0x1FC6DCu;
    // 0x1fc6dc: 0x8e8400d8  lw          $a0, 0xD8($s4)
    ctx->pc = 0x1fc6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x1fc6e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fc6e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc6e4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1fc6e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc6e8: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x1fc6e8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x1fc6ec: 0xfba90370  sqc2        $vf9, 0x370($sp)
    ctx->pc = 0x1fc6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1fc6f0: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1FC6F0u;
    SET_GPR_U32(ctx, 31, 0x1FC6F8u);
    ctx->pc = 0x1FC6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC6F0u;
            // 0x1fc6f4: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC6F8u; }
        if (ctx->pc != 0x1FC6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC6F8u; }
        if (ctx->pc != 0x1FC6F8u) { return; }
    }
    ctx->pc = 0x1FC6F8u;
    // 0x1fc6f8: 0xdba90370  lqc2        $vf9, 0x370($sp)
    ctx->pc = 0x1fc6f8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x1fc6fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fc6fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc700:
    // 0x1fc700: 0x4a29033c  vmove.w     $vf9, $vf0
    ctx->pc = 0x1fc700u;
    ctx->vu0_vf[9] = ctx->vu0_vf[0];
    // 0x1fc704: 0xdba102b0  lqc2        $vf1, 0x2B0($sp)
    ctx->pc = 0x1fc704u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1fc708: 0x4be1492c  vsub.xyzw   $vf4, $vf9, $vf1
    ctx->pc = 0x1fc708u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fc70c: 0xdba20110  lqc2        $vf2, 0x110($sp)
    ctx->pc = 0x1fc70cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1fc710: 0x4be220ea  vmul.xyzw   $vf3, $vf4, $vf2
    ctx->pc = 0x1fc710u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fc714: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1fc714u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc718: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1fc718u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc71c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1fc71cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fc720: 0x4be248ea  vmul.xyzw   $vf3, $vf9, $vf2
    ctx->pc = 0x1fc720u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fc724: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fc724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fc728: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1fc728u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc72c: 0x4a2318c2  vaddz.w     $vf3, $vf3, $vf3z
    ctx->pc = 0x1fc72cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fc730: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1fc730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fc734: 0x4b030843  vaddw.x     $vf1, $vf1, $vf3w
    ctx->pc = 0x1fc734u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc738: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1fc738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fc73c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1fc73cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fc740: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fc740u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc744: 0xfba40190  sqc2        $vf4, 0x190($sp)
    ctx->pc = 0x1fc744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fc748: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fc748u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1fc74c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1fc74cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1fc750: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1fc750u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1fc754: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1fc754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fc758: 0x4be4486c  vsub.xyzw   $vf1, $vf9, $vf4
    ctx->pc = 0x1fc758u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc75c: 0xfba102e0  sqc2        $vf1, 0x2E0($sp)
    ctx->pc = 0x1fc75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fc760: 0xdba30200  lqc2        $vf3, 0x200($sp)
    ctx->pc = 0x1fc760u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1fc764: 0x4be3486c  vsub.xyzw   $vf1, $vf9, $vf3
    ctx->pc = 0x1fc764u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc768: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x1fc768u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x1fc76c: 0x4bc208ae  vopmsub.xyz $vf2, $vf1, $vf2
    ctx->pc = 0x1fc76cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fc770: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1fc770u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc774: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1fc774u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fc778: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1fc778u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc77c: 0x4615d802  mul.s       $f0, $f27, $f21
    ctx->pc = 0x1fc77cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[27], ctx->f[21]);
    // 0x1fc780: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1fc780u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc784: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1fc784u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1fc788: 0x4a0003bf  vwaitq
    ctx->pc = 0x1fc788u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1fc78c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1fc78cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc790: 0x4a0002ff  vnop
    ctx->pc = 0x1fc790u;
    // NOP operation, no action needed for VU0
    // 0x1fc794: 0x4a0002ff  vnop
    ctx->pc = 0x1fc794u;
    // NOP operation, no action needed for VU0
    // 0x1fc798: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1fc798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fc79c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1fc79cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1fc7a0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1fc7a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1fc7a4: 0xfba201a0  sqc2        $vf2, 0x1A0($sp)
    ctx->pc = 0x1fc7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fc7a8: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1fc7a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc7ac: 0xfba201a0  sqc2        $vf2, 0x1A0($sp)
    ctx->pc = 0x1fc7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fc7b0: 0xdba10140  lqc2        $vf1, 0x140($sp)
    ctx->pc = 0x1fc7b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1fc7b4: 0xdba402c0  lqc2        $vf4, 0x2C0($sp)
    ctx->pc = 0x1fc7b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x1fc7b8: 0x4be120ec  vsub.xyzw   $vf3, $vf4, $vf1
    ctx->pc = 0x1fc7b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fc7bc: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x1fc7bcu;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1fc7c0: 0xfba502f0  sqc2        $vf5, 0x2F0($sp)
    ctx->pc = 0x1fc7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1fc7c4: 0xdba702e0  lqc2        $vf7, 0x2E0($sp)
    ctx->pc = 0x1fc7c4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1fc7c8: 0x4be2392c  vsub.xyzw   $vf4, $vf7, $vf2
    ctx->pc = 0x1fc7c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fc7cc: 0x4be5217c  vftoi0.xyzw $vf5, $vf4
    ctx->pc = 0x1fc7ccu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1fc7d0: 0xfba50300  sqc2        $vf5, 0x300($sp)
    ctx->pc = 0x1fc7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1fc7d4: 0xdba702c0  lqc2        $vf7, 0x2C0($sp)
    ctx->pc = 0x1fc7d4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x1fc7d8: 0x4be13868  vadd.xyzw   $vf1, $vf7, $vf1
    ctx->pc = 0x1fc7d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc7dc: 0x4be5097c  vftoi0.xyzw $vf5, $vf1
    ctx->pc = 0x1fc7dcu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1fc7e0: 0xfba50310  sqc2        $vf5, 0x310($sp)
    ctx->pc = 0x1fc7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1fc7e4: 0xdba702e0  lqc2        $vf7, 0x2E0($sp)
    ctx->pc = 0x1fc7e4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1fc7e8: 0x4be238a8  vadd.xyzw   $vf2, $vf7, $vf2
    ctx->pc = 0x1fc7e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc7ec: 0x4be5117c  vftoi0.xyzw $vf5, $vf2
    ctx->pc = 0x1fc7ecu;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1fc7f0: 0xfba50320  sqc2        $vf5, 0x320($sp)
    ctx->pc = 0x1fc7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1fc7f4: 0xdba702a0  lqc2        $vf7, 0x2A0($sp)
    ctx->pc = 0x1fc7f4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1fc7f8: 0x4be7086c  vsub.xyzw   $vf1, $vf1, $vf7
    ctx->pc = 0x1fc7f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fc7fc: 0x4be5097c  vftoi0.xyzw $vf5, $vf1
    ctx->pc = 0x1fc7fcu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1fc800: 0xfba50330  sqc2        $vf5, 0x330($sp)
    ctx->pc = 0x1fc800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1fc804: 0x4be710ac  vsub.xyzw   $vf2, $vf2, $vf7
    ctx->pc = 0x1fc804u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc808: 0x4be7117c  vftoi0.xyzw $vf7, $vf2
    ctx->pc = 0x1fc808u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1fc80c: 0xfba70340  sqc2        $vf7, 0x340($sp)
    ctx->pc = 0x1fc80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1fc810: 0xdba102a0  lqc2        $vf1, 0x2A0($sp)
    ctx->pc = 0x1fc810u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1fc814: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1fc814u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fc818: 0x4be2197c  vftoi0.xyzw $vf2, $vf3
    ctx->pc = 0x1fc818u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fc81c: 0xfba20350  sqc2        $vf2, 0x350($sp)
    ctx->pc = 0x1fc81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fc820: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1fc820u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fc824: 0x4be3217c  vftoi0.xyzw $vf3, $vf4
    ctx->pc = 0x1fc824u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fc828: 0xfba30360  sqc2        $vf3, 0x360($sp)
    ctx->pc = 0x1fc828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fc82c: 0x7ba202f0  lq          $v0, 0x2F0($sp)
    ctx->pc = 0x1fc82cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1fc830: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x1fc830u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x1fc834: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1fc834u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1fc838: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x1fc838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x1fc83c: 0x3421be77  ori         $at, $at, 0xBE77
    ctx->pc = 0x1fc83cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48759);
    // 0x1fc840: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fc840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fc844: 0x7ba30300  lq          $v1, 0x300($sp)
    ctx->pc = 0x1fc844u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1fc848: 0x4618a000  add.s       $f0, $f20, $f24
    ctx->pc = 0x1fc848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
    // 0x1fc84c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fc84cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc850: 0x34168000  ori         $s6, $zero, 0x8000
    ctx->pc = 0x1fc850u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fc854: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x1fc854u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x1fc858: 0x48233800  qmfc2.ni    $v1, $vf7
    ctx->pc = 0x1fc858u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1fc85c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fc85cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fc860: 0x7ba40310  lq          $a0, 0x310($sp)
    ctx->pc = 0x1fc860u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1fc864: 0x7e240020  sq          $a0, 0x20($s1)
    ctx->pc = 0x1fc864u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 4));
    // 0x1fc868: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1fc868u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fc86c: 0x7ba60320  lq          $a2, 0x320($sp)
    ctx->pc = 0x1fc86cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1fc870: 0x7e260030  sq          $a2, 0x30($s1)
    ctx->pc = 0x1fc870u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 6));
    // 0x1fc874: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x1fc874u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fc878: 0x8fa702d0  lw          $a3, 0x2D0($sp)
    ctx->pc = 0x1fc878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1fc87c: 0x24e7000a  addiu       $a3, $a3, 0xA
    ctx->pc = 0x1fc87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10));
    // 0x1fc880: 0xafa702d0  sw          $a3, 0x2D0($sp)
    ctx->pc = 0x1fc880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 7));
    // 0x1fc884: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x1fc884u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x1fc888: 0x7e230050  sq          $v1, 0x50($s1)
    ctx->pc = 0x1fc888u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 3));
    // 0x1fc88c: 0x7e240060  sq          $a0, 0x60($s1)
    ctx->pc = 0x1fc88cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 4));
    // 0x1fc890: 0x7e260070  sq          $a2, 0x70($s1)
    ctx->pc = 0x1fc890u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 6));
    // 0x1fc894: 0x7ba702f0  lq          $a3, 0x2F0($sp)
    ctx->pc = 0x1fc894u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1fc898: 0x7e270080  sq          $a3, 0x80($s1)
    ctx->pc = 0x1fc898u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), GPR_VEC(ctx, 7));
    // 0x1fc89c: 0x7ba20300  lq          $v0, 0x300($sp)
    ctx->pc = 0x1fc89cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1fc8a0: 0xae36000c  sw          $s6, 0xC($s1)
    ctx->pc = 0x1fc8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 22));
    // 0x1fc8a4: 0x7e220090  sq          $v0, 0x90($s1)
    ctx->pc = 0x1fc8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 2));
    // 0x1fc8a8: 0xae36001c  sw          $s6, 0x1C($s1)
    ctx->pc = 0x1fc8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 22));
    // 0x1fc8ac: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1fc8acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x1fc8b0: 0xae30003c  sw          $s0, 0x3C($s1)
    ctx->pc = 0x1fc8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 16));
    // 0x1fc8b4: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x1fc8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x1fc8b8: 0xae30005c  sw          $s0, 0x5C($s1)
    ctx->pc = 0x1fc8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 16));
    // 0x1fc8bc: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x1fc8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x1fc8c0: 0xae30007c  sw          $s0, 0x7C($s1)
    ctx->pc = 0x1fc8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 16));
    // 0x1fc8c4: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x1fc8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
    // 0x1fc8c8: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x1fc8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
    // 0x1fc8cc: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x1FC8CCu;
    {
        const bool branch_taken_0x1fc8cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FC8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC8CCu;
            // 0x1fc8d0: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8cc) {
            ctx->pc = 0x1FC9A8u;
            goto label_1fc9a8;
        }
    }
    ctx->pc = 0x1FC8D4u;
    // 0x1fc8d4: 0x8e8200e4  lw          $v0, 0xE4($s4)
    ctx->pc = 0x1fc8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
    // 0x1fc8d8: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x1fc8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1fc8dc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fc8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc8e0: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1fc8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1fc8e4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FC8E4u;
    {
        const bool branch_taken_0x1fc8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC8E4u;
            // 0x1fc8e8: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8e4) {
            ctx->pc = 0x1FC968u;
            goto label_1fc968;
        }
    }
    ctx->pc = 0x1FC8ECu;
    // 0x1fc8ec: 0x8e8200d8  lw          $v0, 0xD8($s4)
    ctx->pc = 0x1fc8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x1fc8f0: 0x80440147  lb          $a0, 0x147($v0)
    ctx->pc = 0x1fc8f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 327)));
    // 0x1fc8f4: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1fc8f4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fc8f8: 0xa0440146  sb          $a0, 0x146($v0)
    ctx->pc = 0x1fc8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 326), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fc8fc: 0x3c31818  mult        $v1, $fp, $v1
    ctx->pc = 0x1fc8fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1fc900: 0x8fa602d0  lw          $a2, 0x2D0($sp)
    ctx->pc = 0x1fc900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1fc904: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x1fc904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x1fc908: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fc908u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fc90c: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x1fc90cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1fc910: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1fc910u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1fc914: 0xafa002d0  sw          $zero, 0x2D0($sp)
    ctx->pc = 0x1fc914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 0));
    // 0x1fc918: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc91c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fc91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fc920: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fc920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fc924: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fc924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc928: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc92c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc930: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1fc930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1fc934: 0x8e8200e0  lw          $v0, 0xE0($s4)
    ctx->pc = 0x1fc934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
    // 0x1fc938: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x1fc938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fc93c: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1FC93Cu;
    {
        const bool branch_taken_0x1fc93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC93Cu;
            // 0x1fc940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc93c) {
            ctx->pc = 0x1FCAB4u;
            goto label_1fcab4;
        }
    }
    ctx->pc = 0x1FC944u;
    // 0x1fc944: 0x8e8400d8  lw          $a0, 0xD8($s4)
    ctx->pc = 0x1fc944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x1fc948: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fc948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc94c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1fc94cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc950: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x1fc950u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x1fc954: 0xfba90370  sqc2        $vf9, 0x370($sp)
    ctx->pc = 0x1fc954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1fc958: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1FC958u;
    SET_GPR_U32(ctx, 31, 0x1FC960u);
    ctx->pc = 0x1FC95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC958u;
            // 0x1fc95c: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC960u; }
        if (ctx->pc != 0x1FC960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC960u; }
        if (ctx->pc != 0x1FC960u) { return; }
    }
    ctx->pc = 0x1FC960u;
    // 0x1fc960: 0xdba90370  lqc2        $vf9, 0x370($sp)
    ctx->pc = 0x1fc960u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x1fc964: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fc964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc968:
    // 0x1fc968: 0x7ba702f0  lq          $a3, 0x2F0($sp)
    ctx->pc = 0x1fc968u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1fc96c: 0x7e270000  sq          $a3, 0x0($s1)
    ctx->pc = 0x1fc96cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 7));
    // 0x1fc970: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x1fc970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1fc974: 0x7ba30310  lq          $v1, 0x310($sp)
    ctx->pc = 0x1fc974u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1fc978: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1fc978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1fc97c: 0xafa202d0  sw          $v0, 0x2D0($sp)
    ctx->pc = 0x1fc97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 2));
    // 0x1fc980: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x1fc980u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x1fc984: 0x7ba40350  lq          $a0, 0x350($sp)
    ctx->pc = 0x1fc984u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1fc988: 0x7e240020  sq          $a0, 0x20($s1)
    ctx->pc = 0x1fc988u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 4));
    // 0x1fc98c: 0x7ba60330  lq          $a2, 0x330($sp)
    ctx->pc = 0x1fc98cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x1fc990: 0xae36001c  sw          $s6, 0x1C($s1)
    ctx->pc = 0x1fc990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 22));
    // 0x1fc994: 0x7e260030  sq          $a2, 0x30($s1)
    ctx->pc = 0x1fc994u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 6));
    // 0x1fc998: 0xae30003c  sw          $s0, 0x3C($s1)
    ctx->pc = 0x1fc998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 16));
    // 0x1fc99c: 0xae36000c  sw          $s6, 0xC($s1)
    ctx->pc = 0x1fc99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 22));
    // 0x1fc9a0: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1fc9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x1fc9a4: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1fc9a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1fc9a8:
    // 0x1fc9a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fc9a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc9ac: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1fc9acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fc9b0: 0x0  nop
    ctx->pc = 0x1fc9b0u;
    // NOP
    // 0x1fc9b4: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x1FC9B4u;
    {
        const bool branch_taken_0x1fc9b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FC9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC9B4u;
            // 0x1fc9b8: 0x8fa702d0  lw          $a3, 0x2D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9b4) {
            ctx->pc = 0x1FCA90u;
            goto label_1fca90;
        }
    }
    ctx->pc = 0x1FC9BCu;
    // 0x1fc9bc: 0x8e8200e4  lw          $v0, 0xE4($s4)
    ctx->pc = 0x1fc9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
    // 0x1fc9c0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1fc9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1fc9c4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1fc9c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1fc9c8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FC9C8u;
    {
        const bool branch_taken_0x1fc9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC9C8u;
            // 0x1fc9cc: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9c8) {
            ctx->pc = 0x1FCA48u;
            goto label_1fca48;
        }
    }
    ctx->pc = 0x1FC9D0u;
    // 0x1fc9d0: 0x8e8200d8  lw          $v0, 0xD8($s4)
    ctx->pc = 0x1fc9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x1fc9d4: 0x80440147  lb          $a0, 0x147($v0)
    ctx->pc = 0x1fc9d4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 327)));
    // 0x1fc9d8: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1fc9d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fc9dc: 0xa0440146  sb          $a0, 0x146($v0)
    ctx->pc = 0x1fc9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 326), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fc9e0: 0x3c31818  mult        $v1, $fp, $v1
    ctx->pc = 0x1fc9e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1fc9e4: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x1fc9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x1fc9e8: 0x34e58000  ori         $a1, $a3, 0x8000
    ctx->pc = 0x1fc9e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x1fc9ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fc9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fc9f0: 0xafa002d0  sw          $zero, 0x2D0($sp)
    ctx->pc = 0x1fc9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 0));
    // 0x1fc9f4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1fc9f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1fc9f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc9fc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fc9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fca00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fca00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fca04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fca04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fca08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fca08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fca0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fca10: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1fca10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1fca14: 0x8e8200e0  lw          $v0, 0xE0($s4)
    ctx->pc = 0x1fca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
    // 0x1fca18: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x1fca18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fca1c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1FCA1Cu;
    {
        const bool branch_taken_0x1fca1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCA1Cu;
            // 0x1fca20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca1c) {
            ctx->pc = 0x1FCAB4u;
            goto label_1fcab4;
        }
    }
    ctx->pc = 0x1FCA24u;
    // 0x1fca24: 0x8e8400d8  lw          $a0, 0xD8($s4)
    ctx->pc = 0x1fca24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x1fca28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fca28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca2c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1fca2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca30: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x1fca30u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x1fca34: 0xfba90370  sqc2        $vf9, 0x370($sp)
    ctx->pc = 0x1fca34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1fca38: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1FCA38u;
    SET_GPR_U32(ctx, 31, 0x1FCA40u);
    ctx->pc = 0x1FCA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCA38u;
            // 0x1fca3c: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCA40u; }
        if (ctx->pc != 0x1FCA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCA40u; }
        if (ctx->pc != 0x1FCA40u) { return; }
    }
    ctx->pc = 0x1FCA40u;
    // 0x1fca40: 0xdba90370  lqc2        $vf9, 0x370($sp)
    ctx->pc = 0x1fca40u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x1fca44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fca44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fca48:
    // 0x1fca48: 0x7ba20300  lq          $v0, 0x300($sp)
    ctx->pc = 0x1fca48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1fca4c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1fca4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fca50: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x1fca50u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x1fca54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fca58: 0x7ba40320  lq          $a0, 0x320($sp)
    ctx->pc = 0x1fca58u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1fca5c: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x1fca5cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
    // 0x1fca60: 0x7ba60360  lq          $a2, 0x360($sp)
    ctx->pc = 0x1fca60u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x1fca64: 0x7e260020  sq          $a2, 0x20($s1)
    ctx->pc = 0x1fca64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 6));
    // 0x1fca68: 0x8fa702d0  lw          $a3, 0x2D0($sp)
    ctx->pc = 0x1fca68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1fca6c: 0x7ba40340  lq          $a0, 0x340($sp)
    ctx->pc = 0x1fca6cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1fca70: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1fca70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1fca74: 0xafa702d0  sw          $a3, 0x2D0($sp)
    ctx->pc = 0x1fca74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 7));
    // 0x1fca78: 0x7e240030  sq          $a0, 0x30($s1)
    ctx->pc = 0x1fca78u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 4));
    // 0x1fca7c: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x1fca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x1fca80: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x1fca80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x1fca84: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1fca84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1fca88: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x1fca88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x1fca8c: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1fca8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1fca90:
    // 0x1fca90: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x1fca90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1fca94: 0x7ba602e0  lq          $a2, 0x2E0($sp)
    ctx->pc = 0x1fca94u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1fca98: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1fca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x1fca9c: 0x7fa602c0  sq          $a2, 0x2C0($sp)
    ctx->pc = 0x1fca9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 6));
label_1fcaa0:
    // 0x1fcaa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fcaa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fcaa4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1fcaa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fcaa8: 0x0  nop
    ctx->pc = 0x1fcaa8u;
    // NOP
    // 0x1fcaac: 0x4501fe02  bc1t        . + 4 + (-0x1FE << 2)
    ctx->pc = 0x1FCAACu;
    {
        const bool branch_taken_0x1fcaac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FCAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCAACu;
            // 0x1fcab0: 0xfba90200  sqc2        $vf9, 0x200($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[9]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcaac) {
            ctx->pc = 0x1FC2B8u;
            runtime->cooperativeGuestYield();
            goto label_1fc2b8;
        }
    }
    ctx->pc = 0x1FCAB4u;
label_1fcab4:
    // 0x1fcab4: 0x8e8200d0  lw          $v0, 0xD0($s4)
    ctx->pc = 0x1fcab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x1fcab8: 0x8fb301f4  lw          $s3, 0x1F4($sp)
    ctx->pc = 0x1fcab8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1fcabc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1fcabcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fcac0: 0x50400059  beql        $v0, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x1FCAC0u;
    {
        const bool branch_taken_0x1fcac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcac0) {
            ctx->pc = 0x1FCAC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCAC0u;
            // 0x1fcac4: 0x8e8200e0  lw          $v0, 0xE0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FCC28u;
            goto label_1fcc28;
        }
    }
    ctx->pc = 0x1FCAC8u;
    // 0x1fcac8: 0x8fa701f0  lw          $a3, 0x1F0($sp)
    ctx->pc = 0x1fcac8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1fcacc: 0x0  nop
    ctx->pc = 0x1fcaccu;
    // NOP
label_1fcad0:
    // 0x1fcad0: 0x54e00031  bnel        $a3, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x1FCAD0u;
    {
        const bool branch_taken_0x1fcad0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcad0) {
            ctx->pc = 0x1FCAD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCAD0u;
            // 0x1fcad4: 0x8e8200c0  lw          $v0, 0xC0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FCB98u;
            goto label_1fcb98;
        }
    }
    ctx->pc = 0x1FCAD8u;
    // 0x1fcad8: 0x8e8400c0  lw          $a0, 0xC0($s4)
    ctx->pc = 0x1fcad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x1fcadc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fcadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcae0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fcae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcae4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1fcae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcae8: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x1fcae8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x1fcaec: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x1fcaecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fcaf0: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1FCAF0u;
    SET_GPR_U32(ctx, 31, 0x1FCAF8u);
    ctx->pc = 0x1FCAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCAF0u;
            // 0x1fcaf4: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCAF8u; }
        if (ctx->pc != 0x1FCAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCAF8u; }
        if (ctx->pc != 0x1FCAF8u) { return; }
    }
    ctx->pc = 0x1FCAF8u;
    // 0x1fcaf8: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x1fcaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    // 0x1fcafc: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x1fcafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x1fcb00: 0x80480147  lb          $t0, 0x147($v0)
    ctx->pc = 0x1fcb00u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 327)));
    // 0x1fcb04: 0x2d080001  sltiu       $t0, $t0, 0x1
    ctx->pc = 0x1fcb04u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fcb08: 0xa0480146  sb          $t0, 0x146($v0)
    ctx->pc = 0x1fcb08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 326), (uint8_t)GPR_U32(ctx, 8));
    // 0x1fcb0c: 0x2410001c  addiu       $s0, $zero, 0x1C
    ctx->pc = 0x1fcb0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1fcb10: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x1fcb10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1fcb14: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x1fcb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x1fcb18: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1fcb18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1fcb1c: 0x34128001  ori         $s2, $zero, 0x8001
    ctx->pc = 0x1fcb1cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1fcb20: 0x8e8900c8  lw          $t1, 0xC8($s4)
    ctx->pc = 0x1fcb20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x1fcb24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fcb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fcb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb2c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1fcb2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb30: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1fcb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fcb34: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x1fcb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb38: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fcb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fcb3c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1fcb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1fcb40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fcb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fcb44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fcb44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fcb48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fcb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcb4c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1fcb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1fcb50: 0x81280147  lb          $t0, 0x147($t1)
    ctx->pc = 0x1fcb50u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 327)));
    // 0x1fcb54: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1FCB54u;
    SET_GPR_U32(ctx, 31, 0x1FCB5Cu);
    ctx->pc = 0x1FCB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCB54u;
            // 0x1fcb58: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB5Cu; }
        if (ctx->pc != 0x1FCB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB5Cu; }
        if (ctx->pc != 0x1FCB5Cu) { return; }
    }
    ctx->pc = 0x1FCB5Cu;
    // 0x1fcb5c: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x1fcb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    // 0x1fcb60: 0x8e8200c8  lw          $v0, 0xC8($s4)
    ctx->pc = 0x1fcb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x1fcb64: 0x80430147  lb          $v1, 0x147($v0)
    ctx->pc = 0x1fcb64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 327)));
    // 0x1fcb68: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1fcb68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fcb6c: 0xa0430146  sb          $v1, 0x146($v0)
    ctx->pc = 0x1fcb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 326), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fcb70: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x1fcb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x1fcb74: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1fcb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fcb78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fcb78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fcb7c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1fcb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fcb80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fcb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcb84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fcb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fcb88: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fcb88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fcb8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fcb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fcb90: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1FCB90u;
    {
        const bool branch_taken_0x1fcb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCB90u;
            // 0x1fcb94: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb90) {
            ctx->pc = 0x1FCC10u;
            goto label_1fcc10;
        }
    }
    ctx->pc = 0x1FCB98u;
label_1fcb98:
    // 0x1fcb98: 0x80440147  lb          $a0, 0x147($v0)
    ctx->pc = 0x1fcb98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 327)));
    // 0x1fcb9c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1fcb9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fcba0: 0xa0440146  sb          $a0, 0x146($v0)
    ctx->pc = 0x1fcba0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 326), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fcba4: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1fcba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1fcba8: 0x2663018  mult        $a2, $s3, $a2
    ctx->pc = 0x1fcba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1fcbac: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1fcbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1fcbb0: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x1fcbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x1fcbb4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fcbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fcbb8: 0x34678000  ori         $a3, $v1, 0x8000
    ctx->pc = 0x1fcbb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1fcbbc: 0x8e8500c8  lw          $a1, 0xC8($s4)
    ctx->pc = 0x1fcbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x1fcbc0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1fcbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fcbc4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fcbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fcbc8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fcbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fcbcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fcbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fcbd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fcbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fcbd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fcbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcbd8: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1fcbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1fcbdc: 0x80a40147  lb          $a0, 0x147($a1)
    ctx->pc = 0x1fcbdcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 327)));
    // 0x1fcbe0: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1fcbe0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fcbe4: 0xa0a40146  sb          $a0, 0x146($a1)
    ctx->pc = 0x1fcbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 326), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fcbe8: 0x8ca20140  lw          $v0, 0x140($a1)
    ctx->pc = 0x1fcbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 320)));
    // 0x1fcbec: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x1fcbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x1fcbf0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1fcbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fcbf4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fcbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fcbf8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fcbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fcbfc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fcbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fcc00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fcc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fcc04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fcc04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fcc08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fcc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcc0c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1fcc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_1fcc10:
    // 0x1fcc10: 0x8e8200d0  lw          $v0, 0xD0($s4)
    ctx->pc = 0x1fcc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x1fcc14: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1fcc14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1fcc18: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1fcc18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fcc1c: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x1FCC1Cu;
    {
        const bool branch_taken_0x1fcc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCC1Cu;
            // 0x1fcc20: 0x8fa701f0  lw          $a3, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc1c) {
            ctx->pc = 0x1FCAD0u;
            runtime->cooperativeGuestYield();
            goto label_1fcad0;
        }
    }
    ctx->pc = 0x1FCC24u;
    // 0x1fcc24: 0x8e8200e0  lw          $v0, 0xE0($s4)
    ctx->pc = 0x1fcc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_1fcc28:
    // 0x1fcc28: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x1fcc28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc2c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1fcc2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fcc30: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1FCC30u;
    {
        const bool branch_taken_0x1fcc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCC30u;
            // 0x1fcc34: 0x7bb00410  lq          $s0, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc30) {
            ctx->pc = 0x1FCCF4u;
            goto label_1fccf4;
        }
    }
    ctx->pc = 0x1FCC38u;
    // 0x1fcc38: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x1fcc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1fcc3c: 0x0  nop
    ctx->pc = 0x1fcc3cu;
    // NOP
label_1fcc40:
    // 0x1fcc40: 0x54800015  bnel        $a0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FCC40u;
    {
        const bool branch_taken_0x1fcc40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcc40) {
            ctx->pc = 0x1FCC44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCC40u;
            // 0x1fcc44: 0x8e8200d8  lw          $v0, 0xD8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FCC98u;
            goto label_1fcc98;
        }
    }
    ctx->pc = 0x1FCC48u;
    // 0x1fcc48: 0x8e8400d8  lw          $a0, 0xD8($s4)
    ctx->pc = 0x1fcc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x1fcc4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fcc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fcc50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc54: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1fcc54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc58: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x1fcc58u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x1fcc5c: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1FCC5Cu;
    SET_GPR_U32(ctx, 31, 0x1FCC64u);
    ctx->pc = 0x1FCC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCC5Cu;
            // 0x1fcc60: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCC64u; }
        if (ctx->pc != 0x1FCC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCC64u; }
        if (ctx->pc != 0x1FCC64u) { return; }
    }
    ctx->pc = 0x1FCC64u;
    // 0x1fcc64: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1fcc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fcc68: 0x8e8500d8  lw          $a1, 0xD8($s4)
    ctx->pc = 0x1fcc68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x1fcc6c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1fcc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1fcc70: 0x80a40147  lb          $a0, 0x147($a1)
    ctx->pc = 0x1fcc70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 327)));
    // 0x1fcc74: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1fcc74u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fcc78: 0xa0a40146  sb          $a0, 0x146($a1)
    ctx->pc = 0x1fcc78u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 326), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fcc7c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1fcc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1fcc80: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x1fcc80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1fcc84: 0x8ca20140  lw          $v0, 0x140($a1)
    ctx->pc = 0x1fcc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 320)));
    // 0x1fcc88: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fcc88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fcc8c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FCC8Cu;
    {
        const bool branch_taken_0x1fcc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCC8Cu;
            // 0x1fcc90: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc8c) {
            ctx->pc = 0x1FCCC0u;
            goto label_1fccc0;
        }
    }
    ctx->pc = 0x1FCC94u;
    // 0x1fcc94: 0x0  nop
    ctx->pc = 0x1fcc94u;
    // NOP
label_1fcc98:
    // 0x1fcc98: 0x80440147  lb          $a0, 0x147($v0)
    ctx->pc = 0x1fcc98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 327)));
    // 0x1fcc9c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1fcc9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fcca0: 0xa0440146  sb          $a0, 0x146($v0)
    ctx->pc = 0x1fcca0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 326), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fcca4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1fcca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1fcca8: 0x8fa602d0  lw          $a2, 0x2D0($sp)
    ctx->pc = 0x1fcca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1fccac: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x1fccacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1fccb0: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x1fccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x1fccb4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fccb8: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x1fccb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1fccbc: 0xafa002d0  sw          $zero, 0x2D0($sp)
    ctx->pc = 0x1fccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 0));
label_1fccc0:
    // 0x1fccc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fccc4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fccc8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fcccc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fccd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fccd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fccd8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1fccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1fccdc: 0x8e8200e0  lw          $v0, 0xE0($s4)
    ctx->pc = 0x1fccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
    // 0x1fcce0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1fcce0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1fcce4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1fcce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fcce8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1FCCE8u;
    {
        const bool branch_taken_0x1fcce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCCE8u;
            // 0x1fccec: 0x8fa402d0  lw          $a0, 0x2D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcce8) {
            ctx->pc = 0x1FCC40u;
            runtime->cooperativeGuestYield();
            goto label_1fcc40;
        }
    }
    ctx->pc = 0x1FCCF0u;
    // 0x1fccf0: 0x7bb00410  lq          $s0, 0x410($sp)
    ctx->pc = 0x1fccf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_1fccf4:
    // 0x1fccf4: 0x7bb10400  lq          $s1, 0x400($sp)
    ctx->pc = 0x1fccf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1fccf8: 0x7bb203f0  lq          $s2, 0x3F0($sp)
    ctx->pc = 0x1fccf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x1fccfc: 0x7bb303e0  lq          $s3, 0x3E0($sp)
    ctx->pc = 0x1fccfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1fcd00: 0x7bb403d0  lq          $s4, 0x3D0($sp)
    ctx->pc = 0x1fcd00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1fcd04: 0x7bb503c0  lq          $s5, 0x3C0($sp)
    ctx->pc = 0x1fcd04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x1fcd08: 0x7bb603b0  lq          $s6, 0x3B0($sp)
    ctx->pc = 0x1fcd08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x1fcd0c: 0x7bb703a0  lq          $s7, 0x3A0($sp)
    ctx->pc = 0x1fcd0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x1fcd10: 0x7bbe0390  lq          $fp, 0x390($sp)
    ctx->pc = 0x1fcd10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1fcd14: 0xdfbf0380  ld          $ra, 0x380($sp)
    ctx->pc = 0x1fcd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x1fcd18: 0xc7bd0468  lwc1        $f29, 0x468($sp)
    ctx->pc = 0x1fcd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x1fcd1c: 0xc7bc0460  lwc1        $f28, 0x460($sp)
    ctx->pc = 0x1fcd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1fcd20: 0xc7bb0458  lwc1        $f27, 0x458($sp)
    ctx->pc = 0x1fcd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1fcd24: 0xc7ba0450  lwc1        $f26, 0x450($sp)
    ctx->pc = 0x1fcd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1fcd28: 0xc7b90448  lwc1        $f25, 0x448($sp)
    ctx->pc = 0x1fcd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1fcd2c: 0xc7b80440  lwc1        $f24, 0x440($sp)
    ctx->pc = 0x1fcd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1fcd30: 0xc7b70438  lwc1        $f23, 0x438($sp)
    ctx->pc = 0x1fcd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1fcd34: 0xc7b60430  lwc1        $f22, 0x430($sp)
    ctx->pc = 0x1fcd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1fcd38: 0xc7b50428  lwc1        $f21, 0x428($sp)
    ctx->pc = 0x1fcd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1fcd3c: 0xc7b40420  lwc1        $f20, 0x420($sp)
    ctx->pc = 0x1fcd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fcd40: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCD40u;
            // 0x1fcd44: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FBD90u: goto label_1fbd90;
            case 0x1FBDA8u: goto label_1fbda8;
            case 0x1FBDC4u: goto label_1fbdc4;
            case 0x1FBF38u: goto label_1fbf38;
            case 0x1FC2A8u: goto label_1fc2a8;
            case 0x1FC2B8u: goto label_1fc2b8;
            case 0x1FC2CCu: goto label_1fc2cc;
            case 0x1FC460u: goto label_1fc460;
            case 0x1FC700u: goto label_1fc700;
            case 0x1FC968u: goto label_1fc968;
            case 0x1FC9A8u: goto label_1fc9a8;
            case 0x1FCA48u: goto label_1fca48;
            case 0x1FCA90u: goto label_1fca90;
            case 0x1FCAA0u: goto label_1fcaa0;
            case 0x1FCAB4u: goto label_1fcab4;
            case 0x1FCAD0u: goto label_1fcad0;
            case 0x1FCB98u: goto label_1fcb98;
            case 0x1FCC10u: goto label_1fcc10;
            case 0x1FCC28u: goto label_1fcc28;
            case 0x1FCC40u: goto label_1fcc40;
            case 0x1FCC98u: goto label_1fcc98;
            case 0x1FCCC0u: goto label_1fccc0;
            case 0x1FCCF4u: goto label_1fccf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FCD48u;
}
