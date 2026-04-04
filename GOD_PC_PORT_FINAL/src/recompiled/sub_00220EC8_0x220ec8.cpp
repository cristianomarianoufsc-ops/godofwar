#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00220EC8
// Address: 0x220ec8 - 0x2211f8
void sub_00220EC8_0x220ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220EC8_0x220ec8");
#endif

    ctx->pc = 0x220ec8u;

    // 0x220ec8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x220ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x220ecc: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x220eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x220ed0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x220ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x220ed4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x220ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ed8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x220ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x220edc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x220edcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ee0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x220ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x220ee4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x220ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x220ee8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x220ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x220eec: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x220eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x220ef0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x220ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x220ef4: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x220ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x220ef8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x220ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x220efc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x220efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x220f00: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x220f00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x220f04: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x220f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x220f08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x220f08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f0c: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x220f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x220f10: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x220f10u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x220f14: 0x4410072  bgez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x220F14u;
    {
        const bool branch_taken_0x220f14 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x220F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220F14u;
            // 0x220f18: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f14) {
            ctx->pc = 0x2210E0u;
            goto label_2210e0;
        }
    }
    ctx->pc = 0x220F1Cu;
    // 0x220f1c: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x220f1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x220f20: 0x8e700104  lw          $s0, 0x104($s3)
    ctx->pc = 0x220f20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x220f24: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x220f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x220f28: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x220f28u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x220f2c: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x220f2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x220f30: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220F30u;
    {
        const bool branch_taken_0x220f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x220F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220F30u;
            // 0x220f34: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f30) {
            ctx->pc = 0x220F48u;
            goto label_220f48;
        }
    }
    ctx->pc = 0x220F38u;
    // 0x220f38: 0xc04da64  jal         func_136990
    ctx->pc = 0x220F38u;
    SET_GPR_U32(ctx, 31, 0x220F40u);
    ctx->pc = 0x220F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220F38u;
            // 0x220f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F40u; }
        if (ctx->pc != 0x220F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F40u; }
        if (ctx->pc != 0x220F40u) { return; }
    }
    ctx->pc = 0x220F40u;
    // 0x220f40: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x220f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220f44: 0x0  nop
    ctx->pc = 0x220f44u;
    // NOP
label_220f48:
    // 0x220f48: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x220f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x220f4c: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x220f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x220f50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220f54: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x220f54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x220f58: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x220f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x220f5c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x220f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x220f60: 0x2462f170  addiu       $v0, $v1, -0xE90
    ctx->pc = 0x220f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963568));
    // 0x220f64: 0xac74f170  sw          $s4, -0xE90($v1)
    ctx->pc = 0x220f64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963568), GPR_U32(ctx, 20));
    // 0x220f68: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x220f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x220f6c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x220f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x220f70: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x220f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x220f74: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x220f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x220f78: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x220f78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x220f7c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x220f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x220f80: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x220f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
    // 0x220f84: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x220f84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x220f88: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x220f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x220f8c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x220f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x220f90: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x220f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x220f94: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x220f94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x220f98: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x220f98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220f9c: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x220f9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x220fa0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x220fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x220fa4: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x220fa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220fa8: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x220fa8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x220fac: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x220facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x220fb0: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x220fb0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x220fb4: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x220fb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220fb8: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x220fb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x220fbc: 0xc047864  jal         func_11E190
    ctx->pc = 0x220FBCu;
    SET_GPR_U32(ctx, 31, 0x220FC4u);
    ctx->pc = 0x220FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220FBCu;
            // 0x220fc0: 0x48251000  qmfc2.ni    $a1, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FC4u; }
        if (ctx->pc != 0x220FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FC4u; }
        if (ctx->pc != 0x220FC4u) { return; }
    }
    ctx->pc = 0x220FC4u;
    // 0x220fc4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x220FC4u;
    {
        const bool branch_taken_0x220fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220FC4u;
            // 0x220fc8: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220fc4) {
            ctx->pc = 0x221000u;
            goto label_221000;
        }
    }
    ctx->pc = 0x220FCCu;
    // 0x220fcc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x220fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x220fd0: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x220fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x220fd4: 0x8c645e7c  lw          $a0, 0x5E7C($v1)
    ctx->pc = 0x220fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24188)));
    // 0x220fd8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x220fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x220fdc: 0x8c570028  lw          $s7, 0x28($v0)
    ctx->pc = 0x220fdcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x220fe0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x220fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x220fe4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x220fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x220fe8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x220fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220fec: 0x8c441184  lw          $a0, 0x1184($v0)
    ctx->pc = 0x220fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4484)));
    // 0x220ff0: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x220FF0u;
    SET_GPR_U32(ctx, 31, 0x220FF8u);
    ctx->pc = 0x220FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220FF0u;
            // 0x220ff4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FF8u; }
        if (ctx->pc != 0x220FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FF8u; }
        if (ctx->pc != 0x220FF8u) { return; }
    }
    ctx->pc = 0x220FF8u;
    // 0x220ff8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x220ff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ffc: 0x0  nop
    ctx->pc = 0x220ffcu;
    // NOP
