#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00102608
// Address: 0x102608 - 0x102900
void sub_00102608_0x102608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102608_0x102608");
#endif

    ctx->pc = 0x102608u;

    // 0x102608: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x102608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x10260c: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x10260cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
    // 0x102610: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x102610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
    // 0x102614: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102618: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x102618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
    // 0x10261c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x10261cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102620: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x102620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
    // 0x102624: 0x7fb301a0  sq          $s3, 0x1A0($sp)
    ctx->pc = 0x102624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 19));
    // 0x102628: 0x7fb40190  sq          $s4, 0x190($sp)
    ctx->pc = 0x102628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 20));
    // 0x10262c: 0x7fb60170  sq          $s6, 0x170($sp)
    ctx->pc = 0x10262cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 22));
    // 0x102630: 0x7fb70160  sq          $s7, 0x160($sp)
    ctx->pc = 0x102630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 23));
    // 0x102634: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x102634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
    // 0x102638: 0x8e171124  lw          $s7, 0x1124($s0)
    ctx->pc = 0x102638u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4388)));
    // 0x10263c: 0x8e131128  lw          $s3, 0x1128($s0)
    ctx->pc = 0x10263cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4392)));
    // 0x102640: 0x8e12000c  lw          $s2, 0xC($s0)
    ctx->pc = 0x102640u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x102644: 0x8e160010  lw          $s6, 0x10($s0)
    ctx->pc = 0x102644u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x102648: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x102648u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10264c: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x10264cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x102650: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x102650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x102654: 0xdc43bdf8  ld          $v1, -0x4208($v0)
    ctx->pc = 0x102654u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x102658: 0xdca20040  ld          $v0, 0x40($a1)
    ctx->pc = 0x102658u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x10265c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10265Cu;
    {
        const bool branch_taken_0x10265c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x102660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10265Cu;
            // 0x102660: 0x8e060078  lw          $a2, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10265c) {
            ctx->pc = 0x102678u;
            goto label_102678;
        }
    }
    ctx->pc = 0x102664u;
    // 0x102664: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x102664u;
    SET_GPR_U32(ctx, 31, 0x10266Cu);
    ctx->pc = 0x102668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102664u;
            // 0x102668: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10266Cu; }
        if (ctx->pc != 0x10266Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10266Cu; }
        if (ctx->pc != 0x10266Cu) { return; }
    }
    ctx->pc = 0x10266Cu;
    // 0x10266c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10266Cu;
    {
        const bool branch_taken_0x10266c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10266Cu;
            // 0x102670: 0xdba10040  lqc2        $vf1, 0x40($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10266c) {
            ctx->pc = 0x1026A8u;
            goto label_1026a8;
        }
    }
    ctx->pc = 0x102674u;
    // 0x102674: 0x0  nop
    ctx->pc = 0x102674u;
    // NOP
