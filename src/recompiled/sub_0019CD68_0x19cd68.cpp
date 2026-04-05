#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CD68
// Address: 0x19cd68 - 0x19d278
void sub_0019CD68_0x19cd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CD68_0x19cd68");
#endif

    ctx->pc = 0x19cd68u;

    // 0x19cd68: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x19cd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x19cd6c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x19cd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19cd70: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x19cd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x19cd74: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x19cd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x19cd78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19cd78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd7c: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x19cd7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x19cd80: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x19cd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x19cd84: 0x8e64cd58  lw          $a0, -0x32A8($s3)
    ctx->pc = 0x19cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954328)));
    // 0x19cd88: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x19cd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x19cd8c: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x19cd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x19cd90: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x19CD90u;
    SET_GPR_U32(ctx, 31, 0x19CD98u);
    ctx->pc = 0x19CD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CD90u;
            // 0x19cd94: 0xe7b40180  swc1        $f20, 0x180($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD98u; }
        if (ctx->pc != 0x19CD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD98u; }
        if (ctx->pc != 0x19CD98u) { return; }
    }
    ctx->pc = 0x19CD98u;
    // 0x19cd98: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x19cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x19cd9c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x19cd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19cda0: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x19cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x19cda4: 0x2463e1e8  addiu       $v1, $v1, -0x1E18
    ctx->pc = 0x19cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959592));
    // 0x19cda8: 0x78a40020  lq          $a0, 0x20($a1)
    ctx->pc = 0x19cda8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x19cdac: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x19cdacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19cdb0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x19cdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x19cdb4: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x19cdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x19cdb8: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x19cdb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19cdbc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x19cdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x19cdc0: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x19cdc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x19cdc4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x19cdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x19cdc8: 0x78a50030  lq          $a1, 0x30($a1)
    ctx->pc = 0x19cdc8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x19cdcc: 0x7fa500e0  sq          $a1, 0xE0($sp)
    ctx->pc = 0x19cdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 5));
    // 0x19cdd0: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x19cdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x19cdd4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x19cdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19cdd8: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x19cdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x19cddc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19CDDCu;
    {
        const bool branch_taken_0x19cddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CDDCu;
            // 0x19cde0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cddc) {
            ctx->pc = 0x19CE14u;
            goto label_19ce14;
        }
    }
    ctx->pc = 0x19CDE4u;
    // 0x19cde4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19cde8: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x19cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x19cdec: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x19cdecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19cdf0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19cdf4: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x19cdf8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x19cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19cdfc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ce00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19ce04: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19CE04u;
    {
        const bool branch_taken_0x19ce04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x19CE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE04u;
            // 0x19ce08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce04) {
            ctx->pc = 0x19CE10u;
            goto label_19ce10;
        }
    }
    ctx->pc = 0x19CE0Cu;
    // 0x19ce0c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x19ce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19ce10:
    // 0x19ce10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ce10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ce14:
    // 0x19ce14: 0x52000064  beql        $s0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x19CE14u;
    {
        const bool branch_taken_0x19ce14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce14) {
            ctx->pc = 0x19CE18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE14u;
            // 0x19ce18: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19CFA8u;
            goto label_19cfa8;
        }
    }
    ctx->pc = 0x19CE1Cu;
    // 0x19ce1c: 0xc6000178  lwc1        $f0, 0x178($s0)
    ctx->pc = 0x19ce1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ce20: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x19ce20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19ce24: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x19ce24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ce28: 0x0  nop
    ctx->pc = 0x19ce28u;
    // NOP
    // 0x19ce2c: 0x4503005e  bc1tl       . + 4 + (0x5E << 2)
    ctx->pc = 0x19CE2Cu;
    {
        const bool branch_taken_0x19ce2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ce2c) {
            ctx->pc = 0x19CE30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE2Cu;
            // 0x19ce30: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19CFA8u;
            goto label_19cfa8;
        }
    }
    ctx->pc = 0x19CE34u;
    // 0x19ce34: 0xc0909c4  jal         func_242710
    ctx->pc = 0x19CE34u;
    SET_GPR_U32(ctx, 31, 0x19CE3Cu);
    ctx->pc = 0x19CE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE34u;
            // 0x19ce38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE3Cu; }
        if (ctx->pc != 0x19CE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE3Cu; }
        if (ctx->pc != 0x19CE3Cu) { return; }
    }
    ctx->pc = 0x19CE3Cu;
    // 0x19ce3c: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x19ce3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19ce40: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x19ce40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19ce44: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x19ce44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x19ce48: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x19ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x19ce4c: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x19ce4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x19ce50: 0x40f809  jalr        $v0
    ctx->pc = 0x19CE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19CE58u);
        ctx->pc = 0x19CE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE50u;
            // 0x19ce54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19CE58u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CE10u: goto label_19ce10;
            case 0x19CE14u: goto label_19ce14;
            case 0x19CF08u: goto label_19cf08;
            case 0x19CFA8u: goto label_19cfa8;
            case 0x19CFB0u: goto label_19cfb0;
            case 0x19CFB4u: goto label_19cfb4;
            case 0x19D118u: goto label_19d118;
            case 0x19D1D0u: goto label_19d1d0;
            case 0x19D240u: goto label_19d240;
            case 0x19D244u: goto label_19d244;
            case 0x19D258u: goto label_19d258;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19CE58u; }
            if (ctx->pc != 0x19CE58u) { return; }
        }
        }
    }
    ctx->pc = 0x19CE58u;
    // 0x19ce58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19ce58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19ce5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19ce5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19ce60: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x19ce60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x19ce64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19ce64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ce68: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x19ce68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x19ce6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19ce6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19ce70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19ce70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19ce74: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x19ce74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x19ce78: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x19ce78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19ce7c: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x19ce7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19ce80: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x19ce80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19ce84: 0xdba20100  lqc2        $vf2, 0x100($sp)
    ctx->pc = 0x19ce84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x19ce88: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x19ce88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19ce8c: 0xfba200f0  sqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x19ce8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19ce90: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x19ce90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ce94: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19ce94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ce98: 0x0  nop
    ctx->pc = 0x19ce98u;
    // NOP
    // 0x19ce9c: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x19CE9Cu;
    {
        const bool branch_taken_0x19ce9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE9Cu;
            // 0x19cea0: 0xdba300e0  lqc2        $vf3, 0xE0($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce9c) {
            ctx->pc = 0x19CFB0u;
            goto label_19cfb0;
        }
    }
    ctx->pc = 0x19CEA4u;
    // 0x19cea4: 0x4be3106c  vsub.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x19cea4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19cea8: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x19cea8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19ceac: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x19ceacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19ceb0: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x19ceb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19ceb4: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x19ceb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x19ceb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19ceb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19cebc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x19cebcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19cec0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19cec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cec4: 0x46000004  c1          0x4
    ctx->pc = 0x19cec4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x19cec8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19cec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19cecc: 0x0  nop
    ctx->pc = 0x19ceccu;
    // NOP
    // 0x19ced0: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x19CED0u;
    {
        const bool branch_taken_0x19ced0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CED0u;
            // 0x19ced4: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ced0) {
            ctx->pc = 0x19CFB0u;
            goto label_19cfb0;
        }
    }
    ctx->pc = 0x19CED8u;
    // 0x19ced8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19cedc: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x19cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x19cee0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19cee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19cee4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19CEE4u;
    {
        const bool branch_taken_0x19cee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CEE4u;
            // 0x19cee8: 0xdba10020  lqc2        $vf1, 0x20($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cee4) {
            ctx->pc = 0x19CF08u;
            goto label_19cf08;
        }
    }
    ctx->pc = 0x19CEECu;
    // 0x19ceec: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x19ceecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19cef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cef4: 0xdba20110  lqc2        $vf2, 0x110($sp)
    ctx->pc = 0x19cef4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x19cef8: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x19cef8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19cefc: 0xc07b30e  jal         func_1ECC38
    ctx->pc = 0x19CEFCu;
    SET_GPR_U32(ctx, 31, 0x19CF04u);
    ctx->pc = 0x19CF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CEFCu;
            // 0x19cf00: 0x48251000  qmfc2.ni    $a1, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECC38u;
    if (runtime->hasFunction(0x1ECC38u)) {
        auto targetFn = runtime->lookupFunction(0x1ECC38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CF04u; }
        if (ctx->pc != 0x19CF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECC38_0x1ecc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CF04u; }
        if (ctx->pc != 0x19CF04u) { return; }
    }
    ctx->pc = 0x19CF04u;
    // 0x19cf04: 0x0  nop
    ctx->pc = 0x19cf04u;
    // NOP
