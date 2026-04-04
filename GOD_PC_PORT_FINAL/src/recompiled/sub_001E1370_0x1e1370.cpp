#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1370
// Address: 0x1e1370 - 0x1e1430
void sub_001E1370_0x1e1370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1370_0x1e1370");
#endif

    ctx->pc = 0x1e1370u;

    // 0x1e1370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e1370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e1374: 0x48a61800  qmtc2.ni    $a2, $vf3
    ctx->pc = 0x1e1374u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1e1378: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e1378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e137c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e137cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e1380: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e1380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1388: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e138c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e138cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1390: 0x4be308a8  vadd.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1e1390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1394: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e1394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e1398: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e1398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e139c: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1e139cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1e13a0: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1e13a0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e13a4: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E13A4u;
    SET_GPR_U32(ctx, 31, 0x1E13ACu);
    ctx->pc = 0x1E13A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E13A4u;
            // 0x1e13a8: 0x48261000  qmfc2.ni    $a2, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E13ACu; }
        if (ctx->pc != 0x1E13ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E13ACu; }
        if (ctx->pc != 0x1E13ACu) { return; }
    }
    ctx->pc = 0x1E13ACu;
    // 0x1e13ac: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E13ACu;
    {
        const bool branch_taken_0x1e13ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E13B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E13ACu;
            // 0x1e13b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13ac) {
            ctx->pc = 0x1E1418u;
            goto label_1e1418;
        }
    }
    ctx->pc = 0x1E13B4u;
    // 0x1e13b4: 0x8e230188  lw          $v1, 0x188($s1)
    ctx->pc = 0x1e13b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x1e13b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E13B8u;
    {
        const bool branch_taken_0x1e13b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E13BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E13B8u;
            // 0x1e13bc: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13b8) {
            ctx->pc = 0x1E13D0u;
            goto label_1e13d0;
        }
    }
    ctx->pc = 0x1E13C0u;
    // 0x1e13c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e13c4: 0x8c4277b4  lw          $v0, 0x77B4($v0)
    ctx->pc = 0x1e13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30644)));
    // 0x1e13c8: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E13C8u;
    {
        const bool branch_taken_0x1e13c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E13CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E13C8u;
            // 0x1e13cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13c8) {
            ctx->pc = 0x1E1418u;
            goto label_1e1418;
        }
    }
    ctx->pc = 0x1E13D0u;
label_1e13d0:
    // 0x1e13d0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x1e13d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x1e13d4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e13d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e13d8: 0x24a577a0  addiu       $a1, $a1, 0x77A0
    ctx->pc = 0x1e13d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30624));
    // 0x1e13dc: 0xd8a2fff0  lqc2        $vf2, -0x10($a1)
    ctx->pc = 0x1e13dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x1e13e0: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1e13e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e13e4: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x1e13e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e13e8: 0x4be310aa  vmul.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1e13e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e13ec: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e13ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e13f0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e13f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e13f4: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1e13f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e13f8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e13f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e13fc: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1e13fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1400: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e1400u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1408: 0xc07848e  jal         func_1E1238
    ctx->pc = 0x1E1408u;
    SET_GPR_U32(ctx, 31, 0x1E1410u);
    ctx->pc = 0x1E140Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1408u;
            // 0x1e140c: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1238u;
    if (runtime->hasFunction(0x1E1238u)) {
        auto targetFn = runtime->lookupFunction(0x1E1238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1410u; }
        if (ctx->pc != 0x1E1410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1238_0x1e1238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1410u; }
        if (ctx->pc != 0x1E1410u) { return; }
    }
    ctx->pc = 0x1E1410u;
    // 0x1e1410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1414: 0x0  nop
    ctx->pc = 0x1e1414u;
    // NOP
label_1e1418:
    // 0x1e1418: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e1418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e141c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e141cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1420: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1424: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1424u;
            // 0x1e1428: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E13D0u: goto label_1e13d0;
            case 0x1E1418u: goto label_1e1418;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E142Cu;
    // 0x1e142c: 0x0  nop
    ctx->pc = 0x1e142cu;
    // NOP
}
