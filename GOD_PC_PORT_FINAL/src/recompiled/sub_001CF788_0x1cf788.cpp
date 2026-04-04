#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CF788
// Address: 0x1cf788 - 0x1cfb88
void sub_001CF788_0x1cf788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF788_0x1cf788");
#endif

    ctx->pc = 0x1cf788u;

    // 0x1cf788: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1cf788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1cf78c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1cf78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf790: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1cf790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x1cf794: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1cf794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x1cf798: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cf798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf79c: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x1cf79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x1cf7a0: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x1cf7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x1cf7a4: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x1cf7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x1cf7a8: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x1cf7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x1cf7ac: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x1cf7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x1cf7b0: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x1cf7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
    // 0x1cf7b4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1cf7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1cf7b8: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x1cf7b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1cf7bc: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x1cf7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x1cf7c0: 0x8e360000  lw          $s6, 0x0($s1)
    ctx->pc = 0x1cf7c0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cf7c4: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x1cf7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1cf7c8: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1cf7c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cf7cc: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF7CCu;
    {
        const bool branch_taken_0x1cf7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CF7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF7CCu;
            // 0x1cf7d0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7cc) {
            ctx->pc = 0x1CF7ECu;
            goto label_1cf7ec;
        }
    }
    ctx->pc = 0x1CF7D4u;
    // 0x1cf7d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CF7D4u;
    {
        const bool branch_taken_0x1cf7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF7D4u;
            // 0x1cf7d8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7d4) {
            ctx->pc = 0x1CF808u;
            goto label_1cf808;
        }
    }
    ctx->pc = 0x1CF7DCu;
label_1cf7dc:
    // 0x1cf7dc: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1cf7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1cf7e0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1cf7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1cf7e4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1CF7E4u;
    {
        const bool branch_taken_0x1cf7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF7E4u;
            // 0x1cf7e8: 0x8c42003c  lw          $v0, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7e4) {
            ctx->pc = 0x1CF948u;
            goto label_1cf948;
        }
    }
    ctx->pc = 0x1CF7ECu;