label_19cf08:
    // 0x19cf08: 0xc089990  jal         func_226640
    ctx->pc = 0x19CF08u;
    SET_GPR_U32(ctx, 31, 0x19CF10u);
    ctx->pc = 0x19CF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF08u;
            // 0x19cf0c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (runtime->hasFunction(0x226640u)) {
        auto targetFn = runtime->lookupFunction(0x226640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CF10u; }
        if (ctx->pc != 0x19CF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226640_0x226680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CF10u; }
        if (ctx->pc != 0x19CF10u) { return; }
    }
    ctx->pc = 0x19CF10u;
    // 0x19cf10: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x19cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x19cf14: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19cf14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf18: 0x8c65c9d0  lw          $a1, -0x3630($v1)
    ctx->pc = 0x19cf18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953424)));
    // 0x19cf1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19cf1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf20: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x19cf20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19cf24: 0xc089df8  jal         func_2277E0
    ctx->pc = 0x19CF24u;
    SET_GPR_U32(ctx, 31, 0x19CF2Cu);
    ctx->pc = 0x19CF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF24u;
            // 0x19cf28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2277E0u;
    if (runtime->hasFunction(0x2277E0u)) {
        auto targetFn = runtime->lookupFunction(0x2277E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CF2Cu; }
        if (ctx->pc != 0x19CF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002277E0_0x2277e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CF2Cu; }
        if (ctx->pc != 0x19CF2Cu) { return; }
    }
    ctx->pc = 0x19CF2Cu;
    // 0x19cf2c: 0xc076a7e  jal         func_1DA9F8
    ctx->pc = 0x19CF2Cu;
    SET_GPR_U32(ctx, 31, 0x19CF34u);
    ctx->pc = 0x19CF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF2Cu;
            // 0x19cf30: 0x8e64cd58  lw          $a0, -0x32A8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA9F8u;
    if (runtime->hasFunction(0x1DA9F8u)) {
        auto targetFn = runtime->lookupFunction(0x1DA9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CF34u; }
        if (ctx->pc != 0x19CF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1da9f8_0x1daa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CF34u; }
        if (ctx->pc != 0x19CF34u) { return; }
    }
    ctx->pc = 0x19CF34u;
    // 0x19cf34: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x19cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19cf38: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x19cf38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19cf3c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x19cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x19cf40: 0x40f809  jalr        $v0
    ctx->pc = 0x19CF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19CF48u);
        ctx->pc = 0x19CF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF40u;
            // 0x19cf44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19CF48u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CE10u: goto label_19ce10;
            case 0x19CE14u: goto label_19ce14;
            case 0x19CF08u: goto label_19cf08;
            case 0x19CFA8u: goto label_19cfa8;
            case 0x19CFB0u: goto label_19cfb0;
            case 0x19CFB4u: goto label_19cfb4;
            case 0x19D118u: goto label_19d118;
            case 0x19D1D0u: goto label_19d1d0;
            case 0x19D240u: goto label_19d240;
            case 0x19D244u: goto label_19d244;
            case 0x19D258u: goto label_19d258;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19CF48u; }
            if (ctx->pc != 0x19CF48u) { return; }
        }
        }
    }
    ctx->pc = 0x19CF48u;
    // 0x19cf48: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x19cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x19cf4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19cf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf50: 0x8c65c9c4  lw          $a1, -0x363C($v1)
    ctx->pc = 0x19cf50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953412)));
    // 0x19cf54: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x19cf54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19cf58: 0x7ba80110  lq          $t0, 0x110($sp)
    ctx->pc = 0x19cf58u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x19cf5c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x19cf5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19cf60: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x19cf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19cf64: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x19cf64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cf68: 0xc080eba  jal         func_203AE8
    ctx->pc = 0x19CF68u;
    SET_GPR_U32(ctx, 31, 0x19CF70u);
    ctx->pc = 0x19CF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF68u;
            // 0x19cf6c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203AE8u;
    if (runtime->hasFunction(0x203AE8u)) {
        auto targetFn = runtime->lookupFunction(0x203AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CF70u; }
        if (ctx->pc != 0x19CF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203AE8_0x203ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CF70u; }
        if (ctx->pc != 0x19CF70u) { return; }
    }
    ctx->pc = 0x19CF70u;
    // 0x19cf70: 0xe6340034  swc1        $f20, 0x34($s1)
    ctx->pc = 0x19cf70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x19cf74: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x19cf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cf78: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x19cf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19cf7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19cf7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19cf80: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x19cf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x19cf84: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x19cf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19cf88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19cf88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19cf8c: 0x0  nop
    ctx->pc = 0x19cf8cu;
    // NOP
    // 0x19cf90: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x19CF90u;
    {
        const bool branch_taken_0x19cf90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF90u;
            // 0x19cf94: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf90) {
            ctx->pc = 0x19CFB4u;
            goto label_19cfb4;
        }
    }
    ctx->pc = 0x19CF98u;
    // 0x19cf98: 0xc0672d8  jal         func_19CB60
    ctx->pc = 0x19CF98u;
    SET_GPR_U32(ctx, 31, 0x19CFA0u);
    ctx->pc = 0x19CF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF98u;
            // 0x19cf9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CB60u;
    if (runtime->hasFunction(0x19CB60u)) {
        auto targetFn = runtime->lookupFunction(0x19CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CFA0u; }
        if (ctx->pc != 0x19CFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CB60_0x19cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CFA0u; }
        if (ctx->pc != 0x19CFA0u) { return; }
    }
    ctx->pc = 0x19CFA0u;
    // 0x19cfa0: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x19CFA0u;
    {
        const bool branch_taken_0x19cfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CFA0u;
            // 0x19cfa4: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cfa0) {
            ctx->pc = 0x19D258u;
            goto label_19d258;
        }
    }
    ctx->pc = 0x19CFA8u;
