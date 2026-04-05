#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D9750
// Address: 0x1d9750 - 0x1d9e60
void sub_001D9750_0x1d9750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9750_0x1d9750");
#endif

    ctx->pc = 0x1d9750u;

    // 0x1d9750: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1d9750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1d9754: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1d9754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1d9758: 0xc4406b38  lwc1        $f0, 0x6B38($v0)
    ctx->pc = 0x1d9758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 27448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d975c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1d975cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1d9760: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1d9760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x1d9764: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d9764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d9768: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d9768u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d976c: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1d976cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x1d9770: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1d9770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1d9774: 0x3c150030  lui         $s5, 0x30
    ctx->pc = 0x1d9774u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)48 << 16));
    // 0x1d9778: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1d9778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x1d977c: 0x3c170030  lui         $s7, 0x30
    ctx->pc = 0x1d977cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)48 << 16));
    // 0x1d9780: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1d9780u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1d9784: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d9784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9788: 0xe4404f58  swc1        $f0, 0x4F58($v0)
    ctx->pc = 0x1d9788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20312), bits); }
    // 0x1d978c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d978cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9790: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1d9790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x1d9794: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1d9794u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1d9798: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1d9798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x1d979c: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d97a0: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1d97a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x1d97a4: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1d97a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x1d97a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d97a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d97ac: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1d97acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1d97b0: 0xaee54f64  sw          $a1, 0x4F64($s7)
    ctx->pc = 0x1d97b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 20324), GPR_U32(ctx, 5));
    // 0x1d97b4: 0xac604f5c  sw          $zero, 0x4F5C($v1)
    ctx->pc = 0x1d97b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20316), GPR_U32(ctx, 0));
    // 0x1d97b8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D97B8u;
    {
        const bool branch_taken_0x1d97b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D97BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D97B8u;
            // 0x1d97bc: 0xaea04f60  sw          $zero, 0x4F60($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97b8) {
            ctx->pc = 0x1D97F4u;
            goto label_1d97f4;
        }
    }
    ctx->pc = 0x1D97C0u;
    // 0x1d97c0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d97c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d97c4: 0x131dc2  srl         $v1, $s3, 23
    ctx->pc = 0x1d97c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 23));
    // 0x1d97c8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1d97c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d97cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d97ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d97d0: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1d97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1d97d4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1d97d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d97d8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d97d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d97dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d97e0: 0x14530002  bne         $v0, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D97E0u;
    {
        const bool branch_taken_0x1d97e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1D97E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D97E0u;
            // 0x1d97e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97e0) {
            ctx->pc = 0x1D97ECu;
            goto label_1d97ec;
        }
    }
    ctx->pc = 0x1D97E8u;
    // 0x1d97e8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d97e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d97ec:
    // 0x1d97ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D97ECu;
    {
        const bool branch_taken_0x1d97ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D97ECu;
            // 0x1d97f0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97ec) {
            ctx->pc = 0x1D97F8u;
            goto label_1d97f8;
        }
    }
    ctx->pc = 0x1D97F4u;
label_1d97f4:
    // 0x1d97f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d97f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d97f8:
    // 0x1d97f8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1d97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1d97fc: 0x12980a  movz        $s3, $zero, $s2
    ctx->pc = 0x1d97fcu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x1d9800: 0x784300a0  lq          $v1, 0xA0($v0)
    ctx->pc = 0x1d9800u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1d9804: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1d9804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x1d9808: 0x784200f0  lq          $v0, 0xF0($v0)
    ctx->pc = 0x1d9808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1d980c: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D980Cu;
    {
        const bool branch_taken_0x1d980c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D980Cu;
            // 0x1d9810: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d980c) {
            ctx->pc = 0x1D9870u;
            goto label_1d9870;
        }
    }
    ctx->pc = 0x1D9814u;
    // 0x1d9814: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d9814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d9818: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d9818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d981c: 0x24422db0  addiu       $v0, $v0, 0x2DB0
    ctx->pc = 0x1d981cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11696));
    // 0x1d9820: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d9820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9824: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x1d9824u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9828: 0xc0764ec  jal         func_1D93B0
    ctx->pc = 0x1D9828u;
    SET_GPR_U32(ctx, 31, 0x1D9830u);
    ctx->pc = 0x1D982Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9828u;
            // 0x1d982c: 0x70033ca9  por         $a3, $zero, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D93B0u;
    if (runtime->hasFunction(0x1D93B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9830u; }
        if (ctx->pc != 0x1D9830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D93B0_0x1d93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9830u; }
        if (ctx->pc != 0x1D9830u) { return; }
    }
    ctx->pc = 0x1D9830u;
    // 0x1d9830: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1d9830u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1d9834: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1d9834u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9838: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1d9838u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x1d983c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1d983cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1d9840: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1d9840u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9844: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1d9844u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d9848: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1d9848u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d984c: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1d984cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d9850: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1d9850u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1d9854: 0x4a0003bf  vwaitq
    ctx->pc = 0x1d9854u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1d9858: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1d9858u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d985c: 0x4a0002ff  vnop
    ctx->pc = 0x1d985cu;
    // NOP operation, no action needed for VU0
    // 0x1d9860: 0x4a0002ff  vnop
    ctx->pc = 0x1d9860u;
    // NOP operation, no action needed for VU0
    // 0x1d9864: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1d9864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9868: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9868u;
    {
        const bool branch_taken_0x1d9868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D986Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9868u;
            // 0x1d986c: 0xfba10000  sqc2        $vf1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9868) {
            ctx->pc = 0x1D9880u;
            goto label_1d9880;
        }
    }
    ctx->pc = 0x1D9870u;
