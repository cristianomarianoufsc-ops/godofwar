#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00193C98
// Address: 0x193c98 - 0x193fb0
void sub_00193C98_0x193c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193C98_0x193c98");
#endif

    ctx->pc = 0x193c98u;

    // 0x193c98: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x193c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x193c9c: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x193c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x193ca0: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x193ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x193ca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x193ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ca8: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x193ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x193cac: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x193cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x193cb0: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x193cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x193cb4: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x193cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x193cb8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x193cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x193cbc: 0x104000b3  beqz        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x193CBCu;
    {
        const bool branch_taken_0x193cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193CBCu;
            // 0x193cc0: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193cbc) {
            ctx->pc = 0x193F8Cu;
            goto label_193f8c;
        }
    }
    ctx->pc = 0x193CC4u;
    // 0x193cc4: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x193cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x193cc8: 0x24843630  addiu       $a0, $a0, 0x3630
    ctx->pc = 0x193cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13872));
    // 0x193ccc: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x193CCCu;
    SET_GPR_U32(ctx, 31, 0x193CD4u);
    ctx->pc = 0x193CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193CCCu;
            // 0x193cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CD4u; }
        if (ctx->pc != 0x193CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CD4u; }
        if (ctx->pc != 0x193CD4u) { return; }
    }
    ctx->pc = 0x193CD4u;
    // 0x193cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cd8: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x193CD8u;
    SET_GPR_U32(ctx, 31, 0x193CE0u);
    ctx->pc = 0x193CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193CD8u;
            // 0x193cdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CE0u; }
        if (ctx->pc != 0x193CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CE0u; }
        if (ctx->pc != 0x193CE0u) { return; }
    }
    ctx->pc = 0x193CE0u;
    // 0x193ce0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x193ce0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ce4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x193ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x193ce8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x193ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x193cec: 0x24843640  addiu       $a0, $a0, 0x3640
    ctx->pc = 0x193cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13888));
    // 0x193cf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cf4: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x193CF4u;
    SET_GPR_U32(ctx, 31, 0x193CFCu);
    ctx->pc = 0x193CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193CF4u;
            // 0x193cf8: 0x8c500104  lw          $s0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CFCu; }
        if (ctx->pc != 0x193CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CFCu; }
        if (ctx->pc != 0x193CFCu) { return; }
    }
    ctx->pc = 0x193CFCu;
    // 0x193cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d00: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x193D00u;
    SET_GPR_U32(ctx, 31, 0x193D08u);
    ctx->pc = 0x193D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193D00u;
            // 0x193d04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D08u; }
        if (ctx->pc != 0x193D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D08u; }
        if (ctx->pc != 0x193D08u) { return; }
    }
    ctx->pc = 0x193D08u;
    // 0x193d08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x193d08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d0c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x193d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x193d10: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x193d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x193d14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x193d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x193d18: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x193d18u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x193d1c: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x193d1cu;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x193d20: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x193d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x193d24: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x193d24u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x193d28: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x193d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x193d2c: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x193d2cu;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x193d30: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x193d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x193d34: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x193d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x193d38: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x193d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x193d3c: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x193d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x193d40: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x193d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x193d44: 0xc0909c4  jal         func_242710
    ctx->pc = 0x193D44u;
    SET_GPR_U32(ctx, 31, 0x193D4Cu);
    ctx->pc = 0x193D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193D44u;
            // 0x193d48: 0xfba40070  sqc2        $vf4, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D4Cu; }
        if (ctx->pc != 0x193D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D4Cu; }
        if (ctx->pc != 0x193D4Cu) { return; }
    }
    ctx->pc = 0x193D4Cu;
    // 0x193d4c: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x193d4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x193d50: 0x3c024260  lui         $v0, 0x4260
    ctx->pc = 0x193d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16992 << 16));
    // 0x193d54: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x193d54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x193d58: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x193d58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193d5c: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x193d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x193d60: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x193d60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193d64: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x193d64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x193d68: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x193d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x193d6c: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x193d6cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x193d70: 0xde45bdf8  ld          $a1, -0x4208($s2)
    ctx->pc = 0x193d70u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 4294950392)));
    // 0x193d74: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x193d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x193d78: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x193d78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193d7c: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x193d7cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x193d80: 0x84830060  lh          $v1, 0x60($a0)
    ctx->pc = 0x193d80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x193d84: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x193d84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x193d88: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x193d88u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x193d8c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x193d8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193d90: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x193d90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x193d94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x193d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d98: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x193d98u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x193d9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x193d9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193da0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x193da0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193da4: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x193da4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x193da8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x193da8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193dac: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x193dacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x193db0: 0xfe45bdf8  sd          $a1, -0x4208($s2)
    ctx->pc = 0x193db0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294950392), GPR_U64(ctx, 5));
    // 0x193db4: 0xfc830068  sd          $v1, 0x68($a0)
    ctx->pc = 0x193db4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 3));
    // 0x193db8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x193db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x193dbc: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x193dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x193dc0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x193DC0u;
    {
        const bool branch_taken_0x193dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193DC0u;
            // 0x193dc4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193dc0) {
            ctx->pc = 0x193DFCu;
            goto label_193dfc;
        }
    }
    ctx->pc = 0x193DC8u;
    // 0x193dc8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x193dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x193dcc: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x193dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x193dd0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x193dd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x193dd4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x193dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x193dd8: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x193dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x193ddc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x193ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x193de0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x193de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x193de4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x193de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193de8: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x193DE8u;
    {
        const bool branch_taken_0x193de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x193DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193DE8u;
            // 0x193dec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193de8) {
            ctx->pc = 0x193DF8u;
            goto label_193df8;
        }
    }
    ctx->pc = 0x193DF0u;
    // 0x193df0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x193df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x193df4: 0x0  nop
    ctx->pc = 0x193df4u;
    // NOP