label_221000:
    // 0x221000: 0x12400071  beqz        $s2, . + 4 + (0x71 << 2)
    ctx->pc = 0x221000u;
    {
        const bool branch_taken_0x221000 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x221004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221000u;
            // 0x221004: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221000) {
            ctx->pc = 0x2211C8u;
            goto label_2211c8;
        }
    }
    ctx->pc = 0x221008u;
    // 0x221008: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x221008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x22100c: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x22100Cu;
    {
        const bool branch_taken_0x22100c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22100Cu;
            // 0x221010: 0x3c1e0033  lui         $fp, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22100c) {
            ctx->pc = 0x221110u;
            goto label_221110;
        }
    }
    ctx->pc = 0x221014u;
    // 0x221014: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x221014u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x221018: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x221018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22101c: 0x27c3e848  addiu       $v1, $fp, -0x17B8
    ctx->pc = 0x22101cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961224));
    // 0x221020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x221020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221024: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x221024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221028: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x221028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22102c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x22102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x221030: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x221030u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x221034: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x221034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x221038: 0x40f809  jalr        $v0
    ctx->pc = 0x221038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x221040u);
        ctx->pc = 0x22103Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221038u;
            // 0x22103c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x221040u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220F48u: goto label_220f48;
            case 0x221000u: goto label_221000;
            case 0x221088u: goto label_221088;
            case 0x221098u: goto label_221098;
            case 0x2210BCu: goto label_2210bc;
            case 0x2210E0u: goto label_2210e0;
            case 0x221110u: goto label_221110;
            case 0x221114u: goto label_221114;
            case 0x221188u: goto label_221188;
            case 0x2211A4u: goto label_2211a4;
            case 0x2211A8u: goto label_2211a8;
            case 0x2211C4u: goto label_2211c4;
            case 0x2211C8u: goto label_2211c8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x221040u; }
            if (ctx->pc != 0x221040u) { return; }
        }
        }
    }
    ctx->pc = 0x221040u;
    // 0x221040: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x221040u;
    SET_GPR_U32(ctx, 31, 0x221048u);
    ctx->pc = 0x221044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221040u;
            // 0x221044: 0x8e440034  lw          $a0, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (runtime->hasFunction(0x17A700u)) {
        auto targetFn = runtime->lookupFunction(0x17A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221048u; }
        if (ctx->pc != 0x221048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A700_0x17a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221048u; }
        if (ctx->pc != 0x221048u) { return; }
    }
    ctx->pc = 0x221048u;
    // 0x221048: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x221048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22104c: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22104Cu;
    {
        const bool branch_taken_0x22104c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x221050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22104Cu;
            // 0x221050: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22104c) {
            ctx->pc = 0x2210BCu;
            goto label_2210bc;
        }
    }
    ctx->pc = 0x221054u;
    // 0x221054: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x221054u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221058: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x221058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22105c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x22105cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x221060: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x221060u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221064: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x221064u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221068: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x221068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x22106c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x22106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x221070: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x221070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x221074: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x221074u;
    {
        const bool branch_taken_0x221074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221074u;
            // 0x221078: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221074) {
            ctx->pc = 0x221088u;
            goto label_221088;
        }
    }
    ctx->pc = 0x22107Cu;
    // 0x22107c: 0x8fb60000  lw          $s6, 0x0($sp)
    ctx->pc = 0x22107cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221080: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x221080u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221084: 0x0  nop
    ctx->pc = 0x221084u;
    // NOP
