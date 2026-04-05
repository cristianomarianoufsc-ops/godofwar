#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00194108
// Address: 0x194108 - 0x195018
void sub_00194108_0x194108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194108_0x194108");
#endif

    ctx->pc = 0x194108u;

label_194108:
    // 0x194108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x194108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19410c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19410cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x194110: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x194110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x194114: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x194114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x194118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19411c: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x19411cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x194120: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x194120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x194124: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x194124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x194128: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x194128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x19412c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19412cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x194130: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x194130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x194134: 0x24a53650  addiu       $a1, $a1, 0x3650
    ctx->pc = 0x194134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13904));
    // 0x194138: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x194138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19413c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19413cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194140: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x194140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x194144: 0xc061e64  jal         func_187990
    ctx->pc = 0x194144u;
    SET_GPR_U32(ctx, 31, 0x19414Cu);
    ctx->pc = 0x194148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194144u;
            // 0x194148: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187990u;
    if (runtime->hasFunction(0x187990u)) {
        auto targetFn = runtime->lookupFunction(0x187990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19414Cu; }
        if (ctx->pc != 0x19414Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187990_0x187990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19414Cu; }
        if (ctx->pc != 0x19414Cu) { return; }
    }
    ctx->pc = 0x19414Cu;
    // 0x19414c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19414cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194150: 0x3e00008  jr          $ra
    ctx->pc = 0x194150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194150u;
            // 0x194154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194108u: goto label_194108;
            case 0x194194u: goto label_194194;
            case 0x1941E0u: goto label_1941e0;
            case 0x1941E4u: goto label_1941e4;
            case 0x194260u: goto label_194260;
            case 0x194268u: goto label_194268;
            case 0x194338u: goto label_194338;
            case 0x194368u: goto label_194368;
            case 0x194410u: goto label_194410;
            case 0x194430u: goto label_194430;
            case 0x194458u: goto label_194458;
            case 0x1944C0u: goto label_1944c0;
            case 0x1944C4u: goto label_1944c4;
            case 0x1945A0u: goto label_1945a0;
            case 0x194614u: goto label_194614;
            case 0x194718u: goto label_194718;
            case 0x19473Cu: goto label_19473c;
            case 0x1947C0u: goto label_1947c0;
            case 0x1947D0u: goto label_1947d0;
            case 0x194A48u: goto label_194a48;
            case 0x194A60u: goto label_194a60;
            case 0x194B88u: goto label_194b88;
            case 0x194BC0u: goto label_194bc0;
            case 0x194BD8u: goto label_194bd8;
            case 0x194BDCu: goto label_194bdc;
            case 0x194C18u: goto label_194c18;
            case 0x194C30u: goto label_194c30;
            case 0x194C98u: goto label_194c98;
            case 0x194D08u: goto label_194d08;
            case 0x194D2Cu: goto label_194d2c;
            case 0x194D48u: goto label_194d48;
            case 0x194D70u: goto label_194d70;
            case 0x194DACu: goto label_194dac;
            case 0x194DC8u: goto label_194dc8;
            case 0x194DCCu: goto label_194dcc;
            case 0x194DD0u: goto label_194dd0;
            case 0x194EE8u: goto label_194ee8;
            case 0x194EECu: goto label_194eec;
            case 0x194F18u: goto label_194f18;
            case 0x194F30u: goto label_194f30;
            case 0x194F68u: goto label_194f68;
            case 0x194F74u: goto label_194f74;
            case 0x194F80u: goto label_194f80;
            case 0x194FD4u: goto label_194fd4;
            case 0x194FD8u: goto label_194fd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194158u;
    // 0x194158: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x194158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x19415c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19415cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194160: 0x8c62c944  lw          $v0, -0x36BC($v1)
    ctx->pc = 0x194160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953284)));
    // 0x194164: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x194164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x194168: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x194168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19416c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19416cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x194170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194174: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x194174u;
    {
        const bool branch_taken_0x194174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194174u;
            // 0x194178: 0xac62c944  sw          $v0, -0x36BC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194174) {
            ctx->pc = 0x1941E0u;
            goto label_1941e0;
        }
    }
    ctx->pc = 0x19417Cu;
    // 0x19417c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19417cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x194180: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x194180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x194184: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194184u;
    {
        const bool branch_taken_0x194184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194184u;
            // 0x194188: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194184) {
            ctx->pc = 0x194194u;
            goto label_194194;
        }
    }
    ctx->pc = 0x19418Cu;
    // 0x19418c: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x19418Cu;
    SET_GPR_U32(ctx, 31, 0x194194u);
    ctx->pc = 0x194190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19418Cu;
            // 0x194190: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194194u; }
        if (ctx->pc != 0x194194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194194u; }
        if (ctx->pc != 0x194194u) { return; }
    }
    ctx->pc = 0x194194u;
label_194194:
    // 0x194194: 0xc04cb8e  jal         func_132E38
    ctx->pc = 0x194194u;
    SET_GPR_U32(ctx, 31, 0x19419Cu);
    ctx->pc = 0x194198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194194u;
            // 0x194198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E38u;
    if (runtime->hasFunction(0x132E38u)) {
        auto targetFn = runtime->lookupFunction(0x132E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19419Cu; }
        if (ctx->pc != 0x19419Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E38_0x132e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19419Cu; }
        if (ctx->pc != 0x19419Cu) { return; }
    }
    ctx->pc = 0x19419Cu;
    // 0x19419c: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x19419cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1941a0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1941a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1941a4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1941A4u;
    {
        const bool branch_taken_0x1941a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1941A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1941A4u;
            // 0x1941a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1941a4) {
            ctx->pc = 0x1941E4u;
            goto label_1941e4;
        }
    }
    ctx->pc = 0x1941ACu;
    // 0x1941ac: 0xc064ff6  jal         func_193FD8
    ctx->pc = 0x1941ACu;
    SET_GPR_U32(ctx, 31, 0x1941B4u);
    ctx->pc = 0x193FD8u;
    if (runtime->hasFunction(0x193FD8u)) {
        auto targetFn = runtime->lookupFunction(0x193FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1941B4u; }
        if (ctx->pc != 0x1941B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193FD8_0x193fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1941B4u; }
        if (ctx->pc != 0x1941B4u) { return; }
    }
    ctx->pc = 0x1941B4u;
    // 0x1941b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1941b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1941b8: 0x8c50cd58  lw          $s0, -0x32A8($v0)
    ctx->pc = 0x1941b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1941bc: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1941BCu;
    {
        const bool branch_taken_0x1941bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1941bc) {
            ctx->pc = 0x1941C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1941BCu;
            // 0x1941c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1941E4u;
            goto label_1941e4;
        }
    }
    ctx->pc = 0x1941C4u;
    // 0x1941c4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1941c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1941c8: 0xc0783d6  jal         func_1E0F58
    ctx->pc = 0x1941C8u;
    SET_GPR_U32(ctx, 31, 0x1941D0u);
    ctx->pc = 0x1941CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1941C8u;
            // 0x1941cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0F58u;
    if (runtime->hasFunction(0x1E0F58u)) {
        auto targetFn = runtime->lookupFunction(0x1E0F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1941D0u; }
        if (ctx->pc != 0x1941D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0F58_0x1e0f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1941D0u; }
        if (ctx->pc != 0x1941D0u) { return; }
    }
    ctx->pc = 0x1941D0u;
    // 0x1941d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1941d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1941d4: 0x4be00053  vmaxw.xyzw  $vf1, $vf0, $vf0w
    ctx->pc = 0x1941d4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1941d8: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x1941D8u;
    SET_GPR_U32(ctx, 31, 0x1941E0u);
    ctx->pc = 0x1941DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1941D8u;
            // 0x1941dc: 0x48250800  qmfc2.ni    $a1, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1941E0u; }
        if (ctx->pc != 0x1941E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1df800_0x1df850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1941E0u; }
        if (ctx->pc != 0x1941E0u) { return; }
    }
    ctx->pc = 0x1941E0u;
label_1941e0:
    // 0x1941e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1941e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1941e4:
    // 0x1941e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1941e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1941e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1941E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1941ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1941E8u;
            // 0x1941ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194108u: goto label_194108;
            case 0x194194u: goto label_194194;
            case 0x1941E0u: goto label_1941e0;
            case 0x1941E4u: goto label_1941e4;
            case 0x194260u: goto label_194260;
            case 0x194268u: goto label_194268;
            case 0x194338u: goto label_194338;
            case 0x194368u: goto label_194368;
            case 0x194410u: goto label_194410;
            case 0x194430u: goto label_194430;
            case 0x194458u: goto label_194458;
            case 0x1944C0u: goto label_1944c0;
            case 0x1944C4u: goto label_1944c4;
            case 0x1945A0u: goto label_1945a0;
            case 0x194614u: goto label_194614;
            case 0x194718u: goto label_194718;
            case 0x19473Cu: goto label_19473c;
            case 0x1947C0u: goto label_1947c0;
            case 0x1947D0u: goto label_1947d0;
            case 0x194A48u: goto label_194a48;
            case 0x194A60u: goto label_194a60;
            case 0x194B88u: goto label_194b88;
            case 0x194BC0u: goto label_194bc0;
            case 0x194BD8u: goto label_194bd8;
            case 0x194BDCu: goto label_194bdc;
            case 0x194C18u: goto label_194c18;
            case 0x194C30u: goto label_194c30;
            case 0x194C98u: goto label_194c98;
            case 0x194D08u: goto label_194d08;
            case 0x194D2Cu: goto label_194d2c;
            case 0x194D48u: goto label_194d48;
            case 0x194D70u: goto label_194d70;
            case 0x194DACu: goto label_194dac;
            case 0x194DC8u: goto label_194dc8;
            case 0x194DCCu: goto label_194dcc;
            case 0x194DD0u: goto label_194dd0;
            case 0x194EE8u: goto label_194ee8;
            case 0x194EECu: goto label_194eec;
            case 0x194F18u: goto label_194f18;
            case 0x194F30u: goto label_194f30;
            case 0x194F68u: goto label_194f68;
            case 0x194F74u: goto label_194f74;
            case 0x194F80u: goto label_194f80;
            case 0x194FD4u: goto label_194fd4;
            case 0x194FD8u: goto label_194fd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1941F0u;
    // 0x1941f0: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x1941f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
    // 0x1941f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1941f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1941f8: 0x7fb20440  sq          $s2, 0x440($sp)
    ctx->pc = 0x1941f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 18));
    // 0x1941fc: 0x7fbe03e0  sq          $fp, 0x3E0($sp)
    ctx->pc = 0x1941fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 30));
    // 0x194200: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x194200u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x194204: 0x7fb00460  sq          $s0, 0x460($sp)
    ctx->pc = 0x194204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 16));
    // 0x194208: 0x7fb10450  sq          $s1, 0x450($sp)
    ctx->pc = 0x194208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 17));
    // 0x19420c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19420cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194210: 0x7fb30430  sq          $s3, 0x430($sp)
    ctx->pc = 0x194210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 19));
    // 0x194214: 0x7fb40420  sq          $s4, 0x420($sp)
    ctx->pc = 0x194214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 20));
    // 0x194218: 0x7fb60400  sq          $s6, 0x400($sp)
    ctx->pc = 0x194218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 22));
    // 0x19421c: 0x7fb703f0  sq          $s7, 0x3F0($sp)
    ctx->pc = 0x19421cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 23));
    // 0x194220: 0xffbf03d0  sd          $ra, 0x3D0($sp)
    ctx->pc = 0x194220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 976), GPR_U64(ctx, 31));
    // 0x194224: 0xe7b80490  swc1        $f24, 0x490($sp)
    ctx->pc = 0x194224u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
    // 0x194228: 0xe7b70488  swc1        $f23, 0x488($sp)
    ctx->pc = 0x194228u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1160), bits); }
    // 0x19422c: 0xe7b60480  swc1        $f22, 0x480($sp)
    ctx->pc = 0x19422cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
    // 0x194230: 0xe7b50478  swc1        $f21, 0x478($sp)
    ctx->pc = 0x194230u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1144), bits); }
    // 0x194234: 0xe7b40470  swc1        $f20, 0x470($sp)
    ctx->pc = 0x194234u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
    // 0x194238: 0x8e5ecd58  lw          $fp, -0x32A8($s2)
    ctx->pc = 0x194238u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954328)));
    // 0x19423c: 0x7fb50410  sq          $s5, 0x410($sp)
    ctx->pc = 0x19423cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 21));
    // 0x194240: 0x8c42c90c  lw          $v0, -0x36F4($v0)
    ctx->pc = 0x194240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953228)));
    // 0x194244: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x194244u;
    {
        const bool branch_taken_0x194244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194244u;
            // 0x194248: 0x8fd50000  lw          $s5, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194244) {
            ctx->pc = 0x194260u;
            goto label_194260;
        }
    }
    ctx->pc = 0x19424Cu;
    // 0x19424c: 0xc0783be  jal         func_1E0EF8
    ctx->pc = 0x19424Cu;
    SET_GPR_U32(ctx, 31, 0x194254u);
    ctx->pc = 0x194250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19424Cu;
            // 0x194250: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EF8u;
    if (runtime->hasFunction(0x1E0EF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194254u; }
        if (ctx->pc != 0x194254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EF8_0x1e0ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194254u; }
        if (ctx->pc != 0x194254u) { return; }
    }
    ctx->pc = 0x194254u;
    // 0x194254: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x194254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x194258: 0x1000035e  b           . + 4 + (0x35E << 2)
    ctx->pc = 0x194258u;
    {
        const bool branch_taken_0x194258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19425Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194258u;
            // 0x19425c: 0xa602002a  sh          $v0, 0x2A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194258) {
            ctx->pc = 0x194FD4u;
            goto label_194fd4;
        }
    }
    ctx->pc = 0x194260u;