label_1cf7ec:
    // 0x1cf7ec: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1cf7ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1cf7f0: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1cf7f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1cf7f4: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF7F4u;
    {
        const bool branch_taken_0x1cf7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CF7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF7F4u;
            // 0x1cf7f8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7f4) {
            ctx->pc = 0x1CF808u;
            goto label_1cf808;
        }
    }
    ctx->pc = 0x1CF7FCu;
    // 0x1cf7fc: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CF7FCu;
    SET_GPR_U32(ctx, 31, 0x1CF804u);
    ctx->pc = 0x1CF800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF7FCu;
            // 0x1cf800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF804u; }
        if (ctx->pc != 0x1CF804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF804u; }
        if (ctx->pc != 0x1CF804u) { return; }
    }
    ctx->pc = 0x1CF804u;
    // 0x1cf804: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1cf804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1cf808:
    // 0x1cf808: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1cf808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1cf80c: 0x78840030  lq          $a0, 0x30($a0)
    ctx->pc = 0x1cf80cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1cf810: 0x9625006c  lhu         $a1, 0x6C($s1)
    ctx->pc = 0x1cf810u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1cf814: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1cf814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1cf818: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x1cf818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
    // 0x1cf81c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1cf81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1cf820: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1cf820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cf824: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x1CF824u;
    {
        const bool branch_taken_0x1cf824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF824u;
            // 0x1cf828: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf824) {
            ctx->pc = 0x1CFB58u;
            goto label_1cfb58;
        }
    }
    ctx->pc = 0x1CF82Cu;
    // 0x1cf82c: 0xc061eee  jal         func_187BB8
    ctx->pc = 0x1CF82Cu;
    SET_GPR_U32(ctx, 31, 0x1CF834u);
    ctx->pc = 0x1CF830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF82Cu;
            // 0x1cf830: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187BB8u;
    if (runtime->hasFunction(0x187BB8u)) {
        auto targetFn = runtime->lookupFunction(0x187BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF834u; }
        if (ctx->pc != 0x1CF834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187BB8_0x187bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF834u; }
        if (ctx->pc != 0x1CF834u) { return; }
    }
    ctx->pc = 0x1CF834u;
    // 0x1cf834: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x1cf834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1cf838: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf83c: 0x8e270054  lw          $a3, 0x54($s1)
    ctx->pc = 0x1cf83cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1cf840: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cf840u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cf844: 0x70672389  pcpyld      $a0, $v1, $a3
    ctx->pc = 0x1cf844u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x1cf848: 0x8e27005c  lw          $a3, 0x5C($s1)
    ctx->pc = 0x1cf848u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1cf84c: 0x71071b89  pcpyld      $v1, $t0, $a3
    ctx->pc = 0x1cf84cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x1cf850: 0x70641cc8  ppacw       $v1, $v1, $a0
    ctx->pc = 0x1cf850u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1cf854: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1cf854u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1cf858: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1cf858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x1cf85c: 0x4be31068  vadd.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x1cf85cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf860: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x1cf860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x1cf864: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1cf864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf868: 0xdba20090  lqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1cf868u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cf86c: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1cf86cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cf870: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1cf870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cf874: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1cf874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1cf878: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1cf878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1cf87c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1cf87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1cf880: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1cf880u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1cf884: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1cf884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1cf888: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1cf888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1cf88c: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1cf88cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1cf890: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x1cf890u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cf894: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1cf894u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1cf898: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1cf898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1cf89c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1cf89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1cf8a0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1cf8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1cf8a4: 0x7ba50090  lq          $a1, 0x90($sp)
    ctx->pc = 0x1cf8a4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cf8a8: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1cf8a8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf8ac: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x1cf8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cf8b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf8b4: 0xc072cb8  jal         func_1CB2E0
    ctx->pc = 0x1CF8B4u;
    SET_GPR_U32(ctx, 31, 0x1CF8BCu);
    ctx->pc = 0x1CF8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF8B4u;
            // 0x1cf8b8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB2E0u;
    if (runtime->hasFunction(0x1CB2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CB2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF8BCu; }
        if (ctx->pc != 0x1CF8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB2E0_0x1cb2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF8BCu; }
        if (ctx->pc != 0x1CF8BCu) { return; }
    }
    ctx->pc = 0x1CF8BCu;
    // 0x1cf8bc: 0xdba300b0  lqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x1cf8bcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cf8c0: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1cf8c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cf8c4: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1cf8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cf8c8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cf8c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf8cc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cf8ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf8d0: 0x8e320020  lw          $s2, 0x20($s1)
    ctx->pc = 0x1cf8d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1cf8d4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1cf8d4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf8d8: 0x9625006c  lhu         $a1, 0x6C($s1)
    ctx->pc = 0x1cf8d8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1cf8dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cf8dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf8e0: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x1cf8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1cf8e4: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x1cf8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1cf8e8: 0x3c17002b  lui         $s7, 0x2B
    ctx->pc = 0x1cf8e8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)43 << 16));
    // 0x1cf8ec: 0x46000504  c1          0x504
    ctx->pc = 0x1cf8ecu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cf8f0: 0x26f53d28  addiu       $s5, $s7, 0x3D28
    ctx->pc = 0x1cf8f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 15656));
    // 0x1cf8f4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1cf8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1cf8f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cf8f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf8fc: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x1cf8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1cf900: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1cf900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1cf904: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1CF904u;
    {
        const bool branch_taken_0x1cf904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF904u;
            // 0x1cf908: 0x82a021  addu        $s4, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf904) {
            ctx->pc = 0x1CF940u;
            goto label_1cf940;
        }
    }
    ctx->pc = 0x1CF90Cu;
    // 0x1cf90c: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x1cf90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1cf910:
    // 0x1cf910: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x1cf910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1cf914: 0x2029818  mult        $s3, $s0, $v0
    ctx->pc = 0x1cf914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x1cf918: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf91c: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1CF91Cu;
    SET_GPR_U32(ctx, 31, 0x1CF924u);
    ctx->pc = 0x1CF920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF91Cu;
            // 0x1cf920: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF924u; }
        if (ctx->pc != 0x1CF924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF924u; }
        if (ctx->pc != 0x1CF924u) { return; }
    }
    ctx->pc = 0x1CF924u;
    // 0x1cf924: 0x1040ffad  beqz        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x1CF924u;
    {
        const bool branch_taken_0x1cf924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF924u;
            // 0x1cf928: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf924) {
            ctx->pc = 0x1CF7DCu;
            runtime->cooperativeGuestYield();
            goto label_1cf7dc;
        }
    }
    ctx->pc = 0x1CF92Cu;
    // 0x1cf92c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1cf92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1cf930: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1cf930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1cf934: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1cf934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cf938: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1CF938u;
    {
        const bool branch_taken_0x1cf938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF938u;
            // 0x1cf93c: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf938) {
            ctx->pc = 0x1CF910u;
            runtime->cooperativeGuestYield();
            goto label_1cf910;
        }
    }
    ctx->pc = 0x1CF940u;