label_19cfa8:
    // 0x19cfa8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x19cfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x19cfac: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x19cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_19cfb0:
    // 0x19cfb0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_19cfb4:
    // 0x19cfb4: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x19cfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cfb8: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x19cfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19cfbc: 0xdba100f0  lqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x19cfbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x19cfc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19cfc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19cfc4: 0xdba300e0  lqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x19cfc4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19cfc8: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x19cfc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19cfcc: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x19cfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x19cfd0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x19cfd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19cfd4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x19cfd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19cfd8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x19cfd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19cfdc: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x19cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x19cfe0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x19cfe0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19cfe4: 0x4a0003bf  vwaitq
    ctx->pc = 0x19cfe4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19cfe8: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x19cfe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19cfec: 0x4a0002ff  vnop
    ctx->pc = 0x19cfecu;
    // NOP operation, no action needed for VU0
    // 0x19cff0: 0x4a0002ff  vnop
    ctx->pc = 0x19cff0u;
    // NOP operation, no action needed for VU0
    // 0x19cff4: 0x48a32800  qmtc2.ni    $v1, $vf5
    ctx->pc = 0x19cff4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x19cff8: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x19cff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19cffc: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x19cffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19d000: 0x4be51098  vmulx.xyzw  $vf2, $vf2, $vf5x
    ctx->pc = 0x19d000u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d004: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x19d004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19d008: 0x8e52001c  lw          $s2, 0x1C($s2)
    ctx->pc = 0x19d008u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x19d00c: 0x48b20800  qmtc2.ni    $s2, $vf1
    ctx->pc = 0x19d00cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 18));
    // 0x19d010: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x19d010u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d014: 0xfba200b0  sqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x19d014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19d018: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x19d018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19d01c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x19d01cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x19d020: 0x4be41098  vmulx.xyzw  $vf2, $vf2, $vf4x
    ctx->pc = 0x19d020u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d024: 0xda210020  lqc2        $vf1, 0x20($s1)
    ctx->pc = 0x19d024u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x19d028: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x19d028u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d02c: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x19d02cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19d030: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x19d030u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19d034: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x19d034u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d038: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x19d038u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d03c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x19d03cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19d040: 0x4a0003bf  vwaitq
    ctx->pc = 0x19d040u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19d044: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x19d044u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d048: 0x4a0002ff  vnop
    ctx->pc = 0x19d048u;
    // NOP operation, no action needed for VU0
    // 0x19d04c: 0x4a0002ff  vnop
    ctx->pc = 0x19d04cu;
    // NOP operation, no action needed for VU0
    // 0x19d050: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x19d050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19d054: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x19d054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19d058: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x19d058u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d05c: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x19d05cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19d060: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x19d060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x19d064: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19d064u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19d068: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x19d068u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d06c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x19d06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19d070: 0x4be40858  vmulx.xyzw  $vf1, $vf1, $vf4x
    ctx->pc = 0x19d070u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d074: 0xdba200e0  lqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x19d074u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19d078: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x19d078u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d07c: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x19d07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19d080: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x19d080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x19d084: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x19d084u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x19d088: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19d088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19d08c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x19d08cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x19d090: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x19d090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x19d094: 0x3c030d33  lui         $v1, 0xD33
    ctx->pc = 0x19d094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3379 << 16));
    // 0x19d098: 0x24e2f170  addiu       $v0, $a3, -0xE90
    ctx->pc = 0x19d098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963568));
    // 0x19d09c: 0xace5f170  sw          $a1, -0xE90($a3)
    ctx->pc = 0x19d09cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963568), GPR_U32(ctx, 5));
    // 0x19d0a0: 0x34630042  ori         $v1, $v1, 0x42
    ctx->pc = 0x19d0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)66);
    // 0x19d0a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19d0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d0a8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x19d0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x19d0ac: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x19d0acu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19d0b0: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x19d0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x19d0b4: 0x7ba60120  lq          $a2, 0x120($sp)
    ctx->pc = 0x19d0b4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x19d0b8: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x19d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x19d0bc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19d0c0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x19d0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x19d0c4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x19d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x19d0c8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x19d0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x19d0cc: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x19d0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x19d0d0: 0xc047864  jal         func_11E190
    ctx->pc = 0x19D0D0u;
    SET_GPR_U32(ctx, 31, 0x19D0D8u);
    ctx->pc = 0x19D0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D0D0u;
            // 0x19d0d4: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0D8u; }
        if (ctx->pc != 0x19D0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0D8u; }
        if (ctx->pc != 0x19D0D8u) { return; }
    }
    ctx->pc = 0x19D0D8u;
    // 0x19d0d8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x19D0D8u;
    {
        const bool branch_taken_0x19d0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d0d8) {
            ctx->pc = 0x19D0DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19D0D8u;
            // 0x19d0dc: 0xda230020  lqc2        $vf3, 0x20($s1) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19D118u;
            goto label_19d118;
        }
    }
    ctx->pc = 0x19D0E0u;
    // 0x19d0e0: 0xc089990  jal         func_226640
    ctx->pc = 0x19D0E0u;
    SET_GPR_U32(ctx, 31, 0x19D0E8u);
    ctx->pc = 0x19D0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D0E0u;
            // 0x19d0e4: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (runtime->hasFunction(0x226640u)) {
        auto targetFn = runtime->lookupFunction(0x226640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0E8u; }
        if (ctx->pc != 0x19D0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226640_0x226680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0E8u; }
        if (ctx->pc != 0x19D0E8u) { return; }
    }
    ctx->pc = 0x19D0E8u;
    // 0x19d0e8: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x19d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x19d0ec: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x19d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x19d0f0: 0x24637790  addiu       $v1, $v1, 0x7790
    ctx->pc = 0x19d0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30608));
    // 0x19d0f4: 0x8c85c9d4  lw          $a1, -0x362C($a0)
    ctx->pc = 0x19d0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953428)));
    // 0x19d0f8: 0x78670010  lq          $a3, 0x10($v1)
    ctx->pc = 0x19d0f8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19d0fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19d0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d100: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x19d100u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19d104: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19d104u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d108: 0xc089de2  jal         func_227788
    ctx->pc = 0x19D108u;
    SET_GPR_U32(ctx, 31, 0x19D110u);
    ctx->pc = 0x19D10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D108u;
            // 0x19d10c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227788u;
    if (runtime->hasFunction(0x227788u)) {
        auto targetFn = runtime->lookupFunction(0x227788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D110u; }
        if (ctx->pc != 0x19D110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227788_0x227788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D110u; }
        if (ctx->pc != 0x19D110u) { return; }
    }
    ctx->pc = 0x19D110u;
    // 0x19d110: 0xda230020  lqc2        $vf3, 0x20($s1)
    ctx->pc = 0x19d110u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x19d114: 0x0  nop
    ctx->pc = 0x19d114u;
    // NOP
