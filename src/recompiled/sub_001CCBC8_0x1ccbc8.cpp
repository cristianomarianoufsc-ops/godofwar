#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CCBC8
// Address: 0x1ccbc8 - 0x1cd030
void sub_001CCBC8_0x1ccbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCBC8_0x1ccbc8");
#endif

    ctx->pc = 0x1ccbc8u;

    // 0x1ccbc8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ccbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ccbcc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1ccbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1ccbd0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1ccbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1ccbd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccbd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccbd8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ccbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ccbdc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ccbdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccbe0: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1ccbe0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1ccbe4: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1ccbe4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ccbe8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1ccbe8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1ccbec: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1ccbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1ccbf0: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1ccbf0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1ccbf4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1ccbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1ccbf8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1ccbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1ccbfc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ccbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ccc00: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1ccc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1ccc04: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x1ccc04u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ccc08: 0x7fa80020  sq          $t0, 0x20($sp)
    ctx->pc = 0x1ccc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
    // 0x1ccc0c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1ccc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ccc10: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1ccc10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1ccc14: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1ccc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1ccc18: 0x40f809  jalr        $v0
    ctx->pc = 0x1CCC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CCC20u);
        ctx->pc = 0x1CCC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC18u;
            // 0x1ccc1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CCC20u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CCC60u: goto label_1ccc60;
            case 0x1CCC90u: goto label_1ccc90;
            case 0x1CCCDCu: goto label_1cccdc;
            case 0x1CCDC0u: goto label_1ccdc0;
            case 0x1CCDC4u: goto label_1ccdc4;
            case 0x1CCDFCu: goto label_1ccdfc;
            case 0x1CCE1Cu: goto label_1cce1c;
            case 0x1CCE64u: goto label_1cce64;
            case 0x1CCE68u: goto label_1cce68;
            case 0x1CCE70u: goto label_1cce70;
            case 0x1CCE7Cu: goto label_1cce7c;
            case 0x1CCE80u: goto label_1cce80;
            case 0x1CCEACu: goto label_1cceac;
            case 0x1CCEB0u: goto label_1cceb0;
            case 0x1CCEDCu: goto label_1ccedc;
            case 0x1CCEE0u: goto label_1ccee0;
            case 0x1CCF0Cu: goto label_1ccf0c;
            case 0x1CCF34u: goto label_1ccf34;
            case 0x1CCF80u: goto label_1ccf80;
            case 0x1CCF8Cu: goto label_1ccf8c;
            case 0x1CCFE0u: goto label_1ccfe0;
            case 0x1CD000u: goto label_1cd000;
            case 0x1CD004u: goto label_1cd004;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC20u; }
            if (ctx->pc != 0x1CCC20u) { return; }
        }
        }
    }
    ctx->pc = 0x1CCC20u;
    // 0x1ccc20: 0x90430016  lbu         $v1, 0x16($v0)
    ctx->pc = 0x1ccc20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x1ccc24: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1ccc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ccc28: 0x92020088  lbu         $v0, 0x88($s0)
    ctx->pc = 0x1ccc28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1ccc2c: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CCC2Cu;
    {
        const bool branch_taken_0x1ccc2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CCC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC2Cu;
            // 0x1ccc30: 0x30750004  andi        $s5, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc2c) {
            ctx->pc = 0x1CCC60u;
            goto label_1ccc60;
        }
    }
    ctx->pc = 0x1CCC34u;
    // 0x1ccc34: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x1ccc34u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ccc38: 0xc0828e4  jal         func_20A390
    ctx->pc = 0x1CCC38u;
    SET_GPR_U32(ctx, 31, 0x1CCC40u);
    ctx->pc = 0x1CCC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC38u;
            // 0x1ccc3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A390u;
    if (runtime->hasFunction(0x20A390u)) {
        auto targetFn = runtime->lookupFunction(0x20A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC40u; }
        if (ctx->pc != 0x1CCC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20a390_0x20a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC40u; }
        if (ctx->pc != 0x1CCC40u) { return; }
    }
    ctx->pc = 0x1CCC40u;
    // 0x1ccc40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ccc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccc44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ccc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccc48: 0xc082bb0  jal         func_20AEC0
    ctx->pc = 0x1CCC48u;
    SET_GPR_U32(ctx, 31, 0x1CCC50u);
    ctx->pc = 0x1CCC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC48u;
            // 0x1ccc4c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x20AEC0u;
    if (runtime->hasFunction(0x20AEC0u)) {
        auto targetFn = runtime->lookupFunction(0x20AEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC50u; }
        if (ctx->pc != 0x1CCC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020AEC0_0x20aec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC50u; }
        if (ctx->pc != 0x1CCC50u) { return; }
    }
    ctx->pc = 0x1CCC50u;
    // 0x1ccc50: 0xa2020088  sb          $v0, 0x88($s0)
    ctx->pc = 0x1ccc50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ccc54: 0xa600007a  sh          $zero, 0x7A($s0)
    ctx->pc = 0x1ccc54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ccc58: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x1CCC58u;
    {
        const bool branch_taken_0x1ccc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC58u;
            // 0x1ccc5c: 0xa6000076  sh          $zero, 0x76($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 118), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc58) {
            ctx->pc = 0x1CD000u;
            goto label_1cd000;
        }
    }
    ctx->pc = 0x1CCC60u;