label_1cf940:
    // 0x1cf940: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cf940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf944: 0x0  nop
    ctx->pc = 0x1cf944u;
    // NOP
label_1cf948:
    // 0x1cf948: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1cf948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1cf94c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cf94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cf950: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf954: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cf954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf958: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cf958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cf95c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1cf95cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf960: 0x0  nop
    ctx->pc = 0x1cf960u;
    // NOP
    // 0x1cf964: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x1CF964u;
    {
        const bool branch_taken_0x1cf964 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF964u;
            // 0x1cf968: 0x8e300020  lw          $s0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf964) {
            ctx->pc = 0x1CFA70u;
            goto label_1cfa70;
        }
    }
    ctx->pc = 0x1CF96Cu;
    // 0x1cf96c: 0x9625006c  lhu         $a1, 0x6C($s1)
    ctx->pc = 0x1cf96cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1cf970: 0xc08f2ca  jal         func_23CB28
    ctx->pc = 0x1CF970u;
    SET_GPR_U32(ctx, 31, 0x1CF978u);
    ctx->pc = 0x1CF974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF970u;
            // 0x1cf974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CB28u;
    if (runtime->hasFunction(0x23CB28u)) {
        auto targetFn = runtime->lookupFunction(0x23CB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF978u; }
        if (ctx->pc != 0x1CF978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23cb28_0x23cb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF978u; }
        if (ctx->pc != 0x1CF978u) { return; }
    }
    ctx->pc = 0x1CF978u;
    // 0x1cf978: 0x84450012  lh          $a1, 0x12($v0)
    ctx->pc = 0x1cf978u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1cf97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf980: 0xc08f2d0  jal         func_23CB40
    ctx->pc = 0x1CF980u;
    SET_GPR_U32(ctx, 31, 0x1CF988u);
    ctx->pc = 0x1CF984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF980u;
            // 0x1cf984: 0x8452000c  lh          $s2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CB40u;
    if (runtime->hasFunction(0x23CB40u)) {
        auto targetFn = runtime->lookupFunction(0x23CB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF988u; }
        if (ctx->pc != 0x1CF988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23cb40_0x23cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF988u; }
        if (ctx->pc != 0x1CF988u) { return; }
    }
    ctx->pc = 0x1CF988u;
    // 0x1cf988: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x1cf988u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1cf98c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1cf98cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf990: 0x9625006c  lhu         $a1, 0x6C($s1)
    ctx->pc = 0x1cf990u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1cf994: 0xc08f2ca  jal         func_23CB28
    ctx->pc = 0x1CF994u;
    SET_GPR_U32(ctx, 31, 0x1CF99Cu);
    ctx->pc = 0x1CF998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF994u;
            // 0x1cf998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CB28u;
    if (runtime->hasFunction(0x23CB28u)) {
        auto targetFn = runtime->lookupFunction(0x23CB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF99Cu; }
        if (ctx->pc != 0x1CF99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23cb28_0x23cb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF99Cu; }
        if (ctx->pc != 0x1CF99Cu) { return; }
    }
    ctx->pc = 0x1CF99Cu;
    // 0x1cf99c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf9a0: 0x84450016  lh          $a1, 0x16($v0)
    ctx->pc = 0x1cf9a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x1cf9a4: 0xc08f2d0  jal         func_23CB40
    ctx->pc = 0x1CF9A4u;
    SET_GPR_U32(ctx, 31, 0x1CF9ACu);
    ctx->pc = 0x1CF9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9A4u;
            // 0x1cf9a8: 0x84500010  lh          $s0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CB40u;
    if (runtime->hasFunction(0x23CB40u)) {
        auto targetFn = runtime->lookupFunction(0x23CB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9ACu; }
        if (ctx->pc != 0x1CF9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23cb40_0x23cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9ACu; }
        if (ctx->pc != 0x1CF9ACu) { return; }
    }
    ctx->pc = 0x1CF9ACu;
    // 0x1cf9ac: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x1cf9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1cf9b0: 0x18a00019  blez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CF9B0u;
    {
        const bool branch_taken_0x1cf9b0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1CF9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9B0u;
            // 0x1cf9b4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf9b0) {
            ctx->pc = 0x1CFA18u;
            goto label_1cfa18;
        }
    }
    ctx->pc = 0x1CF9B8u;
    // 0x1cf9b8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1cf9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1cf9bc: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x1CF9BCu;
    SET_GPR_U32(ctx, 31, 0x1CF9C4u);
    ctx->pc = 0x1CF9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9BCu;
            // 0x1cf9c0: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9C4u; }
        if (ctx->pc != 0x1CF9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9C4u; }
        if (ctx->pc != 0x1CF9C4u) { return; }
    }
    ctx->pc = 0x1CF9C4u;
    // 0x1cf9c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cf9c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf9c8: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x1cf9c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1cf9cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF9CCu;
    {
        const bool branch_taken_0x1cf9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9CCu;
            // 0x1cf9d0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf9cc) {
            ctx->pc = 0x1CF9E0u;
            goto label_1cf9e0;
        }
    }
    ctx->pc = 0x1CF9D4u;
    // 0x1cf9d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF9D4u;
    {
        const bool branch_taken_0x1cf9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9D4u;
            // 0x1cf9d8: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf9d4) {
            ctx->pc = 0x1CF9ECu;
            goto label_1cf9ec;
        }
    }
    ctx->pc = 0x1CF9DCu;
    // 0x1cf9dc: 0x0  nop
    ctx->pc = 0x1cf9dcu;
    // NOP
