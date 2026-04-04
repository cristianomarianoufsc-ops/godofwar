#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001754E8
// Address: 0x1754e8 - 0x1755e0
void sub_001754E8_0x1754e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001754E8_0x1754e8");
#endif

    ctx->pc = 0x1754e8u;

    // 0x1754e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1754e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1754ec: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1754ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1754f0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1754f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1754f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1754f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1754f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1754f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1754fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1754fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175500: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x175500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x175504: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x175504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x175508: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x175508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17550c: 0x8d120000  lw          $s2, 0x0($t0)
    ctx->pc = 0x17550cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x175510: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x175510u;
    {
        const bool branch_taken_0x175510 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x175514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175510u;
            // 0x175514: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175510) {
            ctx->pc = 0x175520u;
            goto label_175520;
        }
    }
    ctx->pc = 0x175518u;
    // 0x175518: 0xc05d514  jal         func_175450
    ctx->pc = 0x175518u;
    SET_GPR_U32(ctx, 31, 0x175520u);
    ctx->pc = 0x175450u;
    if (runtime->hasFunction(0x175450u)) {
        auto targetFn = runtime->lookupFunction(0x175450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175520u; }
        if (ctx->pc != 0x175520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175450_0x1754e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175520u; }
        if (ctx->pc != 0x175520u) { return; }
    }
    ctx->pc = 0x175520u;
label_175520:
    // 0x175520: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x175520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x175524: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175528: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x175528u;
    {
        const bool branch_taken_0x175528 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17552Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175528u;
            // 0x17552c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175528) {
            ctx->pc = 0x1755BCu;
            goto label_1755bc;
        }
    }
    ctx->pc = 0x175530u;
    // 0x175530: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x175530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175534: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x175534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_175538:
    // 0x175538: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x175538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17553c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17553cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175540: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x175540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x175544: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x175544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x175548: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x175548u;
    {
        const bool branch_taken_0x175548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17554Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175548u;
            // 0x17554c: 0xdba10010  lqc2        $vf1, 0x10($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175548) {
            ctx->pc = 0x1755A8u;
            goto label_1755a8;
        }
    }
    ctx->pc = 0x175550u;
    // 0x175550: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x175550u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175554: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x175554u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175558: 0x4bc2186c  vsub.xyz    $vf1, $vf3, $vf2
    ctx->pc = 0x175558u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17555c: 0x4a221868  vadd.w      $vf1, $vf3, $vf2
    ctx->pc = 0x17555cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x175560: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x175560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x175564: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x175564u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x175568: 0x4be00053  vmaxw.xyzw  $vf1, $vf0, $vf0w
    ctx->pc = 0x175568u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17556c: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x17556cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x175570: 0x4b0208be  vmaddaz.x   $ACC, $vf1, $vf2z
    ctx->pc = 0x175570u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x175574: 0x4b02084f  vmsubw.x    $vf1, $vf1, $vf2w
    ctx->pc = 0x175574u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x175578: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x175578u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17557c: 0x717c3  sra         $v0, $a3, 31
    ctx->pc = 0x17557cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 31));
    // 0x175580: 0x443000a  bgezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x175580u;
    {
        const bool branch_taken_0x175580 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x175580) {
            ctx->pc = 0x175584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175580u;
            // 0x175584: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1755ACu;
            goto label_1755ac;
        }
    }
    ctx->pc = 0x175588u;
    // 0x175588: 0x93102a  slt         $v0, $a0, $s3
    ctx->pc = 0x175588u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x17558c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17558Cu;
    {
        const bool branch_taken_0x17558c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17558Cu;
            // 0x175590: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17558c) {
            ctx->pc = 0x1755C0u;
            goto label_1755c0;
        }
    }
    ctx->pc = 0x175594u;
    // 0x175594: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x175594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x175598: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x175598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17559c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x17559cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1755a0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1755a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1755a4: 0x0  nop
    ctx->pc = 0x1755a4u;
    // NOP
label_1755a8:
    // 0x1755a8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1755a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1755ac:
    // 0x1755ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1755acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1755b0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1755b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1755b4: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1755B4u;
    {
        const bool branch_taken_0x1755b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1755b4) {
            ctx->pc = 0x1755B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1755B4u;
            // 0x1755b8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175538u;
            runtime->cooperativeGuestYield();
            goto label_175538;
        }
    }
    ctx->pc = 0x1755BCu;
label_1755bc:
    // 0x1755bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1755bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1755c0:
    // 0x1755c0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1755c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1755c4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1755c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1755c8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1755c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1755cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1755ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1755d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1755d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1755d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1755D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1755D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1755D4u;
            // 0x1755d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175520u: goto label_175520;
            case 0x175538u: goto label_175538;
            case 0x1755A8u: goto label_1755a8;
            case 0x1755ACu: goto label_1755ac;
            case 0x1755BCu: goto label_1755bc;
            case 0x1755C0u: goto label_1755c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1755DCu;
    // 0x1755dc: 0x0  nop
    ctx->pc = 0x1755dcu;
    // NOP
}
