#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00137508
// Address: 0x137508 - 0x137af8
void sub_00137508_0x137508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137508_0x137508");
#endif

    ctx->pc = 0x137508u;

    // 0x137508: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x137508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x13750c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x13750cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137510: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x137510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x137514: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x137514u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137518: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x137518u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x13751c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x13751cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137520: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x137520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x137524: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x137524u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x137528: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x137528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x13752c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13752cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137530: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x137530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x137534: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x137534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137538: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x137538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x13753c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x13753cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x137540: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x137540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x137544: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x137544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
    // 0x137548: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x137548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
    // 0x13754c: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x13754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x137550: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x137550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x137554: 0x8db30060  lw          $s3, 0x60($t5)
    ctx->pc = 0x137554u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 96)));
    // 0x137558: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x137558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x13755c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x13755cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x137560: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x137560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x137564: 0x2624021  addu        $t0, $s3, $v0
    ctx->pc = 0x137564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x137568: 0x8d02ffe0  lw          $v0, -0x20($t0)
    ctx->pc = 0x137568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967264)));
    // 0x13756c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x13756cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x137570: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x137570u;
    {
        const bool branch_taken_0x137570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137570u;
            // 0x137574: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137570) {
            ctx->pc = 0x1375A0u;
            goto label_1375a0;
        }
    }
    ctx->pc = 0x137578u;
label_137578:
    // 0x137578: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x137578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13757c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x13757cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x137580: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x137580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x137584: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x137584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137588: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x137588u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x13758c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x13758cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x137590: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137594: 0x8c62ffe0  lw          $v0, -0x20($v1)
    ctx->pc = 0x137594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x137598: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x137598u;
    {
        const bool branch_taken_0x137598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13759Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137598u;
            // 0x13759c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137598) {
            ctx->pc = 0x137578u;
            runtime->cooperativeGuestYield();
            goto label_137578;
        }
    }
    ctx->pc = 0x1375A0u;
label_1375a0:
    // 0x1375a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1375a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1375a4: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1375a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1375a8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x1375a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1375ac: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1375acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1375b0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1375B0u;
    {
        const bool branch_taken_0x1375b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1375B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1375B0u;
            // 0x1375b4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375b0) {
            ctx->pc = 0x1375C0u;
            goto label_1375c0;
        }
    }
    ctx->pc = 0x1375B8u;
    // 0x1375b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1375B8u;
    {
        const bool branch_taken_0x1375b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1375BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1375B8u;
            // 0x1375bc: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375b8) {
            ctx->pc = 0x1375CCu;
            goto label_1375cc;
        }
    }
    ctx->pc = 0x1375C0u;
