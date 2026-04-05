#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020B610
// Address: 0x20b610 - 0x20bd48
void sub_0020B610_0x20b610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B610_0x20b610");
#endif

    ctx->pc = 0x20b610u;

    // 0x20b610: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x20b610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x20b614: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x20b614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x20b618: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20b618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20b61c: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x20b61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x20b620: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x20b620u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b624: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x20b624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x20b628: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20b628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20b62c: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x20b62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x20b630: 0x2e6001a  div         $zero, $s7, $a2
    ctx->pc = 0x20b630u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 23);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20b634: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x20b634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x20b638: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x20b638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x20b63c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20b63cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b640: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x20b640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x20b644: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x20b644u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b648: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x20b648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x20b64c: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x20b64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x20b650: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x20b650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x20b654: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x20b654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x20b658: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x20b658u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20b65c: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x20b65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20b660: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20B660u;
    {
        const bool branch_taken_0x20b660 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b660) {
            ctx->pc = 0x20B664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B660u;
            // 0x20b664: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B668u;
            goto label_20b668;
        }
    }
    ctx->pc = 0x20B668u;
label_20b668:
    // 0x20b668: 0xda630030  lqc2        $vf3, 0x30($s3)
    ctx->pc = 0x20b668u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x20b66c: 0x1012  mflo        $v0
    ctx->pc = 0x20b66cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x20b670: 0x1810  mfhi        $v1
    ctx->pc = 0x20b670u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20b674: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x20b674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x20b678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b67c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20b67cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20b680: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20b680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20b684: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x20b684u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x20b688: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x20b688u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x20b68c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x20b68cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20b690: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x20b690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20b694: 0xda620020  lqc2        $vf2, 0x20($s3)
    ctx->pc = 0x20b694u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x20b698: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x20b698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20b69c: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x20b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x20b6a0: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x20b6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20b6a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20b6a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b6a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20b6a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20b6ac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20B6ACu;
    {
        const bool branch_taken_0x20b6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b6ac) {
            ctx->pc = 0x20B6B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B6ACu;
            // 0x20b6b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B6B4u;
            goto label_20b6b4;
        }
    }
    ctx->pc = 0x20B6B4u;
label_20b6b4:
    // 0x20b6b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20b6b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20b6b8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x20b6b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x20b6bc: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x20b6bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x20b6c0: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x20b6c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20b6c4: 0x4be21868  vadd.xyzw   $vf1, $vf3, $vf2
    ctx->pc = 0x20b6c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20b6c8: 0x12d70191  beq         $s6, $s7, . + 4 + (0x191 << 2)
    ctx->pc = 0x20B6C8u;
    {
        const bool branch_taken_0x20b6c8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 23));
        ctx->pc = 0x20B6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B6C8u;
            // 0x20b6cc: 0xfba100a0  sqc2        $vf1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6c8) {
            ctx->pc = 0x20BD10u;
            goto label_20bd10;
        }
    }
    ctx->pc = 0x20B6D0u;
    // 0x20b6d0: 0x2c6001a  div         $zero, $s6, $a2
    ctx->pc = 0x20b6d0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 22);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20b6d4: 0x3c090030  lui         $t1, 0x30
    ctx->pc = 0x20b6d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)48 << 16));
    // 0x20b6d8: 0x25273490  addiu       $a3, $t1, 0x3490
    ctx->pc = 0x20b6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 13456));
    // 0x20b6dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20b6e0: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x20b6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x20b6e4: 0x24466328  addiu       $a2, $v0, 0x6328
    ctx->pc = 0x20b6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 25384));
    // 0x20b6e8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x20b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x20b6ec: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x20b6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x20b6f0: 0xace80004  sw          $t0, 0x4($a3)
    ctx->pc = 0x20b6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 8));
    // 0x20b6f4: 0x3c0a002a  lui         $t2, 0x2A
    ctx->pc = 0x20b6f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)42 << 16));
    // 0x20b6f8: 0xac406328  sw          $zero, 0x6328($v0)
    ctx->pc = 0x20b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25384), GPR_U32(ctx, 0));
    // 0x20b6fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b700: 0xa460e444  sh          $zero, -0x1BBC($v1)
    ctx->pc = 0x20b700u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294960196), (uint16_t)GPR_U32(ctx, 0));
    // 0x20b704: 0xda630000  lqc2        $vf3, 0x0($s3)
    ctx->pc = 0x20b704u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20b708: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20b708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20b70c: 0xa542e440  sh          $v0, -0x1BC0($t2)
    ctx->pc = 0x20b70cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4294960192), (uint16_t)GPR_U32(ctx, 2));
    // 0x20b710: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x20b710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20b714: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20B714u;
    {
        const bool branch_taken_0x20b714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b714) {
            ctx->pc = 0x20B718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B714u;
            // 0x20b718: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B71Cu;
            goto label_20b71c;
        }
    }
    ctx->pc = 0x20B71Cu;
