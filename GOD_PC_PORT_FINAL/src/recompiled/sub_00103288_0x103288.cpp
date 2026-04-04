#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00103288
// Address: 0x103288 - 0x103578
void sub_00103288_0x103288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103288_0x103288");
#endif

    ctx->pc = 0x103288u;

    // 0x103288: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x103288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x10328c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x10328cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103290: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x103290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x103294: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x103294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x103298: 0x8d420070  lw          $v0, 0x70($t2)
    ctx->pc = 0x103298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 112)));
    // 0x10329c: 0x8d590054  lw          $t9, 0x54($t2)
    ctx->pc = 0x10329cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
    // 0x1032a0: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x1032a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1032a4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1032a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1032a8: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x1032a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x1032ac: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1032acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1032b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1032B0u;
    {
        const bool branch_taken_0x1032b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1032B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1032B0u;
            // 0x1032b4: 0x24900030  addiu       $s0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032b0) {
            ctx->pc = 0x1032C8u;
            goto label_1032c8;
        }
    }
    ctx->pc = 0x1032B8u;
    // 0x1032b8: 0x8d420694  lw          $v0, 0x694($t2)
    ctx->pc = 0x1032b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1684)));
    // 0x1032bc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1032bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1032c0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1032C0u;
    {
        const bool branch_taken_0x1032c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1032c0) {
            ctx->pc = 0x1032C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1032C0u;
            // 0x1032c4: 0xc5410060  lwc1        $f1, 0x60($t2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1032E8u;
            goto label_1032e8;
        }
    }
    ctx->pc = 0x1032C8u;
label_1032c8:
    // 0x1032c8: 0x8d430694  lw          $v1, 0x694($t2)
    ctx->pc = 0x1032c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1684)));
    // 0x1032cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1032ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1032d0: 0x3c0f3f80  lui         $t7, 0x3F80
    ctx->pc = 0x1032d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16256 << 16));
    // 0x1032d4: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1032d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x1032d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1032d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1032dc: 0x448f1800  mtc1        $t7, $f3
    ctx->pc = 0x1032dcu;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1032e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1032E0u;
    {
        const bool branch_taken_0x1032e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1032E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1032E0u;
            // 0x1032e4: 0xad430694  sw          $v1, 0x694($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 1684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032e0) {
            ctx->pc = 0x103300u;
            goto label_103300;
        }
    }
    ctx->pc = 0x1032E8u;
label_1032e8:
    // 0x1032e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1032e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1032ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1032ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1032f0: 0xc5420064  lwc1        $f2, 0x64($t2)
    ctx->pc = 0x1032f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1032f4: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x1032f4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1032f8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1032f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1032fc: 0x440f0000  mfc1        $t7, $f0
    ctx->pc = 0x1032fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