label_194260:
    // 0x194260: 0xc065042  jal         func_194108
    ctx->pc = 0x194260u;
    SET_GPR_U32(ctx, 31, 0x194268u);
    ctx->pc = 0x194108u;
    runtime->cooperativeGuestYield();
    goto label_194108;
    ctx->pc = 0x194268u;
label_194268:
    // 0x194268: 0x8e44cd58  lw          $a0, -0x32A8($s2)
    ctx->pc = 0x194268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954328)));
    // 0x19426c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19426cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194270: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x194270u;
    SET_GPR_U32(ctx, 31, 0x194278u);
    ctx->pc = 0x194274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194270u;
            // 0x194274: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194278u; }
        if (ctx->pc != 0x194278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194278u; }
        if (ctx->pc != 0x194278u) { return; }
    }
    ctx->pc = 0x194278u;
    // 0x194278: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x194278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x19427c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x19427cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x194280: 0x96040044  lhu         $a0, 0x44($s0)
    ctx->pc = 0x194280u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x194284: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x194284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x194288: 0x2463deb8  addiu       $v1, $v1, -0x2148
    ctx->pc = 0x194288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958776));
    // 0x19428c: 0x30844000  andi        $a0, $a0, 0x4000
    ctx->pc = 0x19428cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x194290: 0x1480005f  bnez        $a0, . + 4 + (0x5F << 2)
    ctx->pc = 0x194290u;
    {
        const bool branch_taken_0x194290 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x194294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194290u;
            // 0x194294: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194290) {
            ctx->pc = 0x194410u;
            goto label_194410;
        }
    }
    ctx->pc = 0x194298u;
    // 0x194298: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x194298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x19429c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x19429cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x1942a0: 0x8ca3c944  lw          $v1, -0x36BC($a1)
    ctx->pc = 0x1942a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953284)));
    // 0x1942a4: 0x24424158  addiu       $v0, $v0, 0x4158
    ctx->pc = 0x1942a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16728));
    // 0x1942a8: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x1942a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1942ac: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1942acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1942b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1942b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1942b4: 0xa6040044  sh          $a0, 0x44($s0)
    ctx->pc = 0x1942b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x1942b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1942b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1942bc: 0x14620054  bne         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1942BCu;
    {
        const bool branch_taken_0x1942bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1942C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1942BCu;
            // 0x1942c0: 0xaca3c944  sw          $v1, -0x36BC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294953284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942bc) {
            ctx->pc = 0x194410u;
            goto label_194410;
        }
    }
    ctx->pc = 0x1942C4u;
    // 0x1942c4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1942c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1942c8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1942c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1942cc: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x1942ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1942d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1942d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1942d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1942d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1942d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1942d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1942dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1942dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1942e0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1942e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1942e4: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1942e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1942e8: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1942e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1942ec: 0x40f809  jalr        $v0
    ctx->pc = 0x1942ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1942F4u);
        ctx->pc = 0x1942F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1942ECu;
            // 0x1942f0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1942F4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194108u: goto label_194108;
            case 0x194194u: goto label_194194;
            case 0x1941E0u: goto label_1941e0;
            case 0x1941E4u: goto label_1941e4;
            case 0x194260u: goto label_194260;
            case 0x194268u: goto label_194268;
            case 0x194338u: goto label_194338;
            case 0x194368u: goto label_194368;
            case 0x194410u: goto label_194410;
            case 0x194430u: goto label_194430;
            case 0x194458u: goto label_194458;
            case 0x1944C0u: goto label_1944c0;
            case 0x1944C4u: goto label_1944c4;
            case 0x1945A0u: goto label_1945a0;
            case 0x194614u: goto label_194614;
            case 0x194718u: goto label_194718;
            case 0x19473Cu: goto label_19473c;
            case 0x1947C0u: goto label_1947c0;
            case 0x1947D0u: goto label_1947d0;
            case 0x194A48u: goto label_194a48;
            case 0x194A60u: goto label_194a60;
            case 0x194B88u: goto label_194b88;
            case 0x194BC0u: goto label_194bc0;
            case 0x194BD8u: goto label_194bd8;
            case 0x194BDCu: goto label_194bdc;
            case 0x194C18u: goto label_194c18;
            case 0x194C30u: goto label_194c30;
            case 0x194C98u: goto label_194c98;
            case 0x194D08u: goto label_194d08;
            case 0x194D2Cu: goto label_194d2c;
            case 0x194D48u: goto label_194d48;
            case 0x194D70u: goto label_194d70;
            case 0x194DACu: goto label_194dac;
            case 0x194DC8u: goto label_194dc8;
            case 0x194DCCu: goto label_194dcc;
            case 0x194DD0u: goto label_194dd0;
            case 0x194EE8u: goto label_194ee8;
            case 0x194EECu: goto label_194eec;
            case 0x194F18u: goto label_194f18;
            case 0x194F30u: goto label_194f30;
            case 0x194F68u: goto label_194f68;
            case 0x194F74u: goto label_194f74;
            case 0x194F80u: goto label_194f80;
            case 0x194FD4u: goto label_194fd4;
            case 0x194FD8u: goto label_194fd8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1942F4u; }
            if (ctx->pc != 0x1942F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1942F4u;
    // 0x1942f4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1942f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1942f8: 0xc04c992  jal         func_132648
    ctx->pc = 0x1942F8u;
    SET_GPR_U32(ctx, 31, 0x194300u);
    ctx->pc = 0x1942FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1942F8u;
            // 0x1942fc: 0x24843660  addiu       $a0, $a0, 0x3660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194300u; }
        if (ctx->pc != 0x194300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194300u; }
        if (ctx->pc != 0x194300u) { return; }
    }
    ctx->pc = 0x194300u;
    // 0x194300: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x194300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x194304: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x194304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x194308: 0xac625020  sw          $v0, 0x5020($v1)
    ctx->pc = 0x194308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20512), GPR_U32(ctx, 2));
    // 0x19430c: 0xc04c992  jal         func_132648
    ctx->pc = 0x19430Cu;
    SET_GPR_U32(ctx, 31, 0x194314u);
    ctx->pc = 0x194310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19430Cu;
            // 0x194310: 0x24843678  addiu       $a0, $a0, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194314u; }
        if (ctx->pc != 0x194314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194314u; }
        if (ctx->pc != 0x194314u) { return; }
    }
    ctx->pc = 0x194314u;
    // 0x194314: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x194314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x194318: 0xac625024  sw          $v0, 0x5024($v1)
    ctx->pc = 0x194318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20516), GPR_U32(ctx, 2));
    // 0x19431c: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x19431cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x194320: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x194320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x194324: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x194324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x194328: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x194328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x19432c: 0x40f809  jalr        $v0
    ctx->pc = 0x19432Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194334u);
        ctx->pc = 0x194330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19432Cu;
            // 0x194330: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x194334u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194108u: goto label_194108;
            case 0x194194u: goto label_194194;
            case 0x1941E0u: goto label_1941e0;
            case 0x1941E4u: goto label_1941e4;
            case 0x194260u: goto label_194260;
            case 0x194268u: goto label_194268;
            case 0x194338u: goto label_194338;
            case 0x194368u: goto label_194368;
            case 0x194410u: goto label_194410;
            case 0x194430u: goto label_194430;
            case 0x194458u: goto label_194458;
            case 0x1944C0u: goto label_1944c0;
            case 0x1944C4u: goto label_1944c4;
            case 0x1945A0u: goto label_1945a0;
            case 0x194614u: goto label_194614;
            case 0x194718u: goto label_194718;
            case 0x19473Cu: goto label_19473c;
            case 0x1947C0u: goto label_1947c0;
            case 0x1947D0u: goto label_1947d0;
            case 0x194A48u: goto label_194a48;
            case 0x194A60u: goto label_194a60;
            case 0x194B88u: goto label_194b88;
            case 0x194BC0u: goto label_194bc0;
            case 0x194BD8u: goto label_194bd8;
            case 0x194BDCu: goto label_194bdc;
            case 0x194C18u: goto label_194c18;
            case 0x194C30u: goto label_194c30;
            case 0x194C98u: goto label_194c98;
            case 0x194D08u: goto label_194d08;
            case 0x194D2Cu: goto label_194d2c;
            case 0x194D48u: goto label_194d48;
            case 0x194D70u: goto label_194d70;
            case 0x194DACu: goto label_194dac;
            case 0x194DC8u: goto label_194dc8;
            case 0x194DCCu: goto label_194dcc;
            case 0x194DD0u: goto label_194dd0;
            case 0x194EE8u: goto label_194ee8;
            case 0x194EECu: goto label_194eec;
            case 0x194F18u: goto label_194f18;
            case 0x194F30u: goto label_194f30;
            case 0x194F68u: goto label_194f68;
            case 0x194F74u: goto label_194f74;
            case 0x194F80u: goto label_194f80;
            case 0x194FD4u: goto label_194fd4;
            case 0x194FD8u: goto label_194fd8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194334u; }
            if (ctx->pc != 0x194334u) { return; }
        }
        }
    }
    ctx->pc = 0x194334u;
    // 0x194334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194338:
    // 0x194338: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x194338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19433c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x19433cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x194340: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x194340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x194344: 0x2463df70  addiu       $v1, $v1, -0x2090
    ctx->pc = 0x194344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958960));
    // 0x194348: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x194348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19434c: 0x28a40005  slti        $a0, $a1, 0x5
    ctx->pc = 0x19434cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x194350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194354: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x194354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x194358: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x194358u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19435c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19435Cu;
    {
        const bool branch_taken_0x19435c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x194360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19435Cu;
            // 0x194360: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19435c) {
            ctx->pc = 0x194338u;
            runtime->cooperativeGuestYield();
            goto label_194338;
        }
    }
    ctx->pc = 0x194364u;
    // 0x194364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194368:
    // 0x194368: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x194368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19436c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x19436cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x194370: 0x24425010  addiu       $v0, $v0, 0x5010
    ctx->pc = 0x194370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20496));
    // 0x194374: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x194374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x194378: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x194378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19437c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x19437cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x194380: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x194380u;
    {
        const bool branch_taken_0x194380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194380u;
            // 0x194384: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194380) {
            ctx->pc = 0x194368u;
            runtime->cooperativeGuestYield();
            goto label_194368;
        }
    }
    ctx->pc = 0x194388u;
    // 0x194388: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x194388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19438c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19438cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194390: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x194390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x194394: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x194394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x194398: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x194398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x19439c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x19439cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1943a0: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1943a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1943a4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1943a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1943a8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1943a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1943ac: 0xe4405038  swc1        $f0, 0x5038($v0)
    ctx->pc = 0x1943acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20536), bits); }
    // 0x1943b0: 0xe4605028  swc1        $f0, 0x5028($v1)
    ctx->pc = 0x1943b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20520), bits); }
    // 0x1943b4: 0xa4a0502c  sh          $zero, 0x502C($a1)
    ctx->pc = 0x1943b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20524), (uint16_t)GPR_U32(ctx, 0));
    // 0x1943b8: 0xacc05030  sw          $zero, 0x5030($a2)
    ctx->pc = 0x1943b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20528), GPR_U32(ctx, 0));
    // 0x1943bc: 0xc076fa6  jal         func_1DBE98
    ctx->pc = 0x1943BCu;
    SET_GPR_U32(ctx, 31, 0x1943C4u);
    ctx->pc = 0x1943C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1943BCu;
            // 0x1943c0: 0xace05034  sw          $zero, 0x5034($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBE98u;
    if (runtime->hasFunction(0x1DBE98u)) {
        auto targetFn = runtime->lookupFunction(0x1DBE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1943C4u; }
        if (ctx->pc != 0x1943C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBE98_0x1dbe98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1943C4u; }
        if (ctx->pc != 0x1943C4u) { return; }
    }
    ctx->pc = 0x1943C4u;
    // 0x1943c4: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x1943c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1943c8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1943c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1943cc: 0x8e860024  lw          $a2, 0x24($s4)
    ctx->pc = 0x1943ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1943d0: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x1943d0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x1943d4: 0x8e88002c  lw          $t0, 0x2C($s4)
    ctx->pc = 0x1943d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1943d8: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x1943d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x1943dc: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1943dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1943e0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1943e0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1943e4: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x1943e4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1943e8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1943e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1943ec: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x1943ECu;
    SET_GPR_U32(ctx, 31, 0x1943F4u);
    ctx->pc = 0x1943F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1943ECu;
            // 0x1943f0: 0x7fa202d0  sq          $v0, 0x2D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1943F4u; }
        if (ctx->pc != 0x1943F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1df800_0x1df850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1943F4u; }
        if (ctx->pc != 0x1943F4u) { return; }
    }
    ctx->pc = 0x1943F4u;
    // 0x1943f4: 0x86840036  lh          $a0, 0x36($s4)
    ctx->pc = 0x1943f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 54)));
    // 0x1943f8: 0x86850030  lh          $a1, 0x30($s4)
    ctx->pc = 0x1943f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1943fc: 0x86860032  lh          $a2, 0x32($s4)
    ctx->pc = 0x1943fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 50)));
    // 0x194400: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x194400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x194404: 0xc06552a  jal         func_1954A8
    ctx->pc = 0x194404u;
    SET_GPR_U32(ctx, 31, 0x19440Cu);
    ctx->pc = 0x194408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194404u;
            // 0x194408: 0x86870034  lh          $a3, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1954A8u;
    if (runtime->hasFunction(0x1954A8u)) {
        auto targetFn = runtime->lookupFunction(0x1954A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19440Cu; }
        if (ctx->pc != 0x19440Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001954A8_0x1954a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19440Cu; }
        if (ctx->pc != 0x19440Cu) { return; }
    }
    ctx->pc = 0x19440Cu;
    // 0x19440c: 0x0  nop
    ctx->pc = 0x19440cu;
    // NOP
