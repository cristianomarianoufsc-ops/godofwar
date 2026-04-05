#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_175450
// Address: 0x175450 - 0x1754e8
void entry_175450_0x1754e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_175450_0x1754e8");
#endif

    ctx->pc = 0x175450u;

    // 0x175450: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x175450u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x175454: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x175454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x175458: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x175458u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17545c: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x17545Cu;
    {
        const bool branch_taken_0x17545c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x175460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17545Cu;
            // 0x175460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17545c) {
            ctx->pc = 0x1754E0u;
            goto label_1754e0;
        }
    }
    ctx->pc = 0x175464u;
    // 0x175464: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x175464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_175468:
    // 0x175468: 0x81140  sll         $v0, $t0, 5
    ctx->pc = 0x175468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x17546c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17546cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175470: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x175470u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175474: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x175474u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x175478: 0x4bc2206c  vsub.xyz    $vf1, $vf4, $vf2
    ctx->pc = 0x175478u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17547c: 0x4a222068  vadd.w      $vf1, $vf4, $vf2
    ctx->pc = 0x17547cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x175480: 0x4be30b3c  vmove.xyzw  $vf3, $vf1
    ctx->pc = 0x175480u;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
    // 0x175484: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x175484u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x175488: 0x4be00053  vmaxw.xyzw  $vf1, $vf0, $vf0w
    ctx->pc = 0x175488u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17548c: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x17548cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x175490: 0x4b0208be  vmaddaz.x   $ACC, $vf1, $vf2z
    ctx->pc = 0x175490u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x175494: 0x4b02084f  vmsubw.x    $vf1, $vf1, $vf2w
    ctx->pc = 0x175494u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x175498: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x175498u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17549c: 0x917c3  sra         $v0, $t1, 31
    ctx->pc = 0x17549cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 31));
    // 0x1754a0: 0x443000b  bgezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1754A0u;
    {
        const bool branch_taken_0x1754a0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1754a0) {
            ctx->pc = 0x1754A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1754A0u;
            // 0x1754a4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1754D0u;
            goto label_1754d0;
        }
    }
    ctx->pc = 0x1754A8u;
    // 0x1754a8: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x1754a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1754ac: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1754ACu;
    {
        const bool branch_taken_0x1754ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1754ac) {
            ctx->pc = 0x1754B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1754ACu;
            // 0x1754b0: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1754C0u;
            goto label_1754c0;
        }
    }
    ctx->pc = 0x1754B4u;
    // 0x1754b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1754B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1754B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1754B4u;
            // 0x1754b8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175468u: goto label_175468;
            case 0x1754C0u: goto label_1754c0;
            case 0x1754D0u: goto label_1754d0;
            case 0x1754E0u: goto label_1754e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1754BCu;
    // 0x1754bc: 0x0  nop
    ctx->pc = 0x1754bcu;
    // NOP
label_1754c0:
    // 0x1754c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1754c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1754c4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1754c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1754c8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1754c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1754cc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1754ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1754d0:
    // 0x1754d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1754d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1754d4: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x1754d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1754d8: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1754D8u;
    {
        const bool branch_taken_0x1754d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1754d8) {
            ctx->pc = 0x1754DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1754D8u;
            // 0x1754dc: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175468u;
            runtime->cooperativeGuestYield();
            goto label_175468;
        }
    }
    ctx->pc = 0x1754E0u;
label_1754e0:
    // 0x1754e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1754E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1754E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1754E0u;
            // 0x1754e4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175468u: goto label_175468;
            case 0x1754C0u: goto label_1754c0;
            case 0x1754D0u: goto label_1754d0;
            case 0x1754E0u: goto label_1754e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1754E8u;
}
