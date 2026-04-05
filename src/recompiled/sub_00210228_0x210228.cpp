#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00210228
// Address: 0x210228 - 0x210c40
void sub_00210228_0x210228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210228_0x210228");
#endif

    ctx->pc = 0x210228u;

    // 0x210228: 0x27bdfaf0  addiu       $sp, $sp, -0x510
    ctx->pc = 0x210228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966000));
    // 0x21022c: 0x3c020203  lui         $v0, 0x203
    ctx->pc = 0x21022cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)515 << 16));
    // 0x210230: 0x7fb504a0  sq          $s5, 0x4A0($sp)
    ctx->pc = 0x210230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 21));
    // 0x210234: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x210234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x210238: 0x7fb70480  sq          $s7, 0x480($sp)
    ctx->pc = 0x210238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 23));
    // 0x21023c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x21023cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210240: 0x7fbe0470  sq          $fp, 0x470($sp)
    ctx->pc = 0x210240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 30));
    // 0x210244: 0x3c040430  lui         $a0, 0x430
    ctx->pc = 0x210244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1072 << 16));
    // 0x210248: 0x7fb004f0  sq          $s0, 0x4F0($sp)
    ctx->pc = 0x210248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 16));
    // 0x21024c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x21024cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210250: 0x7fb104e0  sq          $s1, 0x4E0($sp)
    ctx->pc = 0x210250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 17));
    // 0x210254: 0x7fb204d0  sq          $s2, 0x4D0($sp)
    ctx->pc = 0x210254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 18));
    // 0x210258: 0x7fb304c0  sq          $s3, 0x4C0($sp)
    ctx->pc = 0x210258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 19));
    // 0x21025c: 0x7fb404b0  sq          $s4, 0x4B0($sp)
    ctx->pc = 0x21025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 20));
    // 0x210260: 0x7fb60490  sq          $s6, 0x490($sp)
    ctx->pc = 0x210260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 22));
    // 0x210264: 0xffbf0460  sd          $ra, 0x460($sp)
    ctx->pc = 0x210264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 31));
    // 0x210268: 0xe7b40500  swc1        $f20, 0x500($sp)
    ctx->pc = 0x210268u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1280), bits); }
    // 0x21026c: 0x8ea30258  lw          $v1, 0x258($s5)
    ctx->pc = 0x21026cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 600)));
    // 0x210270: 0x7fa50200  sq          $a1, 0x200($sp)
    ctx->pc = 0x210270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 5));
    // 0x210274: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x210274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x210278: 0x62f025  or          $fp, $v1, $v0
    ctx->pc = 0x210278u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21027c: 0x27b60200  addiu       $s6, $sp, 0x200
    ctx->pc = 0x21027cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_210280:
    // 0x210280: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210284: 0xc078888  jal         func_1E2220
    ctx->pc = 0x210284u;
    SET_GPR_U32(ctx, 31, 0x21028Cu);
    ctx->pc = 0x210288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210284u;
            // 0x210288: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2220u;
    if (runtime->hasFunction(0x1E2220u)) {
        auto targetFn = runtime->lookupFunction(0x1E2220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21028Cu; }
        if (ctx->pc != 0x21028Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2220_0x1e2220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21028Cu; }
        if (ctx->pc != 0x21028Cu) { return; }
    }
    ctx->pc = 0x21028Cu;
    // 0x21028c: 0x7ba30200  lq          $v1, 0x200($sp)
    ctx->pc = 0x21028cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x210290: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x210290u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210294: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x210294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x210298: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x210298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
    // 0x21029c: 0x86a30264  lh          $v1, 0x264($s5)
    ctx->pc = 0x21029cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 612)));
    // 0x2102a0: 0x54620151  bnel        $v1, $v0, . + 4 + (0x151 << 2)
    ctx->pc = 0x2102A0u;
    {
        const bool branch_taken_0x2102a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2102a0) {
            ctx->pc = 0x2102A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2102A0u;
            // 0x2102a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2107E8u;
            goto label_2107e8;
        }
    }
    ctx->pc = 0x2102A8u;
    // 0x2102a8: 0x8ea20260  lw          $v0, 0x260($s5)
    ctx->pc = 0x2102a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 608)));
    // 0x2102ac: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x2102acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x2102b0: 0x2443fe41  addiu       $v1, $v0, -0x1BF
    ctx->pc = 0x2102b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966849));
    // 0x2102b4: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2102b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2102b8: 0x1040014f  beqz        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x2102B8u;
    {
        const bool branch_taken_0x2102b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2102BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2102B8u;
            // 0x2102bc: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2102b8) {
            ctx->pc = 0x2107F8u;
            goto label_2107f8;
        }
    }
    ctx->pc = 0x2102C0u;
    // 0x2102c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2102c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2102c4: 0x24427d50  addiu       $v0, $v0, 0x7D50
    ctx->pc = 0x2102c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32080));
    // 0x2102c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2102c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2102cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2102ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2102d0: 0x400008  jr          $v0
    ctx->pc = 0x2102D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2102D8u: goto label_2102d8;
            case 0x210330u: goto label_210330;
            case 0x2103C0u: goto label_2103c0;
            case 0x2104E0u: goto label_2104e0;
            case 0x2105D8u: goto label_2105d8;
            case 0x210700u: goto label_210700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2102D8u;
label_2102d8:
    // 0x2102d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2102d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2102dc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2102dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2102e0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x2102e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2102e4: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x2102e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2102e8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2102e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2102ec: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x2102ecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x2102f0: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x2102f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2102f4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2102f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2102f8: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x2102f8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x2102fc: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x2102fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210300: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x210300u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x210304: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x210304u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210308: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x210308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21030c: 0x70023ca9  por         $a3, $zero, $v0
    ctx->pc = 0x21030cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x210310: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x210310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x210314: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210318: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x210318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x21031c: 0xc083f32  jal         func_20FCC8
    ctx->pc = 0x21031Cu;
    SET_GPR_U32(ctx, 31, 0x210324u);
    ctx->pc = 0x210320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21031Cu;
            // 0x210320: 0x3c080802  lui         $t0, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2050 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCC8u;
    if (runtime->hasFunction(0x20FCC8u)) {
        auto targetFn = runtime->lookupFunction(0x20FCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210324u; }
        if (ctx->pc != 0x210324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCC8_0x20fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210324u; }
        if (ctx->pc != 0x210324u) { return; }
    }
    ctx->pc = 0x210324u;
    // 0x210324: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x210324u;
    {
        const bool branch_taken_0x210324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210324u;
            // 0x210328: 0x282a025  or          $s4, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210324) {
            ctx->pc = 0x2107F8u;
            goto label_2107f8;
        }
    }
    ctx->pc = 0x21032Cu;
    // 0x21032c: 0x0  nop
    ctx->pc = 0x21032cu;
    // NOP