label_194410:
    // 0x194410: 0xc06503e  jal         func_1940F8
    ctx->pc = 0x194410u;
    SET_GPR_U32(ctx, 31, 0x194418u);
    ctx->pc = 0x1940F8u;
    if (runtime->hasFunction(0x1940F8u)) {
        auto targetFn = runtime->lookupFunction(0x1940F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194418u; }
        if (ctx->pc != 0x194418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1940f8_0x194108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194418u; }
        if (ctx->pc != 0x194418u) { return; }
    }
    ctx->pc = 0x194418u;
    // 0x194418: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x194418u;
    {
        const bool branch_taken_0x194418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194418) {
            ctx->pc = 0x194430u;
            goto label_194430;
        }
    }
    ctx->pc = 0x194420u;
    // 0x194420: 0xc0783be  jal         func_1E0EF8
    ctx->pc = 0x194420u;
    SET_GPR_U32(ctx, 31, 0x194428u);
    ctx->pc = 0x194424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194420u;
            // 0x194424: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EF8u;
    if (runtime->hasFunction(0x1E0EF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194428u; }
        if (ctx->pc != 0x194428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EF8_0x1e0ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194428u; }
        if (ctx->pc != 0x194428u) { return; }
    }
    ctx->pc = 0x194428u;
    // 0x194428: 0x100002eb  b           . + 4 + (0x2EB << 2)
    ctx->pc = 0x194428u;
    {
        const bool branch_taken_0x194428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19442Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194428u;
            // 0x19442c: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194428) {
            ctx->pc = 0x194FD8u;
            goto label_194fd8;
        }
    }
    ctx->pc = 0x194430u;
label_194430:
    // 0x194430: 0xc065564  jal         func_195590
    ctx->pc = 0x194430u;
    SET_GPR_U32(ctx, 31, 0x194438u);
    ctx->pc = 0x195590u;
    if (runtime->hasFunction(0x195590u)) {
        auto targetFn = runtime->lookupFunction(0x195590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194438u; }
        if (ctx->pc != 0x194438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_195590_0x195670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194438u; }
        if (ctx->pc != 0x194438u) { return; }
    }
    ctx->pc = 0x194438u;
    // 0x194438: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x194438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x19443c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x19443Cu;
    {
        const bool branch_taken_0x19443c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19443Cu;
            // 0x194440: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19443c) {
            ctx->pc = 0x1944C0u;
            goto label_1944c0;
        }
    }
    ctx->pc = 0x194444u;
    // 0x194444: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x194444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x194448: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194448u;
    {
        const bool branch_taken_0x194448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19444Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194448u;
            // 0x19444c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194448) {
            ctx->pc = 0x194458u;
            goto label_194458;
        }
    }
    ctx->pc = 0x194450u;
    // 0x194450: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x194450u;
    SET_GPR_U32(ctx, 31, 0x194458u);
    ctx->pc = 0x194454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194450u;
            // 0x194454: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194458u; }
        if (ctx->pc != 0x194458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194458u; }
        if (ctx->pc != 0x194458u) { return; }
    }
    ctx->pc = 0x194458u;
label_194458:
    // 0x194458: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x194458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19445c: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x19445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194460: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x194460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194464: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x194464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x194468: 0xc4805030  lwc1        $f0, 0x5030($a0)
    ctx->pc = 0x194468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19446c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x19446cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x194470: 0xc683001c  lwc1        $f3, 0x1C($s4)
    ctx->pc = 0x194470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x194474: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x194474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194478: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x194478u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x19447c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x19447cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x194480: 0x8e42cd58  lw          $v0, -0x32A8($s2)
    ctx->pc = 0x194480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954328)));
    // 0x194484: 0x46030069  min.s       $f1, $f0, $f3
    ctx->pc = 0x194484u;
    ctx->f[1] = std::min(ctx->f[0], ctx->f[3]);
    // 0x194488: 0xe4815030  swc1        $f1, 0x5030($a0)
    ctx->pc = 0x194488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20528), bits); }
    // 0x19448c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x19448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x194490: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x194490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194494: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x194494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x194498: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x194498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x19449c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x19449cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1944a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1944a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1944a4: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1944a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1944a8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1944A8u;
    {
        const bool branch_taken_0x1944a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1944ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1944A8u;
            // 0x1944ac: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1944a8) {
            ctx->pc = 0x1944C4u;
            goto label_1944c4;
        }
    }
    ctx->pc = 0x1944B0u;
    // 0x1944b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1944b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1944b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1944b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1944b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1944b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1944bc: 0xe4805030  swc1        $f0, 0x5030($a0)
    ctx->pc = 0x1944bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20528), bits); }
label_1944c0:
    // 0x1944c0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1944c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1944c4:
    // 0x1944c4: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x1944c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1944c8: 0xc4405030  lwc1        $f0, 0x5030($v0)
    ctx->pc = 0x1944c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1944cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1944ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1944d0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1944d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1944d4: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x1944d4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[22] = ctx->f[0] / ctx->f[1];
    // 0x1944d8: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x1944d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1944dc: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x1944dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1944e0: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x1944e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1944e4: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1944e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1944e8: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x1944e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1944ec: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x1944ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x1944f0: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1944f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1944f4: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x1944f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x1944f8: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1944f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1944fc: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x1944fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x194500: 0x46030602  mul.s       $f24, $f0, $f3
    ctx->pc = 0x194500u;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x194504: 0x46020dc2  mul.s       $f23, $f1, $f2
    ctx->pc = 0x194504u;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x194508: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x194508u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x19450c: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x19450cu;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x194510: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x194510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x194514: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x194514u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x194518: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x194518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19451c: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x19451cu;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x194520: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x194520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x194524: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x194524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x194528: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x194528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19452c: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x19452cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x194530: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x194530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x194534: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x194534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x194538: 0xc0909c4  jal         func_242710
    ctx->pc = 0x194538u;
    SET_GPR_U32(ctx, 31, 0x194540u);
    ctx->pc = 0x19453Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194538u;
            // 0x19453c: 0xfba40080  sqc2        $vf4, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194540u; }
        if (ctx->pc != 0x194540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194540u; }
        if (ctx->pc != 0x194540u) { return; }
    }
    ctx->pc = 0x194540u;
    // 0x194540: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x194540u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x194544: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x194544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x194548: 0x8c465020  lw          $a2, 0x5020($v0)
    ctx->pc = 0x194548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20512)));
    // 0x19454c: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x19454Cu;
    {
        const bool branch_taken_0x19454c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x194550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19454Cu;
            // 0x194550: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19454c) {
            ctx->pc = 0x1945A0u;
            goto label_1945a0;
        }
    }
    ctx->pc = 0x194554u;
    // 0x194554: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x194554u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194558: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x194558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x19455c: 0xdca4bdf8  ld          $a0, -0x4208($a1)
    ctx->pc = 0x19455cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4294950392)));
    // 0x194560: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x194560u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x194564: 0x84c30060  lh          $v1, 0x60($a2)
    ctx->pc = 0x194564u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x194568: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x194568u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x19456c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x19456cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194570: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x194570u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x194574: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x194574u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x194578: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x194578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19457c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x19457cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x194580: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x194580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194584: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x194584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194588: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x194588u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x19458c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x19458cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194590: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x194590u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x194594: 0xfca4bdf8  sd          $a0, -0x4208($a1)
    ctx->pc = 0x194594u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294950392), GPR_U64(ctx, 4));
    // 0x194598: 0xfcc30068  sd          $v1, 0x68($a2)
    ctx->pc = 0x194598u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 3));
    // 0x19459c: 0x0  nop
    ctx->pc = 0x19459cu;
    // NOP
label_1945a0:
    // 0x1945a0: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x1945a0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x1945a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1945a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1945a8: 0x8442c920  lh          $v0, -0x36E0($v0)
    ctx->pc = 0x1945a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294953248)));
    // 0x1945ac: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x1945acu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x1945b0: 0xc6c0c658  lwc1        $f0, -0x39A8($s6)
    ctx->pc = 0x1945b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1945b4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1945b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1945b8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1945b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1945bc: 0xc6615028  lwc1        $f1, 0x5028($s3)
    ctx->pc = 0x1945bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1945c0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1945c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1945c4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1945c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1945c8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1945c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1945cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1945ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1945d0: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1945d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1945d4: 0x0  nop
    ctx->pc = 0x1945d4u;
    // NOP
    // 0x1945d8: 0x45000058  bc1f        . + 4 + (0x58 << 2)
    ctx->pc = 0x1945D8u;
    {
        const bool branch_taken_0x1945d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1945DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1945D8u;
            // 0x1945dc: 0xe6615028  swc1        $f1, 0x5028($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20520), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945d8) {
            ctx->pc = 0x19473Cu;
            goto label_19473c;
        }
    }
    ctx->pc = 0x1945E0u;
    // 0x1945e0: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x1945e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x1945e4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1945e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1945e8: 0x8642502c  lh          $v0, 0x502C($s2)
    ctx->pc = 0x1945e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20524)));
    // 0x1945ec: 0x24635010  addiu       $v1, $v1, 0x5010
    ctx->pc = 0x1945ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20496));
    // 0x1945f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1945f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1945f4: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1945f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1945f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1945f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1945fc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1945FCu;
    {
        const bool branch_taken_0x1945fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1945fc) {
            ctx->pc = 0x194600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1945FCu;
            // 0x194600: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x194614u;
            goto label_194614;
        }
    }
    ctx->pc = 0x194604u;
    // 0x194604: 0xc04c9da  jal         func_132768
    ctx->pc = 0x194604u;
    SET_GPR_U32(ctx, 31, 0x19460Cu);
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19460Cu; }
        if (ctx->pc != 0x19460Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19460Cu; }
        if (ctx->pc != 0x19460Cu) { return; }
    }
    ctx->pc = 0x19460Cu;
    // 0x19460c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x19460cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x194610: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x194610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
label_194614:
    // 0x194614: 0xc04c992  jal         func_132648
    ctx->pc = 0x194614u;
    SET_GPR_U32(ctx, 31, 0x19461Cu);
    ctx->pc = 0x194618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194614u;
            // 0x194618: 0x24843690  addiu       $a0, $a0, 0x3690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19461Cu; }
        if (ctx->pc != 0x19461Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19461Cu; }
        if (ctx->pc != 0x19461Cu) { return; }
    }
    ctx->pc = 0x19461Cu;
    // 0x19461c: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x19461Cu;
    {
        const bool branch_taken_0x19461c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19461Cu;
            // 0x194620: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19461c) {
            ctx->pc = 0x194718u;
            goto label_194718;
        }
    }
    ctx->pc = 0x194624u;
    // 0x194624: 0x3c10002d  lui         $s0, 0x2D
    ctx->pc = 0x194624u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)45 << 16));
    // 0x194628: 0x2610b950  addiu       $s0, $s0, -0x46B0
    ctx->pc = 0x194628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949200));
    // 0x19462c: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x19462Cu;
    SET_GPR_U32(ctx, 31, 0x194634u);
    ctx->pc = 0x194630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19462Cu;
            // 0x194630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194634u; }
        if (ctx->pc != 0x194634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194634u; }
        if (ctx->pc != 0x194634u) { return; }
    }
    ctx->pc = 0x194634u;
    // 0x194634: 0x46000502  mul.s       $f20, $f0, $f0
    ctx->pc = 0x194634u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x194638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19463c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x19463cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x194640: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194644: 0x4614ad01  sub.s       $f20, $f21, $f20
    ctx->pc = 0x194644u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x194648: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x194648u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x19464c: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x19464Cu;
    SET_GPR_U32(ctx, 31, 0x194654u);
    ctx->pc = 0x194650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19464Cu;
            // 0x194650: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194654u; }
        if (ctx->pc != 0x194654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194654u; }
        if (ctx->pc != 0x194654u) { return; }
    }
    ctx->pc = 0x194654u;
    // 0x194654: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x194654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x194658: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x194658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x19465c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19465cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194660: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x194660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x194664: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x194664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194668: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x194668u;
    SET_GPR_U32(ctx, 31, 0x194670u);
    ctx->pc = 0x19466Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194668u;
            // 0x19466c: 0x46000300  add.s       $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194670u; }
        if (ctx->pc != 0x194670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194670u; }
        if (ctx->pc != 0x194670u) { return; }
    }
    ctx->pc = 0x194670u;
    // 0x194670: 0xc7a102e0  lwc1        $f1, 0x2E0($sp)
    ctx->pc = 0x194670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194674: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x194674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x194678: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x194678u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19467c: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x19467cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194680: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x194680u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x194684: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x194684u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194688: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x194688u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19468c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x19468cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x194690: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x194690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x194694: 0x7fa50090  sq          $a1, 0x90($sp)
    ctx->pc = 0x194694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
    // 0x194698: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x194698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19469c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19469cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946a0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1946a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1946a4: 0x70e81b89  pcpyld      $v1, $a3, $t0
    ctx->pc = 0x1946a4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x1946a8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1946a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1946ac: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x1946acu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x1946b0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1946b0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1946b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1946b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1946b8: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1946b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1946bc: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1946bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1946c0: 0x7fa202f0  sq          $v0, 0x2F0($sp)
    ctx->pc = 0x1946c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 2));
    // 0x1946c4: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1946c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1946c8: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1946c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1946cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1946ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1946d0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1946d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1946d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1946d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946d8: 0x7c850020  sq          $a1, 0x20($a0)
    ctx->pc = 0x1946d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
    // 0x1946dc: 0xdcc5bdf8  ld          $a1, -0x4208($a2)
    ctx->pc = 0x1946dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x1946e0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x1946e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1946e4: 0x84830060  lh          $v1, 0x60($a0)
    ctx->pc = 0x1946e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1946e8: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x1946e8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x1946ec: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x1946ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x1946f0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1946f0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1946f4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1946f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1946f8: 0xa3380a  movz        $a3, $a1, $v1
    ctx->pc = 0x1946f8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x1946fc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1946fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194700: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x194700u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x194704: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x194704u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x194708: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x194708u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x19470c: 0xfcc5bdf8  sd          $a1, -0x4208($a2)
    ctx->pc = 0x19470cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 5));
    // 0x194710: 0xfc830068  sd          $v1, 0x68($a0)
    ctx->pc = 0x194710u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 3));
    // 0x194714: 0x0  nop
    ctx->pc = 0x194714u;
    // NOP