label_1ccc60:
    // 0x1ccc60: 0xc074c40  jal         func_1D3100
    ctx->pc = 0x1CCC60u;
    SET_GPR_U32(ctx, 31, 0x1CCC68u);
    ctx->pc = 0x1CCC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC60u;
            // 0x1ccc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3100u;
    if (runtime->hasFunction(0x1D3100u)) {
        auto targetFn = runtime->lookupFunction(0x1D3100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC68u; }
        if (ctx->pc != 0x1CCC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3100_0x1d3100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC68u; }
        if (ctx->pc != 0x1CCC68u) { return; }
    }
    ctx->pc = 0x1CCC68u;
    // 0x1ccc68: 0x92030088  lbu         $v1, 0x88($s0)
    ctx->pc = 0x1ccc68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1ccc6c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ccc6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccc70: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1ccc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ccc74: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x1ccc74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x1ccc78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccc78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccc7c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ccc7cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ccc80: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x1ccc80u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ccc84: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1ccc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1ccc88: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CCC88u;
    {
        const bool branch_taken_0x1ccc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc88) {
            ctx->pc = 0x1CCC8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC88u;
            // 0x1ccc8c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCC90u;
            goto label_1ccc90;
        }
    }
    ctx->pc = 0x1CCC90u;
label_1ccc90:
    // 0x1ccc90: 0xda220030  lqc2        $vf2, 0x30($s1)
    ctx->pc = 0x1ccc90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1ccc94: 0x1812  mflo        $v1
    ctx->pc = 0x1ccc94u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1ccc98: 0x2010  mfhi        $a0
    ctx->pc = 0x1ccc98u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1ccc9c: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x1ccc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1ccca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ccca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccca4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ccca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ccca8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cccac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cccacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cccb0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1cccb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1cccb4: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x1cccb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cccb8: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1cccb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cccbc: 0xda240020  lqc2        $vf4, 0x20($s1)
    ctx->pc = 0x1cccbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1cccc0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1cccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cccc4: 0x2484fffb  addiu       $a0, $a0, -0x5
    ctx->pc = 0x1cccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
    // 0x1cccc8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1cccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ccccc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cccccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cccd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cccd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cccd4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CCCD4u;
    {
        const bool branch_taken_0x1cccd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cccd4) {
            ctx->pc = 0x1CCCD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCD4u;
            // 0x1cccd8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCCDCu;
            goto label_1cccdc;
        }
    }
    ctx->pc = 0x1CCCDCu;
