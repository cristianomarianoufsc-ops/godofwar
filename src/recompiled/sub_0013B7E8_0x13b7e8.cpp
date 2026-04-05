#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013B7E8
// Address: 0x13b7e8 - 0x13c3c0
void sub_0013B7E8_0x13b7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B7E8_0x13b7e8");
#endif

    ctx->pc = 0x13b7e8u;

label_13b7e8:
    // 0x13b7e8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x13b7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x13b7ec: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13b7f0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x13b7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x13b7f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b7f8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x13b7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x13b7fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13b7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b800: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x13b800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x13b804: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13b804u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b808: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x13b808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x13b80c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x13b80cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b810: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x13b810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x13b814: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x13b814u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b818: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x13b818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x13b81c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x13b81cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b820: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x13b820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x13b824: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x13b824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x13b828: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x13b828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x13b82c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13b82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13b830: 0x8ea4003c  lw          $a0, 0x3C($s5)
    ctx->pc = 0x13b830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x13b834: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x13b834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x13b838: 0x1880016b  blez        $a0, . + 4 + (0x16B << 2)
    ctx->pc = 0x13B838u;
    {
        const bool branch_taken_0x13b838 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13B83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B838u;
            // 0x13b83c: 0xafa70020  sw          $a3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b838) {
            ctx->pc = 0x13BDE8u;
            goto label_13bde8;
        }
    }
    ctx->pc = 0x13B840u;
    // 0x13b840: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13b840u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b844: 0x0  nop
    ctx->pc = 0x13b844u;
    // NOP
label_13b848:
    // 0x13b848: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x13b848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x13b84c: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x13b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x13b850: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x13b850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x13b854: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13b854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13b858: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x13b858u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13b85c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x13b85cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b860: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x13b860u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13b864: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13b864u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13b868: 0x48232000  qmfc2.ni    $v1, $vf4
    ctx->pc = 0x13b868u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13b86c: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x13b86cu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13b870: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x13b870u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x13b874: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x13b874u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x13b878: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x13b878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13b87c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13b87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13b880: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13b880u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x13b884: 0x14400155  bnez        $v0, . + 4 + (0x155 << 2)
    ctx->pc = 0x13B884u;
    {
        const bool branch_taken_0x13b884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B884u;
            // 0x13b888: 0x26e20001  addiu       $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b884) {
            ctx->pc = 0x13BDDCu;
            goto label_13bddc;
        }
    }
    ctx->pc = 0x13B88Cu;
    // 0x13b88c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x13b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x13b890: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13b890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b894: 0x18400150  blez        $v0, . + 4 + (0x150 << 2)
    ctx->pc = 0x13B894u;
    {
        const bool branch_taken_0x13b894 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13B898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B894u;
            // 0x13b898: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b894) {
            ctx->pc = 0x13BDD8u;
            goto label_13bdd8;
        }
    }
    ctx->pc = 0x13B89Cu;
    // 0x13b89c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13b89cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13b8a0:
    // 0x13b8a0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x13b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x13b8a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b8a8: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x13b8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13b8ac: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x13b8acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13b8b0: 0x14430066  bne         $v0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x13B8B0u;
    {
        const bool branch_taken_0x13b8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13B8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B8B0u;
            // 0x13b8b4: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b8b0) {
            ctx->pc = 0x13BA4Cu;
            goto label_13ba4c;
        }
    }
    ctx->pc = 0x13B8B8u;
    // 0x13b8b8: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x13b8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x13b8bc: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13b8c0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x13b8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13b8c4: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x13b8c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13b8c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13b8cc: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x13b8ccu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13b8d0: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x13b8d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13b8d4: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x13b8d4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b8d8: 0x70c510a8  pceqw       $v0, $a2, $a1
    ctx->pc = 0x13b8d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x13b8dc: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x13b8dcu;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x13b8e0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x13b8e0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x13b8e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x13b8e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13b8e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13b8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13b8ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13b8ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x13b8f0: 0x14400136  bnez        $v0, . + 4 + (0x136 << 2)
    ctx->pc = 0x13B8F0u;
    {
        const bool branch_taken_0x13b8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B8F0u;
            // 0x13b8f4: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b8f0) {
            ctx->pc = 0x13BDCCu;
            goto label_13bdcc;
        }
    }
    ctx->pc = 0x13B8F8u;
    // 0x13b8f8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x13b8f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x13b8fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13b8fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b900: 0x4a222043  vaddw.w     $vf1, $vf4, $vf2w
    ctx->pc = 0x13b900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13b904: 0x48242000  qmfc2.ni    $a0, $vf4
    ctx->pc = 0x13b904u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13b908: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x13b908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13b90c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x13b90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13b910: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13b910u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13b914: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13b914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13b918: 0xc04f4ca  jal         func_13D328
    ctx->pc = 0x13B918u;
    SET_GPR_U32(ctx, 31, 0x13B920u);
    ctx->pc = 0x13D328u;
    if (runtime->hasFunction(0x13D328u)) {
        auto targetFn = runtime->lookupFunction(0x13D328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B920u; }
        if (ctx->pc != 0x13B920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13d328_0x13d458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B920u; }
        if (ctx->pc != 0x13B920u) { return; }
    }
    ctx->pc = 0x13B920u;
    // 0x13b920: 0x10400129  beqz        $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x13B920u;
    {
        const bool branch_taken_0x13b920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B920u;
            // 0x13b924: 0xdba40030  lqc2        $vf4, 0x30($sp) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b920) {
            ctx->pc = 0x13BDC8u;
            goto label_13bdc8;
        }
    }
    ctx->pc = 0x13B928u;
    // 0x13b928: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x13b928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x13b92c: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x13b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x13b930: 0xc44077b0  lwc1        $f0, 0x77B0($v0)
    ctx->pc = 0x13b930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 30640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b934: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x13b934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b938: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x13b938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x13b93c: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x13b93cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x13b940: 0xa7a2000a  sh          $v0, 0xA($sp)
    ctx->pc = 0x13b940u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x13b944: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x13b944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13b948: 0xa7b70004  sh          $s7, 0x4($sp)
    ctx->pc = 0x13b948u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 23));
    // 0x13b94c: 0xa7b20006  sh          $s2, 0x6($sp)
    ctx->pc = 0x13b94cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 18));
    // 0x13b950: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x13b950u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x13b954: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x13b954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x13b958: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x13b958u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x13b95c: 0x25260010  addiu       $a2, $t1, 0x10
    ctx->pc = 0x13b95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13b960: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b960u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x13b964: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x13b964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13b968: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x13b968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b96c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13b970: 0x52043  sra         $a0, $a1, 1
    ctx->pc = 0x13b970u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 1));
    // 0x13b974: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x13b974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13b978: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x13b978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13b97c: 0x6baa000f  ldl         $t2, 0xF($sp)
    ctx->pc = 0x13b97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x13b980: 0x6faa0008  ldr         $t2, 0x8($sp)
    ctx->pc = 0x13b980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x13b984: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x13b984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b988: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x13b988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b98c: 0xb04a000f  sdl         $t2, 0xF($v0)
    ctx->pc = 0x13b98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b990: 0x1880010a  blez        $a0, . + 4 + (0x10A << 2)
    ctx->pc = 0x13B990u;
    {
        const bool branch_taken_0x13b990 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13B994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B990u;
            // 0x13b994: 0xb44a0008  sdr         $t2, 0x8($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b990) {
            ctx->pc = 0x13BDBCu;
            goto label_13bdbc;
        }
    }
    ctx->pc = 0x13B998u;
    // 0x13b998: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x13b998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13b99c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13b9a0: 0x884d0003  lwl         $t5, 0x3($v0)
    ctx->pc = 0x13b9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 13) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 13, (int32_t)merged); }
    // 0x13b9a4: 0x984d0000  lwr         $t5, 0x0($v0)
    ctx->pc = 0x13b9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x13b9a8: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x13b9a8u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b9ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13b9acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b9b0: 0x0  nop
    ctx->pc = 0x13b9b0u;
    // NOP
    // 0x13b9b4: 0x45010102  bc1t        . + 4 + (0x102 << 2)
    ctx->pc = 0x13B9B4u;
    {
        const bool branch_taken_0x13b9b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B9B4u;
            // 0x13b9b8: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9b4) {
            ctx->pc = 0x13BDC0u;
            goto label_13bdc0;
        }
    }
    ctx->pc = 0x13B9BCu;
    // 0x13b9bc: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x13b9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13b9c0: 0x25260010  addiu       $a2, $t1, 0x10
    ctx->pc = 0x13b9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13b9c4: 0x0  nop
    ctx->pc = 0x13b9c4u;
    // NOP
