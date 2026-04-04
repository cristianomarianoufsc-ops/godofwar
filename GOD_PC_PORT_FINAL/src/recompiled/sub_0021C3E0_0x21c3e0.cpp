#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021C3E0
// Address: 0x21c3e0 - 0x21c788
void sub_0021C3E0_0x21c3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C3E0_0x21c3e0");
#endif

    ctx->pc = 0x21c3e0u;

    // 0x21c3e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x21c3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x21c3e4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21c3e8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x21c3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x21c3ec: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x21c3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x21c3f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21c3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c3f4: 0x8c42e2a4  lw          $v0, -0x1D5C($v0)
    ctx->pc = 0x21c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
    // 0x21c3f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c3f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c3fc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x21c3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x21c400: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21C400u;
    {
        const bool branch_taken_0x21c400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C400u;
            // 0x21c404: 0xffbf00a0  sd          $ra, 0xA0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c400) {
            ctx->pc = 0x21C40Cu;
            goto label_21c40c;
        }
    }
    ctx->pc = 0x21C408u;
    // 0x21c408: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x21c408u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21c40c:
    // 0x21c40c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21C40Cu;
    {
        const bool branch_taken_0x21c40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C40Cu;
            // 0x21c410: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c40c) {
            ctx->pc = 0x21C418u;
            goto label_21c418;
        }
    }
    ctx->pc = 0x21C414u;
    // 0x21c414: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x21c414u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_21c418:
    // 0x21c418: 0x520000d5  beql        $s0, $zero, . + 4 + (0xD5 << 2)
    ctx->pc = 0x21C418u;
    {
        const bool branch_taken_0x21c418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c418) {
            ctx->pc = 0x21C41Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C418u;
            // 0x21c41c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C770u;
            goto label_21c770;
        }
    }
    ctx->pc = 0x21C420u;
    // 0x21c420: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x21c420u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x21c424: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21c424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21c428: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C428u;
    {
        const bool branch_taken_0x21c428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21C42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C428u;
            // 0x21c42c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c428) {
            ctx->pc = 0x21C438u;
            goto label_21c438;
        }
    }
    ctx->pc = 0x21C430u;
    // 0x21c430: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21C430u;
    {
        const bool branch_taken_0x21c430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C430u;
            // 0x21c434: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c430) {
            ctx->pc = 0x21C454u;
            goto label_21c454;
        }
    }
    ctx->pc = 0x21C438u;