label_1375c0:
    // 0x1375c0: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x1375c0u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x1375c4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1375c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1375c8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1375c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1375cc:
    // 0x1375cc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1375ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1375d0: 0xd8e90030  lqc2        $vf9, 0x30($a3)
    ctx->pc = 0x1375d0u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1375d4: 0xd8e80010  lqc2        $vf8, 0x10($a3)
    ctx->pc = 0x1375d4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1375d8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1375d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1375dc: 0xd8e70020  lqc2        $vf7, 0x20($a3)
    ctx->pc = 0x1375dcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1375e0: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x1375e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1375e4: 0xd8e60000  lqc2        $vf6, 0x0($a3)
    ctx->pc = 0x1375e4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1375e8: 0x8dae0050  lw          $t6, 0x50($t5)
    ctx->pc = 0x1375e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 80)));
    // 0x1375ec: 0x8dac0058  lw          $t4, 0x58($t5)
    ctx->pc = 0x1375ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 88)));
    // 0x1375f0: 0xf9660000  sqc2        $vf6, 0x0($t3)
    ctx->pc = 0x1375f0u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1375f4: 0xf9680010  sqc2        $vf8, 0x10($t3)
    ctx->pc = 0x1375f4u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1375f8: 0xf9670020  sqc2        $vf7, 0x20($t3)
    ctx->pc = 0x1375f8u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 32), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1375fc: 0x16c0003d  bnez        $s6, . + 4 + (0x3D << 2)
    ctx->pc = 0x1375FCu;
    {
        const bool branch_taken_0x1375fc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x137600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1375FCu;
            // 0x137600: 0xf9690030  sqc2        $vf9, 0x30($t3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 11), 48), _mm_castps_si128(ctx->vu0_vf[9]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375fc) {
            ctx->pc = 0x1376F4u;
            goto label_1376f4;
        }
    }
    ctx->pc = 0x137604u;
    // 0x137604: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x137604u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x137608: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x137608u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13760c: 0x4be440bd  vmadday.xyzw $ACC, $vf8, $vf4y
    ctx->pc = 0x13760cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137610: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x137610u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137614: 0x4be4490b  vmaddw.xyzw $vf4, $vf9, $vf4w
    ctx->pc = 0x137614u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137618: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x137618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13761c: 0xd9030010  lqc2        $vf3, 0x10($t0)
    ctx->pc = 0x13761cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x137620: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x137620u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137624: 0x4be340bd  vmadday.xyzw $ACC, $vf8, $vf3y
    ctx->pc = 0x137624u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137628: 0x4be338be  vmaddaz.xyzw $ACC, $vf7, $vf3z
    ctx->pc = 0x137628u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13762c: 0x4be348cb  vmaddw.xyzw $vf3, $vf9, $vf3w
    ctx->pc = 0x13762cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137630: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x137630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x137634: 0xd9020020  lqc2        $vf2, 0x20($t0)
    ctx->pc = 0x137634u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x137638: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x137638u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13763c: 0x4be240bd  vmadday.xyzw $ACC, $vf8, $vf2y
    ctx->pc = 0x13763cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137640: 0x4be238be  vmaddaz.xyzw $ACC, $vf7, $vf2z
    ctx->pc = 0x137640u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137644: 0x4be2488b  vmaddw.xyzw $vf2, $vf9, $vf2w
    ctx->pc = 0x137644u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137648: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x137648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13764c: 0xd9010030  lqc2        $vf1, 0x30($t0)
    ctx->pc = 0x13764cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x137650: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x137650u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137654: 0x4be140bd  vmadday.xyzw $ACC, $vf8, $vf1y
    ctx->pc = 0x137654u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137658: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x137658u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13765c: 0x4be1484b  vmaddw.xyzw $vf1, $vf9, $vf1w
    ctx->pc = 0x13765cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137660: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x137660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137664: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x137664u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137668: 0xfa440000  sqc2        $vf4, 0x0($s2)
    ctx->pc = 0x137668u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13766c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13766cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137670: 0xfa430010  sqc2        $vf3, 0x10($s2)
    ctx->pc = 0x137670u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x137674: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x137674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x137678: 0xfa420020  sqc2        $vf2, 0x20($s2)
    ctx->pc = 0x137678u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13767c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x13767Cu;
    {
        const bool branch_taken_0x13767c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13767Cu;
            // 0x137680: 0xfa410030  sqc2        $vf1, 0x30($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13767c) {
            ctx->pc = 0x137704u;
            goto label_137704;
        }
    }
    ctx->pc = 0x137684u;
    // 0x137684: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x137684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137688: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x137688u;
    {
        const bool branch_taken_0x137688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13768Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137688u;
            // 0x13768c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137688) {
            ctx->pc = 0x1376B8u;
            goto label_1376b8;
        }
    }
    ctx->pc = 0x137690u;
label_137690:
    // 0x137690: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x137690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x137694: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x137694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x137698: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x137698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13769c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x13769cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1376a0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1376a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1376a4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1376a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1376a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1376a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1376ac: 0x8c62ffe0  lw          $v0, -0x20($v1)
    ctx->pc = 0x1376acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x1376b0: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1376B0u;
    {
        const bool branch_taken_0x1376b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1376B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1376B0u;
            // 0x1376b4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1376b0) {
            ctx->pc = 0x137690u;
            runtime->cooperativeGuestYield();
            goto label_137690;
        }
    }
    ctx->pc = 0x1376B8u;