label_20b71c:
    // 0x20b71c: 0xda620030  lqc2        $vf2, 0x30($s3)
    ctx->pc = 0x20b71cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x20b720: 0x2012  mflo        $a0
    ctx->pc = 0x20b720u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x20b724: 0x2810  mfhi        $a1
    ctx->pc = 0x20b724u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x20b728: 0x2484fffb  addiu       $a0, $a0, -0x5
    ctx->pc = 0x20b728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
    // 0x20b72c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20b72cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b730: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20b730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20b734: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20b734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20b738: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x20b738u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20b73c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x20b73cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20b740: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x20b740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20b744: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x20b744u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20b748: 0xda630020  lqc2        $vf3, 0x20($s3)
    ctx->pc = 0x20b748u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x20b74c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x20b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20b750: 0x24a5fffb  addiu       $a1, $a1, -0x5
    ctx->pc = 0x20b750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
    // 0x20b754: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x20b754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20b758: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20b758u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b75c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20b75cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20b760: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20B760u;
    {
        const bool branch_taken_0x20b760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b760) {
            ctx->pc = 0x20B764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B760u;
            // 0x20b764: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B768u;
            goto label_20b768;
        }
    }
    ctx->pc = 0x20B768u;
label_20b768:
    // 0x20b768: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20b768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20b76c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x20b76cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x20b770: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x20b770u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x20b774: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x20b774u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20b778: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x20b778u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20b77c: 0xdba100a0  lqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x20b77cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20b780: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x20b780u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20b784: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x20b784u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20b788: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20b788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20b78c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20b78cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20b790: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x20b790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b794: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x20b794u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20b798: 0xacd6000c  sw          $s6, 0xC($a2)
    ctx->pc = 0x20b798u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 22));
    // 0x20b79c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20b79cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b7a0: 0x46000004  c1          0x4
    ctx->pc = 0x20b7a0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x20b7a4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x20b7a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20b7a8: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x20b7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x20b7ac: 0x2504ffff  addiu       $a0, $t0, -0x1
    ctx->pc = 0x20b7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x20b7b0: 0x8d233490  lw          $v1, 0x3490($t1)
    ctx->pc = 0x20b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 13456)));
    // 0x20b7b4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x20b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x20b7b8: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x20b7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x20b7bc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x20b7bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20b7c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b7c4: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x20b7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x20b7c8: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x20b7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x20b7cc: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x20b7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x20b7d0: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x20b7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20b7d4: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x20b7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20b7d8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x20b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x20b7dc: 0x11020146  beq         $t0, $v0, . + 4 + (0x146 << 2)
    ctx->pc = 0x20B7DCu;
    {
        const bool branch_taken_0x20b7dc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B7DCu;
            // 0x20b7e0: 0x8d233490  lw          $v1, 0x3490($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 13456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7dc) {
            ctx->pc = 0x20BCF8u;
            goto label_20bcf8;
        }
    }
    ctx->pc = 0x20B7E4u;
    // 0x20b7e4: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x20b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x20b7e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b7ec: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x20b7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b7f0: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x20b7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b7f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20b7f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b7f8: 0x4500013f  bc1f        . + 4 + (0x13F << 2)
    ctx->pc = 0x20B7F8u;
    {
        const bool branch_taken_0x20b7f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b7f8) {
            ctx->pc = 0x20BCF8u;
            goto label_20bcf8;
        }
    }
    ctx->pc = 0x20B800u;
    // 0x20b800: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x20b800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x20b804: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x20b804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x20b808: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x20b808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20b80c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x20b80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20b810: 0x686affff  ldl         $t2, -0x1($v1)
    ctx->pc = 0x20b810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x20b814: 0x6c6afff8  ldr         $t2, -0x8($v1)
    ctx->pc = 0x20b814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x20b818: 0xb06a0007  sdl         $t2, 0x7($v1)
    ctx->pc = 0x20b818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20b81c: 0xb46a0000  sdr         $t2, 0x0($v1)
    ctx->pc = 0x20b81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20b820: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x20b820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x20b824: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x20b824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x20b828: 0xb066ffff  sdl         $a2, -0x1($v1)
    ctx->pc = 0x20b828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20b82c: 0xb466fff8  sdr         $a2, -0x8($v1)
    ctx->pc = 0x20b82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20b830: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x20b830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x20b834: 0x0  nop
    ctx->pc = 0x20b834u;
    // NOP
