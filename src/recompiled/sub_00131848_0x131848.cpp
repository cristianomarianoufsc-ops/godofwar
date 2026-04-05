#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131848
// Address: 0x131848 - 0x131960
void sub_00131848_0x131848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131848_0x131848");
#endif

    ctx->pc = 0x131848u;

    // 0x131848: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x131848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13184c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x13184cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x131850: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x131850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x131854: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x131854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131858: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x131858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x13185c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13185cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x131860: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x131860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x131864: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x131864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x131868: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x131868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x13186c: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13186Cu;
    {
        const bool branch_taken_0x13186c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x131870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13186Cu;
            // 0x131870: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13186c) {
            ctx->pc = 0x13187Cu;
            goto label_13187c;
        }
    }
    ctx->pc = 0x131874u;
    // 0x131874: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x131874u;
    {
        const bool branch_taken_0x131874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131874u;
            // 0x131878: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131874) {
            ctx->pc = 0x13188Cu;
            goto label_13188c;
        }
    }
    ctx->pc = 0x13187Cu;
label_13187c:
    // 0x13187c: 0x94620086  lhu         $v0, 0x86($v1)
    ctx->pc = 0x13187cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 134)));
    // 0x131880: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x131880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x131884: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x131884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x131888: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x131888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13188c:
    // 0x13188c: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x13188cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x131890: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x131890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x131894: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131894u;
    {
        const bool branch_taken_0x131894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x131898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131894u;
            // 0x131898: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131894) {
            ctx->pc = 0x1318A4u;
            goto label_1318a4;
        }
    }
    ctx->pc = 0x13189Cu;
    // 0x13189c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13189Cu;
    {
        const bool branch_taken_0x13189c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1318A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13189Cu;
            // 0x1318a0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13189c) {
            ctx->pc = 0x1318C0u;
            goto label_1318c0;
        }
    }
    ctx->pc = 0x1318A4u;
label_1318a4:
    // 0x1318a4: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1318a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1318a8: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1318a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1318ac: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1318ACu;
    {
        const bool branch_taken_0x1318ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1318B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1318ACu;
            // 0x1318b0: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1318ac) {
            ctx->pc = 0x1318C0u;
            goto label_1318c0;
        }
    }
    ctx->pc = 0x1318B4u;
    // 0x1318b4: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1318B4u;
    SET_GPR_U32(ctx, 31, 0x1318BCu);
    ctx->pc = 0x1318B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1318B4u;
            // 0x1318b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1318BCu; }
        if (ctx->pc != 0x1318BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1318BCu; }
        if (ctx->pc != 0x1318BCu) { return; }
    }
    ctx->pc = 0x1318BCu;
    // 0x1318bc: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1318bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1318c0:
    // 0x1318c0: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x1318c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1318c4: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1318c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1318c8: 0xd8870010  lqc2        $vf7, 0x10($a0)
    ctx->pc = 0x1318c8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1318cc: 0xd8880020  lqc2        $vf8, 0x20($a0)
    ctx->pc = 0x1318ccu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1318d0: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1318d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1318d4: 0xda260030  lqc2        $vf6, 0x30($s1)
    ctx->pc = 0x1318d4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1318d8: 0xda210010  lqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1318d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1318dc: 0xda230020  lqc2        $vf3, 0x20($s1)
    ctx->pc = 0x1318dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1318e0: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x1318e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1318e4: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1318e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1318e8: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1318e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1318ec: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x1318ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1318f0: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x1318f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1318f4: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1318f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1318f8: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1318f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1318fc: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1318fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x131900: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x131900u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x131904: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x131904u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x131908: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x131908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13190c: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x13190cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x131910: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x131910u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x131914: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x131914u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x131918: 0x4be629bc  vmulax.xyzw $ACC, $vf5, $vf6x
    ctx->pc = 0x131918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13191c: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x13191cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x131920: 0x4be638bd  vmadday.xyzw $ACC, $vf7, $vf6y
    ctx->pc = 0x131920u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x131924: 0x4be640be  vmaddaz.xyzw $ACC, $vf8, $vf6z
    ctx->pc = 0x131924u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x131928: 0x4be6210b  vmaddw.xyzw $vf4, $vf4, $vf6w
    ctx->pc = 0x131928u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13192c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x13192cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131930: 0xfa420000  sqc2        $vf2, 0x0($s2)
    ctx->pc = 0x131930u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x131934: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x131934u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x131938: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x131938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13193c: 0xfa430020  sqc2        $vf3, 0x20($s2)
    ctx->pc = 0x13193cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x131940: 0xfa440030  sqc2        $vf4, 0x30($s2)
    ctx->pc = 0x131940u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131944: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x131944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x131948: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x131948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13194c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x13194cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x131950: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x131950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131954: 0x3e00008  jr          $ra
    ctx->pc = 0x131954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131954u;
            // 0x131958: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13187Cu: goto label_13187c;
            case 0x13188Cu: goto label_13188c;
            case 0x1318A4u: goto label_1318a4;
            case 0x1318C0u: goto label_1318c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13195Cu;
    // 0x13195c: 0x0  nop
    ctx->pc = 0x13195cu;
    // NOP
}
