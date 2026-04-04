#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D93B0
// Address: 0x1d93b0 - 0x1d9750
void sub_001D93B0_0x1d93b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D93B0_0x1d93b0");
#endif

    ctx->pc = 0x1d93b0u;

    // 0x1d93b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d93b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d93b4: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1d93b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1d93b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d93b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d93bc: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x1d93bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x1d93c0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D93C0u;
    {
        const bool branch_taken_0x1d93c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D93C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D93C0u;
            // 0x1d93c4: 0x7fa70020  sq          $a3, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93c0) {
            ctx->pc = 0x1D93FCu;
            goto label_1d93fc;
        }
    }
    ctx->pc = 0x1D93C8u;
    // 0x1d93c8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d93c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d93cc: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1d93ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1d93d0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1d93d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d93d4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d93d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d93d8: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1d93d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1d93dc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1d93dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d93e0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d93e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d93e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d93e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d93e8: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D93E8u;
    {
        const bool branch_taken_0x1d93e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D93ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D93E8u;
            // 0x1d93ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93e8) {
            ctx->pc = 0x1D93F4u;
            goto label_1d93f4;
        }
    }
    ctx->pc = 0x1D93F0u;
    // 0x1d93f0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d93f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d93f4:
    // 0x1d93f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D93F4u;
    {
        const bool branch_taken_0x1d93f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D93F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D93F4u;
            // 0x1d93f8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93f4) {
            ctx->pc = 0x1D9400u;
            goto label_1d9400;
        }
    }
    ctx->pc = 0x1D93FCu;
label_1d93fc:
    // 0x1d93fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d93fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9400:
    // 0x1d9400: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d9400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d9404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9408: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x1d9408u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x1d940c: 0x8c4200ec  lw          $v0, 0xEC($v0)
    ctx->pc = 0x1d940cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x1d9410: 0x40f809  jalr        $v0
    ctx->pc = 0x1D9410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9418u);
        ctx->pc = 0x1D9414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9410u;
            // 0x1d9414: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9418u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D93F4u: goto label_1d93f4;
            case 0x1D93FCu: goto label_1d93fc;
            case 0x1D9400u: goto label_1d9400;
            case 0x1D94A8u: goto label_1d94a8;
            case 0x1D94E8u: goto label_1d94e8;
            case 0x1D94ECu: goto label_1d94ec;
            case 0x1D95B8u: goto label_1d95b8;
            case 0x1D95E0u: goto label_1d95e0;
            case 0x1D9610u: goto label_1d9610;
            case 0x1D96F0u: goto label_1d96f0;
            case 0x1D970Cu: goto label_1d970c;
            case 0x1D9738u: goto label_1d9738;
            case 0x1D973Cu: goto label_1d973c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9418u; }
            if (ctx->pc != 0x1D9418u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9418u;
    // 0x1d9418: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1d9418u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d941c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1d941cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1d9420: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1d9420u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d9424: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1d9424u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9428: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1d9428u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d942c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1d942cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9430: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1d9430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9434: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1d9434u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9438: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x1d9438u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d943c: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1d943cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d9440: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1d9440u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d9444: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1d9444u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9448: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1d9448u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d944c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d944cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9450: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1d9450u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1d9454: 0x4a0003bf  vwaitq
    ctx->pc = 0x1d9454u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1d9458: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1d9458u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d945c: 0x4a0002ff  vnop
    ctx->pc = 0x1d945cu;
    // NOP operation, no action needed for VU0
    // 0x1d9460: 0x4a0002ff  vnop
    ctx->pc = 0x1d9460u;
    // NOP operation, no action needed for VU0
    // 0x1d9464: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1d9464u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d9468: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1d9468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d946c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D946Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D946Cu;
            // 0x1d9470: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D93F4u: goto label_1d93f4;
            case 0x1D93FCu: goto label_1d93fc;
            case 0x1D9400u: goto label_1d9400;
            case 0x1D94A8u: goto label_1d94a8;
            case 0x1D94E8u: goto label_1d94e8;
            case 0x1D94ECu: goto label_1d94ec;
            case 0x1D95B8u: goto label_1d95b8;
            case 0x1D95E0u: goto label_1d95e0;
            case 0x1D9610u: goto label_1d9610;
            case 0x1D96F0u: goto label_1d96f0;
            case 0x1D970Cu: goto label_1d970c;
            case 0x1D9738u: goto label_1d9738;
            case 0x1D973Cu: goto label_1d973c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D9474u;
    // 0x1d9474: 0x0  nop
    ctx->pc = 0x1d9474u;
    // NOP
    // 0x1d9478: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d9478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d947c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1d947cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1d9480: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d9480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d9484: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d9484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d9488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d948c: 0x8c4277b4  lw          $v0, 0x77B4($v0)
    ctx->pc = 0x1d948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30644)));
    // 0x1d9490: 0x8c4400fc  lw          $a0, 0xFC($v0)
    ctx->pc = 0x1d9490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1d9494: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9494u;
    {
        const bool branch_taken_0x1d9494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9494u;
            // 0x1d9498: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9494) {
            ctx->pc = 0x1D94A8u;
            goto label_1d94a8;
        }
    }
    ctx->pc = 0x1D949Cu;
    // 0x1d949c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d949cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d94a0: 0x54440001  bnel        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D94A0u;
    {
        const bool branch_taken_0x1d94a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d94a0) {
            ctx->pc = 0x1D94A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D94A0u;
            // 0x1d94a4: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D94A8u;
            goto label_1d94a8;
        }
    }
    ctx->pc = 0x1D94A8u;