label_102678:
    // 0x102678: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x102678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x10267c: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x10267cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x102680: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x102680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102684: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x102684u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102688: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x102688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x10268c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x10268cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x102690: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x102690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x102694: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x102694u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x102698: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x102698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x10269c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x10269cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1026a0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1026a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1026a4: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1026a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1026a8:
    // 0x1026a8: 0x7ba40050  lq          $a0, 0x50($sp)
    ctx->pc = 0x1026a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1026ac: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1026acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1026b0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1026b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1026b4: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x1026b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1026b8: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x1026b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x1026bc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1026bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1026c0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1026c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x1026c4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1026c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1026c8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1026c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1026cc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1026ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1026d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1026d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1026d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1026d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1026d8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1026d8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1026dc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1026dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1026e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1026e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1026e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1026e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1026e8: 0x46000004  c1          0x4
    ctx->pc = 0x1026e8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1026ec: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1026ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1026f0: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x1026f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1026f4: 0xc06149c  jal         func_185270
    ctx->pc = 0x1026F4u;
    SET_GPR_U32(ctx, 31, 0x1026FCu);
    ctx->pc = 0x185270u;
    if (runtime->hasFunction(0x185270u)) {
        auto targetFn = runtime->lookupFunction(0x185270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1026FCu; }
        if (ctx->pc != 0x1026FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_185270_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1026FCu; }
        if (ctx->pc != 0x1026FCu) { return; }
    }
    ctx->pc = 0x1026FCu;
    // 0x1026fc: 0x7ba70080  lq          $a3, 0x80($sp)
    ctx->pc = 0x1026fcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x102700: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x102700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x102704: 0x7ba60090  lq          $a2, 0x90($sp)
    ctx->pc = 0x102704u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x102708: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x102708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10270c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x10270cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x102710: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x102710u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x102714: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x102714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x102718: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x102718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x10271c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x10271cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x102720: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x102720u;
    SET_GPR_U32(ctx, 31, 0x102728u);
    ctx->pc = 0x102724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102720u;
            // 0x102724: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102728u; }
        if (ctx->pc != 0x102728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102728u; }
        if (ctx->pc != 0x102728u) { return; }
    }
    ctx->pc = 0x102728u;
    // 0x102728: 0x2577018  mult        $t6, $s2, $s7
    ctx->pc = 0x102728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x10272c: 0x8e04112c  lw          $a0, 0x112C($s0)
    ctx->pc = 0x10272cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4396)));
    // 0x102730: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x102730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x102734: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x102734u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x102738: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x102738u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10273c: 0x4b011080  vaddx.x     $vf2, $vf2, $vf1x
    ctx->pc = 0x10273cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102740: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x102740u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102744: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x102744u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x102748: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x102748u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10274c: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x10274cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x102750: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x102750u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102754: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x102754u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x102758: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x102758u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10275c: 0x4be20a4b  vmaddw.xyzw $vf9, $vf1, $vf2w
    ctx->pc = 0x10275cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x102760: 0x1ac0005b  blez        $s6, . + 4 + (0x5B << 2)
    ctx->pc = 0x102760u;
    {
        const bool branch_taken_0x102760 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x102764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102760u;
            // 0x102764: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102760) {
            ctx->pc = 0x1028D0u;
            goto label_1028d0;
        }
    }
    ctx->pc = 0x102768u;
    // 0x102768: 0x7ba60100  lq          $a2, 0x100($sp)
    ctx->pc = 0x102768u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10276c: 0x4bea0b3c  vmove.xyzw  $vf10, $vf1
    ctx->pc = 0x10276cu;
    ctx->vu0_vf[10] = ctx->vu0_vf[1];
    // 0x102770: 0x7bad00c0  lq          $t5, 0xC0($sp)
    ctx->pc = 0x102770u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x102774: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x102774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102778: 0x7bac00d0  lq          $t4, 0xD0($sp)
    ctx->pc = 0x102778u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x10277c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x10277cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102780: 0x7bab00e0  lq          $t3, 0xE0($sp)
    ctx->pc = 0x102780u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x102784: 0x7baa00f0  lq          $t2, 0xF0($sp)
    ctx->pc = 0x102784u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_102788:
    // 0x102788: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x102788u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10278c: 0x4bea086c  vsub.xyzw   $vf1, $vf1, $vf10
    ctx->pc = 0x10278cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102790: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x102790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102794: 0x48b11000  qmtc2.ni    $s1, $vf2
    ctx->pc = 0x102794u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
    // 0x102798: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x102798u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10279c: 0x4bea0928  vadd.xyzw   $vf4, $vf1, $vf10
    ctx->pc = 0x10279cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1027a0: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x1027a0u;
    ctx->vu0_vf[4] = ctx->vu0_vf[0];
    // 0x1027a4: 0x1a400042  blez        $s2, . + 4 + (0x42 << 2)
    ctx->pc = 0x1027A4u;
    {
        const bool branch_taken_0x1027a4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1027A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1027A4u;
            // 0x1027a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1027a4) {
            ctx->pc = 0x1028B0u;
            goto label_1028b0;
        }
    }
    ctx->pc = 0x1027ACu;
    // 0x1027ac: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x1027acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x1027b0: 0x48a61800  qmtc2.ni    $a2, $vf3
    ctx->pc = 0x1027b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1027b4: 0x4beb533c  vmove.xyzw  $vf11, $vf10
    ctx->pc = 0x1027b4u;
    ctx->vu0_vf[11] = ctx->vu0_vf[10];
    // 0x1027b8: 0x483021  addu        $a2, $v0, $t0
    ctx->pc = 0x1027b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1027bc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1027bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1027c0: 0x48ad4000  qmtc2.ni    $t5, $vf8
    ctx->pc = 0x1027c0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 13));
    // 0x1027c4: 0x48ac3800  qmtc2.ni    $t4, $vf7
    ctx->pc = 0x1027c4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
    // 0x1027c8: 0x48ab3000  qmtc2.ni    $t3, $vf6
    ctx->pc = 0x1027c8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x1027cc: 0x48aa2800  qmtc2.ni    $t2, $vf5
    ctx->pc = 0x1027ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
