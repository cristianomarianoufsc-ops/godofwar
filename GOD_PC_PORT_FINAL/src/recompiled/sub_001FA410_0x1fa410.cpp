#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FA410
// Address: 0x1fa410 - 0x1fa8a8
void sub_001FA410_0x1fa410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA410_0x1fa410");
#endif

    ctx->pc = 0x1fa410u;

    // 0x1fa410: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1fa410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1fa414: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1fa414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1fa418: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x1fa418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x1fa41c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fa41cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa420: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x1fa420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x1fa424: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x1fa424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x1fa428: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1fa428u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa42c: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1fa42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1fa430: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1fa430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1fa434: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x1fa434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x1fa438: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1fa438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1fa43c: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x1fa43cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1fa440: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x1fa440u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1fa444: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x1fa444u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1fa448: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x1fa448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1fa44c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1fa44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fa450: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1fa450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1fa454: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1fa454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1fa458: 0x40f809  jalr        $v0
    ctx->pc = 0x1FA458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA460u);
        ctx->pc = 0x1FA45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA458u;
            // 0x1fa45c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FA460u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FA4F0u: goto label_1fa4f0;
            case 0x1FA51Cu: goto label_1fa51c;
            case 0x1FA590u: goto label_1fa590;
            case 0x1FA5FCu: goto label_1fa5fc;
            case 0x1FA6A8u: goto label_1fa6a8;
            case 0x1FA6C0u: goto label_1fa6c0;
            case 0x1FA708u: goto label_1fa708;
            case 0x1FA714u: goto label_1fa714;
            case 0x1FA718u: goto label_1fa718;
            case 0x1FA7A0u: goto label_1fa7a0;
            case 0x1FA7C8u: goto label_1fa7c8;
            case 0x1FA870u: goto label_1fa870;
            case 0x1FA874u: goto label_1fa874;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FA460u; }
            if (ctx->pc != 0x1FA460u) { return; }
        }
        }
    }
    ctx->pc = 0x1FA460u;
    // 0x1fa460: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x1fa460u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1fa464: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x1fa464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1fa468: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1fa468u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fa46c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1fa46cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1fa470: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x1fa470u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa474: 0x8ed30000  lw          $s3, 0x0($s6)
    ctx->pc = 0x1fa474u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1fa478: 0xfa220050  sqc2        $vf2, 0x50($s1)
    ctx->pc = 0x1fa478u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fa47c: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x1fa47cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1fa480: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fa480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fa484: 0x104000fb  beqz        $v0, . + 4 + (0xFB << 2)
    ctx->pc = 0x1FA484u;
    {
        const bool branch_taken_0x1fa484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA484u;
            // 0x1fa488: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa484) {
            ctx->pc = 0x1FA874u;
            goto label_1fa874;
        }
    }
    ctx->pc = 0x1FA48Cu;
    // 0x1fa48c: 0xda810020  lqc2        $vf1, 0x20($s4)
    ctx->pc = 0x1fa48cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1fa490: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1fa490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fa494: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1fa494u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fa498: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1fa498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fa49c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1fa49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1fa4a0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1fa4a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fa4a4: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1fa4a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fa4a8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1fa4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fa4ac: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1fa4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1fa4b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1fa4b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fa4b4: 0x4be208d8  vmulx.xyzw  $vf3, $vf1, $vf2x
    ctx->pc = 0x1fa4b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fa4b8: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1fa4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fa4bc: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1fa4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1fa4c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fa4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa4c4: 0x8c450104  lw          $a1, 0x104($v0)
    ctx->pc = 0x1fa4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1fa4c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1fa4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1fa4cc: 0xdc43bdf8  ld          $v1, -0x4208($v0)
    ctx->pc = 0x1fa4ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1fa4d0: 0xdca20040  ld          $v0, 0x40($a1)
    ctx->pc = 0x1fa4d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1fa4d4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA4D4u;
    {
        const bool branch_taken_0x1fa4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FA4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA4D4u;
            // 0x1fa4d8: 0x8626008e  lh          $a2, 0x8E($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 142)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4d4) {
            ctx->pc = 0x1FA4F0u;
            goto label_1fa4f0;
        }
    }
    ctx->pc = 0x1FA4DCu;
    // 0x1fa4dc: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x1FA4DCu;
    SET_GPR_U32(ctx, 31, 0x1FA4E4u);
    ctx->pc = 0x1FA4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA4DCu;
            // 0x1fa4e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA4E4u; }
        if (ctx->pc != 0x1FA4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA4E4u; }
        if (ctx->pc != 0x1FA4E4u) { return; }
    }
    ctx->pc = 0x1FA4E4u;
    // 0x1fa4e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1FA4E4u;
    {
        const bool branch_taken_0x1fa4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa4e4) {
            ctx->pc = 0x1FA51Cu;
            goto label_1fa51c;
        }
    }
    ctx->pc = 0x1FA4ECu;
    // 0x1fa4ec: 0x0  nop
    ctx->pc = 0x1fa4ecu;
    // NOP