label_103300:
    // 0x103300: 0x794210b0  lq          $v0, 0x10B0($t2)
    ctx->pc = 0x103300u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 4272)));
    // 0x103304: 0x254c1144  addiu       $t4, $t2, 0x1144
    ctx->pc = 0x103304u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4420));
    // 0x103308: 0x794910a0  lq          $t1, 0x10A0($t2)
    ctx->pc = 0x103308u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 10), 4256)));
    // 0x10330c: 0x794310c0  lq          $v1, 0x10C0($t2)
    ctx->pc = 0x10330cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 4288)));
    // 0x103310: 0x794410d0  lq          $a0, 0x10D0($t2)
    ctx->pc = 0x103310u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 10), 4304)));
    // 0x103314: 0x794510e0  lq          $a1, 0x10E0($t2)
    ctx->pc = 0x103314u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 10), 4320)));
    // 0x103318: 0x794610f0  lq          $a2, 0x10F0($t2)
    ctx->pc = 0x103318u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 10), 4336)));
    // 0x10331c: 0x79471100  lq          $a3, 0x1100($t2)
    ctx->pc = 0x10331cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 10), 4352)));
    // 0x103320: 0x79481110  lq          $t0, 0x1110($t2)
    ctx->pc = 0x103320u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 10), 4368)));
    // 0x103324: 0x8d4b0010  lw          $t3, 0x10($t2)
    ctx->pc = 0x103324u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x103328: 0x7fa90000  sq          $t1, 0x0($sp)
    ctx->pc = 0x103328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 9));
    // 0x10332c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x10332cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x103330: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x103330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x103334: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x103334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x103338: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x103338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x10333c: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x10333cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x103340: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x103340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
    // 0x103344: 0x7fa80070  sq          $t0, 0x70($sp)
    ctx->pc = 0x103344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    // 0x103348: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x103348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x10334c: 0x1960006c  blez        $t3, . + 4 + (0x6C << 2)
    ctx->pc = 0x10334Cu;
    {
        const bool branch_taken_0x10334c = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x103350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10334Cu;
            // 0x103350: 0x8d4e000c  lw          $t6, 0xC($t2) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10334c) {
            ctx->pc = 0x103500u;
            goto label_103500;
        }
    }
    ctx->pc = 0x103354u;
    // 0x103354: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x103354u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103358: 0x7ba40080  lq          $a0, 0x80($sp)
    ctx->pc = 0x103358u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10335c: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x10335cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x103360: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x103360u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103364: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x103364u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_103368:
    // 0x103368: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x103368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10336c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10336cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x103370: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x103370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x103374: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x103374u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x103378: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x103378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10337c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x10337cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x103380: 0x44180000  mfc1        $t8, $f0
    ctx->pc = 0x103380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x103384: 0x19c00058  blez        $t6, . + 4 + (0x58 << 2)
    ctx->pc = 0x103384u;
    {
        const bool branch_taken_0x103384 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x103388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103384u;
            // 0x103388: 0xe1140  sll         $v0, $t6, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103384) {
            ctx->pc = 0x1034E8u;
            goto label_1034e8;
        }
    }
    ctx->pc = 0x10338Cu;
    // 0x10338c: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x10338cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103390: 0x1c0582d  daddu       $t3, $t6, $zero
    ctx->pc = 0x103390u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103394: 0x0  nop
    ctx->pc = 0x103394u;
    // NOP
label_103398:
    // 0x103398: 0xd9270000  lqc2        $vf7, 0x0($t1)
    ctx->pc = 0x103398u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10339c: 0x4a27033c  vmove.w     $vf7, $vf0
    ctx->pc = 0x10339cu;
    ctx->vu0_vf[7] = ctx->vu0_vf[0];
    // 0x1033a0: 0xd9260010  lqc2        $vf6, 0x10($t1)
    ctx->pc = 0x1033a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1033a4: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x1033a4u;
    ctx->vu0_vf[6] = ctx->vu0_vf[0];
    // 0x1033a8: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1033a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1033ac: 0x4be721bc  vmulax.xyzw $ACC, $vf4, $vf7x
    ctx->pc = 0x1033acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1033b0: 0xdba30050  lqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1033b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1033b4: 0x4be718bd  vmadday.xyzw $ACC, $vf3, $vf7y
    ctx->pc = 0x1033b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1033b8: 0xdba20060  lqc2        $vf2, 0x60($sp)
    ctx->pc = 0x1033b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1033bc: 0x4be710be  vmaddaz.xyzw $ACC, $vf2, $vf7z
    ctx->pc = 0x1033bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1033c0: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1033c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1033c4: 0x4be7094b  vmaddw.xyzw $vf5, $vf1, $vf7w
    ctx->pc = 0x1033c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1033c8: 0x4be621bc  vmulax.xyzw $ACC, $vf4, $vf6x
    ctx->pc = 0x1033c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1033cc: 0x4be618bd  vmadday.xyzw $ACC, $vf3, $vf6y
    ctx->pc = 0x1033ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1033d0: 0x4be610be  vmaddaz.xyzw $ACC, $vf2, $vf6z
    ctx->pc = 0x1033d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1033d4: 0x4be608cb  vmaddw.xyzw $vf3, $vf1, $vf6w
    ctx->pc = 0x1033d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1033d8: 0x4be81b3c  vmove.xyzw  $vf8, $vf3
    ctx->pc = 0x1033d8u;
    ctx->vu0_vf[8] = ctx->vu0_vf[3];
    // 0x1033dc: 0x4be7292c  vsub.xyzw   $vf4, $vf5, $vf7
    ctx->pc = 0x1033dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1033e0: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1033e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1033e4: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x1033e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1033e8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1033e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1033ec: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1033ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1033f0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1033f0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1033f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1033f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1033f8: 0x46000004  c1          0x4
    ctx->pc = 0x1033f8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1033fc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1033fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x103400: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x103400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x103404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x103404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103408: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x103408u;
    {
        const bool branch_taken_0x103408 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x103408) {
            ctx->pc = 0x103428u;
            goto label_103428;
        }
    }
    ctx->pc = 0x103410u;
    // 0x103410: 0x4be43968  vadd.xyzw   $vf5, $vf7, $vf4
    ctx->pc = 0x103410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x103414: 0x4be6186c  vsub.xyzw   $vf1, $vf3, $vf6
    ctx->pc = 0x103414u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103418: 0x4be13228  vadd.xyzw   $vf8, $vf6, $vf1
    ctx->pc = 0x103418u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x10341c: 0x4be42b3c  vmove.xyzw  $vf4, $vf5
    ctx->pc = 0x10341cu;
    ctx->vu0_vf[4] = ctx->vu0_vf[5];
    // 0x103420: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x103420u;
    {
        const bool branch_taken_0x103420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103420u;
            // 0x103424: 0x4be2433c  vmove.xyzw  $vf2, $vf8 (Delay Slot)
        ctx->vu0_vf[2] = ctx->vu0_vf[8];
        ctx->in_delay_slot = false;
        if (branch_taken_0x103420) {
            ctx->pc = 0x103460u;
            goto label_103460;
        }
    }
    ctx->pc = 0x103428u;