label_1027d0:
    // 0x1027d0: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x1027d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1027d4: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x1027d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1027d8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1027D8u;
    {
        const bool branch_taken_0x1027d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1027DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1027D8u;
            // 0x1027dc: 0xdbac0140  lqc2        $vf12, 0x140($sp) (Delay Slot)
        ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1027d8) {
            ctx->pc = 0x102830u;
            goto label_102830;
        }
    }
    ctx->pc = 0x1027E0u;
    // 0x1027e0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1027e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1027e4: 0x4beb086c  vsub.xyzw   $vf1, $vf1, $vf11
    ctx->pc = 0x1027e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1027e8: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x1027e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1027ec: 0x48b11000  qmtc2.ni    $s1, $vf2
    ctx->pc = 0x1027ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
    // 0x1027f0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1027f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1027f4: 0x4beb08a8  vadd.xyzw   $vf2, $vf1, $vf11
    ctx->pc = 0x1027f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1027f8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1027f8u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x1027fc: 0xfba20130  sqc2        $vf2, 0x130($sp)
    ctx->pc = 0x1027fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x102800: 0x4be220ac  vsub.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x102800u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102804: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x102804u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x102808: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x102808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10280c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x10280cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102810: 0x4be3133c  vmove.xyzw  $vf3, $vf2
    ctx->pc = 0x102810u;
    ctx->vu0_vf[3] = ctx->vu0_vf[2];
    // 0x102814: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x102814u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x102818: 0x4a0003bf  vwaitq
    ctx->pc = 0x102818u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10281c: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x10281cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x102820: 0x4a0002ff  vnop
    ctx->pc = 0x102820u;
    // NOP operation, no action needed for VU0
    // 0x102824: 0x4a0002ff  vnop
    ctx->pc = 0x102824u;
    // NOP operation, no action needed for VU0
    // 0x102828: 0xfba30140  sqc2        $vf3, 0x140($sp)
    ctx->pc = 0x102828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10282c: 0xdbac0140  lqc2        $vf12, 0x140($sp)
    ctx->pc = 0x10282cu;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_102830:
    // 0x102830: 0x4bcc4afe  vopmula.xyz $ACC, $vf9, $vf12
    ctx->pc = 0x102830u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[9], ctx->vu0_vf[12]);
    // 0x102834: 0x4bc960ae  vopmsub.xyz $vf2, $vf12, $vf9
    ctx->pc = 0x102834u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[9]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x102838: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x102838u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10283c: 0x4be941bc  vmulax.xyzw $ACC, $vf8, $vf9x
    ctx->pc = 0x10283cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x102840: 0x4be938bd  vmadday.xyzw $ACC, $vf7, $vf9y
    ctx->pc = 0x102840u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x102844: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x102844u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x102848: 0x4be9284b  vmaddw.xyzw $vf1, $vf5, $vf9w
    ctx->pc = 0x102848u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10284c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x10284cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102850: 0x4bec41bc  vmulax.xyzw $ACC, $vf8, $vf12x
    ctx->pc = 0x102850u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x102854: 0x4bec38bd  vmadday.xyzw $ACC, $vf7, $vf12y
    ctx->pc = 0x102854u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x102858: 0x4bec30be  vmaddaz.xyzw $ACC, $vf6, $vf12z
    ctx->pc = 0x102858u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10285c: 0x4bec284b  vmaddw.xyzw $vf1, $vf5, $vf12w
    ctx->pc = 0x10285cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x102860: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x102860u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102864: 0x4be241bc  vmulax.xyzw $ACC, $vf8, $vf2x
    ctx->pc = 0x102864u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x102868: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x102868u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10286c: 0x4be230be  vmaddaz.xyzw $ACC, $vf6, $vf2z
    ctx->pc = 0x10286cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x102870: 0x4be2288b  vmaddw.xyzw $vf2, $vf5, $vf2w
    ctx->pc = 0x102870u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x102874: 0xf8620020  sqc2        $vf2, 0x20($v1)
    ctx->pc = 0x102874u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x102878: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x102878u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10287c: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x10287cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x102880: 0x4be430be  vmaddaz.xyzw $ACC, $vf6, $vf4z
    ctx->pc = 0x102880u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x102884: 0x4be4284b  vmaddw.xyzw $vf1, $vf5, $vf4w
    ctx->pc = 0x102884u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x102888: 0xf8610030  sqc2        $vf1, 0x30($v1)
    ctx->pc = 0x102888u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10288c: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x10288cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x102890: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x102890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x102894: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x102894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x102898: 0xdba40130  lqc2        $vf4, 0x130($sp)
    ctx->pc = 0x102898u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x10289c: 0xf2102a  slt         $v0, $a3, $s2
    ctx->pc = 0x10289cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1028a0: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1028A0u;
    {
        const bool branch_taken_0x1028a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1028A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1028A0u;
            // 0x1028a4: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028a0) {
            ctx->pc = 0x1027D0u;
            runtime->cooperativeGuestYield();
            goto label_1027d0;
        }
    }
    ctx->pc = 0x1028A8u;
    // 0x1028a8: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x1028a8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1028ac: 0x0  nop
    ctx->pc = 0x1028acu;
    // NOP
