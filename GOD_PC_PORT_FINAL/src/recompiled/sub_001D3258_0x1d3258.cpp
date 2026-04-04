#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D3258
// Address: 0x1d3258 - 0x1d3368
void sub_001D3258_0x1d3258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3258_0x1d3258");
#endif

    ctx->pc = 0x1d3258u;

    // 0x1d3258: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d3258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d325c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d325cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d3260: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d3260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d3264: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3268: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1d3268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d326c: 0x9605006e  lhu         $a1, 0x6E($s0)
    ctx->pc = 0x1d326cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 110)));
    // 0x1d3270: 0xc061eee  jal         func_187BB8
    ctx->pc = 0x1D3270u;
    SET_GPR_U32(ctx, 31, 0x1D3278u);
    ctx->pc = 0x1D3274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3270u;
            // 0x1d3274: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187BB8u;
    if (runtime->hasFunction(0x187BB8u)) {
        auto targetFn = runtime->lookupFunction(0x187BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3278u; }
        if (ctx->pc != 0x1D3278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187BB8_0x187bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3278u; }
        if (ctx->pc != 0x1D3278u) { return; }
    }
    ctx->pc = 0x1D3278u;
    // 0x1d3278: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1d3278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1d327c: 0x8e070054  lw          $a3, 0x54($s0)
    ctx->pc = 0x1d327cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1d3280: 0x70672389  pcpyld      $a0, $v1, $a3
    ctx->pc = 0x1d3280u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x1d3284: 0x8e10005c  lw          $s0, 0x5C($s0)
    ctx->pc = 0x1d3284u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1d3288: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d328c: 0x70f01b89  pcpyld      $v1, $a3, $s0
    ctx->pc = 0x1d328cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 16)));
    // 0x1d3290: 0x70641cc8  ppacw       $v1, $v1, $a0
    ctx->pc = 0x1d3290u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1d3294: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1d3294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x1d3298: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1d3298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x1d329c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1d329cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1d32a0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1d32a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1d32a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d32a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d32a8: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1d32a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d32ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d32acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d32b0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1d32b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d32b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D32B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D32B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D32B4u;
            // 0x1d32b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3350u: goto label_1d3350;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D32BCu;
    // 0x1d32bc: 0x0  nop
    ctx->pc = 0x1d32bcu;
    // NOP
    // 0x1d32c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d32c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d32c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d32c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d32c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d32c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d32cc: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1d32ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d32d0: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1d32d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1d32d4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d32d8: 0x8443cc9c  lh          $v1, -0x3364($v0)
    ctx->pc = 0x1d32d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954140)));
    // 0x1d32dc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1d32dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d32e0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d32e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d32e4: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x1d32e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d32e8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1d32e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d32ec: 0x24425ea8  addiu       $v0, $v0, 0x5EA8
    ctx->pc = 0x1d32ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24232));
    // 0x1d32f0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1d32f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1d32f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d32f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d32f8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1d32f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d32fc: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1d32fcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d3300: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d3300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d3304: 0x8c43cb94  lw          $v1, -0x346C($v0)
    ctx->pc = 0x1d3304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1d3308: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d3308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d330c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d330cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d3310: 0x8c84cd58  lw          $a0, -0x32A8($a0)
    ctx->pc = 0x1d3310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954328)));
    // 0x1d3314: 0x24502b20  addiu       $s0, $v0, 0x2B20
    ctx->pc = 0x1d3314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11040));
    // 0x1d3318: 0x8c6201c4  lw          $v0, 0x1C4($v1)
    ctx->pc = 0x1d3318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 452)));
    // 0x1d331c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d331cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1d3320: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d3320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d3324: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1d3324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3328: 0xc090c5c  jal         func_243170
    ctx->pc = 0x1D3328u;
    SET_GPR_U32(ctx, 31, 0x1D3330u);
    ctx->pc = 0x1D332Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3328u;
            // 0x1d332c: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x243170u;
    if (runtime->hasFunction(0x243170u)) {
        auto targetFn = runtime->lookupFunction(0x243170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3330u; }
        if (ctx->pc != 0x1D3330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243170_0x243188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3330u; }
        if (ctx->pc != 0x1D3330u) { return; }
    }
    ctx->pc = 0x1D3330u;
    // 0x1d3330: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3330u;
    {
        const bool branch_taken_0x1d3330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3330u;
            // 0x1d3334: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3330) {
            ctx->pc = 0x1D3350u;
            goto label_1d3350;
        }
    }
    ctx->pc = 0x1D3338u;
    // 0x1d3338: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1d3338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1d333c: 0x90422d3d  lbu         $v0, 0x2D3D($v0)
    ctx->pc = 0x1d333cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11581)));
    // 0x1d3340: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1d3340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d3344: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1d3344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1d3348: 0xc440fe64  lwc1        $f0, -0x19C($v0)
    ctx->pc = 0x1d3348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d334c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1d334cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1d3350:
    // 0x1d3350: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1d3350u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x1d3354: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d3354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d335c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1d335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d3360: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3360u;
            // 0x1d3364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3350u: goto label_1d3350;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3368u;
}