label_21c438:
    // 0x21c438: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x21c438u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x21c43c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x21c43cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x21c440: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C440u;
    {
        const bool branch_taken_0x21c440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x21C444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C440u;
            // 0x21c444: 0x26060070  addiu       $a2, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c440) {
            ctx->pc = 0x21C454u;
            goto label_21c454;
        }
    }
    ctx->pc = 0x21C448u;
    // 0x21c448: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x21C448u;
    SET_GPR_U32(ctx, 31, 0x21C450u);
    ctx->pc = 0x21C44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C448u;
            // 0x21c44c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C450u; }
        if (ctx->pc != 0x21C450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C450u; }
        if (ctx->pc != 0x21C450u) { return; }
    }
    ctx->pc = 0x21C450u;
    // 0x21c450: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x21c450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_21c454:
    // 0x21c454: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x21c454u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21c458: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x21c458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x21c45c: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x21c45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x21c460: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21c460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21c464: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x21c464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x21c468: 0x2463e4c0  addiu       $v1, $v1, -0x1B40
    ctx->pc = 0x21c468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960320));
    // 0x21c46c: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x21c46cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x21c470: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x21c470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x21c474: 0xd8c10020  lqc2        $vf1, 0x20($a2)
    ctx->pc = 0x21c474u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x21c478: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x21c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21c47c: 0xd8c50030  lqc2        $vf5, 0x30($a2)
    ctx->pc = 0x21c47cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x21c480: 0xfba50030  sqc2        $vf5, 0x30($sp)
    ctx->pc = 0x21c480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x21c484: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21c484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21c488: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x21c488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21c48c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21c490: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x21c490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x21c494: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x21C494u;
    {
        const bool branch_taken_0x21c494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c494) {
            ctx->pc = 0x21C498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C494u;
            // 0x21c498: 0xda230050  lqc2        $vf3, 0x50($s1) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C5B8u;
            goto label_21c5b8;
        }
    }
    ctx->pc = 0x21C49Cu;
    // 0x21c49c: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x21c49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c4a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21c4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x21c4a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21c4a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c4a8: 0xc6420384  lwc1        $f2, 0x384($s2)
    ctx->pc = 0x21c4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21c4ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21c4acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21c4b0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x21c4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21c4b4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x21c4b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21c4b8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x21c4b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x21c4bc: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x21c4bcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x21c4c0: 0x4be308d8  vmulx.xyzw  $vf3, $vf1, $vf3x
    ctx->pc = 0x21c4c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x21c4c4: 0x4be328ec  vsub.xyzw   $vf3, $vf5, $vf3
    ctx->pc = 0x21c4c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x21c4c8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x21c4c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21c4cc: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x21c4ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21c4d0: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x21c4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21c4d4: 0xda210030  lqc2        $vf1, 0x30($s1)
    ctx->pc = 0x21c4d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x21c4d8: 0xda220040  lqc2        $vf2, 0x40($s1)
    ctx->pc = 0x21c4d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x21c4dc: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x21c4dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21c4e0: 0xfa230000  sqc2        $vf3, 0x0($s1)
    ctx->pc = 0x21c4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x21c4e4: 0xda240060  lqc2        $vf4, 0x60($s1)
    ctx->pc = 0x21c4e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x21c4e8: 0xda210070  lqc2        $vf1, 0x70($s1)
    ctx->pc = 0x21c4e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x21c4ec: 0x4be4086c  vsub.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x21c4ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21c4f0: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x21c4f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21c4f4: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x21c4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21c4f8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x21c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x21c4fc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21c4fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21c500: 0x4be11118  vmulx.xyzw  $vf4, $vf2, $vf1x
    ctx->pc = 0x21c500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21c504: 0xda210050  lqc2        $vf1, 0x50($s1)
    ctx->pc = 0x21c504u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x21c508: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x21c508u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21c50c: 0x4be209fd  vabs.xyzw   $vf2, $vf1
    ctx->pc = 0x21c50cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21c510: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21c510u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c514: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x21c514u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21c518: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x21c518u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c51c: 0x48262000  qmfc2.ni    $a2, $vf4
    ctx->pc = 0x21c51cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21c520: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x21c520u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c524: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21c524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21c528: 0x0  nop
    ctx->pc = 0x21c528u;
    // NOP
    // 0x21c52c: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x21C52Cu;
    {
        const bool branch_taken_0x21c52c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21c52c) {
            ctx->pc = 0x21C530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C52Cu;
            // 0x21c530: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C578u;
            goto label_21c578;
        }
    }
    ctx->pc = 0x21C534u;
    // 0x21c534: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x21c534u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x21c538: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c53c: 0x700617c9  prot3w      $v0, $a2
    ctx->pc = 0x21c53cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x21c540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21c540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c544: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21c544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21c548: 0x0  nop
    ctx->pc = 0x21c548u;
    // NOP
    // 0x21c54c: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x21C54Cu;
    {
        const bool branch_taken_0x21c54c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21c54c) {
            ctx->pc = 0x21C550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C54Cu;
            // 0x21c550: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C578u;
            goto label_21c578;
        }
    }
    ctx->pc = 0x21C554u;
    // 0x21c554: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x21c554u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x21c558: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c55c: 0x70061789  pexew       $v0, $a2
    ctx->pc = 0x21c55cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x21c560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21c560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c564: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21c564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21c568: 0x0  nop
    ctx->pc = 0x21c568u;
    // NOP
    // 0x21c56c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x21C56Cu;
    {
        const bool branch_taken_0x21c56c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21c56c) {
            ctx->pc = 0x21C570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C56Cu;
            // 0x21c570: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C578u;
            goto label_21c578;
        }
    }
    ctx->pc = 0x21C574u;
    // 0x21c574: 0x0  nop
    ctx->pc = 0x21c574u;
    // NOP