label_193df8:
    // 0x193df8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_193dfc:
    // 0x193dfc: 0x52000064  beql        $s0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x193DFCu;
    {
        const bool branch_taken_0x193dfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x193dfc) {
            ctx->pc = 0x193E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193DFCu;
            // 0x193e00: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193F90u;
            goto label_193f90;
        }
    }
    ctx->pc = 0x193E04u;
    // 0x193e04: 0xc0909c4  jal         func_242710
    ctx->pc = 0x193E04u;
    SET_GPR_U32(ctx, 31, 0x193E0Cu);
    ctx->pc = 0x193E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193E04u;
            // 0x193e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E0Cu; }
        if (ctx->pc != 0x193E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E0Cu; }
        if (ctx->pc != 0x193E0Cu) { return; }
    }
    ctx->pc = 0x193E0Cu;
    // 0x193e0c: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x193e0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x193e10: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x193e10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193e14: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x193e14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x193e18: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x193e18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x193e1c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x193e1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193e20: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x193e20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193e24: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x193e24u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x193e28: 0x4a0003bf  vwaitq
    ctx->pc = 0x193e28u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x193e2c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x193e2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x193e30: 0x4a0002ff  vnop
    ctx->pc = 0x193e30u;
    // NOP operation, no action needed for VU0
    // 0x193e34: 0x4a0002ff  vnop
    ctx->pc = 0x193e34u;
    // NOP operation, no action needed for VU0
    // 0x193e38: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x193e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x193e3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193e40: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x193e40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x193e44: 0xdba30110  lqc2        $vf3, 0x110($sp)
    ctx->pc = 0x193e44u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x193e48: 0x4a4118c0  vaddx.z     $vf3, $vf3, $vf1x
    ctx->pc = 0x193e48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x193e4c: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x193e4cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x193e50: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x193e50u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x193e54: 0x4bc2086e  vopmsub.xyz $vf1, $vf1, $vf2
    ctx->pc = 0x193e54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x193e58: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x193e58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193e5c: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x193e5cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x193e60: 0x4bc208ee  vopmsub.xyz $vf3, $vf1, $vf2
    ctx->pc = 0x193e60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x193e64: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x193e64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x193e68: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x193e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x193e6c: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x193e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x193e70: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x193e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x193e74: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x193e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x193e78: 0xc06149c  jal         func_185270
    ctx->pc = 0x193E78u;
    SET_GPR_U32(ctx, 31, 0x193E80u);
    ctx->pc = 0x193E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193E78u;
            // 0x193e7c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185270u;
    if (runtime->hasFunction(0x185270u)) {
        auto targetFn = runtime->lookupFunction(0x185270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E80u; }
        if (ctx->pc != 0x193E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_185270_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E80u; }
        if (ctx->pc != 0x193E80u) { return; }
    }
    ctx->pc = 0x193E80u;
    // 0x193e80: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x193e80u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x193e84: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x193e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x193e88: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x193e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x193e8c: 0x143180  sll         $a2, $s4, 6
    ctx->pc = 0x193e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x193e90: 0x7ba50080  lq          $a1, 0x80($sp)
    ctx->pc = 0x193e90u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x193e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e98: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x193e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x193e9c: 0x133980  sll         $a3, $s3, 6
    ctx->pc = 0x193e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x193ea0: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x193ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x193ea4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x193ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x193ea8: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x193ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x193eac: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x193eacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x193eb0: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x193eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x193eb4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x193eb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x193eb8: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x193eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x193ebc: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x193ebcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x193ec0: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x193ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x193ec4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x193ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x193ec8: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x193ec8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x193ecc: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x193eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x193ed0: 0x8c500050  lw          $s0, 0x50($v0)
    ctx->pc = 0x193ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x193ed4: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x193ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x193ed8: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x193ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x193edc: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x193edcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x193ee0: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x193ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x193ee4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x193ee4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x193ee8: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x193ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x193eec: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x193eecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x193ef0: 0xc0909c4  jal         func_242710
    ctx->pc = 0x193EF0u;
    SET_GPR_U32(ctx, 31, 0x193EF8u);
    ctx->pc = 0x193EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193EF0u;
            // 0x193ef4: 0x7e020030  sq          $v0, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193EF8u; }
        if (ctx->pc != 0x193EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193EF8u; }
        if (ctx->pc != 0x193EF8u) { return; }
    }
    ctx->pc = 0x193EF8u;
    // 0x193ef8: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x193ef8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x193efc: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x193efcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193f00: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x193f00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193f04: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x193f04u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x193f08: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x193f08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x193f0c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x193f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x193f10: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x193f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x193f14: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x193f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x193f18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x193f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x193f1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x193f20: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x193f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x193f24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x193F24u;
    {
        const bool branch_taken_0x193f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x193F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193F24u;
            // 0x193f28: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f24) {
            ctx->pc = 0x193F38u;
            goto label_193f38;
        }
    }
    ctx->pc = 0x193F2Cu;
    // 0x193f2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x193f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x193F30u;
    {
        const bool branch_taken_0x193f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193F30u;
            // 0x193f34: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f30) {
            ctx->pc = 0x193F3Cu;
            goto label_193f3c;
        }
    }
    ctx->pc = 0x193F38u;