label_210330:
    // 0x210330: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x210330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x210334: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x210334u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x210338: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x210338u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21033c: 0xfba20420  sqc2        $vf2, 0x420($sp)
    ctx->pc = 0x21033cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x210340: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x210340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x210344: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x210344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x210348: 0x70641389  pcpyld      $v0, $v1, $a0
    ctx->pc = 0x210348u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x21034c: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x21034cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x210350: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x210350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x210354: 0x70648389  pcpyld      $s0, $v1, $a0
    ctx->pc = 0x210354u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x210358: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x210358u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21035c: 0x720284c8  ppacw       $s0, $s0, $v0
    ctx->pc = 0x21035cu;
    SET_GPR_VEC(ctx, 16, PS2_PPACW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x210360: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x210360u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x210364: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210368: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x210368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21036c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x21036cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210370: 0x7fb00220  sq          $s0, 0x220($sp)
    ctx->pc = 0x210370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 16));
    // 0x210374: 0x70103ca9  por         $a3, $zero, $s0
    ctx->pc = 0x210374u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x210378: 0xc083f32  jal         func_20FCC8
    ctx->pc = 0x210378u;
    SET_GPR_U32(ctx, 31, 0x210380u);
    ctx->pc = 0x21037Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210378u;
            // 0x21037c: 0x3c080802  lui         $t0, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2050 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCC8u;
    if (runtime->hasFunction(0x20FCC8u)) {
        auto targetFn = runtime->lookupFunction(0x20FCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210380u; }
        if (ctx->pc != 0x210380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCC8_0x20fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210380u; }
        if (ctx->pc != 0x210380u) { return; }
    }
    ctx->pc = 0x210380u;
    // 0x210380: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x210380u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x210384: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x210384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x210388: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x210388u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21038c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21038cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x210390: 0x3c080802  lui         $t0, 0x802
    ctx->pc = 0x210390u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2050 << 16));
    // 0x210394: 0xdba20420  lqc2        $vf2, 0x420($sp)
    ctx->pc = 0x210394u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x210398: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x210398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21039c: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x21039cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2103a0: 0x70103ca9  por         $a3, $zero, $s0
    ctx->pc = 0x2103a0u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x2103a4: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x2103a4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2103a8: 0x7fb00230  sq          $s0, 0x230($sp)
    ctx->pc = 0x2103a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 16));
    // 0x2103ac: 0xc083f32  jal         func_20FCC8
    ctx->pc = 0x2103ACu;
    SET_GPR_U32(ctx, 31, 0x2103B4u);
    ctx->pc = 0x2103B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2103ACu;
            // 0x2103b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCC8u;
    if (runtime->hasFunction(0x20FCC8u)) {
        auto targetFn = runtime->lookupFunction(0x20FCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2103B4u; }
        if (ctx->pc != 0x2103B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCC8_0x20fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2103B4u; }
        if (ctx->pc != 0x2103B4u) { return; }
    }
    ctx->pc = 0x2103B4u;
    // 0x2103b4: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x2103B4u;
    {
        const bool branch_taken_0x2103b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2103B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2103B4u;
            // 0x2103b8: 0x282a025  or          $s4, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103b4) {
            ctx->pc = 0x2107F8u;
            goto label_2107f8;
        }
    }
    ctx->pc = 0x2103BCu;
    // 0x2103bc: 0x0  nop
    ctx->pc = 0x2103bcu;
    // NOP
label_2103c0:
    // 0x2103c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2103c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2103c4: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x2103c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2103c8: 0x70433389  pcpyld      $a2, $v0, $v1
    ctx->pc = 0x2103c8u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2103cc: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x2103ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2103d0: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x2103d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2103d4: 0x70439389  pcpyld      $s2, $v0, $v1
    ctx->pc = 0x2103d4u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2103d8: 0x724634c8  ppacw       $a2, $s2, $a2
    ctx->pc = 0x2103d8u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 18), GPR_VEC(ctx, 6)));
    // 0x2103dc: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x2103dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x2103e0: 0x7fa60240  sq          $a2, 0x240($sp)
    ctx->pc = 0x2103e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 6));
    // 0x2103e4: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x2103e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2103e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2103e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2103ec: 0x70438389  pcpyld      $s0, $v0, $v1
    ctx->pc = 0x2103ecu;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2103f0: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x2103f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2103f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2103f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2103f8: 0x70438b89  pcpyld      $s1, $v0, $v1
    ctx->pc = 0x2103f8u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2103fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2103fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210400: 0x723084c8  ppacw       $s0, $s1, $s0
    ctx->pc = 0x210400u;
    SET_GPR_VEC(ctx, 16, PS2_PPACW(GPR_VEC(ctx, 17), GPR_VEC(ctx, 16)));
    // 0x210404: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x210404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210408: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x210408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x21040c: 0x70103ca9  por         $a3, $zero, $s0
    ctx->pc = 0x21040cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x210410: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x210410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
    // 0x210414: 0xc083f32  jal         func_20FCC8
    ctx->pc = 0x210414u;
    SET_GPR_U32(ctx, 31, 0x21041Cu);
    ctx->pc = 0x210418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210414u;
            // 0x210418: 0x3c080802  lui         $t0, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2050 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCC8u;
    if (runtime->hasFunction(0x20FCC8u)) {
        auto targetFn = runtime->lookupFunction(0x20FCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21041Cu; }
        if (ctx->pc != 0x21041Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCC8_0x20fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21041Cu; }
        if (ctx->pc != 0x21041Cu) { return; }
    }
    ctx->pc = 0x21041Cu;
    // 0x21041c: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x21041cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x210420: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x210420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x210424: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x210424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x210428: 0x70623389  pcpyld      $a2, $v1, $v0
    ctx->pc = 0x210428u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x21042c: 0x724634c8  ppacw       $a2, $s2, $a2
    ctx->pc = 0x21042cu;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 18), GPR_VEC(ctx, 6)));
    // 0x210430: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x210430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x210434: 0x7fa60260  sq          $a2, 0x260($sp)
    ctx->pc = 0x210434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 6));
    // 0x210438: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x210438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x21043c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21043cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x210440: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x210440u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x210444: 0x72228cc8  ppacw       $s1, $s1, $v0
    ctx->pc = 0x210444u;
    SET_GPR_VEC(ctx, 17, PS2_PPACW(GPR_VEC(ctx, 17), GPR_VEC(ctx, 2)));
    // 0x210448: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21044c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x21044cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x210450: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x210450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210454: 0x7fb10270  sq          $s1, 0x270($sp)
    ctx->pc = 0x210454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 17));
    // 0x210458: 0x70113ca9  por         $a3, $zero, $s1
    ctx->pc = 0x210458u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x21045c: 0xc083f32  jal         func_20FCC8
    ctx->pc = 0x21045Cu;
    SET_GPR_U32(ctx, 31, 0x210464u);
    ctx->pc = 0x210460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21045Cu;
            // 0x210460: 0x3c080802  lui         $t0, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2050 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCC8u;
    if (runtime->hasFunction(0x20FCC8u)) {
        auto targetFn = runtime->lookupFunction(0x20FCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210464u; }
        if (ctx->pc != 0x210464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCC8_0x20fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210464u; }
        if (ctx->pc != 0x210464u) { return; }
    }
    ctx->pc = 0x210464u;
    // 0x210464: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x210464u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x210468: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x210468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x21046c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21046cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x210470: 0x70623389  pcpyld      $a2, $v1, $v0
    ctx->pc = 0x210470u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x210474: 0x724634c8  ppacw       $a2, $s2, $a2
    ctx->pc = 0x210474u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 18), GPR_VEC(ctx, 6)));
    // 0x210478: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x210478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x21047c: 0x7fa60280  sq          $a2, 0x280($sp)
    ctx->pc = 0x21047cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 6));
    // 0x210480: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x210480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x210484: 0x3c080802  lui         $t0, 0x802
    ctx->pc = 0x210484u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2050 << 16));
    // 0x210488: 0x70103ca9  por         $a3, $zero, $s0
    ctx->pc = 0x210488u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x21048c: 0x7fb00290  sq          $s0, 0x290($sp)
    ctx->pc = 0x21048cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 16));
    // 0x210490: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210494: 0xc083f32  jal         func_20FCC8
    ctx->pc = 0x210494u;
    SET_GPR_U32(ctx, 31, 0x21049Cu);
    ctx->pc = 0x210498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210494u;
            // 0x210498: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCC8u;
    if (runtime->hasFunction(0x20FCC8u)) {
        auto targetFn = runtime->lookupFunction(0x20FCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21049Cu; }
        if (ctx->pc != 0x21049Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCC8_0x20fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21049Cu; }
        if (ctx->pc != 0x21049Cu) { return; }
    }
    ctx->pc = 0x21049Cu;
    // 0x21049c: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x21049cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x2104a0: 0x3c0440e0  lui         $a0, 0x40E0
    ctx->pc = 0x2104a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16608 << 16));
    // 0x2104a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2104a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2104a8: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x2104a8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x2104ac: 0x724294c8  ppacw       $s2, $s2, $v0
    ctx->pc = 0x2104acu;
    SET_GPR_VEC(ctx, 18, PS2_PPACW(GPR_VEC(ctx, 18), GPR_VEC(ctx, 2)));
    // 0x2104b0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2104b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2104b4: 0x7fb202a0  sq          $s2, 0x2A0($sp)
    ctx->pc = 0x2104b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 18));
    // 0x2104b8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2104b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2104bc: 0x3c080802  lui         $t0, 0x802
    ctx->pc = 0x2104bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2050 << 16));
    // 0x2104c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2104c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2104c4: 0x701234a9  por         $a2, $zero, $s2
    ctx->pc = 0x2104c4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x2104c8: 0x70113ca9  por         $a3, $zero, $s1
    ctx->pc = 0x2104c8u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x2104cc: 0x7fb102b0  sq          $s1, 0x2B0($sp)
    ctx->pc = 0x2104ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 17));
    // 0x2104d0: 0xc083f32  jal         func_20FCC8
    ctx->pc = 0x2104D0u;
    SET_GPR_U32(ctx, 31, 0x2104D8u);
    ctx->pc = 0x2104D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2104D0u;
            // 0x2104d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCC8u;
    if (runtime->hasFunction(0x20FCC8u)) {
        auto targetFn = runtime->lookupFunction(0x20FCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2104D8u; }
        if (ctx->pc != 0x2104D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCC8_0x20fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2104D8u; }
        if (ctx->pc != 0x2104D8u) { return; }
    }
    ctx->pc = 0x2104D8u;
    // 0x2104d8: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x2104D8u;
    {
        const bool branch_taken_0x2104d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2104DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2104D8u;
            // 0x2104dc: 0x282a025  or          $s4, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104d8) {
            ctx->pc = 0x2107F8u;
            goto label_2107f8;
        }
    }
    ctx->pc = 0x2104E0u;