label_1d94a8:
    // 0x1d94a8: 0x122000a3  beqz        $s1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x1D94A8u;
    {
        const bool branch_taken_0x1d94a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D94A8u;
            // 0x1d94ac: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94a8) {
            ctx->pc = 0x1D9738u;
            goto label_1d9738;
        }
    }
    ctx->pc = 0x1D94B0u;
    // 0x1d94b0: 0x32220007  andi        $v0, $s1, 0x7
    ctx->pc = 0x1d94b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x1d94b4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D94B4u;
    {
        const bool branch_taken_0x1d94b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D94B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D94B4u;
            // 0x1d94b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94b4) {
            ctx->pc = 0x1D94ECu;
            goto label_1d94ec;
        }
    }
    ctx->pc = 0x1D94BCu;
    // 0x1d94bc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d94bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d94c0: 0x111dc2  srl         $v1, $s1, 23
    ctx->pc = 0x1d94c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 23));
    // 0x1d94c4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1d94c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d94c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d94cc: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1d94ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1d94d0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1d94d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d94d4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d94d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d94d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d94dc: 0x14510002  bne         $v0, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D94DCu;
    {
        const bool branch_taken_0x1d94dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1D94E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D94DCu;
            // 0x1d94e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94dc) {
            ctx->pc = 0x1D94E8u;
            goto label_1d94e8;
        }
    }
    ctx->pc = 0x1D94E4u;
    // 0x1d94e4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d94e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d94e8:
    // 0x1d94e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d94e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d94ec:
    // 0x1d94ec: 0x12000092  beqz        $s0, . + 4 + (0x92 << 2)
    ctx->pc = 0x1D94ECu;
    {
        const bool branch_taken_0x1d94ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D94ECu;
            // 0x1d94f0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94ec) {
            ctx->pc = 0x1D9738u;
            goto label_1d9738;
        }
    }
    ctx->pc = 0x1D94F4u;
    // 0x1d94f4: 0xc6010178  lwc1        $f1, 0x178($s0)
    ctx->pc = 0x1d94f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d94f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d94f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d94fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d94fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9500: 0x0  nop
    ctx->pc = 0x1d9500u;
    // NOP
    // 0x1d9504: 0x4503008d  bc1tl       . + 4 + (0x8D << 2)
    ctx->pc = 0x1D9504u;
    {
        const bool branch_taken_0x1d9504 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9504) {
            ctx->pc = 0x1D9508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9504u;
            // 0x1d9508: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D973Cu;
            goto label_1d973c;
        }
    }
    ctx->pc = 0x1D950Cu;
    // 0x1d950c: 0xc0783a6  jal         func_1E0E98
    ctx->pc = 0x1D950Cu;
    SET_GPR_U32(ctx, 31, 0x1D9514u);
    ctx->pc = 0x1D9510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D950Cu;
            // 0x1d9510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0E98u;
    if (runtime->hasFunction(0x1E0E98u)) {
        auto targetFn = runtime->lookupFunction(0x1E0E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9514u; }
        if (ctx->pc != 0x1D9514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0E98_0x1e0e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9514u; }
        if (ctx->pc != 0x1D9514u) { return; }
    }
    ctx->pc = 0x1D9514u;
    // 0x1d9514: 0x14400088  bnez        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x1D9514u;
    {
        const bool branch_taken_0x1d9514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9514u;
            // 0x1d9518: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9514) {
            ctx->pc = 0x1D9738u;
            goto label_1d9738;
        }
    }
    ctx->pc = 0x1D951Cu;
    // 0x1d951c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d951cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d9520: 0x8c42f194  lw          $v0, -0xE6C($v0)
    ctx->pc = 0x1d9520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963604)));
    // 0x1d9524: 0x12220084  beq         $s1, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x1D9524u;
    {
        const bool branch_taken_0x1d9524 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D9528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9524u;
            // 0x1d9528: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9524) {
            ctx->pc = 0x1D9738u;
            goto label_1d9738;
        }
    }
    ctx->pc = 0x1D952Cu;
    // 0x1d952c: 0xc6010198  lwc1        $f1, 0x198($s0)
    ctx->pc = 0x1d952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9530: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1d9530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1d9534: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d9534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9538: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d9538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d953c: 0x0  nop
    ctx->pc = 0x1d953cu;
    // NOP
    // 0x1d9540: 0x4503007e  bc1tl       . + 4 + (0x7E << 2)
    ctx->pc = 0x1D9540u;
    {
        const bool branch_taken_0x1d9540 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9540) {
            ctx->pc = 0x1D9544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9540u;
            // 0x1d9544: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D973Cu;
            goto label_1d973c;
        }
    }
    ctx->pc = 0x1D9548u;
    // 0x1d9548: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d9548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d954c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d954cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9550: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x1d9550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x1d9554: 0x8c4200ec  lw          $v0, 0xEC($v0)
    ctx->pc = 0x1d9554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x1d9558: 0x40f809  jalr        $v0
    ctx->pc = 0x1D9558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9560u);
        ctx->pc = 0x1D955Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9558u;
            // 0x1d955c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9560u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D93F4u: goto label_1d93f4;
            case 0x1D93FCu: goto label_1d93fc;
            case 0x1D9400u: goto label_1d9400;
            case 0x1D94A8u: goto label_1d94a8;
            case 0x1D94E8u: goto label_1d94e8;
            case 0x1D94ECu: goto label_1d94ec;
            case 0x1D95B8u: goto label_1d95b8;
            case 0x1D95E0u: goto label_1d95e0;
            case 0x1D9610u: goto label_1d9610;
            case 0x1D96F0u: goto label_1d96f0;
            case 0x1D970Cu: goto label_1d970c;
            case 0x1D9738u: goto label_1d9738;
            case 0x1D973Cu: goto label_1d973c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9560u; }
            if (ctx->pc != 0x1D9560u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9560u;
    // 0x1d9560: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1d9560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1d9564: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d9564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d9568: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d9568u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d956c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d956cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d9570: 0x40f809  jalr        $v0
    ctx->pc = 0x1D9570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9578u);
        ctx->pc = 0x1D9574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9570u;
            // 0x1d9574: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9578u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D93F4u: goto label_1d93f4;
            case 0x1D93FCu: goto label_1d93fc;
            case 0x1D9400u: goto label_1d9400;
            case 0x1D94A8u: goto label_1d94a8;
            case 0x1D94E8u: goto label_1d94e8;
            case 0x1D94ECu: goto label_1d94ec;
            case 0x1D95B8u: goto label_1d95b8;
            case 0x1D95E0u: goto label_1d95e0;
            case 0x1D9610u: goto label_1d9610;
            case 0x1D96F0u: goto label_1d96f0;
            case 0x1D970Cu: goto label_1d970c;
            case 0x1D9738u: goto label_1d9738;
            case 0x1D973Cu: goto label_1d973c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9578u; }
            if (ctx->pc != 0x1D9578u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9578u;
    // 0x1d9578: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D9578u;
    {
        const bool branch_taken_0x1d9578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D957Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9578u;
            // 0x1d957c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9578) {
            ctx->pc = 0x1D95B8u;
            goto label_1d95b8;
        }
    }
    ctx->pc = 0x1D9580u;
    // 0x1d9580: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d9580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d9584: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d9584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d9588: 0x40f809  jalr        $v0
    ctx->pc = 0x1D9588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9590u);
        ctx->pc = 0x1D958Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9588u;
            // 0x1d958c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9590u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D93F4u: goto label_1d93f4;
            case 0x1D93FCu: goto label_1d93fc;
            case 0x1D9400u: goto label_1d9400;
            case 0x1D94A8u: goto label_1d94a8;
            case 0x1D94E8u: goto label_1d94e8;
            case 0x1D94ECu: goto label_1d94ec;
            case 0x1D95B8u: goto label_1d95b8;
            case 0x1D95E0u: goto label_1d95e0;
            case 0x1D9610u: goto label_1d9610;
            case 0x1D96F0u: goto label_1d96f0;
            case 0x1D970Cu: goto label_1d970c;
            case 0x1D9738u: goto label_1d9738;
            case 0x1D973Cu: goto label_1d973c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9590u; }
            if (ctx->pc != 0x1D9590u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9590u;
    // 0x1d9590: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1d9590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d9594: 0x3c013f45  lui         $at, 0x3F45
    ctx->pc = 0x1d9594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16197 << 16));
    // 0x1d9598: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1d9598u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1d959c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d959cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d95a0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1d95a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d95a4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1d95a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1d95a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d95a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d95ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d95acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1d95b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D95B0u;
    {
        const bool branch_taken_0x1d95b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D95B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D95B0u;
            // 0x1d95b4: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d95b0) {
            ctx->pc = 0x1D95E0u;
            goto label_1d95e0;
        }
    }
    ctx->pc = 0x1D95B8u;
