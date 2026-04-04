#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002183C8
// Address: 0x2183c8 - 0x2186c0
void sub_002183C8_0x2183c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002183C8_0x2183c8");
#endif

    ctx->pc = 0x2183c8u;

    // 0x2183c8: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x2183c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x2183cc: 0x7fb10210  sq          $s1, 0x210($sp)
    ctx->pc = 0x2183ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 17));
    // 0x2183d0: 0x7fb00220  sq          $s0, 0x220($sp)
    ctx->pc = 0x2183d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 16));
    // 0x2183d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2183d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2183d8: 0x7fb20200  sq          $s2, 0x200($sp)
    ctx->pc = 0x2183d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 18));
    // 0x2183dc: 0x7fb301f0  sq          $s3, 0x1F0($sp)
    ctx->pc = 0x2183dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 19));
    // 0x2183e0: 0x7fb401e0  sq          $s4, 0x1E0($sp)
    ctx->pc = 0x2183e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 20));
    // 0x2183e4: 0xffbf01d0  sd          $ra, 0x1D0($sp)
    ctx->pc = 0x2183e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 31));
    // 0x2183e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2183e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2183ec: 0x8c530104  lw          $s3, 0x104($v0)
    ctx->pc = 0x2183ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2183f0: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x2183f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x2183f4: 0xde85bdf8  ld          $a1, -0x4208($s4)
    ctx->pc = 0x2183f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 4294950392)));
    // 0x2183f8: 0xde620040  ld          $v0, 0x40($s3)
    ctx->pc = 0x2183f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2183fc: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2183FCu;
    {
        const bool branch_taken_0x2183fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x218400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2183FCu;
            // 0x218400: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183fc) {
            ctx->pc = 0x218410u;
            goto label_218410;
        }
    }
    ctx->pc = 0x218404u;
    // 0x218404: 0xc04da64  jal         func_136990
    ctx->pc = 0x218404u;
    SET_GPR_U32(ctx, 31, 0x21840Cu);
    ctx->pc = 0x218408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218404u;
            // 0x218408: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21840Cu; }
        if (ctx->pc != 0x21840Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21840Cu; }
        if (ctx->pc != 0x21840Cu) { return; }
    }
    ctx->pc = 0x21840Cu;
    // 0x21840c: 0x0  nop
    ctx->pc = 0x21840cu;
    // NOP
label_218410:
    // 0x218410: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x218410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x218414: 0x102980  sll         $a1, $s0, 6
    ctx->pc = 0x218414u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x218418: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x218418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21841c: 0xc06149c  jal         func_185270
    ctx->pc = 0x21841Cu;
    SET_GPR_U32(ctx, 31, 0x218424u);
    ctx->pc = 0x218420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21841Cu;
            // 0x218420: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185270u;
    if (runtime->hasFunction(0x185270u)) {
        auto targetFn = runtime->lookupFunction(0x185270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218424u; }
        if (ctx->pc != 0x218424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_185270_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218424u; }
        if (ctx->pc != 0x218424u) { return; }
    }
    ctx->pc = 0x218424u;
    // 0x218424: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x218424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x218428: 0xc0614c6  jal         func_185318
    ctx->pc = 0x218428u;
    SET_GPR_U32(ctx, 31, 0x218430u);
    ctx->pc = 0x21842Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218428u;
            // 0x21842c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218430u; }
        if (ctx->pc != 0x218430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218430u; }
        if (ctx->pc != 0x218430u) { return; }
    }
    ctx->pc = 0x218430u;
    // 0x218430: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x218430u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x218434: 0xde85bdf8  ld          $a1, -0x4208($s4)
    ctx->pc = 0x218434u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 4294950392)));
    // 0x218438: 0xde620040  ld          $v0, 0x40($s3)
    ctx->pc = 0x218438u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x21843c: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21843Cu;
    {
        const bool branch_taken_0x21843c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x218440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21843Cu;
            // 0x218440: 0x8e120018  lw          $s2, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21843c) {
            ctx->pc = 0x218450u;
            goto label_218450;
        }
    }
    ctx->pc = 0x218444u;
    // 0x218444: 0xc04da64  jal         func_136990
    ctx->pc = 0x218444u;
    SET_GPR_U32(ctx, 31, 0x21844Cu);
    ctx->pc = 0x218448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218444u;
            // 0x218448: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21844Cu; }
        if (ctx->pc != 0x21844Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21844Cu; }
        if (ctx->pc != 0x21844Cu) { return; }
    }
    ctx->pc = 0x21844Cu;
    // 0x21844c: 0x0  nop
    ctx->pc = 0x21844cu;
    // NOP