label_1fa4f0:
    // 0x1fa4f0: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x1fa4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x1fa4f4: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1fa4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1fa4f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fa4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fa4fc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1fa4fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa500: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1fa500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1fa504: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1fa504u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1fa508: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1fa508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1fa50c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1fa50cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fa510: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1fa510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1fa514: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1fa514u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1fa518: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1fa518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1fa51c:
    // 0x1fa51c: 0xc0909c4  jal         func_242710
    ctx->pc = 0x1FA51Cu;
    SET_GPR_U32(ctx, 31, 0x1FA524u);
    ctx->pc = 0x1FA520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA51Cu;
            // 0x1fa520: 0x8e240080  lw          $a0, 0x80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA524u; }
        if (ctx->pc != 0x1FA524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA524u; }
        if (ctx->pc != 0x1FA524u) { return; }
    }
    ctx->pc = 0x1FA524u;
    // 0x1fa524: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1fa524u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fa528: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1fa528u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa52c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1fa52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1fa530: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1fa530u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fa534: 0x4a8100c1  vaddy.y     $vf3, $vf0, $vf1y
    ctx->pc = 0x1fa534u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fa538: 0xda820030  lqc2        $vf2, 0x30($s4)
    ctx->pc = 0x1fa538u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1fa53c: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1fa53cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fa540: 0x4be11068  vadd.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1fa540u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fa544: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x1fa544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fa548: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1fa548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fa54c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1fa54cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fa550: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1fa550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1fa554: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x1fa554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x1fa558: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1FA558u;
    {
        const bool branch_taken_0x1fa558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa558) {
            ctx->pc = 0x1FA55Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA558u;
            // 0x1fa55c: 0x86240092  lh          $a0, 0x92($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FA590u;
            goto label_1fa590;
        }
    }
    ctx->pc = 0x1FA560u;
    // 0x1fa560: 0xc054622  jal         func_151888
    ctx->pc = 0x1FA560u;
    SET_GPR_U32(ctx, 31, 0x1FA568u);
    ctx->pc = 0x1FA564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA560u;
            // 0x1fa564: 0x70022ca9  por         $a1, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151888u;
    if (runtime->hasFunction(0x151888u)) {
        auto targetFn = runtime->lookupFunction(0x151888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA568u; }
        if (ctx->pc != 0x1FA568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_151888_0x1518d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA568u; }
        if (ctx->pc != 0x1FA568u) { return; }
    }
    ctx->pc = 0x1FA568u;
    // 0x1fa568: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fa568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fa56c: 0xdba10080  lqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1fa56cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fa570: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1fa570u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1fa574: 0xdba20090  lqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1fa574u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fa578: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1fa578u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fa57c: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x1fa57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x1fa580: 0xc054636  jal         func_1518D8
    ctx->pc = 0x1FA580u;
    SET_GPR_U32(ctx, 31, 0x1FA588u);
    ctx->pc = 0x1FA584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA580u;
            // 0x1fa584: 0x48250800  qmfc2.ni    $a1, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1518D8u;
    if (runtime->hasFunction(0x1518D8u)) {
        auto targetFn = runtime->lookupFunction(0x1518D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA588u; }
        if (ctx->pc != 0x1FA588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1518d8_0x151be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA588u; }
        if (ctx->pc != 0x1FA588u) { return; }
    }
    ctx->pc = 0x1FA588u;
    // 0x1fa588: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x1fa588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x1fa58c: 0x0  nop
    ctx->pc = 0x1fa58cu;
    // NOP