label_1376b8:
    // 0x1376b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1376b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1376bc: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1376bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1376c0: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x1376c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1376c4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1376c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1376c8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1376C8u;
    {
        const bool branch_taken_0x1376c8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1376CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1376C8u;
            // 0x1376cc: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1376c8) {
            ctx->pc = 0x1376D8u;
            goto label_1376d8;
        }
    }
    ctx->pc = 0x1376D0u;
    // 0x1376d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1376D0u;
    {
        const bool branch_taken_0x1376d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1376D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1376D0u;
            // 0x1376d4: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1376d0) {
            ctx->pc = 0x1376E4u;
            goto label_1376e4;
        }
    }
    ctx->pc = 0x1376D8u;
label_1376d8:
    // 0x1376d8: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x1376d8u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x1376dc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1376dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1376e0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1376e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1376e4:
    // 0x1376e4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1376e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1376e8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1376e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1376ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1376ECu;
    {
        const bool branch_taken_0x1376ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1376F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1376ECu;
            // 0x1376f0: 0x43b021  addu        $s6, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1376ec) {
            ctx->pc = 0x137704u;
            goto label_137704;
        }
    }
    ctx->pc = 0x1376F4u;
label_1376f4:
    // 0x1376f4: 0xfa460000  sqc2        $vf6, 0x0($s2)
    ctx->pc = 0x1376f4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1376f8: 0xfa480010  sqc2        $vf8, 0x10($s2)
    ctx->pc = 0x1376f8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1376fc: 0xfa470020  sqc2        $vf7, 0x20($s2)
    ctx->pc = 0x1376fcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x137700: 0xfa490030  sqc2        $vf9, 0x30($s2)
    ctx->pc = 0x137700u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[9]));
label_137704:
    // 0x137704: 0x85900004  lh          $s0, 0x4($t4)
    ctx->pc = 0x137704u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x137708: 0x60000ee  bltz        $s0, . + 4 + (0xEE << 2)
    ctx->pc = 0x137708u;
    {
        const bool branch_taken_0x137708 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x13770Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137708u;
            // 0x13770c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137708) {
            ctx->pc = 0x137AC4u;
            goto label_137ac4;
        }
    }
    ctx->pc = 0x137710u;
    // 0x137710: 0x95a4005c  lhu         $a0, 0x5C($t5)
    ctx->pc = 0x137710u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 92)));
    // 0x137714: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x137714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x137718: 0xafa4005c  sw          $a0, 0x5C($sp)
    ctx->pc = 0x137718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
    // 0x13771c: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x13771cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x137720: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x137720u;
    {
        const bool branch_taken_0x137720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137720u;
            // 0x137724: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137720) {
            ctx->pc = 0x137AC4u;
            goto label_137ac4;
        }
    }
    ctx->pc = 0x137728u;
    // 0x137728: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x137728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x13772c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x13772cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x137730: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x137730u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137734: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x137734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x137738: 0xa1180  sll         $v0, $t2, 6
    ctx->pc = 0x137738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
    // 0x13773c: 0x8cf021  addu        $fp, $a0, $t4
    ctx->pc = 0x13773cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x137740: 0x488821  addu        $s1, $v0, $t0
    ctx->pc = 0x137740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x137744: 0xb2b821  addu        $s7, $a1, $s2
    ctx->pc = 0x137744u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x137748: 0x12ea821  addu        $s5, $t1, $t6
    ctx->pc = 0x137748u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x13774c: 0x6ba021  addu        $s4, $v1, $t3
    ctx->pc = 0x13774cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_137750:
    // 0x137750: 0x87c50008  lh          $a1, 0x8($fp)
    ctx->pc = 0x137750u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x137754: 0x25a30064  addiu       $v1, $t5, 0x64
    ctx->pc = 0x137754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 100));
    // 0x137758: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x137758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x13775c: 0x30a4001f  andi        $a0, $a1, 0x1F
    ctx->pc = 0x13775cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x137760: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137764: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x137764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x137768: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x137768u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x13776c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x13776cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137770: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x137770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137774: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x137774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x137778: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x137778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13777c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13777cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x137780: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137780u;
    {
        const bool branch_taken_0x137780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137780) {
            ctx->pc = 0x13779Cu;
            goto label_13779c;
        }
    }
    ctx->pc = 0x137788u;
    // 0x137788: 0xc7c0000c  lwc1        $f0, 0xC($fp)
    ctx->pc = 0x137788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13778c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x13778cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137790: 0x0  nop
    ctx->pc = 0x137790u;
    // NOP
    // 0x137794: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x137794u;
    {
        const bool branch_taken_0x137794 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x137798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137794u;
            // 0x137798: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137794) {
            ctx->pc = 0x137810u;
            goto label_137810;
        }
    }
    ctx->pc = 0x13779Cu;