label_1cf9e0:
    // 0x1cf9e0: 0x721023  subu        $v0, $v1, $s2
    ctx->pc = 0x1cf9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1cf9e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf9e8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1cf9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1cf9ec:
    // 0x1cf9ec: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1cf9ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf9f0: 0xa622006c  sh          $v0, 0x6C($s1)
    ctx->pc = 0x1cf9f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 108), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cf9f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cf9f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf9f8: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x1cf9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x1cf9fc: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x1cf9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x1cfa00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CFA00u;
    {
        const bool branch_taken_0x1cfa00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA00u;
            // 0x1cfa04: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa00) {
            ctx->pc = 0x1CFA20u;
            goto label_1cfa20;
        }
    }
    ctx->pc = 0x1CFA08u;
label_1cfa08:
    // 0x1cfa08: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1cfa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1cfa0c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1cfa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1cfa10: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1CFA10u;
    {
        const bool branch_taken_0x1cfa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA10u;
            // 0x1cfa14: 0x8c42003c  lw          $v0, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa10) {
            ctx->pc = 0x1CFAD8u;
            goto label_1cfad8;
        }
    }
    ctx->pc = 0x1CFA18u;
label_1cfa18:
    // 0x1cfa18: 0xc073ee2  jal         func_1CFB88
    ctx->pc = 0x1CFA18u;
    SET_GPR_U32(ctx, 31, 0x1CFA20u);
    ctx->pc = 0x1CFA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA18u;
            // 0x1cfa1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFB88u;
    if (runtime->hasFunction(0x1CFB88u)) {
        auto targetFn = runtime->lookupFunction(0x1CFB88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA20u; }
        if (ctx->pc != 0x1CFA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFB88_0x1cfb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA20u; }
        if (ctx->pc != 0x1CFA20u) { return; }
    }
    ctx->pc = 0x1CFA20u;