label_13b9c8:
    // 0x13b9c8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x13b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13b9cc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x13b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13b9d0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13b9d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13b9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9d8: 0x684e0007  ldl         $t6, 0x7($v0)
    ctx->pc = 0x13b9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x13b9dc: 0x6c4e0000  ldr         $t6, 0x0($v0)
    ctx->pc = 0x13b9dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x13b9e0: 0x684a000f  ldl         $t2, 0xF($v0)
    ctx->pc = 0x13b9e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x13b9e4: 0x6c4a0008  ldr         $t2, 0x8($v0)
    ctx->pc = 0x13b9e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x13b9e8: 0xb06e0007  sdl         $t6, 0x7($v1)
    ctx->pc = 0x13b9e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b9ec: 0xb46e0000  sdr         $t6, 0x0($v1)
    ctx->pc = 0x13b9ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b9f0: 0xb06a000f  sdl         $t2, 0xF($v1)
    ctx->pc = 0x13b9f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b9f4: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x13b9f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x13b9f8: 0xb46a0008  sdr         $t2, 0x8($v1)
    ctx->pc = 0x13b9f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b9fc: 0x690d0007  ldl         $t5, 0x7($t0)
    ctx->pc = 0x13b9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x13ba00: 0x6d0d0000  ldr         $t5, 0x0($t0)
    ctx->pc = 0x13ba00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x13ba04: 0x690e000f  ldl         $t6, 0xF($t0)
    ctx->pc = 0x13ba04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x13ba08: 0x6d0e0008  ldr         $t6, 0x8($t0)
    ctx->pc = 0x13ba08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x13ba0c: 0xb04d0007  sdl         $t5, 0x7($v0)
    ctx->pc = 0x13ba0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ba10: 0xb44d0000  sdr         $t5, 0x0($v0)
    ctx->pc = 0x13ba10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ba14: 0xb04e000f  sdl         $t6, 0xF($v0)
    ctx->pc = 0x13ba14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ba18: 0x188000e8  blez        $a0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x13BA18u;
    {
        const bool branch_taken_0x13ba18 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13BA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA18u;
            // 0x13ba1c: 0xb44e0008  sdr         $t6, 0x8($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba18) {
            ctx->pc = 0x13BDBCu;
            goto label_13bdbc;
        }
    }
    ctx->pc = 0x13BA20u;
    // 0x13ba20: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x13ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13ba24: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13ba28: 0x884b0003  lwl         $t3, 0x3($v0)
    ctx->pc = 0x13ba28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 11) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 11, (int32_t)merged); }
    // 0x13ba2c: 0x984b0000  lwr         $t3, 0x0($v0)
    ctx->pc = 0x13ba2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
    // 0x13ba30: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x13ba30u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ba34: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13ba34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ba38: 0x0  nop
    ctx->pc = 0x13ba38u;
    // NOP
    // 0x13ba3c: 0x4500ffe2  bc1f        . + 4 + (-0x1E << 2)
    ctx->pc = 0x13BA3Cu;
    {
        const bool branch_taken_0x13ba3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA3Cu;
            // 0x13ba40: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba3c) {
            ctx->pc = 0x13B9C8u;
            runtime->cooperativeGuestYield();
            goto label_13b9c8;
        }
    }
    ctx->pc = 0x13BA44u;
    // 0x13ba44: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x13BA44u;
    {
        const bool branch_taken_0x13ba44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA44u;
            // 0x13ba48: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba44) {
            ctx->pc = 0x13BDC0u;
            goto label_13bdc0;
        }
    }
    ctx->pc = 0x13BA4Cu;
label_13ba4c:
    // 0x13ba4c: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x13ba4cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13ba50: 0xc44416a4  lwc1        $f4, 0x16A4($v0)
    ctx->pc = 0x13ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13ba54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13ba54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba58: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x13ba58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x13ba5c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13ba5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13ba60: 0x10c0004f  beqz        $a2, . + 4 + (0x4F << 2)
    ctx->pc = 0x13BA60u;
    {
        const bool branch_taken_0x13ba60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA60u;
            // 0x13ba64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba60) {
            ctx->pc = 0x13BBA0u;
            goto label_13bba0;
        }
    }
    ctx->pc = 0x13BA68u;
    // 0x13ba68: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x13ba68u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x13ba6c: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x13ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_13ba70:
    // 0x13ba70: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ba74: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x13ba74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13ba78: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13ba7c: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x13ba7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13ba80: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13ba80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ba84: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x13ba84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13ba88: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13ba88u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13ba8c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x13ba8cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13ba90: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x13ba90u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13ba94: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x13ba94u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x13ba98: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x13ba98u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x13ba9c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x13ba9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13baa0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13baa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13baa4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13baa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x13baa8: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x13BAA8u;
    {
        const bool branch_taken_0x13baa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13baa8) {
            ctx->pc = 0x13BAACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BAA8u;
            // 0x13baac: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BB94u;
            goto label_13bb94;
        }
    }
    ctx->pc = 0x13BAB0u;
    // 0x13bab0: 0x4a241047  vsubw.w     $vf1, $vf2, $vf4w
    ctx->pc = 0x13bab0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13bab4: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x13bab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13bab8: 0x4be220aa  vmul.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x13bab8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13babc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13babcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13bac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13bac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bac4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x13bac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13bac8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13bac8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13bacc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x13baccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13bad0: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x13bad0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x13bad4: 0x4b030840  vaddx.x     $vf1, $vf1, $vf3x
    ctx->pc = 0x13bad4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13bad8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x13bad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13badc: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x13badcu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13bae0: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x13bae0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13bae4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x13bae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bae8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x13BAE8u;
    {
        const bool branch_taken_0x13bae8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bae8) {
            ctx->pc = 0x13BB30u;
            goto label_13bb30;
        }
    }
    ctx->pc = 0x13BAF0u;
    // 0x13baf0: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x13baf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13baf4: 0x0  nop
    ctx->pc = 0x13baf4u;
    // NOP
    // 0x13baf8: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x13BAF8u;
    {
        const bool branch_taken_0x13baf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BAF8u;
            // 0x13bafc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13baf8) {
            ctx->pc = 0x13BB90u;
            goto label_13bb90;
        }
    }
    ctx->pc = 0x13BB00u;
    // 0x13bb00: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x13bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x13bb04: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x13bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x13bb08: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x13bb08u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13bb0c: 0x46000906  mov.s       $f4, $f1
    ctx->pc = 0x13bb0cu;
    ctx->f[4] = FPU_MOV_S(ctx->f[1]);
    // 0x13bb10: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x13bb10u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x13bb14: 0xa7a4000e  sh          $a0, 0xE($sp)
    ctx->pc = 0x13bb14u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x13bb18: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x13bb18u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13bb1c: 0xa7b70004  sh          $s7, 0x4($sp)
    ctx->pc = 0x13bb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 23));
    // 0x13bb20: 0xa7b20006  sh          $s2, 0x6($sp)
    ctx->pc = 0x13bb20u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 18));
    // 0x13bb24: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x13BB24u;
    {
        const bool branch_taken_0x13bb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB24u;
            // 0x13bb28: 0xa7a2000a  sh          $v0, 0xA($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb24) {
            ctx->pc = 0x13BB90u;
            goto label_13bb90;
        }
    }
    ctx->pc = 0x13BB2Cu;
    // 0x13bb2c: 0x0  nop
    ctx->pc = 0x13bb2cu;
    // NOP
label_13bb30:
    // 0x13bb30: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x13bb30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13bb34: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x13bb34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13bb38: 0x4b030840  vaddx.x     $vf1, $vf1, $vf3x
    ctx->pc = 0x13bb38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13bb3c: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x13bb3cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13bb40: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x13bb40u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bb44: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x13bb44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bb48: 0x0  nop
    ctx->pc = 0x13bb48u;
    // NOP
    // 0x13bb4c: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
    ctx->pc = 0x13BB4Cu;
    {
        const bool branch_taken_0x13bb4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bb4c) {
            ctx->pc = 0x13BB50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB4Cu;
            // 0x13bb50: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BB94u;
            goto label_13bb94;
        }
    }
    ctx->pc = 0x13BB54u;
    // 0x13bb54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13bb54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13bb58: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x13bb58u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x13bb5c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x13bb5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bb60: 0x0  nop
    ctx->pc = 0x13bb60u;
    // NOP
    // 0x13bb64: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x13BB64u;
    {
        const bool branch_taken_0x13bb64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB64u;
            // 0x13bb68: 0x2624ffff  addiu       $a0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb64) {
            ctx->pc = 0x13BB90u;
            goto label_13bb90;
        }
    }
    ctx->pc = 0x13BB6Cu;
    // 0x13bb6c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x13bb6cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x13bb70: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x13bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13bb74: 0x26c2ffff  addiu       $v0, $s6, -0x1
    ctx->pc = 0x13bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x13bb78: 0xa7a20008  sh          $v0, 0x8($sp)
    ctx->pc = 0x13bb78u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x13bb7c: 0xa7a3000e  sh          $v1, 0xE($sp)
    ctx->pc = 0x13bb7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x13bb80: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x13bb80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13bb84: 0xa7b70004  sh          $s7, 0x4($sp)
    ctx->pc = 0x13bb84u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 23));
    // 0x13bb88: 0xa7b20006  sh          $s2, 0x6($sp)
    ctx->pc = 0x13bb88u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 18));
    // 0x13bb8c: 0xa7a4000a  sh          $a0, 0xA($sp)
    ctx->pc = 0x13bb8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 4));
label_13bb90:
    // 0x13bb90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13bb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_13bb94:
    // 0x13bb94: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x13bb94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x13bb98: 0x5440ffb5  bnel        $v0, $zero, . + 4 + (-0x4B << 2)
    ctx->pc = 0x13BB98u;
    {
        const bool branch_taken_0x13bb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bb98) {
            ctx->pc = 0x13BB9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB98u;
            // 0x13bb9c: 0x8e04008c  lw          $a0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BA70u;
            runtime->cooperativeGuestYield();
            goto label_13ba70;
        }
    }
    ctx->pc = 0x13BBA0u;