label_1cccdc:
    // 0x1cccdc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cccdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccce0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1ccce0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1ccce4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1ccce4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1ccce8: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1ccce8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cccec: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1cccecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cccf0: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1cccf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cccf4: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1cccf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cccf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cccf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cccfc: 0xda210010  lqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1cccfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ccd00: 0x4be1186a  vmul.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x1ccd00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ccd04: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1ccd04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ccd08: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1ccd08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ccd0c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ccd0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccd10: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1ccd10u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ccd14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ccd14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccd18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ccd18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccd1c: 0x0  nop
    ctx->pc = 0x1ccd1cu;
    // NOP
    // 0x1ccd20: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x1CCD20u;
    {
        const bool branch_taken_0x1ccd20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CCD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD20u;
            // 0x1ccd24: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd20) {
            ctx->pc = 0x1CCDC4u;
            goto label_1ccdc4;
        }
    }
    ctx->pc = 0x1CCD28u;
    // 0x1ccd28: 0x4be518aa  vmul.xyzw   $vf2, $vf3, $vf5
    ctx->pc = 0x1ccd28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ccd2c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1ccd2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ccd30: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1ccd30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ccd34: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1ccd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1ccd38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccd38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccd3c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1ccd3cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ccd40: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ccd40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccd44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ccd44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccd48: 0x0  nop
    ctx->pc = 0x1ccd48u;
    // NOP
    // 0x1ccd4c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1CCD4Cu;
    {
        const bool branch_taken_0x1ccd4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CCD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD4Cu;
            // 0x1ccd50: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd4c) {
            ctx->pc = 0x1CCDC4u;
            goto label_1ccdc4;
        }
    }
    ctx->pc = 0x1CCD54u;
    // 0x1ccd54: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1ccd54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ccd58: 0x3c01c180  lui         $at, 0xC180
    ctx->pc = 0x1ccd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49536 << 16));
    // 0x1ccd5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ccd5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ccd60: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1ccd60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ccd64: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1ccd64u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ccd68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ccd68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccd6c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ccd6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccd70: 0x0  nop
    ctx->pc = 0x1ccd70u;
    // NOP
    // 0x1ccd74: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1CCD74u;
    {
        const bool branch_taken_0x1ccd74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CCD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD74u;
            // 0x1ccd78: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd74) {
            ctx->pc = 0x1CCDC4u;
            goto label_1ccdc4;
        }
    }
    ctx->pc = 0x1CCD7Cu;
    // 0x1ccd7c: 0x4be418aa  vmul.xyzw   $vf2, $vf3, $vf4
    ctx->pc = 0x1ccd7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ccd80: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1ccd80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ccd84: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1ccd84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ccd88: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1ccd88u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ccd8c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ccd8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccd90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ccd90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccd94: 0x0  nop
    ctx->pc = 0x1ccd94u;
    // NOP
    // 0x1ccd98: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1CCD98u;
    {
        const bool branch_taken_0x1ccd98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CCD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD98u;
            // 0x1ccd9c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd98) {
            ctx->pc = 0x1CCDC4u;
            goto label_1ccdc4;
        }
    }
    ctx->pc = 0x1CCDA0u;
    // 0x1ccda0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1ccda0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ccda4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1ccda4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ccda8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1ccda8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ccdac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ccdacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccdb0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ccdb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccdb4: 0x0  nop
    ctx->pc = 0x1ccdb4u;
    // NOP
    // 0x1ccdb8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CCDB8u;
    {
        const bool branch_taken_0x1ccdb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ccdb8) {
            ctx->pc = 0x1CCDBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDB8u;
            // 0x1ccdbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCDC0u;
            goto label_1ccdc0;
        }
    }
    ctx->pc = 0x1CCDC0u;
