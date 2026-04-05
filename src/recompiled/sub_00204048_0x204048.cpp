#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00204048
// Address: 0x204048 - 0x204530
void sub_00204048_0x204048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204048_0x204048");
#endif

    ctx->pc = 0x204048u;

    // 0x204048: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x204048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
    // 0x20404c: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x20404cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
    // 0x204050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x204050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204054: 0x7fb403f0  sq          $s4, 0x3F0($sp)
    ctx->pc = 0x204054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 20));
    // 0x204058: 0x7fb10420  sq          $s1, 0x420($sp)
    ctx->pc = 0x204058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 17));
    // 0x20405c: 0x7fb20410  sq          $s2, 0x410($sp)
    ctx->pc = 0x20405cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 18));
    // 0x204060: 0x7fb30400  sq          $s3, 0x400($sp)
    ctx->pc = 0x204060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 19));
    // 0x204064: 0x7fb503e0  sq          $s5, 0x3E0($sp)
    ctx->pc = 0x204064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 21));
    // 0x204068: 0xffbf03d0  sd          $ra, 0x3D0($sp)
    ctx->pc = 0x204068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 976), GPR_U64(ctx, 31));
    // 0x20406c: 0xe7b50448  swc1        $f21, 0x448($sp)
    ctx->pc = 0x20406cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1096), bits); }
    // 0x204070: 0xc081be6  jal         func_206F98
    ctx->pc = 0x204070u;
    SET_GPR_U32(ctx, 31, 0x204078u);
    ctx->pc = 0x204074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204070u;
            // 0x204074: 0xe7b40440  swc1        $f20, 0x440($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x206F98u;
    if (runtime->hasFunction(0x206F98u)) {
        auto targetFn = runtime->lookupFunction(0x206F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204078u; }
        if (ctx->pc != 0x204078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206F98_0x206f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204078u; }
        if (ctx->pc != 0x204078u) { return; }
    }
    ctx->pc = 0x204078u;
    // 0x204078: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x204078u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20407c: 0x52800120  beql        $s4, $zero, . + 4 + (0x120 << 2)
    ctx->pc = 0x20407Cu;
    {
        const bool branch_taken_0x20407c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x20407c) {
            ctx->pc = 0x204080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20407Cu;
            // 0x204080: 0xae000084  sw          $zero, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204500u;
            goto label_204500;
        }
    }
    ctx->pc = 0x204084u;
    // 0x204084: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x204084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x204088: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x204088u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x20408c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x20408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x204090: 0x40f809  jalr        $v0
    ctx->pc = 0x204090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204098u);
        ctx->pc = 0x204094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204090u;
            // 0x204094: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204098u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204500u: goto label_204500;
            case 0x204504u: goto label_204504;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204098u; }
            if (ctx->pc != 0x204098u) { return; }
        }
        }
    }
    ctx->pc = 0x204098u;
    // 0x204098: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x204098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x20409c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x20409cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2040a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2040a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2040a4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2040a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2040a8: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x2040a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2040ac: 0x40f809  jalr        $v0
    ctx->pc = 0x2040ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2040B4u);
        ctx->pc = 0x2040B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2040ACu;
            // 0x2040b0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2040B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204500u: goto label_204500;
            case 0x204504u: goto label_204504;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2040B4u; }
            if (ctx->pc != 0x2040B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2040B4u;
    // 0x2040b4: 0x8c4200c8  lw          $v0, 0xC8($v0)
    ctx->pc = 0x2040b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x2040b8: 0x50400112  beql        $v0, $zero, . + 4 + (0x112 << 2)
    ctx->pc = 0x2040B8u;
    {
        const bool branch_taken_0x2040b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2040b8) {
            ctx->pc = 0x2040BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2040B8u;
            // 0x2040bc: 0x7bb00430  lq          $s0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204504u;
            goto label_204504;
        }
    }
    ctx->pc = 0x2040C0u;
    // 0x2040c0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2040c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2040c4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2040c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2040c8: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x2040c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2040cc: 0x40f809  jalr        $v0
    ctx->pc = 0x2040CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2040D4u);
        ctx->pc = 0x2040D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2040CCu;
            // 0x2040d0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2040D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204500u: goto label_204500;
            case 0x204504u: goto label_204504;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2040D4u; }
            if (ctx->pc != 0x2040D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2040D4u;
    // 0x2040d4: 0x8c4200c8  lw          $v0, 0xC8($v0)
    ctx->pc = 0x2040d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x2040d8: 0x5040010a  beql        $v0, $zero, . + 4 + (0x10A << 2)
    ctx->pc = 0x2040D8u;
    {
        const bool branch_taken_0x2040d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2040d8) {
            ctx->pc = 0x2040DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2040D8u;
            // 0x2040dc: 0x7bb00430  lq          $s0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204504u;
            goto label_204504;
        }
    }
    ctx->pc = 0x2040E0u;
    // 0x2040e0: 0x8e100048  lw          $s0, 0x48($s0)
    ctx->pc = 0x2040e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2040e4: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x2040e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2040e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2040e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2040ec: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2040ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2040f0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2040f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2040f4: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x2040f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2040f8: 0x40f809  jalr        $v0
    ctx->pc = 0x2040F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204100u);
        ctx->pc = 0x2040FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2040F8u;
            // 0x2040fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204100u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204500u: goto label_204500;
            case 0x204504u: goto label_204504;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204100u; }
            if (ctx->pc != 0x204100u) { return; }
        }
        }
    }
    ctx->pc = 0x204100u;
    // 0x204100: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x204100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x204104: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x204104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204108: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x204108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20410c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x20410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x204110: 0x40f809  jalr        $v0
    ctx->pc = 0x204110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204118u);
        ctx->pc = 0x204114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204110u;
            // 0x204114: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204118u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204500u: goto label_204500;
            case 0x204504u: goto label_204504;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204118u; }
            if (ctx->pc != 0x204118u) { return; }
        }
        }
    }
    ctx->pc = 0x204118u;
    // 0x204118: 0x864400ea  lh          $a0, 0xEA($s2)
    ctx->pc = 0x204118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
    // 0x20411c: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x20411cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x204120: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x204120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x204124: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x204124u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x204128: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x204128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20412c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x20412cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204130: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x204130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x204134: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x204134u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x204138: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x204138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x20413c: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x20413cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x204140: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x204140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x204144: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x204144u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x204148: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x204148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20414c: 0xfba10350  sqc2        $vf1, 0x350($sp)
    ctx->pc = 0x20414cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204150: 0x8e100168  lw          $s0, 0x168($s0)
    ctx->pc = 0x204150u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x204154: 0x48b01000  qmtc2.ni    $s0, $vf2
    ctx->pc = 0x204154u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x204158: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x204158u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20415c: 0xfba10360  sqc2        $vf1, 0x360($sp)
    ctx->pc = 0x20415cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204160: 0x8e5200ec  lw          $s2, 0xEC($s2)
    ctx->pc = 0x204160u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x204164: 0x48b21000  qmtc2.ni    $s2, $vf2
    ctx->pc = 0x204164u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 18));
    // 0x204168: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x204168u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20416c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20416cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x204170: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x204170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x204174: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x204174u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x204178: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x204178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20417c: 0x844400ea  lh          $a0, 0xEA($v0)
    ctx->pc = 0x20417cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 234)));
    // 0x204180: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x204180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x204184: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x204184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x204188: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x204188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x20418c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x20418cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x204190: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x204190u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204194: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x204194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x204198: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x204198u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x20419c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x20419cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x2041a0: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x2041a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2041a4: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2041a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x2041a8: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x2041a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2041ac: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2041acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2041b0: 0xfba10370  sqc2        $vf1, 0x370($sp)
    ctx->pc = 0x2041b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2041b4: 0x8e840168  lw          $a0, 0x168($s4)
    ctx->pc = 0x2041b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 360)));
    // 0x2041b8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2041b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2041bc: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x2041bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2041c0: 0xfba10380  sqc2        $vf1, 0x380($sp)
    ctx->pc = 0x2041c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2041c4: 0x8c4700ec  lw          $a3, 0xEC($v0)
    ctx->pc = 0x2041c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x2041c8: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x2041c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2041cc: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x2041ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2041d0: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x2041d0u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x2041d4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2041d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2041d8: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x2041d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2041dc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2041dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2041e0: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2041e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2041e4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2041e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2041e8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2041e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x2041ec: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x2041ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2041f0: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x2041f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x2041f4: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x2041f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2041f8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2041f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2041fc: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x2041fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x204200: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x204200u;
    SET_GPR_U32(ctx, 31, 0x204208u);
    ctx->pc = 0x204204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204200u;
            // 0x204204: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204208u; }
        if (ctx->pc != 0x204208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204208u; }
        if (ctx->pc != 0x204208u) { return; }
    }
    ctx->pc = 0x204208u;
    // 0x204208: 0xdba60000  lqc2        $vf6, 0x0($sp)
    ctx->pc = 0x204208u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20420c: 0xdba70010  lqc2        $vf7, 0x10($sp)
    ctx->pc = 0x20420cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204210: 0xdba80020  lqc2        $vf8, 0x20($sp)
    ctx->pc = 0x204210u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204214: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x204214u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204218: 0xdba10140  lqc2        $vf1, 0x140($sp)
    ctx->pc = 0x204218u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x20421c: 0xdba20150  lqc2        $vf2, 0x150($sp)
    ctx->pc = 0x20421cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x204220: 0xdba30160  lqc2        $vf3, 0x160($sp)
    ctx->pc = 0x204220u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x204224: 0xdba50170  lqc2        $vf5, 0x170($sp)
    ctx->pc = 0x204224u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x204228: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x204228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x20422c: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x20422cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x204230: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x204230u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x204234: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x204234u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x204238: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x204238u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x20423c: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x20423cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204240: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x204240u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x204244: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x204244u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x204248: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x204248u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20424c: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x20424cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x204250: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x204250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x204254: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x204254u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x204258: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x204258u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20425c: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x20425cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x204260: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x204260u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x204264: 0xfba301a0  sqc2        $vf3, 0x1A0($sp)
    ctx->pc = 0x204264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x204268: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x204268u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20426c: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x20426cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x204270: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x204270u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x204274: 0xfba401b0  sqc2        $vf4, 0x1B0($sp)
    ctx->pc = 0x204274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x204278: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x204278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20427c: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x20427cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x204280: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x204280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x204284: 0xfba30120  sqc2        $vf3, 0x120($sp)
    ctx->pc = 0x204284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x204288: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x204288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x20428c: 0xc06149c  jal         func_185270
    ctx->pc = 0x20428Cu;
    SET_GPR_U32(ctx, 31, 0x204294u);
    ctx->pc = 0x204290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20428Cu;
            // 0x204290: 0xfba40130  sqc2        $vf4, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185270u;
    if (runtime->hasFunction(0x185270u)) {
        auto targetFn = runtime->lookupFunction(0x185270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204294u; }
        if (ctx->pc != 0x204294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_185270_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204294u; }
        if (ctx->pc != 0x204294u) { return; }
    }
    ctx->pc = 0x204294u;
    // 0x204294: 0xdba601c0  lqc2        $vf6, 0x1C0($sp)
    ctx->pc = 0x204294u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x204298: 0xdba701d0  lqc2        $vf7, 0x1D0($sp)
    ctx->pc = 0x204298u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x20429c: 0xdba801e0  lqc2        $vf8, 0x1E0($sp)
    ctx->pc = 0x20429cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2042a0: 0xdba401f0  lqc2        $vf4, 0x1F0($sp)
    ctx->pc = 0x2042a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2042a4: 0xdba10100  lqc2        $vf1, 0x100($sp)
    ctx->pc = 0x2042a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2042a8: 0xdba20110  lqc2        $vf2, 0x110($sp)
    ctx->pc = 0x2042a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2042ac: 0xdba30120  lqc2        $vf3, 0x120($sp)
    ctx->pc = 0x2042acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2042b0: 0xdba50130  lqc2        $vf5, 0x130($sp)
    ctx->pc = 0x2042b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2042b4: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x2042b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x2042b8: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x2042b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2042bc: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x2042bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2042c0: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x2042c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2042c4: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x2042c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x2042c8: 0xfba10200  sqc2        $vf1, 0x200($sp)
    ctx->pc = 0x2042c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2042cc: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x2042ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2042d0: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x2042d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2042d4: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x2042d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2042d8: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x2042d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x2042dc: 0xfba20210  sqc2        $vf2, 0x210($sp)
    ctx->pc = 0x2042dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2042e0: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x2042e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2042e4: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x2042e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2042e8: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x2042e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2042ec: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x2042ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x2042f0: 0xfba30220  sqc2        $vf3, 0x220($sp)
    ctx->pc = 0x2042f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2042f4: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x2042f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2042f8: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x2042f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2042fc: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x2042fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x204300: 0xfba40230  sqc2        $vf4, 0x230($sp)
    ctx->pc = 0x204300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x204304: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x204304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204308: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x204308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20430c: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x20430cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x204310: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x204310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x204314: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x204314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x204318: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x204318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20431c: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x20431cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x204320: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x204320u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x204324: 0x7fa20240  sq          $v0, 0x240($sp)
    ctx->pc = 0x204324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 2));
    // 0x204328: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x204328u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x20432c: 0x7fa20250  sq          $v0, 0x250($sp)
    ctx->pc = 0x20432cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
    // 0x204330: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x204330u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x204334: 0x7fa20260  sq          $v0, 0x260($sp)
    ctx->pc = 0x204334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
    // 0x204338: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x204338u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x20433c: 0x7fa20270  sq          $v0, 0x270($sp)
    ctx->pc = 0x20433cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
    // 0x204340: 0xc06149c  jal         func_185270
    ctx->pc = 0x204340u;
    SET_GPR_U32(ctx, 31, 0x204348u);
    ctx->pc = 0x204344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204340u;
            // 0x204344: 0xc6b401bc  lwc1        $f20, 0x1BC($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x185270u;
    if (runtime->hasFunction(0x185270u)) {
        auto targetFn = runtime->lookupFunction(0x185270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204348u; }
        if (ctx->pc != 0x204348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_185270_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204348u; }
        if (ctx->pc != 0x204348u) { return; }
    }
    ctx->pc = 0x204348u;
    // 0x204348: 0x7ba50280  lq          $a1, 0x280($sp)
    ctx->pc = 0x204348u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x20434c: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x20434cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x204350: 0x7ba60290  lq          $a2, 0x290($sp)
    ctx->pc = 0x204350u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x204354: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x204354u;
    SET_GPR_U32(ctx, 31, 0x20435Cu);
    ctx->pc = 0x204358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204354u;
            // 0x204358: 0x7ba702a0  lq          $a3, 0x2A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20435Cu; }
        if (ctx->pc != 0x20435Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20435Cu; }
        if (ctx->pc != 0x20435Cu) { return; }
    }
    ctx->pc = 0x20435Cu;
    // 0x20435c: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x20435cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x204360: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x204360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x204364: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x204364u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x204368: 0x7ba700e0  lq          $a3, 0xE0($sp)
    ctx->pc = 0x204368u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x20436c: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x20436Cu;
    SET_GPR_U32(ctx, 31, 0x204374u);
    ctx->pc = 0x204370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20436Cu;
            // 0x204370: 0x7bb00390  lq          $s0, 0x390($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 912)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204374u; }
        if (ctx->pc != 0x204374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204374u; }
        if (ctx->pc != 0x204374u) { return; }
    }
    ctx->pc = 0x204374u;
    // 0x204374: 0x7ba503a0  lq          $a1, 0x3A0($sp)
    ctx->pc = 0x204374u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x204378: 0x701024a9  por         $a0, $zero, $s0
    ctx->pc = 0x204378u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x20437c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x20437cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x204380: 0xc061084  jal         func_184210
    ctx->pc = 0x204380u;
    SET_GPR_U32(ctx, 31, 0x204388u);
    ctx->pc = 0x204384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204380u;
            // 0x204384: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (runtime->hasFunction(0x184210u)) {
        auto targetFn = runtime->lookupFunction(0x184210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204388u; }
        if (ctx->pc != 0x204388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184210_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204388u; }
        if (ctx->pc != 0x204388u) { return; }
    }
    ctx->pc = 0x204388u;
    // 0x204388: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x204388u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20438c: 0x4be3186a  vmul.xyzw   $vf1, $vf3, $vf3
    ctx->pc = 0x20438cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x204390: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x204390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x204394: 0x4a210842  vaddz.w     $vf1, $vf1, $vf1z
    ctx->pc = 0x204394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x204398: 0xfba202c0  sqc2        $vf2, 0x2C0($sp)
    ctx->pc = 0x204398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20439c: 0x4b011083  vaddw.x     $vf2, $vf2, $vf1w
    ctx->pc = 0x20439cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2043a0: 0xfba102d0  sqc2        $vf1, 0x2D0($sp)
    ctx->pc = 0x2043a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2043a4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2043a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2043a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2043a8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2043ac: 0x4be0191c  vmulq.xyzw  $vf4, $vf3, $Q
    ctx->pc = 0x2043acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2043b0: 0x4a0002ff  vnop
    ctx->pc = 0x2043b0u;
    // NOP operation, no action needed for VU0
    // 0x2043b4: 0x4a0002ff  vnop
    ctx->pc = 0x2043b4u;
    // NOP operation, no action needed for VU0
    // 0x2043b8: 0xfba403b0  sqc2        $vf4, 0x3B0($sp)
    ctx->pc = 0x2043b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2043bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2043bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2043c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2043c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2043c4: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x2043c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2043c8: 0x4be120da  vmulz.xyzw  $vf3, $vf4, $vf1z
    ctx->pc = 0x2043c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2043cc: 0x4be12159  vmuly.xyzw  $vf5, $vf4, $vf1y
    ctx->pc = 0x2043ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2043d0: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x2043d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2043d4: 0x4a832842  vaddz.y     $vf1, $vf5, $vf3z
    ctx->pc = 0x2043d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2043d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2043d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2043dc: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x2043dcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2043e0: 0x4b013045  vsuby.x     $vf1, $vf6, $vf1y
    ctx->pc = 0x2043e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2043e4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2043e4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2043e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2043e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043ec: 0x4b032883  vaddw.x     $vf2, $vf5, $vf3w
    ctx->pc = 0x2043ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2043f0: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x2043f0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2043f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2043f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043f8: 0x4b051847  vsubw.x     $vf1, $vf3, $vf5w
    ctx->pc = 0x2043f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2043fc: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x2043fcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x204400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204404: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x204404u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204408: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x204408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20440c: 0x70a23389  pcpyld      $a2, $a1, $v0
    ctx->pc = 0x20440cu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x204410: 0x4b032847  vsubw.x     $vf1, $vf5, $vf3w
    ctx->pc = 0x204410u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x204414: 0x70c334c8  ppacw       $a2, $a2, $v1
    ctx->pc = 0x204414u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x204418: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x204418u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20441c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20441cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204420: 0x7fa60320  sq          $a2, 0x320($sp)
    ctx->pc = 0x204420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 6));
    // 0x204424: 0x4b032042  vaddz.x     $vf1, $vf4, $vf3z
    ctx->pc = 0x204424u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x204428: 0x4b013044  vsubx.x     $vf1, $vf6, $vf1x
    ctx->pc = 0x204428u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20442c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x20442cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204430: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x204430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204434: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x204434u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204438: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x204438u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x20443c: 0x4a841843  vaddw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x20443cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x204440: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x204440u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x204444: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x204444u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204448: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x204448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20444c: 0x71022389  pcpyld      $a0, $t0, $v0
    ctx->pc = 0x20444cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x204450: 0x4a841847  vsubw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x204450u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x204454: 0x708324c8  ppacw       $a0, $a0, $v1
    ctx->pc = 0x204454u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x204458: 0x4b0518c3  vaddw.x     $vf3, $vf3, $vf5w
    ctx->pc = 0x204458u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20445c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x20445cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x204460: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x204460u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204464: 0x4b052101  vaddy.x     $vf4, $vf4, $vf5y
    ctx->pc = 0x204464u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x204468: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x204468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20446c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x20446cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204470: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x204470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204474: 0x7fa40330  sq          $a0, 0x330($sp)
    ctx->pc = 0x204474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 4));
    // 0x204478: 0x4b043184  vsubx.x     $vf6, $vf6, $vf4x
    ctx->pc = 0x204478u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x20447c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x20447cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x204480: 0x7fa402f0  sq          $a0, 0x2F0($sp)
    ctx->pc = 0x204480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 4));
    // 0x204484: 0x48253000  qmfc2.ni    $a1, $vf6
    ctx->pc = 0x204484u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x204488: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x204488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20448c: 0x7fa602e0  sq          $a2, 0x2E0($sp)
    ctx->pc = 0x20448cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 6));
    // 0x204490: 0x71021389  pcpyld      $v0, $t0, $v0
    ctx->pc = 0x204490u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x204494: 0x7ba50270  lq          $a1, 0x270($sp)
    ctx->pc = 0x204494u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x204498: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x204498u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x20449c: 0x7fa20300  sq          $v0, 0x300($sp)
    ctx->pc = 0x20449cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 2));
    // 0x2044a0: 0x7fa50310  sq          $a1, 0x310($sp)
    ctx->pc = 0x2044a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 5));
    // 0x2044a4: 0x7fa20340  sq          $v0, 0x340($sp)
    ctx->pc = 0x2044a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 2));
    // 0x2044a8: 0x7e860050  sq          $a2, 0x50($s4)
    ctx->pc = 0x2044a8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 80), GPR_VEC(ctx, 6));
    // 0x2044ac: 0x7ba202f0  lq          $v0, 0x2F0($sp)
    ctx->pc = 0x2044acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2044b0: 0x7e820060  sq          $v0, 0x60($s4)
    ctx->pc = 0x2044b0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 96), GPR_VEC(ctx, 2));
    // 0x2044b4: 0x7ba20300  lq          $v0, 0x300($sp)
    ctx->pc = 0x2044b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2044b8: 0x7e820070  sq          $v0, 0x70($s4)
    ctx->pc = 0x2044b8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 112), GPR_VEC(ctx, 2));
    // 0x2044bc: 0x7ba20310  lq          $v0, 0x310($sp)
    ctx->pc = 0x2044bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2044c0: 0x7e820080  sq          $v0, 0x80($s4)
    ctx->pc = 0x2044c0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 128), GPR_VEC(ctx, 2));
    // 0x2044c4: 0xdba100f0  lqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x2044c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2044c8: 0xdba20270  lqc2        $vf2, 0x270($sp)
    ctx->pc = 0x2044c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2044cc: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x2044ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2044d0: 0xfba103c0  sqc2        $vf1, 0x3C0($sp)
    ctx->pc = 0x2044d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2044d4: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2044d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2044d8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2044d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2044dc: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x2044dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2044e0: 0xfaa10000  sqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2044e0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2044e4: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2044e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x2044e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2044e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2044ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2044ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2044f0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2044f0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2044f4: 0x4614ad69  min.s       $f21, $f21, $f20
    ctx->pc = 0x2044f4u;
    ctx->f[21] = std::min(ctx->f[21], ctx->f[20]);
    // 0x2044f8: 0xe6b501bc  swc1        $f21, 0x1BC($s5)
    ctx->pc = 0x2044f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 444), bits); }
    // 0x2044fc: 0x0  nop
    ctx->pc = 0x2044fcu;
    // NOP