label_13bba0:
    // 0x13bba0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13bba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bba4: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x13bba4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bba8: 0x0  nop
    ctx->pc = 0x13bba8u;
    // NOP
    // 0x13bbac: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x13BBACu;
    {
        const bool branch_taken_0x13bbac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BBACu;
            // 0x13bbb0: 0x3c070033  lui         $a3, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bbac) {
            ctx->pc = 0x13BCB0u;
            goto label_13bcb0;
        }
    }
    ctx->pc = 0x13BBB4u;
    // 0x13bbb4: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x13bbb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbb8: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x13bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x13bbbc: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x13bbbcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x13bbc0: 0x25460010  addiu       $a2, $t2, 0x10
    ctx->pc = 0x13bbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x13bbc4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x13bbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bbc8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x13bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13bbcc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x13bbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbd0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13bbd4: 0x52043  sra         $a0, $a1, 1
    ctx->pc = 0x13bbd4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 1));
    // 0x13bbd8: 0x6bab0007  ldl         $t3, 0x7($sp)
    ctx->pc = 0x13bbd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x13bbdc: 0x6fab0000  ldr         $t3, 0x0($sp)
    ctx->pc = 0x13bbdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x13bbe0: 0x6bac000f  ldl         $t4, 0xF($sp)
    ctx->pc = 0x13bbe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x13bbe4: 0x6fac0008  ldr         $t4, 0x8($sp)
    ctx->pc = 0x13bbe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x13bbe8: 0xb04b0007  sdl         $t3, 0x7($v0)
    ctx->pc = 0x13bbe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bbec: 0xb44b0000  sdr         $t3, 0x0($v0)
    ctx->pc = 0x13bbecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bbf0: 0xb04c000f  sdl         $t4, 0xF($v0)
    ctx->pc = 0x13bbf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bbf4: 0x1880002b  blez        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x13BBF4u;
    {
        const bool branch_taken_0x13bbf4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13BBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BBF4u;
            // 0x13bbf8: 0xb44c0008  sdr         $t4, 0x8($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bbf4) {
            ctx->pc = 0x13BCA4u;
            goto label_13bca4;
        }
    }
    ctx->pc = 0x13BBFCu;
    // 0x13bbfc: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x13bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13bc00: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13bc04: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x13bc04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x13bc08: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x13bc08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x13bc0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13bc0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bc10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13bc10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bc14: 0x0  nop
    ctx->pc = 0x13bc14u;
    // NOP
    // 0x13bc18: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x13BC18u;
    {
        const bool branch_taken_0x13bc18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC18u;
            // 0x13bc1c: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc18) {
            ctx->pc = 0x13BCA8u;
            goto label_13bca8;
        }
    }
    ctx->pc = 0x13BC20u;
    // 0x13bc20: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x13bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13bc24: 0x25460010  addiu       $a2, $t2, 0x10
    ctx->pc = 0x13bc24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_13bc28:
    // 0x13bc28: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x13bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13bc2c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x13bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13bc30: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13bc34: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13bc34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc38: 0x684b0007  ldl         $t3, 0x7($v0)
    ctx->pc = 0x13bc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x13bc3c: 0x6c4b0000  ldr         $t3, 0x0($v0)
    ctx->pc = 0x13bc3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x13bc40: 0x684c000f  ldl         $t4, 0xF($v0)
    ctx->pc = 0x13bc40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x13bc44: 0x6c4c0008  ldr         $t4, 0x8($v0)
    ctx->pc = 0x13bc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x13bc48: 0xb06b0007  sdl         $t3, 0x7($v1)
    ctx->pc = 0x13bc48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bc4c: 0xb46b0000  sdr         $t3, 0x0($v1)
    ctx->pc = 0x13bc4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bc50: 0xb06c000f  sdl         $t4, 0xF($v1)
    ctx->pc = 0x13bc50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bc54: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x13bc54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x13bc58: 0xb46c0008  sdr         $t4, 0x8($v1)
    ctx->pc = 0x13bc58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bc5c: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x13bc5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13bc60: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x13bc60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13bc64: 0x692b000f  ldl         $t3, 0xF($t1)
    ctx->pc = 0x13bc64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x13bc68: 0x6d2b0008  ldr         $t3, 0x8($t1)
    ctx->pc = 0x13bc68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x13bc6c: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x13bc6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bc70: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x13bc70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bc74: 0xb04b000f  sdl         $t3, 0xF($v0)
    ctx->pc = 0x13bc74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bc78: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x13BC78u;
    {
        const bool branch_taken_0x13bc78 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13BC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC78u;
            // 0x13bc7c: 0xb44b0008  sdr         $t3, 0x8($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc78) {
            ctx->pc = 0x13BCA4u;
            goto label_13bca4;
        }
    }
    ctx->pc = 0x13BC80u;
    // 0x13bc80: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x13bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13bc84: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13bc88: 0x884e0003  lwl         $t6, 0x3($v0)
    ctx->pc = 0x13bc88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 14) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 14, (int32_t)merged); }
    // 0x13bc8c: 0x984e0000  lwr         $t6, 0x0($v0)
    ctx->pc = 0x13bc8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 14) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 14) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 14, merged64); }
    // 0x13bc90: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x13bc90u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bc94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13bc94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bc98: 0x0  nop
    ctx->pc = 0x13bc98u;
    // NOP
    // 0x13bc9c: 0x4500ffe2  bc1f        . + 4 + (-0x1E << 2)
    ctx->pc = 0x13BC9Cu;
    {
        const bool branch_taken_0x13bc9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC9Cu;
            // 0x13bca0: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc9c) {
            ctx->pc = 0x13BC28u;
            runtime->cooperativeGuestYield();
            goto label_13bc28;
        }
    }
    ctx->pc = 0x13BCA4u;
label_13bca4:
    // 0x13bca4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x13bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_13bca8:
    // 0x13bca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13bcac: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x13bcacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_13bcb0:
    // 0x13bcb0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x13bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x13bcb4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13bcb8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13bcb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bcbc: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x13bcbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13bcc0: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x13BCC0u;
    {
        const bool branch_taken_0x13bcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BCC0u;
            // 0x13bcc4: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bcc0) {
            ctx->pc = 0x13BDCCu;
            goto label_13bdcc;
        }
    }
    ctx->pc = 0x13BCC8u;
    // 0x13bcc8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x13bcc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bccc: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x13bcccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x13bcd0: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x13bcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x13bcd4: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x13bcd4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x13bcd8: 0x25260010  addiu       $a2, $t1, 0x10
    ctx->pc = 0x13bcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13bcdc: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x13bcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bce0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x13bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13bce4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x13bce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bce8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13bcec: 0x52043  sra         $a0, $a1, 1
    ctx->pc = 0x13bcecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 1));
    // 0x13bcf0: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x13bcf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13bcf4: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x13bcf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13bcf8: 0x6baa000f  ldl         $t2, 0xF($sp)
    ctx->pc = 0x13bcf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x13bcfc: 0x6faa0008  ldr         $t2, 0x8($sp)
    ctx->pc = 0x13bcfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x13bd00: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x13bd00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bd04: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x13bd04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bd08: 0xb04a000f  sdl         $t2, 0xF($v0)
    ctx->pc = 0x13bd08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bd0c: 0x1880002b  blez        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x13BD0Cu;
    {
        const bool branch_taken_0x13bd0c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13BD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BD0Cu;
            // 0x13bd10: 0xb44a0008  sdr         $t2, 0x8($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd0c) {
            ctx->pc = 0x13BDBCu;
            goto label_13bdbc;
        }
    }
    ctx->pc = 0x13BD14u;
    // 0x13bd14: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x13bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13bd18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13bd1c: 0x884d0003  lwl         $t5, 0x3($v0)
    ctx->pc = 0x13bd1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 13) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 13, (int32_t)merged); }
    // 0x13bd20: 0x984d0000  lwr         $t5, 0x0($v0)
    ctx->pc = 0x13bd20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x13bd24: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x13bd24u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bd28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13bd28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bd2c: 0x0  nop
    ctx->pc = 0x13bd2cu;
    // NOP
    // 0x13bd30: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x13BD30u;
    {
        const bool branch_taken_0x13bd30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BD30u;
            // 0x13bd34: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd30) {
            ctx->pc = 0x13BDC0u;
            goto label_13bdc0;
        }
    }
    ctx->pc = 0x13BD38u;
    // 0x13bd38: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x13bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13bd3c: 0x25260010  addiu       $a2, $t1, 0x10
    ctx->pc = 0x13bd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_13bd40:
    // 0x13bd40: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x13bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13bd44: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x13bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13bd48: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13bd4c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13bd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bd50: 0x684e0007  ldl         $t6, 0x7($v0)
    ctx->pc = 0x13bd50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x13bd54: 0x6c4e0000  ldr         $t6, 0x0($v0)
    ctx->pc = 0x13bd54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x13bd58: 0x684a000f  ldl         $t2, 0xF($v0)
    ctx->pc = 0x13bd58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x13bd5c: 0x6c4a0008  ldr         $t2, 0x8($v0)
    ctx->pc = 0x13bd5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x13bd60: 0xb06e0007  sdl         $t6, 0x7($v1)
    ctx->pc = 0x13bd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bd64: 0xb46e0000  sdr         $t6, 0x0($v1)
    ctx->pc = 0x13bd64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bd68: 0xb06a000f  sdl         $t2, 0xF($v1)
    ctx->pc = 0x13bd68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bd6c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x13bd6cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x13bd70: 0xb46a0008  sdr         $t2, 0x8($v1)
    ctx->pc = 0x13bd70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bd74: 0x690d0007  ldl         $t5, 0x7($t0)
    ctx->pc = 0x13bd74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x13bd78: 0x6d0d0000  ldr         $t5, 0x0($t0)
    ctx->pc = 0x13bd78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x13bd7c: 0x690e000f  ldl         $t6, 0xF($t0)
    ctx->pc = 0x13bd7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x13bd80: 0x6d0e0008  ldr         $t6, 0x8($t0)
    ctx->pc = 0x13bd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x13bd84: 0xb04d0007  sdl         $t5, 0x7($v0)
    ctx->pc = 0x13bd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bd88: 0xb44d0000  sdr         $t5, 0x0($v0)
    ctx->pc = 0x13bd88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bd8c: 0xb04e000f  sdl         $t6, 0xF($v0)
    ctx->pc = 0x13bd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bd90: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x13BD90u;
    {
        const bool branch_taken_0x13bd90 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13BD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BD90u;
            // 0x13bd94: 0xb44e0008  sdr         $t6, 0x8($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd90) {
            ctx->pc = 0x13BDBCu;
            goto label_13bdbc;
        }
    }
    ctx->pc = 0x13BD98u;
    // 0x13bd98: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x13bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13bd9c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13bda0: 0x884b0003  lwl         $t3, 0x3($v0)
    ctx->pc = 0x13bda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 11) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 11, (int32_t)merged); }
    // 0x13bda4: 0x984b0000  lwr         $t3, 0x0($v0)
    ctx->pc = 0x13bda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
    // 0x13bda8: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x13bda8u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bdac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13bdacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bdb0: 0x0  nop
    ctx->pc = 0x13bdb0u;
    // NOP
    // 0x13bdb4: 0x4500ffe2  bc1f        . + 4 + (-0x1E << 2)
    ctx->pc = 0x13BDB4u;
    {
        const bool branch_taken_0x13bdb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BDB4u;
            // 0x13bdb8: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bdb4) {
            ctx->pc = 0x13BD40u;
            runtime->cooperativeGuestYield();
            goto label_13bd40;
        }
    }
    ctx->pc = 0x13BDBCu;
