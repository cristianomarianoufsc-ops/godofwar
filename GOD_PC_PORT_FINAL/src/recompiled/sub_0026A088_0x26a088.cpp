#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026A088
// Address: 0x26a088 - 0x26a188
void sub_0026A088_0x26a088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A088_0x26a088");
#endif

    ctx->pc = 0x26a088u;

    // 0x26a088: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26a088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26a08c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x26a08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x26a090: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x26a090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x26a094: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26a094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26a098: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x26a098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x26a09c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x26a09cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a0a0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x26a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x26a0a4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x26a0a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a0a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26a0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26a0ac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x26a0acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a0b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x26a0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x26a0b4: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x26a0b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26a0b8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x26a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26a0bc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x26a0bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x26a0c0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x26a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x26a0c4: 0x40f809  jalr        $v0
    ctx->pc = 0x26A0C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A0CCu);
        ctx->pc = 0x26A0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0C4u;
            // 0x26a0c8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26A0CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A10Cu: goto label_26a10c;
            case 0x26A118u: goto label_26a118;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26A0CCu; }
            if (ctx->pc != 0x26A0CCu) { return; }
        }
        }
    }
    ctx->pc = 0x26A0CCu;
    // 0x26a0cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26a0ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a0d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26a0d4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x26a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x26a0d8: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x26a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x26a0dc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26A0DCu;
    {
        const bool branch_taken_0x26a0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0DCu;
            // 0x26a0e0: 0x94510072  lhu         $s1, 0x72($v0) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 114)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0dc) {
            ctx->pc = 0x26A10Cu;
            goto label_26a10c;
        }
    }
    ctx->pc = 0x26A0E4u;
    // 0x26a0e4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x26a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x26a0e8: 0x1051000b  beq         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x26A0E8u;
    {
        const bool branch_taken_0x26a0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x26a0e8) {
            ctx->pc = 0x26A118u;
            goto label_26a118;
        }
    }
    ctx->pc = 0x26A0F0u;
    // 0x26a0f0: 0xc08235e  jal         func_208D78
    ctx->pc = 0x26A0F0u;
    SET_GPR_U32(ctx, 31, 0x26A0F8u);
    ctx->pc = 0x26A0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0F0u;
            // 0x26a0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A0F8u; }
        if (ctx->pc != 0x26A0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A0F8u; }
        if (ctx->pc != 0x26A0F8u) { return; }
    }
    ctx->pc = 0x26A0F8u;
    // 0x26a0f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a0fc: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x26A0FCu;
    SET_GPR_U32(ctx, 31, 0x26A104u);
    ctx->pc = 0x26A100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A0FCu;
            // 0x26a100: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A104u; }
        if (ctx->pc != 0x26A104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A104u; }
        if (ctx->pc != 0x26A104u) { return; }
    }
    ctx->pc = 0x26A104u;
    // 0x26a104: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26A104u;
    {
        const bool branch_taken_0x26a104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a104) {
            ctx->pc = 0x26A118u;
            goto label_26a118;
        }
    }
    ctx->pc = 0x26A10Cu;
label_26a10c:
    // 0x26a10c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a110: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x26A110u;
    SET_GPR_U32(ctx, 31, 0x26A118u);
    ctx->pc = 0x26A114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A110u;
            // 0x26a114: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A118u; }
        if (ctx->pc != 0x26A118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A118u; }
        if (ctx->pc != 0x26A118u) { return; }
    }
    ctx->pc = 0x26A118u;
label_26a118:
    // 0x26a118: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x26a118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x26a11c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x26a11cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x26a120: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x26a120u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26a124: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x26a124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26a128: 0xfa4100e0  sqc2        $vf1, 0xE0($s2)
    ctx->pc = 0x26a128u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26a12c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x26a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x26a130: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26a130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a134: 0xc047086  jal         func_11C218
    ctx->pc = 0x26A134u;
    SET_GPR_U32(ctx, 31, 0x26A13Cu);
    ctx->pc = 0x26A138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A134u;
            // 0x26a138: 0x94452cb4  lhu         $a1, 0x2CB4($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 11444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C218u;
    if (runtime->hasFunction(0x11C218u)) {
        auto targetFn = runtime->lookupFunction(0x11C218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A13Cu; }
        if (ctx->pc != 0x26A13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C218_0x11c218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A13Cu; }
        if (ctx->pc != 0x26A13Cu) { return; }
    }
    ctx->pc = 0x26A13Cu;
    // 0x26a13c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26a140: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x26a140u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x26a144: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26a144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26a148: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x26a148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x26a14c: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x26a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x26a150: 0x40f809  jalr        $v0
    ctx->pc = 0x26A150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A158u);
        ctx->pc = 0x26A154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A150u;
            // 0x26a154: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26A158u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A10Cu: goto label_26a10c;
            case 0x26A118u: goto label_26a118;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26A158u; }
            if (ctx->pc != 0x26A158u) { return; }
        }
        }
    }
    ctx->pc = 0x26A158u;
    // 0x26a158: 0x90430016  lbu         $v1, 0x16($v0)
    ctx->pc = 0x26a158u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x26a15c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x26a15cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a160: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x26a160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x26a164: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x26a164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26a168: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x26a168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26a16c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26a16cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26a170: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x26a170u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a174: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x26a174u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a17c: 0xa0430016  sb          $v1, 0x16($v0)
    ctx->pc = 0x26a17cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22), (uint8_t)GPR_U32(ctx, 3));
    // 0x26a180: 0x3e00008  jr          $ra
    ctx->pc = 0x26A180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A180u;
            // 0x26a184: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A10Cu: goto label_26a10c;
            case 0x26A118u: goto label_26a118;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26A188u;
}