label_13779c:
    // 0x13779c: 0x161600c1  bne         $s0, $s6, . + 4 + (0xC1 << 2)
    ctx->pc = 0x13779Cu;
    {
        const bool branch_taken_0x13779c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x1377A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13779Cu;
            // 0x1377a0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13779c) {
            ctx->pc = 0x137AA4u;
            goto label_137aa4;
        }
    }
    ctx->pc = 0x1377A4u;
    // 0x1377a4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1377a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1377a8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1377a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1377ac: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x1377acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1377b0: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x1377B0u;
    {
        const bool branch_taken_0x1377b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1377B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1377B0u;
            // 0x1377b4: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1377b0) {
            ctx->pc = 0x137AA4u;
            goto label_137aa4;
        }
    }
    ctx->pc = 0x1377B8u;
    // 0x1377b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1377b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1377bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1377bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1377c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1377C0u;
    {
        const bool branch_taken_0x1377c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1377C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1377C0u;
            // 0x1377c4: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1377c0) {
            ctx->pc = 0x1377F0u;
            goto label_1377f0;
        }
    }
    ctx->pc = 0x1377C8u;
label_1377c8:
    // 0x1377c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1377c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1377cc: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x1377ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1377d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1377d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1377d4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1377d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1377d8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1377d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1377dc: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1377dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1377e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1377e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1377e4: 0x8c62ffe0  lw          $v0, -0x20($v1)
    ctx->pc = 0x1377e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x1377e8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1377E8u;
    {
        const bool branch_taken_0x1377e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1377ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1377E8u;
            // 0x1377ec: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1377e8) {
            ctx->pc = 0x1377C8u;
            runtime->cooperativeGuestYield();
            goto label_1377c8;
        }
    }
    ctx->pc = 0x1377F0u;
label_1377f0:
    // 0x1377f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1377f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1377f4: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1377f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1377f8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x1377f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1377fc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1377fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x137800: 0x4600095  bltz        $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x137800u;
    {
        const bool branch_taken_0x137800 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x137804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137800u;
            // 0x137804: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137800) {
            ctx->pc = 0x137A58u;
            goto label_137a58;
        }
    }
    ctx->pc = 0x137808u;
    // 0x137808: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x137808u;
    {
        const bool branch_taken_0x137808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137808) {
            ctx->pc = 0x137A60u;
            goto label_137a60;
        }
    }
    ctx->pc = 0x137810u;