label_20b838:
    // 0x20b838: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20b838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20b83c: 0x1102012e  beq         $t0, $v0, . + 4 + (0x12E << 2)
    ctx->pc = 0x20B83Cu;
    {
        const bool branch_taken_0x20b83c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B83Cu;
            // 0x20b840: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b83c) {
            ctx->pc = 0x20BCF8u;
            goto label_20bcf8;
        }
    }
    ctx->pc = 0x20B844u;
    // 0x20b844: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x20b844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20b848: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20b848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b84c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x20b84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b850: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x20b850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b854: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20b854u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b858: 0x45000127  bc1f        . + 4 + (0x127 << 2)
    ctx->pc = 0x20B858u;
    {
        const bool branch_taken_0x20b858 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b858) {
            ctx->pc = 0x20BCF8u;
            goto label_20bcf8;
        }
    }
    ctx->pc = 0x20B860u;
    // 0x20b860: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x20b860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x20b864: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x20b864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x20b868: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x20b868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20b86c: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x20b86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20b870: 0x6864ffff  ldl         $a0, -0x1($v1)
    ctx->pc = 0x20b870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x20b874: 0x6c64fff8  ldr         $a0, -0x8($v1)
    ctx->pc = 0x20b874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x20b878: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x20b878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20b87c: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x20b87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20b880: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x20b880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x20b884: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x20b884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x20b888: 0xb062ffff  sdl         $v0, -0x1($v1)
    ctx->pc = 0x20b888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20b88c: 0xb462fff8  sdr         $v0, -0x8($v1)
    ctx->pc = 0x20b88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20b890: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x20B890u;
    {
        const bool branch_taken_0x20b890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B890u;
            // 0x20b894: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b890) {
            ctx->pc = 0x20B838u;
            runtime->cooperativeGuestYield();
            goto label_20b838;
        }
    }
    ctx->pc = 0x20B898u;
label_20b898:
    // 0x20b898: 0x24453490  addiu       $a1, $v0, 0x3490
    ctx->pc = 0x20b898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13456));
    // 0x20b89c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x20b89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20b8a0: 0x8c443490  lw          $a0, 0x3490($v0)
    ctx->pc = 0x20b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13456)));
    // 0x20b8a4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20b8a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20b8ac: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x20b8acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b8b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20b8b4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x20b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x20b8b8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x20b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x20b8bc: 0x14570017  bne         $v0, $s7, . + 4 + (0x17 << 2)
    ctx->pc = 0x20B8BCu;
    {
        const bool branch_taken_0x20b8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x20B8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B8BCu;
            // 0x20b8c0: 0x3c05002a  lui         $a1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b8bc) {
            ctx->pc = 0x20B91Cu;
            goto label_20b91c;
        }
    }
    ctx->pc = 0x20B8C4u;
    // 0x20b8c4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x20b8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x20b8c8: 0xa4a0e442  sh          $zero, -0x1BBE($a1)
    ctx->pc = 0x20b8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294960194), (uint16_t)GPR_U32(ctx, 0));
    // 0x20b8cc: 0x94a2e442  lhu         $v0, -0x1BBE($a1)
    ctx->pc = 0x20b8ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294960194)));
label_20b8d0:
    // 0x20b8d0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x20b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x20b8d4: 0x24636ab8  addiu       $v1, $v1, 0x6AB8
    ctx->pc = 0x20b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27320));
    // 0x20b8d8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x20b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20b8dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x20b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x20b8e0: 0xa4a4e442  sh          $a0, -0x1BBE($a1)
    ctx->pc = 0x20b8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294960194), (uint16_t)GPR_U32(ctx, 4));
    // 0x20b8e4: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x20b8e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x20b8e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b8ec: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x20b8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x20b8f0: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x20b8f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20b8f4: 0x5640fff6  bnel        $s2, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x20B8F4u;
    {
        const bool branch_taken_0x20b8f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b8f4) {
            ctx->pc = 0x20B8F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B8F4u;
            // 0x20b8f8: 0x94a2e442  lhu         $v0, -0x1BBE($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294960194)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B8D0u;
            runtime->cooperativeGuestYield();
            goto label_20b8d0;
        }
    }
    ctx->pc = 0x20B8FCu;
    // 0x20b8fc: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x20b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x20b900: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x20b900u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20b904: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x20b904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x20b908: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20b908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b90c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b910: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20b910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b914: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x20B914u;
    {
        const bool branch_taken_0x20b914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B914u;
            // 0x20b918: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b914) {
            ctx->pc = 0x20BD14u;
            goto label_20bd14;
        }
    }
    ctx->pc = 0x20B91Cu;
