#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED390
// Address: 0x1ed390 - 0x1ed688
void sub_001ED390_0x1ed390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED390_0x1ed390");
#endif

    ctx->pc = 0x1ed390u;

    // 0x1ed390: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ed390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ed394: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1ed394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1ed398: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ed398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1ed39c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ed39cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed3a0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1ed3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1ed3a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ed3a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed3a8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1ed3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1ed3ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ed3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ed3b0: 0xae400838  sw          $zero, 0x838($s2)
    ctx->pc = 0x1ed3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2104), GPR_U32(ctx, 0));
    // 0x1ed3b4: 0xae400804  sw          $zero, 0x804($s2)
    ctx->pc = 0x1ed3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2052), GPR_U32(ctx, 0));
    // 0x1ed3b8: 0xae4007a0  sw          $zero, 0x7A0($s2)
    ctx->pc = 0x1ed3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1952), GPR_U32(ctx, 0));
    // 0x1ed3bc: 0xae4007a4  sw          $zero, 0x7A4($s2)
    ctx->pc = 0x1ed3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1956), GPR_U32(ctx, 0));
    // 0x1ed3c0: 0xae4007ac  sw          $zero, 0x7AC($s2)
    ctx->pc = 0x1ed3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1964), GPR_U32(ctx, 0));
    // 0x1ed3c4: 0xae4007b0  sw          $zero, 0x7B0($s2)
    ctx->pc = 0x1ed3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1968), GPR_U32(ctx, 0));
    // 0x1ed3c8: 0xae400180  sw          $zero, 0x180($s2)
    ctx->pc = 0x1ed3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 0));
    // 0x1ed3cc: 0xae400800  sw          $zero, 0x800($s2)
    ctx->pc = 0x1ed3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2048), GPR_U32(ctx, 0));
    // 0x1ed3d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ed3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ed3d4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ed3d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ed3d8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1ed3d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ed3dc: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1ed3dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ed3e0: 0xc07b8fa  jal         func_1EE3E8
    ctx->pc = 0x1ED3E0u;
    SET_GPR_U32(ctx, 31, 0x1ED3E8u);
    ctx->pc = 0x1ED3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED3E0u;
            // 0x1ed3e4: 0xfa410790  sqc2        $vf1, 0x790($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 1936), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE3E8u;
    if (runtime->hasFunction(0x1EE3E8u)) {
        auto targetFn = runtime->lookupFunction(0x1EE3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED3E8u; }
        if (ctx->pc != 0x1ED3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE3E8_0x1ee3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED3E8u; }
        if (ctx->pc != 0x1ED3E8u) { return; }
    }
    ctx->pc = 0x1ED3E8u;
    // 0x1ed3e8: 0x8e430750  lw          $v1, 0x750($s2)
    ctx->pc = 0x1ed3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1872)));
    // 0x1ed3ec: 0x7e420780  sq          $v0, 0x780($s2)
    ctx->pc = 0x1ed3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1920), GPR_VEC(ctx, 2));
    // 0x1ed3f0: 0x460001b  bltz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1ED3F0u;
    {
        const bool branch_taken_0x1ed3f0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1ED3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED3F0u;
            // 0x1ed3f4: 0x7e420770  sq          $v0, 0x770($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 1904), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed3f0) {
            ctx->pc = 0x1ED460u;
            goto label_1ed460;
        }
    }
    ctx->pc = 0x1ED3F8u;
    // 0x1ed3f8: 0x8e420754  lw          $v0, 0x754($s2)
    ctx->pc = 0x1ed3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1876)));
    // 0x1ed3fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ed3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed400: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ed400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed404: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x1ed404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ed408: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x1ed408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ed40c: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x1ed40cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1ed410: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1ed410u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1ed414: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1ED414u;
    {
        const bool branch_taken_0x1ed414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed414) {
            ctx->pc = 0x1ED418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED414u;
            // 0x1ed418: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ED464u;
            goto label_1ed464;
        }
    }
    ctx->pc = 0x1ED41Cu;
    // 0x1ed41c: 0x0  nop
    ctx->pc = 0x1ed41cu;
    // NOP