label_218450:
    // 0x218450: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x218450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x218454: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x218454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x218458: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x218458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21845c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21845cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218460: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x218460u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218464: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x218464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x218468: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x218468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21846c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x21846cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x218470: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x218470u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x218474: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x218474u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x218478: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x218478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x21847c: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x21847cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x218480: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x218480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
    // 0x218484: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x218484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x218488: 0x48a32800  qmtc2.ni    $v1, $vf5
    ctx->pc = 0x218488u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x21848c: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x21848cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x218490: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x218490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x218494: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x218494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x218498: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x218498u;
    {
        const bool branch_taken_0x218498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21849Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218498u;
            // 0x21849c: 0xde82bdf8  ld          $v0, -0x4208($s4) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4294950392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218498) {
            ctx->pc = 0x218670u;
            goto label_218670;
        }
    }
    ctx->pc = 0x2184A0u;
    // 0x2184a0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2184a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2184a4: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x2184a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2184a8:
    // 0x2184a8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x2184a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2184ac: 0x4be228ac  vsub.xyzw   $vf2, $vf5, $vf2
    ctx->pc = 0x2184acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2184b0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x2184b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2184b4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x2184b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2184b8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x2184b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2184bc: 0x4bea133c  vmove.xyzw  $vf10, $vf2
    ctx->pc = 0x2184bcu;
    ctx->vu0_vf[10] = ctx->vu0_vf[2];
    // 0x2184c0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x2184c0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2184c4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2184c4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2184c8: 0x4bc0529c  vmulq.xyz   $vf10, $vf10, $Q
    ctx->pc = 0x2184c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x2184cc: 0x4a0002ff  vnop
    ctx->pc = 0x2184ccu;
    // NOP operation, no action needed for VU0
    // 0x2184d0: 0x4a0002ff  vnop
    ctx->pc = 0x2184d0u;
    // NOP operation, no action needed for VU0
    // 0x2184d4: 0xdba301b0  lqc2        $vf3, 0x1B0($sp)
    ctx->pc = 0x2184d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2184d8: 0xfbaa01c0  sqc2        $vf10, 0x1C0($sp)
    ctx->pc = 0x2184d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x2184dc: 0x4be3506a  vmul.xyzw   $vf1, $vf10, $vf3
    ctx->pc = 0x2184dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2184e0: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x2184e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2184e4: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x2184e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2184e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2184e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2184ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2184ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2184f0: 0x4b020844  vsubx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x2184f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2184f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2184f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2184f8: 0x8c44e4b8  lw          $a0, -0x1B48($v0)
    ctx->pc = 0x2184f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960312)));
    // 0x2184fc: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2184fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x218500: 0x4b020858  vmulx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x218500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x218504: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x218504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x218508: 0x8c44e4bc  lw          $a0, -0x1B44($v0)
    ctx->pc = 0x218508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960316)));
    // 0x21850c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x21850cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x218510: 0x4b020840  vaddx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x218510u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x218514: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x218514u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218518: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x218518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21851c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21851cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x218520: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x218520u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x218524: 0x4be350e8  vadd.xyzw   $vf3, $vf10, $vf3
    ctx->pc = 0x218524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x218528: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x218528u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21852c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x21852cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x218530: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x218530u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x218534: 0x4be71b3c  vmove.xyzw  $vf7, $vf3
    ctx->pc = 0x218534u;
    ctx->vu0_vf[7] = ctx->vu0_vf[3];
    // 0x218538: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x218538u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x21853c: 0x4a0003bf  vwaitq
    ctx->pc = 0x21853cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x218540: 0x4bc039dc  vmulq.xyz   $vf7, $vf7, $Q
    ctx->pc = 0x218540u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x218544: 0x4a0002ff  vnop
    ctx->pc = 0x218544u;
    // NOP operation, no action needed for VU0
    // 0x218548: 0x4a0002ff  vnop
    ctx->pc = 0x218548u;
    // NOP operation, no action needed for VU0
    // 0x21854c: 0xfba701c0  sqc2        $vf7, 0x1C0($sp)
    ctx->pc = 0x21854cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x218550: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x218550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x218554: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x218554u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x218558: 0x4be43918  vmulx.xyzw  $vf4, $vf7, $vf4x
    ctx->pc = 0x218558u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21855c: 0x4be4292c  vsub.xyzw   $vf4, $vf5, $vf4
    ctx->pc = 0x21855cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x218560: 0x4bc732fe  vopmula.xyz $ACC, $vf6, $vf7
    ctx->pc = 0x218560u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]);
    // 0x218564: 0x4bc638ae  vopmsub.xyz $vf2, $vf7, $vf6
    ctx->pc = 0x218564u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x218568: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x218568u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21856c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x21856cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x218570: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x218570u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x218574: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x218574u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x218578: 0x4be8133c  vmove.xyzw  $vf8, $vf2
    ctx->pc = 0x218578u;
    ctx->vu0_vf[8] = ctx->vu0_vf[2];
    // 0x21857c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x21857cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x218580: 0x4a0003bf  vwaitq
    ctx->pc = 0x218580u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x218584: 0x4bc0421c  vmulq.xyz   $vf8, $vf8, $Q
    ctx->pc = 0x218584u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x218588: 0x4a0002ff  vnop
    ctx->pc = 0x218588u;
    // NOP operation, no action needed for VU0
    // 0x21858c: 0x4a0002ff  vnop
    ctx->pc = 0x21858cu;
    // NOP operation, no action needed for VU0
    // 0x218590: 0x4bc83afe  vopmula.xyz $ACC, $vf7, $vf8
    ctx->pc = 0x218590u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[8]);
    // 0x218594: 0x4bc7406e  vopmsub.xyz $vf1, $vf8, $vf7
    ctx->pc = 0x218594u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[7]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x218598: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x218598u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21859c: 0xfba800f0  sqc2        $vf8, 0xF0($sp)
    ctx->pc = 0x21859cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x2185a0: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x2185a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2185a4: 0xfba70110  sqc2        $vf7, 0x110($sp)
    ctx->pc = 0x2185a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2185a8: 0xfba40120  sqc2        $vf4, 0x120($sp)
    ctx->pc = 0x2185a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2185ac: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2185acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2185b0: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x2185b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2185b4: 0xdba30050  lqc2        $vf3, 0x50($sp)
    ctx->pc = 0x2185b4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2185b8: 0xdba50060  lqc2        $vf5, 0x60($sp)
    ctx->pc = 0x2185b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2185bc: 0xdba60070  lqc2        $vf6, 0x70($sp)
    ctx->pc = 0x2185bcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2185c0: 0x4be811bc  vmulax.xyzw $ACC, $vf2, $vf8x
    ctx->pc = 0x2185c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x2185c4: 0x4be818bd  vmadday.xyzw $ACC, $vf3, $vf8y
    ctx->pc = 0x2185c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2185c8: 0x4be828be  vmaddaz.xyzw $ACC, $vf5, $vf8z
    ctx->pc = 0x2185c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2185cc: 0x4be8324b  vmaddw.xyzw $vf9, $vf6, $vf8w
    ctx->pc = 0x2185ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2185d0: 0x4be111bc  vmulax.xyzw $ACC, $vf2, $vf1x
    ctx->pc = 0x2185d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x2185d4: 0x4be118bd  vmadday.xyzw $ACC, $vf3, $vf1y
    ctx->pc = 0x2185d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2185d8: 0x4be128be  vmaddaz.xyzw $ACC, $vf5, $vf1z
    ctx->pc = 0x2185d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2185dc: 0x4be1330b  vmaddw.xyzw $vf12, $vf6, $vf1w
    ctx->pc = 0x2185dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2185e0: 0x4be711bc  vmulax.xyzw $ACC, $vf2, $vf7x
    ctx->pc = 0x2185e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x2185e4: 0x4be718bd  vmadday.xyzw $ACC, $vf3, $vf7y
    ctx->pc = 0x2185e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2185e8: 0x4be728be  vmaddaz.xyzw $ACC, $vf5, $vf7z
    ctx->pc = 0x2185e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2185ec: 0x4be732cb  vmaddw.xyzw $vf11, $vf6, $vf7w
    ctx->pc = 0x2185ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2185f0: 0x4be411bc  vmulax.xyzw $ACC, $vf2, $vf4x
    ctx->pc = 0x2185f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x2185f4: 0x4be418bd  vmadday.xyzw $ACC, $vf3, $vf4y
    ctx->pc = 0x2185f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2185f8: 0x4be428be  vmaddaz.xyzw $ACC, $vf5, $vf4z
    ctx->pc = 0x2185f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2185fc: 0x4be4308b  vmaddw.xyzw $vf2, $vf6, $vf4w
    ctx->pc = 0x2185fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x218600: 0xfba90130  sqc2        $vf9, 0x130($sp)
    ctx->pc = 0x218600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x218604: 0xfbac0140  sqc2        $vf12, 0x140($sp)
    ctx->pc = 0x218604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x218608: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x218608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x21860c: 0xfbab0150  sqc2        $vf11, 0x150($sp)
    ctx->pc = 0x21860cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x218610: 0xfba20160  sqc2        $vf2, 0x160($sp)
    ctx->pc = 0x218610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x218614: 0xf8690000  sqc2        $vf9, 0x0($v1)
    ctx->pc = 0x218614u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x218618: 0x4be5233c  vmove.xyzw  $vf5, $vf4
    ctx->pc = 0x218618u;
    ctx->vu0_vf[5] = ctx->vu0_vf[4];
    // 0x21861c: 0x4be60b3c  vmove.xyzw  $vf6, $vf1
    ctx->pc = 0x21861cu;
    ctx->vu0_vf[6] = ctx->vu0_vf[1];
    // 0x218620: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x218620u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x218624: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x218624u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x218628: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x218628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x21862c: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x21862cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x218630: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x218630u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x218634: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x218634u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x218638: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x218638u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21863c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x21863cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x218640: 0x7ba201c0  lq          $v0, 0x1C0($sp)
    ctx->pc = 0x218640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x218644: 0x14c0ff98  bnez        $a2, . + 4 + (-0x68 << 2)
    ctx->pc = 0x218644u;
    {
        const bool branch_taken_0x218644 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x218648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218644u;
            // 0x218648: 0x7fa201b0  sq          $v0, 0x1B0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218644) {
            ctx->pc = 0x2184A8u;
            runtime->cooperativeGuestYield();
            goto label_2184a8;
        }
    }
    ctx->pc = 0x21864Cu;
    // 0x21864c: 0xfba201a0  sqc2        $vf2, 0x1A0($sp)
    ctx->pc = 0x21864cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x218650: 0xfbab0190  sqc2        $vf11, 0x190($sp)
    ctx->pc = 0x218650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x218654: 0xfbac0180  sqc2        $vf12, 0x180($sp)
    ctx->pc = 0x218654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x218658: 0xfba90170  sqc2        $vf9, 0x170($sp)
    ctx->pc = 0x218658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x21865c: 0xfba800e0  sqc2        $vf8, 0xE0($sp)
    ctx->pc = 0x21865cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x218660: 0xfba700d0  sqc2        $vf7, 0xD0($sp)
    ctx->pc = 0x218660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x218664: 0xfbaa00c0  sqc2        $vf10, 0xC0($sp)
    ctx->pc = 0x218664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x218668: 0xde82bdf8  ld          $v0, -0x4208($s4)
    ctx->pc = 0x218668u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4294950392)));
    // 0x21866c: 0x0  nop
    ctx->pc = 0x21866cu;
    // NOP
