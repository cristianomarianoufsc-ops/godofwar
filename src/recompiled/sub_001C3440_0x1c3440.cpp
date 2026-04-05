#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C3440
// Address: 0x1c3440 - 0x1c3690
void sub_001C3440_0x1c3440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3440_0x1c3440");
#endif

    ctx->pc = 0x1c3440u;

    // 0x1c3440: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c3440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c3444: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1c3444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1c3448: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1c3448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1c344c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c344cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3450: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1c3450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1c3454: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c3454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c3458: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c3458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c345c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x1c345cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1c3460: 0x54400085  bnel        $v0, $zero, . + 4 + (0x85 << 2)
    ctx->pc = 0x1C3460u;
    {
        const bool branch_taken_0x1c3460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3460) {
            ctx->pc = 0x1C3464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3460u;
            // 0x1c3464: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3678u;
            goto label_1c3678;
        }
    }
    ctx->pc = 0x1C3468u;
    // 0x1c3468: 0x8e020310  lw          $v0, 0x310($s0)
    ctx->pc = 0x1c3468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1c346c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1c346cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x1c3470: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c3470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c3474: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x1C3474u;
    {
        const bool branch_taken_0x1c3474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3474u;
            // 0x1c3478: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3474) {
            ctx->pc = 0x1C3674u;
            goto label_1c3674;
        }
    }
    ctx->pc = 0x1C347Cu;
    // 0x1c347c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C347Cu;
    {
        const bool branch_taken_0x1c347c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c347c) {
            ctx->pc = 0x1C3480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C347Cu;
            // 0x1c3480: 0x8e020324  lw          $v0, 0x324($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3494u;
            goto label_1c3494;
        }
    }
    ctx->pc = 0x1C3484u;
    // 0x1c3484: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1c3484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1c3488: 0x5040007b  beql        $v0, $zero, . + 4 + (0x7B << 2)
    ctx->pc = 0x1C3488u;
    {
        const bool branch_taken_0x1c3488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3488) {
            ctx->pc = 0x1C348Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3488u;
            // 0x1c348c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3678u;
            goto label_1c3678;
        }
    }
    ctx->pc = 0x1C3490u;
    // 0x1c3490: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x1c3490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