label_1ccdc0:
    // 0x1ccdc0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ccdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1ccdc4:
    // 0x1ccdc4: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1ccdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1ccdc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccdc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccdcc: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x1ccdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccdd0: 0x9602007a  lhu         $v0, 0x7A($s0)
    ctx->pc = 0x1ccdd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 122)));
    // 0x1ccdd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccdd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccdd8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ccdd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ccddc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1ccddcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ccde0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ccde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ccde4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCDE4u;
    {
        const bool branch_taken_0x1ccde4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDE4u;
            // 0x1ccde8: 0xa602007a  sh          $v0, 0x7A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccde4) {
            ctx->pc = 0x1CCDFCu;
            goto label_1ccdfc;
        }
    }
    ctx->pc = 0x1CCDECu;
    // 0x1ccdec: 0x96020076  lhu         $v0, 0x76($s0)
    ctx->pc = 0x1ccdecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 118)));
    // 0x1ccdf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ccdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ccdf4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1CCDF4u;
    {
        const bool branch_taken_0x1ccdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDF4u;
            // 0x1ccdf8: 0xa6020076  sh          $v0, 0x76($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 118), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccdf4) {
            ctx->pc = 0x1CCE80u;
            goto label_1cce80;
        }
    }
    ctx->pc = 0x1CCDFCu;
label_1ccdfc:
    // 0x1ccdfc: 0x56a00007  bnel        $s5, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CCDFCu;
    {
        const bool branch_taken_0x1ccdfc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccdfc) {
            ctx->pc = 0x1CCE00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDFCu;
            // 0x1cce00: 0x92040088  lbu         $a0, 0x88($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCE1Cu;
            goto label_1cce1c;
        }
    }
    ctx->pc = 0x1CCE04u;
    // 0x1cce04: 0x56c00005  bnel        $s6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCE04u;
    {
        const bool branch_taken_0x1cce04 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cce04) {
            ctx->pc = 0x1CCE08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE04u;
            // 0x1cce08: 0x92040088  lbu         $a0, 0x88($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCE1Cu;
            goto label_1cce1c;
        }
    }
    ctx->pc = 0x1CCE0Cu;
    // 0x1cce0c: 0x96020076  lhu         $v0, 0x76($s0)
    ctx->pc = 0x1cce0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 118)));
    // 0x1cce10: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CCE10u;
    {
        const bool branch_taken_0x1cce10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE10u;
            // 0x1cce14: 0x7ba50020  lq          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce10) {
            ctx->pc = 0x1CCE70u;
            goto label_1cce70;
        }
    }
    ctx->pc = 0x1CCE18u;
    // 0x1cce18: 0x92040088  lbu         $a0, 0x88($s0)
    ctx->pc = 0x1cce18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 136)));
label_1cce1c:
    // 0x1cce1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1cce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cce20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cce20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce24: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1cce24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1cce28: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x1cce28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1cce2c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1cce2cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1cce30: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x1cce30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x1cce34: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1cce34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1cce38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1cce38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cce3c: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1cce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1cce40: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x1cce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1cce44: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1cce44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1cce48: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCE48u;
    {
        const bool branch_taken_0x1cce48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE48u;
            // 0x1cce4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce48) {
            ctx->pc = 0x1CCE64u;
            goto label_1cce64;
        }
    }
    ctx->pc = 0x1CCE50u;
    // 0x1cce50: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1cce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1cce54: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1cce54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cce58: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1cce58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1cce5c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CCE5Cu;
    {
        const bool branch_taken_0x1cce5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cce5c) {
            ctx->pc = 0x1CCE68u;
            goto label_1cce68;
        }
    }
    ctx->pc = 0x1CCE64u;
label_1cce64:
    // 0x1cce64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cce64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cce68:
    // 0x1cce68: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCE68u;
    {
        const bool branch_taken_0x1cce68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE68u;
            // 0x1cce6c: 0x7ba50020  lq          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce68) {
            ctx->pc = 0x1CCE7Cu;
            goto label_1cce7c;
        }
    }
    ctx->pc = 0x1CCE70u;
