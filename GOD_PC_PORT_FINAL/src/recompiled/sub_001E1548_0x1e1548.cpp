#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1548
// Address: 0x1e1548 - 0x1e1a28
void sub_001E1548_0x1e1548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1548_0x1e1548");
#endif

    ctx->pc = 0x1e1548u;

    // 0x1e1548: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1e1548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1e154c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x1e154cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1550: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x1e1550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x1e1554: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x1e1554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x1e1558: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1e1558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e155c: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x1e155cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x1e1560: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e1560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1564: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x1e1564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x1e1568: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x1e1568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x1e156c: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1e156cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1e1570: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1e1570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1e1574: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1e1574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1e1578: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1578u;
    {
        const bool branch_taken_0x1e1578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E157Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1578u;
            // 0x1e157c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1578) {
            ctx->pc = 0x1E15A0u;
            goto label_1e15a0;
        }
    }
    ctx->pc = 0x1E1580u;
    // 0x1e1580: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1e1580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1e1584: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e1584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e1588: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1588u;
    {
        const bool branch_taken_0x1e1588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1588) {
            ctx->pc = 0x1E15A0u;
            goto label_1e15a0;
        }
    }
    ctx->pc = 0x1E1590u;
    // 0x1e1590: 0xc07868a  jal         func_1E1A28
    ctx->pc = 0x1E1590u;
    SET_GPR_U32(ctx, 31, 0x1E1598u);
    ctx->pc = 0x1E1A28u;
    if (runtime->hasFunction(0x1E1A28u)) {
        auto targetFn = runtime->lookupFunction(0x1E1A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1598u; }
        if (ctx->pc != 0x1E1598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1A28_0x1e1a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1598u; }
        if (ctx->pc != 0x1E1598u) { return; }
    }
    ctx->pc = 0x1E1598u;
    // 0x1e1598: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x1E1598u;
    {
        const bool branch_taken_0x1e1598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E159Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1598u;
            // 0x1e159c: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1598) {
            ctx->pc = 0x1E1A08u;
            goto label_1e1a08;
        }
    }
    ctx->pc = 0x1E15A0u;