label_1ed420:
    // 0x1ed420: 0x24040170  addiu       $a0, $zero, 0x170
    ctx->pc = 0x1ed420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x1ed424: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ed424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1ed428: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x1ed428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ed42c: 0x24840190  addiu       $a0, $a0, 0x190
    ctx->pc = 0x1ed42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x1ed430: 0xc07c68e  jal         func_1F1A38
    ctx->pc = 0x1ED430u;
    SET_GPR_U32(ctx, 31, 0x1ED438u);
    ctx->pc = 0x1ED434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED430u;
            // 0x1ed434: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1A38u;
    if (runtime->hasFunction(0x1F1A38u)) {
        auto targetFn = runtime->lookupFunction(0x1F1A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED438u; }
        if (ctx->pc != 0x1ED438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A38_0x1f1a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED438u; }
        if (ctx->pc != 0x1ED438u) { return; }
    }
    ctx->pc = 0x1ED438u;
    // 0x1ed438: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x1ed438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ed43c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ed43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ed440: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x1ed440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1ed444: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1ed444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ed448: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1ed448u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1ed44c: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x1ed44cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1ed450: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1ed450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ed454: 0x1600fff2  bnez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1ED454u;
    {
        const bool branch_taken_0x1ed454 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED454u;
            // 0x1ed458: 0x828823  subu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed454) {
            ctx->pc = 0x1ED420u;
            runtime->cooperativeGuestYield();
            goto label_1ed420;
        }
    }
    ctx->pc = 0x1ED45Cu;
    // 0x1ed45c: 0x0  nop
    ctx->pc = 0x1ed45cu;
    // NOP
label_1ed460:
    // 0x1ed460: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x1ed460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1ed464:
    // 0x1ed464: 0xc07c652  jal         func_1F1948
    ctx->pc = 0x1ED464u;
    SET_GPR_U32(ctx, 31, 0x1ED46Cu);
    ctx->pc = 0x1ED468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED464u;
            // 0x1ed468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1948u;
    if (runtime->hasFunction(0x1F1948u)) {
        auto targetFn = runtime->lookupFunction(0x1F1948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED46Cu; }
        if (ctx->pc != 0x1ED46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f1948_0x1f1a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED46Cu; }
        if (ctx->pc != 0x1ED46Cu) { return; }
    }
    ctx->pc = 0x1ED46Cu;
    // 0x1ed46c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ed46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed470: 0x24020170  addiu       $v0, $zero, 0x170
    ctx->pc = 0x1ed470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x1ed474: 0x0  nop
    ctx->pc = 0x1ed474u;
    // NOP
label_1ed478:
    // 0x1ed478: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1ed478u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed47c: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x1ed47cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ed480: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x1ed480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1ed484: 0x26450170  addiu       $a1, $s2, 0x170
    ctx->pc = 0x1ed484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
    // 0x1ed488: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x1ed488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
