#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CAF48
// Address: 0x1caf48 - 0x1cb188
void sub_001CAF48_0x1caf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAF48_0x1caf48");
#endif

    ctx->pc = 0x1caf48u;

    // 0x1caf48: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1caf48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1caf4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1caf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1caf50: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1caf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1caf54: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1caf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1caf58: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1caf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1caf5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1caf5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf60: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1caf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1caf64: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x1caf64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1caf68: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1caf68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1caf6c: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1caf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x1caf70: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1caf70u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1caf74: 0x44116000  mfc1        $s1, $f12
    ctx->pc = 0x1caf74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1caf78: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1caf78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1caf7c: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1caf7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1caf80: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAF80u;
    {
        const bool branch_taken_0x1caf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CAF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF80u;
            // 0x1caf84: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf80) {
            ctx->pc = 0x1CAF90u;
            goto label_1caf90;
        }
    }
    ctx->pc = 0x1CAF88u;
    // 0x1caf88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAF88u;
    {
        const bool branch_taken_0x1caf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF88u;
            // 0x1caf8c: 0x26030020  addiu       $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf88) {
            ctx->pc = 0x1CAFACu;
            goto label_1cafac;
        }
    }
    ctx->pc = 0x1CAF90u;
label_1caf90:
    // 0x1caf90: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1caf90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1caf94: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1caf94u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1caf98: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAF98u;
    {
        const bool branch_taken_0x1caf98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CAF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF98u;
            // 0x1caf9c: 0x26030070  addiu       $v1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf98) {
            ctx->pc = 0x1CAFACu;
            goto label_1cafac;
        }
    }
    ctx->pc = 0x1CAFA0u;
    // 0x1cafa0: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CAFA0u;
    SET_GPR_U32(ctx, 31, 0x1CAFA8u);
    ctx->pc = 0x1CAFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAFA0u;
            // 0x1cafa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAFA8u; }
        if (ctx->pc != 0x1CAFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAFA8u; }
        if (ctx->pc != 0x1CAFA8u) { return; }
    }
    ctx->pc = 0x1CAFA8u;
    // 0x1cafa8: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x1cafa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1cafac:
    // 0x1cafac: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1cafacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cafb0: 0x3c10002d  lui         $s0, 0x2D
    ctx->pc = 0x1cafb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)45 << 16));
    // 0x1cafb4: 0x2610b950  addiu       $s0, $s0, -0x46B0
    ctx->pc = 0x1cafb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949200));
    // 0x1cafb8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1cafb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1cafbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cafbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cafc0: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1cafc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1cafc4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1cafc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1cafc8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1cafc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1cafcc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1cafccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1cafd0: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1cafd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1cafd4: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1CAFD4u;
    SET_GPR_U32(ctx, 31, 0x1CAFDCu);
    ctx->pc = 0x1CAFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAFD4u;
            // 0x1cafd8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAFDCu; }
        if (ctx->pc != 0x1CAFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAFDCu; }
        if (ctx->pc != 0x1CAFDCu) { return; }
    }
    ctx->pc = 0x1CAFDCu;
    // 0x1cafdc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1cafdcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1cafe0: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1CAFE0u;
    SET_GPR_U32(ctx, 31, 0x1CAFE8u);
    ctx->pc = 0x1CAFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAFE0u;
            // 0x1cafe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAFE8u; }
        if (ctx->pc != 0x1CAFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAFE8u; }
        if (ctx->pc != 0x1CAFE8u) { return; }
    }
    ctx->pc = 0x1CAFE8u;
    // 0x1cafe8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1cafe8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1cafec: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1CAFECu;
    SET_GPR_U32(ctx, 31, 0x1CAFF4u);
    ctx->pc = 0x1CAFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAFECu;
            // 0x1caff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAFF4u; }
        if (ctx->pc != 0x1CAFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAFF4u; }
        if (ctx->pc != 0x1CAFF4u) { return; }
    }
    ctx->pc = 0x1CAFF4u;
    // 0x1caff4: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x1caff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1caff8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1caff8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1caffc: 0x4406a800  mfc1        $a2, $f21
    ctx->pc = 0x1caffcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1cb000: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x1cb000u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x1cb004: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1cb004u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1cb008: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x1cb008u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x1cb00c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1cb00cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1cb010: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1cb010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1cb014: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1cb014u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1cb018: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1cb018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1cb01c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1cb01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x1cb020: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cb020u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cb024: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x1cb024u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cb028: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1cb028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1cb02c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1cb02cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1cb030: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1cb030u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1cb034: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1cb034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1cb038: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1cb038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1cb03c: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1cb03cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1cb040: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1cb040u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1cb044: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cb044u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cb048: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1cb048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1cb04c: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1cb04cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cb050: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1cb050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1cb054: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x1cb054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cb058: 0x8e630174  lw          $v1, 0x174($s3)
    ctx->pc = 0x1cb058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 372)));
    // 0x1cb05c: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1cb05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1cb060: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CB060u;
    {
        const bool branch_taken_0x1cb060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB060u;
            // 0x1cb064: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb060) {
            ctx->pc = 0x1CB0A8u;
            goto label_1cb0a8;
        }
    }
    ctx->pc = 0x1CB068u;
    // 0x1cb068: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1cb068u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cb06c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cb06cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cb070: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cb070u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cb074: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1cb074u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1cb078: 0x4a0003bf  vwaitq
    ctx->pc = 0x1cb078u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1cb07c: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1cb07cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cb080: 0x4a0002ff  vnop
    ctx->pc = 0x1cb080u;
    // NOP operation, no action needed for VU0
    // 0x1cb084: 0x4a0002ff  vnop
    ctx->pc = 0x1cb084u;
    // NOP operation, no action needed for VU0
    // 0x1cb088: 0x48b11000  qmtc2.ni    $s1, $vf2
    ctx->pc = 0x1cb088u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
    // 0x1cb08c: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x1cb08cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1cb090: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1cb090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cb094: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1cb094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cb098: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1cb098u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cb09c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1CB09Cu;
    {
        const bool branch_taken_0x1cb09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB09Cu;
            // 0x1cb0a0: 0xfba10090  sqc2        $vf1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb09c) {
            ctx->pc = 0x1CB148u;
            goto label_1cb148;
        }
    }
    ctx->pc = 0x1CB0A4u;
    // 0x1cb0a4: 0x0  nop
    ctx->pc = 0x1cb0a4u;
    // NOP
