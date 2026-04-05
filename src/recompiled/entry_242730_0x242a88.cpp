#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_242730
// Address: 0x242730 - 0x242a88
void entry_242730_0x242a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_242730_0x242a88");
#endif

    ctx->pc = 0x242730u;

    // 0x242730: 0x3e00008  jr          $ra
    ctx->pc = 0x242730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242730u;
            // 0x242734: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242738u;
    // 0x242738: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x242738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24273c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x24273cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x242740: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x242740u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x242744: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x242744u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x242748: 0x3e00008  jr          $ra
    ctx->pc = 0x242748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24274Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242748u;
            // 0x24274c: 0x48220800  qmfc2.ni    $v0, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242750u;
    // 0x242750: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x242750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x242754: 0x0  nop
    ctx->pc = 0x242754u;
    // NOP
    // 0x242758: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x242758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x24275c: 0x0  nop
    ctx->pc = 0x24275cu;
    // NOP
    // 0x242760: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x242760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x242764: 0x0  nop
    ctx->pc = 0x242764u;
    // NOP
    // 0x242768: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x242768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x24276c: 0x0  nop
    ctx->pc = 0x24276cu;
    // NOP
    // 0x242770: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x242770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x242774: 0x0  nop
    ctx->pc = 0x242774u;
    // NOP
    // 0x242778: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x242778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x24277c: 0x0  nop
    ctx->pc = 0x24277cu;
    // NOP
    // 0x242780: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x242780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x242784: 0x0  nop
    ctx->pc = 0x242784u;
    // NOP
    // 0x242788: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x242788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x24278c: 0x0  nop
    ctx->pc = 0x24278cu;
    // NOP
    // 0x242790: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x242790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x242794: 0x0  nop
    ctx->pc = 0x242794u;
    // NOP
    // 0x242798: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x242798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x24279c: 0x0  nop
    ctx->pc = 0x24279cu;
    // NOP
    // 0x2427a0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2427a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2427a4: 0x0  nop
    ctx->pc = 0x2427a4u;
    // NOP
    // 0x2427a8: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x2427a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x2427ac: 0x0  nop
    ctx->pc = 0x2427acu;
    // NOP
    // 0x2427b0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2427b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2427b4: 0x0  nop
    ctx->pc = 0x2427b4u;
    // NOP
    // 0x2427b8: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x2427b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x2427bc: 0x0  nop
    ctx->pc = 0x2427bcu;
    // NOP
    // 0x2427c0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2427c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2427c4: 0x0  nop
    ctx->pc = 0x2427c4u;
    // NOP
    // 0x2427c8: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x2427c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x2427cc: 0x0  nop
    ctx->pc = 0x2427ccu;
    // NOP
    // 0x2427d0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2427d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2427d4: 0x0  nop
    ctx->pc = 0x2427d4u;
    // NOP
    // 0x2427d8: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x2427d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x2427dc: 0x0  nop
    ctx->pc = 0x2427dcu;
    // NOP
    // 0x2427e0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2427e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2427e4: 0x0  nop
    ctx->pc = 0x2427e4u;
    // NOP
    // 0x2427e8: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x2427e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x2427ec: 0x0  nop
    ctx->pc = 0x2427ecu;
    // NOP
    // 0x2427f0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2427f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2427f4: 0x0  nop
    ctx->pc = 0x2427f4u;
    // NOP
    // 0x2427f8: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x2427f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x2427fc: 0x0  nop
    ctx->pc = 0x2427fcu;
    // NOP
    // 0x242800: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x242800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x242804: 0x0  nop
    ctx->pc = 0x242804u;
    // NOP
    // 0x242808: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x242808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x24280c: 0x0  nop
    ctx->pc = 0x24280cu;
    // NOP
    // 0x242810: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x242810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x242814: 0x0  nop
    ctx->pc = 0x242814u;
    // NOP
    // 0x242818: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x242818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x24281c: 0x0  nop
    ctx->pc = 0x24281cu;
    // NOP
    // 0x242820: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x242820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x242824: 0x0  nop
    ctx->pc = 0x242824u;
    // NOP
    // 0x242828: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x242828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x24282c: 0x0  nop
    ctx->pc = 0x24282cu;
    // NOP
    // 0x242830: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x242830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x242834: 0x0  nop
    ctx->pc = 0x242834u;
    // NOP
    // 0x242838: 0xac850174  sw          $a1, 0x174($a0)
    ctx->pc = 0x242838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 5));
    // 0x24283c: 0x0  nop
    ctx->pc = 0x24283cu;
    // NOP
    // 0x242840: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x242840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x242844: 0x0  nop
    ctx->pc = 0x242844u;
    // NOP
    // 0x242848: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x242848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x24284c: 0x0  nop
    ctx->pc = 0x24284cu;
    // NOP
    // 0x242850: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x242850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x242854: 0x0  nop
    ctx->pc = 0x242854u;
    // NOP
    // 0x242858: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x242858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x24285c: 0x0  nop
    ctx->pc = 0x24285cu;
    // NOP
    // 0x242860: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x242860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x242864: 0x0  nop
    ctx->pc = 0x242864u;
    // NOP
    // 0x242868: 0x3042004c  andi        $v0, $v0, 0x4C
    ctx->pc = 0x242868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)76);
    // 0x24286c: 0x0  nop
    ctx->pc = 0x24286cu;
    // NOP
    // 0x242870: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x242870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x242874: 0x0  nop
    ctx->pc = 0x242874u;
    // NOP
    // 0x242878: 0x30420380  andi        $v0, $v0, 0x380
    ctx->pc = 0x242878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)896);
    // 0x24287c: 0x0  nop
    ctx->pc = 0x24287cu;
    // NOP
    // 0x242880: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x242880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x242884: 0x0  nop
    ctx->pc = 0x242884u;
    // NOP
    // 0x242888: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x242888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x24288c: 0x0  nop
    ctx->pc = 0x24288cu;
    // NOP
    // 0x242890: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x242890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x242894: 0x0  nop
    ctx->pc = 0x242894u;
    // NOP
    // 0x242898: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x242898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24289c: 0x0  nop
    ctx->pc = 0x24289cu;
    // NOP
    // 0x2428a0: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x2428a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
    // 0x2428a4: 0x0  nop
    ctx->pc = 0x2428a4u;
    // NOP
    // 0x2428a8: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x2428a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x2428ac: 0x0  nop
    ctx->pc = 0x2428acu;
    // NOP
    // 0x2428b0: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x2428b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x2428b4: 0x0  nop
    ctx->pc = 0x2428b4u;
    // NOP
    // 0x2428b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2428B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2428BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2428B8u;
            // 0x2428bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2428C0u;
    // 0x2428c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2428C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2428C8u;
    // 0x2428c8: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x2428c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2428cc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2428ccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2428d0: 0x70a310a8  pceqw       $v0, $a1, $v1
    ctx->pc = 0x2428d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x2428d4: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x2428d4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2428d8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2428d8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2428dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2428dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2428e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2428e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2428e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2428e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2428e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2428E8u;
    {
        const bool branch_taken_0x2428e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2428e8) {
            ctx->pc = 0x242908u;
            goto label_242908;
        }
    }
    ctx->pc = 0x2428F0u;
    // 0x2428f0: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x2428f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x2428f4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x2428f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x2428f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2428f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2428fc: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x2428fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x242900: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x242900u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x242904: 0x0  nop
    ctx->pc = 0x242904u;
    // NOP