label_1ed48c:
    // 0x1ed48c: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1ed48cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed490: 0x78670010  lq          $a3, 0x10($v1)
    ctx->pc = 0x1ed490u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ed494: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x1ed494u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x1ed498: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x1ed498u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x1ed49c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1ed49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1ed4a0: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ED4A0u;
    {
        const bool branch_taken_0x1ed4a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1ED4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED4A0u;
            // 0x1ed4a4: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4a0) {
            ctx->pc = 0x1ED48Cu;
            runtime->cooperativeGuestYield();
            goto label_1ed48c;
        }
    }
    ctx->pc = 0x1ED4A8u;
    // 0x1ed4a8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1ed4a8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed4ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ed4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ed4b0: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x1ed4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x1ed4b4: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1ed4b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ed4b8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1ED4B8u;
    {
        const bool branch_taken_0x1ed4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED4B8u;
            // 0x1ed4bc: 0x24020170  addiu       $v0, $zero, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4b8) {
            ctx->pc = 0x1ED478u;
            runtime->cooperativeGuestYield();
            goto label_1ed478;
        }
    }
    ctx->pc = 0x1ED4C0u;
    // 0x1ed4c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ed4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ed4c4: 0xae4008bc  sw          $zero, 0x8BC($s2)
    ctx->pc = 0x1ed4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2236), GPR_U32(ctx, 0));
    // 0x1ed4c8: 0xae420750  sw          $v0, 0x750($s2)
    ctx->pc = 0x1ed4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1872), GPR_U32(ctx, 2));
    // 0x1ed4cc: 0x1260004a  beqz        $s3, . + 4 + (0x4A << 2)
    ctx->pc = 0x1ED4CCu;
    {
        const bool branch_taken_0x1ed4cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED4CCu;
            // 0x1ed4d0: 0xae420754  sw          $v0, 0x754($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4cc) {
            ctx->pc = 0x1ED5F8u;
            goto label_1ed5f8;
        }
    }
    ctx->pc = 0x1ED4D4u;
    // 0x1ed4d4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1ed4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1ed4d8: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x1ed4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1ed4dc: 0x244316b8  addiu       $v1, $v0, 0x16B8
    ctx->pc = 0x1ed4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5816));
    // 0x1ed4e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ed4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed4e4: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x1ed4e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ed4e8: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1ed4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1ed4ec: 0x8c4216b8  lw          $v0, 0x16B8($v0)
    ctx->pc = 0x1ed4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5816)));
    // 0x1ed4f0: 0xa3a30004  sb          $v1, 0x4($sp)
    ctx->pc = 0x1ed4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ed4f4: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x1ED4F4u;
    SET_GPR_U32(ctx, 31, 0x1ED4FCu);
    ctx->pc = 0x1ED4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED4F4u;
            // 0x1ed4f8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED4FCu; }
        if (ctx->pc != 0x1ED4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED4FCu; }
        if (ctx->pc != 0x1ED4FCu) { return; }
    }
    ctx->pc = 0x1ED4FCu;
    // 0x1ed4fc: 0x26440808  addiu       $a0, $s2, 0x808
    ctx->pc = 0x1ed4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2056));
    // 0x1ed500: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1ED500u;
    SET_GPR_U32(ctx, 31, 0x1ED508u);
    ctx->pc = 0x1ED504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED500u;
            // 0x1ed504: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED508u; }
        if (ctx->pc != 0x1ED508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED508u; }
        if (ctx->pc != 0x1ED508u) { return; }
    }
    ctx->pc = 0x1ED508u;
    // 0x1ed508: 0xa3a0001f  sb          $zero, 0x1F($sp)
    ctx->pc = 0x1ed508u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed50c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1ed50cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1ed510: 0x2611e848  addiu       $s1, $s0, -0x17B8
    ctx->pc = 0x1ed510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1ed514: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x1ed514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1ed518: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x1ed518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x1ed51c: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x1ed51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1ed520: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ed520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ed524: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1ed524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ed528: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1ed528u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ed52c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1ed52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1ed530: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x1ed530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x1ed534: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ed534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ed538: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ed538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed53c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1ed53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1ed540: 0xc061e64  jal         func_187990
    ctx->pc = 0x1ED540u;
    SET_GPR_U32(ctx, 31, 0x1ED548u);
    ctx->pc = 0x1ED544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED540u;
            // 0x1ed544: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187990u;
    if (runtime->hasFunction(0x187990u)) {
        auto targetFn = runtime->lookupFunction(0x187990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED548u; }
        if (ctx->pc != 0x1ED548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187990_0x187990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED548u; }
        if (ctx->pc != 0x1ED548u) { return; }
    }
    ctx->pc = 0x1ED548u;
    // 0x1ed548: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1ed548u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed54c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ed550: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1ed550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ed554: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ed554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed558: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ed558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed55c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ed55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ed560: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1ed560u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1ed564: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1ed564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1ed568: 0x40f809  jalr        $v0
    ctx->pc = 0x1ED568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED570u);
        ctx->pc = 0x1ED56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED568u;
            // 0x1ed56c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ED570u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED420u: goto label_1ed420;
            case 0x1ED460u: goto label_1ed460;
            case 0x1ED464u: goto label_1ed464;
            case 0x1ED478u: goto label_1ed478;
            case 0x1ED48Cu: goto label_1ed48c;
            case 0x1ED598u: goto label_1ed598;
            case 0x1ED5B0u: goto label_1ed5b0;
            case 0x1ED5F8u: goto label_1ed5f8;
            case 0x1ED63Cu: goto label_1ed63c;
            case 0x1ED654u: goto label_1ed654;
            case 0x1ED660u: goto label_1ed660;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ED570u; }
            if (ctx->pc != 0x1ED570u) { return; }
        }
        }
    }
    ctx->pc = 0x1ED570u;
    // 0x1ed570: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1ED570u;
    SET_GPR_U32(ctx, 31, 0x1ED578u);
    ctx->pc = 0x1ED574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED570u;
            // 0x1ed574: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED578u; }
        if (ctx->pc != 0x1ED578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED578u; }
        if (ctx->pc != 0x1ED578u) { return; }
    }
    ctx->pc = 0x1ED578u;
    // 0x1ed578: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED578u;
    {
        const bool branch_taken_0x1ed578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED578u;
            // 0x1ed57c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed578) {
            ctx->pc = 0x1ED598u;
            goto label_1ed598;
        }
    }
    ctx->pc = 0x1ED580u;
    // 0x1ed580: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ed580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ed584: 0xc07b8b4  jal         func_1EE2D0
    ctx->pc = 0x1ED584u;
    SET_GPR_U32(ctx, 31, 0x1ED58Cu);
    ctx->pc = 0x1ED588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED584u;
            // 0x1ed588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE2D0u;
    if (runtime->hasFunction(0x1EE2D0u)) {
        auto targetFn = runtime->lookupFunction(0x1EE2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED58Cu; }
        if (ctx->pc != 0x1ED58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE2D0_0x1ee2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED58Cu; }
        if (ctx->pc != 0x1ED58Cu) { return; }
    }
    ctx->pc = 0x1ED58Cu;
    // 0x1ed58c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED58Cu;
    {
        const bool branch_taken_0x1ed58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED58Cu;
            // 0x1ed590: 0x2602e848  addiu       $v0, $s0, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed58c) {
            ctx->pc = 0x1ED5B0u;
            goto label_1ed5b0;
        }
    }
    ctx->pc = 0x1ED594u;
    // 0x1ed594: 0x0  nop
    ctx->pc = 0x1ed594u;
    // NOP