label_221088:
    // 0x221088: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x221088u;
    {
        const bool branch_taken_0x221088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221088) {
            ctx->pc = 0x221098u;
            goto label_221098;
        }
    }
    ctx->pc = 0x221090u;
    // 0x221090: 0x7a730040  lq          $s3, 0x40($s3)
    ctx->pc = 0x221090u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x221094: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x221094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_221098:
    // 0x221098: 0xc089990  jal         func_226640
    ctx->pc = 0x221098u;
    SET_GPR_U32(ctx, 31, 0x2210A0u);
    ctx->pc = 0x22109Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221098u;
            // 0x22109c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (runtime->hasFunction(0x226640u)) {
        auto targetFn = runtime->lookupFunction(0x226640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2210A0u; }
        if (ctx->pc != 0x2210A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226640_0x226680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2210A0u; }
        if (ctx->pc != 0x2210A0u) { return; }
    }
    ctx->pc = 0x2210A0u;
    // 0x2210a0: 0x7ba60020  lq          $a2, 0x20($sp)
    ctx->pc = 0x2210a0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2210a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2210a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210a8: 0x7ba70030  lq          $a3, 0x30($sp)
    ctx->pc = 0x2210a8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2210ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2210acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210b0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2210b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210b4: 0xc089e64  jal         func_227990
    ctx->pc = 0x2210B4u;
    SET_GPR_U32(ctx, 31, 0x2210BCu);
    ctx->pc = 0x2210B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2210B4u;
            // 0x2210b8: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227990u;
    if (runtime->hasFunction(0x227990u)) {
        auto targetFn = runtime->lookupFunction(0x227990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2210BCu; }
        if (ctx->pc != 0x2210BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227990_0x227990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2210BCu; }
        if (ctx->pc != 0x2210BCu) { return; }
    }
    ctx->pc = 0x2210BCu;
label_2210bc:
    // 0x2210bc: 0x27c2e848  addiu       $v0, $fp, -0x17B8
    ctx->pc = 0x2210bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961224));
    // 0x2210c0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2210c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2210c4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2210c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2210c8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2210c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2210cc: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x2210ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2210d0: 0x40f809  jalr        $v0
    ctx->pc = 0x2210D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2210D8u);
        ctx->pc = 0x2210D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2210D0u;
            // 0x2210d4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2210D8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220F48u: goto label_220f48;
            case 0x221000u: goto label_221000;
            case 0x221088u: goto label_221088;
            case 0x221098u: goto label_221098;
            case 0x2210BCu: goto label_2210bc;
            case 0x2210E0u: goto label_2210e0;
            case 0x221110u: goto label_221110;
            case 0x221114u: goto label_221114;
            case 0x221188u: goto label_221188;
            case 0x2211A4u: goto label_2211a4;
            case 0x2211A8u: goto label_2211a8;
            case 0x2211C4u: goto label_2211c4;
            case 0x2211C8u: goto label_2211c8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2210D8u; }
            if (ctx->pc != 0x2210D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2210D8u;
    // 0x2210d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2210D8u;
    {
        const bool branch_taken_0x2210d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2210DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2210D8u;
            // 0x2210dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210d8) {
            ctx->pc = 0x221114u;
            goto label_221114;
        }
    }
    ctx->pc = 0x2210E0u;
label_2210e0:
    // 0x2210e0: 0x8e370240  lw          $s7, 0x240($s1)
    ctx->pc = 0x2210e0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
    // 0x2210e4: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x2210E4u;
    {
        const bool branch_taken_0x2210e4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2210E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2210E4u;
            // 0x2210e8: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210e4) {
            ctx->pc = 0x221110u;
            goto label_221110;
        }
    }
    ctx->pc = 0x2210ECu;
    // 0x2210ec: 0x8e220234  lw          $v0, 0x234($s1)
    ctx->pc = 0x2210ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x2210f0: 0x8c635e7c  lw          $v1, 0x5E7C($v1)
    ctx->pc = 0x2210f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24188)));
    // 0x2210f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2210f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2210f8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2210f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2210fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2210fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221100: 0x8c641184  lw          $a0, 0x1184($v1)
    ctx->pc = 0x221100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4484)));
    // 0x221104: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x221104u;
    SET_GPR_U32(ctx, 31, 0x22110Cu);
    ctx->pc = 0x221108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221104u;
            // 0x221108: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22110Cu; }
        if (ctx->pc != 0x22110Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22110Cu; }
        if (ctx->pc != 0x22110Cu) { return; }
    }
    ctx->pc = 0x22110Cu;
    // 0x22110c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22110cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_221110:
    // 0x221110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x221110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_221114:
    // 0x221114: 0xc0882bc  jal         func_220AF0
    ctx->pc = 0x221114u;
    SET_GPR_U32(ctx, 31, 0x22111Cu);
    ctx->pc = 0x221118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221114u;
            // 0x221118: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220AF0u;
    if (runtime->hasFunction(0x220AF0u)) {
        auto targetFn = runtime->lookupFunction(0x220AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22111Cu; }
        if (ctx->pc != 0x22111Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220AF0_0x220af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22111Cu; }
        if (ctx->pc != 0x22111Cu) { return; }
    }
    ctx->pc = 0x22111Cu;
    // 0x22111c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22111cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221120: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x221120u;
    {
        const bool branch_taken_0x221120 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x221124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221120u;
            // 0x221124: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221120) {
            ctx->pc = 0x2211C4u;
            goto label_2211c4;
        }
    }
    ctx->pc = 0x221128u;
    // 0x221128: 0x56a2001f  bnel        $s5, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x221128u;
    {
        const bool branch_taken_0x221128 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x221128) {
            ctx->pc = 0x22112Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221128u;
            // 0x22112c: 0x8e3001a0  lw          $s0, 0x1A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2211A8u;
            goto label_2211a8;
        }
    }
    ctx->pc = 0x221130u;
    // 0x221130: 0xda2200e0  lqc2        $vf2, 0xE0($s1)
    ctx->pc = 0x221130u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x221134: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x221134u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x221138: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x221138u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x22113c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x22113cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221140: 0xc6210164  lwc1        $f1, 0x164($s1)
    ctx->pc = 0x221140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221144: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x221144u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221148: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x221148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x22114c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x22114cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x221150: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x221150u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x221154: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x221154u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221158: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x221158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x22115c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x22115cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x221160: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x221160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x221164: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x221164u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x221168: 0x46000004  c1          0x4
    ctx->pc = 0x221168u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x22116c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x22116cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x221170: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x221170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221174: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x221174u;
    {
        const bool branch_taken_0x221174 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x221174) {
            ctx->pc = 0x221188u;
            goto label_221188;
        }
    }
    ctx->pc = 0x22117Cu;
    // 0x22117c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22117Cu;
    {
        const bool branch_taken_0x22117c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22117Cu;
            // 0x221180: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22117c) {
            ctx->pc = 0x2211A4u;
            goto label_2211a4;
        }
    }
    ctx->pc = 0x221184u;
    // 0x221184: 0x0  nop
    ctx->pc = 0x221184u;
    // NOP