label_1d95b8:
    // 0x1d95b8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1d95b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1d95bc: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1d95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1d95c0: 0x40f809  jalr        $v0
    ctx->pc = 0x1D95C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D95C8u);
        ctx->pc = 0x1D95C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D95C0u;
            // 0x1d95c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D95C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D93F4u: goto label_1d93f4;
            case 0x1D93FCu: goto label_1d93fc;
            case 0x1D9400u: goto label_1d9400;
            case 0x1D94A8u: goto label_1d94a8;
            case 0x1D94E8u: goto label_1d94e8;
            case 0x1D94ECu: goto label_1d94ec;
            case 0x1D95B8u: goto label_1d95b8;
            case 0x1D95E0u: goto label_1d95e0;
            case 0x1D9610u: goto label_1d9610;
            case 0x1D96F0u: goto label_1d96f0;
            case 0x1D970Cu: goto label_1d970c;
            case 0x1D9738u: goto label_1d9738;
            case 0x1D973Cu: goto label_1d973c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D95C8u; }
            if (ctx->pc != 0x1D95C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D95C8u;
    // 0x1d95c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d95c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1d95cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d95ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d95d0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1d95d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1d95d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d95d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d95d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d95d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d95dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d95dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1d95e0:
    // 0x1d95e0: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1d95e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d95e4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d95e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d95e8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1d95e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1d95ec: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1d95ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d95f0: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x1d95f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d95f4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d95f4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d95f8: 0xc07634a  jal         func_1D8D28
    ctx->pc = 0x1D95F8u;
    SET_GPR_U32(ctx, 31, 0x1D9600u);
    ctx->pc = 0x1D95FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D95F8u;
            // 0x1d95fc: 0xfba10000  sqc2        $vf1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8D28u;
    if (runtime->hasFunction(0x1D8D28u)) {
        auto targetFn = runtime->lookupFunction(0x1D8D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9600u; }
        if (ctx->pc != 0x1D9600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8d28_0x1d8ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9600u; }
        if (ctx->pc != 0x1D9600u) { return; }
    }
    ctx->pc = 0x1D9600u;
    // 0x1d9600: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9600u;
    {
        const bool branch_taken_0x1d9600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9600) {
            ctx->pc = 0x1D9604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9600u;
            // 0x1d9604: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9610u;
            goto label_1d9610;
        }
    }
    ctx->pc = 0x1D9608u;
    // 0x1d9608: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1D9608u;
    {
        const bool branch_taken_0x1d9608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D960Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9608u;
            // 0x1d960c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9608) {
            ctx->pc = 0x1D9738u;
            goto label_1d9738;
        }
    }
    ctx->pc = 0x1D9610u;