label_20b91c:
    // 0x20b91c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x20b91cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x20b920: 0x94a3e444  lhu         $v1, -0x1BBC($a1)
    ctx->pc = 0x20b920u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294960196)));
    // 0x20b924: 0x24846ca0  addiu       $a0, $a0, 0x6CA0
    ctx->pc = 0x20b924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27808));
    // 0x20b928: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x20b928u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b92c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x20b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x20b930: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20b930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20b934: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x20b934u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x20b938: 0xa4a3e444  sh          $v1, -0x1BBC($a1)
    ctx->pc = 0x20b938u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294960196), (uint16_t)GPR_U32(ctx, 3));
    // 0x20b93c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20b940: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x20b940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x20b944: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x20b944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20b948:
    // 0x20b948: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20b948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b94c: 0xc082836  jal         func_20A0D8
    ctx->pc = 0x20B94Cu;
    SET_GPR_U32(ctx, 31, 0x20B954u);
    ctx->pc = 0x20B950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B94Cu;
            // 0x20b950: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A0D8u;
    if (runtime->hasFunction(0x20A0D8u)) {
        auto targetFn = runtime->lookupFunction(0x20A0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B954u; }
        if (ctx->pc != 0x20B954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20a0d8_0x20a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B954u; }
        if (ctx->pc != 0x20B954u) { return; }
    }
    ctx->pc = 0x20B954u;
    // 0x20b954: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20b954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b958: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20b958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b95c: 0x10a200e1  beq         $a1, $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x20B95Cu;
    {
        const bool branch_taken_0x20b95c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B95Cu;
            // 0x20b960: 0x3c150030  lui         $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b95c) {
            ctx->pc = 0x20BCE4u;
            goto label_20bce4;
        }
    }
    ctx->pc = 0x20B964u;
    // 0x20b964: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x20b964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b968: 0x26a23490  addiu       $v0, $s5, 0x3490
    ctx->pc = 0x20b968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 13456));
    // 0x20b96c: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x20b96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x20b970: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20b970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b974: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20b974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20b978: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x20b978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b97c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x20b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20b980: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20b980u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20b984: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20b984u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b988: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20b988u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b98c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b990: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x20b990u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b994: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20b994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b998: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x20B998u;
    {
        const bool branch_taken_0x20b998 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20B99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B998u;
            // 0x20b99c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b998) {
            ctx->pc = 0x20BA08u;
            goto label_20ba08;
        }
    }
    ctx->pc = 0x20B9A0u;
    // 0x20b9a0: 0x8ea23490  lw          $v0, 0x3490($s5)
    ctx->pc = 0x20b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 13456)));
    // 0x20b9a4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x20b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20b9a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b9ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20b9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b9b0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x20b9b4: 0x50470013  beql        $v0, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x20B9B4u;
    {
        const bool branch_taken_0x20b9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x20b9b4) {
            ctx->pc = 0x20B9B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B9B4u;
            // 0x20b9b8: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BA04u;
            goto label_20ba04;
        }
    }
    ctx->pc = 0x20B9BCu;
    // 0x20b9bc: 0x3c150030  lui         $s5, 0x30
    ctx->pc = 0x20b9bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)48 << 16));
    // 0x20b9c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20b9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20b9c4: 0x0  nop
    ctx->pc = 0x20b9c4u;
    // NOP