label_1e15a0:
    // 0x1e15a0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e15a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e15a4: 0x26420050  addiu       $v0, $s2, 0x50
    ctx->pc = 0x1e15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1e15a8: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1e15a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e15ac: 0xd8420020  lqc2        $vf2, 0x20($v0)
    ctx->pc = 0x1e15acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e15b0: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e15b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e15b4: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1e15b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e15b8: 0xda430120  lqc2        $vf3, 0x120($s2)
    ctx->pc = 0x1e15b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x1e15bc: 0x4be3109a  vmulz.xyzw  $vf2, $vf2, $vf3z
    ctx->pc = 0x1e15bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e15c0: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1e15c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e15c4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1e15c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1e15c8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1e15c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e15cc: 0x4be41098  vmulx.xyzw  $vf2, $vf2, $vf4x
    ctx->pc = 0x1e15ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e15d0: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1e15d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e15d4: 0x4be2096c  vsub.xyzw   $vf5, $vf1, $vf2
    ctx->pc = 0x1e15d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e15d8: 0xfba500a0  sqc2        $vf5, 0xA0($sp)
    ctx->pc = 0x1e15d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e15dc: 0xda410050  lqc2        $vf1, 0x50($s2)
    ctx->pc = 0x1e15dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1e15e0: 0x4b0300c4  vsubx.x     $vf3, $vf0, $vf3x
    ctx->pc = 0x1e15e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e15e4: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1e15e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e15e8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e15e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e15ec: 0x4be40858  vmulx.xyzw  $vf1, $vf1, $vf4x
    ctx->pc = 0x1e15ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e15f0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e15f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e15f4: 0xdba50090  lqc2        $vf5, 0x90($sp)
    ctx->pc = 0x1e15f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e15f8: 0x4be128ec  vsub.xyzw   $vf3, $vf5, $vf1
    ctx->pc = 0x1e15f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e15fc: 0x4be21968  vadd.xyzw   $vf5, $vf3, $vf2
    ctx->pc = 0x1e15fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e1600: 0xfba500b0  sqc2        $vf5, 0xB0($sp)
    ctx->pc = 0x1e1600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e1604: 0x4be20968  vadd.xyzw   $vf5, $vf1, $vf2
    ctx->pc = 0x1e1604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e1608: 0xfba500c0  sqc2        $vf5, 0xC0($sp)
    ctx->pc = 0x1e1608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e160c: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x1e160cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e1610: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x1e1610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x1e1614: 0xdba200a0  lqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x1e1614u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e1618: 0x4be218a8  vadd.xyzw   $vf2, $vf3, $vf2
    ctx->pc = 0x1e1618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e161c: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x1e161cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e1620: 0xdba500a0  lqc2        $vf5, 0xA0($sp)
    ctx->pc = 0x1e1620u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e1624: 0x4be50968  vadd.xyzw   $vf5, $vf1, $vf5
    ctx->pc = 0x1e1624u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e1628: 0xfba500f0  sqc2        $vf5, 0xF0($sp)
    ctx->pc = 0x1e1628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e162c: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1e162cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e1630: 0x8e440140  lw          $a0, 0x140($s2)
    ctx->pc = 0x1e1630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x1e1634: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e1634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1638: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x1e1638u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e163c: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1e163cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1640: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1e1640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1644: 0x4be40858  vmulx.xyzw  $vf1, $vf1, $vf4x
    ctx->pc = 0x1e1644u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1648: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1e1648u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e164c: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e164cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1650: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1e1650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e1654: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1e1654u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e1658: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e1658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e165c: 0x4be30918  vmulx.xyzw  $vf4, $vf1, $vf3x
    ctx->pc = 0x1e165cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e1660: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x1e1660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e1664: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1e1664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1e1668: 0x8e440258  lw          $a0, 0x258($s2)
    ctx->pc = 0x1e1668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
    // 0x1e166c: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x1e166cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x1e1670: 0x8e470254  lw          $a3, 0x254($s2)
    ctx->pc = 0x1e1670u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
    // 0x1e1674: 0x3c050430  lui         $a1, 0x430
    ctx->pc = 0x1e1674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1072 << 16));
    // 0x1e1678: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1e1678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1e167c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1e167cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1e1680: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x1e1680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1e1684: 0x34631ff3  ori         $v1, $v1, 0x1FF3
    ctx->pc = 0x1e1684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8179);
    // 0x1e1688: 0x445025  or          $t2, $v0, $a0
    ctx->pc = 0x1e1688u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1e168c: 0x671827  nor         $v1, $v1, $a3
    ctx->pc = 0x1e168cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 7)));
    // 0x1e1690: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1e1690u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x1e1694: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x1e1694u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e1698: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e1698u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e169c: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x1e169cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x1e16a0: 0x2502f170  addiu       $v0, $t0, -0xE90
    ctx->pc = 0x1e16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963568));
    // 0x1e16a4: 0x8e84bcf8  lw          $a0, -0x4308($s4)
    ctx->pc = 0x1e16a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950136)));
    // 0x1e16a8: 0xad03f170  sw          $v1, -0xE90($t0)
    ctx->pc = 0x1e16a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294963568), GPR_U32(ctx, 3));
    // 0x1e16ac: 0x24c61308  addiu       $a2, $a2, 0x1308
    ctx->pc = 0x1e16acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4872));
    // 0x1e16b0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1e16b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e16b4: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x1e16b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x1e16b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e16b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e16bc: 0xac4a0004  sw          $t2, 0x4($v0)
    ctx->pc = 0x1e16bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 10));
    // 0x1e16c0: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1e16c0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e16c4: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1e16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1e16c8: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x1e16c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x1e16cc: 0xac490014  sw          $t1, 0x14($v0)
    ctx->pc = 0x1e16ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 9));
    // 0x1e16d0: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1e16d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1e16d4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e16d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e16d8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1e16d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1e16dc: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1e16dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1e16e0: 0xc047ada  jal         func_11EB68
    ctx->pc = 0x1E16E0u;
    SET_GPR_U32(ctx, 31, 0x1E16E8u);
    ctx->pc = 0x1E16E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E16E0u;
            // 0x1e16e4: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EB68u;
    if (runtime->hasFunction(0x11EB68u)) {
        auto targetFn = runtime->lookupFunction(0x11EB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16E8u; }
        if (ctx->pc != 0x1E16E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EB68_0x11eb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16E8u; }
        if (ctx->pc != 0x1E16E8u) { return; }
    }
    ctx->pc = 0x1E16E8u;
    // 0x1e16e8: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1e16e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1e16ec: 0x30620030  andi        $v0, $v1, 0x30
    ctx->pc = 0x1e16ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x1e16f0: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x1E16F0u;
    {
        const bool branch_taken_0x1e16f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E16F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E16F0u;
            // 0x1e16f4: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e16f0) {
            ctx->pc = 0x1E18E0u;
            goto label_1e18e0;
        }
    }
    ctx->pc = 0x1E16F8u;
    // 0x1e16f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e16f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e16fc: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1E16FCu;
    {
        const bool branch_taken_0x1e16fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E16FCu;
            // 0x1e1700: 0x7ba600c0  lq          $a2, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e16fc) {
            ctx->pc = 0x1E17F0u;
            goto label_1e17f0;
        }
    }
    ctx->pc = 0x1E1704u;
    // 0x1e1704: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e1704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1708: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e1708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e170c: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E170Cu;
    SET_GPR_U32(ctx, 31, 0x1E1714u);
    ctx->pc = 0x1E1710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E170Cu;
            // 0x1e1710: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1714u; }
        if (ctx->pc != 0x1E1714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1714u; }
        if (ctx->pc != 0x1E1714u) { return; }
    }
    ctx->pc = 0x1E1714u;
    // 0x1e1714: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e1714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e1718: 0x7ba600b0  lq          $a2, 0xB0($sp)
    ctx->pc = 0x1e1718u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e171c: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e171cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e1720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e1720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1724: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1724u;
    SET_GPR_U32(ctx, 31, 0x1E172Cu);
    ctx->pc = 0x1E1728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1724u;
            // 0x1e1728: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E172Cu; }
        if (ctx->pc != 0x1E172Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E172Cu; }
        if (ctx->pc != 0x1E172Cu) { return; }
    }
    ctx->pc = 0x1E172Cu;
    // 0x1e172c: 0x36230002  ori         $v1, $s1, 0x2
    ctx->pc = 0x1e172cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
    // 0x1e1730: 0x7ba60040  lq          $a2, 0x40($sp)
    ctx->pc = 0x1e1730u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1734: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e1734u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e1738: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e1738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e173c: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E173Cu;
    SET_GPR_U32(ctx, 31, 0x1E1744u);
    ctx->pc = 0x1E1740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E173Cu;
            // 0x1e1740: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1744u; }
        if (ctx->pc != 0x1E1744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1744u; }
        if (ctx->pc != 0x1E1744u) { return; }
    }
    ctx->pc = 0x1E1744u;
    // 0x1e1744: 0x36230100  ori         $v1, $s1, 0x100
    ctx->pc = 0x1e1744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)256);
    // 0x1e1748: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e1748u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e174c: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e174cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e1750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1754: 0xdba500d0  lqc2        $vf5, 0xD0($sp)
    ctx->pc = 0x1e1754u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e1758: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e1758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e175c: 0x4be1296c  vsub.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x1e175cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e1760: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1760u;
    SET_GPR_U32(ctx, 31, 0x1E1768u);
    ctx->pc = 0x1E1764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1760u;
            // 0x1e1764: 0x48262800  qmfc2.ni    $a2, $vf5 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1768u; }
        if (ctx->pc != 0x1E1768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1768u; }
        if (ctx->pc != 0x1E1768u) { return; }
    }
    ctx->pc = 0x1E1768u;
    // 0x1e1768: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e1768u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e176c: 0x36230040  ori         $v1, $s1, 0x40
    ctx->pc = 0x1e176cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)64);
    // 0x1e1770: 0xdba20100  lqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1e1770u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e1774: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e1774u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e1778: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e1778u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e177c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1e177cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1780: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x1e1780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e1784: 0x7ba600c0  lq          $a2, 0xC0($sp)
    ctx->pc = 0x1e1784u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e1788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e1788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e178c: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E178Cu;
    SET_GPR_U32(ctx, 31, 0x1E1794u);
    ctx->pc = 0x1E1790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E178Cu;
            // 0x1e1790: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1794u; }
        if (ctx->pc != 0x1E1794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1794u; }
        if (ctx->pc != 0x1E1794u) { return; }
    }
    ctx->pc = 0x1E1794u;
    // 0x1e1794: 0x36230010  ori         $v1, $s1, 0x10
    ctx->pc = 0x1e1794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16);
    // 0x1e1798: 0x7ba600b0  lq          $a2, 0xB0($sp)
    ctx->pc = 0x1e1798u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e179c: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e179cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e17a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e17a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e17a4: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E17A4u;
    SET_GPR_U32(ctx, 31, 0x1E17ACu);
    ctx->pc = 0x1E17A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E17A4u;
            // 0x1e17a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E17ACu; }
        if (ctx->pc != 0x1E17ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E17ACu; }
        if (ctx->pc != 0x1E17ACu) { return; }
    }
    ctx->pc = 0x1E17ACu;
    // 0x1e17ac: 0x36230002  ori         $v1, $s1, 0x2
    ctx->pc = 0x1e17acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
    // 0x1e17b0: 0x7ba60040  lq          $a2, 0x40($sp)
    ctx->pc = 0x1e17b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e17b4: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e17b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e17b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e17b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e17bc: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E17BCu;
    SET_GPR_U32(ctx, 31, 0x1E17C4u);
    ctx->pc = 0x1E17C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E17BCu;
            // 0x1e17c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E17C4u; }
        if (ctx->pc != 0x1E17C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E17C4u; }
        if (ctx->pc != 0x1E17C4u) { return; }
    }
    ctx->pc = 0x1E17C4u;
    // 0x1e17c4: 0x36230100  ori         $v1, $s1, 0x100
    ctx->pc = 0x1e17c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)256);
    // 0x1e17c8: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e17c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e17cc: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e17ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e17d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e17d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e17d4: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1e17d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e17d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e17d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e17dc: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1e17dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e17e0: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E17E0u;
    SET_GPR_U32(ctx, 31, 0x1E17E8u);
    ctx->pc = 0x1E17E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E17E0u;
            // 0x1e17e4: 0x48262000  qmfc2.ni    $a2, $vf4 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E17E8u; }
        if (ctx->pc != 0x1E17E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E17E8u; }
        if (ctx->pc != 0x1E17E8u) { return; }
    }
    ctx->pc = 0x1E17E8u;
    // 0x1e17e8: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1E17E8u;
    {
        const bool branch_taken_0x1e17e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E17ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E17E8u;
            // 0x1e17ec: 0x36230040  ori         $v1, $s1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e17e8) {
            ctx->pc = 0x1E19E0u;
            goto label_1e19e0;
        }
    }
    ctx->pc = 0x1E17F0u;