label_2104e0:
    // 0x2104e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2104e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2104e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2104e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2104e8: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x2104e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2104ec: 0xfba20430  sqc2        $vf2, 0x430($sp)
    ctx->pc = 0x2104ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2104f0: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x2104f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2104f4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2104f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2104f8: 0x70641389  pcpyld      $v0, $v1, $a0
    ctx->pc = 0x2104f8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x2104fc: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x2104fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x210500: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x210500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x210504: 0x70648389  pcpyld      $s0, $v1, $a0
    ctx->pc = 0x210504u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x210508: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x210508u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21050c: 0x720284c8  ppacw       $s0, $s0, $v0
    ctx->pc = 0x21050cu;
    SET_GPR_VEC(ctx, 16, PS2_PPACW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x210510: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x210510u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x210514: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210518: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x210518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x21051c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x21051cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210520: 0x7fb002c0  sq          $s0, 0x2C0($sp)
    ctx->pc = 0x210520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 16));
    // 0x210524: 0x70103ca9  por         $a3, $zero, $s0
    ctx->pc = 0x210524u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x210528: 0xc083f32  jal         func_20FCC8
    ctx->pc = 0x210528u;
    SET_GPR_U32(ctx, 31, 0x210530u);
    ctx->pc = 0x21052Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210528u;
            // 0x21052c: 0x3c080802  lui         $t0, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2050 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCC8u;
    if (runtime->hasFunction(0x20FCC8u)) {
        auto targetFn = runtime->lookupFunction(0x20FCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210530u; }
        if (ctx->pc != 0x210530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCC8_0x20fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210530u; }
        if (ctx->pc != 0x210530u) { return; }
    }
    ctx->pc = 0x210530u;
    // 0x210530: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x210530u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x210534: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x210534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x210538: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x210538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21053c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x21053cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x210540: 0x3c080802  lui         $t0, 0x802
    ctx->pc = 0x210540u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2050 << 16));
    // 0x210544: 0xdba20430  lqc2        $vf2, 0x430($sp)
    ctx->pc = 0x210544u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x210548: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21054c: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x21054cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210550: 0x7fb002d0  sq          $s0, 0x2D0($sp)
    ctx->pc = 0x210550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 16));
    // 0x210554: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x210554u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x210558: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x210558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21055c: 0xc083f32  jal         func_20FCC8
    ctx->pc = 0x21055Cu;
    SET_GPR_U32(ctx, 31, 0x210564u);
    ctx->pc = 0x210560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21055Cu;
            // 0x210560: 0x70103ca9  por         $a3, $zero, $s0 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCC8u;
    if (runtime->hasFunction(0x20FCC8u)) {
        auto targetFn = runtime->lookupFunction(0x20FCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210564u; }
        if (ctx->pc != 0x210564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCC8_0x20fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210564u; }
        if (ctx->pc != 0x210564u) { return; }
    }
    ctx->pc = 0x210564u;
    // 0x210564: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x210564u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x210568: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x210568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x21056c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21056cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x210570: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x210570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x210574: 0x3c080802  lui         $t0, 0x802
    ctx->pc = 0x210574u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2050 << 16));
    // 0x210578: 0xdba20430  lqc2        $vf2, 0x430($sp)
    ctx->pc = 0x210578u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x21057c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21057cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210580: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x210580u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210584: 0x7fb002e0  sq          $s0, 0x2E0($sp)
    ctx->pc = 0x210584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 16));
    // 0x210588: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x210588u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21058c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x21058cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210590: 0xc083f32  jal         func_20FCC8
    ctx->pc = 0x210590u;
    SET_GPR_U32(ctx, 31, 0x210598u);
    ctx->pc = 0x210594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210590u;
            // 0x210594: 0x70103ca9  por         $a3, $zero, $s0 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCC8u;
    if (runtime->hasFunction(0x20FCC8u)) {
        auto targetFn = runtime->lookupFunction(0x20FCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210598u; }
        if (ctx->pc != 0x210598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCC8_0x20fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210598u; }
        if (ctx->pc != 0x210598u) { return; }
    }
    ctx->pc = 0x210598u;
    // 0x210598: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x210598u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x21059c: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x21059cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x2105a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2105a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2105a4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2105a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x2105a8: 0x3c080802  lui         $t0, 0x802
    ctx->pc = 0x2105a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2050 << 16));
    // 0x2105ac: 0xdba20430  lqc2        $vf2, 0x430($sp)
    ctx->pc = 0x2105acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x2105b0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2105b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105b4: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x2105b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2105b8: 0x70103ca9  por         $a3, $zero, $s0
    ctx->pc = 0x2105b8u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x2105bc: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x2105bcu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2105c0: 0x7fb002f0  sq          $s0, 0x2F0($sp)
    ctx->pc = 0x2105c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 16));
    // 0x2105c4: 0xc083f32  jal         func_20FCC8
    ctx->pc = 0x2105C4u;
    SET_GPR_U32(ctx, 31, 0x2105CCu);
    ctx->pc = 0x2105C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2105C4u;
            // 0x2105c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCC8u;
    if (runtime->hasFunction(0x20FCC8u)) {
        auto targetFn = runtime->lookupFunction(0x20FCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2105CCu; }
        if (ctx->pc != 0x2105CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCC8_0x20fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2105CCu; }
        if (ctx->pc != 0x2105CCu) { return; }
    }
    ctx->pc = 0x2105CCu;
    // 0x2105cc: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x2105CCu;
    {
        const bool branch_taken_0x2105cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2105D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2105CCu;
            // 0x2105d0: 0x282a025  or          $s4, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2105cc) {
            ctx->pc = 0x2107F8u;
            goto label_2107f8;
        }
    }
    ctx->pc = 0x2105D4u;
    // 0x2105d4: 0x0  nop
    ctx->pc = 0x2105d4u;
    // NOP