label_1cfa20:
    // 0x1cfa20: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1cfa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1cfa24: 0xc061eee  jal         func_187BB8
    ctx->pc = 0x1CFA24u;
    SET_GPR_U32(ctx, 31, 0x1CFA2Cu);
    ctx->pc = 0x1CFA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA24u;
            // 0x1cfa28: 0x9625006c  lhu         $a1, 0x6C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187BB8u;
    if (runtime->hasFunction(0x187BB8u)) {
        auto targetFn = runtime->lookupFunction(0x187BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA2Cu; }
        if (ctx->pc != 0x1CFA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187BB8_0x187bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA2Cu; }
        if (ctx->pc != 0x1CFA2Cu) { return; }
    }
    ctx->pc = 0x1CFA2Cu;
    // 0x1cfa2c: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x1cfa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1cfa30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cfa30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa34: 0x8e270054  lw          $a3, 0x54($s1)
    ctx->pc = 0x1cfa34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1cfa38: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cfa38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cfa3c: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x1cfa3cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x1cfa40: 0x8e27005c  lw          $a3, 0x5C($s1)
    ctx->pc = 0x1cfa40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1cfa44: 0x71072389  pcpyld      $a0, $t0, $a3
    ctx->pc = 0x1cfa44u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x1cfa48: 0x708324c8  ppacw       $a0, $a0, $v1
    ctx->pc = 0x1cfa48u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1cfa4c: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x1cfa4cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1cfa50: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x1cfa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x1cfa54: 0x4be31068  vadd.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x1cfa54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cfa58: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x1cfa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
    // 0x1cfa5c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1cfa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cfa60: 0xdba20090  lqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1cfa60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cfa64: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1cfa64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cfa68: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1cfa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cfa6c: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x1cfa6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1cfa70:
    // 0x1cfa70: 0x26f53d28  addiu       $s5, $s7, 0x3D28
    ctx->pc = 0x1cfa70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 15656));
    // 0x1cfa74: 0x9625006c  lhu         $a1, 0x6C($s1)
    ctx->pc = 0x1cfa74u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1cfa78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cfa78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa7c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1cfa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1cfa80: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1cfa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1cfa84: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1cfa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1cfa88: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x1cfa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1cfa8c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1cfa8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1cfa90: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CFA90u;
    {
        const bool branch_taken_0x1cfa90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA90u;
            // 0x1cfa94: 0x82a021  addu        $s4, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa90) {
            ctx->pc = 0x1CFAD0u;
            goto label_1cfad0;
        }
    }
    ctx->pc = 0x1CFA98u;
    // 0x1cfa98: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x1cfa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1cfa9c: 0x0  nop
    ctx->pc = 0x1cfa9cu;
    // NOP
label_1cfaa0:
    // 0x1cfaa0: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x1cfaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1cfaa4: 0x2429818  mult        $s3, $s2, $v0
    ctx->pc = 0x1cfaa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x1cfaa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cfaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfaac: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1CFAACu;
    SET_GPR_U32(ctx, 31, 0x1CFAB4u);
    ctx->pc = 0x1CFAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFAACu;
            // 0x1cfab0: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFAB4u; }
        if (ctx->pc != 0x1CFAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFAB4u; }
        if (ctx->pc != 0x1CFAB4u) { return; }
    }
    ctx->pc = 0x1CFAB4u;
    // 0x1cfab4: 0x1040ffd4  beqz        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1CFAB4u;
    {
        const bool branch_taken_0x1cfab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFAB4u;
            // 0x1cfab8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfab4) {
            ctx->pc = 0x1CFA08u;
            runtime->cooperativeGuestYield();
            goto label_1cfa08;
        }
    }
    ctx->pc = 0x1CFABCu;
    // 0x1cfabc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1cfabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1cfac0: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1cfac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1cfac4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1cfac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cfac8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1CFAC8u;
    {
        const bool branch_taken_0x1cfac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFAC8u;
            // 0x1cfacc: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfac8) {
            ctx->pc = 0x1CFAA0u;
            runtime->cooperativeGuestYield();
            goto label_1cfaa0;
        }
    }
    ctx->pc = 0x1CFAD0u;
label_1cfad0:
    // 0x1cfad0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cfad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cfad4: 0x0  nop
    ctx->pc = 0x1cfad4u;
    // NOP