label_1cb0a8:
    // 0x1cb0a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB0A8u;
    {
        const bool branch_taken_0x1cb0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB0A8u;
            // 0x1cb0ac: 0xdba20000  lqc2        $vf2, 0x0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0a8) {
            ctx->pc = 0x1CB0BCu;
            goto label_1cb0bc;
        }
    }
    ctx->pc = 0x1CB0B0u;
    // 0x1cb0b0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1cb0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1cb0b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CB0B4u;
    {
        const bool branch_taken_0x1cb0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb0b4) {
            ctx->pc = 0x1CB100u;
            goto label_1cb100;
        }
    }
    ctx->pc = 0x1CB0BCu;
label_1cb0bc:
    // 0x1cb0bc: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x1cb0bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cb0c0: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1cb0c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb0c4: 0x4be30859  vmuly.xyzw  $vf1, $vf1, $vf3y
    ctx->pc = 0x1cb0c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cb0c8: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1cb0c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cb0cc: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1cb0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cb0d0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1cb0d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cb0d4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1cb0d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cb0d8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1cb0d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cb0dc: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1cb0dcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1cb0e0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1cb0e0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1cb0e4: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1cb0e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cb0e8: 0x4a0002ff  vnop
    ctx->pc = 0x1cb0e8u;
    // NOP operation, no action needed for VU0
    // 0x1cb0ec: 0x4a0002ff  vnop
    ctx->pc = 0x1cb0ecu;
    // NOP operation, no action needed for VU0
    // 0x1cb0f0: 0x48b11800  qmtc2.ni    $s1, $vf3
    ctx->pc = 0x1cb0f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
    // 0x1cb0f4: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x1cb0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cb0f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CB0F8u;
    {
        const bool branch_taken_0x1cb0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB0F8u;
            // 0x1cb0fc: 0xfba200c0  sqc2        $vf2, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0f8) {
            ctx->pc = 0x1CB140u;
            goto label_1cb140;
        }
    }
    ctx->pc = 0x1CB100u;
label_1cb100:
    // 0x1cb100: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x1cb100u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cb104: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1cb104u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb108: 0x4be3085a  vmulz.xyzw  $vf1, $vf1, $vf3z
    ctx->pc = 0x1cb108u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cb10c: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1cb10cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cb110: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1cb110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cb114: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1cb114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cb118: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1cb118u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cb11c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1cb11cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cb120: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1cb120u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1cb124: 0x4a0003bf  vwaitq
    ctx->pc = 0x1cb124u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1cb128: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1cb128u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cb12c: 0x4a0002ff  vnop
    ctx->pc = 0x1cb12cu;
    // NOP operation, no action needed for VU0
    // 0x1cb130: 0x4a0002ff  vnop
    ctx->pc = 0x1cb130u;
    // NOP operation, no action needed for VU0
    // 0x1cb134: 0x48b11800  qmtc2.ni    $s1, $vf3
    ctx->pc = 0x1cb134u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
    // 0x1cb138: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1cb138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cb13c: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1cb13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
label_1cb140:
    // 0x1cb140: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x1cb140u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cb144: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1cb144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
label_1cb148:
    // 0x1cb148: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x1cb148u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cb14c: 0x70021f89  pexew       $v1, $v0
    ctx->pc = 0x1cb14cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1cb150: 0xae43005c  sw          $v1, 0x5C($s2)
    ctx->pc = 0x1cb150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 3));
    // 0x1cb154: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1cb154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1cb158: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x1cb158u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1cb15c: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1cb15cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1cb160: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1cb160u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1cb164: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x1cb164u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
    // 0x1cb168: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1cb168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1cb16c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1cb16cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1cb170: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1cb170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1cb174: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x1cb174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cb178: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1cb178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cb17c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB17Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB17Cu;
            // 0x1cb180: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CAF90u: goto label_1caf90;
            case 0x1CAFACu: goto label_1cafac;
            case 0x1CB0A8u: goto label_1cb0a8;
            case 0x1CB0BCu: goto label_1cb0bc;
            case 0x1CB100u: goto label_1cb100;
            case 0x1CB140u: goto label_1cb140;
            case 0x1CB148u: goto label_1cb148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CB184u;
    // 0x1cb184: 0x0  nop
    ctx->pc = 0x1cb184u;
    // NOP
}