label_20b9c8:
    // 0x20b9c8: 0x26a23490  addiu       $v0, $s5, 0x3490
    ctx->pc = 0x20b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 13456));
    // 0x20b9cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20b9d0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x20b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20b9d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b9d8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x20b9d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20b9dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20B9DCu;
    {
        const bool branch_taken_0x20b9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B9DCu;
            // 0x20b9e0: 0x641021  addu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b9dc) {
            ctx->pc = 0x20BA08u;
            goto label_20ba08;
        }
    }
    ctx->pc = 0x20B9E4u;
    // 0x20b9e4: 0x8ea33490  lw          $v1, 0x3490($s5)
    ctx->pc = 0x20b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 13456)));
    // 0x20b9e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x20b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x20b9ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20b9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b9f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b9f4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x20b9f8: 0x5445fff3  bnel        $v0, $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x20B9F8u;
    {
        const bool branch_taken_0x20b9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x20b9f8) {
            ctx->pc = 0x20B9FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B9F8u;
            // 0x20b9fc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B9C8u;
            runtime->cooperativeGuestYield();
            goto label_20b9c8;
        }
    }
    ctx->pc = 0x20BA00u;
    // 0x20ba00: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x20ba00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20ba04:
    // 0x20ba04: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x20ba04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ba08:
    // 0x20ba08: 0x56800021  bnel        $s4, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x20BA08u;
    {
        const bool branch_taken_0x20ba08 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ba08) {
            ctx->pc = 0x20BA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BA08u;
            // 0x20ba0c: 0xc6200004  lwc1        $f0, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BA90u;
            goto label_20ba90;
        }
    }
    ctx->pc = 0x20BA10u;
    // 0x20ba10: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x20ba10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x20ba14: 0x8502e444  lh          $v0, -0x1BBC($t0)
    ctx->pc = 0x20ba14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294960196)));
    // 0x20ba18: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x20ba18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20ba1c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x20BA1Cu;
    {
        const bool branch_taken_0x20ba1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BA1Cu;
            // 0x20ba20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba1c) {
            ctx->pc = 0x20BA7Cu;
            goto label_20ba7c;
        }
    }
    ctx->pc = 0x20BA24u;
    // 0x20ba24: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x20ba24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x20ba28: 0x8cc36ca0  lw          $v1, 0x6CA0($a2)
    ctx->pc = 0x20ba28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 27808)));
    // 0x20ba2c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x20ba30: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BA30u;
    {
        const bool branch_taken_0x20ba30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x20BA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BA30u;
            // 0x20ba34: 0x8502e444  lh          $v0, -0x1BBC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294960196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba30) {
            ctx->pc = 0x20BA48u;
            goto label_20ba48;
        }
    }
    ctx->pc = 0x20BA38u;
    // 0x20ba38: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x20ba38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ba3c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20ba3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ba40: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20BA40u;
    {
        const bool branch_taken_0x20ba40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BA40u;
            // 0x20ba44: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba40) {
            ctx->pc = 0x20BA7Cu;
            goto label_20ba7c;
        }
    }
    ctx->pc = 0x20BA48u;
label_20ba48:
    // 0x20ba48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20ba4c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x20ba4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20ba50: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20BA50u;
    {
        const bool branch_taken_0x20ba50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BA50u;
            // 0x20ba54: 0x24c26ca0  addiu       $v0, $a2, 0x6CA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 27808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba50) {
            ctx->pc = 0x20BA7Cu;
            goto label_20ba7c;
        }
    }
    ctx->pc = 0x20BA58u;
    // 0x20ba58: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20ba5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20ba60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ba64: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x20ba68: 0x1445fff7  bne         $v0, $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x20BA68u;
    {
        const bool branch_taken_0x20ba68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x20BA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BA68u;
            // 0x20ba6c: 0x8502e444  lh          $v0, -0x1BBC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294960196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba68) {
            ctx->pc = 0x20BA48u;
            runtime->cooperativeGuestYield();
            goto label_20ba48;
        }
    }
    ctx->pc = 0x20BA70u;
    // 0x20ba70: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x20ba70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ba74: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x20ba74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ba78: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20ba78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ba7c:
    // 0x20ba7c: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20BA7Cu;
    {
        const bool branch_taken_0x20ba7c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ba7c) {
            ctx->pc = 0x20BA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BA7Cu;
            // 0x20ba80: 0xc6200004  lwc1        $f0, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BA90u;
            goto label_20ba90;
        }
    }
    ctx->pc = 0x20BA84u;
    // 0x20ba84: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20BA84u;
    {
        const bool branch_taken_0x20ba84 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ba84) {
            ctx->pc = 0x20BAA0u;
            goto label_20baa0;
        }
    }
    ctx->pc = 0x20BA8Cu;
    // 0x20ba8c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x20ba8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ba90:
    // 0x20ba90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20ba90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ba94: 0x0  nop
    ctx->pc = 0x20ba94u;
    // NOP
    // 0x20ba98: 0x45030093  bc1tl       . + 4 + (0x93 << 2)
    ctx->pc = 0x20BA98u;
    {
        const bool branch_taken_0x20ba98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ba98) {
            ctx->pc = 0x20BA9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BA98u;
            // 0x20ba9c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BCE8u;
            goto label_20bce8;
        }
    }
    ctx->pc = 0x20BAA0u;