label_13bdbc:
    // 0x13bdbc: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x13bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_13bdc0:
    // 0x13bdc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13bdc4: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x13bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_13bdc8:
    // 0x13bdc8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x13bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_13bdcc:
    // 0x13bdcc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13bdccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13bdd0: 0x1660feb3  bnez        $s3, . + 4 + (-0x14D << 2)
    ctx->pc = 0x13BDD0u;
    {
        const bool branch_taken_0x13bdd0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BDD0u;
            // 0x13bdd4: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bdd0) {
            ctx->pc = 0x13B8A0u;
            runtime->cooperativeGuestYield();
            goto label_13b8a0;
        }
    }
    ctx->pc = 0x13BDD8u;
label_13bdd8:
    // 0x13bdd8: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x13bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_13bddc:
    // 0x13bddc: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x13bddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x13bde0: 0x1680fe99  bnez        $s4, . + 4 + (-0x167 << 2)
    ctx->pc = 0x13BDE0u;
    {
        const bool branch_taken_0x13bde0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BDE0u;
            // 0x13bde4: 0x3057ffff  andi        $s7, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bde0) {
            ctx->pc = 0x13B848u;
            runtime->cooperativeGuestYield();
            goto label_13b848;
        }
    }
    ctx->pc = 0x13BDE8u;
label_13bde8:
    // 0x13bde8: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x13bde8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_13bdec:
    // 0x13bdec: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x13bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x13bdf0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x13bdf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13bdf4: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x13BDF4u;
    {
        const bool branch_taken_0x13bdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BDF4u;
            // 0x13bdf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bdf4) {
            ctx->pc = 0x13BF8Cu;
            goto label_13bf8c;
        }
    }
    ctx->pc = 0x13BDFCu;
    // 0x13bdfc: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x13bdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13be00: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x13be00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x13be04: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x13be04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x13be08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13be08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13be0c: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x13be0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x13be10: 0x68cc0007  ldl         $t4, 0x7($a2)
    ctx->pc = 0x13be10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x13be14: 0x6ccc0000  ldr         $t4, 0x0($a2)
    ctx->pc = 0x13be14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x13be18: 0x68cd000f  ldl         $t5, 0xF($a2)
    ctx->pc = 0x13be18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x13be1c: 0x6ccd0008  ldr         $t5, 0x8($a2)
    ctx->pc = 0x13be1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x13be20: 0xb3ac0007  sdl         $t4, 0x7($sp)
    ctx->pc = 0x13be20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13be24: 0xb7ac0000  sdr         $t4, 0x0($sp)
    ctx->pc = 0x13be24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13be28: 0xb3ad000f  sdl         $t5, 0xF($sp)
    ctx->pc = 0x13be28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13be2c: 0xb7ad0008  sdr         $t5, 0x8($sp)
    ctx->pc = 0x13be2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13be30: 0x10820056  beq         $a0, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x13BE30u;
    {
        const bool branch_taken_0x13be30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x13BE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BE30u;
            // 0x13be34: 0x24a30020  addiu       $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be30) {
            ctx->pc = 0x13BF8Cu;
            goto label_13bf8c;
        }
    }
    ctx->pc = 0x13BE38u;
    // 0x13be38: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x13be38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x13be3c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x13be3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13be40: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x13be40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13be44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13be44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13be48: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x13be48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13be4c: 0x24ab0020  addiu       $t3, $a1, 0x20
    ctx->pc = 0x13be4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x13be50: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x13be50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x13be54: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x13be54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x13be58: 0x6869000f  ldl         $t1, 0xF($v1)
    ctx->pc = 0x13be58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x13be5c: 0x6c690008  ldr         $t1, 0x8($v1)
    ctx->pc = 0x13be5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x13be60: 0xb1680007  sdl         $t0, 0x7($t3)
    ctx->pc = 0x13be60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13be64: 0xb5680000  sdr         $t0, 0x0($t3)
    ctx->pc = 0x13be64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13be68: 0xb169000f  sdl         $t1, 0xF($t3)
    ctx->pc = 0x13be68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13be6c: 0xb5690008  sdr         $t1, 0x8($t3)
    ctx->pc = 0x13be6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13be70: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x13BE70u;
    {
        const bool branch_taken_0x13be70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BE70u;
            // 0x13be74: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be70) {
            ctx->pc = 0x13BF88u;
            goto label_13bf88;
        }
    }
    ctx->pc = 0x13BE78u;
    // 0x13be78: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x13be78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x13be7c: 0x0  nop
    ctx->pc = 0x13be7cu;
    // NOP
label_13be80:
    // 0x13be80: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x13be80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13be84: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x13be84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x13be88: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x13be88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13be8c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13BE8Cu;
    {
        const bool branch_taken_0x13be8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BE8Cu;
            // 0x13be90: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be8c) {
            ctx->pc = 0x13BED0u;
            goto label_13bed0;
        }
    }
    ctx->pc = 0x13BE94u;
    // 0x13be94: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x13be94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x13be98: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13be98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13be9c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x13be9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13bea0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13bea4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x13bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13bea8: 0x888c0003  lwl         $t4, 0x3($a0)
    ctx->pc = 0x13bea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 12) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 12, (int32_t)merged); }
    // 0x13beac: 0x988c0000  lwr         $t4, 0x0($a0)
    ctx->pc = 0x13beacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 12) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 12) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 12, merged64); }
    // 0x13beb0: 0x886d0003  lwl         $t5, 0x3($v1)
    ctx->pc = 0x13beb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 13) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 13, (int32_t)merged); }
    // 0x13beb4: 0x986d0000  lwr         $t5, 0x0($v1)
    ctx->pc = 0x13beb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x13beb8: 0x448c0800  mtc1        $t4, $f1
    ctx->pc = 0x13beb8u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13bebc: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x13bebcu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bec0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13bec0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bec4: 0x0  nop
    ctx->pc = 0x13bec4u;
    // NOP
    // 0x13bec8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13BEC8u;
    {
        const bool branch_taken_0x13bec8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BEC8u;
            // 0x13becc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bec8) {
            ctx->pc = 0x13BED8u;
            goto label_13bed8;
        }
    }
    ctx->pc = 0x13BED0u;
label_13bed0:
    // 0x13bed0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13bed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bed4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_13bed8:
    // 0x13bed8: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x13bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x13bedc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13bee0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x13bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13bee4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x13bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13bee8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13beec: 0x888e0003  lwl         $t6, 0x3($a0)
    ctx->pc = 0x13beecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 14) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 14, (int32_t)merged); }
    // 0x13bef0: 0x988e0000  lwr         $t6, 0x0($a0)
    ctx->pc = 0x13bef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 14) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 14) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 14, merged64); }
    // 0x13bef4: 0x88620003  lwl         $v0, 0x3($v1)
    ctx->pc = 0x13bef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x13bef8: 0x98620000  lwr         $v0, 0x0($v1)
    ctx->pc = 0x13bef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x13befc: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x13befcu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13bf00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13bf00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bf04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13bf04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bf08: 0x0  nop
    ctx->pc = 0x13bf08u;
    // NOP
    // 0x13bf0c: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x13BF0Cu;
    {
        const bool branch_taken_0x13bf0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF0Cu;
            // 0x13bf10: 0x8d02000c  lw          $v0, 0xC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf0c) {
            ctx->pc = 0x13BF88u;
            goto label_13bf88;
        }
    }
    ctx->pc = 0x13BF14u;
    // 0x13bf14: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x13bf14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf18: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x13bf18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x13bf1c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x13bf1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x13bf20: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x13bf20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13bf24: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x13bf24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13bf28: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x13bf28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bf2c: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x13bf2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bf30: 0xb3a6001f  sdl         $a2, 0x1F($sp)
    ctx->pc = 0x13bf30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bf34: 0xb7a60018  sdr         $a2, 0x18($sp)
    ctx->pc = 0x13bf34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bf38: 0x688a0007  ldl         $t2, 0x7($a0)
    ctx->pc = 0x13bf38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x13bf3c: 0x6c8a0000  ldr         $t2, 0x0($a0)
    ctx->pc = 0x13bf3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x13bf40: 0x688b000f  ldl         $t3, 0xF($a0)
    ctx->pc = 0x13bf40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x13bf44: 0x6c8b0008  ldr         $t3, 0x8($a0)
    ctx->pc = 0x13bf44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x13bf48: 0xb06a0007  sdl         $t2, 0x7($v1)
    ctx->pc = 0x13bf48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bf4c: 0xb46a0000  sdr         $t2, 0x0($v1)
    ctx->pc = 0x13bf4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bf50: 0xb06b000f  sdl         $t3, 0xF($v1)
    ctx->pc = 0x13bf50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bf54: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x13bf54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x13bf58: 0xb46b0008  sdr         $t3, 0x8($v1)
    ctx->pc = 0x13bf58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bf5c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x13bf5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13bf60: 0x6bae0017  ldl         $t6, 0x17($sp)
    ctx->pc = 0x13bf60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x13bf64: 0x6fae0010  ldr         $t6, 0x10($sp)
    ctx->pc = 0x13bf64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x13bf68: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x13bf68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13bf6c: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x13bf6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13bf70: 0xb08e0007  sdl         $t6, 0x7($a0)
    ctx->pc = 0x13bf70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bf74: 0xb48e0000  sdr         $t6, 0x0($a0)
    ctx->pc = 0x13bf74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bf78: 0xb083000f  sdl         $v1, 0xF($a0)
    ctx->pc = 0x13bf78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bf7c: 0xb4830008  sdr         $v1, 0x8($a0)
    ctx->pc = 0x13bf7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13bf80: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x13BF80u;
    {
        const bool branch_taken_0x13bf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF80u;
            // 0x13bf84: 0x3c080033  lui         $t0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf80) {
            ctx->pc = 0x13BE80u;
            runtime->cooperativeGuestYield();
            goto label_13be80;
        }
    }
    ctx->pc = 0x13BF88u;