label_1d9870:
    // 0x1d9870: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1d9870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d9874: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d9874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9878: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1d9878u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1d987c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1d987cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1d9880:
    // 0x1d9880: 0xdba30030  lqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1d9880u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9884: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1d9884u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9888: 0x4bc11afe  vopmula.xyz $ACC, $vf3, $vf1
    ctx->pc = 0x1d9888u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]);
    // 0x1d988c: 0x4bc3086e  vopmsub.xyz $vf1, $vf1, $vf3
    ctx->pc = 0x1d988cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1d9890: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1d9890u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9894: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1d9894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9898: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1d9898u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d989c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d989cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d98a0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d98a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d98a4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1d98a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d98a8: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1d98a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d98ac: 0x3c160030  lui         $s6, 0x30
    ctx->pc = 0x1d98acu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)48 << 16));
    // 0x1d98b0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1d98b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1d98b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1d98b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1d98b8: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1d98b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d98bc: 0x4a0002ff  vnop
    ctx->pc = 0x1d98bcu;
    // NOP operation, no action needed for VU0
    // 0x1d98c0: 0x4a0002ff  vnop
    ctx->pc = 0x1d98c0u;
    // NOP operation, no action needed for VU0
    // 0x1d98c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d98c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d98c8: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x1d98c8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1d98cc: 0x26d02db0  addiu       $s0, $s6, 0x2DB0
    ctx->pc = 0x1d98ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 11696));
    // 0x1d98d0: 0x3c1e0030  lui         $fp, 0x30
    ctx->pc = 0x1d98d0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)48 << 16));
    // 0x1d98d4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1d98d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d98d8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1d98d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d98dc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d98dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d98e0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d98e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d98e4: 0x40f809  jalr        $v0
    ctx->pc = 0x1D98E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D98ECu);
        ctx->pc = 0x1D98E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D98E4u;
            // 0x1d98e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D98ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D97ECu: goto label_1d97ec;
            case 0x1D97F4u: goto label_1d97f4;
            case 0x1D97F8u: goto label_1d97f8;
            case 0x1D9870u: goto label_1d9870;
            case 0x1D9880u: goto label_1d9880;
            case 0x1D99F8u: goto label_1d99f8;
            case 0x1D99FCu: goto label_1d99fc;
            case 0x1D9A00u: goto label_1d9a00;
            case 0x1D9A1Cu: goto label_1d9a1c;
            case 0x1D9A24u: goto label_1d9a24;
            case 0x1D9A8Cu: goto label_1d9a8c;
            case 0x1D9A90u: goto label_1d9a90;
            case 0x1D9AA8u: goto label_1d9aa8;
            case 0x1D9B00u: goto label_1d9b00;
            case 0x1D9B10u: goto label_1d9b10;
            case 0x1D9B14u: goto label_1d9b14;
            case 0x1D9B48u: goto label_1d9b48;
            case 0x1D9B74u: goto label_1d9b74;
            case 0x1D9B98u: goto label_1d9b98;
            case 0x1D9BC8u: goto label_1d9bc8;
            case 0x1D9C38u: goto label_1d9c38;
            case 0x1D9C4Cu: goto label_1d9c4c;
            case 0x1D9C70u: goto label_1d9c70;
            case 0x1D9D00u: goto label_1d9d00;
            case 0x1D9D04u: goto label_1d9d04;
            case 0x1D9D14u: goto label_1d9d14;
            case 0x1D9D40u: goto label_1d9d40;
            case 0x1D9DC8u: goto label_1d9dc8;
            case 0x1D9DD8u: goto label_1d9dd8;
            case 0x1D9E30u: goto label_1d9e30;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D98ECu; }
            if (ctx->pc != 0x1D98ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1D98ECu;
    // 0x1d98ec: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1d98ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d98f0: 0xc0909c4  jal         func_242710
    ctx->pc = 0x1D98F0u;
    SET_GPR_U32(ctx, 31, 0x1D98F8u);
    ctx->pc = 0x1D98F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D98F0u;
            // 0x1d98f4: 0x8c510084  lw          $s1, 0x84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D98F8u; }
        if (ctx->pc != 0x1D98F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D98F8u; }
        if (ctx->pc != 0x1D98F8u) { return; }
    }
    ctx->pc = 0x1D98F8u;
    // 0x1d98f8: 0x78450030  lq          $a1, 0x30($v0)
    ctx->pc = 0x1d98f8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d98fc: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1d98fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1d9900: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d9900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d9904: 0x24632dd0  addiu       $v1, $v1, 0x2DD0
    ctx->pc = 0x1d9904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11728));
    // 0x1d9908: 0x7e050000  sq          $a1, 0x0($s0)
    ctx->pc = 0x1d9908u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 5));
    // 0x1d990c: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x1d990cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x1d9910: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1d9910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1d9914: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d9914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9918: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1d9918u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x1d991c: 0x7ba40050  lq          $a0, 0x50($sp)
    ctx->pc = 0x1d991cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d9920: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1d9920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1d9924: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x1d9924u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x1d9928: 0x24c69478  addiu       $a2, $a2, -0x6B88
    ctx->pc = 0x1d9928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939768));
    // 0x1d992c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x1d992cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x1d9930: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1d9930u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9934: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1d9934u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1d9938: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d9938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d993c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1d993cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d9940: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1d9940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1d9944: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1d9944u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9948: 0x2502f170  addiu       $v0, $t0, -0xE90
    ctx->pc = 0x1d9948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963568));
    // 0x1d994c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d994cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d9950: 0xac510024  sw          $s1, 0x24($v0)
    ctx->pc = 0x1d9950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 17));
    // 0x1d9954: 0xad03f170  sw          $v1, -0xE90($t0)
    ctx->pc = 0x1d9954u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294963568), GPR_U32(ctx, 3));
    // 0x1d9958: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1d9958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1d995c: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1d995cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1d9960: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d9960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d9964: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d9964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1d9968: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d9968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1d996c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1d996cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1d9970: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1d9970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1d9974: 0xc047a34  jal         func_11E8D0
    ctx->pc = 0x1D9974u;
    SET_GPR_U32(ctx, 31, 0x1D997Cu);
    ctx->pc = 0x1D9978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9974u;
            // 0x1d9978: 0xac540020  sw          $s4, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E8D0u;
    if (runtime->hasFunction(0x11E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x11E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D997Cu; }
        if (ctx->pc != 0x1D997Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11e8d0_0x11ea98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D997Cu; }
        if (ctx->pc != 0x1D997Cu) { return; }
    }
    ctx->pc = 0x1D997Cu;
    // 0x1d997c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1d997cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1d9980: 0x8c62ed58  lw          $v0, -0x12A8($v1)
    ctx->pc = 0x1d9980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962520)));
    // 0x1d9984: 0x8fc34f68  lw          $v1, 0x4F68($fp)
    ctx->pc = 0x1d9984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20328)));
    // 0x1d9988: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d9988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d998c: 0x10430025  beq         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D998Cu;
    {
        const bool branch_taken_0x1d998c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D9990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D998Cu;
            // 0x1d9990: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d998c) {
            ctx->pc = 0x1D9A24u;
            goto label_1d9a24;
        }
    }
    ctx->pc = 0x1D9994u;
    // 0x1d9994: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1d9994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1d9998: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d9998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d999c: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D999Cu;
    {
        const bool branch_taken_0x1d999c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D99A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D999Cu;
            // 0x1d99a0: 0xe440cda4  swc1        $f0, -0x325C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d999c) {
            ctx->pc = 0x1D99F8u;
            goto label_1d99f8;
        }
    }
    ctx->pc = 0x1D99A4u;
    // 0x1d99a4: 0xc641019c  lwc1        $f1, 0x19C($s2)
    ctx->pc = 0x1d99a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d99a8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1d99a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1d99ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d99acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d99b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d99b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d99b4: 0x0  nop
    ctx->pc = 0x1d99b4u;
    // NOP
    // 0x1d99b8: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1D99B8u;
    {
        const bool branch_taken_0x1d99b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D99BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D99B8u;
            // 0x1d99bc: 0x8ee34f64  lw          $v1, 0x4F64($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d99b8) {
            ctx->pc = 0x1D99FCu;
            goto label_1d99fc;
        }
    }
    ctx->pc = 0x1D99C0u;
    // 0x1d99c0: 0xc6410178  lwc1        $f1, 0x178($s2)
    ctx->pc = 0x1d99c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d99c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d99c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d99c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d99c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d99cc: 0x0  nop
    ctx->pc = 0x1d99ccu;
    // NOP
    // 0x1d99d0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1D99D0u;
    {
        const bool branch_taken_0x1d99d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D99D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D99D0u;
            // 0x1d99d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d99d0) {
            ctx->pc = 0x1D9A00u;
            goto label_1d9a00;
        }
    }
    ctx->pc = 0x1D99D8u;
    // 0x1d99d8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1d99d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d99dc: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1d99dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x1d99e0: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x1d99e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1d99e4: 0x40f809  jalr        $v0
    ctx->pc = 0x1D99E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D99ECu);
        ctx->pc = 0x1D99E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D99E4u;
            // 0x1d99e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D99ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D97ECu: goto label_1d97ec;
            case 0x1D97F4u: goto label_1d97f4;
            case 0x1D97F8u: goto label_1d97f8;
            case 0x1D9870u: goto label_1d9870;
            case 0x1D9880u: goto label_1d9880;
            case 0x1D99F8u: goto label_1d99f8;
            case 0x1D99FCu: goto label_1d99fc;
            case 0x1D9A00u: goto label_1d9a00;
            case 0x1D9A1Cu: goto label_1d9a1c;
            case 0x1D9A24u: goto label_1d9a24;
            case 0x1D9A8Cu: goto label_1d9a8c;
            case 0x1D9A90u: goto label_1d9a90;
            case 0x1D9AA8u: goto label_1d9aa8;
            case 0x1D9B00u: goto label_1d9b00;
            case 0x1D9B10u: goto label_1d9b10;
            case 0x1D9B14u: goto label_1d9b14;
            case 0x1D9B48u: goto label_1d9b48;
            case 0x1D9B74u: goto label_1d9b74;
            case 0x1D9B98u: goto label_1d9b98;
            case 0x1D9BC8u: goto label_1d9bc8;
            case 0x1D9C38u: goto label_1d9c38;
            case 0x1D9C4Cu: goto label_1d9c4c;
            case 0x1D9C70u: goto label_1d9c70;
            case 0x1D9D00u: goto label_1d9d00;
            case 0x1D9D04u: goto label_1d9d04;
            case 0x1D9D14u: goto label_1d9d14;
            case 0x1D9D40u: goto label_1d9d40;
            case 0x1D9DC8u: goto label_1d9dc8;
            case 0x1D9DD8u: goto label_1d9dd8;
            case 0x1D9E30u: goto label_1d9e30;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D99ECu; }
            if (ctx->pc != 0x1D99ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1D99ECu;
    // 0x1d99ec: 0x50400049  beql        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x1D99ECu;
    {
        const bool branch_taken_0x1d99ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d99ec) {
            ctx->pc = 0x1D99F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D99ECu;
            // 0x1d99f0: 0x3c17002a  lui         $s7, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9B14u;
            goto label_1d9b14;
        }
    }
    ctx->pc = 0x1D99F4u;
    // 0x1d99f4: 0x0  nop
    ctx->pc = 0x1d99f4u;
    // NOP
