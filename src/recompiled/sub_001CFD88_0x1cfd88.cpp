#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CFD88
// Address: 0x1cfd88 - 0x1cff60
void sub_001CFD88_0x1cfd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFD88_0x1cfd88");
#endif

    ctx->pc = 0x1cfd88u;

    // 0x1cfd88: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1cfd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1cfd8c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1cfd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1cfd90: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1cfd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1cfd94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cfd94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfd98: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1cfd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1cfd9c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1cfd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1cfda0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cfda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cfda4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1cfda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1cfda8: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1cfda8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cfdac: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1cfdacu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cfdb0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1cfdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1cfdb4: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1cfdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1cfdb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfdbc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1cfdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1cfdc0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x1cfdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1cfdc4: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1CFDC4u;
    {
        const bool branch_taken_0x1cfdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFDC4u;
            // 0x1cfdc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdc4) {
            ctx->pc = 0x1CFF3Cu;
            goto label_1cff3c;
        }
    }
    ctx->pc = 0x1CFDCCu;
    // 0x1cfdcc: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1cfdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1cfdd0: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x1CFDD0u;
    {
        const bool branch_taken_0x1cfdd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CFDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFDD0u;
            // 0x1cfdd4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdd0) {
            ctx->pc = 0x1CFF3Cu;
            goto label_1cff3c;
        }
    }
    ctx->pc = 0x1CFDD8u;
    // 0x1cfdd8: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1cfdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1cfddc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1cfddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cfde0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cfde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfde4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1cfde4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfde8: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1cfde8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cfdec: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFDECu;
    {
        const bool branch_taken_0x1cfdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CFDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFDECu;
            // 0x1cfdf0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdec) {
            ctx->pc = 0x1CFE00u;
            goto label_1cfe00;
        }
    }
    ctx->pc = 0x1CFDF4u;
    // 0x1cfdf4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CFDF4u;
    {
        const bool branch_taken_0x1cfdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFDF4u;
            // 0x1cfdf8: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdf4) {
            ctx->pc = 0x1CFE20u;
            goto label_1cfe20;
        }
    }
    ctx->pc = 0x1CFDFCu;
    // 0x1cfdfc: 0x0  nop
    ctx->pc = 0x1cfdfcu;
    // NOP