label_137810:
    // 0x137810: 0x10a4000e  beq         $a1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x137810u;
    {
        const bool branch_taken_0x137810 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x137814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137810u;
            // 0x137814: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137810) {
            ctx->pc = 0x13784Cu;
            goto label_13784c;
        }
    }
    ctx->pc = 0x137818u;
    // 0x137818: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137818u;
    {
        const bool branch_taken_0x137818 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x13781Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137818u;
            // 0x13781c: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137818) {
            ctx->pc = 0x137834u;
            goto label_137834;
        }
    }
    ctx->pc = 0x137820u;
    // 0x137820: 0xdba60010  lqc2        $vf6, 0x10($sp)
    ctx->pc = 0x137820u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137824: 0xdba80020  lqc2        $vf8, 0x20($sp)
    ctx->pc = 0x137824u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137828: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x137828u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13782c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13782Cu;
    {
        const bool branch_taken_0x13782c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13782Cu;
            // 0x137830: 0xdba90040  lqc2        $vf9, 0x40($sp) (Delay Slot)
        ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13782c) {
            ctx->pc = 0x137848u;
            goto label_137848;
        }
    }
    ctx->pc = 0x137834u;
label_137834:
    // 0x137834: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x137834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x137838: 0xd8490030  lqc2        $vf9, 0x30($v0)
    ctx->pc = 0x137838u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13783c: 0xd8460000  lqc2        $vf6, 0x0($v0)
    ctx->pc = 0x13783cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137840: 0xd8480010  lqc2        $vf8, 0x10($v0)
    ctx->pc = 0x137840u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x137844: 0xd8470020  lqc2        $vf7, 0x20($v0)
    ctx->pc = 0x137844u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_137848:
    // 0x137848: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x137848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_13784c:
    // 0x13784c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x13784cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x137850: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x137850u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137854: 0x4be140bd  vmadday.xyzw $ACC, $vf8, $vf1y
    ctx->pc = 0x137854u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137858: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x137858u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13785c: 0x4be1484b  vmaddw.xyzw $vf1, $vf9, $vf1w
    ctx->pc = 0x13785cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137860: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x137860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137864: 0xdaa10010  lqc2        $vf1, 0x10($s5)
    ctx->pc = 0x137864u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x137868: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x137868u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13786c: 0x4be140bd  vmadday.xyzw $ACC, $vf8, $vf1y
    ctx->pc = 0x13786cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137870: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x137870u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137874: 0x4be1484b  vmaddw.xyzw $vf1, $vf9, $vf1w
    ctx->pc = 0x137874u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137878: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x137878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13787c: 0xdaa10020  lqc2        $vf1, 0x20($s5)
    ctx->pc = 0x13787cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x137880: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x137880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137884: 0x4be140bd  vmadday.xyzw $ACC, $vf8, $vf1y
    ctx->pc = 0x137884u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137888: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x137888u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13788c: 0x4be1484b  vmaddw.xyzw $vf1, $vf9, $vf1w
    ctx->pc = 0x13788cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137890: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x137890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137894: 0xdaa10030  lqc2        $vf1, 0x30($s5)
    ctx->pc = 0x137894u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x137898: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x137898u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13789c: 0x4be140bd  vmadday.xyzw $ACC, $vf8, $vf1y
    ctx->pc = 0x13789cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1378a0: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x1378a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1378a4: 0x4be1484b  vmaddw.xyzw $vf1, $vf9, $vf1w
    ctx->pc = 0x1378a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1378a8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1378a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1378ac: 0x8fc80000  lw          $t0, 0x0($fp)
    ctx->pc = 0x1378acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1378b0: 0x31026000  andi        $v0, $t0, 0x6000
    ctx->pc = 0x1378b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)24576);
    // 0x1378b4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1378B4u;
    {
        const bool branch_taken_0x1378b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1378B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1378B4u;
            // 0x1378b8: 0xafb00054  sw          $s0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1378b4) {
            ctx->pc = 0x137910u;
            goto label_137910;
        }
    }
    ctx->pc = 0x1378BCu;
    // 0x1378bc: 0x7fa90070  sq          $t1, 0x70($sp)
    ctx->pc = 0x1378bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 9));
    // 0x1378c0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1378c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1378c4: 0x7faa0080  sq          $t2, 0x80($sp)
    ctx->pc = 0x1378c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 10));
    // 0x1378c8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1378c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1378cc: 0x7fab0090  sq          $t3, 0x90($sp)
    ctx->pc = 0x1378ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 11));
    // 0x1378d0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1378d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1378d4: 0x7fad00a0  sq          $t5, 0xA0($sp)
    ctx->pc = 0x1378d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 13));
    // 0x1378d8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1378d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1378dc: 0xfba600b0  sqc2        $vf6, 0xB0($sp)
    ctx->pc = 0x1378dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1378e0: 0xfba700c0  sqc2        $vf7, 0xC0($sp)
    ctx->pc = 0x1378e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1378e4: 0xfba800d0  sqc2        $vf8, 0xD0($sp)
    ctx->pc = 0x1378e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1378e8: 0xc04da1c  jal         func_136870
    ctx->pc = 0x1378E8u;
    SET_GPR_U32(ctx, 31, 0x1378F0u);
    ctx->pc = 0x1378ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1378E8u;
            // 0x1378ec: 0xfba900e0  sqc2        $vf9, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[9]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136870u;
    if (runtime->hasFunction(0x136870u)) {
        auto targetFn = runtime->lookupFunction(0x136870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1378F0u; }
        if (ctx->pc != 0x1378F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136870_0x136870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1378F0u; }
        if (ctx->pc != 0x1378F0u) { return; }
    }
    ctx->pc = 0x1378F0u;
    // 0x1378f0: 0xdba900e0  lqc2        $vf9, 0xE0($sp)
    ctx->pc = 0x1378f0u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1378f4: 0xdba800d0  lqc2        $vf8, 0xD0($sp)
    ctx->pc = 0x1378f4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1378f8: 0xdba700c0  lqc2        $vf7, 0xC0($sp)
    ctx->pc = 0x1378f8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1378fc: 0xdba600b0  lqc2        $vf6, 0xB0($sp)
    ctx->pc = 0x1378fcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x137900: 0x7bad00a0  lq          $t5, 0xA0($sp)
    ctx->pc = 0x137900u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x137904: 0x7bab0090  lq          $t3, 0x90($sp)
    ctx->pc = 0x137904u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x137908: 0x7baa0080  lq          $t2, 0x80($sp)
    ctx->pc = 0x137908u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13790c: 0x7ba90070  lq          $t1, 0x70($sp)
    ctx->pc = 0x13790cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_137910:
    // 0x137910: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x137910u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137914: 0x102142  srl         $a0, $s0, 5
    ctx->pc = 0x137914u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x137918: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x137918u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13791c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13791cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x137920: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x137920u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
    // 0x137924: 0x3205001f  andi        $a1, $s0, 0x1F
    ctx->pc = 0x137924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x137928: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x137928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13792c: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x13792cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
    // 0x137930: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x137930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x137934: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137938: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x137938u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13793c: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x13793cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x137940: 0x7e820020  sq          $v0, 0x20($s4)
    ctx->pc = 0x137940u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 2));
    // 0x137944: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x137944u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137948: 0x7e820030  sq          $v0, 0x30($s4)
    ctx->pc = 0x137948u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), GPR_VEC(ctx, 2));
    // 0x13794c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13794cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x137950: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x137950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x137954: 0x16160049  bne         $s0, $s6, . + 4 + (0x49 << 2)
    ctx->pc = 0x137954u;
    {
        const bool branch_taken_0x137954 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x137958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137954u;
            // 0x137958: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137954) {
            ctx->pc = 0x137A7Cu;
            goto label_137a7c;
        }
    }
    ctx->pc = 0x13795Cu;
    // 0x13795c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x13795cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x137960: 0x1321021  addu        $v0, $t1, $s2
    ctx->pc = 0x137960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 18)));
    // 0x137964: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x137964u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137968: 0x4be121bc  vmulax.xyzw $ACC, $vf4, $vf1x
    ctx->pc = 0x137968u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13796c: 0xdba50020  lqc2        $vf5, 0x20($sp)
    ctx->pc = 0x13796cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137970: 0x4be128bd  vmadday.xyzw $ACC, $vf5, $vf1y
    ctx->pc = 0x137970u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137974: 0xdba30030  lqc2        $vf3, 0x30($sp)
    ctx->pc = 0x137974u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137978: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x137978u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13797c: 0x4be118be  vmaddaz.xyzw $ACC, $vf3, $vf1z
    ctx->pc = 0x13797cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137980: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x137980u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137984: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x137984u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137988: 0xda210010  lqc2        $vf1, 0x10($s1)
    ctx->pc = 0x137988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13798c: 0x4be121bc  vmulax.xyzw $ACC, $vf4, $vf1x
    ctx->pc = 0x13798cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137990: 0x4be128bd  vmadday.xyzw $ACC, $vf5, $vf1y
    ctx->pc = 0x137990u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137994: 0x4be118be  vmaddaz.xyzw $ACC, $vf3, $vf1z
    ctx->pc = 0x137994u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137998: 0x4be1108b  vmaddw.xyzw $vf2, $vf2, $vf1w
    ctx->pc = 0x137998u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13799c: 0xfae2ffe0  sqc2        $vf2, -0x20($s7)
    ctx->pc = 0x13799cu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 4294967264), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1379a0: 0xda220020  lqc2        $vf2, 0x20($s1)
    ctx->pc = 0x1379a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1379a4: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1379a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1379a8: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1379a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1379ac: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1379acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1379b0: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1379b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1379b4: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1379b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1379b8: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1379b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1379bc: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1379bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1379c0: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1379c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1379c4: 0xfae1fff0  sqc2        $vf1, -0x10($s7)
    ctx->pc = 0x1379c4u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 4294967280), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1379c8: 0xda220030  lqc2        $vf2, 0x30($s1)
    ctx->pc = 0x1379c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1379cc: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1379ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1379d0: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1379d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1379d4: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1379d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1379d8: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1379d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1379dc: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1379dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1379e0: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1379e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1379e4: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1379e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1379e8: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1379e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1379ec: 0xfae10000  sqc2        $vf1, 0x0($s7)
    ctx->pc = 0x1379ecu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1379f0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1379f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1379f4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1379f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1379f8: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x1379f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1379fc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1379FCu;
    {
        const bool branch_taken_0x1379fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1379FCu;
            // 0x137a00: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1379fc) {
            ctx->pc = 0x137AA0u;
            goto label_137aa0;
        }
    }
    ctx->pc = 0x137A04u;
    // 0x137a04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x137a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137a08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x137a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a0c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x137A0Cu;
    {
        const bool branch_taken_0x137a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137A0Cu;
            // 0x137a10: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a0c) {
            ctx->pc = 0x137A40u;
            goto label_137a40;
        }
    }
    ctx->pc = 0x137A14u;
    // 0x137a14: 0x0  nop
    ctx->pc = 0x137a14u;
    // NOP