label_21c578:
    // 0x21c578: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x21C578u;
    {
        const bool branch_taken_0x21c578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C578u;
            // 0x21c57c: 0x8e250088  lw          $a1, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c578) {
            ctx->pc = 0x21C660u;
            goto label_21c660;
        }
    }
    ctx->pc = 0x21C580u;
    // 0x21c580: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x21c580u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21c584: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x21c584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x21c588: 0x54400056  bnel        $v0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x21C588u;
    {
        const bool branch_taken_0x21c588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c588) {
            ctx->pc = 0x21C58Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C588u;
            // 0x21c58c: 0x8e250084  lw          $a1, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C6E4u;
            goto label_21c6e4;
        }
    }
    ctx->pc = 0x21C590u;
    // 0x21c590: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x21c590u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c594: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21c594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21c598: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x21c598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x21c59c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21c5a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21c5a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21c5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21c5a8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x21c5ac: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x21c5acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x21c5b0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x21C5B0u;
    {
        const bool branch_taken_0x21c5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C5B0u;
            // 0x21c5b4: 0x8c420034  lw          $v0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c5b0) {
            ctx->pc = 0x21C690u;
            goto label_21c690;
        }
    }
    ctx->pc = 0x21C5B8u;
label_21c5b8:
    // 0x21c5b8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x21c5b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21c5bc: 0xfa230000  sqc2        $vf3, 0x0($s1)
    ctx->pc = 0x21c5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x21c5c0: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x21c5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21c5c4: 0xda210020  lqc2        $vf1, 0x20($s1)
    ctx->pc = 0x21c5c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x21c5c8: 0x4b030040  vaddx.x     $vf1, $vf0, $vf3x
    ctx->pc = 0x21c5c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21c5cc: 0xda240030  lqc2        $vf4, 0x30($s1)
    ctx->pc = 0x21c5ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x21c5d0: 0x4be20b3c  vmove.xyzw  $vf2, $vf1
    ctx->pc = 0x21c5d0u;
    ctx->vu0_vf[2] = ctx->vu0_vf[1];
    // 0x21c5d4: 0x4a830081  vaddy.y     $vf2, $vf0, $vf3y
    ctx->pc = 0x21c5d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21c5d8: 0xda210040  lqc2        $vf1, 0x40($s1)
    ctx->pc = 0x21c5d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x21c5dc: 0xfa220020  sqc2        $vf2, 0x20($s1)
    ctx->pc = 0x21c5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21c5e0: 0x4be4086c  vsub.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x21c5e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21c5e4: 0x4a430082  vaddz.z     $vf2, $vf0, $vf3z
    ctx->pc = 0x21c5e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21c5e8: 0xfa220020  sqc2        $vf2, 0x20($s1)
    ctx->pc = 0x21c5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21c5ec: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x21c5ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21c5f0: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x21c5f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21c5f4: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x21c5f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21c5f8: 0x4be518ec  vsub.xyzw   $vf3, $vf3, $vf5
    ctx->pc = 0x21c5f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x21c5fc: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x21c5fcu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21c600: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x21c600u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c604: 0x46010044  c1          0x10044
    ctx->pc = 0x21c604u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x21c608: 0x4be318ea  vmul.xyzw   $vf3, $vf3, $vf3
    ctx->pc = 0x21c608u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x21c60c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x21c60cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21c610: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x21c610u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21c614: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x21c614u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x21c618: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x21c618u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21c61c: 0x3c013c80  lui         $at, 0x3C80
    ctx->pc = 0x21c61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15488 << 16));
    // 0x21c620: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x21c620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x21c624: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c628: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21c628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21c62c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21c62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21c630: 0x46000004  c1          0x4
    ctx->pc = 0x21c630u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x21c634: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21c634u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21c638: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21c638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c63c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x21c63cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x21c640: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x21c640u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x21c644: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x21c644u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x21c648: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x21c648u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21c64c: 0x0  nop
    ctx->pc = 0x21c64cu;
    // NOP
    // 0x21c650: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x21C650u;
    {
        const bool branch_taken_0x21c650 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21C654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C650u;
            // 0x21c654: 0xe6200090  swc1        $f0, 0x90($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c650) {
            ctx->pc = 0x21C6A0u;
            goto label_21c6a0;
        }
    }
    ctx->pc = 0x21C658u;
    // 0x21c658: 0x8e250088  lw          $a1, 0x88($s1)
    ctx->pc = 0x21c658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x21c65c: 0x0  nop
    ctx->pc = 0x21c65cu;
    // NOP