label_1ed598:
    // 0x1ed598: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ed598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ed59c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ed59cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ed5a0: 0x8c456268  lw          $a1, 0x6268($v0)
    ctx->pc = 0x1ed5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25192)));
    // 0x1ed5a4: 0xc07b8b4  jal         func_1EE2D0
    ctx->pc = 0x1ED5A4u;
    SET_GPR_U32(ctx, 31, 0x1ED5ACu);
    ctx->pc = 0x1ED5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED5A4u;
            // 0x1ed5a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE2D0u;
    if (runtime->hasFunction(0x1EE2D0u)) {
        auto targetFn = runtime->lookupFunction(0x1EE2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5ACu; }
        if (ctx->pc != 0x1ED5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE2D0_0x1ee2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5ACu; }
        if (ctx->pc != 0x1ED5ACu) { return; }
    }
    ctx->pc = 0x1ED5ACu;
    // 0x1ed5ac: 0x2602e848  addiu       $v0, $s0, -0x17B8
    ctx->pc = 0x1ed5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
label_1ed5b0:
    // 0x1ed5b0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1ed5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1ed5b4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ed5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ed5b8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1ed5b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1ed5bc: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1ed5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1ed5c0: 0x40f809  jalr        $v0
    ctx->pc = 0x1ED5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED5C8u);
        ctx->pc = 0x1ED5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED5C0u;
            // 0x1ed5c4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ED5C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED420u: goto label_1ed420;
            case 0x1ED460u: goto label_1ed460;
            case 0x1ED464u: goto label_1ed464;
            case 0x1ED478u: goto label_1ed478;
            case 0x1ED48Cu: goto label_1ed48c;
            case 0x1ED598u: goto label_1ed598;
            case 0x1ED5B0u: goto label_1ed5b0;
            case 0x1ED5F8u: goto label_1ed5f8;
            case 0x1ED63Cu: goto label_1ed63c;
            case 0x1ED654u: goto label_1ed654;
            case 0x1ED660u: goto label_1ed660;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5C8u; }
            if (ctx->pc != 0x1ED5C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1ED5C8u;
    // 0x1ed5c8: 0x8e440750  lw          $a0, 0x750($s2)
    ctx->pc = 0x1ed5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1872)));
    // 0x1ed5cc: 0x24020170  addiu       $v0, $zero, 0x170
    ctx->pc = 0x1ed5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x1ed5d0: 0x8e6600b0  lw          $a2, 0xB0($s3)
    ctx->pc = 0x1ed5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x1ed5d4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ed5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ed5d8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1ed5d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ed5dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ed5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed5e0: 0xac66e270  sw          $a2, -0x1D90($v1)
    ctx->pc = 0x1ed5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959728), GPR_U32(ctx, 6));
    // 0x1ed5e4: 0x24840190  addiu       $a0, $a0, 0x190
    ctx->pc = 0x1ed5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x1ed5e8: 0xc07c6ae  jal         func_1F1AB8
    ctx->pc = 0x1ED5E8u;
    SET_GPR_U32(ctx, 31, 0x1ED5F0u);
    ctx->pc = 0x1ED5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED5E8u;
            // 0x1ed5ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1AB8u;
    if (runtime->hasFunction(0x1F1AB8u)) {
        auto targetFn = runtime->lookupFunction(0x1F1AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5F0u; }
        if (ctx->pc != 0x1ED5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AB8_0x1f1ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5F0u; }
        if (ctx->pc != 0x1ED5F0u) { return; }
    }
    ctx->pc = 0x1ED5F0u;
    // 0x1ed5f0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1ED5F0u;
    {
        const bool branch_taken_0x1ed5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED5F0u;
            // 0x1ed5f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed5f0) {
            ctx->pc = 0x1ED660u;
            goto label_1ed660;
        }
    }
    ctx->pc = 0x1ED5F8u;