label_242908:
    // 0x242908: 0x3e00008  jr          $ra
    ctx->pc = 0x242908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24290Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242908u;
            // 0x24290c: 0x7c8500f0  sq          $a1, 0xF0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 240), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242910u;
    // 0x242910: 0x3e00008  jr          $ra
    ctx->pc = 0x242910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242918u;
    // 0x242918: 0x3e00008  jr          $ra
    ctx->pc = 0x242918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242920u;
    // 0x242920: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x242920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x242924: 0x0  nop
    ctx->pc = 0x242924u;
    // NOP
    // 0x242928: 0x3e00008  jr          $ra
    ctx->pc = 0x242928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242930u;
    // 0x242930: 0x3e00008  jr          $ra
    ctx->pc = 0x242930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242930u;
            // 0x242934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242938u;
    // 0x242938: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x242938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24293c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24293cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242940: 0x3e00008  jr          $ra
    ctx->pc = 0x242940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242948u;
    // 0x242948: 0x3e00008  jr          $ra
    ctx->pc = 0x242948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24294Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242948u;
            // 0x24294c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242950u;
    // 0x242950: 0x3e00008  jr          $ra
    ctx->pc = 0x242950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242950u;
            // 0x242954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242958u;
    // 0x242958: 0x3e00008  jr          $ra
    ctx->pc = 0x242958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24295Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242958u;
            // 0x24295c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242960u;
    // 0x242960: 0x3e00008  jr          $ra
    ctx->pc = 0x242960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242960u;
            // 0x242964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242968u;
    // 0x242968: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x242968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24296c: 0x0  nop
    ctx->pc = 0x24296cu;
    // NOP
    // 0x242970: 0xac860190  sw          $a2, 0x190($a0)
    ctx->pc = 0x242970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 6));
    // 0x242974: 0x0  nop
    ctx->pc = 0x242974u;
    // NOP
    // 0x242978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24297c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x24297cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x242980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242984: 0x2442a770  addiu       $v0, $v0, -0x5890
    ctx->pc = 0x242984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944624));
    // 0x242988: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x242988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x24298c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24298Cu;
    {
        const bool branch_taken_0x24298c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x242990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24298Cu;
            // 0x242990: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24298c) {
            ctx->pc = 0x24299Cu;
            goto label_24299c;
        }
    }
    ctx->pc = 0x242994u;
    // 0x242994: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x242994u;
    SET_GPR_U32(ctx, 31, 0x24299Cu);
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24299Cu; }
        if (ctx->pc != 0x24299Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24299Cu; }
        if (ctx->pc != 0x24299Cu) { return; }
    }
    ctx->pc = 0x24299Cu;