label_1fa590:
    // 0x1fa590: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fa590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fa594: 0x148200b7  bne         $a0, $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x1FA594u;
    {
        const bool branch_taken_0x1fa594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FA598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA594u;
            // 0x1fa598: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa594) {
            ctx->pc = 0x1FA874u;
            goto label_1fa874;
        }
    }
    ctx->pc = 0x1FA59Cu;
    // 0x1fa59c: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x1fa59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1fa5a0: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1fa5a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fa5a4: 0x86220090  lh          $v0, 0x90($s1)
    ctx->pc = 0x1fa5a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1fa5a8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1fa5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fa5ac: 0x82900a  movz        $s2, $a0, $v0
    ctx->pc = 0x1fa5acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x1fa5b0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1fa5b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1fa5b4: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x1fa5b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1fa5b8: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1fa5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1fa5bc: 0x40f809  jalr        $v0
    ctx->pc = 0x1FA5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA5C4u);
        ctx->pc = 0x1FA5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA5BCu;
            // 0x1fa5c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FA5C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FA4F0u: goto label_1fa4f0;
            case 0x1FA51Cu: goto label_1fa51c;
            case 0x1FA590u: goto label_1fa590;
            case 0x1FA5FCu: goto label_1fa5fc;
            case 0x1FA6A8u: goto label_1fa6a8;
            case 0x1FA6C0u: goto label_1fa6c0;
            case 0x1FA708u: goto label_1fa708;
            case 0x1FA714u: goto label_1fa714;
            case 0x1FA718u: goto label_1fa718;
            case 0x1FA7A0u: goto label_1fa7a0;
            case 0x1FA7C8u: goto label_1fa7c8;
            case 0x1FA870u: goto label_1fa870;
            case 0x1FA874u: goto label_1fa874;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FA5C4u; }
            if (ctx->pc != 0x1FA5C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1FA5C4u;
    // 0x1fa5c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa5c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fa5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa5cc: 0xc082458  jal         func_209160
    ctx->pc = 0x1FA5CCu;
    SET_GPR_U32(ctx, 31, 0x1FA5D4u);
    ctx->pc = 0x1FA5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA5CCu;
            // 0x1fa5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209160u;
    if (runtime->hasFunction(0x209160u)) {
        auto targetFn = runtime->lookupFunction(0x209160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA5D4u; }
        if (ctx->pc != 0x1FA5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209160_0x209160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA5D4u; }
        if (ctx->pc != 0x1FA5D4u) { return; }
    }
    ctx->pc = 0x1FA5D4u;
    // 0x1fa5d4: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x1fa5d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa5d8: 0x0  nop
    ctx->pc = 0x1fa5d8u;
    // NOP
    // 0x1fa5dc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA5DCu;
    {
        const bool branch_taken_0x1fa5dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FA5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA5DCu;
            // 0x1fa5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa5dc) {
            ctx->pc = 0x1FA5FCu;
            goto label_1fa5fc;
        }
    }
    ctx->pc = 0x1FA5E4u;
    // 0x1fa5e4: 0xc082458  jal         func_209160
    ctx->pc = 0x1FA5E4u;
    SET_GPR_U32(ctx, 31, 0x1FA5ECu);
    ctx->pc = 0x1FA5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA5E4u;
            // 0x1fa5e8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209160u;
    if (runtime->hasFunction(0x209160u)) {
        auto targetFn = runtime->lookupFunction(0x209160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA5ECu; }
        if (ctx->pc != 0x1FA5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209160_0x209160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA5ECu; }
        if (ctx->pc != 0x1FA5ECu) { return; }
    }
    ctx->pc = 0x1FA5ECu;
    // 0x1fa5ec: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x1fa5ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa5f0: 0x0  nop
    ctx->pc = 0x1fa5f0u;
    // NOP
    // 0x1fa5f4: 0x45030048  bc1tl       . + 4 + (0x48 << 2)
    ctx->pc = 0x1FA5F4u;
    {
        const bool branch_taken_0x1fa5f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa5f4) {
            ctx->pc = 0x1FA5F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA5F4u;
            // 0x1fa5f8: 0x8e220080  lw          $v0, 0x80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FA718u;
            goto label_1fa718;
        }
    }
    ctx->pc = 0x1FA5FCu;
