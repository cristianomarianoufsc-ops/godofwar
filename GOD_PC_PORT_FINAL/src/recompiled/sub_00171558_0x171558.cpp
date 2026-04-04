#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171558
// Address: 0x171558 - 0x171708
void sub_00171558_0x171558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171558_0x171558");
#endif

    ctx->pc = 0x171558u;

    // 0x171558: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x171558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x17155c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x17155cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x171560: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x171560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x171564: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x171564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171568: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x171568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x17156c: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x17156cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x171570: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x171570u;
    {
        const bool branch_taken_0x171570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x171574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171570u;
            // 0x171574: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171570) {
            ctx->pc = 0x171640u;
            goto label_171640;
        }
    }
    ctx->pc = 0x171578u;
    // 0x171578: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x171578u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x17157c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17157Cu;
    {
        const bool branch_taken_0x17157c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x171580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17157Cu;
            // 0x171580: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17157c) {
            ctx->pc = 0x17158Cu;
            goto label_17158c;
        }
    }
    ctx->pc = 0x171584u;
    // 0x171584: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x171584u;
    {
        const bool branch_taken_0x171584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171584u;
            // 0x171588: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171584) {
            ctx->pc = 0x1715A8u;
            goto label_1715a8;
        }
    }
    ctx->pc = 0x17158Cu;
label_17158c:
    // 0x17158c: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x17158cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x171590: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x171590u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x171594: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x171594u;
    {
        const bool branch_taken_0x171594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x171598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171594u;
            // 0x171598: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171594) {
            ctx->pc = 0x1715A8u;
            goto label_1715a8;
        }
    }
    ctx->pc = 0x17159Cu;
    // 0x17159c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x17159Cu;
    SET_GPR_U32(ctx, 31, 0x1715A4u);
    ctx->pc = 0x1715A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17159Cu;
            // 0x1715a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1715A4u; }
        if (ctx->pc != 0x1715A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1715A4u; }
        if (ctx->pc != 0x1715A4u) { return; }
    }
    ctx->pc = 0x1715A4u;
    // 0x1715a4: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1715a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1715a8:
    // 0x1715a8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1715a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1715ac: 0xd8860000  lqc2        $vf6, 0x0($a0)
    ctx->pc = 0x1715acu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1715b0: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x1715b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1715b4: 0xd8870010  lqc2        $vf7, 0x10($a0)
    ctx->pc = 0x1715b4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1715b8: 0xd8880020  lqc2        $vf8, 0x20($a0)
    ctx->pc = 0x1715b8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1715bc: 0xda210010  lqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1715bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1715c0: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x1715c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1715c4: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x1715c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1715c8: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x1715c8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1715cc: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x1715ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1715d0: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1715d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1715d4: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1715d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1715d8: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x1715d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1715dc: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1715dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1715e0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1715e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1715e4: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1715e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1715e8: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1715e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1715ec: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x1715ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1715f0: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1715f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1715f4: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1715f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1715f8: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1715f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1715fc: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1715fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x171600: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x171600u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x171604: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x171604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x171608: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x171608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x17160c: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x17160cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x171610: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x171610u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x171614: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x171614u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x171618: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x171618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17161c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x17161cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x171620: 0xfa210050  sqc2        $vf1, 0x50($s1)
    ctx->pc = 0x171620u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x171624: 0xfa220060  sqc2        $vf2, 0x60($s1)
    ctx->pc = 0x171624u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x171628: 0xfa230070  sqc2        $vf3, 0x70($s1)
    ctx->pc = 0x171628u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x17162c: 0xfa240080  sqc2        $vf4, 0x80($s1)
    ctx->pc = 0x17162cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x171630: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x171630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x171634: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x171634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x171638: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x171638u;
    {
        const bool branch_taken_0x171638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17163Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171638u;
            // 0x17163c: 0xfba40030  sqc2        $vf4, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171638) {
            ctx->pc = 0x171660u;
            goto label_171660;
        }
    }
    ctx->pc = 0x171640u;
label_171640:
    // 0x171640: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x171640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x171644: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x171644u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x171648: 0x7a240030  lq          $a0, 0x30($s1)
    ctx->pc = 0x171648u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x17164c: 0x7a250040  lq          $a1, 0x40($s1)
    ctx->pc = 0x17164cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x171650: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x171650u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
    // 0x171654: 0x7e230060  sq          $v1, 0x60($s1)
    ctx->pc = 0x171654u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 3));
    // 0x171658: 0x7e240070  sq          $a0, 0x70($s1)
    ctx->pc = 0x171658u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 4));
    // 0x17165c: 0x7e250080  sq          $a1, 0x80($s1)
    ctx->pc = 0x17165cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), GPR_VEC(ctx, 5));
