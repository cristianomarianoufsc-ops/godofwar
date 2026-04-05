#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B55E0
// Address: 0x1b55e0 - 0x1b56b8
void sub_001B55E0_0x1b55e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B55E0_0x1b55e0");
#endif

    ctx->pc = 0x1b55e0u;

    // 0x1b55e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b55e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b55e4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b55e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b55e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b55e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b55ec: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x1b55ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1b55f0: 0x8c42cb90  lw          $v0, -0x3470($v0)
    ctx->pc = 0x1b55f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953872)));
    // 0x1b55f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b55f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b55f8: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1b55f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x1b55fc: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1b55fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x1b5600: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b5600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b5604: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b5604u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5608: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b5608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b560c: 0x18c0001b  blez        $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B560Cu;
    {
        const bool branch_taken_0x1b560c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1B5610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B560Cu;
            // 0x1b5610: 0x8c470008  lw          $a3, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b560c) {
            ctx->pc = 0x1B567Cu;
            goto label_1b567c;
        }
    }
    ctx->pc = 0x1B5614u;
    // 0x1b5614: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1b5614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b5618:
    // 0x1b5618: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b5618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b561c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b561cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5620: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1b5620u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b5624: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1b5624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b5628: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1b5628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b562c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1b562cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b5630: 0x3c0147c8  lui         $at, 0x47C8
    ctx->pc = 0x1b5630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18376 << 16));
    // 0x1b5634: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5638: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x1b5638u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1b563c: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1b563cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5640: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b5640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5644: 0x0  nop
    ctx->pc = 0x1b5644u;
    // NOP
    // 0x1b5648: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5648u;
    {
        const bool branch_taken_0x1b5648 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5648) {
            ctx->pc = 0x1B564Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5648u;
            // 0x1b564c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5670u;
            goto label_1b5670;
        }
    }
    ctx->pc = 0x1B5650u;
    // 0x1b5650: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1b5650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5654: 0x0  nop
    ctx->pc = 0x1b5654u;
    // NOP
    // 0x1b5658: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5658u;
    {
        const bool branch_taken_0x1b5658 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5658) {
            ctx->pc = 0x1B565Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5658u;
            // 0x1b565c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5670u;
            goto label_1b5670;
        }
    }
    ctx->pc = 0x1B5660u;
    // 0x1b5660: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x1b5660u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x1b5664: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b5664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5668: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b5668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b566c: 0x0  nop
    ctx->pc = 0x1b566cu;
    // NOP
label_1b5670:
    // 0x1b5670: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x1b5670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b5674: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1B5674u;
    {
        const bool branch_taken_0x1b5674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5674u;
            // 0x1b5678: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5674) {
            ctx->pc = 0x1B5618u;
            runtime->cooperativeGuestYield();
            goto label_1b5618;
        }
    }
    ctx->pc = 0x1B567Cu;
label_1b567c:
    // 0x1b567c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b5680: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5680u;
    {
        const bool branch_taken_0x1b5680 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B5684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5680u;
            // 0x1b5684: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5680) {
            ctx->pc = 0x1B56A0u;
            goto label_1b56a0;
        }
    }
    ctx->pc = 0x1B5688u;
    // 0x1b5688: 0xc06d2ba  jal         func_1B4AE8
    ctx->pc = 0x1B5688u;
    SET_GPR_U32(ctx, 31, 0x1B5690u);
    ctx->pc = 0x1B568Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5688u;
            // 0x1b568c: 0x240401b0  addiu       $a0, $zero, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AE8u;
    if (runtime->hasFunction(0x1B4AE8u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5690u; }
        if (ctx->pc != 0x1B5690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4AE8_0x1b4ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5690u; }
        if (ctx->pc != 0x1B5690u) { return; }
    }
    ctx->pc = 0x1B5690u;
    // 0x1b5690: 0xc06d2ea  jal         func_1B4BA8
    ctx->pc = 0x1B5690u;
    SET_GPR_U32(ctx, 31, 0x1B5698u);
    ctx->pc = 0x1B5694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5690u;
            // 0x1b5694: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4BA8u;
    if (runtime->hasFunction(0x1B4BA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B4BA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5698u; }
        if (ctx->pc != 0x1B5698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b4ba8_0x1b4c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5698u; }
        if (ctx->pc != 0x1B5698u) { return; }
    }
    ctx->pc = 0x1B5698u;
    // 0x1b5698: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5698u;
    {
        const bool branch_taken_0x1b5698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B569Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5698u;
            // 0x1b569c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5698) {
            ctx->pc = 0x1B56ACu;
            goto label_1b56ac;
        }
    }
    ctx->pc = 0x1B56A0u;
label_1b56a0:
    // 0x1b56a0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1b56a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1b56a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b56a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b56a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b56a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b56ac:
    // 0x1b56ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B56ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B56B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56ACu;
            // 0x1b56b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5618u: goto label_1b5618;
            case 0x1B5670u: goto label_1b5670;
            case 0x1B567Cu: goto label_1b567c;
            case 0x1B56A0u: goto label_1b56a0;
            case 0x1B56ACu: goto label_1b56ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B56B4u;
    // 0x1b56b4: 0x0  nop
    ctx->pc = 0x1b56b4u;
    // NOP
}