label_1d99f8:
    // 0x1d99f8: 0x8ee34f64  lw          $v1, 0x4F64($s7)
    ctx->pc = 0x1d99f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20324)));
label_1d99fc:
    // 0x1d99fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d99fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d9a00:
    // 0x1d9a00: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9A00u;
    {
        const bool branch_taken_0x1d9a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D9A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A00u;
            // 0x1d9a04: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a00) {
            ctx->pc = 0x1D9A1Cu;
            goto label_1d9a1c;
        }
    }
    ctx->pc = 0x1D9A08u;
    // 0x1d9a08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d9a0c: 0x24422de0  addiu       $v0, $v0, 0x2DE0
    ctx->pc = 0x1d9a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11744));
    // 0x1d9a10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d9a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d9a14: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1D9A14u;
    {
        const bool branch_taken_0x1d9a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A14u;
            // 0x1d9a18: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a14) {
            ctx->pc = 0x1D9B10u;
            goto label_1d9b10;
        }
    }
    ctx->pc = 0x1D9A1Cu;
label_1d9a1c:
    // 0x1d9a1c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1D9A1Cu;
    {
        const bool branch_taken_0x1d9a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A1Cu;
            // 0x1d9a20: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a1c) {
            ctx->pc = 0x1D9B10u;
            goto label_1d9b10;
        }
    }
    ctx->pc = 0x1D9A24u;