label_1e17f0:
    // 0x1e17f0: 0x7ba600e0  lq          $a2, 0xE0($sp)
    ctx->pc = 0x1e17f0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e17f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e17f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e17f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e17f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e17fc: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E17FCu;
    SET_GPR_U32(ctx, 31, 0x1E1804u);
    ctx->pc = 0x1E1800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E17FCu;
            // 0x1e1800: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1804u; }
        if (ctx->pc != 0x1E1804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1804u; }
        if (ctx->pc != 0x1E1804u) { return; }
    }
    ctx->pc = 0x1E1804u;
    // 0x1e1804: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e1804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e1808: 0x7ba600f0  lq          $a2, 0xF0($sp)
    ctx->pc = 0x1e1808u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e180c: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e180cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e1810: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e1810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1814: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1814u;
    SET_GPR_U32(ctx, 31, 0x1E181Cu);
    ctx->pc = 0x1E1818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1814u;
            // 0x1e1818: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E181Cu; }
        if (ctx->pc != 0x1E181Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E181Cu; }
        if (ctx->pc != 0x1E181Cu) { return; }
    }
    ctx->pc = 0x1E181Cu;
    // 0x1e181c: 0x36230008  ori         $v1, $s1, 0x8
    ctx->pc = 0x1e181cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
    // 0x1e1820: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e1820u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e1824: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e1824u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1828: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e1828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e182c: 0xdba50090  lqc2        $vf5, 0x90($sp)
    ctx->pc = 0x1e182cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e1830: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e1830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1834: 0x4be1296c  vsub.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x1e1834u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e1838: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1838u;
    SET_GPR_U32(ctx, 31, 0x1E1840u);
    ctx->pc = 0x1E183Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1838u;
            // 0x1e183c: 0x48262800  qmfc2.ni    $a2, $vf5 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1840u; }
        if (ctx->pc != 0x1E1840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1840u; }
        if (ctx->pc != 0x1E1840u) { return; }
    }
    ctx->pc = 0x1E1840u;
    // 0x1e1840: 0x36230040  ori         $v1, $s1, 0x40
    ctx->pc = 0x1e1840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)64);
    // 0x1e1844: 0x7ba60040  lq          $a2, 0x40($sp)
    ctx->pc = 0x1e1844u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1848: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e1848u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e184c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e184cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1850: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1850u;
    SET_GPR_U32(ctx, 31, 0x1E1858u);
    ctx->pc = 0x1E1854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1850u;
            // 0x1e1854: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1858u; }
        if (ctx->pc != 0x1E1858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1858u; }
        if (ctx->pc != 0x1E1858u) { return; }
    }
    ctx->pc = 0x1E1858u;
    // 0x1e1858: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e1858u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e185c: 0x36230100  ori         $v1, $s1, 0x100
    ctx->pc = 0x1e185cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)256);
    // 0x1e1860: 0xdba20100  lqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1e1860u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e1864: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e1864u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e1868: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e1868u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e186c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1e186cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1870: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x1e1870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e1874: 0x7ba600e0  lq          $a2, 0xE0($sp)
    ctx->pc = 0x1e1874u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e1878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e1878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e187c: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E187Cu;
    SET_GPR_U32(ctx, 31, 0x1E1884u);
    ctx->pc = 0x1E1880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E187Cu;
            // 0x1e1880: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1884u; }
        if (ctx->pc != 0x1E1884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1884u; }
        if (ctx->pc != 0x1E1884u) { return; }
    }
    ctx->pc = 0x1E1884u;
    // 0x1e1884: 0x36230004  ori         $v1, $s1, 0x4
    ctx->pc = 0x1e1884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
    // 0x1e1888: 0x7ba600f0  lq          $a2, 0xF0($sp)
    ctx->pc = 0x1e1888u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e188c: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e188cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e1890: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e1890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1894: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1894u;
    SET_GPR_U32(ctx, 31, 0x1E189Cu);
    ctx->pc = 0x1E1898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1894u;
            // 0x1e1898: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E189Cu; }
        if (ctx->pc != 0x1E189Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E189Cu; }
        if (ctx->pc != 0x1E189Cu) { return; }
    }
    ctx->pc = 0x1E189Cu;
    // 0x1e189c: 0x36230008  ori         $v1, $s1, 0x8
    ctx->pc = 0x1e189cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
    // 0x1e18a0: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e18a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e18a4: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e18a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e18a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e18a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e18ac: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1e18acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e18b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e18b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e18b4: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1e18b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e18b8: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E18B8u;
    SET_GPR_U32(ctx, 31, 0x1E18C0u);
    ctx->pc = 0x1E18BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E18B8u;
            // 0x1e18bc: 0x48262000  qmfc2.ni    $a2, $vf4 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18C0u; }
        if (ctx->pc != 0x1E18C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18C0u; }
        if (ctx->pc != 0x1E18C0u) { return; }
    }
    ctx->pc = 0x1E18C0u;
    // 0x1e18c0: 0x36230040  ori         $v1, $s1, 0x40
    ctx->pc = 0x1e18c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)64);
    // 0x1e18c4: 0x7ba60040  lq          $a2, 0x40($sp)
    ctx->pc = 0x1e18c4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e18c8: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e18c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e18cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e18ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e18d0: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E18D0u;
    SET_GPR_U32(ctx, 31, 0x1E18D8u);
    ctx->pc = 0x1E18D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E18D0u;
            // 0x1e18d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18D8u; }
        if (ctx->pc != 0x1E18D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18D8u; }
        if (ctx->pc != 0x1E18D8u) { return; }
    }
    ctx->pc = 0x1E18D8u;
    // 0x1e18d8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1E18D8u;
    {
        const bool branch_taken_0x1e18d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E18DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E18D8u;
            // 0x1e18dc: 0x36230100  ori         $v1, $s1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18d8) {
            ctx->pc = 0x1E19E0u;
            goto label_1e19e0;
        }
    }
    ctx->pc = 0x1E18E0u;