label_21c660:
    // 0x21c660: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x21c660u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21c664: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x21c664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x21c668: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x21C668u;
    {
        const bool branch_taken_0x21c668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C668u;
            // 0x21c66c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c668) {
            ctx->pc = 0x21C6E0u;
            goto label_21c6e0;
        }
    }
    ctx->pc = 0x21C670u;
    // 0x21c670: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x21c670u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c674: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x21c674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x21c678: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21c678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21c67c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21c680: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21c680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21c684: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21c684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x21c688: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x21c688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x21c68c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x21c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_21c690:
    // 0x21c690: 0x40f809  jalr        $v0
    ctx->pc = 0x21C690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C698u);
        ctx->pc = 0x21C694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C690u;
            // 0x21c694: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21C698u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C40Cu: goto label_21c40c;
            case 0x21C418u: goto label_21c418;
            case 0x21C438u: goto label_21c438;
            case 0x21C454u: goto label_21c454;
            case 0x21C578u: goto label_21c578;
            case 0x21C5B8u: goto label_21c5b8;
            case 0x21C660u: goto label_21c660;
            case 0x21C690u: goto label_21c690;
            case 0x21C6A0u: goto label_21c6a0;
            case 0x21C6E0u: goto label_21c6e0;
            case 0x21C6E4u: goto label_21c6e4;
            case 0x21C770u: goto label_21c770;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21C698u; }
            if (ctx->pc != 0x21C698u) { return; }
        }
        }
    }
    ctx->pc = 0x21C698u;
    // 0x21c698: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x21C698u;
    {
        const bool branch_taken_0x21c698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C698u;
            // 0x21c69c: 0x8e250084  lw          $a1, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c698) {
            ctx->pc = 0x21C6E4u;
            goto label_21c6e4;
        }
    }
    ctx->pc = 0x21C6A0u;
label_21c6a0:
    // 0x21c6a0: 0x8e250088  lw          $a1, 0x88($s1)
    ctx->pc = 0x21c6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x21c6a4: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x21c6a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21c6a8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x21c6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x21c6ac: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x21C6ACu;
    {
        const bool branch_taken_0x21c6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c6ac) {
            ctx->pc = 0x21C6B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C6ACu;
            // 0x21c6b0: 0x8e250084  lw          $a1, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C6E4u;
            goto label_21c6e4;
        }
    }
    ctx->pc = 0x21C6B4u;
    // 0x21c6b4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x21c6b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c6b8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21c6bc: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x21c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x21c6c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21c6c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21c6c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21c6cc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x21c6d0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x21c6d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x21c6d4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x21c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x21c6d8: 0x40f809  jalr        $v0
    ctx->pc = 0x21C6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C6E0u);
        ctx->pc = 0x21C6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C6D8u;
            // 0x21c6dc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21C6E0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C40Cu: goto label_21c40c;
            case 0x21C418u: goto label_21c418;
            case 0x21C438u: goto label_21c438;
            case 0x21C454u: goto label_21c454;
            case 0x21C578u: goto label_21c578;
            case 0x21C5B8u: goto label_21c5b8;
            case 0x21C660u: goto label_21c660;
            case 0x21C690u: goto label_21c690;
            case 0x21C6A0u: goto label_21c6a0;
            case 0x21C6E0u: goto label_21c6e0;
            case 0x21C6E4u: goto label_21c6e4;
            case 0x21C770u: goto label_21c770;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21C6E0u; }
            if (ctx->pc != 0x21C6E0u) { return; }
        }
        }
    }
    ctx->pc = 0x21C6E0u;