label_1cce70:
    // 0x1cce70: 0xc0828e4  jal         func_20A390
    ctx->pc = 0x1CCE70u;
    SET_GPR_U32(ctx, 31, 0x1CCE78u);
    ctx->pc = 0x1CCE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE70u;
            // 0x1cce74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A390u;
    if (runtime->hasFunction(0x20A390u)) {
        auto targetFn = runtime->lookupFunction(0x20A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE78u; }
        if (ctx->pc != 0x1CCE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20a390_0x20a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE78u; }
        if (ctx->pc != 0x1CCE78u) { return; }
    }
    ctx->pc = 0x1CCE78u;
    // 0x1cce78: 0xa2020088  sb          $v0, 0x88($s0)
    ctx->pc = 0x1cce78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 2));
label_1cce7c:
    // 0x1cce7c: 0xa6000076  sh          $zero, 0x76($s0)
    ctx->pc = 0x1cce7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 118), (uint16_t)GPR_U32(ctx, 0));
label_1cce80:
    // 0x1cce80: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1cce80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1cce84: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1cce84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1cce88: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1cce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1cce8c: 0x40f809  jalr        $v0
    ctx->pc = 0x1CCE8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CCE94u);
        ctx->pc = 0x1CCE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE8Cu;
            // 0x1cce90: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CCE94u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CCC60u: goto label_1ccc60;
            case 0x1CCC90u: goto label_1ccc90;
            case 0x1CCCDCu: goto label_1cccdc;
            case 0x1CCDC0u: goto label_1ccdc0;
            case 0x1CCDC4u: goto label_1ccdc4;
            case 0x1CCDFCu: goto label_1ccdfc;
            case 0x1CCE1Cu: goto label_1cce1c;
            case 0x1CCE64u: goto label_1cce64;
            case 0x1CCE68u: goto label_1cce68;
            case 0x1CCE70u: goto label_1cce70;
            case 0x1CCE7Cu: goto label_1cce7c;
            case 0x1CCE80u: goto label_1cce80;
            case 0x1CCEACu: goto label_1cceac;
            case 0x1CCEB0u: goto label_1cceb0;
            case 0x1CCEDCu: goto label_1ccedc;
            case 0x1CCEE0u: goto label_1ccee0;
            case 0x1CCF0Cu: goto label_1ccf0c;
            case 0x1CCF34u: goto label_1ccf34;
            case 0x1CCF80u: goto label_1ccf80;
            case 0x1CCF8Cu: goto label_1ccf8c;
            case 0x1CCFE0u: goto label_1ccfe0;
            case 0x1CD000u: goto label_1cd000;
            case 0x1CD004u: goto label_1cd004;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE94u; }
            if (ctx->pc != 0x1CCE94u) { return; }
        }
        }
    }
    ctx->pc = 0x1CCE94u;
    // 0x1cce94: 0x90420016  lbu         $v0, 0x16($v0)
    ctx->pc = 0x1cce94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x1cce98: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1cce98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1cce9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCE9Cu;
    {
        const bool branch_taken_0x1cce9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE9Cu;
            // 0x1ccea0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce9c) {
            ctx->pc = 0x1CCEACu;
            goto label_1cceac;
        }
    }
    ctx->pc = 0x1CCEA4u;
    // 0x1ccea4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CCEA4u;
    {
        const bool branch_taken_0x1ccea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCEA4u;
            // 0x1ccea8: 0x94540024  lhu         $s4, 0x24($v0) (Delay Slot)
        SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccea4) {
            ctx->pc = 0x1CCEB0u;
            goto label_1cceb0;
        }
    }
    ctx->pc = 0x1CCEACu;
label_1cceac:
    // 0x1cceac: 0x94540022  lhu         $s4, 0x22($v0)
    ctx->pc = 0x1cceacu;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