label_2105d8:
    // 0x2105d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2105d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2105dc: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x2105dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2105e0: 0x70433389  pcpyld      $a2, $v0, $v1
    ctx->pc = 0x2105e0u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2105e4: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x2105e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2105e8: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x2105e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2105ec: 0x70438b89  pcpyld      $s1, $v0, $v1
    ctx->pc = 0x2105ecu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2105f0: 0x722634c8  ppacw       $a2, $s1, $a2
    ctx->pc = 0x2105f0u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 17), GPR_VEC(ctx, 6)));
    // 0x2105f4: 0x7fa600f0  sq          $a2, 0xF0($sp)
    ctx->pc = 0x2105f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 6));
    // 0x2105f8: 0x7fa60300  sq          $a2, 0x300($sp)
    ctx->pc = 0x2105f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 6));
    // 0x2105fc: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x2105fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x210600: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x210600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x210604: 0x70439b89  pcpyld      $s3, $v0, $v1
    ctx->pc = 0x210604u;
    SET_GPR_VEC(ctx, 19, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x210608: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x210608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x21060c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21060cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x210610: 0x70439389  pcpyld      $s2, $v0, $v1
    ctx->pc = 0x210610u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x210614: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210618: 0x725384c8  ppacw       $s0, $s2, $s3
    ctx->pc = 0x210618u;
    SET_GPR_VEC(ctx, 16, PS2_PPACW(GPR_VEC(ctx, 18), GPR_VEC(ctx, 19)));
    // 0x21061c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x21061cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210620: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x210620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x210624: 0x70103ca9  por         $a3, $zero, $s0
    ctx->pc = 0x210624u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x210628: 0x7fb00310  sq          $s0, 0x310($sp)
    ctx->pc = 0x210628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 16));
    // 0x21062c: 0xc083f32  jal         func_20FCC8
    ctx->pc = 0x21062Cu;
    SET_GPR_U32(ctx, 31, 0x210634u);
    ctx->pc = 0x210630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21062Cu;
            // 0x210630: 0x3c080802  lui         $t0, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2050 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCC8u;
    if (runtime->hasFunction(0x20FCC8u)) {
        auto targetFn = runtime->lookupFunction(0x20FCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210634u; }
        if (ctx->pc != 0x210634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCC8_0x20fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210634u; }
        if (ctx->pc != 0x210634u) { return; }
    }
    ctx->pc = 0x210634u;
    // 0x210634: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x210634u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x210638: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x210638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x21063c: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x21063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x210640: 0x70623389  pcpyld      $a2, $v1, $v0
    ctx->pc = 0x210640u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x210644: 0x722634c8  ppacw       $a2, $s1, $a2
    ctx->pc = 0x210644u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 17), GPR_VEC(ctx, 6)));
    // 0x210648: 0x7fa60110  sq          $a2, 0x110($sp)
    ctx->pc = 0x210648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 6));
    // 0x21064c: 0x7fa60320  sq          $a2, 0x320($sp)
    ctx->pc = 0x21064cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 6));
    // 0x210650: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x210650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x210654: 0x3c080802  lui         $t0, 0x802
    ctx->pc = 0x210654u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2050 << 16));
    // 0x210658: 0x7fb00330  sq          $s0, 0x330($sp)
    ctx->pc = 0x210658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 16));
    // 0x21065c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21065cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210660: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x210660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210664: 0xc083f32  jal         func_20FCC8
    ctx->pc = 0x210664u;
    SET_GPR_U32(ctx, 31, 0x21066Cu);
    ctx->pc = 0x210668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210664u;
            // 0x210668: 0x70103ca9  por         $a3, $zero, $s0 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCC8u;
    if (runtime->hasFunction(0x20FCC8u)) {
        auto targetFn = runtime->lookupFunction(0x20FCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21066Cu; }
        if (ctx->pc != 0x21066Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCC8_0x20fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21066Cu; }
        if (ctx->pc != 0x21066Cu) { return; }
    }
    ctx->pc = 0x21066Cu;
    // 0x21066c: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x21066cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x210670: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x210670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x210674: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x210674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x210678: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x210678u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x21067c: 0x72228cc8  ppacw       $s1, $s1, $v0
    ctx->pc = 0x21067cu;
    SET_GPR_VEC(ctx, 17, PS2_PPACW(GPR_VEC(ctx, 17), GPR_VEC(ctx, 2)));
    // 0x210680: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x210680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x210684: 0x7fb10340  sq          $s1, 0x340($sp)
    ctx->pc = 0x210684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 17));
    // 0x210688: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x210688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x21068c: 0x3c080802  lui         $t0, 0x802
    ctx->pc = 0x21068cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2050 << 16));
    // 0x210690: 0x701134a9  por         $a2, $zero, $s1
    ctx->pc = 0x210690u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x210694: 0x70103ca9  por         $a3, $zero, $s0
    ctx->pc = 0x210694u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x210698: 0x7fb00350  sq          $s0, 0x350($sp)
    ctx->pc = 0x210698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 16));
    // 0x21069c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21069cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2106a0: 0xc083f32  jal         func_20FCC8
    ctx->pc = 0x2106A0u;
    SET_GPR_U32(ctx, 31, 0x2106A8u);
    ctx->pc = 0x2106A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2106A0u;
            // 0x2106a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCC8u;
    if (runtime->hasFunction(0x20FCC8u)) {
        auto targetFn = runtime->lookupFunction(0x20FCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2106A8u; }
        if (ctx->pc != 0x2106A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCC8_0x20fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2106A8u; }
        if (ctx->pc != 0x2106A8u) { return; }
    }
    ctx->pc = 0x2106A8u;
    // 0x2106a8: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x2106a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x2106ac: 0x3c0440e0  lui         $a0, 0x40E0
    ctx->pc = 0x2106acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16608 << 16));
    // 0x2106b0: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x2106b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2106b4: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x2106b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x2106b8: 0x724294c8  ppacw       $s2, $s2, $v0
    ctx->pc = 0x2106b8u;
    SET_GPR_VEC(ctx, 18, PS2_PPACW(GPR_VEC(ctx, 18), GPR_VEC(ctx, 2)));
    // 0x2106bc: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x2106bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x2106c0: 0x7fb20360  sq          $s2, 0x360($sp)
    ctx->pc = 0x2106c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 18));
    // 0x2106c4: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x2106c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2106c8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2106c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2106cc: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x2106ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x2106d0: 0x705314c8  ppacw       $v0, $v0, $s3
    ctx->pc = 0x2106d0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 19)));
    // 0x2106d4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2106d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2106d8: 0x701234a9  por         $a2, $zero, $s2
    ctx->pc = 0x2106d8u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x2106dc: 0x70023ca9  por         $a3, $zero, $v0
    ctx->pc = 0x2106dcu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2106e0: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x2106e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x2106e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2106e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2106e8: 0x7fa20370  sq          $v0, 0x370($sp)
    ctx->pc = 0x2106e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 2));
    // 0x2106ec: 0xc083f32  jal         func_20FCC8
    ctx->pc = 0x2106ECu;
    SET_GPR_U32(ctx, 31, 0x2106F4u);
    ctx->pc = 0x2106F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2106ECu;
            // 0x2106f0: 0x3c080802  lui         $t0, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2050 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCC8u;
    if (runtime->hasFunction(0x20FCC8u)) {
        auto targetFn = runtime->lookupFunction(0x20FCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2106F4u; }
        if (ctx->pc != 0x2106F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCC8_0x20fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2106F4u; }
        if (ctx->pc != 0x2106F4u) { return; }
    }
    ctx->pc = 0x2106F4u;
    // 0x2106f4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2106F4u;
    {
        const bool branch_taken_0x2106f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2106F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2106F4u;
            // 0x2106f8: 0x282a025  or          $s4, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2106f4) {
            ctx->pc = 0x2107F8u;
            goto label_2107f8;
        }
    }
    ctx->pc = 0x2106FCu;
    // 0x2106fc: 0x0  nop
    ctx->pc = 0x2106fcu;
    // NOP