label_194718:
    // 0x194718: 0x9643502c  lhu         $v1, 0x502C($s2)
    ctx->pc = 0x194718u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20524)));
    // 0x19471c: 0xe6755028  swc1        $f21, 0x5028($s3)
    ctx->pc = 0x19471cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20520), bits); }
    // 0x194720: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x194720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x194724: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x194724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x194728: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x194728u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x19472c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x19472cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x194730: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x194730u;
    {
        const bool branch_taken_0x194730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194730u;
            // 0x194734: 0xa643502c  sh          $v1, 0x502C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 20524), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194730) {
            ctx->pc = 0x19473Cu;
            goto label_19473c;
        }
    }
    ctx->pc = 0x194738u;
    // 0x194738: 0xa640502c  sh          $zero, 0x502C($s2)
    ctx->pc = 0x194738u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20524), (uint16_t)GPR_U32(ctx, 0));
label_19473c:
    // 0x19473c: 0x7aa20050  lq          $v0, 0x50($s5)
    ctx->pc = 0x19473cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x194740: 0x26b00050  addiu       $s0, $s5, 0x50
    ctx->pc = 0x194740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x194744: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x194744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x194748: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x194748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x19474c: 0x8c63c918  lw          $v1, -0x36E8($v1)
    ctx->pc = 0x19474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953240)));
    // 0x194750: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x194750u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x194754: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x194754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x194758: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x194758u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x19475c: 0xfba30100  sqc2        $vf3, 0x100($sp)
    ctx->pc = 0x19475cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x194760: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x194760u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x194764: 0x106000b8  beqz        $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x194764u;
    {
        const bool branch_taken_0x194764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x194768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194764u;
            // 0x194768: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194764) {
            ctx->pc = 0x194A48u;
            goto label_194a48;
        }
    }
    ctx->pc = 0x19476Cu;
    // 0x19476c: 0x8ea20174  lw          $v0, 0x174($s5)
    ctx->pc = 0x19476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 372)));
    // 0x194770: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x194770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x194774: 0x104000b4  beqz        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x194774u;
    {
        const bool branch_taken_0x194774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194774u;
            // 0x194778: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194774) {
            ctx->pc = 0x194A48u;
            goto label_194a48;
        }
    }
    ctx->pc = 0x19477Cu;
    // 0x19477c: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x19477cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x194780: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x194780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x194784: 0xd84100f0  lqc2        $vf1, 0xF0($v0)
    ctx->pc = 0x194784u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x194788: 0x4b010083  vaddw.x     $vf2, $vf0, $vf1w
    ctx->pc = 0x194788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19478c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x19478cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x194790: 0x4be40b3c  vmove.xyzw  $vf4, $vf1
    ctx->pc = 0x194790u;
    ctx->vu0_vf[4] = ctx->vu0_vf[1];
    // 0x194794: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x194794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194798: 0x4a24212c  vsub.w      $vf4, $vf4, $vf4
    ctx->pc = 0x194798u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19479c: 0xfba10320  sqc2        $vf1, 0x320($sp)
    ctx->pc = 0x19479cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1947a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1947a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1947a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1947a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1947a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1947a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1947ac: 0x0  nop
    ctx->pc = 0x1947acu;
    // NOP
    // 0x1947b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1947B0u;
    {
        const bool branch_taken_0x1947b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1947B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1947B0u;
            // 0x1947b4: 0xfba40320  sqc2        $vf4, 0x320($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1947b0) {
            ctx->pc = 0x1947C0u;
            goto label_1947c0;
        }
    }
    ctx->pc = 0x1947B8u;
    // 0x1947b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1947B8u;
    {
        const bool branch_taken_0x1947b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1947BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1947B8u;
            // 0x1947bc: 0xfba40310  sqc2        $vf4, 0x310($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 784), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1947b8) {
            ctx->pc = 0x1947D0u;
            goto label_1947d0;
        }
    }
    ctx->pc = 0x1947C0u;
label_1947c0:
    // 0x1947c0: 0xfba30300  sqc2        $vf3, 0x300($sp)
    ctx->pc = 0x1947c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1947c4: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1947c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1947c8: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1947c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1947cc: 0xfba10310  sqc2        $vf1, 0x310($sp)
    ctx->pc = 0x1947ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), _mm_castps_si128(ctx->vu0_vf[1]));
label_1947d0:
    // 0x1947d0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1947d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1947d4: 0xdba20310  lqc2        $vf2, 0x310($sp)
    ctx->pc = 0x1947d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1947d8: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1947d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1947dc: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1947dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1947e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1947e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1947e4: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1947e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1947e8: 0xfba303b0  sqc2        $vf3, 0x3B0($sp)
    ctx->pc = 0x1947e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1947ec: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x1947ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1947f0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1947f0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x1947f4: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1947f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1947f8: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1947f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1947fc: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1947fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x194800: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x194800u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x194804: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x194804u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x194808: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x194808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19480c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19480cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x194810: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x194810u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x194814: 0x4a0003bf  vwaitq
    ctx->pc = 0x194814u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x194818: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x194818u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19481c: 0x4a0002ff  vnop
    ctx->pc = 0x19481cu;
    // NOP operation, no action needed for VU0
    // 0x194820: 0x4a0002ff  vnop
    ctx->pc = 0x194820u;
    // NOP operation, no action needed for VU0
    // 0x194824: 0x8c44c91c  lw          $a0, -0x36E4($v0)
    ctx->pc = 0x194824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953244)));
    // 0x194828: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x194828u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19482c: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x19482cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x194830: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x194830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x194834: 0xdba20320  lqc2        $vf2, 0x320($sp)
    ctx->pc = 0x194834u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x194838: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x194838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19483c: 0xfba20330  sqc2        $vf2, 0x330($sp)
    ctx->pc = 0x19483cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x194840: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x194840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x194844: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x194844u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x194848: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x194848u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19484c: 0xfba20340  sqc2        $vf2, 0x340($sp)
    ctx->pc = 0x19484cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x194850: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x194850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x194854: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x194854u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x194858: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x194858u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19485c: 0xfba20350  sqc2        $vf2, 0x350($sp)
    ctx->pc = 0x19485cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x194860: 0xc6d4c658  lwc1        $f20, -0x39A8($s6)
    ctx->pc = 0x194860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x194864: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x194864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x194868: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x194868u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x19486c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x19486cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x194870: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x194870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x194874: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x194874u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x194878: 0xdba10110  lqc2        $vf1, 0x110($sp)
    ctx->pc = 0x194878u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x19487c: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x19487cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x194880: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x194880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x194884: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x194884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x194888: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x194888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x19488c: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x19488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x194890: 0x40f809  jalr        $v0
    ctx->pc = 0x194890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194898u);
        ctx->pc = 0x194894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194890u;
            // 0x194894: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x194898u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194108u: goto label_194108;
            case 0x194194u: goto label_194194;
            case 0x1941E0u: goto label_1941e0;
            case 0x1941E4u: goto label_1941e4;
            case 0x194260u: goto label_194260;
            case 0x194268u: goto label_194268;
            case 0x194338u: goto label_194338;
            case 0x194368u: goto label_194368;
            case 0x194410u: goto label_194410;
            case 0x194430u: goto label_194430;
            case 0x194458u: goto label_194458;
            case 0x1944C0u: goto label_1944c0;
            case 0x1944C4u: goto label_1944c4;
            case 0x1945A0u: goto label_1945a0;
            case 0x194614u: goto label_194614;
            case 0x194718u: goto label_194718;
            case 0x19473Cu: goto label_19473c;
            case 0x1947C0u: goto label_1947c0;
            case 0x1947D0u: goto label_1947d0;
            case 0x194A48u: goto label_194a48;
            case 0x194A60u: goto label_194a60;
            case 0x194B88u: goto label_194b88;
            case 0x194BC0u: goto label_194bc0;
            case 0x194BD8u: goto label_194bd8;
            case 0x194BDCu: goto label_194bdc;
            case 0x194C18u: goto label_194c18;
            case 0x194C30u: goto label_194c30;
            case 0x194C98u: goto label_194c98;
            case 0x194D08u: goto label_194d08;
            case 0x194D2Cu: goto label_194d2c;
            case 0x194D48u: goto label_194d48;
            case 0x194D70u: goto label_194d70;
            case 0x194DACu: goto label_194dac;
            case 0x194DC8u: goto label_194dc8;
            case 0x194DCCu: goto label_194dcc;
            case 0x194DD0u: goto label_194dd0;
            case 0x194EE8u: goto label_194ee8;
            case 0x194EECu: goto label_194eec;
            case 0x194F18u: goto label_194f18;
            case 0x194F30u: goto label_194f30;
            case 0x194F68u: goto label_194f68;
            case 0x194F74u: goto label_194f74;
            case 0x194F80u: goto label_194f80;
            case 0x194FD4u: goto label_194fd4;
            case 0x194FD8u: goto label_194fd8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194898u; }
            if (ctx->pc != 0x194898u) { return; }
        }
        }
    }
    ctx->pc = 0x194898u;
    // 0x194898: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x194898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x19489c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19489cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1948a0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1948a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1948a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1948a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1948a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1948a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1948ac: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x1948acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x1948b0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1948b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1948b4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1948b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1948b8: 0xc6a1016c  lwc1        $f1, 0x16C($s5)
    ctx->pc = 0x1948b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1948bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1948bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1948c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1948c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1948c4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1948c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1948c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1948c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1948cc: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1948ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1948d0: 0x4604a503  div.s       $f20, $f20, $f4
    ctx->pc = 0x1948d0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[4];
    // 0x1948d4: 0x4615a528  max.s       $f20, $f20, $f21
    ctx->pc = 0x1948d4u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[21]);
    // 0x1948d8: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x1948d8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1948dc: 0x4602a529  min.s       $f20, $f20, $f2
    ctx->pc = 0x1948dcu;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[2]);
    // 0x1948e0: 0x7ba600f0  lq          $a2, 0xF0($sp)
    ctx->pc = 0x1948e0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1948e4: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x1948e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x1948e8: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x1948E8u;
    SET_GPR_U32(ctx, 31, 0x1948F0u);
    ctx->pc = 0x1948ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1948E8u;
            // 0x1948ec: 0x7ba70100  lq          $a3, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1948F0u; }
        if (ctx->pc != 0x1948F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1948F0u; }
        if (ctx->pc != 0x1948F0u) { return; }
    }
    ctx->pc = 0x1948F0u;
    // 0x1948f0: 0x7a070020  lq          $a3, 0x20($s0)
    ctx->pc = 0x1948f0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1948f4: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x1948f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x1948f8: 0x7a060010  lq          $a2, 0x10($s0)
    ctx->pc = 0x1948f8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1948fc: 0x7aa50050  lq          $a1, 0x50($s5)
    ctx->pc = 0x1948fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x194900: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x194900u;
    SET_GPR_U32(ctx, 31, 0x194908u);
    ctx->pc = 0x194904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194900u;
            // 0x194904: 0x7bb00360  lq          $s0, 0x360($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194908u; }
        if (ctx->pc != 0x194908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194908u; }
        if (ctx->pc != 0x194908u) { return; }
    }
    ctx->pc = 0x194908u;
    // 0x194908: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x194908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x19490c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19490cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x194910: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x194910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x194914: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x194914u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x194918: 0x7ba40370  lq          $a0, 0x370($sp)
    ctx->pc = 0x194918u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x19491c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x19491cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x194920: 0xc061084  jal         func_184210
    ctx->pc = 0x194920u;
    SET_GPR_U32(ctx, 31, 0x194928u);
    ctx->pc = 0x194924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194920u;
            // 0x194924: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (runtime->hasFunction(0x184210u)) {
        auto targetFn = runtime->lookupFunction(0x184210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194928u; }
        if (ctx->pc != 0x194928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184210_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194928u; }
        if (ctx->pc != 0x194928u) { return; }
    }
    ctx->pc = 0x194928u;
    // 0x194928: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x194928u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19492c: 0x4be3186a  vmul.xyzw   $vf1, $vf3, $vf3
    ctx->pc = 0x19492cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x194930: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x194930u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x194934: 0x4a210842  vaddz.w     $vf1, $vf1, $vf1z
    ctx->pc = 0x194934u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x194938: 0xfba20130  sqc2        $vf2, 0x130($sp)
    ctx->pc = 0x194938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19493c: 0x4b011083  vaddw.x     $vf2, $vf2, $vf1w
    ctx->pc = 0x19493cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x194940: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x194940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x194944: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x194944u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x194948: 0x4a0003bf  vwaitq
    ctx->pc = 0x194948u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19494c: 0x4be0191c  vmulq.xyzw  $vf4, $vf3, $Q
    ctx->pc = 0x19494cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x194950: 0x4a0002ff  vnop
    ctx->pc = 0x194950u;
    // NOP operation, no action needed for VU0
    // 0x194954: 0x4a0002ff  vnop
    ctx->pc = 0x194954u;
    // NOP operation, no action needed for VU0
    // 0x194958: 0xfba40380  sqc2        $vf4, 0x380($sp)
    ctx->pc = 0x194958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19495c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19495cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x194960: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x194960u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x194964: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x194964u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x194968: 0x4be120da  vmulz.xyzw  $vf3, $vf4, $vf1z
    ctx->pc = 0x194968u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19496c: 0x4be12159  vmuly.xyzw  $vf5, $vf4, $vf1y
    ctx->pc = 0x19496cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x194970: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x194970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x194974: 0x4a832842  vaddz.y     $vf1, $vf5, $vf3z
    ctx->pc = 0x194974u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x194978: 0xdba203b0  lqc2        $vf2, 0x3B0($sp)
    ctx->pc = 0x194978u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x19497c: 0x4b011045  vsuby.x     $vf1, $vf2, $vf1y
    ctx->pc = 0x19497cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x194980: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x194980u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x194984: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x194984u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194988: 0x4b032883  vaddw.x     $vf2, $vf5, $vf3w
    ctx->pc = 0x194988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19498c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x19498cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x194990: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x194990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194994: 0x4b051847  vsubw.x     $vf1, $vf3, $vf5w
    ctx->pc = 0x194994u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x194998: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x194998u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x19499c: 0x4406a800  mfc1        $a2, $f21
    ctx->pc = 0x19499cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1949a0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1949a0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1949a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1949a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1949a8: 0x70c22b89  pcpyld      $a1, $a2, $v0
    ctx->pc = 0x1949a8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1949ac: 0x4b032847  vsubw.x     $vf1, $vf5, $vf3w
    ctx->pc = 0x1949acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1949b0: 0x70a32cc8  ppacw       $a1, $a1, $v1
    ctx->pc = 0x1949b0u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x1949b4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1949b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1949b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1949b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1949bc: 0x7fa50150  sq          $a1, 0x150($sp)
    ctx->pc = 0x1949bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 5));
    // 0x1949c0: 0x4b032042  vaddz.x     $vf1, $vf4, $vf3z
    ctx->pc = 0x1949c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1949c4: 0xdba203b0  lqc2        $vf2, 0x3B0($sp)
    ctx->pc = 0x1949c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x1949c8: 0x4b011044  vsubx.x     $vf1, $vf2, $vf1x
    ctx->pc = 0x1949c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1949cc: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1949ccu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1949d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1949d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1949d4: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1949d4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1949d8: 0x4a841843  vaddw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1949d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1949dc: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1949dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1949e0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1949e0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1949e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1949e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1949e8: 0x4407a800  mfc1        $a3, $f21
    ctx->pc = 0x1949e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1949ec: 0x70e22389  pcpyld      $a0, $a3, $v0
    ctx->pc = 0x1949ecu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x1949f0: 0x4a841847  vsubw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1949f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1949f4: 0x708324c8  ppacw       $a0, $a0, $v1
    ctx->pc = 0x1949f4u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1949f8: 0x4b0518c3  vaddw.x     $vf3, $vf3, $vf5w
    ctx->pc = 0x1949f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1949fc: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x1949fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x194a00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x194a00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a04: 0x4b052101  vaddy.x     $vf4, $vf4, $vf5y
    ctx->pc = 0x194a04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x194a08: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x194a08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x194a0c: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x194a0cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x194a10: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x194a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a14: 0x7fa40160  sq          $a0, 0x160($sp)
    ctx->pc = 0x194a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 4));
    // 0x194a18: 0x4b041044  vsubx.x     $vf1, $vf2, $vf4x
    ctx->pc = 0x194a18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x194a1c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x194a1cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x194a20: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x194a20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x194a24: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x194a24u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x194a28: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x194a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a2c: 0x7fa500e0  sq          $a1, 0xE0($sp)
    ctx->pc = 0x194a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 5));
    // 0x194a30: 0x71021389  pcpyld      $v0, $t0, $v0
    ctx->pc = 0x194a30u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x194a34: 0x7fa400f0  sq          $a0, 0xF0($sp)
    ctx->pc = 0x194a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 4));
    // 0x194a38: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x194a38u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x194a3c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x194a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x194a40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x194A40u;
    {
        const bool branch_taken_0x194a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194A40u;
            // 0x194a44: 0x7fa20170  sq          $v0, 0x170($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a40) {
            ctx->pc = 0x194A60u;
            goto label_194a60;
        }
    }
    ctx->pc = 0x194A48u;