label_1fa5fc:
    // 0x1fa5fc: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1fa5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1fa600: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1fa600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1fa604: 0x86260086  lh          $a2, 0x86($s1)
    ctx->pc = 0x1fa604u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 134)));
    // 0x1fa608: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1fa608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1fa60c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1fa60cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa610: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1fa610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x1fa614: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1fa614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1fa618: 0x24a2f170  addiu       $v0, $a1, -0xE90
    ctx->pc = 0x1fa618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x1fa61c: 0xaca3f170  sw          $v1, -0xE90($a1)
    ctx->pc = 0x1fa61cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963568), GPR_U32(ctx, 3));
    // 0x1fa620: 0x2484a388  addiu       $a0, $a0, -0x5C78
    ctx->pc = 0x1fa620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943624));
    // 0x1fa624: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x1fa624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
    // 0x1fa628: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1fa628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1fa62c: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1fa62cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1fa630: 0xac520020  sw          $s2, 0x20($v0)
    ctx->pc = 0x1fa630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 18));
    // 0x1fa634: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1fa634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1fa638: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1fa638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1fa63c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1fa63cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1fa640: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1fa640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1fa644: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1fa644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1fa648: 0xda610050  lqc2        $vf1, 0x50($s3)
    ctx->pc = 0x1fa648u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x1fa64c: 0xdba30070  lqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1fa64cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fa650: 0x4be308e8  vadd.xyzw   $vf3, $vf1, $vf3
    ctx->pc = 0x1fa650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fa654: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x1fa654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fa658: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fa658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fa65c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fa65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1fa660: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1fa660u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fa664: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1fa664u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1fa668: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1fa668u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fa66c: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1fa66cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fa670: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1fa670u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fa674: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1fa674u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fa678: 0x3c0140cc  lui         $at, 0x40CC
    ctx->pc = 0x1fa678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16588 << 16));
    // 0x1fa67c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1fa67cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1fa680: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa684: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1fa684u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fa688: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fa688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa68c: 0x46000004  c1          0x4
    ctx->pc = 0x1fa68cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fa690: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fa690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa694: 0x0  nop
    ctx->pc = 0x1fa694u;
    // NOP
    // 0x1fa698: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA698u;
    {
        const bool branch_taken_0x1fa698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa698) {
            ctx->pc = 0x1FA69Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA698u;
            // 0x1fa69c: 0x4615a001  sub.s       $f0, $f20, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FA6A8u;
            goto label_1fa6a8;
        }
    }
    ctx->pc = 0x1FA6A0u;
    // 0x1fa6a0: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1fa6a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
    // 0x1fa6a4: 0x4615a001  sub.s       $f0, $f20, $f21
    ctx->pc = 0x1fa6a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_1fa6a8:
    // 0x1fa6a8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1fa6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1fa6ac: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x1fa6acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa6b0: 0x0  nop
    ctx->pc = 0x1fa6b0u;
    // NOP
    // 0x1fa6b4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1FA6B4u;
    {
        const bool branch_taken_0x1fa6b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FA6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA6B4u;
            // 0x1fa6b8: 0xae006318  sw          $zero, 0x6318($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 25368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa6b4) {
            ctx->pc = 0x1FA708u;
            goto label_1fa708;
        }
    }
    ctx->pc = 0x1FA6BCu;
    // 0x1fa6bc: 0xdba100a0  lqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1fa6bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1fa6c0:
    // 0x1fa6c0: 0xdba300b0  lqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x1fa6c0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa6c4: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1fa6c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fa6c8: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x1fa6c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1fa6cc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1fa6ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1fa6d0: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1fa6d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fa6d4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1fa6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1fa6d8: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x1fa6d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fa6dc: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1fa6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1fa6e0: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x1fa6e0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x1fa6e4: 0x7ba50080  lq          $a1, 0x80($sp)
    ctx->pc = 0x1fa6e4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fa6e8: 0xc047864  jal         func_11E190
    ctx->pc = 0x1FA6E8u;
    SET_GPR_U32(ctx, 31, 0x1FA6F0u);
    ctx->pc = 0x1FA6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA6E8u;
            // 0x1fa6ec: 0x48261800  qmfc2.ni    $a2, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA6F0u; }
        if (ctx->pc != 0x1FA6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA6F0u; }
        if (ctx->pc != 0x1FA6F0u) { return; }
    }
    ctx->pc = 0x1FA6F0u;
    // 0x1fa6f0: 0x4615a041  sub.s       $f1, $f20, $f21
    ctx->pc = 0x1fa6f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x1fa6f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa6f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa6f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1fa6f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa6fc: 0x0  nop
    ctx->pc = 0x1fa6fcu;
    // NOP
    // 0x1fa700: 0x4501ffef  bc1t        . + 4 + (-0x11 << 2)
    ctx->pc = 0x1FA700u;
    {
        const bool branch_taken_0x1fa700 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FA704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA700u;
            // 0x1fa704: 0xdba100a0  lqc2        $vf1, 0xA0($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa700) {
            ctx->pc = 0x1FA6C0u;
            runtime->cooperativeGuestYield();
            goto label_1fa6c0;
        }
    }
    ctx->pc = 0x1FA708u;