label_1d9a24:
    // 0x1d9a24: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1d9a24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9a28: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x1d9a28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9a2c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1d9a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1d9a30: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d9a30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d9a34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d9a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9a38: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1d9a38u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9a3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9a40: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d9a40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9a44: 0x0  nop
    ctx->pc = 0x1d9a44u;
    // NOP
    // 0x1d9a48: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x1D9A48u;
    {
        const bool branch_taken_0x1d9a48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D9A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A48u;
            // 0x1d9a4c: 0x3c17002a  lui         $s7, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a48) {
            ctx->pc = 0x1D9B14u;
            goto label_1d9b14;
        }
    }
    ctx->pc = 0x1D9A50u;
    // 0x1d9a50: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x1D9A50u;
    {
        const bool branch_taken_0x1d9a50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A50u;
            // 0x1d9a54: 0x8ea24f60  lw          $v0, 0x4F60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a50) {
            ctx->pc = 0x1D9A8Cu;
            goto label_1d9a8c;
        }
    }
    ctx->pc = 0x1D9A58u;
    // 0x1d9a58: 0xc6410178  lwc1        $f1, 0x178($s2)
    ctx->pc = 0x1d9a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9a5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d9a5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9a60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d9a60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9a64: 0x0  nop
    ctx->pc = 0x1d9a64u;
    // NOP
    // 0x1d9a68: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1D9A68u;
    {
        const bool branch_taken_0x1d9a68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9a68) {
            ctx->pc = 0x1D9A6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A68u;
            // 0x1d9a6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9A90u;
            goto label_1d9a90;
        }
    }
    ctx->pc = 0x1D9A70u;
    // 0x1d9a70: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1d9a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d9a74: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1d9a74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x1d9a78: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x1d9a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1d9a7c: 0x40f809  jalr        $v0
    ctx->pc = 0x1D9A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9A84u);
        ctx->pc = 0x1D9A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A7Cu;
            // 0x1d9a80: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9A84u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D97ECu: goto label_1d97ec;
            case 0x1D97F4u: goto label_1d97f4;
            case 0x1D97F8u: goto label_1d97f8;
            case 0x1D9870u: goto label_1d9870;
            case 0x1D9880u: goto label_1d9880;
            case 0x1D99F8u: goto label_1d99f8;
            case 0x1D99FCu: goto label_1d99fc;
            case 0x1D9A00u: goto label_1d9a00;
            case 0x1D9A1Cu: goto label_1d9a1c;
            case 0x1D9A24u: goto label_1d9a24;
            case 0x1D9A8Cu: goto label_1d9a8c;
            case 0x1D9A90u: goto label_1d9a90;
            case 0x1D9AA8u: goto label_1d9aa8;
            case 0x1D9B00u: goto label_1d9b00;
            case 0x1D9B10u: goto label_1d9b10;
            case 0x1D9B14u: goto label_1d9b14;
            case 0x1D9B48u: goto label_1d9b48;
            case 0x1D9B74u: goto label_1d9b74;
            case 0x1D9B98u: goto label_1d9b98;
            case 0x1D9BC8u: goto label_1d9bc8;
            case 0x1D9C38u: goto label_1d9c38;
            case 0x1D9C4Cu: goto label_1d9c4c;
            case 0x1D9C70u: goto label_1d9c70;
            case 0x1D9D00u: goto label_1d9d00;
            case 0x1D9D04u: goto label_1d9d04;
            case 0x1D9D14u: goto label_1d9d14;
            case 0x1D9D40u: goto label_1d9d40;
            case 0x1D9DC8u: goto label_1d9dc8;
            case 0x1D9DD8u: goto label_1d9dd8;
            case 0x1D9E30u: goto label_1d9e30;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A84u; }
            if (ctx->pc != 0x1D9A84u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9A84u;
    // 0x1d9a84: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D9A84u;
    {
        const bool branch_taken_0x1d9a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A84u;
            // 0x1d9a88: 0x8ea24f60  lw          $v0, 0x4F60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a84) {
            ctx->pc = 0x1D9B10u;
            goto label_1d9b10;
        }
    }
    ctx->pc = 0x1D9A8Cu;
label_1d9a8c:
    // 0x1d9a8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d9a8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a90:
    // 0x1d9a90: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1d9a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1d9a94: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d9a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d9a98: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D9A98u;
    {
        const bool branch_taken_0x1d9a98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D9A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A98u;
            // 0x1d9a9c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a98) {
            ctx->pc = 0x1D9B10u;
            goto label_1d9b10;
        }
    }
    ctx->pc = 0x1D9AA0u;
    // 0x1d9aa0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d9aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9aa4: 0x0  nop
    ctx->pc = 0x1d9aa4u;
    // NOP
