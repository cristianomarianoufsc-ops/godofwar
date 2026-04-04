#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DE548
// Address: 0x1de548 - 0x1de620
void sub_001DE548_0x1de548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE548_0x1de548");
#endif

    ctx->pc = 0x1de548u;

    // 0x1de548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de54c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1de54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1de550: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1de550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1de554: 0x2442a8b0  addiu       $v0, $v0, -0x5750
    ctx->pc = 0x1de554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944944));
    // 0x1de558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1de558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1de55c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de564: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1de564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de568: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1de568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1de56c: 0xc0909c8  jal         func_242720
    ctx->pc = 0x1DE56Cu;
    SET_GPR_U32(ctx, 31, 0x1DE574u);
    ctx->pc = 0x1DE570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE56Cu;
            // 0x1de570: 0x8e250018  lw          $a1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242720u;
    if (runtime->hasFunction(0x242720u)) {
        auto targetFn = runtime->lookupFunction(0x242720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE574u; }
        if (ctx->pc != 0x1DE574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242720_0x242728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE574u; }
        if (ctx->pc != 0x1DE574u) { return; }
    }
    ctx->pc = 0x1DE574u;
    // 0x1de574: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1de574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1de578: 0x2442a7b0  addiu       $v0, $v0, -0x5850
    ctx->pc = 0x1de578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944688));
    // 0x1de57c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1de57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1de580: 0xc0909cc  jal         func_242730
    ctx->pc = 0x1DE580u;
    SET_GPR_U32(ctx, 31, 0x1DE588u);
    ctx->pc = 0x1DE584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE580u;
            // 0x1de584: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242730u;
    if (runtime->hasFunction(0x242730u)) {
        auto targetFn = runtime->lookupFunction(0x242730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE588u; }
        if (ctx->pc != 0x1DE588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242730_0x242a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE588u; }
        if (ctx->pc != 0x1DE588u) { return; }
    }
    ctx->pc = 0x1DE588u;
    // 0x1de588: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1de588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1de58c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1de58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de590: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1de590u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de594: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x1de594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
    // 0x1de598: 0xae000174  sw          $zero, 0x174($s0)
    ctx->pc = 0x1de598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 0));
    // 0x1de59c: 0xfa0100f0  sqc2        $vf1, 0xF0($s0)
    ctx->pc = 0x1de59cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de5a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1de5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1de5a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1de5a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de5a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1de5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de5ac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1de5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5b4: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x1de5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x1de5b8: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x1de5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x1de5bc: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x1de5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x1de5c0: 0xae000194  sw          $zero, 0x194($s0)
    ctx->pc = 0x1de5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 0));
    // 0x1de5c4: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x1de5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x1de5c8: 0xae0001a4  sw          $zero, 0x1A4($s0)
    ctx->pc = 0x1de5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
    // 0x1de5cc: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1de5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de5d0: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x1de5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1de5d4: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x1de5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x1de5d8: 0xc077ae0  jal         func_1DEB80
    ctx->pc = 0x1DE5D8u;
    SET_GPR_U32(ctx, 31, 0x1DE5E0u);
    ctx->pc = 0x1DE5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE5D8u;
            // 0x1de5dc: 0xe6000168  swc1        $f0, 0x168($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DEB80u;
    if (runtime->hasFunction(0x1DEB80u)) {
        auto targetFn = runtime->lookupFunction(0x1DEB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5E0u; }
        if (ctx->pc != 0x1DE5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DEB80_0x1deb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5E0u; }
        if (ctx->pc != 0x1DE5E0u) { return; }
    }
    ctx->pc = 0x1DE5E0u;
    // 0x1de5e0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1de5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1de5e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1de5e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de5e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1de5e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5ec: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x1de5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x1de5f0: 0xe60001bc  swc1        $f0, 0x1BC($s0)
    ctx->pc = 0x1de5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
    // 0x1de5f4: 0xe6000170  swc1        $f0, 0x170($s0)
    ctx->pc = 0x1de5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 368), bits); }
    // 0x1de5f8: 0xae00017c  sw          $zero, 0x17C($s0)
    ctx->pc = 0x1de5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 0));
    // 0x1de5fc: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x1de5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
    // 0x1de600: 0xae00019c  sw          $zero, 0x19C($s0)
    ctx->pc = 0x1de600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
    // 0x1de604: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x1de604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x1de608: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1de608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de60c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de60cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de614: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE614u;
            // 0x1de618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DE61Cu;
    // 0x1de61c: 0x0  nop
    ctx->pc = 0x1de61cu;
    // NOP
}