label_1fa708:
    // 0x1fa708: 0x8e026318  lw          $v0, 0x6318($s0)
    ctx->pc = 0x1fa708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25368)));
    // 0x1fa70c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FA70Cu;
    {
        const bool branch_taken_0x1fa70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa70c) {
            ctx->pc = 0x1FA710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA70Cu;
            // 0x1fa710: 0xae2000a4  sw          $zero, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FA714u;
            goto label_1fa714;
        }
    }
    ctx->pc = 0x1FA714u;
label_1fa714:
    // 0x1fa714: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1fa714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_1fa718:
    // 0x1fa718: 0x3c03ff9c  lui         $v1, 0xFF9C
    ctx->pc = 0x1fa718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65436 << 16));
    // 0x1fa71c: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x1fa71cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x1fa720: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x1fa720u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x1fa724: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1fa724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa728: 0x3463e00f  ori         $v1, $v1, 0xE00F
    ctx->pc = 0x1fa728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57359);
    // 0x1fa72c: 0x2642f170  addiu       $v0, $s2, -0xE90
    ctx->pc = 0x1fa72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963568));
    // 0x1fa730: 0x8ea4bcf8  lw          $a0, -0x4308($s5)
    ctx->pc = 0x1fa730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950136)));
    // 0x1fa734: 0x7ba50080  lq          $a1, 0x80($sp)
    ctx->pc = 0x1fa734u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fa738: 0x3c060b13  lui         $a2, 0xB13
    ctx->pc = 0x1fa738u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2835 << 16));
    // 0x1fa73c: 0xae43f170  sw          $v1, -0xE90($s2)
    ctx->pc = 0x1fa73cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963568), GPR_U32(ctx, 3));
    // 0x1fa740: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1fa740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fa744: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x1fa744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x1fa748: 0x7ba60090  lq          $a2, 0x90($sp)
    ctx->pc = 0x1fa748u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fa74c: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x1fa74cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x1fa750: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x1fa750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x1fa754: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1fa754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1fa758: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1fa758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1fa75c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1fa75cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1fa760: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1fa760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1fa764: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1fa764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1fa768: 0xc047864  jal         func_11E190
    ctx->pc = 0x1FA768u;
    SET_GPR_U32(ctx, 31, 0x1FA770u);
    ctx->pc = 0x1FA76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA768u;
            // 0x1fa76c: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA770u; }
        if (ctx->pc != 0x1FA770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA770u; }
        if (ctx->pc != 0x1FA770u) { return; }
    }
    ctx->pc = 0x1FA770u;
    // 0x1fa770: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1FA770u;
    {
        const bool branch_taken_0x1fa770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA770u;
            // 0x1fa774: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa770) {
            ctx->pc = 0x1FA870u;
            goto label_1fa870;
        }
    }
    ctx->pc = 0x1FA778u;
    // 0x1fa778: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fa778u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa77c: 0x24437790  addiu       $v1, $v0, 0x7790
    ctx->pc = 0x1fa77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1fa780: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1fa780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1fa784: 0x78680010  lq          $t0, 0x10($v1)
    ctx->pc = 0x1fa784u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1fa788: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1fa788u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa78c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA78Cu;
    {
        const bool branch_taken_0x1fa78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA78Cu;
            // 0x1fa790: 0x8c690028  lw          $t1, 0x28($v1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa78c) {
            ctx->pc = 0x1FA7A0u;
            goto label_1fa7a0;
        }
    }
    ctx->pc = 0x1FA794u;
    // 0x1fa794: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1fa794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1fa798: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FA798u;
    {
        const bool branch_taken_0x1fa798 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FA79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA798u;
            // 0x1fa79c: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa798) {
            ctx->pc = 0x1FA7C8u;
            goto label_1fa7c8;
        }
    }
    ctx->pc = 0x1FA7A0u;
