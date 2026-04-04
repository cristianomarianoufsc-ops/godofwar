#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3580
// Address: 0x1f3580 - 0x1f37c8
void sub_001F3580_0x1f3580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3580_0x1f3580");
#endif

    ctx->pc = 0x1f3580u;

    // 0x1f3580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f3580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f3584: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f3584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f3588: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f3588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f358c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f358cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3590: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f3590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f3594: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f3594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f3598: 0x8e51000c  lw          $s1, 0xC($s2)
    ctx->pc = 0x1f3598u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1f359c: 0x6200026  bltz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F359Cu;
    {
        const bool branch_taken_0x1f359c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1F35A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F359Cu;
            // 0x1f35a0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f359c) {
            ctx->pc = 0x1F3638u;
            goto label_1f3638;
        }
    }
    ctx->pc = 0x1F35A4u;
    // 0x1f35a4: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1f35a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f35a8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f35a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f35ac: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x1f35acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1f35b0: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x1f35b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x1f35b4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1f35b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f35b8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1f35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f35bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f35bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f35c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f35c4: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F35C4u;
    {
        const bool branch_taken_0x1f35c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F35C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F35C4u;
            // 0x1f35c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f35c4) {
            ctx->pc = 0x1F35D0u;
            goto label_1f35d0;
        }
    }
    ctx->pc = 0x1F35CCu;
    // 0x1f35cc: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1f35ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f35d0:
    // 0x1f35d0: 0x8cd00104  lw          $s0, 0x104($a2)
    ctx->pc = 0x1f35d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x1f35d4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f35d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f35d8: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1f35d8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1f35dc: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1f35dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1f35e0: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F35E0u;
    {
        const bool branch_taken_0x1f35e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1f35e0) {
            ctx->pc = 0x1F35E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F35E0u;
            // 0x1f35e4: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F35F8u;
            goto label_1f35f8;
        }
    }
    ctx->pc = 0x1F35E8u;
    // 0x1f35e8: 0xc04da64  jal         func_136990
    ctx->pc = 0x1F35E8u;
    SET_GPR_U32(ctx, 31, 0x1F35F0u);
    ctx->pc = 0x1F35ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F35E8u;
            // 0x1f35ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F35F0u; }
        if (ctx->pc != 0x1F35F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F35F0u; }
        if (ctx->pc != 0x1F35F0u) { return; }
    }
    ctx->pc = 0x1F35F0u;
    // 0x1f35f0: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1f35f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1f35f4: 0x0  nop
    ctx->pc = 0x1f35f4u;
    // NOP
label_1f35f8:
    // 0x1f35f8: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1f35f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1f35fc: 0xda420020  lqc2        $vf2, 0x20($s2)
    ctx->pc = 0x1f35fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1f3600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3604: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f3604u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f3608: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1f3608u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f360c: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1f360cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f3610: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1f3610u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f3614: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1f3614u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f3618: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1f3618u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f361c: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1f361cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f3620: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1f3620u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f3624: 0xda420010  lqc2        $vf2, 0x10($s2)
    ctx->pc = 0x1f3624u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1f3628: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1f3628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f362c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1F362Cu;
    {
        const bool branch_taken_0x1f362c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F362Cu;
            // 0x1f3630: 0x48221800  qmfc2.ni    $v0, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f362c) {
            ctx->pc = 0x1F37B0u;
            goto label_1f37b0;
        }
    }
    ctx->pc = 0x1F3634u;
    // 0x1f3634: 0x0  nop
    ctx->pc = 0x1f3634u;
    // NOP
label_1f3638:
    // 0x1f3638: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1f3638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f363c: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F363Cu;
    {
        const bool branch_taken_0x1f363c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F363Cu;
            // 0x1f3640: 0x2a22fffe  slti        $v0, $s1, -0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967294) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f363c) {
            ctx->pc = 0x1F3678u;
            goto label_1f3678;
        }
    }
    ctx->pc = 0x1F3644u;
    // 0x1f3644: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3644u;
    {
        const bool branch_taken_0x1f3644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3644u;
            // 0x1f3648: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3644) {
            ctx->pc = 0x1F365Cu;
            goto label_1f365c;
        }
    }
    ctx->pc = 0x1F364Cu;
    // 0x1f364c: 0x52220026  beql        $s1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F364Cu;
    {
        const bool branch_taken_0x1f364c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f364c) {
            ctx->pc = 0x1F3650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F364Cu;
            // 0x1f3650: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F36E8u;
            goto label_1f36e8;
        }
    }
    ctx->pc = 0x1F3654u;
    // 0x1f3654: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1F3654u;
    {
        const bool branch_taken_0x1f3654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3654) {
            ctx->pc = 0x1F37A8u;
            goto label_1f37a8;
        }
    }
    ctx->pc = 0x1F365Cu;