label_13bf88:
    // 0x13bf88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13bf8c:
    // 0x13bf8c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13BF8Cu;
    {
        const bool branch_taken_0x13bf8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF8Cu;
            // 0x13bf90: 0x97a30006  lhu         $v1, 0x6($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf8c) {
            ctx->pc = 0x13BFECu;
            goto label_13bfec;
        }
    }
    ctx->pc = 0x13BF94u;
    // 0x13bf94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13bf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bf98: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x13bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x13bf9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13bfa0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13bfa0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bfa4: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13BFA4u;
    {
        const bool branch_taken_0x13bfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x13BFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BFA4u;
            // 0x13bfa8: 0x8fa70020  lw          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bfa4) {
            ctx->pc = 0x13BFC8u;
            goto label_13bfc8;
        }
    }
    ctx->pc = 0x13BFACu;
    // 0x13bfac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13bfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13bfb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfb4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x13bfb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfb8: 0xc04f1a8  jal         func_13C6A0
    ctx->pc = 0x13BFB8u;
    SET_GPR_U32(ctx, 31, 0x13BFC0u);
    ctx->pc = 0x13BFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BFB8u;
            // 0x13bfbc: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C6A0u;
    if (runtime->hasFunction(0x13C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x13C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BFC0u; }
        if (ctx->pc != 0x13BFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C6A0_0x13c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BFC0u; }
        if (ctx->pc != 0x13BFC0u) { return; }
    }
    ctx->pc = 0x13BFC0u;
    // 0x13bfc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13BFC0u;
    {
        const bool branch_taken_0x13bfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bfc0) {
            ctx->pc = 0x13BFDCu;
            goto label_13bfdc;
        }
    }
    ctx->pc = 0x13BFC8u;
label_13bfc8:
    // 0x13bfc8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13bfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13bfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfd0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x13bfd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfd4: 0xc04f294  jal         func_13CA50
    ctx->pc = 0x13BFD4u;
    SET_GPR_U32(ctx, 31, 0x13BFDCu);
    ctx->pc = 0x13BFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BFD4u;
            // 0x13bfd8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA50u;
    if (runtime->hasFunction(0x13CA50u)) {
        auto targetFn = runtime->lookupFunction(0x13CA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BFDCu; }
        if (ctx->pc != 0x13BFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA50_0x13ca50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BFDCu; }
        if (ctx->pc != 0x13BFDCu) { return; }
    }
    ctx->pc = 0x13BFDCu;
label_13bfdc:
    // 0x13bfdc: 0x1040ff83  beqz        $v0, . + 4 + (-0x7D << 2)
    ctx->pc = 0x13BFDCu;
    {
        const bool branch_taken_0x13bfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BFDCu;
            // 0x13bfe0: 0x3c060033  lui         $a2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bfdc) {
            ctx->pc = 0x13BDECu;
            runtime->cooperativeGuestYield();
            goto label_13bdec;
        }
    }
    ctx->pc = 0x13BFE4u;
    // 0x13bfe4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13BFE4u;
    {
        const bool branch_taken_0x13bfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BFE4u;
            // 0x13bfe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bfe4) {
            ctx->pc = 0x13BFF0u;
            goto label_13bff0;
        }
    }
    ctx->pc = 0x13BFECu;
label_13bfec:
    // 0x13bfec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13bfecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13bff0:
    // 0x13bff0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x13bff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13bff4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x13bff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13bff8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x13bff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13bffc: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x13bffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13c000: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x13c000u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13c004: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x13c004u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13c008: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x13c008u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c00c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x13c00cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c010: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x13c010u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c014: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13c014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c018: 0x3e00008  jr          $ra
    ctx->pc = 0x13C018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C018u;
            // 0x13c01c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B7E8u: goto label_13b7e8;
            case 0x13B848u: goto label_13b848;
            case 0x13B8A0u: goto label_13b8a0;
            case 0x13B9C8u: goto label_13b9c8;
            case 0x13BA4Cu: goto label_13ba4c;
            case 0x13BA70u: goto label_13ba70;
            case 0x13BB30u: goto label_13bb30;
            case 0x13BB90u: goto label_13bb90;
            case 0x13BB94u: goto label_13bb94;
            case 0x13BBA0u: goto label_13bba0;
            case 0x13BC28u: goto label_13bc28;
            case 0x13BCA4u: goto label_13bca4;
            case 0x13BCA8u: goto label_13bca8;
            case 0x13BCB0u: goto label_13bcb0;
            case 0x13BD40u: goto label_13bd40;
            case 0x13BDBCu: goto label_13bdbc;
            case 0x13BDC0u: goto label_13bdc0;
            case 0x13BDC8u: goto label_13bdc8;
            case 0x13BDCCu: goto label_13bdcc;
            case 0x13BDD8u: goto label_13bdd8;
            case 0x13BDDCu: goto label_13bddc;
            case 0x13BDE8u: goto label_13bde8;
            case 0x13BDECu: goto label_13bdec;
            case 0x13BE80u: goto label_13be80;
            case 0x13BED0u: goto label_13bed0;
            case 0x13BED8u: goto label_13bed8;
            case 0x13BF88u: goto label_13bf88;
            case 0x13BF8Cu: goto label_13bf8c;
            case 0x13BFC8u: goto label_13bfc8;
            case 0x13BFDCu: goto label_13bfdc;
            case 0x13BFECu: goto label_13bfec;
            case 0x13BFF0u: goto label_13bff0;
            case 0x13C044u: goto label_13c044;
            case 0x13C1F8u: goto label_13c1f8;
            case 0x13C200u: goto label_13c200;
            case 0x13C24Cu: goto label_13c24c;
            case 0x13C304u: goto label_13c304;
            case 0x13C308u: goto label_13c308;
            case 0x13C38Cu: goto label_13c38c;
            case 0x13C3A0u: goto label_13c3a0;
            case 0x13C3ACu: goto label_13c3ac;
            case 0x13C3B4u: goto label_13c3b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C020u;
    // 0x13c020: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x13c020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c024: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13c024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c02c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13c02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c030: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x13c030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c038: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13c038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c03c: 0xc04edfa  jal         func_13B7E8
    ctx->pc = 0x13C03Cu;
    SET_GPR_U32(ctx, 31, 0x13C044u);
    ctx->pc = 0x13C040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C03Cu;
            // 0x13c040: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7E8u;
    runtime->cooperativeGuestYield();
    goto label_13b7e8;
    ctx->pc = 0x13C044u;