label_1d9aa8:
    // 0x1d9aa8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d9aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d9aac: 0x26c32db0  addiu       $v1, $s6, 0x2DB0
    ctx->pc = 0x1d9aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 11696));
    // 0x1d9ab0: 0x24422de0  addiu       $v0, $v0, 0x2DE0
    ctx->pc = 0x1d9ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11744));
    // 0x1d9ab4: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1d9ab4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9ab8: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x1d9ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d9abc: 0x7ba70030  lq          $a3, 0x30($sp)
    ctx->pc = 0x1d9abcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9ac0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1d9ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9ac4: 0xc0764ec  jal         func_1D93B0
    ctx->pc = 0x1D9AC4u;
    SET_GPR_U32(ctx, 31, 0x1D9ACCu);
    ctx->pc = 0x1D9AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9AC4u;
            // 0x1d9ac8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D93B0u;
    if (runtime->hasFunction(0x1D93B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9ACCu; }
        if (ctx->pc != 0x1D9ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D93B0_0x1d93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9ACCu; }
        if (ctx->pc != 0x1D9ACCu) { return; }
    }
    ctx->pc = 0x1D9ACCu;
    // 0x1d9acc: 0xdba30050  lqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1d9accu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d9ad0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1d9ad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1d9ad4: 0x4be118aa  vmul.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1d9ad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d9ad8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d9ad8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9adc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d9adcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9ae0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1d9ae0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9ae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d9ae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9ae8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1d9ae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9aec: 0x0  nop
    ctx->pc = 0x1d9aecu;
    // NOP
    // 0x1d9af0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9AF0u;
    {
        const bool branch_taken_0x1d9af0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D9AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9AF0u;
            // 0x1d9af4: 0x8ea24f60  lw          $v0, 0x4F60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9af0) {
            ctx->pc = 0x1D9B00u;
            goto label_1d9b00;
        }
    }
    ctx->pc = 0x1D9AF8u;
    // 0x1d9af8: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x1d9af8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9afc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d9afcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1d9b00:
    // 0x1d9b00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d9b00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d9b04: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d9b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d9b08: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1D9B08u;
    {
        const bool branch_taken_0x1d9b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B08u;
            // 0x1d9b0c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b08) {
            ctx->pc = 0x1D9AA8u;
            runtime->cooperativeGuestYield();
            goto label_1d9aa8;
        }
    }
    ctx->pc = 0x1D9B10u;
label_1d9b10:
    // 0x1d9b10: 0x3c17002a  lui         $s7, 0x2A
    ctx->pc = 0x1d9b10u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)42 << 16));
label_1d9b14:
    // 0x1d9b14: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d9b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d9b18: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1d9b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9b1c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1d9b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1d9b20: 0xc6e0cda4  lwc1        $f0, -0x325C($s7)
    ctx->pc = 0x1d9b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294954404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9b24: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1d9b24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d9b28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d9b28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d9b2c: 0x8c82ed58  lw          $v0, -0x12A8($a0)
    ctx->pc = 0x1d9b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294962520)));
    // 0x1d9b30: 0xafc24f68  sw          $v0, 0x4F68($fp)
    ctx->pc = 0x1d9b30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20328), GPR_U32(ctx, 2));
    // 0x1d9b34: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1d9b34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9b38: 0x0  nop
    ctx->pc = 0x1d9b38u;
    // NOP
    // 0x1d9b3c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9B3Cu;
    {
        const bool branch_taken_0x1d9b3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D9B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B3Cu;
            // 0x1d9b40: 0xe6e0cda4  swc1        $f0, -0x325C($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294954404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b3c) {
            ctx->pc = 0x1D9B48u;
            goto label_1d9b48;
        }
    }
    ctx->pc = 0x1D9B44u;
    // 0x1d9b44: 0xe6e2cda4  swc1        $f2, -0x325C($s7)
    ctx->pc = 0x1d9b44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294954404), bits); }
label_1d9b48:
    // 0x1d9b48: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1d9b48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9b4c: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x1d9b4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9b50: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1d9b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1d9b54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d9b54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d9b58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d9b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9b5c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1d9b5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9b60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9b64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d9b64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9b68: 0x0  nop
    ctx->pc = 0x1d9b68u;
    // NOP
    // 0x1d9b6c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9B6Cu;
    {
        const bool branch_taken_0x1d9b6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9b6c) {
            ctx->pc = 0x1D9B70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B6Cu;
            // 0x1d9b70: 0xe6e2cda4  swc1        $f2, -0x325C($s7) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294954404), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9B74u;
            goto label_1d9b74;
        }
    }
    ctx->pc = 0x1D9B74u;
label_1d9b74:
    // 0x1d9b74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9b74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9b78: 0x0  nop
    ctx->pc = 0x1d9b78u;
    // NOP
    // 0x1d9b7c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9B7Cu;
    {
        const bool branch_taken_0x1d9b7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D9B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B7Cu;
            // 0x1d9b80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b7c) {
            ctx->pc = 0x1D9B98u;
            goto label_1d9b98;
        }
    }
    ctx->pc = 0x1D9B84u;
    // 0x1d9b84: 0xc6e0cda4  lwc1        $f0, -0x325C($s7)
    ctx->pc = 0x1d9b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294954404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9b88: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1d9b88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9b8c: 0x0  nop
    ctx->pc = 0x1d9b8cu;
    // NOP
    // 0x1d9b90: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9B90u;
    {
        const bool branch_taken_0x1d9b90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9b90) {
            ctx->pc = 0x1D9B94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B90u;
            // 0x1d9b94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9B98u;
            goto label_1d9b98;
        }
    }
    ctx->pc = 0x1D9B98u;
label_1d9b98:
    // 0x1d9b98: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x1D9B98u;
    {
        const bool branch_taken_0x1d9b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B98u;
            // 0x1d9b9c: 0x3c100030  lui         $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b98) {
            ctx->pc = 0x1D9DD8u;
            goto label_1d9dd8;
        }
    }
    ctx->pc = 0x1D9BA0u;
    // 0x1d9ba0: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x1d9ba0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9ba4: 0x8e024f60  lw          $v0, 0x4F60($s0)
    ctx->pc = 0x1d9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20320)));
    // 0x1d9ba8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d9ba8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9bac: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x1d9bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x1d9bb0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1d9bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1d9bb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d9bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d9bb8: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D9BB8u;
    {
        const bool branch_taken_0x1d9bb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D9BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9BB8u;
            // 0x1d9bbc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9bb8) {
            ctx->pc = 0x1D9C4Cu;
            goto label_1d9c4c;
        }
    }
    ctx->pc = 0x1D9BC0u;
    // 0x1d9bc0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d9bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d9bc4: 0x0  nop
    ctx->pc = 0x1d9bc4u;
    // NOP