label_1ed5f8:
    // 0x1ed5f8: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1ed5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1ed5fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ed5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed600: 0x244672c0  addiu       $a2, $v0, 0x72C0
    ctx->pc = 0x1ed600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 29376));
    // 0x1ed604: 0x68c90007  ldl         $t1, 0x7($a2)
    ctx->pc = 0x1ed604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1ed608: 0x6cc90000  ldr         $t1, 0x0($a2)
    ctx->pc = 0x1ed608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1ed60c: 0xb249080f  sdl         $t1, 0x80F($s2)
    ctx->pc = 0x1ed60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 2063); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed610: 0xb6490808  sdr         $t1, 0x808($s2)
    ctx->pc = 0x1ed610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 2056); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed614: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1ed614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ed618: 0xc07b74a  jal         func_1EDD28
    ctx->pc = 0x1ED618u;
    SET_GPR_U32(ctx, 31, 0x1ED620u);
    ctx->pc = 0x1ED61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED618u;
            // 0x1ed61c: 0x7a450770  lq          $a1, 0x770($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 1904)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EDD28u;
    if (runtime->hasFunction(0x1EDD28u)) {
        auto targetFn = runtime->lookupFunction(0x1EDD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED620u; }
        if (ctx->pc != 0x1ED620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EDD28_0x1edd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED620u; }
        if (ctx->pc != 0x1ED620u) { return; }
    }
    ctx->pc = 0x1ED620u;
    // 0x1ed620: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED620u;
    {
        const bool branch_taken_0x1ed620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED620u;
            // 0x1ed624: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed620) {
            ctx->pc = 0x1ED63Cu;
            goto label_1ed63c;
        }
    }
    ctx->pc = 0x1ED628u;
    // 0x1ed628: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ed628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ed62c: 0xc07b8b4  jal         func_1EE2D0
    ctx->pc = 0x1ED62Cu;
    SET_GPR_U32(ctx, 31, 0x1ED634u);
    ctx->pc = 0x1ED630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED62Cu;
            // 0x1ed630: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE2D0u;
    if (runtime->hasFunction(0x1EE2D0u)) {
        auto targetFn = runtime->lookupFunction(0x1EE2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED634u; }
        if (ctx->pc != 0x1ED634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE2D0_0x1ee2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED634u; }
        if (ctx->pc != 0x1ED634u) { return; }
    }
    ctx->pc = 0x1ED634u;
    // 0x1ed634: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED634u;
    {
        const bool branch_taken_0x1ed634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED634u;
            // 0x1ed638: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed634) {
            ctx->pc = 0x1ED654u;
            goto label_1ed654;
        }
    }
    ctx->pc = 0x1ED63Cu;