label_1fa7a0:
    // 0x1fa7a0: 0xdba30090  lqc2        $vf3, 0x90($sp)
    ctx->pc = 0x1fa7a0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fa7a4: 0x4be3106c  vsub.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x1fa7a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fa7a8: 0xfa210050  sqc2        $vf1, 0x50($s1)
    ctx->pc = 0x1fa7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fa7ac: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1fa7acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa7b0: 0xdba30070  lqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1fa7b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fa7b4: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1fa7b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fa7b8: 0xfa810030  sqc2        $vf1, 0x30($s4)
    ctx->pc = 0x1fa7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fa7bc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1fa7bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa7c0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1fa7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1fa7c4: 0x0  nop
    ctx->pc = 0x1fa7c4u;
    // NOP
label_1fa7c8:
    // 0x1fa7c8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1fa7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1fa7cc: 0x24507790  addiu       $s0, $v0, 0x7790
    ctx->pc = 0x1fa7ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1fa7d0: 0x8c635e7c  lw          $v1, 0x5E7C($v1)
    ctx->pc = 0x1fa7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24188)));
    // 0x1fa7d4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1fa7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1fa7d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fa7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa7dc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1fa7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa7e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fa7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa7e4: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x1fa7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1fa7e8: 0xc0805a8  jal         func_2016A0
    ctx->pc = 0x1FA7E8u;
    SET_GPR_U32(ctx, 31, 0x1FA7F0u);
    ctx->pc = 0x1FA7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA7E8u;
            // 0x1fa7ec: 0x48271000  qmfc2.ni    $a3, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2016A0u;
    if (runtime->hasFunction(0x2016A0u)) {
        auto targetFn = runtime->lookupFunction(0x2016A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA7F0u; }
        if (ctx->pc != 0x1FA7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002016A0_0x2016a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA7F0u; }
        if (ctx->pc != 0x1FA7F0u) { return; }
    }
    ctx->pc = 0x1FA7F0u;
    // 0x1fa7f0: 0x56600020  bnel        $s3, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FA7F0u;
    {
        const bool branch_taken_0x1fa7f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa7f0) {
            ctx->pc = 0x1FA7F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA7F0u;
            // 0x1fa7f4: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FA874u;
            goto label_1fa874;
        }
    }
    ctx->pc = 0x1FA7F8u;
    // 0x1fa7f8: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x1fa7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1fa7fc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1fa7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1fa800: 0x2642f170  addiu       $v0, $s2, -0xE90
    ctx->pc = 0x1fa800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963568));
    // 0x1fa804: 0x8ea4bcf8  lw          $a0, -0x4308($s5)
    ctx->pc = 0x1fa804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950136)));
    // 0x1fa808: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1fa808u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa80c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1fa80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fa810: 0xae45f170  sw          $a1, -0xE90($s2)
    ctx->pc = 0x1fa810u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963568), GPR_U32(ctx, 5));
    // 0x1fa814: 0x3c030b13  lui         $v1, 0xB13
    ctx->pc = 0x1fa814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2835 << 16));
    // 0x1fa818: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1fa818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1fa81c: 0x7ba50080  lq          $a1, 0x80($sp)
    ctx->pc = 0x1fa81cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fa820: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1fa820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1fa824: 0x7ba60090  lq          $a2, 0x90($sp)
    ctx->pc = 0x1fa824u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fa828: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1fa828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1fa82c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1fa82cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1fa830: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1fa830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1fa834: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1fa834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1fa838: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1fa838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1fa83c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1fa83cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1fa840: 0xc047864  jal         func_11E190
    ctx->pc = 0x1FA840u;
    SET_GPR_U32(ctx, 31, 0x1FA848u);
    ctx->pc = 0x1FA844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA840u;
            // 0x1fa844: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA848u; }
        if (ctx->pc != 0x1FA848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA848u; }
        if (ctx->pc != 0x1FA848u) { return; }
    }
    ctx->pc = 0x1FA848u;
    // 0x1fa848: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA848u;
    {
        const bool branch_taken_0x1fa848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA848u;
            // 0x1fa84c: 0xdba20090  lqc2        $vf2, 0x90($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa848) {
            ctx->pc = 0x1FA870u;
            goto label_1fa870;
        }
    }
    ctx->pc = 0x1FA850u;
    // 0x1fa850: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1fa850u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa854: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1fa854u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fa858: 0xfa210050  sqc2        $vf1, 0x50($s1)
    ctx->pc = 0x1fa858u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fa85c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1fa85cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa860: 0xdba30070  lqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1fa860u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fa864: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1fa864u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fa868: 0xfa810030  sqc2        $vf1, 0x30($s4)
    ctx->pc = 0x1fa868u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fa86c: 0x0  nop
    ctx->pc = 0x1fa86cu;
    // NOP