label_19d118:
    // 0x19d118: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x19d118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d11c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x19d11cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d120: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x19d120u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d124: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x19d124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x19d128: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x19d128u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
    // 0x19d12c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19d12cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d130: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x19d130u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19d134: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19d134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d138: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19d138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d13c: 0x0  nop
    ctx->pc = 0x19d13cu;
    // NOP
    // 0x19d140: 0x45020023  bc1fl       . + 4 + (0x23 << 2)
    ctx->pc = 0x19D140u;
    {
        const bool branch_taken_0x19d140 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d140) {
            ctx->pc = 0x19D144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19D140u;
            // 0x19d144: 0x7fb00030  sq          $s0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19D1D0u;
            goto label_19d1d0;
        }
    }
    ctx->pc = 0x19D148u;
    // 0x19d148: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x19d148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d14c: 0x4be41b3c  vmove.xyzw  $vf4, $vf3
    ctx->pc = 0x19d14cu;
    ctx->vu0_vf[4] = ctx->vu0_vf[3];
    // 0x19d150: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x19d150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d154: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x19d154u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19d158: 0x4a0003bf  vwaitq
    ctx->pc = 0x19d158u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19d15c: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x19d15cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19d160: 0x4a0002ff  vnop
    ctx->pc = 0x19d160u;
    // NOP operation, no action needed for VU0
    // 0x19d164: 0x4a0002ff  vnop
    ctx->pc = 0x19d164u;
    // NOP operation, no action needed for VU0
    // 0x19d168: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x19d168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19d16c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19d170: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19d170u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19d174: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x19d174u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d178: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x19d178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d17c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x19d17cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]);
    // 0x19d180: 0x4bc1206e  vopmsub.xyz $vf1, $vf4, $vf1
    ctx->pc = 0x19d180u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19d184: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x19d184u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d188: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x19d188u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19d18c: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x19d18cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d190: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x19d190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d194: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x19d194u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19d198: 0x4a0003bf  vwaitq
    ctx->pc = 0x19d198u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19d19c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x19d19cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d1a0: 0x4a0002ff  vnop
    ctx->pc = 0x19d1a0u;
    // NOP operation, no action needed for VU0
    // 0x19d1a4: 0x4a0002ff  vnop
    ctx->pc = 0x19d1a4u;
    // NOP operation, no action needed for VU0
    // 0x19d1a8: 0x4bc122fe  vopmula.xyz $ACC, $vf4, $vf1
    ctx->pc = 0x19d1a8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]);
    // 0x19d1ac: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x19d1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19d1b0: 0x4bc408ae  vopmsub.xyz $vf2, $vf1, $vf4
    ctx->pc = 0x19d1b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19d1b4: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x19d1b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d1b8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19d1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19d1bc: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x19d1bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x19d1c0: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x19d1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19d1c4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19d1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19d1c8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x19d1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x19d1cc: 0x0  nop
    ctx->pc = 0x19d1ccu;
    // NOP