label_194a48:
    // 0x194a48: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x194a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x194a4c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x194a4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x194a50: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x194a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x194a54: 0x40f809  jalr        $v0
    ctx->pc = 0x194A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194A5Cu);
        ctx->pc = 0x194A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194A54u;
            // 0x194a58: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x194A5Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194108u: goto label_194108;
            case 0x194194u: goto label_194194;
            case 0x1941E0u: goto label_1941e0;
            case 0x1941E4u: goto label_1941e4;
            case 0x194260u: goto label_194260;
            case 0x194268u: goto label_194268;
            case 0x194338u: goto label_194338;
            case 0x194368u: goto label_194368;
            case 0x194410u: goto label_194410;
            case 0x194430u: goto label_194430;
            case 0x194458u: goto label_194458;
            case 0x1944C0u: goto label_1944c0;
            case 0x1944C4u: goto label_1944c4;
            case 0x1945A0u: goto label_1945a0;
            case 0x194614u: goto label_194614;
            case 0x194718u: goto label_194718;
            case 0x19473Cu: goto label_19473c;
            case 0x1947C0u: goto label_1947c0;
            case 0x1947D0u: goto label_1947d0;
            case 0x194A48u: goto label_194a48;
            case 0x194A60u: goto label_194a60;
            case 0x194B88u: goto label_194b88;
            case 0x194BC0u: goto label_194bc0;
            case 0x194BD8u: goto label_194bd8;
            case 0x194BDCu: goto label_194bdc;
            case 0x194C18u: goto label_194c18;
            case 0x194C30u: goto label_194c30;
            case 0x194C98u: goto label_194c98;
            case 0x194D08u: goto label_194d08;
            case 0x194D2Cu: goto label_194d2c;
            case 0x194D48u: goto label_194d48;
            case 0x194D70u: goto label_194d70;
            case 0x194DACu: goto label_194dac;
            case 0x194DC8u: goto label_194dc8;
            case 0x194DCCu: goto label_194dcc;
            case 0x194DD0u: goto label_194dd0;
            case 0x194EE8u: goto label_194ee8;
            case 0x194EECu: goto label_194eec;
            case 0x194F18u: goto label_194f18;
            case 0x194F30u: goto label_194f30;
            case 0x194F68u: goto label_194f68;
            case 0x194F74u: goto label_194f74;
            case 0x194F80u: goto label_194f80;
            case 0x194FD4u: goto label_194fd4;
            case 0x194FD8u: goto label_194fd8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194A5Cu; }
            if (ctx->pc != 0x194A5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x194A5Cu;
    // 0x194a5c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x194a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_194a60:
    // 0x194a60: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x194a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x194a64: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x194a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x194a68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194a6c: 0xc44dc914  lwc1        $f13, -0x36EC($v0)
    ctx->pc = 0x194a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x194a70: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x194a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x194a74: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x194a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x194a78: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x194a78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x194a7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x194a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194a80: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x194a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x194a84: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x194a84u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[0];
    // 0x194a88: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x194a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194a8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x194a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x194a90: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x194a90u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x194a94: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x194a94u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x194a98: 0x46166b42  mul.s       $f13, $f13, $f22
    ctx->pc = 0x194a98u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[22]);
    // 0x194a9c: 0xc061248  jal         func_184920
    ctx->pc = 0x194A9Cu;
    SET_GPR_U32(ctx, 31, 0x194AA4u);
    ctx->pc = 0x194AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194A9Cu;
            // 0x194aa0: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184920u;
    if (runtime->hasFunction(0x184920u)) {
        auto targetFn = runtime->lookupFunction(0x184920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194AA4u; }
        if (ctx->pc != 0x194AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184920_0x184920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194AA4u; }
        if (ctx->pc != 0x194AA4u) { return; }
    }
    ctx->pc = 0x194AA4u;
    // 0x194aa4: 0xdba600e0  lqc2        $vf6, 0xE0($sp)
    ctx->pc = 0x194aa4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x194aa8: 0xdba700f0  lqc2        $vf7, 0xF0($sp)
    ctx->pc = 0x194aa8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x194aac: 0xdba80100  lqc2        $vf8, 0x100($sp)
    ctx->pc = 0x194aacu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x194ab0: 0xdba40110  lqc2        $vf4, 0x110($sp)
    ctx->pc = 0x194ab0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x194ab4: 0xdba30180  lqc2        $vf3, 0x180($sp)
    ctx->pc = 0x194ab4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x194ab8: 0xdba10190  lqc2        $vf1, 0x190($sp)
    ctx->pc = 0x194ab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x194abc: 0xdba201a0  lqc2        $vf2, 0x1A0($sp)
    ctx->pc = 0x194abcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x194ac0: 0xdba501b0  lqc2        $vf5, 0x1B0($sp)
    ctx->pc = 0x194ac0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x194ac4: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x194ac4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x194ac8: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x194ac8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x194acc: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x194accu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x194ad0: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x194ad0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x194ad4: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x194ad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x194ad8: 0xfba30200  sqc2        $vf3, 0x200($sp)
    ctx->pc = 0x194ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x194adc: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x194adcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x194ae0: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x194ae0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x194ae4: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x194ae4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x194ae8: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x194ae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x194aec: 0xfba10210  sqc2        $vf1, 0x210($sp)
    ctx->pc = 0x194aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x194af0: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x194af0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x194af4: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x194af4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x194af8: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x194af8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x194afc: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x194afcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x194b00: 0xfba20220  sqc2        $vf2, 0x220($sp)
    ctx->pc = 0x194b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x194b04: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x194b04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x194b08: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x194b08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x194b0c: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x194b0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x194b10: 0xfba40230  sqc2        $vf4, 0x230($sp)
    ctx->pc = 0x194b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x194b14: 0xfba301c0  sqc2        $vf3, 0x1C0($sp)
    ctx->pc = 0x194b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x194b18: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x194b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x194b1c: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x194b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x194b20: 0x8c44cd58  lw          $a0, -0x32A8($v0)
    ctx->pc = 0x194b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x194b24: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x194b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x194b28: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x194b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x194b2c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x194b2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x194b30: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x194b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x194b34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x194b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b38: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x194b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x194b3c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x194b3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b40: 0xfba101d0  sqc2        $vf1, 0x1D0($sp)
    ctx->pc = 0x194b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x194b44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x194b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b48: 0xfba201e0  sqc2        $vf2, 0x1E0($sp)
    ctx->pc = 0x194b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x194b4c: 0xfba401f0  sqc2        $vf4, 0x1F0($sp)
    ctx->pc = 0x194b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x194b50: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x194b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x194b54: 0xfaa30050  sqc2        $vf3, 0x50($s5)
    ctx->pc = 0x194b54u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x194b58: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x194b58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x194b5c: 0x7ea20060  sq          $v0, 0x60($s5)
    ctx->pc = 0x194b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 96), GPR_VEC(ctx, 2));
    // 0x194b60: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x194b60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x194b64: 0x7ea20070  sq          $v0, 0x70($s5)
    ctx->pc = 0x194b64u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 112), GPR_VEC(ctx, 2));
    // 0x194b68: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x194b68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x194b6c: 0xc076798  jal         func_1D9E60
    ctx->pc = 0x194B6Cu;
    SET_GPR_U32(ctx, 31, 0x194B74u);
    ctx->pc = 0x194B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194B6Cu;
            // 0x194b70: 0x7ea20080  sq          $v0, 0x80($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E60u;
    if (runtime->hasFunction(0x1D9E60u)) {
        auto targetFn = runtime->lookupFunction(0x1D9E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194B74u; }
        if (ctx->pc != 0x194B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9E60_0x1d9e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194B74u; }
        if (ctx->pc != 0x194B74u) { return; }
    }
    ctx->pc = 0x194B74u;
    // 0x194b74: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x194b74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b78: 0x1ae00095  blez        $s7, . + 4 + (0x95 << 2)
    ctx->pc = 0x194B78u;
    {
        const bool branch_taken_0x194b78 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x194B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194B78u;
            // 0x194b7c: 0x2a220005  slti        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b78) {
            ctx->pc = 0x194DD0u;
            goto label_194dd0;
        }
    }
    ctx->pc = 0x194B80u;
    // 0x194b80: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x194b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b84: 0x0  nop
    ctx->pc = 0x194b84u;
    // NOP