label_1c3494:
    // 0x1c3494: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1c3494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c3498: 0x54400077  bnel        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x1C3498u;
    {
        const bool branch_taken_0x1c3498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3498) {
            ctx->pc = 0x1C349Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3498u;
            // 0x1c349c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3678u;
            goto label_1c3678;
        }
    }
    ctx->pc = 0x1C34A0u;
    // 0x1c34a0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c34a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c34a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c34a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c34a8: 0x54400073  bnel        $v0, $zero, . + 4 + (0x73 << 2)
    ctx->pc = 0x1C34A8u;
    {
        const bool branch_taken_0x1c34a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c34a8) {
            ctx->pc = 0x1C34ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C34A8u;
            // 0x1c34ac: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3678u;
            goto label_1c3678;
        }
    }
    ctx->pc = 0x1C34B0u;
    // 0x1c34b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c34b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c34b4: 0xc070cd4  jal         func_1C3350
    ctx->pc = 0x1C34B4u;
    SET_GPR_U32(ctx, 31, 0x1C34BCu);
    ctx->pc = 0x1C34B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C34B4u;
            // 0x1c34b8: 0x3c110030  lui         $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3350u;
    if (runtime->hasFunction(0x1C3350u)) {
        auto targetFn = runtime->lookupFunction(0x1C3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34BCu; }
        if (ctx->pc != 0x1C34BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3350_0x1c3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34BCu; }
        if (ctx->pc != 0x1C34BCu) { return; }
    }
    ctx->pc = 0x1C34BCu;
    // 0x1c34bc: 0x8e224f44  lw          $v0, 0x4F44($s1)
    ctx->pc = 0x1c34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20292)));
    // 0x1c34c0: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x1C34C0u;
    {
        const bool branch_taken_0x1c34c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C34C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C34C0u;
            // 0x1c34c4: 0x26020050  addiu       $v0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c34c0) {
            ctx->pc = 0x1C3674u;
            goto label_1c3674;
        }
    }
    ctx->pc = 0x1C34C8u;
    // 0x1c34c8: 0xda010120  lqc2        $vf1, 0x120($s0)
    ctx->pc = 0x1c34c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1c34cc: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x1c34ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c34d0: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x1c34d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c34d4: 0x4be11099  vmuly.xyzw  $vf2, $vf2, $vf1y
    ctx->pc = 0x1c34d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c34d8: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1c34d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c34dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c34e0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c34e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c34e4: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1c34e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c34e8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1c34e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1c34ec: 0x245227f0  addiu       $s2, $v0, 0x27F0
    ctx->pc = 0x1c34ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 10224));
    // 0x1c34f0: 0x3c02404c  lui         $v0, 0x404C
    ctx->pc = 0x1c34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16460 << 16));
    // 0x1c34f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c34f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c34f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c34f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c34fc: 0xda430000  lqc2        $vf3, 0x0($s2)
    ctx->pc = 0x1c34fcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c3500: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1c3500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c3504: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1c3504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1c3508: 0x24422800  addiu       $v0, $v0, 0x2800
    ctx->pc = 0x1c3508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10240));
    // 0x1c350c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c350cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3510: 0x8e070258  lw          $a3, 0x258($s0)
    ctx->pc = 0x1c3510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1c3514: 0x3c030430  lui         $v1, 0x430
    ctx->pc = 0x1c3514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1072 << 16));
    // 0x1c3518: 0x3c020903  lui         $v0, 0x903
    ctx->pc = 0x1c3518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2307 << 16));
    // 0x1c351c: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x1c351cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1c3520: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x1c3520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x1c3524: 0x3c03ff94  lui         $v1, 0xFF94
    ctx->pc = 0x1c3524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65428 << 16));
    // 0x1c3528: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1c3528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1c352c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1c352cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1c3530: 0x4be22168  vadd.xyzw   $vf5, $vf4, $vf2
    ctx->pc = 0x1c3530u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1c3534: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x1c3534u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c3538: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1c3538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1c353c: 0x3463e00c  ori         $v1, $v1, 0xE00C
    ctx->pc = 0x1c353cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57356);
    // 0x1c3540: 0x24a2f170  addiu       $v0, $a1, -0xE90
    ctx->pc = 0x1c3540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x1c3544: 0x8c84bcf8  lw          $a0, -0x4308($a0)
    ctx->pc = 0x1c3544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950136)));
    // 0x1c3548: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1c3548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c354c: 0xaca3f170  sw          $v1, -0xE90($a1)
    ctx->pc = 0x1c354cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963568), GPR_U32(ctx, 3));
    // 0x1c3550: 0x4be308a8  vadd.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1c3550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3554: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x1c3554u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1c3558: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x1c3558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x1c355c: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x1c355cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c3560: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x1c3560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x1c3564: 0xac490014  sw          $t1, 0x14($v0)
    ctx->pc = 0x1c3564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 9));
    // 0x1c3568: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1c3568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1c356c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1c356cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1c3570: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1c3570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1c3574: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1c3574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1c3578: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1c3578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1c357c: 0xc047864  jal         func_11E190
    ctx->pc = 0x1C357Cu;
    SET_GPR_U32(ctx, 31, 0x1C3584u);
    ctx->pc = 0x1C3580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C357Cu;
            // 0x1c3580: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3584u; }
        if (ctx->pc != 0x1C3584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3584u; }
        if (ctx->pc != 0x1C3584u) { return; }
    }
    ctx->pc = 0x1C3584u;
    // 0x1c3584: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1C3584u;
    {
        const bool branch_taken_0x1c3584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3584u;
            // 0x1c3588: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3584) {
            ctx->pc = 0x1C3650u;
            goto label_1c3650;
        }
    }
    ctx->pc = 0x1C358Cu;
    // 0x1c358c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c3590: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1c3590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1c3594: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3594u;
    {
        const bool branch_taken_0x1c3594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3594u;
            // 0x1c3598: 0x8e224f44  lw          $v0, 0x4F44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3594) {
            ctx->pc = 0x1C35B8u;
            goto label_1c35b8;
        }
    }
    ctx->pc = 0x1C359Cu;
    // 0x1c359c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1c359cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x1c35a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c35a4: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1c35a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1c35a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c35a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c35ac: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C35ACu;
    {
        const bool branch_taken_0x1c35ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C35B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C35ACu;
            // 0x1c35b0: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35ac) {
            ctx->pc = 0x1C3650u;
            goto label_1c3650;
        }
    }
    ctx->pc = 0x1C35B4u;
    // 0x1c35b4: 0x0  nop
    ctx->pc = 0x1c35b4u;
    // NOP