label_1d9610:
    // 0x1d9610: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d9610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d9614: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d9614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d9618: 0x40f809  jalr        $v0
    ctx->pc = 0x1D9618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9620u);
        ctx->pc = 0x1D961Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9618u;
            // 0x1d961c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9620u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D93F4u: goto label_1d93f4;
            case 0x1D93FCu: goto label_1d93fc;
            case 0x1D9400u: goto label_1d9400;
            case 0x1D94A8u: goto label_1d94a8;
            case 0x1D94E8u: goto label_1d94e8;
            case 0x1D94ECu: goto label_1d94ec;
            case 0x1D95B8u: goto label_1d95b8;
            case 0x1D95E0u: goto label_1d95e0;
            case 0x1D9610u: goto label_1d9610;
            case 0x1D96F0u: goto label_1d96f0;
            case 0x1D970Cu: goto label_1d970c;
            case 0x1D9738u: goto label_1d9738;
            case 0x1D973Cu: goto label_1d973c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9620u; }
            if (ctx->pc != 0x1D9620u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9620u;
    // 0x1d9620: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1d9620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d9624: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1d9624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x1d9628: 0xc4a04f5c  lwc1        $f0, 0x4F5C($a1)
    ctx->pc = 0x1d9628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d962c: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x1d962cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d9630: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1d9630u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9634: 0x0  nop
    ctx->pc = 0x1d9634u;
    // NOP
    // 0x1d9638: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x1D9638u;
    {
        const bool branch_taken_0x1d9638 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D963Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9638u;
            // 0x1d963c: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9638) {
            ctx->pc = 0x1D970Cu;
            goto label_1d970c;
        }
    }
    ctx->pc = 0x1D9640u;
    // 0x1d9640: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1d9640u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9644: 0x24422db0  addiu       $v0, $v0, 0x2DB0
    ctx->pc = 0x1d9644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11696));
    // 0x1d9648: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d9648u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d964c: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1d964cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1d9650: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x1d9650u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d9654: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d9654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9658: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d9658u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d965c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d965cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d9660: 0x24422dd0  addiu       $v0, $v0, 0x2DD0
    ctx->pc = 0x1d9660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11728));
    // 0x1d9664: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d9664u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9668: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1d9668u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d966c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1d966cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9670: 0x46010044  c1          0x10044
    ctx->pc = 0x1d9670u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1d9674: 0x4be410ea  vmul.xyzw   $vf3, $vf2, $vf4
    ctx->pc = 0x1d9674u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d9678: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1d9678u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d967c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1d967cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9680: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1d9680u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d9684: 0x4be2212c  vsub.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x1d9684u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1d9688: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d9688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d968c: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x1d968cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x1d9690: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d9690u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9694: 0x4be4086a  vmul.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x1d9694u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9698: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1d9698u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d969c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1d969cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d96a0: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x1d96a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d96a4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1d96a4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d96a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d96a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d96ac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d96acu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1d96b0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1d96b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1d96b4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d96b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1d96b8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1D96B8u;
    {
        const bool branch_taken_0x1d96b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D96BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D96B8u;
            // 0x1d96bc: 0x3c040030  lui         $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d96b8) {
            ctx->pc = 0x1D96F0u;
            goto label_1d96f0;
        }
    }
    ctx->pc = 0x1D96C0u;
    // 0x1d96c0: 0xc4804f58  lwc1        $f0, 0x4F58($a0)
    ctx->pc = 0x1d96c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d96c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d96c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d96c8: 0x0  nop
    ctx->pc = 0x1d96c8u;
    // NOP
    // 0x1d96cc: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1D96CCu;
    {
        const bool branch_taken_0x1d96cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D96D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D96CCu;
            // 0x1d96d0: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d96cc) {
            ctx->pc = 0x1D970Cu;
            goto label_1d970c;
        }
    }
    ctx->pc = 0x1D96D4u;
    // 0x1d96d4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1d96d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1d96d8: 0x8c424f60  lw          $v0, 0x4F60($v0)
    ctx->pc = 0x1d96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20320)));
    // 0x1d96dc: 0xe4a24f5c  swc1        $f2, 0x4F5C($a1)
    ctx->pc = 0x1d96dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20316), bits); }
    // 0x1d96e0: 0xac624f64  sw          $v0, 0x4F64($v1)
    ctx->pc = 0x1d96e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20324), GPR_U32(ctx, 2));
    // 0x1d96e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D96E4u;
    {
        const bool branch_taken_0x1d96e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D96E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D96E4u;
            // 0x1d96e8: 0xe4814f58  swc1        $f1, 0x4F58($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d96e4) {
            ctx->pc = 0x1D970Cu;
            goto label_1d970c;
        }
    }
    ctx->pc = 0x1D96ECu;
    // 0x1d96ec: 0x0  nop
    ctx->pc = 0x1d96ecu;
    // NOP