label_1e18e0:
    // 0x1e18e0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E18E0u;
    {
        const bool branch_taken_0x1e18e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E18E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E18E0u;
            // 0x1e18e4: 0x7ba600c0  lq          $a2, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18e0) {
            ctx->pc = 0x1E1908u;
            goto label_1e1908;
        }
    }
    ctx->pc = 0x1E18E8u;
    // 0x1e18e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e18e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e18ec: 0x7ba700b0  lq          $a3, 0xB0($sp)
    ctx->pc = 0x1e18ecu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e18f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e18f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e18f4: 0xc07850c  jal         func_1E1430
    ctx->pc = 0x1E18F4u;
    SET_GPR_U32(ctx, 31, 0x1E18FCu);
    ctx->pc = 0x1E18F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E18F4u;
            // 0x1e18f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1430u;
    if (runtime->hasFunction(0x1E1430u)) {
        auto targetFn = runtime->lookupFunction(0x1E1430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18FCu; }
        if (ctx->pc != 0x1E18FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1430_0x1e1430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18FCu; }
        if (ctx->pc != 0x1E18FCu) { return; }
    }
    ctx->pc = 0x1E18FCu;
    // 0x1e18fc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1e18fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e1900: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E1900u;
    {
        const bool branch_taken_0x1e1900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1900u;
            // 0x1e1904: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1900) {
            ctx->pc = 0x1E1954u;
            goto label_1e1954;
        }
    }
    ctx->pc = 0x1E1908u;