label_1c35b8:
    // 0x1c35b8: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1c35b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c35bc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1c35bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c35c0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1c35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1c35c4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1c35c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1c35c8: 0x244227e0  addiu       $v0, $v0, 0x27E0
    ctx->pc = 0x1c35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10208));
    // 0x1c35cc: 0x8c694f4c  lw          $t1, 0x4F4C($v1)
    ctx->pc = 0x1c35ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20300)));
    // 0x1c35d0: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1c35d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c35d4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1c35d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1c35d8: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x1c35d8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c35dc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1c35dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1c35e0: 0x8c684f48  lw          $t0, 0x4F48($v1)
    ctx->pc = 0x1c35e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20296)));
    // 0x1c35e4: 0x8e254f44  lw          $a1, 0x4F44($s1)
    ctx->pc = 0x1c35e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20292)));
    // 0x1c35e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c35e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35ec: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x1c35ecu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c35f0: 0xc070a34  jal         func_1C28D0
    ctx->pc = 0x1C35F0u;
    SET_GPR_U32(ctx, 31, 0x1C35F8u);
    ctx->pc = 0x1C35F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C35F0u;
            // 0x1c35f4: 0x31290001  andi        $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C28D0u;
    if (runtime->hasFunction(0x1C28D0u)) {
        auto targetFn = runtime->lookupFunction(0x1C28D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35F8u; }
        if (ctx->pc != 0x1C35F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C28D0_0x1c28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35F8u; }
        if (ctx->pc != 0x1C35F8u) { return; }
    }
    ctx->pc = 0x1C35F8u;
    // 0x1c35f8: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c35f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c35fc: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1c35fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1c3600: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1c3600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1c3604: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c3604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c3608: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c3608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c360c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c360cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3610: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c3610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c3614: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1c3614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1c3618: 0x342138da  ori         $at, $at, 0x38DA
    ctx->pc = 0x1c3618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14554);
    // 0x1c361c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c361cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3620: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1c3620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x1c3624: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1c3624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3628: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1c3628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1c362c: 0xe6000150  swc1        $f0, 0x150($s0)
    ctx->pc = 0x1c362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
    // 0x1c3630: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c3630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c3634: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c3634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1c3638: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c3638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c363c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x1c363cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1c3640: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c3640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c3644: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1c3644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x1c3648: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x1c3648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x1c364c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1c364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_1c3650:
    // 0x1c3650: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x1c3650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1c3654: 0x78450030  lq          $a1, 0x30($v0)
    ctx->pc = 0x1c3654u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c3658: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1c3658u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c365c: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x1c365cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c3660: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1c3660u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1c3664: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1c3664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x1c3668: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x1c3668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x1c366c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1c366cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1c3670: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x1c3670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
label_1c3674:
    // 0x1c3674: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1c3674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c3678:
    // 0x1c3678: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1c3678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c367c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1c367cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3680: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c3680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3684: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3684u;
            // 0x1c3688: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C3494u: goto label_1c3494;
            case 0x1C35B8u: goto label_1c35b8;
            case 0x1C3650u: goto label_1c3650;
            case 0x1C3674u: goto label_1c3674;
            case 0x1C3678u: goto label_1c3678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C368Cu;
    // 0x1c368c: 0x0  nop
    ctx->pc = 0x1c368cu;
    // NOP
}