label_194b88:
    // 0x194b88: 0xc0767cc  jal         func_1D9F30
    ctx->pc = 0x194B88u;
    SET_GPR_U32(ctx, 31, 0x194B90u);
    ctx->pc = 0x194B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194B88u;
            // 0x194b8c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F30u;
    if (runtime->hasFunction(0x1D9F30u)) {
        auto targetFn = runtime->lookupFunction(0x1D9F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194B90u; }
        if (ctx->pc != 0x194B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d9f30_0x1d9f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194B90u; }
        if (ctx->pc != 0x194B90u) { return; }
    }
    ctx->pc = 0x194B90u;
    // 0x194b90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x194b90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b94: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x194b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x194b98: 0x1215c2  srl         $v0, $s2, 23
    ctx->pc = 0x194b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 23));
    // 0x194b9c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x194b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x194ba0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x194ba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x194ba4: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x194ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x194ba8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x194ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x194bac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x194bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194bb0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x194bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194bb4: 0x14d20002  bne         $a2, $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x194BB4u;
    {
        const bool branch_taken_0x194bb4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 18));
        ctx->pc = 0x194BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194BB4u;
            // 0x194bb8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194bb4) {
            ctx->pc = 0x194BC0u;
            goto label_194bc0;
        }
    }
    ctx->pc = 0x194BBCu;
    // 0x194bbc: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x194bbcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_194bc0:
    // 0x194bc0: 0x32420007  andi        $v0, $s2, 0x7
    ctx->pc = 0x194bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x194bc4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x194BC4u;
    {
        const bool branch_taken_0x194bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194BC4u;
            // 0x194bc8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194bc4) {
            ctx->pc = 0x194BDCu;
            goto label_194bdc;
        }
    }
    ctx->pc = 0x194BCCu;
    // 0x194bcc: 0x14d20002  bne         $a2, $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x194BCCu;
    {
        const bool branch_taken_0x194bcc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 18));
        ctx->pc = 0x194BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194BCCu;
            // 0x194bd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194bcc) {
            ctx->pc = 0x194BD8u;
            goto label_194bd8;
        }
    }
    ctx->pc = 0x194BD4u;
    // 0x194bd4: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x194bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_194bd8:
    // 0x194bd8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x194bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194bdc:
    // 0x194bdc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x194BDCu;
    {
        const bool branch_taken_0x194bdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x194BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194BDCu;
            // 0x194be0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194bdc) {
            ctx->pc = 0x194C18u;
            goto label_194c18;
        }
    }
    ctx->pc = 0x194BE4u;
    // 0x194be4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x194be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x194be8: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x194be8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x194bec: 0x8c4200ec  lw          $v0, 0xEC($v0)
    ctx->pc = 0x194becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x194bf0: 0x40f809  jalr        $v0
    ctx->pc = 0x194BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194BF8u);
        ctx->pc = 0x194BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194BF0u;
            // 0x194bf4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x194BF8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194108u: goto label_194108;
            case 0x194194u: goto label_194194;
            case 0x1941E0u: goto label_1941e0;
            case 0x1941E4u: goto label_1941e4;
            case 0x194260u: goto label_194260;
            case 0x194268u: goto label_194268;
            case 0x194338u: goto label_194338;
            case 0x194368u: goto label_194368;
            case 0x194410u: goto label_194410;
            case 0x194430u: goto label_194430;
            case 0x194458u: goto label_194458;
            case 0x1944C0u: goto label_1944c0;
            case 0x1944C4u: goto label_1944c4;
            case 0x1945A0u: goto label_1945a0;
            case 0x194614u: goto label_194614;
            case 0x194718u: goto label_194718;
            case 0x19473Cu: goto label_19473c;
            case 0x1947C0u: goto label_1947c0;
            case 0x1947D0u: goto label_1947d0;
            case 0x194A48u: goto label_194a48;
            case 0x194A60u: goto label_194a60;
            case 0x194B88u: goto label_194b88;
            case 0x194BC0u: goto label_194bc0;
            case 0x194BD8u: goto label_194bd8;
            case 0x194BDCu: goto label_194bdc;
            case 0x194C18u: goto label_194c18;
            case 0x194C30u: goto label_194c30;
            case 0x194C98u: goto label_194c98;
            case 0x194D08u: goto label_194d08;
            case 0x194D2Cu: goto label_194d2c;
            case 0x194D48u: goto label_194d48;
            case 0x194D70u: goto label_194d70;
            case 0x194DACu: goto label_194dac;
            case 0x194DC8u: goto label_194dc8;
            case 0x194DCCu: goto label_194dcc;
            case 0x194DD0u: goto label_194dd0;
            case 0x194EE8u: goto label_194ee8;
            case 0x194EECu: goto label_194eec;
            case 0x194F18u: goto label_194f18;
            case 0x194F30u: goto label_194f30;
            case 0x194F68u: goto label_194f68;
            case 0x194F74u: goto label_194f74;
            case 0x194F80u: goto label_194f80;
            case 0x194FD4u: goto label_194fd4;
            case 0x194FD8u: goto label_194fd8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194BF8u; }
            if (ctx->pc != 0x194BF8u) { return; }
        }
        }
    }
    ctx->pc = 0x194BF8u;
    // 0x194bf8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x194bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x194bfc: 0x7fa203c0  sq          $v0, 0x3C0($sp)
    ctx->pc = 0x194bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 2));
    // 0x194c00: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x194c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x194c04: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x194c04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x194c08: 0x40f809  jalr        $v0
    ctx->pc = 0x194C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194C10u);
        ctx->pc = 0x194C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194C08u;
            // 0x194c0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x194C10u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194108u: goto label_194108;
            case 0x194194u: goto label_194194;
            case 0x1941E0u: goto label_1941e0;
            case 0x1941E4u: goto label_1941e4;
            case 0x194260u: goto label_194260;
            case 0x194268u: goto label_194268;
            case 0x194338u: goto label_194338;
            case 0x194368u: goto label_194368;
            case 0x194410u: goto label_194410;
            case 0x194430u: goto label_194430;
            case 0x194458u: goto label_194458;
            case 0x1944C0u: goto label_1944c0;
            case 0x1944C4u: goto label_1944c4;
            case 0x1945A0u: goto label_1945a0;
            case 0x194614u: goto label_194614;
            case 0x194718u: goto label_194718;
            case 0x19473Cu: goto label_19473c;
            case 0x1947C0u: goto label_1947c0;
            case 0x1947D0u: goto label_1947d0;
            case 0x194A48u: goto label_194a48;
            case 0x194A60u: goto label_194a60;
            case 0x194B88u: goto label_194b88;
            case 0x194BC0u: goto label_194bc0;
            case 0x194BD8u: goto label_194bd8;
            case 0x194BDCu: goto label_194bdc;
            case 0x194C18u: goto label_194c18;
            case 0x194C30u: goto label_194c30;
            case 0x194C98u: goto label_194c98;
            case 0x194D08u: goto label_194d08;
            case 0x194D2Cu: goto label_194d2c;
            case 0x194D48u: goto label_194d48;
            case 0x194D70u: goto label_194d70;
            case 0x194DACu: goto label_194dac;
            case 0x194DC8u: goto label_194dc8;
            case 0x194DCCu: goto label_194dcc;
            case 0x194DD0u: goto label_194dd0;
            case 0x194EE8u: goto label_194ee8;
            case 0x194EECu: goto label_194eec;
            case 0x194F18u: goto label_194f18;
            case 0x194F30u: goto label_194f30;
            case 0x194F68u: goto label_194f68;
            case 0x194F74u: goto label_194f74;
            case 0x194F80u: goto label_194f80;
            case 0x194FD4u: goto label_194fd4;
            case 0x194FD8u: goto label_194fd8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194C10u; }
            if (ctx->pc != 0x194C10u) { return; }
        }
        }
    }
    ctx->pc = 0x194C10u;
    // 0x194c10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x194C10u;
    {
        const bool branch_taken_0x194c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194C10u;
            // 0x194c14: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c10) {
            ctx->pc = 0x194C30u;
            goto label_194c30;
        }
    }
    ctx->pc = 0x194C18u;
label_194c18:
    // 0x194c18: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x194c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x194c1c: 0xc04c612  jal         func_131848
    ctx->pc = 0x194C1Cu;
    SET_GPR_U32(ctx, 31, 0x194C24u);
    ctx->pc = 0x194C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194C1Cu;
            // 0x194c20: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131848u;
    if (runtime->hasFunction(0x131848u)) {
        auto targetFn = runtime->lookupFunction(0x131848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C24u; }
        if (ctx->pc != 0x194C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131848_0x131848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C24u; }
        if (ctx->pc != 0x194C24u) { return; }
    }
    ctx->pc = 0x194C24u;
    // 0x194c24: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x194c24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x194c28: 0x7ba30270  lq          $v1, 0x270($sp)
    ctx->pc = 0x194c28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x194c2c: 0x7fa303c0  sq          $v1, 0x3C0($sp)
    ctx->pc = 0x194c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 3));
label_194c30:
    // 0x194c30: 0xc0909c4  jal         func_242710
    ctx->pc = 0x194C30u;
    SET_GPR_U32(ctx, 31, 0x194C38u);
    ctx->pc = 0x194C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194C30u;
            // 0x194c34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C38u; }
        if (ctx->pc != 0x194C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C38u; }
        if (ctx->pc != 0x194C38u) { return; }
    }
    ctx->pc = 0x194C38u;
    // 0x194c38: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x194c38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x194c3c: 0xdba203c0  lqc2        $vf2, 0x3C0($sp)
    ctx->pc = 0x194c3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x194c40: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x194c40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x194c44: 0xfba10390  sqc2        $vf1, 0x390($sp)
    ctx->pc = 0x194c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x194c48: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x194c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x194c4c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x194c4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x194c50: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x194c50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x194c54: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x194c54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x194c58: 0xfba10390  sqc2        $vf1, 0x390($sp)
    ctx->pc = 0x194c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x194c5c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x194c5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x194c60: 0x4614b840  add.s       $f1, $f23, $f20
    ctx->pc = 0x194c60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
    // 0x194c64: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x194c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x194c68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x194c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x194c6c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x194c6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x194c70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194c74: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x194c74u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x194c78: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x194c78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x194c7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x194c7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194c80: 0x46000004  c1          0x4
    ctx->pc = 0x194c80u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x194c84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x194c84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194c88: 0x0  nop
    ctx->pc = 0x194c88u;
    // NOP
    // 0x194c8c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x194C8Cu;
    {
        const bool branch_taken_0x194c8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x194c8c) {
            ctx->pc = 0x194C90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x194C8Cu;
            // 0x194c90: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x194C98u;
            goto label_194c98;
        }
    }
    ctx->pc = 0x194C94u;
    // 0x194c94: 0x0  nop
    ctx->pc = 0x194c94u;
    // NOP