label_1fa870:
    // 0x1fa870: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1fa870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1fa874:
    // 0x1fa874: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1fa874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1fa878: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1fa878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1fa87c: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x1fa87cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1fa880: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x1fa880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1fa884: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x1fa884u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1fa888: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x1fa888u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa88c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1fa88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1fa890: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x1fa890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1fa894: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x1fa894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1fa898: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x1fa898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fa89c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA89Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA89Cu;
            // 0x1fa8a0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FA4F0u: goto label_1fa4f0;
            case 0x1FA51Cu: goto label_1fa51c;
            case 0x1FA590u: goto label_1fa590;
            case 0x1FA5FCu: goto label_1fa5fc;
            case 0x1FA6A8u: goto label_1fa6a8;
            case 0x1FA6C0u: goto label_1fa6c0;
            case 0x1FA708u: goto label_1fa708;
            case 0x1FA714u: goto label_1fa714;
            case 0x1FA718u: goto label_1fa718;
            case 0x1FA7A0u: goto label_1fa7a0;
            case 0x1FA7C8u: goto label_1fa7c8;
            case 0x1FA870u: goto label_1fa870;
            case 0x1FA874u: goto label_1fa874;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FA8A4u;
    // 0x1fa8a4: 0x0  nop
    ctx->pc = 0x1fa8a4u;
    // NOP
}