label_137a18:
    // 0x137a18: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x137a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x137a1c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x137a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x137a20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x137a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x137a24: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x137a24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137a28: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x137a28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x137a2c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x137a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x137a30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137a34: 0x8c62ffe0  lw          $v0, -0x20($v1)
    ctx->pc = 0x137a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x137a38: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x137A38u;
    {
        const bool branch_taken_0x137a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137A38u;
            // 0x137a3c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a38) {
            ctx->pc = 0x137A18u;
            runtime->cooperativeGuestYield();
            goto label_137a18;
        }
    }
    ctx->pc = 0x137A40u;
label_137a40:
    // 0x137a40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x137a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137a44: 0x21823  negu        $v1, $v0
    ctx->pc = 0x137a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x137a48: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x137a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x137a4c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x137a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x137a50: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x137A50u;
    {
        const bool branch_taken_0x137a50 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x137A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137A50u;
            // 0x137a54: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a50) {
            ctx->pc = 0x137A60u;
            goto label_137a60;
        }
    }
    ctx->pc = 0x137A58u;
label_137a58:
    // 0x137a58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x137A58u;
    {
        const bool branch_taken_0x137a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137A58u;
            // 0x137a5c: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a58) {
            ctx->pc = 0x137A6Cu;
            goto label_137a6c;
        }
    }
    ctx->pc = 0x137A60u;
