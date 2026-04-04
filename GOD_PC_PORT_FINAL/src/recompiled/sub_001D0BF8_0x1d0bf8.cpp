#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0BF8
// Address: 0x1d0bf8 - 0x1d0e48
void sub_001D0BF8_0x1d0bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0BF8_0x1d0bf8");
#endif

    ctx->pc = 0x1d0bf8u;

    // 0x1d0bf8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d0bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1d0bfc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1d0bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1d0c00: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1d0c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1d0c04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d0c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c08: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1d0c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1d0c0c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1d0c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1d0c10: 0x52403  sra         $a0, $a1, 16
    ctx->pc = 0x1d0c10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1d0c14: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1d0c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1d0c18: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1d0c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1d0c1c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1d0c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1d0c20: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d0c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1d0c24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1d0c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1d0c28: 0x96220072  lhu         $v0, 0x72($s1)
    ctx->pc = 0x1d0c28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 114)));
    // 0x1d0c2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d0c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0c30: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1d0c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1d0c34: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1d0c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1d0c38: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D0C38u;
    {
        const bool branch_taken_0x1d0c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C38u;
            // 0x1d0c3c: 0xa6220072  sh          $v0, 0x72($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 114), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c38) {
            ctx->pc = 0x1D0C68u;
            goto label_1d0c68;
        }
    }
    ctx->pc = 0x1D0C40u;
    // 0x1d0c40: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1d0c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c44: 0xa624007e  sh          $a0, 0x7E($s1)
    ctx->pc = 0x1d0c44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 126), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d0c48: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d0c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d0c4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d0c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c50: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1D0C50u;
    SET_GPR_U32(ctx, 31, 0x1D0C58u);
    ctx->pc = 0x1D0C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C50u;
            // 0x1d0c54: 0x24a56310  addiu       $a1, $a1, 0x6310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C58u; }
        if (ctx->pc != 0x1D0C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C58u; }
        if (ctx->pc != 0x1D0C58u) { return; }
    }
    ctx->pc = 0x1D0C58u;
    // 0x1d0c58: 0xc061f3a  jal         func_187CE8
    ctx->pc = 0x1D0C58u;
    SET_GPR_U32(ctx, 31, 0x1D0C60u);
    ctx->pc = 0x1D0C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C58u;
            // 0x1d0c5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187CE8u;
    if (runtime->hasFunction(0x187CE8u)) {
        auto targetFn = runtime->lookupFunction(0x187CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C60u; }
        if (ctx->pc != 0x1D0C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187CE8_0x187ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C60u; }
        if (ctx->pc != 0x1D0C60u) { return; }
    }
    ctx->pc = 0x1D0C60u;
    // 0x1d0c60: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1d0c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1d0c64: 0x0  nop
    ctx->pc = 0x1d0c64u;
    // NOP