label_1cfad8:
    // 0x1cfad8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1cfad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1cfadc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cfadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cfae0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cfae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cfae4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cfae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfae8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cfae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cfaec: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1cfaecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cfaf0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cfaf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cfaf4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1cfaf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1cfaf8: 0xdba10080  lqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1cfaf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cfafc: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x1cfafcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cfb00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cfb00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfb04: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1cfb04u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cfb08: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x1cfb08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cfb0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cfb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfb10: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1cfb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cfb14: 0xc073b84  jal         func_1CEE10
    ctx->pc = 0x1CFB14u;
    SET_GPR_U32(ctx, 31, 0x1CFB1Cu);
    ctx->pc = 0x1CFB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFB14u;
            // 0x1cfb18: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CEE10u;
    if (runtime->hasFunction(0x1CEE10u)) {
        auto targetFn = runtime->lookupFunction(0x1CEE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB1Cu; }
        if (ctx->pc != 0x1CFB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CEE10_0x1cee10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB1Cu; }
        if (ctx->pc != 0x1CFB1Cu) { return; }
    }
    ctx->pc = 0x1CFB1Cu;
    // 0x1cfb1c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1cfb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1cfb20: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cfb20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1cfb24: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1cfb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1cfb28: 0x40f809  jalr        $v0
    ctx->pc = 0x1CFB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CFB30u);
        ctx->pc = 0x1CFB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFB28u;
            // 0x1cfb2c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CFB30u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CF7DCu: goto label_1cf7dc;
            case 0x1CF7ECu: goto label_1cf7ec;
            case 0x1CF808u: goto label_1cf808;
            case 0x1CF910u: goto label_1cf910;
            case 0x1CF940u: goto label_1cf940;
            case 0x1CF948u: goto label_1cf948;
            case 0x1CF9E0u: goto label_1cf9e0;
            case 0x1CF9ECu: goto label_1cf9ec;
            case 0x1CFA08u: goto label_1cfa08;
            case 0x1CFA18u: goto label_1cfa18;
            case 0x1CFA20u: goto label_1cfa20;
            case 0x1CFA70u: goto label_1cfa70;
            case 0x1CFAA0u: goto label_1cfaa0;
            case 0x1CFAD0u: goto label_1cfad0;
            case 0x1CFAD8u: goto label_1cfad8;
            case 0x1CFB58u: goto label_1cfb58;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB30u; }
            if (ctx->pc != 0x1CFB30u) { return; }
        }
        }
    }
    ctx->pc = 0x1CFB30u;
    // 0x1cfb30: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x1cfb30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cfb34: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1cfb34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1cfb38: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x1cfb38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cfb3c: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x1cfb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x1cfb40: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1cfb40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cfb44: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1cfb44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cfb48: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1cfb48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cfb4c: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1cfb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cfb50: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x1cfb50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1cfb54: 0x0  nop
    ctx->pc = 0x1cfb54u;
    // NOP
label_1cfb58:
    // 0x1cfb58: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x1cfb58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1cfb5c: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x1cfb5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1cfb60: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x1cfb60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1cfb64: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x1cfb64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1cfb68: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x1cfb68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1cfb6c: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x1cfb6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1cfb70: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x1cfb70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1cfb74: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x1cfb74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1cfb78: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1cfb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cfb7c: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x1cfb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cfb80: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFB80u;
            // 0x1cfb84: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CF7DCu: goto label_1cf7dc;
            case 0x1CF7ECu: goto label_1cf7ec;
            case 0x1CF808u: goto label_1cf808;
            case 0x1CF910u: goto label_1cf910;
            case 0x1CF940u: goto label_1cf940;
            case 0x1CF948u: goto label_1cf948;
            case 0x1CF9E0u: goto label_1cf9e0;
            case 0x1CF9ECu: goto label_1cf9ec;
            case 0x1CFA08u: goto label_1cfa08;
            case 0x1CFA18u: goto label_1cfa18;
            case 0x1CFA20u: goto label_1cfa20;
            case 0x1CFA70u: goto label_1cfa70;
            case 0x1CFAA0u: goto label_1cfaa0;
            case 0x1CFAD0u: goto label_1cfad0;
            case 0x1CFAD8u: goto label_1cfad8;
            case 0x1CFB58u: goto label_1cfb58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CFB88u;
}