label_171660:
    // 0x171660: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x171660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x171664: 0xc0614c6  jal         func_185318
    ctx->pc = 0x171664u;
    SET_GPR_U32(ctx, 31, 0x17166Cu);
    ctx->pc = 0x171668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171664u;
            // 0x171668: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17166Cu; }
        if (ctx->pc != 0x17166Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17166Cu; }
        if (ctx->pc != 0x17166Cu) { return; }
    }
    ctx->pc = 0x17166Cu;
    // 0x17166c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17166cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x171670: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x171670u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x171674: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x171674u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x171678: 0x7ba50080  lq          $a1, 0x80($sp)
    ctx->pc = 0x171678u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17167c: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x17167cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x171680: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x171680u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x171684: 0x2503f170  addiu       $v1, $t0, -0xE90
    ctx->pc = 0x171684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963568));
    // 0x171688: 0x7ba70090  lq          $a3, 0x90($sp)
    ctx->pc = 0x171688u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17168c: 0x24c61370  addiu       $a2, $a2, 0x1370
    ctx->pc = 0x17168cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4976));
    // 0x171690: 0x7e2200c0  sq          $v0, 0xC0($s1)
    ctx->pc = 0x171690u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 192), GPR_VEC(ctx, 2));
    // 0x171694: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x171694u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x171698: 0x7e2700a0  sq          $a3, 0xA0($s1)
    ctx->pc = 0x171698u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), GPR_VEC(ctx, 7));
    // 0x17169c: 0x7e2400b0  sq          $a0, 0xB0($s1)
    ctx->pc = 0x17169cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 176), GPR_VEC(ctx, 4));
    // 0x1716a0: 0x7e250090  sq          $a1, 0x90($s1)
    ctx->pc = 0x1716a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 5));
    // 0x1716a4: 0x8e02bcf8  lw          $v0, -0x4308($s0)
    ctx->pc = 0x1716a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1716a8: 0xad00f170  sw          $zero, -0xE90($t0)
    ctx->pc = 0x1716a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294963568), GPR_U32(ctx, 0));
    // 0x1716ac: 0x8c451048  lw          $a1, 0x1048($v0)
    ctx->pc = 0x1716acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4168)));
    // 0x1716b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1716b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1716b4: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1716b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x1716b8: 0xac69000c  sw          $t1, 0xC($v1)
    ctx->pc = 0x1716b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
    // 0x1716bc: 0xac710020  sw          $s1, 0x20($v1)
    ctx->pc = 0x1716bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 17));
    // 0x1716c0: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1716c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1716c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1716c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1716c8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1716c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1716cc: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1716ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1716d0: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1716d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1716d4: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x1716d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x1716d8: 0xac451054  sw          $a1, 0x1054($v0)
    ctx->pc = 0x1716d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4180), GPR_U32(ctx, 5));
    // 0x1716dc: 0xc04797a  jal         func_11E5E8
    ctx->pc = 0x1716DCu;
    SET_GPR_U32(ctx, 31, 0x1716E4u);
    ctx->pc = 0x1716E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1716DCu;
            // 0x1716e0: 0x7a250040  lq          $a1, 0x40($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E5E8u;
    if (runtime->hasFunction(0x11E5E8u)) {
        auto targetFn = runtime->lookupFunction(0x11E5E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1716E4u; }
        if (ctx->pc != 0x1716E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E5E8_0x11e5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1716E4u; }
        if (ctx->pc != 0x1716E4u) { return; }
    }
    ctx->pc = 0x1716E4u;
    // 0x1716e4: 0x8e03bcf8  lw          $v1, -0x4308($s0)
    ctx->pc = 0x1716e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1716e8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1716e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1716ec: 0x8c62103c  lw          $v0, 0x103C($v1)
    ctx->pc = 0x1716ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4156)));
    // 0x1716f0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1716f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1716f4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1716f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1716f8: 0xac621054  sw          $v0, 0x1054($v1)
    ctx->pc = 0x1716f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4180), GPR_U32(ctx, 2));
    // 0x1716fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1716FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1716FCu;
            // 0x171700: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17158Cu: goto label_17158c;
            case 0x1715A8u: goto label_1715a8;
            case 0x171640u: goto label_171640;
            case 0x171660u: goto label_171660;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171704u;
    // 0x171704: 0x0  nop
    ctx->pc = 0x171704u;
    // NOP
}