label_1d0c68:
    // 0x1d0c68: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x1d0c68u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d0c6c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d0c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d0c70: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1d0c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d0c74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d0c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c78: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1d0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d0c7c: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x1d0c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d0c80: 0xd8430050  lqc2        $vf3, 0x50($v0)
    ctx->pc = 0x1d0c80u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1d0c84: 0x8c67002c  lw          $a3, 0x2C($v1)
    ctx->pc = 0x1d0c84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1d0c88: 0x3c01749d  lui         $at, 0x749D
    ctx->pc = 0x1d0c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29853 << 16));
    // 0x1d0c8c: 0x3421c5ae  ori         $at, $at, 0xC5AE
    ctx->pc = 0x1d0c8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50606);
    // 0x1d0c90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d0c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d0c94: 0x18e00020  blez        $a3, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D0C94u;
    {
        const bool branch_taken_0x1d0c94 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1D0C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C94u;
            // 0x1d0c98: 0xa624006c  sh          $a0, 0x6C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 108), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c94) {
            ctx->pc = 0x1D0D18u;
            goto label_1d0d18;
        }
    }
    ctx->pc = 0x1D0C9Cu;
    // 0x1d0c9c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1d0c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1d0ca0:
    // 0x1d0ca0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1d0ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d0ca4: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x1d0ca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d0ca8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1d0ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1d0cac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d0cb0: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x1d0cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d0cb4: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1d0cb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0cb8: 0x71091b89  pcpyld      $v1, $t0, $t1
    ctx->pc = 0x1d0cb8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x1d0cbc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d0cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d0cc0: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1d0cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x1d0cc4: 0x71021389  pcpyld      $v0, $t0, $v0
    ctx->pc = 0x1d0cc4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1d0cc8: 0x70431cc8  ppacw       $v1, $v0, $v1
    ctx->pc = 0x1d0cc8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1d0ccc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1d0cccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1d0cd0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x1d0cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x1d0cd4: 0x4be118ac  vsub.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1d0cd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d0cd8: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1d0cd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d0cdc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d0cdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d0ce0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d0ce0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d0ce4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d0ce4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d0ce8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d0ce8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0cec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d0cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0cf0: 0x0  nop
    ctx->pc = 0x1d0cf0u;
    // NOP
    // 0x1d0cf4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0CF4u;
    {
        const bool branch_taken_0x1d0cf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0cf4) {
            ctx->pc = 0x1D0CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CF4u;
            // 0x1d0cf8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0D08u;
            goto label_1d0d08;
        }
    }
    ctx->pc = 0x1D0CFCu;
    // 0x1d0cfc: 0xa626006c  sh          $a2, 0x6C($s1)
    ctx->pc = 0x1d0cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 108), (uint16_t)GPR_U32(ctx, 6));
    // 0x1d0d00: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1d0d00u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1d0d04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d0d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1d0d08:
    // 0x1d0d08: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x1d0d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1d0d0c: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D0D0Cu;
    {
        const bool branch_taken_0x1d0d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d0c) {
            ctx->pc = 0x1D0D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D0Cu;
            // 0x1d0d10: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0CA0u;
            runtime->cooperativeGuestYield();
            goto label_1d0ca0;
        }
    }
    ctx->pc = 0x1D0D14u;
    // 0x1d0d14: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1d0d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_1d0d18:
    // 0x1d0d18: 0x8e320020  lw          $s2, 0x20($s1)
    ctx->pc = 0x1d0d18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d0d1c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1d0d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1d0d20: 0x24563d28  addiu       $s6, $v0, 0x3D28
    ctx->pc = 0x1d0d20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 15656));
    // 0x1d0d24: 0x9625006c  lhu         $a1, 0x6C($s1)
    ctx->pc = 0x1d0d24u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1d0d28: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x1d0d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1d0d2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d0d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d30: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x1d0d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1d0d34: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1d0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1d0d38: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x1d0d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1d0d3c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1d0d3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d0d40: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D0D40u;
    {
        const bool branch_taken_0x1d0d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D40u;
            // 0x1d0d44: 0x82a021  addu        $s4, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d40) {
            ctx->pc = 0x1D0D90u;
            goto label_1d0d90;
        }
    }
    ctx->pc = 0x1D0D48u;
    // 0x1d0d48: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x1d0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1d0d4c: 0x0  nop
    ctx->pc = 0x1d0d4cu;
    // NOP
label_1d0d50:
    // 0x1d0d50: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x1d0d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1d0d54: 0x2029818  mult        $s3, $s0, $v0
    ctx->pc = 0x1d0d54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x1d0d58: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d0d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d5c: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1D0D5Cu;
    SET_GPR_U32(ctx, 31, 0x1D0D64u);
    ctx->pc = 0x1D0D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D5Cu;
            // 0x1d0d60: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D64u; }
        if (ctx->pc != 0x1D0D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D64u; }
        if (ctx->pc != 0x1D0D64u) { return; }
    }
    ctx->pc = 0x1D0D64u;
    // 0x1d0d64: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0D64u;
    {
        const bool branch_taken_0x1d0d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d64) {
            ctx->pc = 0x1D0D68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D64u;
            // 0x1d0d68: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0D7Cu;
            goto label_1d0d7c;
        }
    }
    ctx->pc = 0x1D0D6Cu;
    // 0x1d0d6c: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1d0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1d0d70: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1d0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1d0d74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0D74u;
    {
        const bool branch_taken_0x1d0d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D74u;
            // 0x1d0d78: 0x8c42003c  lw          $v0, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d74) {
            ctx->pc = 0x1D0D98u;
            goto label_1d0d98;
        }
    }
    ctx->pc = 0x1D0D7Cu;
label_1d0d7c:
    // 0x1d0d7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d0d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d0d80: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1d0d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d0d84: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1d0d84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d0d88: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1D0D88u;
    {
        const bool branch_taken_0x1d0d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D88u;
            // 0x1d0d8c: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d88) {
            ctx->pc = 0x1D0D50u;
            runtime->cooperativeGuestYield();
            goto label_1d0d50;
        }
    }
    ctx->pc = 0x1D0D90u;