label_21c6e0:
    // 0x21c6e0: 0x8e250084  lw          $a1, 0x84($s1)
    ctx->pc = 0x21c6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_21c6e4:
    // 0x21c6e4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x21c6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x21c6e8: 0xdcc3bdf8  ld          $v1, -0x4208($a2)
    ctx->pc = 0x21c6e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x21c6ec: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x21c6ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21c6f0: 0x84a20060  lh          $v0, 0x60($a1)
    ctx->pc = 0x21c6f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x21c6f4: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x21c6f4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x21c6f8: 0x7ca40050  sq          $a0, 0x50($a1)
    ctx->pc = 0x21c6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 4));
    // 0x21c6fc: 0xfcc3bdf8  sd          $v1, -0x4208($a2)
    ctx->pc = 0x21c6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 3));
    // 0x21c700: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21c700u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x21c704: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x21c704u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x21c708: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x21c708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x21c70c: 0xfca30068  sd          $v1, 0x68($a1)
    ctx->pc = 0x21c70cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 3));
    // 0x21c710: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x21c710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21c714: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x21c714u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21c718: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x21c718u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x21c71c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x21c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21c720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21c720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c724: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x21c724u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x21c728: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x21c728u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x21c72c: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x21c72cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x21c730: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x21c730u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x21c734: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x21c734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x21c738: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x21c738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x21c73c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x21c73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x21c740: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21c740u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21c744: 0x4be20898  vmulx.xyzw  $vf2, $vf1, $vf2x
    ctx->pc = 0x21c744u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21c748: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x21c748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21c74c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21c750: 0x8c44c658  lw          $a0, -0x39A8($v0)
    ctx->pc = 0x21c750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952536)));
    // 0x21c754: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x21c754u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x21c758: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x21c758u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21c75c: 0xda210010  lqc2        $vf1, 0x10($s1)
    ctx->pc = 0x21c75cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21c760: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x21c760u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21c764: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x21c764u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21c768: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x21c768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21c76c: 0x0  nop
    ctx->pc = 0x21c76cu;
    // NOP
label_21c770:
    // 0x21c770: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x21c770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21c774: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x21c774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21c778: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x21c778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21c77c: 0x3e00008  jr          $ra
    ctx->pc = 0x21C77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C77Cu;
            // 0x21c780: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C40Cu: goto label_21c40c;
            case 0x21C418u: goto label_21c418;
            case 0x21C438u: goto label_21c438;
            case 0x21C454u: goto label_21c454;
            case 0x21C578u: goto label_21c578;
            case 0x21C5B8u: goto label_21c5b8;
            case 0x21C660u: goto label_21c660;
            case 0x21C690u: goto label_21c690;
            case 0x21C6A0u: goto label_21c6a0;
            case 0x21C6E0u: goto label_21c6e0;
            case 0x21C6E4u: goto label_21c6e4;
            case 0x21C770u: goto label_21c770;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21C784u;
    // 0x21c784: 0x0  nop
    ctx->pc = 0x21c784u;
    // NOP
}