label_1e1908:
    // 0x1e1908: 0x7ba60020  lq          $a2, 0x20($sp)
    ctx->pc = 0x1e1908u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e190c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e190cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1910: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e1910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1914: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1914u;
    SET_GPR_U32(ctx, 31, 0x1E191Cu);
    ctx->pc = 0x1E1918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1914u;
            // 0x1e1918: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E191Cu; }
        if (ctx->pc != 0x1E191Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E191Cu; }
        if (ctx->pc != 0x1E191Cu) { return; }
    }
    ctx->pc = 0x1E191Cu;
    // 0x1e191c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1e191cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e1920: 0x7ba600b0  lq          $a2, 0xB0($sp)
    ctx->pc = 0x1e1920u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e1924: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e1924u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e1928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e1928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e192c: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E192Cu;
    SET_GPR_U32(ctx, 31, 0x1E1934u);
    ctx->pc = 0x1E1930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E192Cu;
            // 0x1e1930: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1934u; }
        if (ctx->pc != 0x1E1934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1934u; }
        if (ctx->pc != 0x1E1934u) { return; }
    }
    ctx->pc = 0x1E1934u;
    // 0x1e1934: 0x36230002  ori         $v1, $s1, 0x2
    ctx->pc = 0x1e1934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
    // 0x1e1938: 0x7ba600c0  lq          $a2, 0xC0($sp)
    ctx->pc = 0x1e1938u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e193c: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e193cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e1940: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e1940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1944: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1944u;
    SET_GPR_U32(ctx, 31, 0x1E194Cu);
    ctx->pc = 0x1E1948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1944u;
            // 0x1e1948: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E194Cu; }
        if (ctx->pc != 0x1E194Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E194Cu; }
        if (ctx->pc != 0x1E194Cu) { return; }
    }
    ctx->pc = 0x1E194Cu;
    // 0x1e194c: 0x36230010  ori         $v1, $s1, 0x10
    ctx->pc = 0x1e194cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16);
    // 0x1e1950: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e1950u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_1e1954:
    // 0x1e1954: 0x7ba600e0  lq          $a2, 0xE0($sp)
    ctx->pc = 0x1e1954u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e1958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e1958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e195c: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E195Cu;
    SET_GPR_U32(ctx, 31, 0x1E1964u);
    ctx->pc = 0x1E1960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E195Cu;
            // 0x1e1960: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1964u; }
        if (ctx->pc != 0x1E1964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1964u; }
        if (ctx->pc != 0x1E1964u) { return; }
    }
    ctx->pc = 0x1E1964u;
    // 0x1e1964: 0x36230004  ori         $v1, $s1, 0x4
    ctx->pc = 0x1e1964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
    // 0x1e1968: 0x7ba600f0  lq          $a2, 0xF0($sp)
    ctx->pc = 0x1e1968u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e196c: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e196cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e1970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e1970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1974: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1974u;
    SET_GPR_U32(ctx, 31, 0x1E197Cu);
    ctx->pc = 0x1E1978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1974u;
            // 0x1e1978: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E197Cu; }
        if (ctx->pc != 0x1E197Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E197Cu; }
        if (ctx->pc != 0x1E197Cu) { return; }
    }
    ctx->pc = 0x1E197Cu;
    // 0x1e197c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e197cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e1980: 0x36230008  ori         $v1, $s1, 0x8
    ctx->pc = 0x1e1980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
    // 0x1e1984: 0xdba50100  lqc2        $vf5, 0x100($sp)
    ctx->pc = 0x1e1984u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e1988: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e1988u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e198c: 0x4be50868  vadd.xyzw   $vf1, $vf1, $vf5
    ctx->pc = 0x1e198cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1990: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E1990u;
    {
        const bool branch_taken_0x1e1990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1990u;
            // 0x1e1994: 0xfba10080  sqc2        $vf1, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1990) {
            ctx->pc = 0x1E19E4u;
            goto label_1e19e4;
        }
    }
    ctx->pc = 0x1E1998u;
    // 0x1e1998: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x1e1998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e199c: 0x7ba600c0  lq          $a2, 0xC0($sp)
    ctx->pc = 0x1e199cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e19a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e19a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19a4: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E19A4u;
    SET_GPR_U32(ctx, 31, 0x1E19ACu);
    ctx->pc = 0x1E19A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E19A4u;
            // 0x1e19a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19ACu; }
        if (ctx->pc != 0x1E19ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19ACu; }
        if (ctx->pc != 0x1E19ACu) { return; }
    }
    ctx->pc = 0x1E19ACu;
    // 0x1e19ac: 0x36230010  ori         $v1, $s1, 0x10
    ctx->pc = 0x1e19acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16);
    // 0x1e19b0: 0x7ba600b0  lq          $a2, 0xB0($sp)
    ctx->pc = 0x1e19b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e19b4: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e19b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e19b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e19b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19bc: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E19BCu;
    SET_GPR_U32(ctx, 31, 0x1E19C4u);
    ctx->pc = 0x1E19C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E19BCu;
            // 0x1e19c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19C4u; }
        if (ctx->pc != 0x1E19C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19C4u; }
        if (ctx->pc != 0x1E19C4u) { return; }
    }
    ctx->pc = 0x1E19C4u;
    // 0x1e19c4: 0x36230002  ori         $v1, $s1, 0x2
    ctx->pc = 0x1e19c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
    // 0x1e19c8: 0x7ba600a0  lq          $a2, 0xA0($sp)
    ctx->pc = 0x1e19c8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e19cc: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e19ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e19d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e19d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19d4: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E19D4u;
    SET_GPR_U32(ctx, 31, 0x1E19DCu);
    ctx->pc = 0x1E19D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E19D4u;
            // 0x1e19d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19DCu; }
        if (ctx->pc != 0x1E19DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19DCu; }
        if (ctx->pc != 0x1E19DCu) { return; }
    }
    ctx->pc = 0x1E19DCu;
    // 0x1e19dc: 0x36230080  ori         $v1, $s1, 0x80
    ctx->pc = 0x1e19dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)128);