label_1f365c:
    // 0x1f365c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1f365cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1f3660: 0x12220051  beq         $s1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1F3660u;
    {
        const bool branch_taken_0x1f3660 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3660u;
            // 0x1f3664: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3660) {
            ctx->pc = 0x1F37A8u;
            goto label_1f37a8;
        }
    }
    ctx->pc = 0x1F3668u;
    // 0x1f3668: 0x1622004f  bne         $s1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1F3668u;
    {
        const bool branch_taken_0x1f3668 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f3668) {
            ctx->pc = 0x1F37A8u;
            goto label_1f37a8;
        }
    }
    ctx->pc = 0x1F3670u;
    // 0x1f3670: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1F3670u;
    {
        const bool branch_taken_0x1f3670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3670u;
            // 0x1f3674: 0x7a420010  lq          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3670) {
            ctx->pc = 0x1F37B0u;
            goto label_1f37b0;
        }
    }
    ctx->pc = 0x1F3678u;
label_1f3678:
    // 0x1f3678: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1f3678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f367c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1f367cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f3680: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f3680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f3684: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x1f3684u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1f3688: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x1f3688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x1f368c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1f368cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f3690: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1f3690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f3694: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f3694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f3698: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f3698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f369c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F369Cu;
    {
        const bool branch_taken_0x1f369c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F36A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F369Cu;
            // 0x1f36a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f369c) {
            ctx->pc = 0x1F36A8u;
            goto label_1f36a8;
        }
    }
    ctx->pc = 0x1F36A4u;
    // 0x1f36a4: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1f36a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f36a8:
    // 0x1f36a8: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x1f36a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1f36ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f36acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f36b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F36B0u;
    {
        const bool branch_taken_0x1f36b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F36B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F36B0u;
            // 0x1f36b4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36b0) {
            ctx->pc = 0x1F36C0u;
            goto label_1f36c0;
        }
    }
    ctx->pc = 0x1F36B8u;
    // 0x1f36b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F36B8u;
    {
        const bool branch_taken_0x1f36b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F36BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F36B8u;
            // 0x1f36bc: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36b8) {
            ctx->pc = 0x1F36DCu;
            goto label_1f36dc;
        }
    }
    ctx->pc = 0x1F36C0u;
label_1f36c0:
    // 0x1f36c0: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1f36c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1f36c4: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1f36c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1f36c8: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F36C8u;
    {
        const bool branch_taken_0x1f36c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F36CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F36C8u;
            // 0x1f36cc: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36c8) {
            ctx->pc = 0x1F36E0u;
            goto label_1f36e0;
        }
    }
    ctx->pc = 0x1F36D0u;
    // 0x1f36d0: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1F36D0u;
    SET_GPR_U32(ctx, 31, 0x1F36D8u);
    ctx->pc = 0x1F36D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F36D0u;
            // 0x1f36d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F36D8u; }
        if (ctx->pc != 0x1F36D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F36D8u; }
        if (ctx->pc != 0x1F36D8u) { return; }
    }
    ctx->pc = 0x1F36D8u;
    // 0x1f36d8: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1f36d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1f36dc:
    // 0x1f36dc: 0x0  nop
    ctx->pc = 0x1f36dcu;
    // NOP
label_1f36e0:
    // 0x1f36e0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1F36E0u;
    {
        const bool branch_taken_0x1f36e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F36E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F36E0u;
            // 0x1f36e4: 0xd8820030  lqc2        $vf2, 0x30($a0) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36e0) {
            ctx->pc = 0x1F3794u;
            goto label_1f3794;
        }
    }
    ctx->pc = 0x1F36E8u;
label_1f36e8:
    // 0x1f36e8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1f36e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f36ec: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1f36ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1f36f0: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x1f36f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1f36f4: 0x8ce3d2ac  lw          $v1, -0x2D54($a3)
    ctx->pc = 0x1f36f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294955692)));
    // 0x1f36f8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1f36f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f36fc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1f36fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f3700: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f3700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f3704: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f3704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f3708: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3708u;
    {
        const bool branch_taken_0x1f3708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F370Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3708u;
            // 0x1f370c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3708) {
            ctx->pc = 0x1F3714u;
            goto label_1f3714;
        }
    }
    ctx->pc = 0x1F3710u;
    // 0x1f3710: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1f3710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f3714:
    // 0x1f3714: 0x8cc300fc  lw          $v1, 0xFC($a2)
    ctx->pc = 0x1f3714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 252)));
    // 0x1f3718: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F3718u;
    {
        const bool branch_taken_0x1f3718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F371Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3718u;
            // 0x1f371c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3718) {
            ctx->pc = 0x1F3758u;
            goto label_1f3758;
        }
    }
    ctx->pc = 0x1F3720u;
    // 0x1f3720: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f3720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f3724: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f3724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f3728: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F3728u;
    {
        const bool branch_taken_0x1f3728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F372Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3728u;
            // 0x1f372c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3728) {
            ctx->pc = 0x1F3758u;
            goto label_1f3758;
        }
    }
    ctx->pc = 0x1F3730u;
