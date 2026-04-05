#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002016A0
// Address: 0x2016a0 - 0x2018f8
void sub_002016A0_0x2016a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002016A0_0x2016a0");
#endif

    ctx->pc = 0x2016a0u;

    // 0x2016a0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2016a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2016a4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2016a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2016a8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2016a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x2016ac: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x2016acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2016b0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2016b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x2016b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2016b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016b8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2016b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x2016bc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2016bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2016c0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2016c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x2016c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2016c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016c8: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2016c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x2016cc: 0x700794a9  por         $s2, $zero, $a3
    ctx->pc = 0x2016ccu;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x2016d0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2016d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x2016d4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2016d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016d8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2016d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2016dc: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2016dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016e0: 0x8c44ed58  lw          $a0, -0x12A8($v0)
    ctx->pc = 0x2016e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x2016e4: 0x8e2b0024  lw          $t3, 0x24($s1)
    ctx->pc = 0x2016e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2016e8: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x2016e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x2016ec: 0xb15c2  srl         $v0, $t3, 23
    ctx->pc = 0x2016ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 23));
    // 0x2016f0: 0xae240030  sw          $a0, 0x30($s1)
    ctx->pc = 0x2016f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
    // 0x2016f4: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x2016f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2016f8: 0x7fa80070  sq          $t0, 0x70($sp)
    ctx->pc = 0x2016f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    // 0x2016fc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2016fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x201700: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x201700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201704: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x201704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201708: 0x144b0002  bne         $v0, $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x201708u;
    {
        const bool branch_taken_0x201708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x20170Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201708u;
            // 0x20170c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201708) {
            ctx->pc = 0x201714u;
            goto label_201714;
        }
    }
    ctx->pc = 0x201710u;
    // 0x201710: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x201710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_201714:
    // 0x201714: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x201714u;
    {
        const bool branch_taken_0x201714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201714u;
            // 0x201718: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201714) {
            ctx->pc = 0x201728u;
            goto label_201728;
        }
    }
    ctx->pc = 0x20171Cu;
    // 0x20171c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x20171cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x201720: 0x12620018  beq         $s3, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x201720u;
    {
        const bool branch_taken_0x201720 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x201724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201720u;
            // 0x201724: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201720) {
            ctx->pc = 0x201784u;
            goto label_201784;
        }
    }
    ctx->pc = 0x201728u;
label_201728:
    // 0x201728: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x201728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20172c: 0x8c441184  lw          $a0, 0x1184($v0)
    ctx->pc = 0x20172cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4484)));
    // 0x201730: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x201730u;
    SET_GPR_U32(ctx, 31, 0x201738u);
    ctx->pc = 0x201734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201730u;
            // 0x201734: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201738u; }
        if (ctx->pc != 0x201738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201738u; }
        if (ctx->pc != 0x201738u) { return; }
    }
    ctx->pc = 0x201738u;
    // 0x201738: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x201738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20173c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20173cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201740: 0xc08064c  jal         func_201930
    ctx->pc = 0x201740u;
    SET_GPR_U32(ctx, 31, 0x201748u);
    ctx->pc = 0x201744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201740u;
            // 0x201744: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201930u;
    if (runtime->hasFunction(0x201930u)) {
        auto targetFn = runtime->lookupFunction(0x201930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201748u; }
        if (ctx->pc != 0x201748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201930_0x201930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201748u; }
        if (ctx->pc != 0x201748u) { return; }
    }
    ctx->pc = 0x201748u;
    // 0x201748: 0x7ba60070  lq          $a2, 0x70($sp)
    ctx->pc = 0x201748u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20174c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x20174cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201750: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x201750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201754: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x201754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201758: 0x70122ca9  por         $a1, $zero, $s2
    ctx->pc = 0x201758u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x20175c: 0xc088354  jal         func_220D50
    ctx->pc = 0x20175Cu;
    SET_GPR_U32(ctx, 31, 0x201764u);
    ctx->pc = 0x201760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20175Cu;
            // 0x201760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220D50u;
    if (runtime->hasFunction(0x220D50u)) {
        auto targetFn = runtime->lookupFunction(0x220D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201764u; }
        if (ctx->pc != 0x201764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220D50_0x220d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201764u; }
        if (ctx->pc != 0x201764u) { return; }
    }
    ctx->pc = 0x201764u;
    // 0x201764: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x201764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x201768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20176c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20176cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201770: 0xc0882dc  jal         func_220B70
    ctx->pc = 0x201770u;
    SET_GPR_U32(ctx, 31, 0x201778u);
    ctx->pc = 0x201774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201770u;
            // 0x201774: 0x8ea601a0  lw          $a2, 0x1A0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220B70u;
    if (runtime->hasFunction(0x220B70u)) {
        auto targetFn = runtime->lookupFunction(0x220B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201778u; }
        if (ctx->pc != 0x201778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220B70_0x220b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201778u; }
        if (ctx->pc != 0x201778u) { return; }
    }
    ctx->pc = 0x201778u;
    // 0x201778: 0xae33002c  sw          $s3, 0x2C($s1)
    ctx->pc = 0x201778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 19));
    // 0x20177c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x20177Cu;
    {
        const bool branch_taken_0x20177c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20177Cu;
            // 0x201780: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20177c) {
            ctx->pc = 0x2018D0u;
            goto label_2018d0;
        }
    }
    ctx->pc = 0x201784u;