label_1e19e0:
    // 0x1e19e0: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e19e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_1e19e4:
    // 0x1e19e4: 0xc047b18  jal         func_11EC60
    ctx->pc = 0x1E19E4u;
    SET_GPR_U32(ctx, 31, 0x1E19ECu);
    ctx->pc = 0x1E19E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E19E4u;
            // 0x1e19e8: 0x8e84bcf8  lw          $a0, -0x4308($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EC60u;
    if (runtime->hasFunction(0x11EC60u)) {
        auto targetFn = runtime->lookupFunction(0x11EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19ECu; }
        if (ctx->pc != 0x1E19ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EC60_0x11ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19ECu; }
        if (ctx->pc != 0x1E19ECu) { return; }
    }
    ctx->pc = 0x1E19ECu;
    // 0x1e19ec: 0xdba10080  lqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1e19ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e19f0: 0xdba20100  lqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1e19f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e19f4: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e19f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e19f8: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e19f8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e19fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e19fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1a00: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x1e1a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1e1a04: 0x0  nop
    ctx->pc = 0x1e1a04u;
    // NOP
label_1e1a08:
    // 0x1e1a08: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x1e1a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e1a0c: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x1e1a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e1a10: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x1e1a10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1e1a14: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x1e1a14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1e1a18: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1e1a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1e1a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A1Cu;
            // 0x1e1a20: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E15A0u: goto label_1e15a0;
            case 0x1E17F0u: goto label_1e17f0;
            case 0x1E18E0u: goto label_1e18e0;
            case 0x1E1908u: goto label_1e1908;
            case 0x1E1954u: goto label_1e1954;
            case 0x1E19E0u: goto label_1e19e0;
            case 0x1E19E4u: goto label_1e19e4;
            case 0x1E1A08u: goto label_1e1a08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E1A24u;
    // 0x1e1a24: 0x0  nop
    ctx->pc = 0x1e1a24u;
    // NOP
}