label_210700:
    // 0x210700: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x210700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x210704: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x210704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x210708: 0x70433389  pcpyld      $a2, $v0, $v1
    ctx->pc = 0x210708u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x21070c: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x21070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x210710: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x210710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x210714: 0x70438b89  pcpyld      $s1, $v0, $v1
    ctx->pc = 0x210714u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x210718: 0x722634c8  ppacw       $a2, $s1, $a2
    ctx->pc = 0x210718u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 17), GPR_VEC(ctx, 6)));
    // 0x21071c: 0x7fa60170  sq          $a2, 0x170($sp)
    ctx->pc = 0x21071cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 6));
    // 0x210720: 0x7fa60380  sq          $a2, 0x380($sp)
    ctx->pc = 0x210720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 6));
    // 0x210724: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x210724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x210728: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x210728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21072c: 0x70438389  pcpyld      $s0, $v0, $v1
    ctx->pc = 0x21072cu;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x210730: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x210730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x210734: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x210734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x210738: 0x70439389  pcpyld      $s2, $v0, $v1
    ctx->pc = 0x210738u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x21073c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21073cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210740: 0x725084c8  ppacw       $s0, $s2, $s0
    ctx->pc = 0x210740u;
    SET_GPR_VEC(ctx, 16, PS2_PPACW(GPR_VEC(ctx, 18), GPR_VEC(ctx, 16)));
    // 0x210744: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x210744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210748: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x210748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x21074c: 0x70103ca9  por         $a3, $zero, $s0
    ctx->pc = 0x21074cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x210750: 0x7fb00390  sq          $s0, 0x390($sp)
    ctx->pc = 0x210750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 16));
    // 0x210754: 0xc083f32  jal         func_20FCC8
    ctx->pc = 0x210754u;
    SET_GPR_U32(ctx, 31, 0x21075Cu);
    ctx->pc = 0x210758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210754u;
            // 0x210758: 0x3c080802  lui         $t0, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2050 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCC8u;
    if (runtime->hasFunction(0x20FCC8u)) {
        auto targetFn = runtime->lookupFunction(0x20FCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21075Cu; }
        if (ctx->pc != 0x21075Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCC8_0x20fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21075Cu; }
        if (ctx->pc != 0x21075Cu) { return; }
    }
    ctx->pc = 0x21075Cu;
    // 0x21075c: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x21075cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x210760: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x210760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x210764: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x210764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x210768: 0x70623389  pcpyld      $a2, $v1, $v0
    ctx->pc = 0x210768u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x21076c: 0x722634c8  ppacw       $a2, $s1, $a2
    ctx->pc = 0x21076cu;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 17), GPR_VEC(ctx, 6)));
    // 0x210770: 0x7fa60190  sq          $a2, 0x190($sp)
    ctx->pc = 0x210770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 6));
    // 0x210774: 0x7fa603a0  sq          $a2, 0x3A0($sp)
    ctx->pc = 0x210774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 6));
    // 0x210778: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x210778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x21077c: 0x3c080802  lui         $t0, 0x802
    ctx->pc = 0x21077cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2050 << 16));
    // 0x210780: 0x70103ca9  por         $a3, $zero, $s0
    ctx->pc = 0x210780u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x210784: 0x7fb003b0  sq          $s0, 0x3B0($sp)
    ctx->pc = 0x210784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 16));
    // 0x210788: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21078c: 0xc083f32  jal         func_20FCC8
    ctx->pc = 0x21078Cu;
    SET_GPR_U32(ctx, 31, 0x210794u);
    ctx->pc = 0x210790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21078Cu;
            // 0x210790: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCC8u;
    if (runtime->hasFunction(0x20FCC8u)) {
        auto targetFn = runtime->lookupFunction(0x20FCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210794u; }
        if (ctx->pc != 0x210794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCC8_0x20fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210794u; }
        if (ctx->pc != 0x210794u) { return; }
    }
    ctx->pc = 0x210794u;
    // 0x210794: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x210794u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x210798: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x210798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x21079c: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x21079cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2107a0: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x2107a0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x2107a4: 0x72228cc8  ppacw       $s1, $s1, $v0
    ctx->pc = 0x2107a4u;
    SET_GPR_VEC(ctx, 17, PS2_PPACW(GPR_VEC(ctx, 17), GPR_VEC(ctx, 2)));
    // 0x2107a8: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x2107a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x2107ac: 0x7fb103c0  sq          $s1, 0x3C0($sp)
    ctx->pc = 0x2107acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 17));
    // 0x2107b0: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x2107b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2107b4: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2107b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2107b8: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x2107b8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x2107bc: 0x724294c8  ppacw       $s2, $s2, $v0
    ctx->pc = 0x2107bcu;
    SET_GPR_VEC(ctx, 18, PS2_PPACW(GPR_VEC(ctx, 18), GPR_VEC(ctx, 2)));
    // 0x2107c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2107c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107c4: 0x701134a9  por         $a2, $zero, $s1
    ctx->pc = 0x2107c4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x2107c8: 0x70123ca9  por         $a3, $zero, $s2
    ctx->pc = 0x2107c8u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x2107cc: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x2107ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
    // 0x2107d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2107d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107d4: 0x7fb203d0  sq          $s2, 0x3D0($sp)
    ctx->pc = 0x2107d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 18));
    // 0x2107d8: 0xc083f32  jal         func_20FCC8
    ctx->pc = 0x2107D8u;
    SET_GPR_U32(ctx, 31, 0x2107E0u);
    ctx->pc = 0x2107DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2107D8u;
            // 0x2107dc: 0x3c080802  lui         $t0, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2050 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FCC8u;
    if (runtime->hasFunction(0x20FCC8u)) {
        auto targetFn = runtime->lookupFunction(0x20FCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2107E0u; }
        if (ctx->pc != 0x2107E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCC8_0x20fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2107E0u; }
        if (ctx->pc != 0x2107E0u) { return; }
    }
    ctx->pc = 0x2107E0u;
    // 0x2107e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2107E0u;
    {
        const bool branch_taken_0x2107e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2107E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2107E0u;
            // 0x2107e4: 0x282a025  or          $s4, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107e0) {
            ctx->pc = 0x2107F8u;
            goto label_2107f8;
        }
    }
    ctx->pc = 0x2107E8u;
label_2107e8:
    // 0x2107e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2107e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107ec: 0xc083fd2  jal         func_20FF48
    ctx->pc = 0x2107ECu;
    SET_GPR_U32(ctx, 31, 0x2107F4u);
    ctx->pc = 0x2107F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2107ECu;
            // 0x2107f0: 0x3c060802  lui         $a2, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2050 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FF48u;
    if (runtime->hasFunction(0x20FF48u)) {
        auto targetFn = runtime->lookupFunction(0x20FF48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2107F4u; }
        if (ctx->pc != 0x2107F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FF48_0x20ff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2107F4u; }
        if (ctx->pc != 0x2107F4u) { return; }
    }
    ctx->pc = 0x2107F4u;
    // 0x2107f4: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x2107f4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_2107f8:
    // 0x2107f8: 0x1280003d  beqz        $s4, . + 4 + (0x3D << 2)
    ctx->pc = 0x2107F8u;
    {
        const bool branch_taken_0x2107f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2107FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2107F8u;
            // 0x2107fc: 0xdba10200  lqc2        $vf1, 0x200($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107f8) {
            ctx->pc = 0x2108F0u;
            goto label_2108f0;
        }
    }
    ctx->pc = 0x210800u;
    // 0x210800: 0xdba20440  lqc2        $vf2, 0x440($sp)
    ctx->pc = 0x210800u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x210804: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x210804u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210808: 0xfba103e0  sqc2        $vf1, 0x3E0($sp)
    ctx->pc = 0x210808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21080c: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x21080cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x210810: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x210810u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x210814: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x210814u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210818: 0xfba103e0  sqc2        $vf1, 0x3E0($sp)
    ctx->pc = 0x210818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21081c: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x21081cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x210820: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x210820u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210824: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x210824u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210828: 0xdaa400e0  lqc2        $vf4, 0xE0($s5)
    ctx->pc = 0x210828u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 224)));
    // 0x21082c: 0x4be30b3c  vmove.xyzw  $vf3, $vf1
    ctx->pc = 0x21082cu;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
    // 0x210830: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x210830u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x210834: 0x4a0003bf  vwaitq
    ctx->pc = 0x210834u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x210838: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x210838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x21083c: 0x4a0002ff  vnop
    ctx->pc = 0x21083cu;
    // NOP operation, no action needed for VU0
    // 0x210840: 0x4a0002ff  vnop
    ctx->pc = 0x210840u;
    // NOP operation, no action needed for VU0
    // 0x210844: 0xfba301d0  sqc2        $vf3, 0x1D0($sp)
    ctx->pc = 0x210844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x210848: 0x4be418aa  vmul.xyzw   $vf2, $vf3, $vf4
    ctx->pc = 0x210848u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21084c: 0xfba303e0  sqc2        $vf3, 0x3E0($sp)
    ctx->pc = 0x21084cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x210850: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x210850u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210854: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x210854u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21085c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x21085cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210860: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x210860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210864: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x210864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210868: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x210868u;
    {
        const bool branch_taken_0x210868 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x210868) {
            ctx->pc = 0x210888u;
            goto label_210888;
        }
    }
    ctx->pc = 0x210870u;
    // 0x210870: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x210870u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x210874: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x210874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x210878: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x210878u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x21087c: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x21087cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210880: 0x4be12068  vadd.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x210880u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210884: 0xfaa100e0  sqc2        $vf1, 0xE0($s5)
    ctx->pc = 0x210884u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_210888:
    // 0x210888: 0x3c01c100  lui         $at, 0xC100
    ctx->pc = 0x210888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49408 << 16));
    // 0x21088c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21088cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210890: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x210890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210894: 0x0  nop
    ctx->pc = 0x210894u;
    // NOP
    // 0x210898: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x210898u;
    {
        const bool branch_taken_0x210898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x210898) {
            ctx->pc = 0x21089Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210898u;
            // 0x21089c: 0xc6a00158  lwc1        $f0, 0x158($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2108B0u;
            goto label_2108b0;
        }
    }
    ctx->pc = 0x2108A0u;
    // 0x2108a0: 0x96a20298  lhu         $v0, 0x298($s5)
    ctx->pc = 0x2108a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 664)));
    // 0x2108a4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2108a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2108a8: 0xa6a20298  sh          $v0, 0x298($s5)
    ctx->pc = 0x2108a8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 664), (uint16_t)GPR_U32(ctx, 2));
    // 0x2108ac: 0xc6a00158  lwc1        $f0, 0x158($s5)
    ctx->pc = 0x2108acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2108b0:
    // 0x2108b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2108b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2108b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2108b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2108b8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2108b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2108bc: 0x0  nop
    ctx->pc = 0x2108bcu;
    // NOP
    // 0x2108c0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2108C0u;
    {
        const bool branch_taken_0x2108c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2108C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2108C0u;
            // 0x2108c4: 0x26a30150  addiu       $v1, $s5, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2108c0) {
            ctx->pc = 0x2108F0u;
            goto label_2108f0;
        }
    }
    ctx->pc = 0x2108C8u;
    // 0x2108c8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2108c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2108cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2108ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2108d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2108d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2108d4: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2108d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2108d8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x2108d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x2108dc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2108dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2108e0: 0x8ea20174  lw          $v0, 0x174($s5)
    ctx->pc = 0x2108e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 372)));
    // 0x2108e4: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x2108e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2108e8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2108e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2108ec: 0xaea20174  sw          $v0, 0x174($s5)
    ctx->pc = 0x2108ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 372), GPR_U32(ctx, 2));