label_20baa0:
    // 0x20baa0: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x20BAA0u;
    {
        const bool branch_taken_0x20baa0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BAA0u;
            // 0x20baa4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20baa0) {
            ctx->pc = 0x20BAD0u;
            goto label_20bad0;
        }
    }
    ctx->pc = 0x20BAA8u;
    // 0x20baa8: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x20baa8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x20baac: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x20baacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x20bab0: 0x9502e440  lhu         $v0, -0x1BC0($t0)
    ctx->pc = 0x20bab0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294960192)));
    // 0x20bab4: 0x24646328  addiu       $a0, $v1, 0x6328
    ctx->pc = 0x20bab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25384));
    // 0x20bab8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x20bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x20babc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20bac0: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x20bac0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x20bac4: 0xa502e440  sh          $v0, -0x1BC0($t0)
    ctx->pc = 0x20bac4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4294960192), (uint16_t)GPR_U32(ctx, 2));
    // 0x20bac8: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x20bac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20bacc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x20baccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20bad0:
    // 0x20bad0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x20bad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20bad4: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x20bad4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20bad8: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x20bad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
    // 0x20badc: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x20badcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x20bae0: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x20bae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x20bae4: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x20bae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x20bae8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20bae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20baec: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x20baecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x20baf0: 0xda630000  lqc2        $vf3, 0x0($s3)
    ctx->pc = 0x20baf0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20baf4: 0xda620030  lqc2        $vf2, 0x30($s3)
    ctx->pc = 0x20baf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x20baf8: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x20baf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20bafc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20BAFCu;
    {
        const bool branch_taken_0x20bafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bafc) {
            ctx->pc = 0x20BB00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BAFCu;
            // 0x20bb00: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BB04u;
            goto label_20bb04;
        }
    }
    ctx->pc = 0x20BB04u;
label_20bb04:
    // 0x20bb04: 0x1812  mflo        $v1
    ctx->pc = 0x20bb04u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x20bb08: 0x2010  mfhi        $a0
    ctx->pc = 0x20bb08u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20bb0c: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x20bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x20bb10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20bb10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20bb14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20bb14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20bb18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20bb18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20bb1c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x20bb1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20bb20: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x20bb20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20bb24: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x20bb24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20bb28: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x20bb28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20bb2c: 0xda630020  lqc2        $vf3, 0x20($s3)
    ctx->pc = 0x20bb2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x20bb30: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x20bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20bb34: 0x2484fffb  addiu       $a0, $a0, -0x5
    ctx->pc = 0x20bb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
    // 0x20bb38: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x20bb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20bb3c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20bb3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20bb40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20bb40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20bb44: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20BB44u;
    {
        const bool branch_taken_0x20bb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bb44) {
            ctx->pc = 0x20BB48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB44u;
            // 0x20bb48: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BB4Cu;
            goto label_20bb4c;
        }
    }
    ctx->pc = 0x20BB4Cu;
label_20bb4c:
    // 0x20bb4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20bb4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20bb50: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x20bb50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x20bb54: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x20bb54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x20bb58: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x20bb58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20bb5c: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x20bb5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20bb60: 0xdba100a0  lqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x20bb60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20bb64: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x20bb64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20bb68: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x20bb68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20bb6c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20bb6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20bb70: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20bb70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20bb74: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x20bb74u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20bb78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20bb78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20bb7c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20bb7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bb80: 0x0  nop
    ctx->pc = 0x20bb80u;
    // NOP
    // 0x20bb84: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x20BB84u;
    {
        const bool branch_taken_0x20bb84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bb84) {
            ctx->pc = 0x20BB88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB84u;
            // 0x20bb88: 0xe6220008  swc1        $f2, 0x8($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BB98u;
            goto label_20bb98;
        }
    }
    ctx->pc = 0x20BB8Cu;
    // 0x20bb8c: 0x46000004  c1          0x4
    ctx->pc = 0x20bb8cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x20bb90: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x20bb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x20bb94: 0x0  nop
    ctx->pc = 0x20bb94u;
    // NOP
label_20bb98:
    // 0x20bb98: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x20BB98u;
    {
        const bool branch_taken_0x20bb98 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB98u;
            // 0x20bb9c: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb98) {
            ctx->pc = 0x20BBD8u;
            goto label_20bbd8;
        }
    }
    ctx->pc = 0x20BBA0u;
    // 0x20bba0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x20bba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x20bba4: 0x8606e444  lh          $a2, -0x1BBC($s0)
    ctx->pc = 0x20bba4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294960196)));
    // 0x20bba8: 0x24846ca0  addiu       $a0, $a0, 0x6CA0
    ctx->pc = 0x20bba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27808));
    // 0x20bbac: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x20bbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x20bbb0: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x20bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x20bbb4: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x20bbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x20bbb8: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x20bbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20bbbc: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x20bbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20bbc0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x20bbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20bbc4: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x20BBC4u;
    SET_GPR_U32(ctx, 31, 0x20BBCCu);
    ctx->pc = 0x20BBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BBC4u;
            // 0x20bbc8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBCCu; }
        if (ctx->pc != 0x20BBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBCCu; }
        if (ctx->pc != 0x20BBCCu) { return; }
    }
    ctx->pc = 0x20BBCCu;
    // 0x20bbcc: 0x9602e444  lhu         $v0, -0x1BBC($s0)
    ctx->pc = 0x20bbccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294960196)));
    // 0x20bbd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20bbd4: 0xa602e444  sh          $v0, -0x1BBC($s0)
    ctx->pc = 0x20bbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4294960196), (uint16_t)GPR_U32(ctx, 2));