label_1d9bc8:
    // 0x1d9bc8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d9bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d9bcc: 0x24422de0  addiu       $v0, $v0, 0x2DE0
    ctx->pc = 0x1d9bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11744));
    // 0x1d9bd0: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x1d9bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x1d9bd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d9bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d9bd8: 0x24c62db0  addiu       $a2, $a2, 0x2DB0
    ctx->pc = 0x1d9bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11696));
    // 0x1d9bdc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1d9bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9be0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d9be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9be4: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x1d9be4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d9be8: 0xc0764ec  jal         func_1D93B0
    ctx->pc = 0x1D9BE8u;
    SET_GPR_U32(ctx, 31, 0x1D9BF0u);
    ctx->pc = 0x1D9BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9BE8u;
            // 0x1d9bec: 0x7ba70030  lq          $a3, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D93B0u;
    if (runtime->hasFunction(0x1D93B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BF0u; }
        if (ctx->pc != 0x1D9BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D93B0_0x1d93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BF0u; }
        if (ctx->pc != 0x1D9BF0u) { return; }
    }
    ctx->pc = 0x1D9BF0u;
    // 0x1d9bf0: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1d9bf0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1d9bf4: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1d9bf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9bf8: 0x4be118aa  vmul.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1d9bf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d9bfc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d9bfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9c00: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d9c00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9c04: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1d9c04u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9c08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d9c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9c0c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1d9c0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9c10: 0x0  nop
    ctx->pc = 0x1d9c10u;
    // NOP
    // 0x1d9c14: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9C14u;
    {
        const bool branch_taken_0x1d9c14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D9C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C14u;
            // 0x1d9c18: 0xdba20040  lqc2        $vf2, 0x40($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c14) {
            ctx->pc = 0x1D9C38u;
            goto label_1d9c38;
        }
    }
    ctx->pc = 0x1D9C1Cu;
    // 0x1d9c1c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d9c1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1d9c20: 0x4be2186a  vmul.xyzw   $vf1, $vf3, $vf2
    ctx->pc = 0x1d9c20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9c24: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1d9c24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d9c28: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1d9c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1d9c2c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1d9c2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d9c30: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1d9c30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d9c34: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d9c34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9c38:
    // 0x1d9c38: 0x8e024f60  lw          $v0, 0x4F60($s0)
    ctx->pc = 0x1d9c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20320)));
    // 0x1d9c3c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d9c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d9c40: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d9c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d9c44: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D9C44u;
    {
        const bool branch_taken_0x1d9c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C44u;
            // 0x1d9c48: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c44) {
            ctx->pc = 0x1D9BC8u;
            runtime->cooperativeGuestYield();
            goto label_1d9bc8;
        }
    }
    ctx->pc = 0x1D9C4Cu;
label_1d9c4c:
    // 0x1d9c4c: 0x3c1e0030  lui         $fp, 0x30
    ctx->pc = 0x1d9c4cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)48 << 16));
    // 0x1d9c50: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1d9c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1d9c54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d9c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d9c58: 0x8fc24f60  lw          $v0, 0x4F60($fp)
    ctx->pc = 0x1d9c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20320)));
    // 0x1d9c5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d9c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c60: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1D9C60u;
    {
        const bool branch_taken_0x1d9c60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D9C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C60u;
            // 0x1d9c64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c60) {
            ctx->pc = 0x1D9D14u;
            goto label_1d9d14;
        }
    }
    ctx->pc = 0x1D9C68u;
    // 0x1d9c68: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1d9c68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c6c: 0x0  nop
    ctx->pc = 0x1d9c6cu;
    // NOP
label_1d9c70:
    // 0x1d9c70: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d9c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d9c74: 0x24422de0  addiu       $v0, $v0, 0x2DE0
    ctx->pc = 0x1d9c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11744));
    // 0x1d9c78: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x1d9c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d9c7c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1d9c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9c80: 0x1265001f  beq         $s3, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D9C80u;
    {
        const bool branch_taken_0x1d9c80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D9C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C80u;
            // 0x1d9c84: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c80) {
            ctx->pc = 0x1D9D00u;
            goto label_1d9d00;
        }
    }
    ctx->pc = 0x1D9C88u;
    // 0x1d9c88: 0x7ba70030  lq          $a3, 0x30($sp)
    ctx->pc = 0x1d9c88u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9c8c: 0x24422db0  addiu       $v0, $v0, 0x2DB0
    ctx->pc = 0x1d9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11696));
    // 0x1d9c90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d9c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c94: 0xc0764ec  jal         func_1D93B0
    ctx->pc = 0x1D9C94u;
    SET_GPR_U32(ctx, 31, 0x1D9C9Cu);
    ctx->pc = 0x1D9C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C94u;
            // 0x1d9c98: 0x78460000  lq          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D93B0u;
    if (runtime->hasFunction(0x1D93B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C9Cu; }
        if (ctx->pc != 0x1D9C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D93B0_0x1d93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C9Cu; }
        if (ctx->pc != 0x1D9C9Cu) { return; }
    }
    ctx->pc = 0x1D9C9Cu;
    // 0x1d9c9c: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1d9c9cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1d9ca0: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1d9ca0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9ca4: 0x4be118aa  vmul.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1d9ca4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d9ca8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d9ca8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9cac: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d9cacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9cb0: 0x48b61000  qmtc2.ni    $s6, $vf2
    ctx->pc = 0x1d9cb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 22));
    // 0x1d9cb4: 0x4b020858  vmulx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x1d9cb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9cb8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d9cb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9cbc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1d9cbcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d9cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9cc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d9cc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9cc8: 0x0  nop
    ctx->pc = 0x1d9cc8u;
    // NOP
    // 0x1d9ccc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1D9CCCu;
    {
        const bool branch_taken_0x1d9ccc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D9CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9CCCu;
            // 0x1d9cd0: 0xdba20050  lqc2        $vf2, 0x50($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ccc) {
            ctx->pc = 0x1D9D00u;
            goto label_1d9d00;
        }
    }
    ctx->pc = 0x1D9CD4u;
    // 0x1d9cd4: 0x4be3106a  vmul.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x1d9cd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9cd8: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1d9cd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d9cdc: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1d9cdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d9ce0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1d9ce0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d9ce4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d9ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9ce8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1d9ce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9cec: 0x0  nop
    ctx->pc = 0x1d9cecu;
    // NOP
    // 0x1d9cf0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9CF0u;
    {
        const bool branch_taken_0x1d9cf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D9CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9CF0u;
            // 0x1d9cf4: 0x8fc24f60  lw          $v0, 0x4F60($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9cf0) {
            ctx->pc = 0x1D9D04u;
            goto label_1d9d04;
        }
    }
    ctx->pc = 0x1D9CF8u;
    // 0x1d9cf8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1d9cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9cfc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d9cfcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1d9d00:
    // 0x1d9d00: 0x8fc24f60  lw          $v0, 0x4F60($fp)
    ctx->pc = 0x1d9d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20320)));
