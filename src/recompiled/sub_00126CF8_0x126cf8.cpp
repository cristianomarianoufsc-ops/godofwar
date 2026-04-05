#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00126CF8
// Address: 0x126cf8 - 0x127000
void sub_00126CF8_0x126cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126CF8_0x126cf8");
#endif

    ctx->pc = 0x126cf8u;

    // 0x126cf8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x126cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x126cfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x126cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x126d00: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x126d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x126d04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x126d04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d08: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x126d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x126d0c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x126d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d10: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x126d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x126d14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x126d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d18: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x126d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x126d1c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x126d1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x126d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x126d24: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x126d24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126d2c: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x126D2Cu;
    SET_GPR_U32(ctx, 31, 0x126D34u);
    ctx->pc = 0x126D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126D2Cu;
            // 0x126d30: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D34u; }
        if (ctx->pc != 0x126D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D34u; }
        if (ctx->pc != 0x126D34u) { return; }
    }
    ctx->pc = 0x126D34u;
    // 0x126d34: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x126d34u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x126d38: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x126d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x126d3c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x126d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x126d40: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x126d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x126d44: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x126d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x126d48: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x126D48u;
    SET_GPR_U32(ctx, 31, 0x126D50u);
    ctx->pc = 0x126D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126D48u;
            // 0x126d4c: 0xae42f168  sw          $v0, -0xE98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D50u; }
        if (ctx->pc != 0x126D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D50u; }
        if (ctx->pc != 0x126D50u) { return; }
    }
    ctx->pc = 0x126D50u;
    // 0x126d50: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x126d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x126d54: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x126d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x126d58: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x126d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x126d5c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x126d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x126d60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x126d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x126d64: 0x3c0a0030  lui         $t2, 0x30
    ctx->pc = 0x126d64u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)48 << 16));
    // 0x126d68: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x126d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x126d6c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x126d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x126d70: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x126d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x126d74: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x126d74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x126d78: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x126d78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x126d7c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x126d7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x126d80: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x126d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x126d84: 0x3c0b0033  lui         $t3, 0x33
    ctx->pc = 0x126d84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
    // 0x126d88: 0x8d49dd58  lw          $t1, -0x22A8($t2)
    ctx->pc = 0x126d88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294958424)));
    // 0x126d8c: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x126d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x126d90: 0x8e44f168  lw          $a0, -0xE98($s2)
    ctx->pc = 0x126d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x126d94: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x126d94u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x126d98: 0xc6478  dsll        $t4, $t4, 17
    ctx->pc = 0x126d98u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 17);
    // 0x126d9c: 0x93182  srl         $a2, $t1, 6
    ctx->pc = 0x126d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 6));
    // 0x126da0: 0x9c63f1a8  lwu         $v1, -0xE58($v1)
    ctx->pc = 0x126da0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294963624)));
    // 0x126da4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x126da4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x126da8: 0xfc820018  sd          $v0, 0x18($a0)
    ctx->pc = 0x126da8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 2));
    // 0x126dac: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x126dacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x126db0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x126db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x126db4: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x126db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x126db8: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x126db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x126dbc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x126dbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x126dc0: 0x2407004f  addiu       $a3, $zero, 0x4F
    ctx->pc = 0x126dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x126dc4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x126dc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x126dc8: 0xae45f168  sw          $a1, -0xE98($s2)
    ctx->pc = 0x126dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 5));
    // 0x126dcc: 0xfc900010  sd          $s0, 0x10($a0)
    ctx->pc = 0x126dccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 16));
    // 0x126dd0: 0x9d63f19c  lwu         $v1, -0xE64($t3)
    ctx->pc = 0x126dd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 4294963612)));
    // 0x126dd4: 0x9d02f1a0  lwu         $v0, -0xE60($t0)
    ctx->pc = 0x126dd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4294963616)));
    // 0x126dd8: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x126dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x126ddc: 0xfc870028  sd          $a3, 0x28($a0)
    ctx->pc = 0x126ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 7));
    // 0x126de0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x126de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x126de4: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x126de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x126de8: 0xfc820020  sd          $v0, 0x20($a0)
    ctx->pc = 0x126de8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
    // 0x126dec: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x126decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x126df0: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x126df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x126df4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x126df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x126df8: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x126df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x126dfc: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x126dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x126e00: 0xfc820030  sd          $v0, 0x30($a0)
    ctx->pc = 0x126e00u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 2));
    // 0x126e04: 0xfc830038  sd          $v1, 0x38($a0)
    ctx->pc = 0x126e04u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 3));
    // 0x126e08: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x126e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x126e0c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x126e0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x126e10: 0xfc850040  sd          $a1, 0x40($a0)
    ctx->pc = 0x126e10u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 5));
    // 0x126e14: 0xfc870048  sd          $a3, 0x48($a0)
    ctx->pc = 0x126e14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 7));
    // 0x126e18: 0xfc880058  sd          $t0, 0x58($a0)
    ctx->pc = 0x126e18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 8));
    // 0x126e1c: 0xfc800050  sd          $zero, 0x50($a0)
    ctx->pc = 0x126e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 0));
    // 0x126e20: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x126e20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x126e24: 0x4a220858  vmulx.w     $vf1, $vf1, $vf2x
    ctx->pc = 0x126e24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x126e28: 0x254add58  addiu       $t2, $t2, -0x22A8
    ctx->pc = 0x126e28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294958424));
    // 0x126e2c: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x126e2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x126e30: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x126e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x126e34: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x126e34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x126e38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126e3c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x126e3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x126e40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x126e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x126e44: 0x118940  sll         $s1, $s1, 5
    ctx->pc = 0x126e44u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x126e48: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x126e48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x126e4c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x126e4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x126e50: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x126e50u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x126e54: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x126e54u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x126e58: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x126e58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x126e5c: 0x44892000  mtc1        $t1, $f4
    ctx->pc = 0x126e5cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x126e60: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x126e60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x126e64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x126e64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x126e68: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x126e68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x126e6c: 0xc661036c  lwc1        $f1, 0x36C($s3)
    ctx->pc = 0x126e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126e70: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x126e70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x126e74: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x126e74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x126e78: 0x2268825  or          $s1, $s1, $a2
    ctx->pc = 0x126e78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
    // 0x126e7c: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x126e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
    // 0x126e80: 0xc6620374  lwc1        $f2, 0x374($s3)
    ctx->pc = 0x126e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x126e84: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x126e84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x126e88: 0xc6600370  lwc1        $f0, 0x370($s3)
    ctx->pc = 0x126e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126e8c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x126e8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x126e90: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x126e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x126e94: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x126e94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x126e98: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x126e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x126e9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x126e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x126ea0: 0x31a3a  dsrl        $v1, $v1, 8
    ctx->pc = 0x126ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 8);
    // 0x126ea4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x126ea4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x126ea8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x126ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x126eac: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x126eacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x126eb0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x126eb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x126eb4: 0xc6650368  lwc1        $f5, 0x368($s3)
    ctx->pc = 0x126eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x126eb8: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x126eb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x126ebc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x126ebcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x126ec0: 0x3405a000  ori         $a1, $zero, 0xA000
    ctx->pc = 0x126ec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x126ec4: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x126ec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
    // 0x126ec8: 0x2258825  or          $s1, $s1, $a1
    ctx->pc = 0x126ec8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    // 0x126ecc: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x126eccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x126ed0: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x126ed0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x126ed4: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x126ed4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x126ed8: 0x2448fff8  addiu       $t0, $v0, -0x8
    ctx->pc = 0x126ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x126edc: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x126edcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x126ee0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x126ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x126ee4: 0x24cbfff8  addiu       $t3, $a2, -0x8
    ctx->pc = 0x126ee4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x126ee8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x126ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x126eec: 0x214f8  dsll        $v0, $v0, 19
    ctx->pc = 0x126eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x126ef0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x126ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x126ef4: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x126ef4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x126ef8: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x126ef8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x126efc: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x126efcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x126f00: 0x24820090  addiu       $v0, $a0, 0x90
    ctx->pc = 0x126f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x126f04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x126f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126f08: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x126f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x126f0c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x126f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126f10: 0xae42f168  sw          $v0, -0xE98($s2)
    ctx->pc = 0x126f10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 2));
    // 0x126f14: 0xfc830060  sd          $v1, 0x60($a0)
    ctx->pc = 0x126f14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 3));
    // 0x126f18: 0xfc850068  sd          $a1, 0x68($a0)
    ctx->pc = 0x126f18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 5));
    // 0x126f1c: 0xfc860078  sd          $a2, 0x78($a0)
    ctx->pc = 0x126f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 120), GPR_U64(ctx, 6));
    // 0x126f20: 0xfc910080  sd          $s1, 0x80($a0)
    ctx->pc = 0x126f20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 128), GPR_U64(ctx, 17));
    // 0x126f24: 0xfc870088  sd          $a3, 0x88($a0)
    ctx->pc = 0x126f24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 136), GPR_U64(ctx, 7));
    // 0x126f28: 0x12a00022  beqz        $s5, . + 4 + (0x22 << 2)
    ctx->pc = 0x126F28u;
    {
        const bool branch_taken_0x126f28 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126F28u;
            // 0x126f2c: 0xfc800070  sd          $zero, 0x70($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 112), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f28) {
            ctx->pc = 0x126FB4u;
            goto label_126fb4;
        }
    }
    ctx->pc = 0x126F30u;
    // 0x126f30: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x126f30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x126f34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x126f34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f38: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x126f38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x126f3c: 0xda820010  lqc2        $vf2, 0x10($s4)
    ctx->pc = 0x126f3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x126f40: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x126f40u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x126f44: 0x4b020083  vaddw.x     $vf2, $vf0, $vf2w
    ctx->pc = 0x126f44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x126f48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x126f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x126f4c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x126f4cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x126f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126f54: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x126f54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126f58: 0x0  nop
    ctx->pc = 0x126f58u;
    // NOP
    // 0x126f5c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x126F5Cu;
    {
        const bool branch_taken_0x126f5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126f5c) {
            ctx->pc = 0x126F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126F5Cu;
            // 0x126f60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126F88u;
            goto label_126f88;
        }
    }
    ctx->pc = 0x126F64u;
    // 0x126f64: 0xda810020  lqc2        $vf1, 0x20($s4)
    ctx->pc = 0x126f64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x126f68: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x126f68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x126f6c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x126f6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x126f70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126f74: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x126f74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126f78: 0x0  nop
    ctx->pc = 0x126f78u;
    // NOP
    // 0x126f7c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x126F7Cu;
    {
        const bool branch_taken_0x126f7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126f7c) {
            ctx->pc = 0x126F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126F7Cu;
            // 0x126f80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126F88u;
            goto label_126f88;
        }
    }
    ctx->pc = 0x126F84u;
    // 0x126f84: 0x0  nop
    ctx->pc = 0x126f84u;
    // NOP