label_13c044:
    // 0x13c044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c048: 0x3e00008  jr          $ra
    ctx->pc = 0x13C048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C048u;
            // 0x13c04c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B7E8u: goto label_13b7e8;
            case 0x13B848u: goto label_13b848;
            case 0x13B8A0u: goto label_13b8a0;
            case 0x13B9C8u: goto label_13b9c8;
            case 0x13BA4Cu: goto label_13ba4c;
            case 0x13BA70u: goto label_13ba70;
            case 0x13BB30u: goto label_13bb30;
            case 0x13BB90u: goto label_13bb90;
            case 0x13BB94u: goto label_13bb94;
            case 0x13BBA0u: goto label_13bba0;
            case 0x13BC28u: goto label_13bc28;
            case 0x13BCA4u: goto label_13bca4;
            case 0x13BCA8u: goto label_13bca8;
            case 0x13BCB0u: goto label_13bcb0;
            case 0x13BD40u: goto label_13bd40;
            case 0x13BDBCu: goto label_13bdbc;
            case 0x13BDC0u: goto label_13bdc0;
            case 0x13BDC8u: goto label_13bdc8;
            case 0x13BDCCu: goto label_13bdcc;
            case 0x13BDD8u: goto label_13bdd8;
            case 0x13BDDCu: goto label_13bddc;
            case 0x13BDE8u: goto label_13bde8;
            case 0x13BDECu: goto label_13bdec;
            case 0x13BE80u: goto label_13be80;
            case 0x13BED0u: goto label_13bed0;
            case 0x13BED8u: goto label_13bed8;
            case 0x13BF88u: goto label_13bf88;
            case 0x13BF8Cu: goto label_13bf8c;
            case 0x13BFC8u: goto label_13bfc8;
            case 0x13BFDCu: goto label_13bfdc;
            case 0x13BFECu: goto label_13bfec;
            case 0x13BFF0u: goto label_13bff0;
            case 0x13C044u: goto label_13c044;
            case 0x13C1F8u: goto label_13c1f8;
            case 0x13C200u: goto label_13c200;
            case 0x13C24Cu: goto label_13c24c;
            case 0x13C304u: goto label_13c304;
            case 0x13C308u: goto label_13c308;
            case 0x13C38Cu: goto label_13c38c;
            case 0x13C3A0u: goto label_13c3a0;
            case 0x13C3ACu: goto label_13c3ac;
            case 0x13C3B4u: goto label_13c3b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C050u;
    // 0x13c050: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x13c050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x13c054: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x13c054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x13c058: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x13c058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x13c05c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13c05cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c060: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x13c060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x13c064: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13c064u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c068: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x13c068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x13c06c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13c06cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c070: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x13c070u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x13c074: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x13c074u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c078: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x13c078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x13c07c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x13c07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x13c080: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x13c080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x13c084: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x13c084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x13c088: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x13c088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x13c08c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13c08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13c090: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x13c090u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x13c094: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x13c094u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x13c098: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13c098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13c09c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x13c09cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x13c0a0: 0xda420020  lqc2        $vf2, 0x20($s2)
    ctx->pc = 0x13c0a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x13c0a4: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x13c0a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13c0a8: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x13c0a8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x13c0ac: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13c0acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13c0b0: 0x27c6f170  addiu       $a2, $fp, -0xE90
    ctx->pc = 0x13c0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 4294963568));
    // 0x13c0b4: 0x6ac30007  ldl         $v1, 0x7($s6)
    ctx->pc = 0x13c0b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13c0b8: 0x6ec30000  ldr         $v1, 0x0($s6)
    ctx->pc = 0x13c0b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13c0bc: 0x6ac4000f  ldl         $a0, 0xF($s6)
    ctx->pc = 0x13c0bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13c0c0: 0x6ec40008  ldr         $a0, 0x8($s6)
    ctx->pc = 0x13c0c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13c0c4: 0x6ac50017  ldl         $a1, 0x17($s6)
    ctx->pc = 0x13c0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x13c0c8: 0x6ec50010  ldr         $a1, 0x10($s6)
    ctx->pc = 0x13c0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x13c0cc: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x13c0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c0d0: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x13c0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c0d4: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x13c0d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c0d8: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x13c0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c0dc: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x13c0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c0e0: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x13c0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c0e4: 0x6ac3001f  ldl         $v1, 0x1F($s6)
    ctx->pc = 0x13c0e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13c0e8: 0x6ec30018  ldr         $v1, 0x18($s6)
    ctx->pc = 0x13c0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13c0ec: 0x6ac40027  ldl         $a0, 0x27($s6)
    ctx->pc = 0x13c0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13c0f0: 0x6ec40020  ldr         $a0, 0x20($s6)
    ctx->pc = 0x13c0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13c0f4: 0xb0c3001f  sdl         $v1, 0x1F($a2)
    ctx->pc = 0x13c0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c0f8: 0xb4c30018  sdr         $v1, 0x18($a2)
    ctx->pc = 0x13c0f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c0fc: 0xb0c40027  sdl         $a0, 0x27($a2)
    ctx->pc = 0x13c0fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c100: 0xb4c40020  sdr         $a0, 0x20($a2)
    ctx->pc = 0x13c100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c104: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x13c104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x13c108: 0x27d7f170  addiu       $s7, $fp, -0xE90
    ctx->pc = 0x13c108u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 4294963568));
    // 0x13c10c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x13c10cu;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x13c110: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x13c110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13c114: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x13c114u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13c118: 0xaee00008  sw          $zero, 0x8($s7)
    ctx->pc = 0x13c118u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 0));
    // 0x13c11c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x13c11cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x13c120: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x13c120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13c124: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x13c124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x13c128: 0x40f809  jalr        $v0
    ctx->pc = 0x13C128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C130u);
        ctx->pc = 0x13C12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C128u;
            // 0x13c12c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13C130u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B7E8u: goto label_13b7e8;
            case 0x13B848u: goto label_13b848;
            case 0x13B8A0u: goto label_13b8a0;
            case 0x13B9C8u: goto label_13b9c8;
            case 0x13BA4Cu: goto label_13ba4c;
            case 0x13BA70u: goto label_13ba70;
            case 0x13BB30u: goto label_13bb30;
            case 0x13BB90u: goto label_13bb90;
            case 0x13BB94u: goto label_13bb94;
            case 0x13BBA0u: goto label_13bba0;
            case 0x13BC28u: goto label_13bc28;
            case 0x13BCA4u: goto label_13bca4;
            case 0x13BCA8u: goto label_13bca8;
            case 0x13BCB0u: goto label_13bcb0;
            case 0x13BD40u: goto label_13bd40;
            case 0x13BDBCu: goto label_13bdbc;
            case 0x13BDC0u: goto label_13bdc0;
            case 0x13BDC8u: goto label_13bdc8;
            case 0x13BDCCu: goto label_13bdcc;
            case 0x13BDD8u: goto label_13bdd8;
            case 0x13BDDCu: goto label_13bddc;
            case 0x13BDE8u: goto label_13bde8;
            case 0x13BDECu: goto label_13bdec;
            case 0x13BE80u: goto label_13be80;
            case 0x13BED0u: goto label_13bed0;
            case 0x13BED8u: goto label_13bed8;
            case 0x13BF88u: goto label_13bf88;
            case 0x13BF8Cu: goto label_13bf8c;
            case 0x13BFC8u: goto label_13bfc8;
            case 0x13BFDCu: goto label_13bfdc;
            case 0x13BFECu: goto label_13bfec;
            case 0x13BFF0u: goto label_13bff0;
            case 0x13C044u: goto label_13c044;
            case 0x13C1F8u: goto label_13c1f8;
            case 0x13C200u: goto label_13c200;
            case 0x13C24Cu: goto label_13c24c;
            case 0x13C304u: goto label_13c304;
            case 0x13C308u: goto label_13c308;
            case 0x13C38Cu: goto label_13c38c;
            case 0x13C3A0u: goto label_13c3a0;
            case 0x13C3ACu: goto label_13c3ac;
            case 0x13C3B4u: goto label_13c3b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13C130u; }
            if (ctx->pc != 0x13C130u) { return; }
        }
        }
    }
    ctx->pc = 0x13C130u;
    // 0x13c130: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x13c130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x13c134: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13c134u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c138: 0x24707790  addiu       $s0, $v1, 0x7790
    ctx->pc = 0x13c138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 30608));
    // 0x13c13c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x13c13cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13c140: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x13c140u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13c144: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x13c144u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13c148: 0x7a050030  lq          $a1, 0x30($s0)
    ctx->pc = 0x13c148u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x13c14c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13c14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x13c150: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x13c150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x13c154: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x13c154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x13c158: 0x12800027  beqz        $s4, . + 4 + (0x27 << 2)
    ctx->pc = 0x13C158u;
    {
        const bool branch_taken_0x13c158 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C158u;
            // 0x13c15c: 0x7fa50030  sq          $a1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c158) {
            ctx->pc = 0x13C1F8u;
            goto label_13c1f8;
        }
    }
    ctx->pc = 0x13C160u;
    // 0x13c160: 0xdaa20020  lqc2        $vf2, 0x20($s5)
    ctx->pc = 0x13c160u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x13c164: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x13c164u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13c168: 0x27c5f170  addiu       $a1, $fp, -0xE90
    ctx->pc = 0x13c168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294963568));
    // 0x13c16c: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x13c16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13c170: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x13c170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x13c174: 0x6a63000f  ldl         $v1, 0xF($s3)
    ctx->pc = 0x13c174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13c178: 0x6e630008  ldr         $v1, 0x8($s3)
    ctx->pc = 0x13c178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13c17c: 0x6a640017  ldl         $a0, 0x17($s3)
    ctx->pc = 0x13c17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13c180: 0x6e640010  ldr         $a0, 0x10($s3)
    ctx->pc = 0x13c180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13c184: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x13c184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c188: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x13c188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c18c: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x13c18cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c190: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x13c190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c194: 0xb0a40017  sdl         $a0, 0x17($a1)
    ctx->pc = 0x13c194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c198: 0xb4a40010  sdr         $a0, 0x10($a1)
    ctx->pc = 0x13c198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c19c: 0x6a62001f  ldl         $v0, 0x1F($s3)
    ctx->pc = 0x13c19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13c1a0: 0x6e620018  ldr         $v0, 0x18($s3)
    ctx->pc = 0x13c1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x13c1a4: 0x6a630027  ldl         $v1, 0x27($s3)
    ctx->pc = 0x13c1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13c1a8: 0x6e630020  ldr         $v1, 0x20($s3)
    ctx->pc = 0x13c1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13c1ac: 0xb0a2001f  sdl         $v0, 0x1F($a1)
    ctx->pc = 0x13c1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c1b0: 0xb4a20018  sdr         $v0, 0x18($a1)
    ctx->pc = 0x13c1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c1b4: 0xb0a30027  sdl         $v1, 0x27($a1)
    ctx->pc = 0x13c1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c1b8: 0xb4a30020  sdr         $v1, 0x20($a1)
    ctx->pc = 0x13c1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c1bc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x13c1bcu;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x13c1c0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13c1c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13c1c4: 0xaee00008  sw          $zero, 0x8($s7)
    ctx->pc = 0x13c1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 0));
    // 0x13c1c8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x13c1c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13c1cc: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x13c1ccu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13c1d0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x13c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13c1d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13c1d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13c1d8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x13c1d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13c1dc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x13c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x13c1e0: 0x40f809  jalr        $v0
    ctx->pc = 0x13C1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C1E8u);
        ctx->pc = 0x13C1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C1E0u;
            // 0x13c1e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13C1E8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B7E8u: goto label_13b7e8;
            case 0x13B848u: goto label_13b848;
            case 0x13B8A0u: goto label_13b8a0;
            case 0x13B9C8u: goto label_13b9c8;
            case 0x13BA4Cu: goto label_13ba4c;
            case 0x13BA70u: goto label_13ba70;
            case 0x13BB30u: goto label_13bb30;
            case 0x13BB90u: goto label_13bb90;
            case 0x13BB94u: goto label_13bb94;
            case 0x13BBA0u: goto label_13bba0;
            case 0x13BC28u: goto label_13bc28;
            case 0x13BCA4u: goto label_13bca4;
            case 0x13BCA8u: goto label_13bca8;
            case 0x13BCB0u: goto label_13bcb0;
            case 0x13BD40u: goto label_13bd40;
            case 0x13BDBCu: goto label_13bdbc;
            case 0x13BDC0u: goto label_13bdc0;
            case 0x13BDC8u: goto label_13bdc8;
            case 0x13BDCCu: goto label_13bdcc;
            case 0x13BDD8u: goto label_13bdd8;
            case 0x13BDDCu: goto label_13bddc;
            case 0x13BDE8u: goto label_13bde8;
            case 0x13BDECu: goto label_13bdec;
            case 0x13BE80u: goto label_13be80;
            case 0x13BED0u: goto label_13bed0;
            case 0x13BED8u: goto label_13bed8;
            case 0x13BF88u: goto label_13bf88;
            case 0x13BF8Cu: goto label_13bf8c;
            case 0x13BFC8u: goto label_13bfc8;
            case 0x13BFDCu: goto label_13bfdc;
            case 0x13BFECu: goto label_13bfec;
            case 0x13BFF0u: goto label_13bff0;
            case 0x13C044u: goto label_13c044;
            case 0x13C1F8u: goto label_13c1f8;
            case 0x13C200u: goto label_13c200;
            case 0x13C24Cu: goto label_13c24c;
            case 0x13C304u: goto label_13c304;
            case 0x13C308u: goto label_13c308;
            case 0x13C38Cu: goto label_13c38c;
            case 0x13C3A0u: goto label_13c3a0;
            case 0x13C3ACu: goto label_13c3ac;
            case 0x13C3B4u: goto label_13c3b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13C1E8u; }
            if (ctx->pc != 0x13C1E8u) { return; }
        }
        }
    }
    ctx->pc = 0x13C1E8u;
    // 0x13c1e8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x13c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x13c1ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13c1ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c1f0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C1F0u;
    {
        const bool branch_taken_0x13c1f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C1F0u;
            // 0x13c1f4: 0xaee30008  sw          $v1, 0x8($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c1f0) {
            ctx->pc = 0x13C200u;
            goto label_13c200;
        }
    }
    ctx->pc = 0x13C1F8u;