label_218670:
    // 0x218670: 0x7bb00220  lq          $s0, 0x220($sp)
    ctx->pc = 0x218670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x218674: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x218674u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x218678: 0x7bb10210  lq          $s1, 0x210($sp)
    ctx->pc = 0x218678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x21867c: 0xfe82bdf8  sd          $v0, -0x4208($s4)
    ctx->pc = 0x21867cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 4294950392), GPR_U64(ctx, 2));
    // 0x218680: 0xfe600040  sd          $zero, 0x40($s3)
    ctx->pc = 0x218680u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 64), GPR_U64(ctx, 0));
    // 0x218684: 0x7bb20200  lq          $s2, 0x200($sp)
    ctx->pc = 0x218684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x218688: 0x7bb301f0  lq          $s3, 0x1F0($sp)
    ctx->pc = 0x218688u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x21868c: 0x7bb401e0  lq          $s4, 0x1E0($sp)
    ctx->pc = 0x21868cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x218690: 0xdfbf01d0  ld          $ra, 0x1D0($sp)
    ctx->pc = 0x218690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x218694: 0x3e00008  jr          $ra
    ctx->pc = 0x218694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218694u;
            // 0x218698: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218410u: goto label_218410;
            case 0x218450u: goto label_218450;
            case 0x2184A8u: goto label_2184a8;
            case 0x218670u: goto label_218670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21869Cu;
    // 0x21869c: 0x0  nop
    ctx->pc = 0x21869cu;
    // NOP
    // 0x2186a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2186a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2186a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2186a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2186a8: 0xc0860c6  jal         func_218318
    ctx->pc = 0x2186A8u;
    SET_GPR_U32(ctx, 31, 0x2186B0u);
    ctx->pc = 0x2186ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2186A8u;
            // 0x2186ac: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218318u;
    if (runtime->hasFunction(0x218318u)) {
        auto targetFn = runtime->lookupFunction(0x218318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2186B0u; }
        if (ctx->pc != 0x2186B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218318_0x218318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2186B0u; }
        if (ctx->pc != 0x2186B0u) { return; }
    }
    ctx->pc = 0x2186B0u;
    // 0x2186b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2186b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2186b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2186B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2186B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2186B4u;
            // 0x2186b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218410u: goto label_218410;
            case 0x218450u: goto label_218450;
            case 0x2184A8u: goto label_2184a8;
            case 0x218670u: goto label_218670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2186BCu;
    // 0x2186bc: 0x0  nop
    ctx->pc = 0x2186bcu;
    // NOP
}