label_194c98:
    // 0x194c98: 0x50600024  beql        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x194C98u;
    {
        const bool branch_taken_0x194c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194c98) {
            ctx->pc = 0x194C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x194C98u;
            // 0x194c9c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x194D2Cu;
            goto label_194d2c;
        }
    }
    ctx->pc = 0x194CA0u;
    // 0x194ca0: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x194CA0u;
    {
        const bool branch_taken_0x194ca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x194ca0) {
            ctx->pc = 0x194D08u;
            goto label_194d08;
        }
    }
    ctx->pc = 0x194CA8u;
    // 0x194ca8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x194ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x194cac: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x194cacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x194cb0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x194cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x194cb4: 0x40f809  jalr        $v0
    ctx->pc = 0x194CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194CBCu);
        ctx->pc = 0x194CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194CB4u;
            // 0x194cb8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x194CBCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194108u: goto label_194108;
            case 0x194194u: goto label_194194;
            case 0x1941E0u: goto label_1941e0;
            case 0x1941E4u: goto label_1941e4;
            case 0x194260u: goto label_194260;
            case 0x194268u: goto label_194268;
            case 0x194338u: goto label_194338;
            case 0x194368u: goto label_194368;
            case 0x194410u: goto label_194410;
            case 0x194430u: goto label_194430;
            case 0x194458u: goto label_194458;
            case 0x1944C0u: goto label_1944c0;
            case 0x1944C4u: goto label_1944c4;
            case 0x1945A0u: goto label_1945a0;
            case 0x194614u: goto label_194614;
            case 0x194718u: goto label_194718;
            case 0x19473Cu: goto label_19473c;
            case 0x1947C0u: goto label_1947c0;
            case 0x1947D0u: goto label_1947d0;
            case 0x194A48u: goto label_194a48;
            case 0x194A60u: goto label_194a60;
            case 0x194B88u: goto label_194b88;
            case 0x194BC0u: goto label_194bc0;
            case 0x194BD8u: goto label_194bd8;
            case 0x194BDCu: goto label_194bdc;
            case 0x194C18u: goto label_194c18;
            case 0x194C30u: goto label_194c30;
            case 0x194C98u: goto label_194c98;
            case 0x194D08u: goto label_194d08;
            case 0x194D2Cu: goto label_194d2c;
            case 0x194D48u: goto label_194d48;
            case 0x194D70u: goto label_194d70;
            case 0x194DACu: goto label_194dac;
            case 0x194DC8u: goto label_194dc8;
            case 0x194DCCu: goto label_194dcc;
            case 0x194DD0u: goto label_194dd0;
            case 0x194EE8u: goto label_194ee8;
            case 0x194EECu: goto label_194eec;
            case 0x194F18u: goto label_194f18;
            case 0x194F30u: goto label_194f30;
            case 0x194F68u: goto label_194f68;
            case 0x194F74u: goto label_194f74;
            case 0x194F80u: goto label_194f80;
            case 0x194FD4u: goto label_194fd4;
            case 0x194FD8u: goto label_194fd8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194CBCu; }
            if (ctx->pc != 0x194CBCu) { return; }
        }
        }
    }
    ctx->pc = 0x194CBCu;
    // 0x194cbc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x194CBCu;
    {
        const bool branch_taken_0x194cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194cbc) {
            ctx->pc = 0x194D08u;
            goto label_194d08;
        }
    }
    ctx->pc = 0x194CC4u;
    // 0x194cc4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x194cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x194cc8: 0x844400f0  lh          $a0, 0xF0($v0)
    ctx->pc = 0x194cc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x194ccc: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x194cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x194cd0: 0x40f809  jalr        $v0
    ctx->pc = 0x194CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194CD8u);
        ctx->pc = 0x194CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194CD0u;
            // 0x194cd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x194CD8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194108u: goto label_194108;
            case 0x194194u: goto label_194194;
            case 0x1941E0u: goto label_1941e0;
            case 0x1941E4u: goto label_1941e4;
            case 0x194260u: goto label_194260;
            case 0x194268u: goto label_194268;
            case 0x194338u: goto label_194338;
            case 0x194368u: goto label_194368;
            case 0x194410u: goto label_194410;
            case 0x194430u: goto label_194430;
            case 0x194458u: goto label_194458;
            case 0x1944C0u: goto label_1944c0;
            case 0x1944C4u: goto label_1944c4;
            case 0x1945A0u: goto label_1945a0;
            case 0x194614u: goto label_194614;
            case 0x194718u: goto label_194718;
            case 0x19473Cu: goto label_19473c;
            case 0x1947C0u: goto label_1947c0;
            case 0x1947D0u: goto label_1947d0;
            case 0x194A48u: goto label_194a48;
            case 0x194A60u: goto label_194a60;
            case 0x194B88u: goto label_194b88;
            case 0x194BC0u: goto label_194bc0;
            case 0x194BD8u: goto label_194bd8;
            case 0x194BDCu: goto label_194bdc;
            case 0x194C18u: goto label_194c18;
            case 0x194C30u: goto label_194c30;
            case 0x194C98u: goto label_194c98;
            case 0x194D08u: goto label_194d08;
            case 0x194D2Cu: goto label_194d2c;
            case 0x194D48u: goto label_194d48;
            case 0x194D70u: goto label_194d70;
            case 0x194DACu: goto label_194dac;
            case 0x194DC8u: goto label_194dc8;
            case 0x194DCCu: goto label_194dcc;
            case 0x194DD0u: goto label_194dd0;
            case 0x194EE8u: goto label_194ee8;
            case 0x194EECu: goto label_194eec;
            case 0x194F18u: goto label_194f18;
            case 0x194F30u: goto label_194f30;
            case 0x194F68u: goto label_194f68;
            case 0x194F74u: goto label_194f74;
            case 0x194F80u: goto label_194f80;
            case 0x194FD4u: goto label_194fd4;
            case 0x194FD8u: goto label_194fd8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194CD8u; }
            if (ctx->pc != 0x194CD8u) { return; }
        }
        }
    }
    ctx->pc = 0x194CD8u;
    // 0x194cd8: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x194CD8u;
    {
        const bool branch_taken_0x194cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194cd8) {
            ctx->pc = 0x194CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x194CD8u;
            // 0x194cdc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x194D2Cu;
            goto label_194d2c;
        }
    }
    ctx->pc = 0x194CE0u;
    // 0x194ce0: 0xc065500  jal         func_195400
    ctx->pc = 0x194CE0u;
    SET_GPR_U32(ctx, 31, 0x194CE8u);
    ctx->pc = 0x194CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194CE0u;
            // 0x194ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195400u;
    if (runtime->hasFunction(0x195400u)) {
        auto targetFn = runtime->lookupFunction(0x195400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194CE8u; }
        if (ctx->pc != 0x194CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_195400_0x1954a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194CE8u; }
        if (ctx->pc != 0x194CE8u) { return; }
    }
    ctx->pc = 0x194CE8u;
    // 0x194ce8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x194cec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194cf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x194cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194cf4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x194cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194cf8: 0xc065406  jal         func_195018
    ctx->pc = 0x194CF8u;
    SET_GPR_U32(ctx, 31, 0x194D00u);
    ctx->pc = 0x194CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194CF8u;
            // 0x194cfc: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x195018u;
    if (runtime->hasFunction(0x195018u)) {
        auto targetFn = runtime->lookupFunction(0x195018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D00u; }
        if (ctx->pc != 0x194D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195018_0x195018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D00u; }
        if (ctx->pc != 0x194D00u) { return; }
    }
    ctx->pc = 0x194D00u;
    // 0x194d00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x194D00u;
    {
        const bool branch_taken_0x194d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194D00u;
            // 0x194d04: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d00) {
            ctx->pc = 0x194D2Cu;
            goto label_194d2c;
        }
    }
    ctx->pc = 0x194D08u;
label_194d08:
    // 0x194d08: 0xc065500  jal         func_195400
    ctx->pc = 0x194D08u;
    SET_GPR_U32(ctx, 31, 0x194D10u);
    ctx->pc = 0x194D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194D08u;
            // 0x194d0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195400u;
    if (runtime->hasFunction(0x195400u)) {
        auto targetFn = runtime->lookupFunction(0x195400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D10u; }
        if (ctx->pc != 0x194D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_195400_0x1954a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D10u; }
        if (ctx->pc != 0x194D10u) { return; }
    }
    ctx->pc = 0x194D10u;
    // 0x194d10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194d10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x194d14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x194d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x194d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d20: 0xc0654b0  jal         func_1952C0
    ctx->pc = 0x194D20u;
    SET_GPR_U32(ctx, 31, 0x194D28u);
    ctx->pc = 0x194D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194D20u;
            // 0x194d24: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1952C0u;
    if (runtime->hasFunction(0x1952C0u)) {
        auto targetFn = runtime->lookupFunction(0x1952C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D28u; }
        if (ctx->pc != 0x194D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001952C0_0x1952c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D28u; }
        if (ctx->pc != 0x194D28u) { return; }
    }
    ctx->pc = 0x194D28u;
    // 0x194d28: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x194d28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_194d2c:
    // 0x194d2c: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x194d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x194d30: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x194D30u;
    {
        const bool branch_taken_0x194d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194D30u;
            // 0x194d34: 0x2a220005  slti        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d30) {
            ctx->pc = 0x194DCCu;
            goto label_194dcc;
        }
    }
    ctx->pc = 0x194D38u;
    // 0x194d38: 0x1440ff93  bnez        $v0, . + 4 + (-0x6D << 2)
    ctx->pc = 0x194D38u;
    {
        const bool branch_taken_0x194d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194D38u;
            // 0x194d3c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d38) {
            ctx->pc = 0x194B88u;
            runtime->cooperativeGuestYield();
            goto label_194b88;
        }
    }
    ctx->pc = 0x194D40u;
    // 0x194d40: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x194D40u;
    {
        const bool branch_taken_0x194d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194d40) {
            ctx->pc = 0x194DD0u;
            goto label_194dd0;
        }
    }
    ctx->pc = 0x194D48u;
label_194d48:
    // 0x194d48: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x194d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x194d4c: 0x2321818  mult        $v1, $s1, $s2
    ctx->pc = 0x194d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x194d50: 0x2442df70  addiu       $v0, $v0, -0x2090
    ctx->pc = 0x194d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958960));
    // 0x194d54: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x194d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194d58: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x194d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x194d5c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x194D5Cu;
    {
        const bool branch_taken_0x194d5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x194d5c) {
            ctx->pc = 0x194D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x194D5Cu;
            // 0x194d60: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x194D70u;
            goto label_194d70;
        }
    }
    ctx->pc = 0x194D64u;
    // 0x194d64: 0xc04c9da  jal         func_132768
    ctx->pc = 0x194D64u;
    SET_GPR_U32(ctx, 31, 0x194D6Cu);
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D6Cu; }
        if (ctx->pc != 0x194D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D6Cu; }
        if (ctx->pc != 0x194D6Cu) { return; }
    }
    ctx->pc = 0x194D6Cu;
    // 0x194d6c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x194d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_194d70:
    // 0x194d70: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x194D70u;
    {
        const bool branch_taken_0x194d70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194D70u;
            // 0x194d74: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d70) {
            ctx->pc = 0x194DC8u;
            goto label_194dc8;
        }
    }
    ctx->pc = 0x194D78u;
    // 0x194d78: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x194d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x194d7c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x194D7Cu;
    {
        const bool branch_taken_0x194d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194D7Cu;
            // 0x194d80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d7c) {
            ctx->pc = 0x194DACu;
            goto label_194dac;
        }
    }
    ctx->pc = 0x194D84u;
    // 0x194d84: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x194d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x194d88: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x194d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x194d8c: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x194d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x194d90: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x194d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x194d94: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x194d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x194d98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x194d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194d9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x194d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194da0: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x194DA0u;
    {
        const bool branch_taken_0x194da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x194da0) {
            ctx->pc = 0x194DACu;
            goto label_194dac;
        }
    }
    ctx->pc = 0x194DA8u;
    // 0x194da8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x194da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_194dac:
    // 0x194dac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x194DACu;
    {
        const bool branch_taken_0x194dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x194dac) {
            ctx->pc = 0x194DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x194DACu;
            // 0x194db0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x194DC8u;
            goto label_194dc8;
        }
    }
    ctx->pc = 0x194DB4u;
    // 0x194db4: 0x4be00053  vmaxw.xyzw  $vf1, $vf0, $vf0w
    ctx->pc = 0x194db4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x194db8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x194db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x194dbc: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x194DBCu;
    SET_GPR_U32(ctx, 31, 0x194DC4u);
    ctx->pc = 0x194DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194DBCu;
            // 0x194dc0: 0x48250800  qmfc2.ni    $a1, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194DC4u; }
        if (ctx->pc != 0x194DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1df800_0x1df850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194DC4u; }
        if (ctx->pc != 0x194DC4u) { return; }
    }
    ctx->pc = 0x194DC4u;
    // 0x194dc4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x194dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_194dc8:
    // 0x194dc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_194dcc:
    // 0x194dcc: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x194dccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_194dd0:
    // 0x194dd0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x194DD0u;
    {
        const bool branch_taken_0x194dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194DD0u;
            // 0x194dd4: 0x2412000c  addiu       $s2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194dd0) {
            ctx->pc = 0x194D48u;
            runtime->cooperativeGuestYield();
            goto label_194d48;
        }
    }
    ctx->pc = 0x194DD8u;
    // 0x194dd8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x194dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x194ddc: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x194ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x194de0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x194de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x194de4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x194de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x194de8: 0xc4615038  lwc1        $f1, 0x5038($v1)
    ctx->pc = 0x194de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194dec: 0x4601b801  sub.s       $f0, $f23, $f1
    ctx->pc = 0x194decu;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
    // 0x194df0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x194df0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x194df4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x194df4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x194df8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x194df8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x194dfc: 0xac625038  sw          $v0, 0x5038($v1)
    ctx->pc = 0x194dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20536), GPR_U32(ctx, 2));
    // 0x194e00: 0x70421b89  pcpyld      $v1, $v0, $v0
    ctx->pc = 0x194e00u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x194e04: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x194e04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x194e08: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x194e08u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x194e0c: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x194e0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194e10: 0x70433cc8  ppacw       $a3, $v0, $v1
    ctx->pc = 0x194e10u;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x194e14: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x194e14u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194e18: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x194e18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x194e1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x194e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194e20: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x194e20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194e24: 0x4be1296a  vmul.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x194e24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x194e28: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x194e28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194e2c: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x194e2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x194e30: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x194e30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x194e34: 0x4be1212a  vmul.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x194e34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x194e38: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x194e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194e3c: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x194e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x194e40: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x194e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x194e44: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x194e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x194e48: 0xfba10280  sqc2        $vf1, 0x280($sp)
    ctx->pc = 0x194e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x194e4c: 0xfba103a0  sqc2        $vf1, 0x3A0($sp)
    ctx->pc = 0x194e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x194e50: 0xfba50290  sqc2        $vf5, 0x290($sp)
    ctx->pc = 0x194e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194e54: 0xfba302a0  sqc2        $vf3, 0x2A0($sp)
    ctx->pc = 0x194e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x194e58: 0xfba402b0  sqc2        $vf4, 0x2B0($sp)
    ctx->pc = 0x194e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x194e5c: 0xc0909c4  jal         func_242710
    ctx->pc = 0x194E5Cu;
    SET_GPR_U32(ctx, 31, 0x194E64u);
    ctx->pc = 0x194E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194E5Cu;
            // 0x194e60: 0xfba202c0  sqc2        $vf2, 0x2C0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E64u; }
        if (ctx->pc != 0x194E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E64u; }
        if (ctx->pc != 0x194E64u) { return; }
    }
    ctx->pc = 0x194E64u;
    // 0x194e64: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x194e64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x194e68: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x194e68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x194e6c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x194e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x194e70: 0xdcc5bdf8  ld          $a1, -0x4208($a2)
    ctx->pc = 0x194e70u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x194e74: 0x8c445024  lw          $a0, 0x5024($v0)
    ctx->pc = 0x194e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
    // 0x194e78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x194e78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194e7c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x194e7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194e80: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x194e80u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x194e84: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x194e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x194e88: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x194e88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x194e8c: 0x84830060  lh          $v1, 0x60($a0)
    ctx->pc = 0x194e8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x194e90: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x194e90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194e94: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x194e94u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x194e98: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x194e98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x194e9c: 0xa3400a  movz        $t0, $a1, $v1
    ctx->pc = 0x194e9cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x194ea0: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x194ea0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ea4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x194ea4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194ea8: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x194ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x194eac: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x194eacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194eb0: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x194eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x194eb4: 0xfcc5bdf8  sd          $a1, -0x4208($a2)
    ctx->pc = 0x194eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 5));
    // 0x194eb8: 0xfc830068  sd          $v1, 0x68($a0)
    ctx->pc = 0x194eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 3));
    // 0x194ebc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x194ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x194ec0: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x194ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x194ec4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194ec8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x194ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x194ecc: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x194eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x194ed0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x194ED0u;
    {
        const bool branch_taken_0x194ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x194ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194ED0u;
            // 0x194ed4: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ed0) {
            ctx->pc = 0x194EE8u;
            goto label_194ee8;
        }
    }
    ctx->pc = 0x194ED8u;
    // 0x194ed8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x194ed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194edc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x194EDCu;
    {
        const bool branch_taken_0x194edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194EDCu;
            // 0x194ee0: 0x43900b  movn        $s2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194edc) {
            ctx->pc = 0x194EECu;
            goto label_194eec;
        }
    }
    ctx->pc = 0x194EE4u;
    // 0x194ee4: 0x0  nop
    ctx->pc = 0x194ee4u;
    // NOP