label_1cceb0:
    // 0x1cceb0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1cceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1cceb4: 0x96030076  lhu         $v1, 0x76($s0)
    ctx->pc = 0x1cceb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 118)));
    // 0x1cceb8: 0x94820020  lhu         $v0, 0x20($a0)
    ctx->pc = 0x1cceb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ccebc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1ccebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ccec0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCEC0u;
    {
        const bool branch_taken_0x1ccec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCEC0u;
            // 0x1ccec4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccec0) {
            ctx->pc = 0x1CCEDCu;
            goto label_1ccedc;
        }
    }
    ctx->pc = 0x1CCEC8u;
    // 0x1ccec8: 0x9603007a  lhu         $v1, 0x7A($s0)
    ctx->pc = 0x1ccec8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 122)));
    // 0x1ccecc: 0x94820022  lhu         $v0, 0x22($a0)
    ctx->pc = 0x1cceccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x1cced0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1cced0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1cced4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CCED4u;
    {
        const bool branch_taken_0x1cced4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cced4) {
            ctx->pc = 0x1CCEE0u;
            goto label_1ccee0;
        }
    }
    ctx->pc = 0x1CCEDCu;
label_1ccedc:
    // 0x1ccedc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ccedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ccee0:
    // 0x1ccee0: 0x54a0000a  bnel        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1CCEE0u;
    {
        const bool branch_taken_0x1ccee0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccee0) {
            ctx->pc = 0x1CCEE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCEE0u;
            // 0x1ccee4: 0x8e430174  lw          $v1, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCF0Cu;
            goto label_1ccf0c;
        }
    }
    ctx->pc = 0x1CCEE8u;
    // 0x1ccee8: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x1ccee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cceec: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cceecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1ccef0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccef4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccef8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1ccef8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccefc: 0x0  nop
    ctx->pc = 0x1ccefcu;
    // NOP
    // 0x1ccf00: 0x45020040  bc1fl       . + 4 + (0x40 << 2)
    ctx->pc = 0x1CCF00u;
    {
        const bool branch_taken_0x1ccf00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ccf00) {
            ctx->pc = 0x1CCF04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF00u;
            // 0x1ccf04: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD004u;
            goto label_1cd004;
        }
    }
    ctx->pc = 0x1CCF08u;
    // 0x1ccf08: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1ccf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1ccf0c:
    // 0x1ccf0c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1ccf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1ccf10: 0x5440003c  bnel        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x1CCF10u;
    {
        const bool branch_taken_0x1ccf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf10) {
            ctx->pc = 0x1CCF14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF10u;
            // 0x1ccf14: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD004u;
            goto label_1cd004;
        }
    }
    ctx->pc = 0x1CCF18u;
    // 0x1ccf18: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1ccf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1ccf1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCF1Cu;
    {
        const bool branch_taken_0x1ccf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf1c) {
            ctx->pc = 0x1CCF34u;
            goto label_1ccf34;
        }
    }
    ctx->pc = 0x1CCF24u;
    // 0x1ccf24: 0x8e4202d8  lw          $v0, 0x2D8($s2)
    ctx->pc = 0x1ccf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
    // 0x1ccf28: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x1ccf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x1ccf2c: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x1CCF2Cu;
    {
        const bool branch_taken_0x1ccf2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf2c) {
            ctx->pc = 0x1CCF30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF2Cu;
            // 0x1ccf30: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD004u;
            goto label_1cd004;
        }
    }
    ctx->pc = 0x1CCF34u;