label_126f88:
    // 0x126f88: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x126F88u;
    {
        const bool branch_taken_0x126f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126F88u;
            // 0x126f8c: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f88) {
            ctx->pc = 0x126FB4u;
            goto label_126fb4;
        }
    }
    ctx->pc = 0x126F90u;
    // 0x126f90: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x126f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f94: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x126f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x126f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f9c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x126f9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fa0: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x126fa0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fa4: 0xc0498b2  jal         func_1262C8
    ctx->pc = 0x126FA4u;
    SET_GPR_U32(ctx, 31, 0x126FACu);
    ctx->pc = 0x126FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126FA4u;
            // 0x126fa8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1262C8u;
    if (runtime->hasFunction(0x1262C8u)) {
        auto targetFn = runtime->lookupFunction(0x1262C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FACu; }
        if (ctx->pc != 0x126FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001262C8_0x1262c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FACu; }
        if (ctx->pc != 0x126FACu) { return; }
    }
    ctx->pc = 0x126FACu;
    // 0x126fac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x126FACu;
    {
        const bool branch_taken_0x126fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126fac) {
            ctx->pc = 0x126FCCu;
            goto label_126fcc;
        }
    }
    ctx->pc = 0x126FB4u;
label_126fb4:
    // 0x126fb4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x126fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fb8: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x126fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fbc: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x126fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fc0: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x126fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fc4: 0xc049874  jal         func_1261D0
    ctx->pc = 0x126FC4u;
    SET_GPR_U32(ctx, 31, 0x126FCCu);
    ctx->pc = 0x126FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126FC4u;
            // 0x126fc8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1261D0u;
    if (runtime->hasFunction(0x1261D0u)) {
        auto targetFn = runtime->lookupFunction(0x1261D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FCCu; }
        if (ctx->pc != 0x126FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1261d0_0x1262c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FCCu; }
        if (ctx->pc != 0x126FCCu) { return; }
    }
    ctx->pc = 0x126FCCu;
label_126fcc:
    // 0x126fcc: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x126FCCu;
    SET_GPR_U32(ctx, 31, 0x126FD4u);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FD4u; }
        if (ctx->pc != 0x126FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FD4u; }
        if (ctx->pc != 0x126FD4u) { return; }
    }
    ctx->pc = 0x126FD4u;
    // 0x126fd4: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x126FD4u;
    SET_GPR_U32(ctx, 31, 0x126FDCu);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FDCu; }
        if (ctx->pc != 0x126FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FDCu; }
        if (ctx->pc != 0x126FDCu) { return; }
    }
    ctx->pc = 0x126FDCu;
    // 0x126fdc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x126fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x126fe0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x126fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x126fe4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x126fe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x126fe8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x126fe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126fec: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x126fecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126ff0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x126ff0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x126FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126FF8u;
            // 0x126ffc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126F88u: goto label_126f88;
            case 0x126FB4u: goto label_126fb4;
            case 0x126FCCu: goto label_126fcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x127000u;
}