label_13c1f8:
    // 0x13c1f8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x13C1F8u;
    {
        const bool branch_taken_0x13c1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C1F8u;
            // 0x13c1fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c1f8) {
            ctx->pc = 0x13C308u;
            goto label_13c308;
        }
    }
    ctx->pc = 0x13C200u;
label_13c200:
    // 0x13c200: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x13c200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x13c204: 0x50c00011  beql        $a2, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x13C204u;
    {
        const bool branch_taken_0x13c204 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c204) {
            ctx->pc = 0x13C208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C204u;
            // 0x13c208: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C24Cu;
            goto label_13c24c;
        }
    }
    ctx->pc = 0x13C20Cu;
    // 0x13c20c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x13c20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c210: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13c210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13c214: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x13c214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x13c218: 0xa6000036  sh          $zero, 0x36($s0)
    ctx->pc = 0x13c218u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x13c21c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x13c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x13c220: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x13c220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x13c224: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x13c224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x13c228: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x13c228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x13c22c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x13c22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x13c230: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x13c230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x13c234: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x13c234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x13c238: 0xc0f809  jalr        $a2
    ctx->pc = 0x13C238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x13C240u);
        ctx->pc = 0x13C23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C238u;
            // 0x13c23c: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13C240u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B7E8u: goto label_13b7e8;
            case 0x13B848u: goto label_13b848;
            case 0x13B8A0u: goto label_13b8a0;
            case 0x13B9C8u: goto label_13b9c8;
            case 0x13BA4Cu: goto label_13ba4c;
            case 0x13BA70u: goto label_13ba70;
            case 0x13BB30u: goto label_13bb30;
            case 0x13BB90u: goto label_13bb90;
            case 0x13BB94u: goto label_13bb94;
            case 0x13BBA0u: goto label_13bba0;
            case 0x13BC28u: goto label_13bc28;
            case 0x13BCA4u: goto label_13bca4;
            case 0x13BCA8u: goto label_13bca8;
            case 0x13BCB0u: goto label_13bcb0;
            case 0x13BD40u: goto label_13bd40;
            case 0x13BDBCu: goto label_13bdbc;
            case 0x13BDC0u: goto label_13bdc0;
            case 0x13BDC8u: goto label_13bdc8;
            case 0x13BDCCu: goto label_13bdcc;
            case 0x13BDD8u: goto label_13bdd8;
            case 0x13BDDCu: goto label_13bddc;
            case 0x13BDE8u: goto label_13bde8;
            case 0x13BDECu: goto label_13bdec;
            case 0x13BE80u: goto label_13be80;
            case 0x13BED0u: goto label_13bed0;
            case 0x13BED8u: goto label_13bed8;
            case 0x13BF88u: goto label_13bf88;
            case 0x13BF8Cu: goto label_13bf8c;
            case 0x13BFC8u: goto label_13bfc8;
            case 0x13BFDCu: goto label_13bfdc;
            case 0x13BFECu: goto label_13bfec;
            case 0x13BFF0u: goto label_13bff0;
            case 0x13C044u: goto label_13c044;
            case 0x13C1F8u: goto label_13c1f8;
            case 0x13C200u: goto label_13c200;
            case 0x13C24Cu: goto label_13c24c;
            case 0x13C304u: goto label_13c304;
            case 0x13C308u: goto label_13c308;
            case 0x13C38Cu: goto label_13c38c;
            case 0x13C3A0u: goto label_13c3a0;
            case 0x13C3ACu: goto label_13c3ac;
            case 0x13C3B4u: goto label_13c3b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13C240u; }
            if (ctx->pc != 0x13C240u) { return; }
        }
        }
    }
    ctx->pc = 0x13C240u;
    // 0x13c240: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x13c240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x13c244: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x13c244u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13c248: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x13c248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_13c24c:
    // 0x13c24c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x13C24Cu;
    {
        const bool branch_taken_0x13c24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C24Cu;
            // 0x13c250: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c24c) {
            ctx->pc = 0x13C304u;
            goto label_13c304;
        }
    }
    ctx->pc = 0x13C254u;
    // 0x13c254: 0x27c5f170  addiu       $a1, $fp, -0xE90
    ctx->pc = 0x13c254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294963568));
    // 0x13c258: 0x6ac60007  ldl         $a2, 0x7($s6)
    ctx->pc = 0x13c258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13c25c: 0x6ec60000  ldr         $a2, 0x0($s6)
    ctx->pc = 0x13c25cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13c260: 0x6ac3000f  ldl         $v1, 0xF($s6)
    ctx->pc = 0x13c260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13c264: 0x6ec30008  ldr         $v1, 0x8($s6)
    ctx->pc = 0x13c264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13c268: 0x6ac40017  ldl         $a0, 0x17($s6)
    ctx->pc = 0x13c268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13c26c: 0x6ec40010  ldr         $a0, 0x10($s6)
    ctx->pc = 0x13c26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13c270: 0xb0a60007  sdl         $a2, 0x7($a1)
    ctx->pc = 0x13c270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c274: 0xb4a60000  sdr         $a2, 0x0($a1)
    ctx->pc = 0x13c274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c278: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x13c278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c27c: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x13c27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c280: 0xb0a40017  sdl         $a0, 0x17($a1)
    ctx->pc = 0x13c280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c284: 0xb4a40010  sdr         $a0, 0x10($a1)
    ctx->pc = 0x13c284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c288: 0x6ac6001f  ldl         $a2, 0x1F($s6)
    ctx->pc = 0x13c288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13c28c: 0x6ec60018  ldr         $a2, 0x18($s6)
    ctx->pc = 0x13c28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13c290: 0x6ac30027  ldl         $v1, 0x27($s6)
    ctx->pc = 0x13c290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13c294: 0x6ec30020  ldr         $v1, 0x20($s6)
    ctx->pc = 0x13c294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13c298: 0xb0a6001f  sdl         $a2, 0x1F($a1)
    ctx->pc = 0x13c298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c29c: 0xb4a60018  sdr         $a2, 0x18($a1)
    ctx->pc = 0x13c29cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c2a0: 0xb0a30027  sdl         $v1, 0x27($a1)
    ctx->pc = 0x13c2a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c2a4: 0xb4a30020  sdr         $v1, 0x20($a1)
    ctx->pc = 0x13c2a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c2a8: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x13c2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x13c2ac: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13c2acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c2b0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x13c2b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c2b4: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x13c2b4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c2b8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x13c2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c2bc: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x13c2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x13c2c0: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x13c2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x13c2c4: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x13c2c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x13c2c8: 0x7e040010  sq          $a0, 0x10($s0)
    ctx->pc = 0x13c2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 4));
    // 0x13c2cc: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x13c2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x13c2d0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x13c2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13c2d4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x13c2d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x13c2d8: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x13c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x13c2dc: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x13c2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x13c2e0: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x13c2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x13c2e4: 0xa6000036  sh          $zero, 0x36($s0)
    ctx->pc = 0x13c2e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x13c2e8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x13c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x13c2ec: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x13c2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x13c2f0: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x13c2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x13c2f4: 0x40f809  jalr        $v0
    ctx->pc = 0x13C2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C2FCu);
        ctx->pc = 0x13C2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C2F4u;
            // 0x13c2f8: 0xae040028  sw          $a0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13C2FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B7E8u: goto label_13b7e8;
            case 0x13B848u: goto label_13b848;
            case 0x13B8A0u: goto label_13b8a0;
            case 0x13B9C8u: goto label_13b9c8;
            case 0x13BA4Cu: goto label_13ba4c;
            case 0x13BA70u: goto label_13ba70;
            case 0x13BB30u: goto label_13bb30;
            case 0x13BB90u: goto label_13bb90;
            case 0x13BB94u: goto label_13bb94;
            case 0x13BBA0u: goto label_13bba0;
            case 0x13BC28u: goto label_13bc28;
            case 0x13BCA4u: goto label_13bca4;
            case 0x13BCA8u: goto label_13bca8;
            case 0x13BCB0u: goto label_13bcb0;
            case 0x13BD40u: goto label_13bd40;
            case 0x13BDBCu: goto label_13bdbc;
            case 0x13BDC0u: goto label_13bdc0;
            case 0x13BDC8u: goto label_13bdc8;
            case 0x13BDCCu: goto label_13bdcc;
            case 0x13BDD8u: goto label_13bdd8;
            case 0x13BDDCu: goto label_13bddc;
            case 0x13BDE8u: goto label_13bde8;
            case 0x13BDECu: goto label_13bdec;
            case 0x13BE80u: goto label_13be80;
            case 0x13BED0u: goto label_13bed0;
            case 0x13BED8u: goto label_13bed8;
            case 0x13BF88u: goto label_13bf88;
            case 0x13BF8Cu: goto label_13bf8c;
            case 0x13BFC8u: goto label_13bfc8;
            case 0x13BFDCu: goto label_13bfdc;
            case 0x13BFECu: goto label_13bfec;
            case 0x13BFF0u: goto label_13bff0;
            case 0x13C044u: goto label_13c044;
            case 0x13C1F8u: goto label_13c1f8;
            case 0x13C200u: goto label_13c200;
            case 0x13C24Cu: goto label_13c24c;
            case 0x13C304u: goto label_13c304;
            case 0x13C308u: goto label_13c308;
            case 0x13C38Cu: goto label_13c38c;
            case 0x13C3A0u: goto label_13c3a0;
            case 0x13C3ACu: goto label_13c3ac;
            case 0x13C3B4u: goto label_13c3b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13C2FCu; }
            if (ctx->pc != 0x13C2FCu) { return; }
        }
        }
    }
    ctx->pc = 0x13C2FCu;
    // 0x13c2fc: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x13c2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x13c300: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x13c300u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13c304:
    // 0x13c304: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x13c304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_13c308:
    // 0x13c308: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x13c308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13c30c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x13c30cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13c310: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x13c310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13c314: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x13c314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13c318: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x13c318u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13c31c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x13c31cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13c320: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x13c320u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c324: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x13c324u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c328: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x13c328u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c32c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13c32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c330: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x13c330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x13c334: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x13c334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13c338: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x13c338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13c33c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C33Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C33Cu;
            // 0x13c340: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B7E8u: goto label_13b7e8;
            case 0x13B848u: goto label_13b848;
            case 0x13B8A0u: goto label_13b8a0;
            case 0x13B9C8u: goto label_13b9c8;
            case 0x13BA4Cu: goto label_13ba4c;
            case 0x13BA70u: goto label_13ba70;
            case 0x13BB30u: goto label_13bb30;
            case 0x13BB90u: goto label_13bb90;
            case 0x13BB94u: goto label_13bb94;
            case 0x13BBA0u: goto label_13bba0;
            case 0x13BC28u: goto label_13bc28;
            case 0x13BCA4u: goto label_13bca4;
            case 0x13BCA8u: goto label_13bca8;
            case 0x13BCB0u: goto label_13bcb0;
            case 0x13BD40u: goto label_13bd40;
            case 0x13BDBCu: goto label_13bdbc;
            case 0x13BDC0u: goto label_13bdc0;
            case 0x13BDC8u: goto label_13bdc8;
            case 0x13BDCCu: goto label_13bdcc;
            case 0x13BDD8u: goto label_13bdd8;
            case 0x13BDDCu: goto label_13bddc;
            case 0x13BDE8u: goto label_13bde8;
            case 0x13BDECu: goto label_13bdec;
            case 0x13BE80u: goto label_13be80;
            case 0x13BED0u: goto label_13bed0;
            case 0x13BED8u: goto label_13bed8;
            case 0x13BF88u: goto label_13bf88;
            case 0x13BF8Cu: goto label_13bf8c;
            case 0x13BFC8u: goto label_13bfc8;
            case 0x13BFDCu: goto label_13bfdc;
            case 0x13BFECu: goto label_13bfec;
            case 0x13BFF0u: goto label_13bff0;
            case 0x13C044u: goto label_13c044;
            case 0x13C1F8u: goto label_13c1f8;
            case 0x13C200u: goto label_13c200;
            case 0x13C24Cu: goto label_13c24c;
            case 0x13C304u: goto label_13c304;
            case 0x13C308u: goto label_13c308;
            case 0x13C38Cu: goto label_13c38c;
            case 0x13C3A0u: goto label_13c3a0;
            case 0x13C3ACu: goto label_13c3ac;
            case 0x13C3B4u: goto label_13c3b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C344u;
    // 0x13c344: 0x0  nop
    ctx->pc = 0x13c344u;
    // NOP
    // 0x13c348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c34c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x13c34cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c354: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x13c354u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c358: 0xd9020020  lqc2        $vf2, 0x20($t0)
    ctx->pc = 0x13c358u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x13c35c: 0xd8a10020  lqc2        $vf1, 0x20($a1)
    ctx->pc = 0x13c35cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x13c360: 0x4b020083  vaddw.x     $vf2, $vf0, $vf2w
    ctx->pc = 0x13c360u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13c364: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x13c364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13c368: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x13c368u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13c36c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13c36cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13c370: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13c370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13c374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c378: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13c378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c37c: 0x0  nop
    ctx->pc = 0x13c37cu;
    // NOP
    // 0x13c380: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13C380u;
    {
        const bool branch_taken_0x13c380 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C380u;
            // 0x13c384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c380) {
            ctx->pc = 0x13C38Cu;
            goto label_13c38c;
        }
    }
    ctx->pc = 0x13C388u;
    // 0x13c388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13c388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c38c:
    // 0x13c38c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C38Cu;
    {
        const bool branch_taken_0x13c38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C38Cu;
            // 0x13c390: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c38c) {
            ctx->pc = 0x13C3A0u;
            goto label_13c3a0;
        }
    }
    ctx->pc = 0x13C394u;
    // 0x13c394: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x13c394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c398: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13C398u;
    {
        const bool branch_taken_0x13c398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C398u;
            // 0x13c39c: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c398) {
            ctx->pc = 0x13C3ACu;
            goto label_13c3ac;
        }
    }
    ctx->pc = 0x13C3A0u;
