#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136728
// Address: 0x136728 - 0x136870
void sub_00136728_0x136728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136728_0x136728");
#endif

    ctx->pc = 0x136728u;

    // 0x136728: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x136728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x13672c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x13672cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x136730: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x136730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x136734: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x136734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136738: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x136738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x13673c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13673cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x136740: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x136740u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x136744: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x136744u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x136748: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x136748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x13674c: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x13674Cu;
    {
        const bool branch_taken_0x13674c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13674c) {
            ctx->pc = 0x136750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13674Cu;
            // 0x136750: 0x9647005c  lhu         $a3, 0x5C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1367F0u;
            goto label_1367f0;
        }
    }
    ctx->pc = 0x136754u;
    // 0x136754: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x136754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x136758: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x136758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13675c: 0x8e500050  lw          $s0, 0x50($s2)
    ctx->pc = 0x13675cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x136760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136764: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x136764u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136768: 0xc08e49a  jal         func_239268
    ctx->pc = 0x136768u;
    SET_GPR_U32(ctx, 31, 0x136770u);
    ctx->pc = 0x13676Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136768u;
            // 0x13676c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239268u;
    if (runtime->hasFunction(0x239268u)) {
        auto targetFn = runtime->lookupFunction(0x239268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136770u; }
        if (ctx->pc != 0x136770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239268_0x239270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136770u; }
        if (ctx->pc != 0x136770u) { return; }
    }
    ctx->pc = 0x136770u;
    // 0x136770: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x136770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x136774: 0xc08e49c  jal         func_239270
    ctx->pc = 0x136774u;
    SET_GPR_U32(ctx, 31, 0x13677Cu);
    ctx->pc = 0x136778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136774u;
            // 0x136778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239270u;
    if (runtime->hasFunction(0x239270u)) {
        auto targetFn = runtime->lookupFunction(0x239270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13677Cu; }
        if (ctx->pc != 0x13677Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239270_0x239278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13677Cu; }
        if (ctx->pc != 0x13677Cu) { return; }
    }
    ctx->pc = 0x13677Cu;
    // 0x13677c: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x13677cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x136780: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x136780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x136784: 0xc08e49e  jal         func_239278
    ctx->pc = 0x136784u;
    SET_GPR_U32(ctx, 31, 0x13678Cu);
    ctx->pc = 0x136788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136784u;
            // 0x136788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239278u;
    if (runtime->hasFunction(0x239278u)) {
        auto targetFn = runtime->lookupFunction(0x239278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13678Cu; }
        if (ctx->pc != 0x13678Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239278_0x239280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13678Cu; }
        if (ctx->pc != 0x13678Cu) { return; }
    }
    ctx->pc = 0x13678Cu;
    // 0x13678c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x13678cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x136790: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x136790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x136794: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x136794u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x136798: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x136798u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x13679c: 0xc06126a  jal         func_1849A8
    ctx->pc = 0x13679Cu;
    SET_GPR_U32(ctx, 31, 0x1367A4u);
    ctx->pc = 0x1367A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13679Cu;
            // 0x1367a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849A8u;
    if (runtime->hasFunction(0x1849A8u)) {
        auto targetFn = runtime->lookupFunction(0x1849A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1367A4u; }
        if (ctx->pc != 0x1367A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849A8_0x1849a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1367A4u; }
        if (ctx->pc != 0x1367A4u) { return; }
    }
    ctx->pc = 0x1367A4u;
    // 0x1367a4: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x1367a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x1367a8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1367a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1367ac: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1367acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1367b0: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x1367b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1367b4: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1367b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1367b8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1367b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1367bc: 0x4be31099  vmuly.xyzw  $vf2, $vf2, $vf3y
    ctx->pc = 0x1367bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1367c0: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1367c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1367c4: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1367c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1367c8: 0xfa020010  sqc2        $vf2, 0x10($s0)
    ctx->pc = 0x1367c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1367cc: 0xda010020  lqc2        $vf1, 0x20($s0)
    ctx->pc = 0x1367ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1367d0: 0x4be3085a  vmulz.xyzw  $vf1, $vf1, $vf3z
    ctx->pc = 0x1367d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1367d4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1367d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1367d8: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x1367d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1367dc: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1367dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1367e0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1367e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1367e4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1367E4u;
    {
        const bool branch_taken_0x1367e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1367E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1367E4u;
            // 0x1367e8: 0x7e020030  sq          $v0, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367e4) {
            ctx->pc = 0x13683Cu;
            goto label_13683c;
        }
    }
    ctx->pc = 0x1367ECu;
    // 0x1367ec: 0x0  nop
    ctx->pc = 0x1367ecu;
    // NOP
label_1367f0:
    // 0x1367f0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1367f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1367f4: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x1367f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1367f8: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1367F8u;
    {
        const bool branch_taken_0x1367f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1367FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1367F8u;
            // 0x1367fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367f8) {
            ctx->pc = 0x13683Cu;
            goto label_13683c;
        }
    }
    ctx->pc = 0x136800u;
    // 0x136800: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x136800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136804: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x136804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_136808:
    // 0x136808: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x136808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13680c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13680cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x136810: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x136810u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x136814: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x136814u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x136818: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x136818u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x13681c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x13681cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x136820: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x136820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x136824: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x136824u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x136828: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x136828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x13682c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x13682cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x136830: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x136830u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x136834: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x136834u;
    {
        const bool branch_taken_0x136834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x136838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136834u;
            // 0x136838: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136834) {
            ctx->pc = 0x136808u;
            runtime->cooperativeGuestYield();
            goto label_136808;
        }
    }
    ctx->pc = 0x13683Cu;
label_13683c:
    // 0x13683c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x13683cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x136840: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x136840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x136844: 0xdc62bdf8  ld          $v0, -0x4208($v1)
    ctx->pc = 0x136844u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294950392)));
    // 0x136848: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x136848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13684c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x13684cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x136850: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x136850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136854: 0xfc62bdf8  sd          $v0, -0x4208($v1)
    ctx->pc = 0x136854u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294950392), GPR_U64(ctx, 2));
    // 0x136858: 0xfe400040  sd          $zero, 0x40($s2)
    ctx->pc = 0x136858u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 0));
    // 0x13685c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x13685cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x136860: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x136860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x136864: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x136864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x136868: 0x3e00008  jr          $ra
    ctx->pc = 0x136868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13686Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136868u;
            // 0x13686c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1367F0u: goto label_1367f0;
            case 0x136808u: goto label_136808;
            case 0x13683Cu: goto label_13683c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x136870u;
}