label_1d9d04:
    // 0x1d9d04: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d9d04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d9d08: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d9d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d9d0c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1D9D0Cu;
    {
        const bool branch_taken_0x1d9d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D0Cu;
            // 0x1d9d10: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d0c) {
            ctx->pc = 0x1D9C70u;
            runtime->cooperativeGuestYield();
            goto label_1d9c70;
        }
    }
    ctx->pc = 0x1D9D14u;
label_1d9d14:
    // 0x1d9d14: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D9D14u;
    {
        const bool branch_taken_0x1d9d14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9d14) {
            ctx->pc = 0x1D9D40u;
            goto label_1d9d40;
        }
    }
    ctx->pc = 0x1D9D1Cu;
    // 0x1d9d1c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9D1Cu;
    {
        const bool branch_taken_0x1d9d1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D1Cu;
            // 0x1d9d20: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d1c) {
            ctx->pc = 0x1D9D40u;
            goto label_1d9d40;
        }
    }
    ctx->pc = 0x1D9D24u;
    // 0x1d9d24: 0x7ba70030  lq          $a3, 0x30($sp)
    ctx->pc = 0x1d9d24u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9d28: 0x24422db0  addiu       $v0, $v0, 0x2DB0
    ctx->pc = 0x1d9d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11696));
    // 0x1d9d2c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1d9d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d30: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x1d9d30u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9d34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d9d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d38: 0xc0764ec  jal         func_1D93B0
    ctx->pc = 0x1D9D38u;
    SET_GPR_U32(ctx, 31, 0x1D9D40u);
    ctx->pc = 0x1D9D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D38u;
            // 0x1d9d3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D93B0u;
    if (runtime->hasFunction(0x1D93B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D40u; }
        if (ctx->pc != 0x1D9D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D93B0_0x1d93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D40u; }
        if (ctx->pc != 0x1D9D40u) { return; }
    }
    ctx->pc = 0x1D9D40u;
label_1d9d40:
    // 0x1d9d40: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D9D40u;
    {
        const bool branch_taken_0x1d9d40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9d40) {
            ctx->pc = 0x1D9DC8u;
            goto label_1d9dc8;
        }
    }
    ctx->pc = 0x1D9D48u;
    // 0x1d9d48: 0x1260001f  beqz        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D9D48u;
    {
        const bool branch_taken_0x1d9d48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D48u;
            // 0x1d9d4c: 0x3c100030  lui         $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d48) {
            ctx->pc = 0x1D9DC8u;
            goto label_1d9dc8;
        }
    }
    ctx->pc = 0x1D9D50u;
    // 0x1d9d50: 0x7ba70030  lq          $a3, 0x30($sp)
    ctx->pc = 0x1d9d50u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9d54: 0x26102db0  addiu       $s0, $s0, 0x2DB0
    ctx->pc = 0x1d9d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11696));
    // 0x1d9d58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d9d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d5c: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x1d9d5cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9d60: 0xc0764ec  jal         func_1D93B0
    ctx->pc = 0x1D9D60u;
    SET_GPR_U32(ctx, 31, 0x1D9D68u);
    ctx->pc = 0x1D9D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D60u;
            // 0x1d9d64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D93B0u;
    if (runtime->hasFunction(0x1D93B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D68u; }
        if (ctx->pc != 0x1D9D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D93B0_0x1d93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D68u; }
        if (ctx->pc != 0x1D9D68u) { return; }
    }
    ctx->pc = 0x1D9D68u;
    // 0x1d9d68: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1d9d68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d9d6c: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1d9d6cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1d9d70: 0x4be308aa  vmul.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1d9d70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d9d74: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d9d74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9d78: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d9d78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9d7c: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x1d9d7cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9d80: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1d9d80u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9d84: 0x7ba70030  lq          $a3, 0x30($sp)
    ctx->pc = 0x1d9d84u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9d88: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x1d9d88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d9d8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d9d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d90: 0xc0764ec  jal         func_1D93B0
    ctx->pc = 0x1D9D90u;
    SET_GPR_U32(ctx, 31, 0x1D9D98u);
    ctx->pc = 0x1D9D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D90u;
            // 0x1d9d94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D93B0u;
    if (runtime->hasFunction(0x1D93B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D98u; }
        if (ctx->pc != 0x1D9D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D93B0_0x1d93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D98u; }
        if (ctx->pc != 0x1D9D98u) { return; }
    }
    ctx->pc = 0x1D9D98u;
    // 0x1d9d98: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1d9d98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d9d9c: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1d9d9cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1d9da0: 0x4be308aa  vmul.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1d9da0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d9da4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d9da4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9da8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d9da8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9dac: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1d9dacu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9db0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d9db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9db4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1d9db4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9db8: 0x0  nop
    ctx->pc = 0x1d9db8u;
    // NOP
    // 0x1d9dbc: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9DBCu;
    {
        const bool branch_taken_0x1d9dbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9dbc) {
            ctx->pc = 0x1D9DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9DBCu;
            // 0x1d9dc0: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9DC8u;
            goto label_1d9dc8;
        }
    }
    ctx->pc = 0x1D9DC4u;
    // 0x1d9dc4: 0x0  nop
    ctx->pc = 0x1d9dc4u;
    // NOP