label_24299c:
    // 0x24299c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24299cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2429a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2429A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2429A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2429A0u;
            // 0x2429a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2429A8u;
    // 0x2429a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2429a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2429ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2429acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2429b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2429B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2429B8u;
    // 0x2429b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2429B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2429BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2429B8u;
            // 0x2429bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2429C0u;
    // 0x2429c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2429C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2429C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2429C0u;
            // 0x2429c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2429C8u;
    // 0x2429c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2429C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2429CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2429C8u;
            // 0x2429cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2429D0u;
    // 0x2429d0: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2429d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x2429d4: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x2429d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2429d8: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x2429d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x2429dc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2429dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2429e0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2429e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2429e4: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x2429e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2429e8: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x2429e8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x2429ec: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x2429ecu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2429f0: 0x700314a9  por         $v0, $zero, $v1
    ctx->pc = 0x2429f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x2429f4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2429f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2429f8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2429f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2429fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2429FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2429FCu;
            // 0x242a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242A04u;
    // 0x242a04: 0x0  nop
    ctx->pc = 0x242a04u;
    // NOP
    // 0x242a08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x242a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x242a0c: 0x0  nop
    ctx->pc = 0x242a0cu;
    // NOP
    // 0x242a10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x242a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x242a14: 0x0  nop
    ctx->pc = 0x242a14u;
    // NOP
    // 0x242a18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x242a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x242a1c: 0x0  nop
    ctx->pc = 0x242a1cu;
    // NOP
    // 0x242a20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x242a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x242a24: 0x0  nop
    ctx->pc = 0x242a24u;
    // NOP
    // 0x242a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x242a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x242a2c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x242a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x242a30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x242a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x242a34: 0x2442a670  addiu       $v0, $v0, -0x5990
    ctx->pc = 0x242a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944368));
    // 0x242a38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x242a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x242a3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x242a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242a44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x242a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a48: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x242a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x242a4c: 0xc077a14  jal         func_1DE850
    ctx->pc = 0x242A4Cu;
    SET_GPR_U32(ctx, 31, 0x242A54u);
    ctx->pc = 0x242A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242A4Cu;
            // 0x242a50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE850u;
    if (runtime->hasFunction(0x1DE850u)) {
        auto targetFn = runtime->lookupFunction(0x1DE850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242A54u; }
        if (ctx->pc != 0x242A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE850_0x1de850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242A54u; }
        if (ctx->pc != 0x242A54u) { return; }
    }
    ctx->pc = 0x242A54u;
    // 0x242a54: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x242a54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x242a58: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242A58u;
    {
        const bool branch_taken_0x242a58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x242A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242A58u;
            // 0x242a5c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a58) {
            ctx->pc = 0x242A6Cu;
            goto label_242a6c;
        }
    }
    ctx->pc = 0x242A60u;
    // 0x242a60: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x242A60u;
    SET_GPR_U32(ctx, 31, 0x242A68u);
    ctx->pc = 0x242A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242A60u;
            // 0x242a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242A68u; }
        if (ctx->pc != 0x242A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242A68u; }
        if (ctx->pc != 0x242A68u) { return; }
    }
    ctx->pc = 0x242A68u;
    // 0x242a68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x242a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_242a6c:
    // 0x242a6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x242a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242a74: 0x3e00008  jr          $ra
    ctx->pc = 0x242A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242A74u;
            // 0x242a78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242908u: goto label_242908;
            case 0x24299Cu: goto label_24299c;
            case 0x242A6Cu: goto label_242a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242A7Cu;
    // 0x242a7c: 0x0  nop
    ctx->pc = 0x242a7cu;
    // NOP
    // 0x242a80: 0x0  nop
    ctx->pc = 0x242a80u;
    // NOP
    // 0x242a84: 0x0  nop
    ctx->pc = 0x242a84u;
    // NOP
}