label_103428:
    // 0x103428: 0x48af1000  qmtc2.ni    $t7, $vf2
    ctx->pc = 0x103428u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 15));
    // 0x10342c: 0x4be22058  vmulx.xyzw  $vf1, $vf4, $vf2x
    ctx->pc = 0x10342cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103430: 0x4be13968  vadd.xyzw   $vf5, $vf7, $vf1
    ctx->pc = 0x103430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x103434: 0x4be640ec  vsub.xyzw   $vf3, $vf8, $vf6
    ctx->pc = 0x103434u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x103438: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x103438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10343c: 0x4be21898  vmulx.xyzw  $vf2, $vf3, $vf2x
    ctx->pc = 0x10343cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103440: 0x4be23228  vadd.xyzw   $vf8, $vf6, $vf2
    ctx->pc = 0x103440u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x103444: 0x48b81000  qmtc2.ni    $t8, $vf2
    ctx->pc = 0x103444u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 24));
    // 0x103448: 0x4be22058  vmulx.xyzw  $vf1, $vf4, $vf2x
    ctx->pc = 0x103448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10344c: 0x4be13928  vadd.xyzw   $vf4, $vf7, $vf1
    ctx->pc = 0x10344cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103450: 0xfba300c0  sqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x103450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x103454: 0x4be218d8  vmulx.xyzw  $vf3, $vf3, $vf2x
    ctx->pc = 0x103454u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x103458: 0x4be330a8  vadd.xyzw   $vf2, $vf6, $vf3
    ctx->pc = 0x103458u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10345c: 0x0  nop
    ctx->pc = 0x10345cu;
    // NOP
label_103460:
    // 0x103460: 0x4b040042  vaddz.x     $vf1, $vf0, $vf4z
    ctx->pc = 0x103460u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103464: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x103464u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103468: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x103468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10346c: 0x4b050041  vaddy.x     $vf1, $vf0, $vf5y
    ctx->pc = 0x10346cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103470: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x103470u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103474: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x103474u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103478: 0x48252000  qmfc2.ni    $a1, $vf4
    ctx->pc = 0x103478u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10347c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x10347cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103480: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x103480u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x103484: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x103484u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x103488: 0x70e41389  pcpyld      $v0, $a3, $a0
    ctx->pc = 0x103488u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x10348c: 0x4b020042  vaddz.x     $vf1, $vf0, $vf2z
    ctx->pc = 0x10348cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103490: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x103490u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103494: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x103494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103498: 0x704334c8  ppacw       $a2, $v0, $v1
    ctx->pc = 0x103498u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10349c: 0x4b080041  vaddy.x     $vf1, $vf0, $vf8y
    ctx->pc = 0x10349cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1034a0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1034a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1034a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1034a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1034a8: 0x7fa600d0  sq          $a2, 0xD0($sp)
    ctx->pc = 0x1034a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 6));
    // 0x1034ac: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1034acu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1034b0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1034b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1034b4: 0x7d260000  sq          $a2, 0x0($t1)
    ctx->pc = 0x1034b4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 6));
    // 0x1034b8: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x1034b8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1034bc: 0x3c113f80  lui         $s1, 0x3F80
    ctx->pc = 0x1034bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16256 << 16));
    // 0x1034c0: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1034c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1034c4: 0x72241389  pcpyld      $v0, $s1, $a0
    ctx->pc = 0x1034c4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 4)));
    // 0x1034c8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1034c8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1034cc: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1034ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1034d0: 0x7d220010  sq          $v0, 0x10($t1)
    ctx->pc = 0x1034d0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 2));
    // 0x1034d4: 0x1560ffb0  bnez        $t3, . + 4 + (-0x50 << 2)
    ctx->pc = 0x1034D4u;
    {
        const bool branch_taken_0x1034d4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1034D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1034D4u;
            // 0x1034d8: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034d4) {
            ctx->pc = 0x103398u;
            runtime->cooperativeGuestYield();
            goto label_103398;
        }
    }
    ctx->pc = 0x1034DCu;
    // 0x1034dc: 0x70021ca9  por         $v1, $zero, $v0
    ctx->pc = 0x1034dcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1034e0: 0x700624a9  por         $a0, $zero, $a2
    ctx->pc = 0x1034e0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x1034e4: 0xe1140  sll         $v0, $t6, 5
    ctx->pc = 0x1034e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 5));