label_201784:
    // 0x201784: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x201784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x201788: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x201788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x20178c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x20178cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x201790: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x201790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x201794: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x201794u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x201798: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x201798u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20179c: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x20179cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x2017a0: 0x4a450840  vaddx.z     $vf1, $vf1, $vf5x
    ctx->pc = 0x2017a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2017a4: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x2017a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2017a8: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x2017a8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x2017ac: 0x4bc2086e  vopmsub.xyz $vf1, $vf1, $vf2
    ctx->pc = 0x2017acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2017b0: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x2017b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2017b4: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x2017b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2017b8: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x2017b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2017bc: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x2017bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2017c0: 0x4be30b3c  vmove.xyzw  $vf3, $vf1
    ctx->pc = 0x2017c0u;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
    // 0x2017c4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2017c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2017c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2017c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2017cc: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x2017ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2017d0: 0x4a0002ff  vnop
    ctx->pc = 0x2017d0u;
    // NOP operation, no action needed for VU0
    // 0x2017d4: 0x4a0002ff  vnop
    ctx->pc = 0x2017d4u;
    // NOP operation, no action needed for VU0
    // 0x2017d8: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x2017d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2017dc: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x2017dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2017e0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x2017e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2017e4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x2017e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2017e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2017e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2017ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2017ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2017f0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2017f0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2017f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2017f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2017f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2017f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2017fc: 0x0  nop
    ctx->pc = 0x2017fcu;
    // NOP
    // 0x201800: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x201800u;
    {
        const bool branch_taken_0x201800 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x201804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201800u;
            // 0x201804: 0x4be1233c  vmove.xyzw  $vf1, $vf4 (Delay Slot)
        ctx->vu0_vf[1] = ctx->vu0_vf[4];
        ctx->in_delay_slot = false;
        if (branch_taken_0x201800) {
            ctx->pc = 0x201848u;
            goto label_201848;
        }
    }
    ctx->pc = 0x201808u;
    // 0x201808: 0x4a850840  vaddx.y     $vf1, $vf1, $vf5x
    ctx->pc = 0x201808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20180c: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x20180cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x201810: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x201810u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x201814: 0x4bc2086e  vopmsub.xyz $vf1, $vf1, $vf2
    ctx->pc = 0x201814u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x201818: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x201818u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20181c: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x20181cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x201820: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x201820u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x201824: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x201824u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x201828: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x201828u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x20182c: 0x4a0003bf  vwaitq
    ctx->pc = 0x20182cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x201830: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x201830u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x201834: 0x4a0002ff  vnop
    ctx->pc = 0x201834u;
    // NOP operation, no action needed for VU0
    // 0x201838: 0x4a0002ff  vnop
    ctx->pc = 0x201838u;
    // NOP operation, no action needed for VU0
    // 0x20183c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x20183cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x201840: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x201840u;
    {
        const bool branch_taken_0x201840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201840u;
            // 0x201844: 0xfba10050  sqc2        $vf1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201840) {
            ctx->pc = 0x20184Cu;
            goto label_20184c;
        }
    }
    ctx->pc = 0x201848u;
label_201848:
    // 0x201848: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x201848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_20184c:
    // 0x20184c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x20184cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201850: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x201850u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201854: 0x4bc122fe  vopmula.xyz $ACC, $vf4, $vf1
    ctx->pc = 0x201854u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]);
    // 0x201858: 0x4bc4086e  vopmsub.xyz $vf1, $vf1, $vf4
    ctx->pc = 0x201858u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20185c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x20185cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x201860: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x201860u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x201864: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x201864u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x201868: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x201868u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20186c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x20186cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x201870: 0x4a0003bf  vwaitq
    ctx->pc = 0x201870u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x201874: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x201874u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x201878: 0x4a0002ff  vnop
    ctx->pc = 0x201878u;
    // NOP operation, no action needed for VU0
    // 0x20187c: 0x4a0002ff  vnop
    ctx->pc = 0x20187cu;
    // NOP operation, no action needed for VU0
    // 0x201880: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x201880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x201884: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x201884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x201888: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x201888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20188c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x20188cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x201890: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x201890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201894: 0xf8840020  sqc2        $vf4, 0x20($a0)
    ctx->pc = 0x201894u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x201898: 0xdcc5bdf8  ld          $a1, -0x4208($a2)
    ctx->pc = 0x201898u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x20189c: 0x84830060  lh          $v1, 0x60($a0)
    ctx->pc = 0x20189cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2018a0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2018a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2018a4: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x2018a4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x2018a8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2018a8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2018ac: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2018acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x2018b0: 0xa3380a  movz        $a3, $a1, $v1
    ctx->pc = 0x2018b0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x2018b4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2018b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018b8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2018b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2018bc: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x2018bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x2018c0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2018c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2018c4: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x2018c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x2018c8: 0xfcc5bdf8  sd          $a1, -0x4208($a2)
    ctx->pc = 0x2018c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 5));
    // 0x2018cc: 0xfc830068  sd          $v1, 0x68($a0)
    ctx->pc = 0x2018ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 3));
label_2018d0:
    // 0x2018d0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2018d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2018d4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2018d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2018d8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2018d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2018dc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2018dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2018e0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2018e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2018e4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2018e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2018e8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2018e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2018ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2018ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2018F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2018ECu;
            // 0x2018f0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201714u: goto label_201714;
            case 0x201728u: goto label_201728;
            case 0x201784u: goto label_201784;
            case 0x201848u: goto label_201848;
            case 0x20184Cu: goto label_20184c;
            case 0x2018D0u: goto label_2018d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2018F4u;
    // 0x2018f4: 0x0  nop
    ctx->pc = 0x2018f4u;
    // NOP
}