label_1ccf34:
    // 0x1ccf34: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CCF34u;
    {
        const bool branch_taken_0x1ccf34 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF34u;
            // 0x1ccf38: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf34) {
            ctx->pc = 0x1CCF80u;
            goto label_1ccf80;
        }
    }
    ctx->pc = 0x1CCF3Cu;
    // 0x1ccf3c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ccf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ccf40: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1ccf40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1ccf44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ccf44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ccf48: 0x94420096  lhu         $v0, 0x96($v0)
    ctx->pc = 0x1ccf48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 150)));
    // 0x1ccf4c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1ccf4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1ccf50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccf50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccf54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ccf54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccf58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ccf58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ccf5c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ccf5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ccf60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccf60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccf64: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1ccf64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccf68: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCF68u;
    {
        const bool branch_taken_0x1ccf68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ccf68) {
            ctx->pc = 0x1CCF8Cu;
            goto label_1ccf8c;
        }
    }
    ctx->pc = 0x1CCF70u;
    // 0x1ccf70: 0xc072f70  jal         func_1CBDC0
    ctx->pc = 0x1CCF70u;
    SET_GPR_U32(ctx, 31, 0x1CCF78u);
    ctx->pc = 0x1CCF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF70u;
            // 0x1ccf74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBDC0u;
    if (runtime->hasFunction(0x1CBDC0u)) {
        auto targetFn = runtime->lookupFunction(0x1CBDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF78u; }
        if (ctx->pc != 0x1CCF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBDC0_0x1cbdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF78u; }
        if (ctx->pc != 0x1CCF78u) { return; }
    }
    ctx->pc = 0x1CCF78u;
    // 0x1ccf78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCF78u;
    {
        const bool branch_taken_0x1ccf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf78) {
            ctx->pc = 0x1CCF8Cu;
            goto label_1ccf8c;
        }
    }
    ctx->pc = 0x1CCF80u;
label_1ccf80:
    // 0x1ccf80: 0xc072f70  jal         func_1CBDC0
    ctx->pc = 0x1CCF80u;
    SET_GPR_U32(ctx, 31, 0x1CCF88u);
    ctx->pc = 0x1CCF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF80u;
            // 0x1ccf84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBDC0u;
    if (runtime->hasFunction(0x1CBDC0u)) {
        auto targetFn = runtime->lookupFunction(0x1CBDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF88u; }
        if (ctx->pc != 0x1CCF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBDC0_0x1cbdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF88u; }
        if (ctx->pc != 0x1CCF88u) { return; }
    }
    ctx->pc = 0x1CCF88u;
    // 0x1ccf88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ccf88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccf8c:
    // 0x1ccf8c: 0x52c0001d  beql        $s6, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CCF8Cu;
    {
        const bool branch_taken_0x1ccf8c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf8c) {
            ctx->pc = 0x1CCF90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF8Cu;
            // 0x1ccf90: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD004u;
            goto label_1cd004;
        }
    }
    ctx->pc = 0x1CCF94u;
    // 0x1ccf94: 0x56a0001b  bnel        $s5, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CCF94u;
    {
        const bool branch_taken_0x1ccf94 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf94) {
            ctx->pc = 0x1CCF98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF94u;
            // 0x1ccf98: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD004u;
            goto label_1cd004;
        }
    }
    ctx->pc = 0x1CCF9Cu;
    // 0x1ccf9c: 0x56600010  bnel        $s3, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CCF9Cu;
    {
        const bool branch_taken_0x1ccf9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf9c) {
            ctx->pc = 0x1CCFA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF9Cu;
            // 0x1ccfa0: 0x8e4202d8  lw          $v0, 0x2D8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCFE0u;
            goto label_1ccfe0;
        }
    }
    ctx->pc = 0x1CCFA4u;
    // 0x1ccfa4: 0x9602007a  lhu         $v0, 0x7A($s0)
    ctx->pc = 0x1ccfa4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 122)));
    // 0x1ccfa8: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x1ccfa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1ccfac: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CCFACu;
    {
        const bool branch_taken_0x1ccfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccfac) {
            ctx->pc = 0x1CCFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCFACu;
            // 0x1ccfb0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD004u;
            goto label_1cd004;
        }
    }
    ctx->pc = 0x1CCFB4u;
    // 0x1ccfb4: 0xa6000076  sh          $zero, 0x76($s0)
    ctx->pc = 0x1ccfb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 118), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ccfb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ccfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfbc: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x1ccfbcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ccfc0: 0xc0828e4  jal         func_20A390
    ctx->pc = 0x1CCFC0u;
    SET_GPR_U32(ctx, 31, 0x1CCFC8u);
    ctx->pc = 0x1CCFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCFC0u;
            // 0x1ccfc4: 0xa600007a  sh          $zero, 0x7A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A390u;
    if (runtime->hasFunction(0x20A390u)) {
        auto targetFn = runtime->lookupFunction(0x20A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCFC8u; }
        if (ctx->pc != 0x1CCFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20a390_0x20a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCFC8u; }
        if (ctx->pc != 0x1CCFC8u) { return; }
    }
    ctx->pc = 0x1CCFC8u;
    // 0x1ccfc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ccfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ccfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfd0: 0xc082bb0  jal         func_20AEC0
    ctx->pc = 0x1CCFD0u;
    SET_GPR_U32(ctx, 31, 0x1CCFD8u);
    ctx->pc = 0x1CCFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCFD0u;
            // 0x1ccfd4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x20AEC0u;
    if (runtime->hasFunction(0x20AEC0u)) {
        auto targetFn = runtime->lookupFunction(0x20AEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCFD8u; }
        if (ctx->pc != 0x1CCFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020AEC0_0x20aec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCFD8u; }
        if (ctx->pc != 0x1CCFD8u) { return; }
    }
    ctx->pc = 0x1CCFD8u;
    // 0x1ccfd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CCFD8u;
    {
        const bool branch_taken_0x1ccfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCFD8u;
            // 0x1ccfdc: 0xa2020088  sb          $v0, 0x88($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfd8) {
            ctx->pc = 0x1CD000u;
            goto label_1cd000;
        }
    }
    ctx->pc = 0x1CCFE0u;