label_1f3730:
    // 0x1f3730: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1f3730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f3734: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f3734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f3738: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1f3738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1f373c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F373Cu;
    {
        const bool branch_taken_0x1f373c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f373c) {
            ctx->pc = 0x1F3740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F373Cu;
            // 0x1f3740: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3758u;
            goto label_1f3758;
        }
    }
    ctx->pc = 0x1F3744u;
    // 0x1f3744: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f3744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f3748: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f3748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f374c: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F374Cu;
    {
        const bool branch_taken_0x1f374c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F374Cu;
            // 0x1f3750: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f374c) {
            ctx->pc = 0x1F3730u;
            runtime->cooperativeGuestYield();
            goto label_1f3730;
        }
    }
    ctx->pc = 0x1F3754u;
    // 0x1f3754: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f3754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3758:
    // 0x1f3758: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x1f3758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1f375c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F375Cu;
    {
        const bool branch_taken_0x1f375c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F375Cu;
            // 0x1f3760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f375c) {
            ctx->pc = 0x1F3790u;
            goto label_1f3790;
        }
    }
    ctx->pc = 0x1F3764u;
    // 0x1f3764: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1f3764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f3768: 0x415c2  srl         $v0, $a0, 23
    ctx->pc = 0x1f3768u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x1f376c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1f376cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f3770: 0x8ce3d2ac  lw          $v1, -0x2D54($a3)
    ctx->pc = 0x1f3770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294955692)));
    // 0x1f3774: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1f3774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f3778: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f3778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f377c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f377cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f3780: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3780u;
    {
        const bool branch_taken_0x1f3780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F3784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3780u;
            // 0x1f3784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3780) {
            ctx->pc = 0x1F378Cu;
            goto label_1f378c;
        }
    }
    ctx->pc = 0x1F3788u;
    // 0x1f3788: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1f3788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1f378c:
    // 0x1f378c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1f378cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f3790:
    // 0x1f3790: 0xd84200d0  lqc2        $vf2, 0xD0($v0)
    ctx->pc = 0x1f3790u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 208)));
label_1f3794:
    // 0x1f3794: 0xda410010  lqc2        $vf1, 0x10($s2)
    ctx->pc = 0x1f3794u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1f3798: 0x4be110e8  vadd.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1f3798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f379c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F379Cu;
    {
        const bool branch_taken_0x1f379c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F37A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F379Cu;
            // 0x1f37a0: 0x48221800  qmfc2.ni    $v0, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f379c) {
            ctx->pc = 0x1F37B0u;
            goto label_1f37b0;
        }
    }
    ctx->pc = 0x1F37A4u;
    // 0x1f37a4: 0x0  nop
    ctx->pc = 0x1f37a4u;
    // NOP
label_1f37a8:
    // 0x1f37a8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1f37a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f37ac: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1f37acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1f37b0:
    // 0x1f37b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f37b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f37b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f37b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f37b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f37b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f37bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f37bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f37c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F37C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F37C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F37C0u;
            // 0x1f37c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F35D0u: goto label_1f35d0;
            case 0x1F35F8u: goto label_1f35f8;
            case 0x1F3638u: goto label_1f3638;
            case 0x1F365Cu: goto label_1f365c;
            case 0x1F3678u: goto label_1f3678;
            case 0x1F36A8u: goto label_1f36a8;
            case 0x1F36C0u: goto label_1f36c0;
            case 0x1F36DCu: goto label_1f36dc;
            case 0x1F36E0u: goto label_1f36e0;
            case 0x1F36E8u: goto label_1f36e8;
            case 0x1F3714u: goto label_1f3714;
            case 0x1F3730u: goto label_1f3730;
            case 0x1F3758u: goto label_1f3758;
            case 0x1F378Cu: goto label_1f378c;
            case 0x1F3790u: goto label_1f3790;
            case 0x1F3794u: goto label_1f3794;
            case 0x1F37A8u: goto label_1f37a8;
            case 0x1F37B0u: goto label_1f37b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F37C8u;
}