label_137a60:
    // 0x137a60: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x137a60u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x137a64: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x137a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x137a68: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x137a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_137a6c:
    // 0x137a6c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x137a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x137a70: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x137a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x137a74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x137A74u;
    {
        const bool branch_taken_0x137a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137A74u;
            // 0x137a78: 0x43b021  addu        $s6, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a74) {
            ctx->pc = 0x137AA0u;
            goto label_137aa0;
        }
    }
    ctx->pc = 0x137A7Cu;
label_137a7c:
    // 0x137a7c: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x137a7cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137a80: 0x1321821  addu        $v1, $t1, $s2
    ctx->pc = 0x137a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 18)));
    // 0x137a84: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x137a84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137a88: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x137a88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x137a8c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x137a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x137a90: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x137a90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137a94: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x137a94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x137a98: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x137a98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137a9c: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x137a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
label_137aa0:
    // 0x137aa0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x137aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_137aa4:
    // 0x137aa4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x137aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x137aa8: 0x26f70040  addiu       $s7, $s7, 0x40
    ctx->pc = 0x137aa8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
    // 0x137aac: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x137aacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x137ab0: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x137ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x137ab4: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x137ab4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x137ab8: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x137ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x137abc: 0x1440ff24  bnez        $v0, . + 4 + (-0xDC << 2)
    ctx->pc = 0x137ABCu;
    {
        const bool branch_taken_0x137abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137ABCu;
            // 0x137ac0: 0x27de0010  addiu       $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137abc) {
            ctx->pc = 0x137750u;
            runtime->cooperativeGuestYield();
            goto label_137750;
        }
    }
    ctx->pc = 0x137AC4u;