label_1d9dc8:
    // 0x1d9dc8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1d9dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1d9dcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d9dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9dd0: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x1d9dd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9dd4: 0xe6e0cda4  swc1        $f0, -0x325C($s7)
    ctx->pc = 0x1d9dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294954404), bits); }
label_1d9dd8:
    // 0x1d9dd8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1d9dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ddc: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1d9ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d9de0: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1d9de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d9de4: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1d9de4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d9de8: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1d9de8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d9dec: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1d9decu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d9df0: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1d9df0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d9df4: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x1d9df4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d9df8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1d9df8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d9dfc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d9dfcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d9e00: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1d9e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d9e04: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1d9e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d9e08: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9E08u;
            // 0x1d9e0c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D97ECu: goto label_1d97ec;
            case 0x1D97F4u: goto label_1d97f4;
            case 0x1D97F8u: goto label_1d97f8;
            case 0x1D9870u: goto label_1d9870;
            case 0x1D9880u: goto label_1d9880;
            case 0x1D99F8u: goto label_1d99f8;
            case 0x1D99FCu: goto label_1d99fc;
            case 0x1D9A00u: goto label_1d9a00;
            case 0x1D9A1Cu: goto label_1d9a1c;
            case 0x1D9A24u: goto label_1d9a24;
            case 0x1D9A8Cu: goto label_1d9a8c;
            case 0x1D9A90u: goto label_1d9a90;
            case 0x1D9AA8u: goto label_1d9aa8;
            case 0x1D9B00u: goto label_1d9b00;
            case 0x1D9B10u: goto label_1d9b10;
            case 0x1D9B14u: goto label_1d9b14;
            case 0x1D9B48u: goto label_1d9b48;
            case 0x1D9B74u: goto label_1d9b74;
            case 0x1D9B98u: goto label_1d9b98;
            case 0x1D9BC8u: goto label_1d9bc8;
            case 0x1D9C38u: goto label_1d9c38;
            case 0x1D9C4Cu: goto label_1d9c4c;
            case 0x1D9C70u: goto label_1d9c70;
            case 0x1D9D00u: goto label_1d9d00;
            case 0x1D9D04u: goto label_1d9d04;
            case 0x1D9D14u: goto label_1d9d14;
            case 0x1D9D40u: goto label_1d9d40;
            case 0x1D9DC8u: goto label_1d9dc8;
            case 0x1D9DD8u: goto label_1d9dd8;
            case 0x1D9E30u: goto label_1d9e30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D9E10u;
    // 0x1d9e10: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1d9e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1d9e14: 0x8c4277b4  lw          $v0, 0x77B4($v0)
    ctx->pc = 0x1d9e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30644)));
    // 0x1d9e18: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x1d9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1d9e1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9E1Cu;
    {
        const bool branch_taken_0x1d9e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9E1Cu;
            // 0x1d9e20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e1c) {
            ctx->pc = 0x1D9E30u;
            goto label_1d9e30;
        }
    }
    ctx->pc = 0x1D9E24u;
    // 0x1d9e24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d9e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9e28: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9E28u;
    {
        const bool branch_taken_0x1d9e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d9e28) {
            ctx->pc = 0x1D9E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9E28u;
            // 0x1d9e2c: 0x8c660008  lw          $a2, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9E30u;
            goto label_1d9e30;
        }
    }
    ctx->pc = 0x1D9E30u;
label_1d9e30:
    // 0x1d9e30: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1d9e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x1d9e34: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1d9e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1d9e38: 0x8ca24f60  lw          $v0, 0x4F60($a1)
    ctx->pc = 0x1d9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20320)));
    // 0x1d9e3c: 0x24842de0  addiu       $a0, $a0, 0x2DE0
    ctx->pc = 0x1d9e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11744));
    // 0x1d9e40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d9e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d9e44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d9e48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d9e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d9e4c: 0xaca24f60  sw          $v0, 0x4F60($a1)
    ctx->pc = 0x1d9e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20320), GPR_U32(ctx, 2));
    // 0x1d9e50: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1d9e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1d9e54: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9E54u;
            // 0x1d9e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D97ECu: goto label_1d97ec;
            case 0x1D97F4u: goto label_1d97f4;
            case 0x1D97F8u: goto label_1d97f8;
            case 0x1D9870u: goto label_1d9870;
            case 0x1D9880u: goto label_1d9880;
            case 0x1D99F8u: goto label_1d99f8;
            case 0x1D99FCu: goto label_1d99fc;
            case 0x1D9A00u: goto label_1d9a00;
            case 0x1D9A1Cu: goto label_1d9a1c;
            case 0x1D9A24u: goto label_1d9a24;
            case 0x1D9A8Cu: goto label_1d9a8c;
            case 0x1D9A90u: goto label_1d9a90;
            case 0x1D9AA8u: goto label_1d9aa8;
            case 0x1D9B00u: goto label_1d9b00;
            case 0x1D9B10u: goto label_1d9b10;
            case 0x1D9B14u: goto label_1d9b14;
            case 0x1D9B48u: goto label_1d9b48;
            case 0x1D9B74u: goto label_1d9b74;
            case 0x1D9B98u: goto label_1d9b98;
            case 0x1D9BC8u: goto label_1d9bc8;
            case 0x1D9C38u: goto label_1d9c38;
            case 0x1D9C4Cu: goto label_1d9c4c;
            case 0x1D9C70u: goto label_1d9c70;
            case 0x1D9D00u: goto label_1d9d00;
            case 0x1D9D04u: goto label_1d9d04;
            case 0x1D9D14u: goto label_1d9d14;
            case 0x1D9D40u: goto label_1d9d40;
            case 0x1D9DC8u: goto label_1d9dc8;
            case 0x1D9DD8u: goto label_1d9dd8;
            case 0x1D9E30u: goto label_1d9e30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D9E5Cu;
    // 0x1d9e5c: 0x0  nop
    ctx->pc = 0x1d9e5cu;
    // NOP
}