label_2108f0:
    // 0x2108f0: 0x8ea20174  lw          $v0, 0x174($s5)
    ctx->pc = 0x2108f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 372)));
    // 0x2108f4: 0x30420380  andi        $v0, $v0, 0x380
    ctx->pc = 0x2108f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)896);
    // 0x2108f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2108F8u;
    {
        const bool branch_taken_0x2108f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2108FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2108F8u;
            // 0x2108fc: 0x7ba50200  lq          $a1, 0x200($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2108f8) {
            ctx->pc = 0x210910u;
            goto label_210910;
        }
    }
    ctx->pc = 0x210900u;
    // 0x210900: 0xc083f04  jal         func_20FC10
    ctx->pc = 0x210900u;
    SET_GPR_U32(ctx, 31, 0x210908u);
    ctx->pc = 0x210904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210900u;
            // 0x210904: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FC10u;
    if (runtime->hasFunction(0x20FC10u)) {
        auto targetFn = runtime->lookupFunction(0x20FC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210908u; }
        if (ctx->pc != 0x210908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FC10_0x20fc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210908u; }
        if (ctx->pc != 0x210908u) { return; }
    }
    ctx->pc = 0x210908u;
    // 0x210908: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x210908u;
    {
        const bool branch_taken_0x210908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21090Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210908u;
            // 0x21090c: 0x7fa20200  sq          $v0, 0x200($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210908) {
            ctx->pc = 0x210B60u;
            goto label_210b60;
        }
    }
    ctx->pc = 0x210910u;
label_210910:
    // 0x210910: 0x7aa300e0  lq          $v1, 0xE0($s5)
    ctx->pc = 0x210910u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 224)));
    // 0x210914: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210918: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x210918u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x21091c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x21091cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x210920: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x210920u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210924: 0x0  nop
    ctx->pc = 0x210924u;
    // NOP
    // 0x210928: 0x45000087  bc1f        . + 4 + (0x87 << 2)
    ctx->pc = 0x210928u;
    {
        const bool branch_taken_0x210928 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21092Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210928u;
            // 0x21092c: 0xdba30200  lqc2        $vf3, 0x200($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210928) {
            ctx->pc = 0x210B48u;
            goto label_210b48;
        }
    }
    ctx->pc = 0x210930u;
    // 0x210930: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210934: 0x7aa60110  lq          $a2, 0x110($s5)
    ctx->pc = 0x210934u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 21), 272)));
    // 0x210938: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x210938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x21093c: 0x7fa30400  sq          $v1, 0x400($sp)
    ctx->pc = 0x21093cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 3));
    // 0x210940: 0x3c070802  lui         $a3, 0x802
    ctx->pc = 0x210940u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2050 << 16));
    // 0x210944: 0xfba30450  sqc2        $vf3, 0x450($sp)
    ctx->pc = 0x210944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x210948: 0xc0789b8  jal         func_1E26E0
    ctx->pc = 0x210948u;
    SET_GPR_U32(ctx, 31, 0x210950u);
    ctx->pc = 0x21094Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210948u;
            // 0x21094c: 0x27a803f0  addiu       $t0, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E26E0u;
    if (runtime->hasFunction(0x1E26E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E26E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210950u; }
        if (ctx->pc != 0x210950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E26E0_0x1e26e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210950u; }
        if (ctx->pc != 0x210950u) { return; }
    }
    ctx->pc = 0x210950u;
    // 0x210950: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x210950u;
    {
        const bool branch_taken_0x210950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210950u;
            // 0x210954: 0xdba30450  lqc2        $vf3, 0x450($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210950) {
            ctx->pc = 0x210B08u;
            goto label_210b08;
        }
    }
    ctx->pc = 0x210958u;
    // 0x210958: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x210958u;
    {
        const bool branch_taken_0x210958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21095Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210958u;
            // 0x21095c: 0x8ea20174  lw          $v0, 0x174($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210958) {
            ctx->pc = 0x210AB8u;
            goto label_210ab8;
        }
    }
    ctx->pc = 0x210960u;
label_210960:
    // 0x210960: 0x92a2029a  lbu         $v0, 0x29A($s5)
    ctx->pc = 0x210960u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 666)));
    // 0x210964: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x210964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x210968: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x210968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21096c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x21096Cu;
    {
        const bool branch_taken_0x21096c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21096c) {
            ctx->pc = 0x210A20u;
            goto label_210a20;
        }
    }
    ctx->pc = 0x210974u;
    // 0x210974: 0x3c01bd80  lui         $at, 0xBD80
    ctx->pc = 0x210974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48512 << 16));
    // 0x210978: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x210978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21097c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x21097cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x210980: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x210980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210984: 0x4600a082  mul.s       $f2, $f20, $f0
    ctx->pc = 0x210984u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x210988: 0x96a20298  lhu         $v0, 0x298($s5)
    ctx->pc = 0x210988u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 664)));
    // 0x21098c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x21098cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x210990: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x210990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210994: 0x0  nop
    ctx->pc = 0x210994u;
    // NOP
    // 0x210998: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x210998u;
    {
        const bool branch_taken_0x210998 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21099Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210998u;
            // 0x21099c: 0xa6a20298  sh          $v0, 0x298($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 664), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210998) {
            ctx->pc = 0x2109BCu;
            goto label_2109bc;
        }
    }
    ctx->pc = 0x2109A0u;
    // 0x2109a0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2109a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2109a4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2109a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2109a8: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x2109a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x2109ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2109acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2109b0: 0x8c420340  lw          $v0, 0x340($v0)
    ctx->pc = 0x2109b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x2109b4: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2109B4u;
    {
        const bool branch_taken_0x2109b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2109b4) {
            ctx->pc = 0x2109E8u;
            goto label_2109e8;
        }
    }
    ctx->pc = 0x2109BCu;
label_2109bc:
    // 0x2109bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2109bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2109c0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2109c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2109c4: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x2109c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x2109c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2109c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2109cc: 0x8c420340  lw          $v0, 0x340($v0)
    ctx->pc = 0x2109ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x2109d0: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2109D0u;
    {
        const bool branch_taken_0x2109d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2109D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2109D0u;
            // 0x2109d4: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109d0) {
            ctx->pc = 0x210A20u;
            goto label_210a20;
        }
    }
    ctx->pc = 0x2109D8u;
    // 0x2109d8: 0xc4402930  lwc1        $f0, 0x2930($v0)
    ctx->pc = 0x2109d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2109dc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2109dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2109e0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2109E0u;
    {
        const bool branch_taken_0x2109e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2109e0) {
            ctx->pc = 0x210A20u;
            goto label_210a20;
        }
    }
    ctx->pc = 0x2109E8u;