label_194ee8:
    // 0x194ee8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x194ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194eec:
    // 0x194eec: 0x12400021  beqz        $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x194EECu;
    {
        const bool branch_taken_0x194eec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x194EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194EECu;
            // 0x194ef0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194eec) {
            ctx->pc = 0x194F74u;
            goto label_194f74;
        }
    }
    ctx->pc = 0x194EF4u;
    // 0x194ef4: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x194ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194ef8: 0xc4405034  lwc1        $f0, 0x5034($v0)
    ctx->pc = 0x194ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194efc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x194efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x194f00: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x194f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x194f04: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x194f04u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x194f08: 0x46141036  c.le.s      $f2, $f20
    ctx->pc = 0x194f08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194f0c: 0x0  nop
    ctx->pc = 0x194f0cu;
    // NOP
    // 0x194f10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x194F10u;
    {
        const bool branch_taken_0x194f10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x194f10) {
            ctx->pc = 0x194F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x194F10u;
            // 0x194f14: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x194F18u;
            goto label_194f18;
        }
    }
    ctx->pc = 0x194F18u;
label_194f18:
    // 0x194f18: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x194f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x194f1c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x194f1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194f20: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x194F20u;
    {
        const bool branch_taken_0x194f20 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x194F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194F20u;
            // 0x194f24: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f20) {
            ctx->pc = 0x194F74u;
            goto label_194f74;
        }
    }
    ctx->pc = 0x194F28u;
    // 0x194f28: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x194f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x194f2c: 0x0  nop
    ctx->pc = 0x194f2cu;
    // NOP
label_194f30:
    // 0x194f30: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x194f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x194f34: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x194f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x194f38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194f3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x194f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194f40: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x194f40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x194f44: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x194F44u;
    {
        const bool branch_taken_0x194f44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x194f44) {
            ctx->pc = 0x194F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x194F44u;
            // 0x194f48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x194F68u;
            goto label_194f68;
        }
    }
    ctx->pc = 0x194F4Cu;
    // 0x194f4c: 0xc0402fc  jal         func_100BF0
    ctx->pc = 0x194F4Cu;
    SET_GPR_U32(ctx, 31, 0x194F54u);
    ctx->pc = 0x194F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194F4Cu;
            // 0x194f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100BF0u;
    if (runtime->hasFunction(0x100BF0u)) {
        auto targetFn = runtime->lookupFunction(0x100BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F54u; }
        if (ctx->pc != 0x194F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100BF0_0x100bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F54u; }
        if (ctx->pc != 0x194F54u) { return; }
    }
    ctx->pc = 0x194F54u;
    // 0x194f54: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x194f54u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x194f58: 0xc04015e  jal         func_100578
    ctx->pc = 0x194F58u;
    SET_GPR_U32(ctx, 31, 0x194F60u);
    ctx->pc = 0x194F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194F58u;
            // 0x194f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F60u; }
        if (ctx->pc != 0x194F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F60u; }
        if (ctx->pc != 0x194F60u) { return; }
    }
    ctx->pc = 0x194F60u;
    // 0x194f60: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x194f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x194f64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_194f68:
    // 0x194f68: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x194f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x194f6c: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x194F6Cu;
    {
        const bool branch_taken_0x194f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194f6c) {
            ctx->pc = 0x194F70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x194F6Cu;
            // 0x194f70: 0x8e4300d0  lw          $v1, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x194F30u;
            runtime->cooperativeGuestYield();
            goto label_194f30;
        }
    }
    ctx->pc = 0x194F74u;
label_194f74:
    // 0x194f74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x194f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f78: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x194f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x194f7c: 0x0  nop
    ctx->pc = 0x194f7cu;
    // NOP
label_194f80:
    // 0x194f80: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x194f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x194f84: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x194f84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x194f88: 0x2484df70  addiu       $a0, $a0, -0x2090
    ctx->pc = 0x194f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958960));
    // 0x194f8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x194f90: 0xc064f26  jal         func_193C98
    ctx->pc = 0x194F90u;
    SET_GPR_U32(ctx, 31, 0x194F98u);
    ctx->pc = 0x194F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194F90u;
            // 0x194f94: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193C98u;
    if (runtime->hasFunction(0x193C98u)) {
        auto targetFn = runtime->lookupFunction(0x193C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F98u; }
        if (ctx->pc != 0x194F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193C98_0x193c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F98u; }
        if (ctx->pc != 0x194F98u) { return; }
    }
    ctx->pc = 0x194F98u;
    // 0x194f98: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x194f98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x194f9c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x194F9Cu;
    {
        const bool branch_taken_0x194f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194F9Cu;
            // 0x194fa0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f9c) {
            ctx->pc = 0x194F80u;
            runtime->cooperativeGuestYield();
            goto label_194f80;
        }
    }
    ctx->pc = 0x194FA4u;
    // 0x194fa4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x194fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x194fa8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x194fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x194fac: 0xc4405034  lwc1        $f0, 0x5034($v0)
    ctx->pc = 0x194facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194fb0: 0xc462c658  lwc1        $f2, -0x39A8($v1)
    ctx->pc = 0x194fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194fb4: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x194fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194fb8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x194fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x194fbc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x194fbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194fc0: 0x0  nop
    ctx->pc = 0x194fc0u;
    // NOP
    // 0x194fc4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x194FC4u;
    {
        const bool branch_taken_0x194fc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194FC4u;
            // 0x194fc8: 0xe4405034  swc1        $f0, 0x5034($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20532), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194fc4) {
            ctx->pc = 0x194FD4u;
            goto label_194fd4;
        }
    }
    ctx->pc = 0x194FCCu;
    // 0x194fcc: 0xc0783be  jal         func_1E0EF8
    ctx->pc = 0x194FCCu;
    SET_GPR_U32(ctx, 31, 0x194FD4u);
    ctx->pc = 0x194FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194FCCu;
            // 0x194fd0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EF8u;
    if (runtime->hasFunction(0x1E0EF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194FD4u; }
        if (ctx->pc != 0x194FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EF8_0x1e0ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194FD4u; }
        if (ctx->pc != 0x194FD4u) { return; }
    }
    ctx->pc = 0x194FD4u;
label_194fd4:
    // 0x194fd4: 0x7bb00460  lq          $s0, 0x460($sp)
    ctx->pc = 0x194fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_194fd8:
    // 0x194fd8: 0x7bb10450  lq          $s1, 0x450($sp)
    ctx->pc = 0x194fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x194fdc: 0x7bb20440  lq          $s2, 0x440($sp)
    ctx->pc = 0x194fdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x194fe0: 0x7bb30430  lq          $s3, 0x430($sp)
    ctx->pc = 0x194fe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x194fe4: 0x7bb40420  lq          $s4, 0x420($sp)
    ctx->pc = 0x194fe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x194fe8: 0x7bb50410  lq          $s5, 0x410($sp)
    ctx->pc = 0x194fe8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x194fec: 0x7bb60400  lq          $s6, 0x400($sp)
    ctx->pc = 0x194fecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x194ff0: 0x7bb703f0  lq          $s7, 0x3F0($sp)
    ctx->pc = 0x194ff0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x194ff4: 0x7bbe03e0  lq          $fp, 0x3E0($sp)
    ctx->pc = 0x194ff4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x194ff8: 0xdfbf03d0  ld          $ra, 0x3D0($sp)
    ctx->pc = 0x194ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x194ffc: 0xc7b80490  lwc1        $f24, 0x490($sp)
    ctx->pc = 0x194ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x195000: 0xc7b70488  lwc1        $f23, 0x488($sp)
    ctx->pc = 0x195000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x195004: 0xc7b60480  lwc1        $f22, 0x480($sp)
    ctx->pc = 0x195004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x195008: 0xc7b50478  lwc1        $f21, 0x478($sp)
    ctx->pc = 0x195008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19500c: 0xc7b40470  lwc1        $f20, 0x470($sp)
    ctx->pc = 0x19500cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x195010: 0x3e00008  jr          $ra
    ctx->pc = 0x195010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195010u;
            // 0x195014: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194108u: goto label_194108;
            case 0x194194u: goto label_194194;
            case 0x1941E0u: goto label_1941e0;
            case 0x1941E4u: goto label_1941e4;
            case 0x194260u: goto label_194260;
            case 0x194268u: goto label_194268;
            case 0x194338u: goto label_194338;
            case 0x194368u: goto label_194368;
            case 0x194410u: goto label_194410;
            case 0x194430u: goto label_194430;
            case 0x194458u: goto label_194458;
            case 0x1944C0u: goto label_1944c0;
            case 0x1944C4u: goto label_1944c4;
            case 0x1945A0u: goto label_1945a0;
            case 0x194614u: goto label_194614;
            case 0x194718u: goto label_194718;
            case 0x19473Cu: goto label_19473c;
            case 0x1947C0u: goto label_1947c0;
            case 0x1947D0u: goto label_1947d0;
            case 0x194A48u: goto label_194a48;
            case 0x194A60u: goto label_194a60;
            case 0x194B88u: goto label_194b88;
            case 0x194BC0u: goto label_194bc0;
            case 0x194BD8u: goto label_194bd8;
            case 0x194BDCu: goto label_194bdc;
            case 0x194C18u: goto label_194c18;
            case 0x194C30u: goto label_194c30;
            case 0x194C98u: goto label_194c98;
            case 0x194D08u: goto label_194d08;
            case 0x194D2Cu: goto label_194d2c;
            case 0x194D48u: goto label_194d48;
            case 0x194D70u: goto label_194d70;
            case 0x194DACu: goto label_194dac;
            case 0x194DC8u: goto label_194dc8;
            case 0x194DCCu: goto label_194dcc;
            case 0x194DD0u: goto label_194dd0;
            case 0x194EE8u: goto label_194ee8;
            case 0x194EECu: goto label_194eec;
            case 0x194F18u: goto label_194f18;
            case 0x194F30u: goto label_194f30;
            case 0x194F68u: goto label_194f68;
            case 0x194F74u: goto label_194f74;
            case 0x194F80u: goto label_194f80;
            case 0x194FD4u: goto label_194fd4;
            case 0x194FD8u: goto label_194fd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195018u;
}
