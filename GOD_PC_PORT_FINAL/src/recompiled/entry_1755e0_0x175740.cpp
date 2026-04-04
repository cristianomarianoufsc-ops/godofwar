#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1755e0
// Address: 0x1755e0 - 0x175740
void entry_1755e0_0x175740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1755e0_0x175740");
#endif

    ctx->pc = 0x1755e0u;

    // 0x1755e0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1755e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1755e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1755e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1755e8: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1755E8u;
    {
        const bool branch_taken_0x1755e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1755ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1755E8u;
            // 0x1755ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755e8) {
            ctx->pc = 0x175630u;
            goto label_175630;
        }
    }
    ctx->pc = 0x1755F0u;
    // 0x1755f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1755f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1755f4: 0x0  nop
    ctx->pc = 0x1755f4u;
    // NOP
label_1755f8:
    // 0x1755f8: 0x81140  sll         $v0, $t0, 5
    ctx->pc = 0x1755f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x1755fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1755fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175600: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x175600u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x175604: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x175604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x175608: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x175608u;
    {
        const bool branch_taken_0x175608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17560Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175608u;
            // 0x17560c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175608) {
            ctx->pc = 0x175618u;
            goto label_175618;
        }
    }
    ctx->pc = 0x175610u;
    // 0x175610: 0x8cea0020  lw          $t2, 0x20($a3)
    ctx->pc = 0x175610u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x175614: 0x0  nop
    ctx->pc = 0x175614u;
    // NOP
label_175618:
    // 0x175618: 0xac6a0018  sw          $t2, 0x18($v1)
    ctx->pc = 0x175618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 10));
    // 0x17561c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x17561cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x175620: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x175620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x175624: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x175624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175628: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x175628u;
    {
        const bool branch_taken_0x175628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175628) {
            ctx->pc = 0x17562Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175628u;
            // 0x17562c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1755F8u;
            runtime->cooperativeGuestYield();
            goto label_1755f8;
        }
    }
    ctx->pc = 0x175630u;
label_175630:
    // 0x175630: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x175630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x175634: 0x18e0003f  blez        $a3, . + 4 + (0x3F << 2)
    ctx->pc = 0x175634u;
    {
        const bool branch_taken_0x175634 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x175638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175634u;
            // 0x175638: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175634) {
            ctx->pc = 0x175734u;
            goto label_175734;
        }
    }
    ctx->pc = 0x17563Cu;
    // 0x17563c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_175640:
    // 0x175640: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x175640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x175644: 0x250c0001  addiu       $t4, $t0, 0x1
    ctx->pc = 0x175644u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x175648: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x175648u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17564c: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x17564cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175650: 0x187102a  slt         $v0, $t4, $a3
    ctx->pc = 0x175650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x175654: 0x8d6e0018  lw          $t6, 0x18($t3)
    ctx->pc = 0x175654u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x175658: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x175658u;
    {
        const bool branch_taken_0x175658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17565Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175658u;
            // 0x17565c: 0x8d6d0014  lw          $t5, 0x14($t3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175658) {
            ctx->pc = 0x175720u;
            goto label_175720;
        }
    }
    ctx->pc = 0x175660u;
    // 0x175660: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x175660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x175664: 0x0  nop
    ctx->pc = 0x175664u;
    // NOP
label_175668:
    // 0x175668: 0xa1140  sll         $v0, $t2, 5
    ctx->pc = 0x175668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x17566c: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x17566cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175670: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x175670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x175674: 0x1c21024  and         $v0, $t6, $v0
    ctx->pc = 0x175674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 2));
    // 0x175678: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x175678u;
    {
        const bool branch_taken_0x175678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175678) {
            ctx->pc = 0x17567Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175678u;
            // 0x17567c: 0xd9630000  lqc2        $vf3, 0x0($t3) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175694u;
            goto label_175694;
        }
    }
    ctx->pc = 0x175680u;
    // 0x175680: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x175680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x175684: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x175684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x175688: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x175688u;
    {
        const bool branch_taken_0x175688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175688) {
            ctx->pc = 0x17568Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175688u;
            // 0x17568c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175710u;
            goto label_175710;
        }
    }
    ctx->pc = 0x175690u;
    // 0x175690: 0xd9630000  lqc2        $vf3, 0x0($t3)
    ctx->pc = 0x175690u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