label_2109e8:
    // 0x2109e8: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2109e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2109ec: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x2109ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2109f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2109f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2109f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2109f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2109f8: 0xafa201e4  sw          $v0, 0x1E4($sp)
    ctx->pc = 0x2109f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
    // 0x2109fc: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2109fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x210a00: 0x2402040f  addiu       $v0, $zero, 0x40F
    ctx->pc = 0x210a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x210a04: 0xa7a201e0  sh          $v0, 0x1E0($sp)
    ctx->pc = 0x210a04u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 480), (uint16_t)GPR_U32(ctx, 2));
    // 0x210a08: 0xafa001ec  sw          $zero, 0x1EC($sp)
    ctx->pc = 0x210a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 0));
    // 0x210a0c: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x210a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x210a10: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x210a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x210a14: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x210a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x210a18: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x210A18u;
    SET_GPR_U32(ctx, 31, 0x210A20u);
    ctx->pc = 0x210A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210A18u;
            // 0x210a1c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210A20u; }
        if (ctx->pc != 0x210A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210A20u; }
        if (ctx->pc != 0x210A20u) { return; }
    }
    ctx->pc = 0x210A20u;
label_210a20:
    // 0x210a20: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x210a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x210a24: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x210a24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x210a28: 0xdba30400  lqc2        $vf3, 0x400($sp)
    ctx->pc = 0x210a28u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x210a2c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x210a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x210a30: 0x4a8100c0  vaddx.y     $vf3, $vf0, $vf1x
    ctx->pc = 0x210a30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x210a34: 0xc4415ed8  lwc1        $f1, 0x5ED8($v0)
    ctx->pc = 0x210a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210a38: 0xc7a003f0  lwc1        $f0, 0x3F0($sp)
    ctx->pc = 0x210a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210a3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x210a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210a40: 0x0  nop
    ctx->pc = 0x210a40u;
    // NOP
    // 0x210a44: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x210A44u;
    {
        const bool branch_taken_0x210a44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x210A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210A44u;
            // 0x210a48: 0xfba30400  sqc2        $vf3, 0x400($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1024), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a44) {
            ctx->pc = 0x210AA8u;
            goto label_210aa8;
        }
    }
    ctx->pc = 0x210A4Cu;
    // 0x210a4c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x210a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x210a50: 0x8ea20234  lw          $v0, 0x234($s5)
    ctx->pc = 0x210a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 564)));
    // 0x210a54: 0x8c635e6c  lw          $v1, 0x5E6C($v1)
    ctx->pc = 0x210a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24172)));
    // 0x210a58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210a5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x210a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210a60: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x210a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x210a64: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x210a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x210a68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x210a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x210a6c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x210A6Cu;
    {
        const bool branch_taken_0x210a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x210a6c) {
            ctx->pc = 0x210AA8u;
            goto label_210aa8;
        }
    }
    ctx->pc = 0x210A74u;
    // 0x210a74: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x210a74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210a78: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x210a78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210a7c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x210a7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210a80: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x210a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x210a84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x210a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x210a88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x210a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210a8c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x210a8cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210a90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x210a90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210a94: 0x46000004  c1          0x4
    ctx->pc = 0x210a94u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x210a98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x210a98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210a9c: 0x0  nop
    ctx->pc = 0x210a9cu;
    // NOP
    // 0x210aa0: 0x45030021  bc1tl       . + 4 + (0x21 << 2)
    ctx->pc = 0x210AA0u;
    {
        const bool branch_taken_0x210aa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x210aa0) {
            ctx->pc = 0x210AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210AA0u;
            // 0x210aa4: 0xdaa100e0  lqc2        $vf1, 0xE0($s5) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210B28u;
            goto label_210b28;
        }
    }
    ctx->pc = 0x210AA8u;
label_210aa8:
    // 0x210aa8: 0xc083e80  jal         func_20FA00
    ctx->pc = 0x210AA8u;
    SET_GPR_U32(ctx, 31, 0x210AB0u);
    ctx->pc = 0x210AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210AA8u;
            // 0x210aac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FA00u;
    if (runtime->hasFunction(0x20FA00u)) {
        auto targetFn = runtime->lookupFunction(0x20FA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210AB0u; }
        if (ctx->pc != 0x210AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20fa00_0x20fa20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210AB0u; }
        if (ctx->pc != 0x210AB0u) { return; }
    }
    ctx->pc = 0x210AB0u;
    // 0x210ab0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x210AB0u;
    {
        const bool branch_taken_0x210ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210ab0) {
            ctx->pc = 0x210B60u;
            goto label_210b60;
        }
    }
    ctx->pc = 0x210AB8u;
label_210ab8:
    // 0x210ab8: 0x3042004c  andi        $v0, $v0, 0x4C
    ctx->pc = 0x210ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)76);
    // 0x210abc: 0x1040ffd8  beqz        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x210ABCu;
    {
        const bool branch_taken_0x210abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210ABCu;
            // 0x210ac0: 0xdba20200  lqc2        $vf2, 0x200($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210abc) {
            ctx->pc = 0x210A20u;
            runtime->cooperativeGuestYield();
            goto label_210a20;
        }
    }
    ctx->pc = 0x210AC4u;
    // 0x210ac4: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x210ac4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x210ac8: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x210ac8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x210acc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x210accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210ad0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x210ad0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x210ad4: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x210ad4u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x210ad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x210ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210adc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x210adcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210ae0: 0x0  nop
    ctx->pc = 0x210ae0u;
    // NOP
    // 0x210ae4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x210AE4u;
    {
        const bool branch_taken_0x210ae4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x210AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210AE4u;
            // 0x210ae8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ae4) {
            ctx->pc = 0x210AF0u;
            goto label_210af0;
        }
    }
    ctx->pc = 0x210AECu;
    // 0x210aec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x210aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210af0:
    // 0x210af0: 0x1040ff9b  beqz        $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x210AF0u;
    {
        const bool branch_taken_0x210af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210AF0u;
            // 0x210af4: 0x7ba20400  lq          $v0, 0x400($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210af0) {
            ctx->pc = 0x210960u;
            runtime->cooperativeGuestYield();
            goto label_210960;
        }
    }
    ctx->pc = 0x210AF8u;
    // 0x210af8: 0x4a830081  vaddy.y     $vf2, $vf0, $vf3y
    ctx->pc = 0x210af8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210afc: 0xfba20200  sqc2        $vf2, 0x200($sp)
    ctx->pc = 0x210afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x210b00: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x210B00u;
    {
        const bool branch_taken_0x210b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210B00u;
            // 0x210b04: 0x7ea200e0  sq          $v0, 0xE0($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b00) {
            ctx->pc = 0x210B60u;
            goto label_210b60;
        }
    }
    ctx->pc = 0x210B08u;
label_210b08:
    // 0x210b08: 0x8ea20174  lw          $v0, 0x174($s5)
    ctx->pc = 0x210b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 372)));
    // 0x210b0c: 0x30420380  andi        $v0, $v0, 0x380
    ctx->pc = 0x210b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)896);
    // 0x210b10: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x210B10u;
    {
        const bool branch_taken_0x210b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210b10) {
            ctx->pc = 0x210B60u;
            goto label_210b60;
        }
    }
    ctx->pc = 0x210B18u;
    // 0x210b18: 0xc083e64  jal         func_20F990
    ctx->pc = 0x210B18u;
    SET_GPR_U32(ctx, 31, 0x210B20u);
    ctx->pc = 0x210B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210B18u;
            // 0x210b1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F990u;
    if (runtime->hasFunction(0x20F990u)) {
        auto targetFn = runtime->lookupFunction(0x20F990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210B20u; }
        if (ctx->pc != 0x210B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F990_0x20f990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210B20u; }
        if (ctx->pc != 0x210B20u) { return; }
    }
    ctx->pc = 0x210B20u;
    // 0x210b20: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x210B20u;
    {
        const bool branch_taken_0x210b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210b20) {
            ctx->pc = 0x210B60u;
            goto label_210b60;
        }
    }
    ctx->pc = 0x210B28u;