label_19d1d0:
    // 0x19d1d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x19d1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19d1d4: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x19d1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x19d1d8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x19d1d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d1dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19d1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d1e0: 0xdce4bdf8  ld          $a0, -0x4208($a3)
    ctx->pc = 0x19d1e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 4294950392)));
    // 0x19d1e4: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x19d1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x19d1e8: 0x84a30060  lh          $v1, 0x60($a1)
    ctx->pc = 0x19d1e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x19d1ec: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x19d1ecu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x19d1f0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x19d1f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d1f4: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x19d1f4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x19d1f8: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x19d1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x19d1fc: 0x83300a  movz        $a2, $a0, $v1
    ctx->pc = 0x19d1fcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x19d200: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x19d200u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d204: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x19d204u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
    // 0x19d208: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x19d208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d20c: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x19d20cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
    // 0x19d210: 0xfce4bdf8  sd          $a0, -0x4208($a3)
    ctx->pc = 0x19d210u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 4294950392), GPR_U64(ctx, 4));
    // 0x19d214: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x19d214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19d218: 0xfca60068  sd          $a2, 0x68($a1)
    ctx->pc = 0x19d218u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 6));
    // 0x19d21c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19d220: 0x8c42ec68  lw          $v0, -0x1398($v0)
    ctx->pc = 0x19d220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962280)));
    // 0x19d224: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d22c: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x19d22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x19d230: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D230u;
    {
        const bool branch_taken_0x19d230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D230u;
            // 0x19d234: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d230) {
            ctx->pc = 0x19D240u;
            goto label_19d240;
        }
    }
    ctx->pc = 0x19D238u;
    // 0x19d238: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19D238u;
    {
        const bool branch_taken_0x19d238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D238u;
            // 0x19d23c: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d238) {
            ctx->pc = 0x19D244u;
            goto label_19d244;
        }
    }
    ctx->pc = 0x19D240u;