label_1034e8:
    // 0x1034e8: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x1034e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x1034ec: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1034ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1034f0: 0x1500ff9d  bnez        $t0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x1034F0u;
    {
        const bool branch_taken_0x1034f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1034F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1034F0u;
            // 0x1034f4: 0x1826021  addu        $t4, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034f0) {
            ctx->pc = 0x103368u;
            runtime->cooperativeGuestYield();
            goto label_103368;
        }
    }
    ctx->pc = 0x1034F8u;
    // 0x1034f8: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x1034f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x1034fc: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x1034fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
label_103500:
    // 0x103500: 0x8d42007c  lw          $v0, 0x7C($t2)
    ctx->pc = 0x103500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 124)));
    // 0x103504: 0x25440fa0  addiu       $a0, $t2, 0xFA0
    ctx->pc = 0x103504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4000));
    // 0x103508: 0x1b200015  blez        $t9, . + 4 + (0x15 << 2)
    ctx->pc = 0x103508u;
    {
        const bool branch_taken_0x103508 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x10350Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103508u;
            // 0x10350c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103508) {
            ctx->pc = 0x103560u;
            goto label_103560;
        }
    }
    ctx->pc = 0x103510u;
    // 0x103510: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x103510u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103514: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x103514u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103518: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x103518u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10351c: 0x320402d  daddu       $t0, $t9, $zero
    ctx->pc = 0x10351cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103520: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x103520u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103524: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x103524u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_103528:
    // 0x103528: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x103528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10352c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x10352cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x103530: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x103530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x103534: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x103534u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x103538: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x103538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10353c: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x10353cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x103540: 0x4be118be  vmaddaz.xyzw $ACC, $vf3, $vf1z
    ctx->pc = 0x103540u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x103544: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x103544u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x103548: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x103548u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10354c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x10354cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x103550: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x103550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x103554: 0x1500fff4  bnez        $t0, . + 4 + (-0xC << 2)
    ctx->pc = 0x103554u;
    {
        const bool branch_taken_0x103554 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x103558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103554u;
            // 0x103558: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103554) {
            ctx->pc = 0x103528u;
            runtime->cooperativeGuestYield();
            goto label_103528;
        }
    }
    ctx->pc = 0x10355Cu;
    // 0x10355c: 0x0  nop
    ctx->pc = 0x10355cu;
    // NOP
label_103560:
    // 0x103560: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x103560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x103564: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x103564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x103568: 0x3e00008  jr          $ra
    ctx->pc = 0x103568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10356Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103568u;
            // 0x10356c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1032C8u: goto label_1032c8;
            case 0x1032E8u: goto label_1032e8;
            case 0x103300u: goto label_103300;
            case 0x103368u: goto label_103368;
            case 0x103398u: goto label_103398;
            case 0x103428u: goto label_103428;
            case 0x103460u: goto label_103460;
            case 0x1034E8u: goto label_1034e8;
            case 0x103500u: goto label_103500;
            case 0x103528u: goto label_103528;
            case 0x103560u: goto label_103560;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103570u;
    // 0x103570: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x103570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x103574: 0x0  nop
    ctx->pc = 0x103574u;
    // NOP
}