label_13c3a0:
    // 0x13c3a0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x13c3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3a4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x13c3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3a8: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x13c3a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_13c3ac:
    // 0x13c3ac: 0xc04edfa  jal         func_13B7E8
    ctx->pc = 0x13C3ACu;
    SET_GPR_U32(ctx, 31, 0x13C3B4u);
    ctx->pc = 0x13B7E8u;
    runtime->cooperativeGuestYield();
    goto label_13b7e8;
    ctx->pc = 0x13C3B4u;
label_13c3b4:
    // 0x13c3b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x13C3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C3B8u;
            // 0x13c3bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B7E8u: goto label_13b7e8;
            case 0x13B848u: goto label_13b848;
            case 0x13B8A0u: goto label_13b8a0;
            case 0x13B9C8u: goto label_13b9c8;
            case 0x13BA4Cu: goto label_13ba4c;
            case 0x13BA70u: goto label_13ba70;
            case 0x13BB30u: goto label_13bb30;
            case 0x13BB90u: goto label_13bb90;
            case 0x13BB94u: goto label_13bb94;
            case 0x13BBA0u: goto label_13bba0;
            case 0x13BC28u: goto label_13bc28;
            case 0x13BCA4u: goto label_13bca4;
            case 0x13BCA8u: goto label_13bca8;
            case 0x13BCB0u: goto label_13bcb0;
            case 0x13BD40u: goto label_13bd40;
            case 0x13BDBCu: goto label_13bdbc;
            case 0x13BDC0u: goto label_13bdc0;
            case 0x13BDC8u: goto label_13bdc8;
            case 0x13BDCCu: goto label_13bdcc;
            case 0x13BDD8u: goto label_13bdd8;
            case 0x13BDDCu: goto label_13bddc;
            case 0x13BDE8u: goto label_13bde8;
            case 0x13BDECu: goto label_13bdec;
            case 0x13BE80u: goto label_13be80;
            case 0x13BED0u: goto label_13bed0;
            case 0x13BED8u: goto label_13bed8;
            case 0x13BF88u: goto label_13bf88;
            case 0x13BF8Cu: goto label_13bf8c;
            case 0x13BFC8u: goto label_13bfc8;
            case 0x13BFDCu: goto label_13bfdc;
            case 0x13BFECu: goto label_13bfec;
            case 0x13BFF0u: goto label_13bff0;
            case 0x13C044u: goto label_13c044;
            case 0x13C1F8u: goto label_13c1f8;
            case 0x13C200u: goto label_13c200;
            case 0x13C24Cu: goto label_13c24c;
            case 0x13C304u: goto label_13c304;
            case 0x13C308u: goto label_13c308;
            case 0x13C38Cu: goto label_13c38c;
            case 0x13C3A0u: goto label_13c3a0;
            case 0x13C3ACu: goto label_13c3ac;
            case 0x13C3B4u: goto label_13c3b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C3C0u;
}