label_1d0d90:
    // 0x1d0d90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0d94: 0x0  nop
    ctx->pc = 0x1d0d94u;
    // NOP
label_1d0d98:
    // 0x1d0d98: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1d0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d0d9c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1d0d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1d0da0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d0da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0da4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1d0da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d0da8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dac: 0xc072bd2  jal         func_1CAF48
    ctx->pc = 0x1D0DACu;
    SET_GPR_U32(ctx, 31, 0x1D0DB4u);
    ctx->pc = 0x1D0DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0DACu;
            // 0x1d0db0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAF48u;
    if (runtime->hasFunction(0x1CAF48u)) {
        auto targetFn = runtime->lookupFunction(0x1CAF48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0DB4u; }
        if (ctx->pc != 0x1D0DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAF48_0x1caf48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0DB4u; }
        if (ctx->pc != 0x1D0DB4u) { return; }
    }
    ctx->pc = 0x1D0DB4u;
    // 0x1d0db4: 0x9623006c  lhu         $v1, 0x6C($s1)
    ctx->pc = 0x1d0db4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1d0db8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1d0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d0dbc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1d0dbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d0dc0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1d0dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d0dc4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1d0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1d0dc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d0dcc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1d0dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d0dd0: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1d0dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x1d0dd4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d0dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0dd8: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x1d0dd8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1d0ddc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d0ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d0de0: 0x71028389  pcpyld      $s0, $t0, $v0
    ctx->pc = 0x1d0de0u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1d0de4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1d0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1d0de8: 0x720384c8  ppacw       $s0, $s0, $v1
    ctx->pc = 0x1d0de8u;
    SET_GPR_VEC(ctx, 16, PS2_PPACW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 3)));
    // 0x1d0dec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1d0decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1d0df0: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1d0df0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1d0df4: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1d0df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1d0df8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d0df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d0dfc: 0x60f809  jalr        $v1
    ctx->pc = 0x1D0DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D0E04u);
        ctx->pc = 0x1D0E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0DFCu;
            // 0x1d0e00: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0E04u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0C68u: goto label_1d0c68;
            case 0x1D0CA0u: goto label_1d0ca0;
            case 0x1D0D08u: goto label_1d0d08;
            case 0x1D0D18u: goto label_1d0d18;
            case 0x1D0D50u: goto label_1d0d50;
            case 0x1D0D7Cu: goto label_1d0d7c;
            case 0x1D0D90u: goto label_1d0d90;
            case 0x1D0D98u: goto label_1d0d98;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0E04u; }
            if (ctx->pc != 0x1D0E04u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0E04u;
    // 0x1d0e04: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1d0e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1d0e08: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1d0e08u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1d0e0c: 0xc074ce4  jal         func_1D3390
    ctx->pc = 0x1D0E0Cu;
    SET_GPR_U32(ctx, 31, 0x1D0E14u);
    ctx->pc = 0x1D0E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0E0Cu;
            // 0x1d0e10: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3390u;
    if (runtime->hasFunction(0x1D3390u)) {
        auto targetFn = runtime->lookupFunction(0x1D3390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0E14u; }
        if (ctx->pc != 0x1D0E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3390_0x1d3390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0E14u; }
        if (ctx->pc != 0x1D0E14u) { return; }
    }
    ctx->pc = 0x1D0E14u;
    // 0x1d0e14: 0xa6220070  sh          $v0, 0x70($s1)
    ctx->pc = 0x1d0e14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d0e18: 0xa2200084  sb          $zero, 0x84($s1)
    ctx->pc = 0x1d0e18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0e1c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1d0e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d0e20: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1d0e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d0e24: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1d0e24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d0e28: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1d0e28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d0e2c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1d0e2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d0e30: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1d0e30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d0e34: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d0e34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d0e38: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1d0e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d0e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0E3Cu;
            // 0x1d0e40: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0C68u: goto label_1d0c68;
            case 0x1D0CA0u: goto label_1d0ca0;
            case 0x1D0D08u: goto label_1d0d08;
            case 0x1D0D18u: goto label_1d0d18;
            case 0x1D0D50u: goto label_1d0d50;
            case 0x1D0D7Cu: goto label_1d0d7c;
            case 0x1D0D90u: goto label_1d0d90;
            case 0x1D0D98u: goto label_1d0d98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D0E44u;
    // 0x1d0e44: 0x0  nop
    ctx->pc = 0x1d0e44u;
    // NOP
}