label_221188:
    // 0x221188: 0x3c013f2a  lui         $at, 0x3F2A
    ctx->pc = 0x221188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16170 << 16));
    // 0x22118c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x22118cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x221190: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x221190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221194: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x221194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221198: 0x0  nop
    ctx->pc = 0x221198u;
    // NOP
    // 0x22119c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x22119Cu;
    {
        const bool branch_taken_0x22119c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22119c) {
            ctx->pc = 0x2211A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22119Cu;
            // 0x2211a0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2211A4u;
            goto label_2211a4;
        }
    }
    ctx->pc = 0x2211A4u;
label_2211a4:
    // 0x2211a4: 0x8e3001a0  lw          $s0, 0x1A0($s1)
    ctx->pc = 0x2211a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_2211a8:
    // 0x2211a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2211a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211ac: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2211acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211b0: 0xc05c472  jal         func_1711C8
    ctx->pc = 0x2211B0u;
    SET_GPR_U32(ctx, 31, 0x2211B8u);
    ctx->pc = 0x2211B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2211B0u;
            // 0x2211b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1711C8u;
    if (runtime->hasFunction(0x1711C8u)) {
        auto targetFn = runtime->lookupFunction(0x1711C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2211B8u; }
        if (ctx->pc != 0x2211B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1711c8_0x1711d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2211B8u; }
        if (ctx->pc != 0x2211B8u) { return; }
    }
    ctx->pc = 0x2211B8u;
    // 0x2211b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2211b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211bc: 0xc05c294  jal         func_170A50
    ctx->pc = 0x2211BCu;
    SET_GPR_U32(ctx, 31, 0x2211C4u);
    ctx->pc = 0x2211C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2211BCu;
            // 0x2211c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2211C4u; }
        if (ctx->pc != 0x2211C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2211C4u; }
        if (ctx->pc != 0x2211C4u) { return; }
    }
    ctx->pc = 0x2211C4u;
label_2211c4:
    // 0x2211c4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2211c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2211c8:
    // 0x2211c8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2211c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2211cc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2211ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2211d0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2211d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2211d4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2211d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2211d8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2211d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2211dc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2211dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2211e0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2211e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2211e4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2211e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2211e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2211e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2211ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2211ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2211F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2211ECu;
            // 0x2211f0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220F48u: goto label_220f48;
            case 0x221000u: goto label_221000;
            case 0x221088u: goto label_221088;
            case 0x221098u: goto label_221098;
            case 0x2210BCu: goto label_2210bc;
            case 0x2210E0u: goto label_2210e0;
            case 0x221110u: goto label_221110;
            case 0x221114u: goto label_221114;
            case 0x221188u: goto label_221188;
            case 0x2211A4u: goto label_2211a4;
            case 0x2211A8u: goto label_2211a8;
            case 0x2211C4u: goto label_2211c4;
            case 0x2211C8u: goto label_2211c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2211F4u;
    // 0x2211f4: 0x0  nop
    ctx->pc = 0x2211f4u;
    // NOP
}
