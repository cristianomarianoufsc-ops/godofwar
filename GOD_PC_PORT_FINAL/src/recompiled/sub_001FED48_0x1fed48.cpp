#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FED48
// Address: 0x1fed48 - 0x1fee90
void sub_001FED48_0x1fed48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FED48_0x1fed48");
#endif

    ctx->pc = 0x1fed48u;

    // 0x1fed48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fed48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fed4c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1fed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1fed50: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1fed50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fed54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1fed54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1fed58: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1fed58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fed5c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1fed5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fed60: 0xdba30050  lqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1fed60u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fed64: 0x4a2218c0  vaddx.w     $vf3, $vf3, $vf2x
    ctx->pc = 0x1fed64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fed68: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1fed68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fed6c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1fed6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fed70: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1fed70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fed74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fed74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed78: 0xc056df8  jal         func_15B7E0
    ctx->pc = 0x1FED78u;
    SET_GPR_U32(ctx, 31, 0x1FED80u);
    ctx->pc = 0x1FED7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FED78u;
            // 0x1fed7c: 0x8ca6015c  lw          $a2, 0x15C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B7E0u;
    if (runtime->hasFunction(0x15B7E0u)) {
        auto targetFn = runtime->lookupFunction(0x15B7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FED80u; }
        if (ctx->pc != 0x1FED80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B7E0_0x15b7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FED80u; }
        if (ctx->pc != 0x1FED80u) { return; }
    }
    ctx->pc = 0x1FED80u;
label_1fed80:
    // 0x1fed80: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1fed80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1fed84:
    // 0x1fed84: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1FED84u;
    {
        const bool branch_taken_0x1fed84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FED84u;
            // 0x1fed88: 0x8fa5002c  lw          $a1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed84) {
            ctx->pc = 0x1FEE84u;
            goto label_1fee84;
        }
    }
    ctx->pc = 0x1FED8Cu;
    // 0x1fed8c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1fed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fed90: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1fed90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1fed94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fed94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fed98: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1fed98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fed9c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1fed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1feda0: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1feda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1feda4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1feda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1feda8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1feda8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fedac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1fedacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fedb0: 0x306300fc  andi        $v1, $v1, 0xFC
    ctx->pc = 0x1fedb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
    // 0x1fedb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fedb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fedb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fedbc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1fedbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1fedc0: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1fedc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1fedc4: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1fedc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1fedc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fedc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fedcc: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1fedccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1fedd0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1fedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fedd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fedd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fedd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1feddc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1feddcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fede0: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1fede0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fede4: 0x4bc1133c  vmove.xyz   $vf1, $vf2
    ctx->pc = 0x1fede4u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1fede8: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1fede8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fedec: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1fedecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1fedf0: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1fedf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1fedf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fedf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fedf8: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1fedf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1fedfc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fedfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fee00: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1fee00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fee04: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1fee04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1fee08: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1fee08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fee0c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1fee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1fee10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1fee10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fee14: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1fee14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fee18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1fee18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fee1c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1fee1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1fee20: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1fee20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1fee24: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1fee24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1fee28: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1fee28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1fee2c: 0xdba30060  lqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1fee2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fee30: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1fee30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1fee34: 0x4bc11b3c  vmove.xyz   $vf1, $vf3
    ctx->pc = 0x1fee34u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1fee38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fee38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fee3c: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1fee3cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fee40: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x1fee40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x1fee44: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1fee44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x1fee48: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1FEE48u;
    {
        const bool branch_taken_0x1fee48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE48u;
            // 0x1fee4c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee48) {
            ctx->pc = 0x1FED80u;
            runtime->cooperativeGuestYield();
            goto label_1fed80;
        }
    }
    ctx->pc = 0x1FEE50u;
    // 0x1fee50: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x1fee50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1fee54: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEE54u;
    {
        const bool branch_taken_0x1fee54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE54u;
            // 0x1fee58: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee54) {
            ctx->pc = 0x1FEE68u;
            goto label_1fee68;
        }
    }
    ctx->pc = 0x1FEE5Cu;
    // 0x1fee5c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1fee5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1fee60: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1FEE60u;
    SET_GPR_U32(ctx, 31, 0x1FEE68u);
    ctx->pc = 0x1FEE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE60u;
            // 0x1fee64: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEE68u; }
        if (ctx->pc != 0x1FEE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEE68u; }
        if (ctx->pc != 0x1FEE68u) { return; }
    }
    ctx->pc = 0x1FEE68u;
label_1fee68:
    // 0x1fee68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1fee68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fee6c: 0x1040ffc5  beqz        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x1FEE6Cu;
    {
        const bool branch_taken_0x1fee6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE6Cu;
            // 0x1fee70: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee6c) {
            ctx->pc = 0x1FED84u;
            runtime->cooperativeGuestYield();
            goto label_1fed84;
        }
    }
    ctx->pc = 0x1FEE74u;
    // 0x1fee74: 0xc056dd2  jal         func_15B748
    ctx->pc = 0x1FEE74u;
    SET_GPR_U32(ctx, 31, 0x1FEE7Cu);
    ctx->pc = 0x1FEE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE74u;
            // 0x1fee78: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B748u;
    if (runtime->hasFunction(0x15B748u)) {
        auto targetFn = runtime->lookupFunction(0x15B748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEE7Cu; }
        if (ctx->pc != 0x1FEE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B748_0x15b748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEE7Cu; }
        if (ctx->pc != 0x1FEE7Cu) { return; }
    }
    ctx->pc = 0x1FEE7Cu;
    // 0x1fee7c: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x1FEE7Cu;
    {
        const bool branch_taken_0x1fee7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE7Cu;
            // 0x1fee80: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee7c) {
            ctx->pc = 0x1FED84u;
            runtime->cooperativeGuestYield();
            goto label_1fed84;
        }
    }
    ctx->pc = 0x1FEE84u;
label_1fee84:
    // 0x1fee84: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1fee84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fee88: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE88u;
            // 0x1fee8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FED80u: goto label_1fed80;
            case 0x1FED84u: goto label_1fed84;
            case 0x1FEE68u: goto label_1fee68;
            case 0x1FEE84u: goto label_1fee84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FEE90u;
}