label_137ac4:
    // 0x137ac4: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x137ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x137ac8: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x137ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x137acc: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x137accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x137ad0: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x137ad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x137ad4: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x137ad4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x137ad8: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x137ad8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x137adc: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x137adcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x137ae0: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x137ae0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x137ae4: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x137ae4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x137ae8: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x137ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x137aec: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x137aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137af0: 0x3e00008  jr          $ra
    ctx->pc = 0x137AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137AF0u;
            // 0x137af4: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x137578u: goto label_137578;
            case 0x1375A0u: goto label_1375a0;
            case 0x1375C0u: goto label_1375c0;
            case 0x1375CCu: goto label_1375cc;
            case 0x137690u: goto label_137690;
            case 0x1376B8u: goto label_1376b8;
            case 0x1376D8u: goto label_1376d8;
            case 0x1376E4u: goto label_1376e4;
            case 0x1376F4u: goto label_1376f4;
            case 0x137704u: goto label_137704;
            case 0x137750u: goto label_137750;
            case 0x13779Cu: goto label_13779c;
            case 0x1377C8u: goto label_1377c8;
            case 0x1377F0u: goto label_1377f0;
            case 0x137810u: goto label_137810;
            case 0x137834u: goto label_137834;
            case 0x137848u: goto label_137848;
            case 0x13784Cu: goto label_13784c;
            case 0x137910u: goto label_137910;
            case 0x137A18u: goto label_137a18;
            case 0x137A40u: goto label_137a40;
            case 0x137A58u: goto label_137a58;
            case 0x137A60u: goto label_137a60;
            case 0x137A6Cu: goto label_137a6c;
            case 0x137A7Cu: goto label_137a7c;
            case 0x137AA0u: goto label_137aa0;
            case 0x137AA4u: goto label_137aa4;
            case 0x137AC4u: goto label_137ac4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x137AF8u;
}