label_1cfe00:
    // 0x1cfe00: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1cfe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1cfe04: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1cfe04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1cfe08: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1cfe08u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1cfe0c: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFE0Cu;
    {
        const bool branch_taken_0x1cfe0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CFE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE0Cu;
            // 0x1cfe10: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe0c) {
            ctx->pc = 0x1CFE20u;
            goto label_1cfe20;
        }
    }
    ctx->pc = 0x1CFE14u;
    // 0x1cfe14: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CFE14u;
    SET_GPR_U32(ctx, 31, 0x1CFE1Cu);
    ctx->pc = 0x1CFE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE14u;
            // 0x1cfe18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE1Cu; }
        if (ctx->pc != 0x1CFE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE1Cu; }
        if (ctx->pc != 0x1CFE1Cu) { return; }
    }
    ctx->pc = 0x1CFE1Cu;
    // 0x1cfe1c: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x1cfe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1cfe20:
    // 0x1cfe20: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x1cfe20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1cfe24: 0xda610050  lqc2        $vf1, 0x50($s3)
    ctx->pc = 0x1cfe24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x1cfe28: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1cfe28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cfe2c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1cfe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cfe30: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cfe30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cfe34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cfe34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cfe38: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1cfe38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cfe3c: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x1cfe3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfe40: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1cfe40u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cfe44: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cfe44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cfe48: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cfe48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cfe4c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1cfe4cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cfe50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cfe50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfe54: 0x46000004  c1          0x4
    ctx->pc = 0x1cfe54u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cfe58: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1cfe58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfe5c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1CFE5Cu;
    {
        const bool branch_taken_0x1cfe5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfe5c) {
            ctx->pc = 0x1CFEB8u;
            goto label_1cfeb8;
        }
    }
    ctx->pc = 0x1CFE64u;
    // 0x1cfe64: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1cfe64u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1cfe68: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x1cfe68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x1cfe6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cfe6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cfe70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cfe70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cfe74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cfe74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cfe78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfe78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfe7c: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x1cfe7cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[2];
    // 0x1cfe80: 0x46006328  max.s       $f12, $f12, $f0
    ctx->pc = 0x1cfe80u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[0]);
    // 0x1cfe84: 0x46016329  min.s       $f12, $f12, $f1
    ctx->pc = 0x1cfe84u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[1]);
    // 0x1cfe88: 0xc077d94  jal         func_1DF650
    ctx->pc = 0x1CFE88u;
    SET_GPR_U32(ctx, 31, 0x1CFE90u);
    ctx->pc = 0x1CFE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE88u;
            // 0x1cfe8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF650u;
    if (runtime->hasFunction(0x1DF650u)) {
        auto targetFn = runtime->lookupFunction(0x1DF650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE90u; }
        if (ctx->pc != 0x1CFE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF650_0x1df650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE90u; }
        if (ctx->pc != 0x1CFE90u) { return; }
    }
    ctx->pc = 0x1CFE90u;
    // 0x1cfe90: 0x92220085  lbu         $v0, 0x85($s1)
    ctx->pc = 0x1cfe90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 133)));
    // 0x1cfe94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFE94u;
    {
        const bool branch_taken_0x1cfe94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE94u;
            // 0x1cfe98: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe94) {
            ctx->pc = 0x1CFEB8u;
            goto label_1cfeb8;
        }
    }
    ctx->pc = 0x1CFE9Cu;
    // 0x1cfe9c: 0x92220086  lbu         $v0, 0x86($s1)
    ctx->pc = 0x1cfe9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
    // 0x1cfea0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CFEA0u;
    {
        const bool branch_taken_0x1cfea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFEA0u;
            // 0x1cfea4: 0xa2200085  sb          $zero, 0x85($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 133), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfea0) {
            ctx->pc = 0x1CFEB8u;
            goto label_1cfeb8;
        }
    }
    ctx->pc = 0x1CFEA8u;
    // 0x1cfea8: 0xc077c50  jal         func_1DF140
    ctx->pc = 0x1CFEA8u;
    SET_GPR_U32(ctx, 31, 0x1CFEB0u);
    ctx->pc = 0x1CFEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFEA8u;
            // 0x1cfeac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF140u;
    if (runtime->hasFunction(0x1DF140u)) {
        auto targetFn = runtime->lookupFunction(0x1DF140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFEB0u; }
        if (ctx->pc != 0x1CFEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF140_0x1df140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFEB0u; }
        if (ctx->pc != 0x1CFEB0u) { return; }
    }
    ctx->pc = 0x1CFEB0u;
    // 0x1cfeb0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1cfeb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfeb4: 0x0  nop
    ctx->pc = 0x1cfeb4u;
    // NOP