label_204500:
    // 0x204500: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x204500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_204504:
    // 0x204504: 0x7bb10420  lq          $s1, 0x420($sp)
    ctx->pc = 0x204504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x204508: 0x7bb20410  lq          $s2, 0x410($sp)
    ctx->pc = 0x204508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x20450c: 0x7bb30400  lq          $s3, 0x400($sp)
    ctx->pc = 0x20450cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x204510: 0x7bb403f0  lq          $s4, 0x3F0($sp)
    ctx->pc = 0x204510u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x204514: 0x7bb503e0  lq          $s5, 0x3E0($sp)
    ctx->pc = 0x204514u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x204518: 0xdfbf03d0  ld          $ra, 0x3D0($sp)
    ctx->pc = 0x204518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x20451c: 0xc7b50448  lwc1        $f21, 0x448($sp)
    ctx->pc = 0x20451cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x204520: 0xc7b40440  lwc1        $f20, 0x440($sp)
    ctx->pc = 0x204520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x204524: 0x3e00008  jr          $ra
    ctx->pc = 0x204524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204524u;
            // 0x204528: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204500u: goto label_204500;
            case 0x204504u: goto label_204504;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20452Cu;
    // 0x20452c: 0x0  nop
    ctx->pc = 0x20452cu;
    // NOP
}