label_1ed63c:
    // 0x1ed63c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ed63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ed640: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ed640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ed644: 0x8c456268  lw          $a1, 0x6268($v0)
    ctx->pc = 0x1ed644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25192)));
    // 0x1ed648: 0xc07b8b4  jal         func_1EE2D0
    ctx->pc = 0x1ED648u;
    SET_GPR_U32(ctx, 31, 0x1ED650u);
    ctx->pc = 0x1ED64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED648u;
            // 0x1ed64c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE2D0u;
    if (runtime->hasFunction(0x1EE2D0u)) {
        auto targetFn = runtime->lookupFunction(0x1EE2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED650u; }
        if (ctx->pc != 0x1ED650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE2D0_0x1ee2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED650u; }
        if (ctx->pc != 0x1ED650u) { return; }
    }
    ctx->pc = 0x1ED650u;
    // 0x1ed650: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ed650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_1ed654:
    // 0x1ed654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed658: 0xac62e270  sw          $v0, -0x1D90($v1)
    ctx->pc = 0x1ed658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959728), GPR_U32(ctx, 2));
    // 0x1ed65c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ed660:
    // 0x1ed660: 0xae400804  sw          $zero, 0x804($s2)
    ctx->pc = 0x1ed660u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2052), GPR_U32(ctx, 0));
    // 0x1ed664: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1ed664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1ed668: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1ed668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ed66c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1ed66cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ed670: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1ed670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ed674: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ed674u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed678: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ed678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed67c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED67Cu;
            // 0x1ed680: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED420u: goto label_1ed420;
            case 0x1ED460u: goto label_1ed460;
            case 0x1ED464u: goto label_1ed464;
            case 0x1ED478u: goto label_1ed478;
            case 0x1ED48Cu: goto label_1ed48c;
            case 0x1ED598u: goto label_1ed598;
            case 0x1ED5B0u: goto label_1ed5b0;
            case 0x1ED5F8u: goto label_1ed5f8;
            case 0x1ED63Cu: goto label_1ed63c;
            case 0x1ED654u: goto label_1ed654;
            case 0x1ED660u: goto label_1ed660;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ED684u;
    // 0x1ed684: 0x0  nop
    ctx->pc = 0x1ed684u;
    // NOP
}