label_1ccfe0:
    // 0x1ccfe0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1ccfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1ccfe4: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x1ccfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1ccfe8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1ccfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ccfec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ccfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ccff0: 0xa6000076  sh          $zero, 0x76($s0)
    ctx->pc = 0x1ccff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 118), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ccff4: 0xae4202d8  sw          $v0, 0x2D8($s2)
    ctx->pc = 0x1ccff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 728), GPR_U32(ctx, 2));
    // 0x1ccff8: 0xa2040088  sb          $a0, 0x88($s0)
    ctx->pc = 0x1ccff8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ccffc: 0xa600007a  sh          $zero, 0x7A($s0)
    ctx->pc = 0x1ccffcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 0));
label_1cd000:
    // 0x1cd000: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1cd000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1cd004:
    // 0x1cd004: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1cd004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd008: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1cd008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cd00c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1cd00cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cd010: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1cd010u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cd014: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1cd014u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cd018: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1cd018u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cd01c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cd01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd020: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1cd020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cd024: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1cd024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cd028: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD028u;
            // 0x1cd02c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CCC60u: goto label_1ccc60;
            case 0x1CCC90u: goto label_1ccc90;
            case 0x1CCCDCu: goto label_1cccdc;
            case 0x1CCDC0u: goto label_1ccdc0;
            case 0x1CCDC4u: goto label_1ccdc4;
            case 0x1CCDFCu: goto label_1ccdfc;
            case 0x1CCE1Cu: goto label_1cce1c;
            case 0x1CCE64u: goto label_1cce64;
            case 0x1CCE68u: goto label_1cce68;
            case 0x1CCE70u: goto label_1cce70;
            case 0x1CCE7Cu: goto label_1cce7c;
            case 0x1CCE80u: goto label_1cce80;
            case 0x1CCEACu: goto label_1cceac;
            case 0x1CCEB0u: goto label_1cceb0;
            case 0x1CCEDCu: goto label_1ccedc;
            case 0x1CCEE0u: goto label_1ccee0;
            case 0x1CCF0Cu: goto label_1ccf0c;
            case 0x1CCF34u: goto label_1ccf34;
            case 0x1CCF80u: goto label_1ccf80;
            case 0x1CCF8Cu: goto label_1ccf8c;
            case 0x1CCFE0u: goto label_1ccfe0;
            case 0x1CD000u: goto label_1cd000;
            case 0x1CD004u: goto label_1cd004;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CD030u;
}