label_210b28:
    // 0x210b28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b2c: 0x4b030040  vaddx.x     $vf1, $vf0, $vf3x
    ctx->pc = 0x210b2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210b30: 0xfaa100e0  sqc2        $vf1, 0xE0($s5)
    ctx->pc = 0x210b30u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210b34: 0x4a430042  vaddz.z     $vf1, $vf0, $vf3z
    ctx->pc = 0x210b34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210b38: 0xc083e78  jal         func_20F9E0
    ctx->pc = 0x210B38u;
    SET_GPR_U32(ctx, 31, 0x210B40u);
    ctx->pc = 0x210B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210B38u;
            // 0x210b3c: 0xfaa100e0  sqc2        $vf1, 0xE0($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 224), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F9E0u;
    if (runtime->hasFunction(0x20F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x20F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210B40u; }
        if (ctx->pc != 0x210B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20f9e0_0x20fa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210B40u; }
        if (ctx->pc != 0x210B40u) { return; }
    }
    ctx->pc = 0x210B40u;
    // 0x210b40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x210B40u;
    {
        const bool branch_taken_0x210b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210b40) {
            ctx->pc = 0x210B60u;
            goto label_210b60;
        }
    }
    ctx->pc = 0x210B48u;
label_210b48:
    // 0x210b48: 0x7aa60110  lq          $a2, 0x110($s5)
    ctx->pc = 0x210b48u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 21), 272)));
    // 0x210b4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b50: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x210b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x210b54: 0x3c070802  lui         $a3, 0x802
    ctx->pc = 0x210b54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2050 << 16));
    // 0x210b58: 0xc078abe  jal         func_1E2AF8
    ctx->pc = 0x210B58u;
    SET_GPR_U32(ctx, 31, 0x210B60u);
    ctx->pc = 0x210B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210B58u;
            // 0x210b5c: 0x27a80410  addiu       $t0, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2AF8u;
    if (runtime->hasFunction(0x1E2AF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E2AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210B60u; }
        if (ctx->pc != 0x210B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2AF8_0x1e2af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210B60u; }
        if (ctx->pc != 0x210B60u) { return; }
    }
    ctx->pc = 0x210B60u;
label_210b60:
    // 0x210b60: 0x3c03ff94  lui         $v1, 0xFF94
    ctx->pc = 0x210b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65428 << 16));
    // 0x210b64: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x210b64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x210b68: 0x3463e00c  ori         $v1, $v1, 0xE00C
    ctx->pc = 0x210b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57356);
    // 0x210b6c: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x210b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x210b70: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x210b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x210b74: 0x24c2f170  addiu       $v0, $a2, -0xE90
    ctx->pc = 0x210b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963568));
    // 0x210b78: 0xacc3f170  sw          $v1, -0xE90($a2)
    ctx->pc = 0x210b78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963568), GPR_U32(ctx, 3));
    // 0x210b7c: 0x248412c8  addiu       $a0, $a0, 0x12C8
    ctx->pc = 0x210b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4808));
    // 0x210b80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x210b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x210b84: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x210b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x210b88: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x210b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x210b8c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x210b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x210b90: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x210b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x210b94: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x210b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x210b98: 0xac5e0004  sw          $fp, 0x4($v0)
    ctx->pc = 0x210b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 30));
    // 0x210b9c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x210b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x210ba0: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x210ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x210ba4: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x210ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x210ba8: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x210ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x210bac: 0x8c64bcf8  lw          $a0, -0x4308($v1)
    ctx->pc = 0x210bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950136)));
    // 0x210bb0: 0x7aa50110  lq          $a1, 0x110($s5)
    ctx->pc = 0x210bb0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 21), 272)));
    // 0x210bb4: 0xc047864  jal         func_11E190
    ctx->pc = 0x210BB4u;
    SET_GPR_U32(ctx, 31, 0x210BBCu);
    ctx->pc = 0x210BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210BB4u;
            // 0x210bb8: 0x7ba60200  lq          $a2, 0x200($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210BBCu; }
        if (ctx->pc != 0x210BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210BBCu; }
        if (ctx->pc != 0x210BBCu) { return; }
    }
    ctx->pc = 0x210BBCu;
    // 0x210bbc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x210BBCu;
    {
        const bool branch_taken_0x210bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210BBCu;
            // 0x210bc0: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210bbc) {
            ctx->pc = 0x210C08u;
            goto label_210c08;
        }
    }
    ctx->pc = 0x210BC4u;
    // 0x210bc4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x210bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x210bc8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x210bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x210bcc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x210bccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x210bd0: 0x244277a0  addiu       $v0, $v0, 0x77A0
    ctx->pc = 0x210bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30624));
    // 0x210bd4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x210bd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210bd8: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x210bd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210bdc: 0xd841fff0  lqc2        $vf1, -0x10($v0)
    ctx->pc = 0x210bdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 4294967280)));
    // 0x210be0: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x210be0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210be4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x210be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x210be8: 0x16e20003  bne         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x210BE8u;
    {
        const bool branch_taken_0x210be8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x210BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210BE8u;
            // 0x210bec: 0xfba10200  sqc2        $vf1, 0x200($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210be8) {
            ctx->pc = 0x210BF8u;
            goto label_210bf8;
        }
    }
    ctx->pc = 0x210BF0u;
    // 0x210bf0: 0x7aa20110  lq          $v0, 0x110($s5)
    ctx->pc = 0x210bf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 272)));
    // 0x210bf4: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x210bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
label_210bf8:
    // 0x210bf8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x210bf8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x210bfc: 0x2ae20004  slti        $v0, $s7, 0x4
    ctx->pc = 0x210bfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x210c00: 0x1440fd9f  bnez        $v0, . + 4 + (-0x261 << 2)
    ctx->pc = 0x210C00u;
    {
        const bool branch_taken_0x210c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210C00u;
            // 0x210c04: 0x27b60200  addiu       $s6, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c00) {
            ctx->pc = 0x210280u;
            runtime->cooperativeGuestYield();
            goto label_210280;
        }
    }
    ctx->pc = 0x210C08u;
label_210c08:
    // 0x210c08: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x210c08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x210c0c: 0x7bb004f0  lq          $s0, 0x4F0($sp)
    ctx->pc = 0x210c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x210c10: 0x7bb104e0  lq          $s1, 0x4E0($sp)
    ctx->pc = 0x210c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x210c14: 0x7bb204d0  lq          $s2, 0x4D0($sp)
    ctx->pc = 0x210c14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x210c18: 0x7bb304c0  lq          $s3, 0x4C0($sp)
    ctx->pc = 0x210c18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x210c1c: 0x7bb404b0  lq          $s4, 0x4B0($sp)
    ctx->pc = 0x210c1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x210c20: 0x7bb504a0  lq          $s5, 0x4A0($sp)
    ctx->pc = 0x210c20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x210c24: 0x7bb60490  lq          $s6, 0x490($sp)
    ctx->pc = 0x210c24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x210c28: 0x7bb70480  lq          $s7, 0x480($sp)
    ctx->pc = 0x210c28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x210c2c: 0x7bbe0470  lq          $fp, 0x470($sp)
    ctx->pc = 0x210c2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x210c30: 0xdfbf0460  ld          $ra, 0x460($sp)
    ctx->pc = 0x210c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x210c34: 0xc7b40500  lwc1        $f20, 0x500($sp)
    ctx->pc = 0x210c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x210c38: 0x3e00008  jr          $ra
    ctx->pc = 0x210C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210C38u;
            // 0x210c3c: 0x27bd0510  addiu       $sp, $sp, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210280u: goto label_210280;
            case 0x2102D8u: goto label_2102d8;
            case 0x210330u: goto label_210330;
            case 0x2103C0u: goto label_2103c0;
            case 0x2104E0u: goto label_2104e0;
            case 0x2105D8u: goto label_2105d8;
            case 0x210700u: goto label_210700;
            case 0x2107E8u: goto label_2107e8;
            case 0x2107F8u: goto label_2107f8;
            case 0x210888u: goto label_210888;
            case 0x2108B0u: goto label_2108b0;
            case 0x2108F0u: goto label_2108f0;
            case 0x210910u: goto label_210910;
            case 0x210960u: goto label_210960;
            case 0x2109BCu: goto label_2109bc;
            case 0x2109E8u: goto label_2109e8;
            case 0x210A20u: goto label_210a20;
            case 0x210AA8u: goto label_210aa8;
            case 0x210AB8u: goto label_210ab8;
            case 0x210AF0u: goto label_210af0;
            case 0x210B08u: goto label_210b08;
            case 0x210B28u: goto label_210b28;
            case 0x210B48u: goto label_210b48;
            case 0x210B60u: goto label_210b60;
            case 0x210BF8u: goto label_210bf8;
            case 0x210C08u: goto label_210c08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x210C40u;
}