label_20bbd8:
    // 0x20bbd8: 0x56800043  bnel        $s4, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x20BBD8u;
    {
        const bool branch_taken_0x20bbd8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bbd8) {
            ctx->pc = 0x20BBDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BBD8u;
            // 0x20bbdc: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BCE8u;
            goto label_20bce8;
        }
    }
    ctx->pc = 0x20BBE0u;
    // 0x20bbe0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x20bbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20bbe4: 0x26a63490  addiu       $a2, $s5, 0x3490
    ctx->pc = 0x20bbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 13456));
    // 0x20bbe8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x20bbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bbec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20bbecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20bbf0: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x20bbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x20bbf4: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x20bbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x20bbf8: 0x8ea33490  lw          $v1, 0x3490($s5)
    ctx->pc = 0x20bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 13456)));
    // 0x20bbfc: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x20bbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x20bc00: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x20bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x20bc04: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x20bc04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x20bc08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20bc0c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x20bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x20bc10: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x20bc10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x20bc14: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x20bc14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x20bc18: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x20bc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20bc1c: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x20bc1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20bc20: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x20bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x20bc24: 0x10a2002f  beq         $a1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x20BC24u;
    {
        const bool branch_taken_0x20bc24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x20BC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BC24u;
            // 0x20bc28: 0x8ea33490  lw          $v1, 0x3490($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 13456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc24) {
            ctx->pc = 0x20BCE4u;
            goto label_20bce4;
        }
    }
    ctx->pc = 0x20BC2Cu;
    // 0x20bc2c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x20bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x20bc30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20bc34: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x20bc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20bc38: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x20bc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bc3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20bc3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bc40: 0x0  nop
    ctx->pc = 0x20bc40u;
    // NOP
    // 0x20bc44: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
    ctx->pc = 0x20BC44u;
    {
        const bool branch_taken_0x20bc44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bc44) {
            ctx->pc = 0x20BC48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BC44u;
            // 0x20bc48: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BCE8u;
            goto label_20bce8;
        }
    }
    ctx->pc = 0x20BC4Cu;
    // 0x20bc4c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x20bc4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x20bc50: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x20bc50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x20bc54: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x20bc54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20bc58: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x20bc58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20bc5c: 0x684affff  ldl         $t2, -0x1($v0)
    ctx->pc = 0x20bc5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x20bc60: 0x6c4afff8  ldr         $t2, -0x8($v0)
    ctx->pc = 0x20bc60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x20bc64: 0xb04a0007  sdl         $t2, 0x7($v0)
    ctx->pc = 0x20bc64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20bc68: 0xb44a0000  sdr         $t2, 0x0($v0)
    ctx->pc = 0x20bc68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20bc6c: 0x6ba80037  ldl         $t0, 0x37($sp)
    ctx->pc = 0x20bc6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x20bc70: 0x6fa80030  ldr         $t0, 0x30($sp)
    ctx->pc = 0x20bc70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x20bc74: 0xb048ffff  sdl         $t0, -0x1($v0)
    ctx->pc = 0x20bc74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20bc78: 0xb448fff8  sdr         $t0, -0x8($v0)
    ctx->pc = 0x20bc78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20bc7c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x20bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_20bc80:
    // 0x20bc80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20bc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20bc84: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x20BC84u;
    {
        const bool branch_taken_0x20bc84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x20BC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BC84u;
            // 0x20bc88: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc84) {
            ctx->pc = 0x20BCE4u;
            goto label_20bce4;
        }
    }
    ctx->pc = 0x20BC8Cu;
    // 0x20bc8c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20bc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20bc90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20bc94: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x20bc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20bc98: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x20bc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bc9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20bc9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bca0: 0x0  nop
    ctx->pc = 0x20bca0u;
    // NOP
    // 0x20bca4: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x20BCA4u;
    {
        const bool branch_taken_0x20bca4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bca4) {
            ctx->pc = 0x20BCA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BCA4u;
            // 0x20bca8: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BCE8u;
            goto label_20bce8;
        }
    }
    ctx->pc = 0x20BCACu;
    // 0x20bcac: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x20bcacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x20bcb0: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x20bcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x20bcb4: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x20bcb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20bcb8: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x20bcb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20bcbc: 0x6864ffff  ldl         $a0, -0x1($v1)
    ctx->pc = 0x20bcbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x20bcc0: 0x6c64fff8  ldr         $a0, -0x8($v1)
    ctx->pc = 0x20bcc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x20bcc4: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x20bcc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20bcc8: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x20bcc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20bccc: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x20bcccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x20bcd0: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x20bcd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x20bcd4: 0xb062ffff  sdl         $v0, -0x1($v1)
    ctx->pc = 0x20bcd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20bcd8: 0xb462fff8  sdr         $v0, -0x8($v1)
    ctx->pc = 0x20bcd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20bcdc: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x20BCDCu;
    {
        const bool branch_taken_0x20bcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BCDCu;
            // 0x20bce0: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bcdc) {
            ctx->pc = 0x20BC80u;
            runtime->cooperativeGuestYield();
            goto label_20bc80;
        }
    }
    ctx->pc = 0x20BCE4u;
