#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E83C8
// Address: 0x1e83c8 - 0x1e8478
void sub_001E83C8_0x1e83c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E83C8_0x1e83c8");
#endif

    ctx->pc = 0x1e83c8u;

    // 0x1e83c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e83c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e83cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e83ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e83d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e83d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e83d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e83d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e83d8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1e83d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e83dc: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x1e83dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1e83e0: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1e83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1e83e4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E83E4u;
    {
        const bool branch_taken_0x1e83e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e83e4) {
            ctx->pc = 0x1E83E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E83E4u;
            // 0x1e83e8: 0x8e020174  lw          $v0, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8400u;
            goto label_1e8400;
        }
    }
    ctx->pc = 0x1E83ECu;
    // 0x1e83ec: 0x7a0200f0  lq          $v0, 0xF0($s0)
    ctx->pc = 0x1e83ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1e83f0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e83f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e83f4: 0x7e0200e0  sq          $v0, 0xE0($s0)
    ctx->pc = 0x1e83f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
    // 0x1e83f8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1E83F8u;
    {
        const bool branch_taken_0x1e83f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E83FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E83F8u;
            // 0x1e83fc: 0xfa0100f0  sqc2        $vf1, 0xF0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 240), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e83f8) {
            ctx->pc = 0x1E8464u;
            goto label_1e8464;
        }
    }
    ctx->pc = 0x1E8400u;
label_1e8400:
    // 0x1e8400: 0x3042004c  andi        $v0, $v0, 0x4C
    ctx->pc = 0x1e8400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)76);
    // 0x1e8404: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E8404u;
    {
        const bool branch_taken_0x1e8404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8404) {
            ctx->pc = 0x1E8408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8404u;
            // 0x1e8408: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8468u;
            goto label_1e8468;
        }
    }
    ctx->pc = 0x1E840Cu;
    // 0x1e840c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e840cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e8410: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e8410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e8414: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1e8414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e8418: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1e8418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1e841c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1e841cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1e8420: 0x40f809  jalr        $v0
    ctx->pc = 0x1E8420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E8428u);
        ctx->pc = 0x1E8424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8420u;
            // 0x1e8424: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E8428u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E8400u: goto label_1e8400;
            case 0x1E8464u: goto label_1e8464;
            case 0x1E8468u: goto label_1e8468;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E8428u; }
            if (ctx->pc != 0x1E8428u) { return; }
        }
        }
    }
    ctx->pc = 0x1E8428u;
    // 0x1e8428: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1e8428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1e842c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e842cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8430: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1e8430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1e8434: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e8434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e8438: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e8438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e843c: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1e843cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1e8440: 0xc601016c  lwc1        $f1, 0x16C($s0)
    ctx->pc = 0x1e8440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8444: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e8444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e8448: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e8448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e844c: 0x7a0400f0  lq          $a0, 0xF0($s0)
    ctx->pc = 0x1e844cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1e8450: 0xc44c0088  lwc1        $f12, 0x88($v0)
    ctx->pc = 0x1e8450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e8454: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e8454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e8458: 0xc077f54  jal         func_1DFD50
    ctx->pc = 0x1E8458u;
    SET_GPR_U32(ctx, 31, 0x1E8460u);
    ctx->pc = 0x1E845Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8458u;
            // 0x1e845c: 0x4600a342  mul.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFD50u;
    if (runtime->hasFunction(0x1DFD50u)) {
        auto targetFn = runtime->lookupFunction(0x1DFD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8460u; }
        if (ctx->pc != 0x1E8460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFD50_0x1dfd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8460u; }
        if (ctx->pc != 0x1E8460u) { return; }
    }
    ctx->pc = 0x1E8460u;
    // 0x1e8460: 0x7e0200f0  sq          $v0, 0xF0($s0)
    ctx->pc = 0x1e8460u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), GPR_VEC(ctx, 2));
label_1e8464:
    // 0x1e8464: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e8464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e8468:
    // 0x1e8468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e846c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1e846cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e8470: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8470u;
            // 0x1e8474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E8400u: goto label_1e8400;
            case 0x1E8464u: goto label_1e8464;
            case 0x1E8468u: goto label_1e8468;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E8478u;
}