label_175694:
    // 0x175694: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x175694u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x175698: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x175698u;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x17569c: 0x4bc2186c  vsub.xyz    $vf1, $vf3, $vf2
    ctx->pc = 0x17569cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1756a0: 0x4a221868  vadd.w      $vf1, $vf3, $vf2
    ctx->pc = 0x1756a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1756a4: 0x4be40b3c  vmove.xyzw  $vf4, $vf1
    ctx->pc = 0x1756a4u;
    ctx->vu0_vf[4] = ctx->vu0_vf[1];
    // 0x1756a8: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x1756a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1756ac: 0x4be00053  vmaxw.xyzw  $vf1, $vf0, $vf0w
    ctx->pc = 0x1756acu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1756b0: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x1756b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x1756b4: 0x4b0208be  vmaddaz.x   $ACC, $vf1, $vf2z
    ctx->pc = 0x1756b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1756b8: 0x4b02084f  vmsubw.x    $vf1, $vf1, $vf2w
    ctx->pc = 0x1756b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1756bc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1756bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1756c0: 0x317c3  sra         $v0, $v1, 31
    ctx->pc = 0x1756c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 31));
    // 0x1756c4: 0x4430012  bgezl       $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1756C4u;
    {
        const bool branch_taken_0x1756c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1756c4) {
            ctx->pc = 0x1756C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1756C4u;
            // 0x1756c8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175710u;
            goto label_175710;
        }
    }
    ctx->pc = 0x1756CCu;
    // 0x1756cc: 0x25270001  addiu       $a3, $t1, 0x1
    ctx->pc = 0x1756ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1756d0: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x1756d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1756d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1756D4u;
    {
        const bool branch_taken_0x1756d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1756d4) {
            ctx->pc = 0x1756D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1756D4u;
            // 0x1756d8: 0x8d630010  lw          $v1, 0x10($t3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1756E8u;
            goto label_1756e8;
        }
    }
    ctx->pc = 0x1756DCu;
    // 0x1756dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1756DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1756E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1756DCu;
            // 0x1756e0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1755F8u: goto label_1755f8;
            case 0x175618u: goto label_175618;
            case 0x175630u: goto label_175630;
            case 0x175640u: goto label_175640;
            case 0x175668u: goto label_175668;
            case 0x175694u: goto label_175694;
            case 0x1756E8u: goto label_1756e8;
            case 0x175710u: goto label_175710;
            case 0x175720u: goto label_175720;
            case 0x175734u: goto label_175734;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1756E4u;
    // 0x1756e4: 0x0  nop
    ctx->pc = 0x1756e4u;
    // NOP
label_1756e8:
    // 0x1756e8: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x1756e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1756ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1756ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1756f0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1756f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1756f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1756f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1756f8: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x1756f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1756fc: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x1756fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x175700: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x175700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x175704: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x175704u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x175708: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x175708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17570c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x17570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_175710:
    // 0x175710: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x175710u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x175714: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x175714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175718: 0x5440ffd3  bnel        $v0, $zero, . + 4 + (-0x2D << 2)
    ctx->pc = 0x175718u;
    {
        const bool branch_taken_0x175718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175718) {
            ctx->pc = 0x17571Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175718u;
            // 0x17571c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175668u;
            runtime->cooperativeGuestYield();
            goto label_175668;
        }
    }
    ctx->pc = 0x175720u;
label_175720:
    // 0x175720: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x175720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x175724: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x175724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175728: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x175728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x17572c: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x17572Cu;
    {
        const bool branch_taken_0x17572c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17572c) {
            ctx->pc = 0x175730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17572Cu;
            // 0x175730: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175640u;
            runtime->cooperativeGuestYield();
            goto label_175640;
        }
    }
    ctx->pc = 0x175734u;
label_175734:
    // 0x175734: 0x3e00008  jr          $ra
    ctx->pc = 0x175734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175734u;
            // 0x175738: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1755F8u: goto label_1755f8;
            case 0x175618u: goto label_175618;
            case 0x175630u: goto label_175630;
            case 0x175640u: goto label_175640;
            case 0x175668u: goto label_175668;
            case 0x175694u: goto label_175694;
            case 0x1756E8u: goto label_1756e8;
            case 0x175710u: goto label_175710;
            case 0x175720u: goto label_175720;
            case 0x175734u: goto label_175734;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17573Cu;
    // 0x17573c: 0x0  nop
    ctx->pc = 0x17573cu;
    // NOP
}