label_1cfeb8:
    // 0x1cfeb8: 0x16800021  bnez        $s4, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CFEB8u;
    {
        const bool branch_taken_0x1cfeb8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFEB8u;
            // 0x1cfebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfeb8) {
            ctx->pc = 0x1CFF40u;
            goto label_1cff40;
        }
    }
    ctx->pc = 0x1CFEC0u;
    // 0x1cfec0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cfec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cfec4: 0xc077d94  jal         func_1DF650
    ctx->pc = 0x1CFEC4u;
    SET_GPR_U32(ctx, 31, 0x1CFECCu);
    ctx->pc = 0x1CFEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFEC4u;
            // 0x1cfec8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF650u;
    if (runtime->hasFunction(0x1DF650u)) {
        auto targetFn = runtime->lookupFunction(0x1DF650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFECCu; }
        if (ctx->pc != 0x1CFECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF650_0x1df650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFECCu; }
        if (ctx->pc != 0x1CFECCu) { return; }
    }
    ctx->pc = 0x1CFECCu;
    // 0x1cfecc: 0x92220085  lbu         $v0, 0x85($s1)
    ctx->pc = 0x1cfeccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 133)));
    // 0x1cfed0: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CFED0u;
    {
        const bool branch_taken_0x1cfed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfed0) {
            ctx->pc = 0x1CFED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFED0u;
            // 0x1cfed4: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CFF30u;
            goto label_1cff30;
        }
    }
    ctx->pc = 0x1CFED8u;
    // 0x1cfed8: 0xc077cfa  jal         func_1DF3E8
    ctx->pc = 0x1CFED8u;
    SET_GPR_U32(ctx, 31, 0x1CFEE0u);
    ctx->pc = 0x1CFEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFED8u;
            // 0x1cfedc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF3E8u;
    if (runtime->hasFunction(0x1DF3E8u)) {
        auto targetFn = runtime->lookupFunction(0x1DF3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFEE0u; }
        if (ctx->pc != 0x1CFEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF3E8_0x1df3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFEE0u; }
        if (ctx->pc != 0x1CFEE0u) { return; }
    }
    ctx->pc = 0x1CFEE0u;
    // 0x1cfee0: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1cfee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1cfee4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cfee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfee8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CFEE8u;
    {
        const bool branch_taken_0x1cfee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CFEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFEE8u;
            // 0x1cfeec: 0x240203f7  addiu       $v0, $zero, 0x3F7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1015));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfee8) {
            ctx->pc = 0x1CFF28u;
            goto label_1cff28;
        }
    }
    ctx->pc = 0x1CFEF0u;
    // 0x1cfef0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1cfef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1cfef4: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x1cfef4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cfef8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cfef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1cfefc: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1cfefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1cff00: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1cff00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1cff04: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1cff04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1cff08: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1cff08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1cff0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cff0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff10: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1CFF10u;
    SET_GPR_U32(ctx, 31, 0x1CFF18u);
    ctx->pc = 0x1CFF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF10u;
            // 0x1cff14: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF18u; }
        if (ctx->pc != 0x1CFF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF18u; }
        if (ctx->pc != 0x1CFF18u) { return; }
    }
    ctx->pc = 0x1CFF18u;
    // 0x1cff18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cff18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFF1Cu;
    {
        const bool branch_taken_0x1cff1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF1Cu;
            // 0x1cff20: 0xa2220085  sb          $v0, 0x85($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 133), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff1c) {
            ctx->pc = 0x1CFF2Cu;
            goto label_1cff2c;
        }
    }
    ctx->pc = 0x1CFF24u;
    // 0x1cff24: 0x0  nop
    ctx->pc = 0x1cff24u;
    // NOP
label_1cff28:
    // 0x1cff28: 0xa2200085  sb          $zero, 0x85($s1)
    ctx->pc = 0x1cff28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 133), (uint8_t)GPR_U32(ctx, 0));
label_1cff2c:
    // 0x1cff2c: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x1cff2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1cff30:
    // 0x1cff30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cff30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cff34: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CFF34u;
    {
        const bool branch_taken_0x1cff34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CFF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF34u;
            // 0x1cff38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff34) {
            ctx->pc = 0x1CFF40u;
            goto label_1cff40;
        }
    }
    ctx->pc = 0x1CFF3Cu;
label_1cff3c:
    // 0x1cff3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cff3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cff40:
    // 0x1cff40: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1cff40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cff44: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1cff44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cff48: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1cff48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cff4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1cff4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cff50: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1cff50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cff54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cff54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cff58: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF58u;
            // 0x1cff5c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFE00u: goto label_1cfe00;
            case 0x1CFE20u: goto label_1cfe20;
            case 0x1CFEB8u: goto label_1cfeb8;
            case 0x1CFF28u: goto label_1cff28;
            case 0x1CFF2Cu: goto label_1cff2c;
            case 0x1CFF30u: goto label_1cff30;
            case 0x1CFF3Cu: goto label_1cff3c;
            case 0x1CFF40u: goto label_1cff40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CFF60u;
}