label_19d240:
    // 0x19d240: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19d240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d244:
    // 0x19d244: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D244u;
    {
        const bool branch_taken_0x19d244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D244u;
            // 0x19d248: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d244) {
            ctx->pc = 0x19D258u;
            goto label_19d258;
        }
    }
    ctx->pc = 0x19D24Cu;
    // 0x19d24c: 0xc0833cc  jal         func_20CF30
    ctx->pc = 0x19D24Cu;
    SET_GPR_U32(ctx, 31, 0x19D254u);
    ctx->pc = 0x19D250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D24Cu;
            // 0x19d250: 0x8c44004c  lw          $a0, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20CF30u;
    if (runtime->hasFunction(0x20CF30u)) {
        auto targetFn = runtime->lookupFunction(0x20CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D254u; }
        if (ctx->pc != 0x19D254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020CF30_0x20cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D254u; }
        if (ctx->pc != 0x19D254u) { return; }
    }
    ctx->pc = 0x19D254u;
    // 0x19d254: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x19d254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_19d258:
    // 0x19d258: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x19d258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x19d25c: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x19d25cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x19d260: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x19d260u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x19d264: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x19d264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x19d268: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x19d268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19d26c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D26Cu;
            // 0x19d270: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CE10u: goto label_19ce10;
            case 0x19CE14u: goto label_19ce14;
            case 0x19CF08u: goto label_19cf08;
            case 0x19CFA8u: goto label_19cfa8;
            case 0x19CFB0u: goto label_19cfb0;
            case 0x19CFB4u: goto label_19cfb4;
            case 0x19D118u: goto label_19d118;
            case 0x19D1D0u: goto label_19d1d0;
            case 0x19D240u: goto label_19d240;
            case 0x19D244u: goto label_19d244;
            case 0x19D258u: goto label_19d258;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D274u;
    // 0x19d274: 0x0  nop
    ctx->pc = 0x19d274u;
    // NOP
}