label_1d96f0:
    // 0x1d96f0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d96f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d96f4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1d96f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1d96f8: 0x8c424f60  lw          $v0, 0x4F60($v0)
    ctx->pc = 0x1d96f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20320)));
    // 0x1d96fc: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1d96fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1d9700: 0xe4a24f5c  swc1        $f2, 0x4F5C($a1)
    ctx->pc = 0x1d9700u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20316), bits); }
    // 0x1d9704: 0xac824f64  sw          $v0, 0x4F64($a0)
    ctx->pc = 0x1d9704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20324), GPR_U32(ctx, 2));
    // 0x1d9708: 0xe4614f58  swc1        $f1, 0x4F58($v1)
    ctx->pc = 0x1d9708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20312), bits); }
label_1d970c:
    // 0x1d970c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1d970cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x1d9710: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1d9710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1d9714: 0x8ca24f60  lw          $v0, 0x4F60($a1)
    ctx->pc = 0x1d9714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20320)));
    // 0x1d9718: 0x24842de0  addiu       $a0, $a0, 0x2DE0
    ctx->pc = 0x1d9718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11744));
    // 0x1d971c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d971cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d9720: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d9724: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d9724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d9728: 0xaca24f60  sw          $v0, 0x4F60($a1)
    ctx->pc = 0x1d9728u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20320), GPR_U32(ctx, 2));
    // 0x1d972c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1d972cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1d9730: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9734: 0x0  nop
    ctx->pc = 0x1d9734u;
    // NOP
label_1d9738:
    // 0x1d9738: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d9738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d973c:
    // 0x1d973c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d973cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9744: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9744u;
            // 0x1d9748: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D93F4u: goto label_1d93f4;
            case 0x1D93FCu: goto label_1d93fc;
            case 0x1D9400u: goto label_1d9400;
            case 0x1D94A8u: goto label_1d94a8;
            case 0x1D94E8u: goto label_1d94e8;
            case 0x1D94ECu: goto label_1d94ec;
            case 0x1D95B8u: goto label_1d95b8;
            case 0x1D95E0u: goto label_1d95e0;
            case 0x1D9610u: goto label_1d9610;
            case 0x1D96F0u: goto label_1d96f0;
            case 0x1D970Cu: goto label_1d970c;
            case 0x1D9738u: goto label_1d9738;
            case 0x1D973Cu: goto label_1d973c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D974Cu;
    // 0x1d974c: 0x0  nop
    ctx->pc = 0x1d974cu;
    // NOP
}