label_20bce4:
    // 0x20bce4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x20bce4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_20bce8:
    // 0x20bce8: 0x2bc20004  slti        $v0, $fp, 0x4
    ctx->pc = 0x20bce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20bcec: 0x5440ff16  bnel        $v0, $zero, . + 4 + (-0xEA << 2)
    ctx->pc = 0x20BCECu;
    {
        const bool branch_taken_0x20bcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bcec) {
            ctx->pc = 0x20BCF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BCECu;
            // 0x20bcf0: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B948u;
            runtime->cooperativeGuestYield();
            goto label_20b948;
        }
    }
    ctx->pc = 0x20BCF4u;
    // 0x20bcf4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x20bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_20bcf8:
    // 0x20bcf8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x20bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x20bcfc: 0x24423490  addiu       $v0, $v0, 0x3490
    ctx->pc = 0x20bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13456));
    // 0x20bd00: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x20bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20bd04: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x20bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20bd08: 0x1443fee3  bne         $v0, $v1, . + 4 + (-0x11D << 2)
    ctx->pc = 0x20BD08u;
    {
        const bool branch_taken_0x20bd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20BD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BD08u;
            // 0x20bd0c: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd08) {
            ctx->pc = 0x20B898u;
            runtime->cooperativeGuestYield();
            goto label_20b898;
        }
    }
    ctx->pc = 0x20BD10u;
label_20bd10:
    // 0x20bd10: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x20bd10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20bd14:
    // 0x20bd14: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x20bd14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x20bd18: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x20bd18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x20bd1c: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x20bd1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x20bd20: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x20bd20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x20bd24: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x20bd24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x20bd28: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x20bd28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x20bd2c: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x20bd2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x20bd30: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x20bd30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20bd34: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x20bd34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x20bd38: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x20bd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20bd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x20BD3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BD3Cu;
            // 0x20bd40: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B668u: goto label_20b668;
            case 0x20B6B4u: goto label_20b6b4;
            case 0x20B71Cu: goto label_20b71c;
            case 0x20B768u: goto label_20b768;
            case 0x20B838u: goto label_20b838;
            case 0x20B898u: goto label_20b898;
            case 0x20B8D0u: goto label_20b8d0;
            case 0x20B91Cu: goto label_20b91c;
            case 0x20B948u: goto label_20b948;
            case 0x20B9C8u: goto label_20b9c8;
            case 0x20BA04u: goto label_20ba04;
            case 0x20BA08u: goto label_20ba08;
            case 0x20BA48u: goto label_20ba48;
            case 0x20BA7Cu: goto label_20ba7c;
            case 0x20BA90u: goto label_20ba90;
            case 0x20BAA0u: goto label_20baa0;
            case 0x20BAD0u: goto label_20bad0;
            case 0x20BB04u: goto label_20bb04;
            case 0x20BB4Cu: goto label_20bb4c;
            case 0x20BB98u: goto label_20bb98;
            case 0x20BBD8u: goto label_20bbd8;
            case 0x20BC80u: goto label_20bc80;
            case 0x20BCE4u: goto label_20bce4;
            case 0x20BCE8u: goto label_20bce8;
            case 0x20BCF8u: goto label_20bcf8;
            case 0x20BD10u: goto label_20bd10;
            case 0x20BD14u: goto label_20bd14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20BD44u;
    // 0x20bd44: 0x0  nop
    ctx->pc = 0x20bd44u;
    // NOP
}