label_1028b0:
    // 0x1028b0: 0xe1140  sll         $v0, $t6, 5
    ctx->pc = 0x1028b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 5));
    // 0x1028b4: 0x1374821  addu        $t1, $t1, $s7
    ctx->pc = 0x1028b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 23)));
    // 0x1028b8: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x1028b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1028bc: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x1028bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1028c0: 0x136102a  slt         $v0, $t1, $s6
    ctx->pc = 0x1028c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1028c4: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x1028C4u;
    {
        const bool branch_taken_0x1028c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1028C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1028C4u;
            // 0x1028c8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028c4) {
            ctx->pc = 0x102788u;
            runtime->cooperativeGuestYield();
            goto label_102788;
        }
    }
    ctx->pc = 0x1028CCu;
    // 0x1028cc: 0x7fa60100  sq          $a2, 0x100($sp)
    ctx->pc = 0x1028ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 6));
label_1028d0:
    // 0x1028d0: 0x7bb001d0  lq          $s0, 0x1D0($sp)
    ctx->pc = 0x1028d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1028d4: 0x7bb101c0  lq          $s1, 0x1C0($sp)
    ctx->pc = 0x1028d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1028d8: 0x7bb201b0  lq          $s2, 0x1B0($sp)
    ctx->pc = 0x1028d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1028dc: 0x7bb301a0  lq          $s3, 0x1A0($sp)
    ctx->pc = 0x1028dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1028e0: 0x7bb40190  lq          $s4, 0x190($sp)
    ctx->pc = 0x1028e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1028e4: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x1028e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1028e8: 0x7bb60170  lq          $s6, 0x170($sp)
    ctx->pc = 0x1028e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1028ec: 0x7bb70160  lq          $s7, 0x160($sp)
    ctx->pc = 0x1028ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1028f0: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x1028f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1028f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1028F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1028F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1028F4u;
            // 0x1028f8: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102678u: goto label_102678;
            case 0x1026A8u: goto label_1026a8;
            case 0x102788u: goto label_102788;
            case 0x1027D0u: goto label_1027d0;
            case 0x102830u: goto label_102830;
            case 0x1028B0u: goto label_1028b0;
            case 0x1028D0u: goto label_1028d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1028FCu;
    // 0x1028fc: 0x0  nop
    ctx->pc = 0x1028fcu;
    // NOP
}