label_193f38:
    // 0x193f38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x193f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193f3c:
    // 0x193f3c: 0x8c8200e4  lw          $v0, 0xE4($a0)
    ctx->pc = 0x193f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x193f40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x193f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x193f44: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x193f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x193f48: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x193f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x193f4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x193F4Cu;
    {
        const bool branch_taken_0x193f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193F4Cu;
            // 0x193f50: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f4c) {
            ctx->pc = 0x193F68u;
            goto label_193f68;
        }
    }
    ctx->pc = 0x193F54u;
    // 0x193f54: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x193f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x193f58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x193f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x193f5c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x193f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x193f60: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x193f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x193f64: 0x0  nop
    ctx->pc = 0x193f64u;
    // NOP
label_193f68:
    // 0x193f68: 0xde42bdf8  ld          $v0, -0x4208($s2)
    ctx->pc = 0x193f68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 4294950392)));
    // 0x193f6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x193f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x193f70: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x193f70u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x193f74: 0x3c0144c8  lui         $at, 0x44C8
    ctx->pc = 0x193f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17608 << 16));
    // 0x193f78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193f7c: 0x8c630104  lw          $v1, 0x104($v1)
    ctx->pc = 0x193f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x193f80: 0xfe42bdf8  sd          $v0, -0x4208($s2)
    ctx->pc = 0x193f80u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294950392), GPR_U64(ctx, 2));
    // 0x193f84: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x193f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x193f88: 0xfc600040  sd          $zero, 0x40($v1)
    ctx->pc = 0x193f88u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 0));
label_193f8c:
    // 0x193f8c: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x193f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_193f90:
    // 0x193f90: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x193f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x193f94: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x193f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x193f98: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x193f98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x193f9c: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x193f9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x193fa0: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x193fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x193fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x193FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193FA4u;
            // 0x193fa8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193DF8u: goto label_193df8;
            case 0x193DFCu: goto label_193dfc;
            case 0x193F38u: goto label_193f38;
            case 0x193F3Cu: goto label_193f3c;
            case 0x193F68u: goto label_193f68;
            case 0x193F8Cu: goto label_193f8c;
            case 0x193F90u: goto label_193f90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193FACu;
    // 0x193fac: 0x0  nop
    ctx->pc = 0x193facu;
    // NOP
}
