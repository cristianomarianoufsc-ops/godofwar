#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FE098
// Address: 0x1fe098 - 0x1fe4f0
void sub_001FE098_0x1fe098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE098_0x1fe098");
#endif

    ctx->pc = 0x1fe098u;

    // 0x1fe098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fe098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fe09c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fe09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fe0a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe0a4: 0xc07f4c8  jal         func_1FD320
    ctx->pc = 0x1FE0A4u;
    SET_GPR_U32(ctx, 31, 0x1FE0ACu);
    ctx->pc = 0x1FE0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE0A4u;
            // 0x1fe0a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD320u;
    if (runtime->hasFunction(0x1FD320u)) {
        auto targetFn = runtime->lookupFunction(0x1FD320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE0ACu; }
        if (ctx->pc != 0x1FE0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1fd320_0x1fd340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE0ACu; }
        if (ctx->pc != 0x1FE0ACu) { return; }
    }
    ctx->pc = 0x1FE0ACu;
    // 0x1fe0ac: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1fe0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1fe0b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fe0b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe0b4: 0x24639678  addiu       $v1, $v1, -0x6988
    ctx->pc = 0x1fe0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940280));
    // 0x1fe0b8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1fe0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1fe0bc: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1fe0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1fe0c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fe0c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe0c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE0C8u;
            // 0x1fe0cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE120u: goto label_1fe120;
            case 0x1FE198u: goto label_1fe198;
            case 0x1FE1C0u: goto label_1fe1c0;
            case 0x1FE1F8u: goto label_1fe1f8;
            case 0x1FE1FCu: goto label_1fe1fc;
            case 0x1FE248u: goto label_1fe248;
            case 0x1FE24Cu: goto label_1fe24c;
            case 0x1FE448u: goto label_1fe448;
            case 0x1FE468u: goto label_1fe468;
            case 0x1FE4A0u: goto label_1fe4a0;
            case 0x1FE4A4u: goto label_1fe4a4;
            case 0x1FE4BCu: goto label_1fe4bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FE0D0u;
    // 0x1fe0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE120u: goto label_1fe120;
            case 0x1FE198u: goto label_1fe198;
            case 0x1FE1C0u: goto label_1fe1c0;
            case 0x1FE1F8u: goto label_1fe1f8;
            case 0x1FE1FCu: goto label_1fe1fc;
            case 0x1FE248u: goto label_1fe248;
            case 0x1FE24Cu: goto label_1fe24c;
            case 0x1FE448u: goto label_1fe448;
            case 0x1FE468u: goto label_1fe468;
            case 0x1FE4A0u: goto label_1fe4a0;
            case 0x1FE4A4u: goto label_1fe4a4;
            case 0x1FE4BCu: goto label_1fe4bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FE0D8u;
    // 0x1fe0d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fe0dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fe0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe0e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe0e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fe0e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe0e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fe0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fe0ec: 0x8cb00320  lw          $s0, 0x320($a1)
    ctx->pc = 0x1fe0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 800)));
    // 0x1fe0f0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1fe0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1fe0f4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1fe0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1fe0f8: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1FE0F8u;
    SET_GPR_U32(ctx, 31, 0x1FE100u);
    ctx->pc = 0x1FE0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE0F8u;
            // 0x1fe0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE100u; }
        if (ctx->pc != 0x1FE100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE100u; }
        if (ctx->pc != 0x1FE100u) { return; }
    }
    ctx->pc = 0x1FE100u;
    // 0x1fe100: 0x80420254  lb          $v0, 0x254($v0)
    ctx->pc = 0x1fe100u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 596)));
    // 0x1fe104: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE104u;
    {
        const bool branch_taken_0x1fe104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe104) {
            ctx->pc = 0x1FE120u;
            goto label_1fe120;
        }
    }
    ctx->pc = 0x1FE10Cu;
    // 0x1fe10c: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1FE10Cu;
    SET_GPR_U32(ctx, 31, 0x1FE114u);
    ctx->pc = 0x1FE110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE10Cu;
            // 0x1fe110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE114u; }
        if (ctx->pc != 0x1FE114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE114u; }
        if (ctx->pc != 0x1FE114u) { return; }
    }
    ctx->pc = 0x1FE114u;
    // 0x1fe114: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1FE114u;
    SET_GPR_U32(ctx, 31, 0x1FE11Cu);
    ctx->pc = 0x1FE118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE114u;
            // 0x1fe118: 0x24440254  addiu       $a0, $v0, 0x254 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 596));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE11Cu; }
        if (ctx->pc != 0x1FE11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE11Cu; }
        if (ctx->pc != 0x1FE11Cu) { return; }
    }
    ctx->pc = 0x1FE11Cu;
    // 0x1fe11c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1fe11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_1fe120:
    // 0x1fe120: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1FE120u;
    SET_GPR_U32(ctx, 31, 0x1FE128u);
    ctx->pc = 0x1FE124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE120u;
            // 0x1fe124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE128u; }
        if (ctx->pc != 0x1FE128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE128u; }
        if (ctx->pc != 0x1FE128u) { return; }
    }
    ctx->pc = 0x1FE128u;
    // 0x1fe128: 0xc440024c  lwc1        $f0, 0x24C($v0)
    ctx->pc = 0x1fe128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe12c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe130: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1FE130u;
    SET_GPR_U32(ctx, 31, 0x1FE138u);
    ctx->pc = 0x1FE134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE130u;
            // 0x1fe134: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE138u; }
        if (ctx->pc != 0x1FE138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE138u; }
        if (ctx->pc != 0x1FE138u) { return; }
    }
    ctx->pc = 0x1FE138u;
    // 0x1fe138: 0xc4400250  lwc1        $f0, 0x250($v0)
    ctx->pc = 0x1fe138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe13c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fe13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe140: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x1fe140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x1fe144: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe14c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE14Cu;
            // 0x1fe150: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE120u: goto label_1fe120;
            case 0x1FE198u: goto label_1fe198;
            case 0x1FE1C0u: goto label_1fe1c0;
            case 0x1FE1F8u: goto label_1fe1f8;
            case 0x1FE1FCu: goto label_1fe1fc;
            case 0x1FE248u: goto label_1fe248;
            case 0x1FE24Cu: goto label_1fe24c;
            case 0x1FE448u: goto label_1fe448;
            case 0x1FE468u: goto label_1fe468;
            case 0x1FE4A0u: goto label_1fe4a0;
            case 0x1FE4A4u: goto label_1fe4a4;
            case 0x1FE4BCu: goto label_1fe4bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FE154u;
    // 0x1fe154: 0x0  nop
    ctx->pc = 0x1fe154u;
    // NOP
    // 0x1fe158: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fe158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fe15c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1fe15cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe160: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fe160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1fe164: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fe164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1fe168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fe168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fe16c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fe16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fe170: 0x8cd2000c  lw          $s2, 0xC($a2)
    ctx->pc = 0x1fe170u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1fe174: 0x8e510018  lw          $s1, 0x18($s2)
    ctx->pc = 0x1fe174u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1fe178: 0x8e2300fc  lw          $v1, 0xFC($s1)
    ctx->pc = 0x1fe178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x1fe17c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FE17Cu;
    {
        const bool branch_taken_0x1fe17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE17Cu;
            // 0x1fe180: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe17c) {
            ctx->pc = 0x1FE1C0u;
            goto label_1fe1c0;
        }
    }
    ctx->pc = 0x1FE184u;
    // 0x1fe184: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1fe184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1fe188: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fe188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe18c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FE18Cu;
    {
        const bool branch_taken_0x1fe18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FE190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE18Cu;
            // 0x1fe190: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe18c) {
            ctx->pc = 0x1FE1C0u;
            goto label_1fe1c0;
        }
    }
    ctx->pc = 0x1FE194u;
    // 0x1fe194: 0x0  nop
    ctx->pc = 0x1fe194u;
    // NOP
label_1fe198:
    // 0x1fe198: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1fe198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fe19c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1fe19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fe1a0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1fe1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1fe1a4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE1A4u;
    {
        const bool branch_taken_0x1fe1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe1a4) {
            ctx->pc = 0x1FE1A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE1A4u;
            // 0x1fe1a8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE1C0u;
            goto label_1fe1c0;
        }
    }
    ctx->pc = 0x1FE1ACu;
    // 0x1fe1ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fe1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fe1b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fe1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe1b4: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FE1B4u;
    {
        const bool branch_taken_0x1fe1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FE1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE1B4u;
            // 0x1fe1b8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe1b4) {
            ctx->pc = 0x1FE198u;
            runtime->cooperativeGuestYield();
            goto label_1fe198;
        }
    }
    ctx->pc = 0x1FE1BCu;
    // 0x1fe1bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fe1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe1c0:
    // 0x1fe1c0: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1fe1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1fe1c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FE1C4u;
    {
        const bool branch_taken_0x1fe1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE1C4u;
            // 0x1fe1c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe1c4) {
            ctx->pc = 0x1FE1FCu;
            goto label_1fe1fc;
        }
    }
    ctx->pc = 0x1FE1CCu;
    // 0x1fe1cc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1fe1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1fe1d0: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1fe1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1fe1d4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1fe1d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1fe1d8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1fe1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1fe1dc: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1fe1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1fe1e0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1fe1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1fe1e4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1fe1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe1e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fe1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe1ec: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE1ECu;
    {
        const bool branch_taken_0x1fe1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1FE1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE1ECu;
            // 0x1fe1f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe1ec) {
            ctx->pc = 0x1FE1F8u;
            goto label_1fe1f8;
        }
    }
    ctx->pc = 0x1FE1F4u;
    // 0x1fe1f4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1fe1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1fe1f8:
    // 0x1fe1f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe1f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fe1fc:
    // 0x1fe1fc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1fe1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe200: 0xc089d48  jal         func_227520
    ctx->pc = 0x1FE200u;
    SET_GPR_U32(ctx, 31, 0x1FE208u);
    ctx->pc = 0x1FE204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE200u;
            // 0x1fe204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227520u;
    if (runtime->hasFunction(0x227520u)) {
        auto targetFn = runtime->lookupFunction(0x227520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE208u; }
        if (ctx->pc != 0x1FE208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_227520_0x227648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE208u; }
        if (ctx->pc != 0x1FE208u) { return; }
    }
    ctx->pc = 0x1FE208u;
    // 0x1fe208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe20c: 0xc04c55c  jal         func_131570
    ctx->pc = 0x1FE20Cu;
    SET_GPR_U32(ctx, 31, 0x1FE214u);
    ctx->pc = 0x1FE210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE20Cu;
            // 0x1fe210: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131570u;
    if (runtime->hasFunction(0x131570u)) {
        auto targetFn = runtime->lookupFunction(0x131570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE214u; }
        if (ctx->pc != 0x1FE214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131570_0x131570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE214u; }
        if (ctx->pc != 0x1FE214u) { return; }
    }
    ctx->pc = 0x1FE214u;
    // 0x1fe214: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1FE214u;
    {
        const bool branch_taken_0x1fe214 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe214) {
            ctx->pc = 0x1FE218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE214u;
            // 0x1fe218: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE24Cu;
            goto label_1fe24c;
        }
    }
    ctx->pc = 0x1FE21Cu;
    // 0x1fe21c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fe21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fe220: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1fe220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1fe224: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1fe224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1fe228: 0x40f809  jalr        $v0
    ctx->pc = 0x1FE228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE230u);
        ctx->pc = 0x1FE22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE228u;
            // 0x1fe22c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE230u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE120u: goto label_1fe120;
            case 0x1FE198u: goto label_1fe198;
            case 0x1FE1C0u: goto label_1fe1c0;
            case 0x1FE1F8u: goto label_1fe1f8;
            case 0x1FE1FCu: goto label_1fe1fc;
            case 0x1FE248u: goto label_1fe248;
            case 0x1FE24Cu: goto label_1fe24c;
            case 0x1FE448u: goto label_1fe448;
            case 0x1FE468u: goto label_1fe468;
            case 0x1FE4A0u: goto label_1fe4a0;
            case 0x1FE4A4u: goto label_1fe4a4;
            case 0x1FE4BCu: goto label_1fe4bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE230u; }
            if (ctx->pc != 0x1FE230u) { return; }
        }
        }
    }
    ctx->pc = 0x1FE230u;
    // 0x1fe230: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fe230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe234: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE234u;
    {
        const bool branch_taken_0x1fe234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE234u;
            // 0x1fe238: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe234) {
            ctx->pc = 0x1FE248u;
            goto label_1fe248;
        }
    }
    ctx->pc = 0x1FE23Cu;
    // 0x1fe23c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1fe23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1fe240: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fe240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fe244: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1fe244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_1fe248:
    // 0x1fe248: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fe248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fe24c:
    // 0x1fe24c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fe24cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe250: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fe250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fe254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe258: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE258u;
            // 0x1fe25c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE120u: goto label_1fe120;
            case 0x1FE198u: goto label_1fe198;
            case 0x1FE1C0u: goto label_1fe1c0;
            case 0x1FE1F8u: goto label_1fe1f8;
            case 0x1FE1FCu: goto label_1fe1fc;
            case 0x1FE248u: goto label_1fe248;
            case 0x1FE24Cu: goto label_1fe24c;
            case 0x1FE448u: goto label_1fe448;
            case 0x1FE468u: goto label_1fe468;
            case 0x1FE4A0u: goto label_1fe4a0;
            case 0x1FE4A4u: goto label_1fe4a4;
            case 0x1FE4BCu: goto label_1fe4bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FE260u;
    // 0x1fe260: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1fe260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1fe264: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1fe264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1fe268: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1fe268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1fe26c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fe26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe270: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x1fe270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x1fe274: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fe274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe278: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1fe278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1fe27c: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x1fe27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x1fe280: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x1fe280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x1fe284: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x1fe284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x1fe288: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x1fe288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x1fe28c: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1fe28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x1fe290: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1fe290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1fe294: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x1fe294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fe298: 0xc64d0028  lwc1        $f13, 0x28($s2)
    ctx->pc = 0x1fe298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fe29c: 0x9e170174  lwu         $s7, 0x174($s0)
    ctx->pc = 0x1fe29cu;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1fe2a0: 0xc07f4d0  jal         func_1FD340
    ctx->pc = 0x1FE2A0u;
    SET_GPR_U32(ctx, 31, 0x1FE2A8u);
    ctx->pc = 0x1FE2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE2A0u;
            // 0x1fe2a4: 0x9e1e02d8  lwu         $fp, 0x2D8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD340u;
    if (runtime->hasFunction(0x1FD340u)) {
        auto targetFn = runtime->lookupFunction(0x1FD340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE2A8u; }
        if (ctx->pc != 0x1FE2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD340_0x1fd340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE2A8u; }
        if (ctx->pc != 0x1FE2A8u) { return; }
    }
    ctx->pc = 0x1FE2A8u;
    // 0x1fe2a8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1fe2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1fe2ac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1fe2acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe2b0: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x1fe2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1fe2b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fe2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fe2b8: 0x5040007a  beql        $v0, $zero, . + 4 + (0x7A << 2)
    ctx->pc = 0x1FE2B8u;
    {
        const bool branch_taken_0x1fe2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe2b8) {
            ctx->pc = 0x1FE2BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE2B8u;
            // 0x1fe2bc: 0xfe570000  sd          $s7, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE4A4u;
            goto label_1fe4a4;
        }
    }
    ctx->pc = 0x1FE2C0u;
    // 0x1fe2c0: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x1fe2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe2c4: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x1fe2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe2c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1fe2c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fe2cc: 0x0  nop
    ctx->pc = 0x1fe2ccu;
    // NOP
    // 0x1fe2d0: 0x45000073  bc1f        . + 4 + (0x73 << 2)
    ctx->pc = 0x1FE2D0u;
    {
        const bool branch_taken_0x1fe2d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FE2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE2D0u;
            // 0x1fe2d4: 0x34620001  ori         $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2d0) {
            ctx->pc = 0x1FE4A0u;
            goto label_1fe4a0;
        }
    }
    ctx->pc = 0x1FE2D8u;
    // 0x1fe2d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe2dc: 0xc077eea  jal         func_1DFBA8
    ctx->pc = 0x1FE2DCu;
    SET_GPR_U32(ctx, 31, 0x1FE2E4u);
    ctx->pc = 0x1FE2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE2DCu;
            // 0x1fe2e0: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFBA8u;
    if (runtime->hasFunction(0x1DFBA8u)) {
        auto targetFn = runtime->lookupFunction(0x1DFBA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE2E4u; }
        if (ctx->pc != 0x1FE2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFBA8_0x1dfba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE2E4u; }
        if (ctx->pc != 0x1FE2E4u) { return; }
    }
    ctx->pc = 0x1FE2E4u;
    // 0x1fe2e4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1fe2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1fe2e8: 0x5040006e  beql        $v0, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x1FE2E8u;
    {
        const bool branch_taken_0x1fe2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe2e8) {
            ctx->pc = 0x1FE2ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE2E8u;
            // 0x1fe2ec: 0xfe570000  sd          $s7, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE4A4u;
            goto label_1fe4a4;
        }
    }
    ctx->pc = 0x1FE2F0u;
    // 0x1fe2f0: 0x4be3033c  vmove.xyzw  $vf3, $vf0
    ctx->pc = 0x1fe2f0u;
    ctx->vu0_vf[3] = ctx->vu0_vf[0];
    // 0x1fe2f4: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x1fe2f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fe2f8: 0x4be21b3d  vmr32.xyzw  $vf2, $vf3
    ctx->pc = 0x1fe2f8u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1fe2fc: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1fe2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fe300: 0x4be1133d  vmr32.xyzw  $vf1, $vf2
    ctx->pc = 0x1fe300u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x1fe304: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1fe304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fe308: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x1fe308u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1fe30c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1fe30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fe310: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1fe310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fe314: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x1fe314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fe318: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1fe318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fe31c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1fe31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fe320: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1fe320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fe324: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1fe324u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1fe328: 0x2630e848  addiu       $s0, $s1, -0x17B8
    ctx->pc = 0x1fe328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961224));
    // 0x1fe32c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fe32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe330: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fe330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fe334: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fe334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fe338: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1fe338u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1fe33c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1fe33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1fe340: 0x40f809  jalr        $v0
    ctx->pc = 0x1FE340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE348u);
        ctx->pc = 0x1FE344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE340u;
            // 0x1fe344: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE348u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE120u: goto label_1fe120;
            case 0x1FE198u: goto label_1fe198;
            case 0x1FE1C0u: goto label_1fe1c0;
            case 0x1FE1F8u: goto label_1fe1f8;
            case 0x1FE1FCu: goto label_1fe1fc;
            case 0x1FE248u: goto label_1fe248;
            case 0x1FE24Cu: goto label_1fe24c;
            case 0x1FE448u: goto label_1fe448;
            case 0x1FE468u: goto label_1fe468;
            case 0x1FE4A0u: goto label_1fe4a0;
            case 0x1FE4A4u: goto label_1fe4a4;
            case 0x1FE4BCu: goto label_1fe4bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE348u; }
            if (ctx->pc != 0x1FE348u) { return; }
        }
        }
    }
    ctx->pc = 0x1FE348u;
    // 0x1fe348: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x1fe348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1fe34c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1fe34cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fe350: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fe350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe354: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1fe354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fe358: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fe358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fe35c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fe35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fe360: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1fe360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1fe364: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1fe364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1fe368: 0x40f809  jalr        $v0
    ctx->pc = 0x1FE368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE370u);
        ctx->pc = 0x1FE36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE368u;
            // 0x1fe36c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE370u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE120u: goto label_1fe120;
            case 0x1FE198u: goto label_1fe198;
            case 0x1FE1C0u: goto label_1fe1c0;
            case 0x1FE1F8u: goto label_1fe1f8;
            case 0x1FE1FCu: goto label_1fe1fc;
            case 0x1FE248u: goto label_1fe248;
            case 0x1FE24Cu: goto label_1fe24c;
            case 0x1FE448u: goto label_1fe448;
            case 0x1FE468u: goto label_1fe468;
            case 0x1FE4A0u: goto label_1fe4a0;
            case 0x1FE4A4u: goto label_1fe4a4;
            case 0x1FE4BCu: goto label_1fe4bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE370u; }
            if (ctx->pc != 0x1FE370u) { return; }
        }
        }
    }
    ctx->pc = 0x1FE370u;
    // 0x1fe370: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fe370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fe374: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fe374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fe378: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fe378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe37c: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1fe37cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1fe380: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1fe380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1fe384: 0x40f809  jalr        $v0
    ctx->pc = 0x1FE384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE38Cu);
        ctx->pc = 0x1FE388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE384u;
            // 0x1fe388: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE38Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE120u: goto label_1fe120;
            case 0x1FE198u: goto label_1fe198;
            case 0x1FE1C0u: goto label_1fe1c0;
            case 0x1FE1F8u: goto label_1fe1f8;
            case 0x1FE1FCu: goto label_1fe1fc;
            case 0x1FE248u: goto label_1fe248;
            case 0x1FE24Cu: goto label_1fe24c;
            case 0x1FE448u: goto label_1fe448;
            case 0x1FE468u: goto label_1fe468;
            case 0x1FE4A0u: goto label_1fe4a0;
            case 0x1FE4A4u: goto label_1fe4a4;
            case 0x1FE4BCu: goto label_1fe4bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE38Cu; }
            if (ctx->pc != 0x1FE38Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FE38Cu;
    // 0x1fe38c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1fe38cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fe390: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x1fe390u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe394: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fe394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fe398: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe39c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1fe39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1fe3a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fe3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe3a4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fe3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fe3a8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1fe3a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1fe3ac: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1fe3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1fe3b0: 0x40f809  jalr        $v0
    ctx->pc = 0x1FE3B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE3B8u);
        ctx->pc = 0x1FE3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE3B0u;
            // 0x1fe3b4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE3B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE120u: goto label_1fe120;
            case 0x1FE198u: goto label_1fe198;
            case 0x1FE1C0u: goto label_1fe1c0;
            case 0x1FE1F8u: goto label_1fe1f8;
            case 0x1FE1FCu: goto label_1fe1fc;
            case 0x1FE248u: goto label_1fe248;
            case 0x1FE24Cu: goto label_1fe24c;
            case 0x1FE448u: goto label_1fe448;
            case 0x1FE468u: goto label_1fe468;
            case 0x1FE4A0u: goto label_1fe4a0;
            case 0x1FE4A4u: goto label_1fe4a4;
            case 0x1FE4BCu: goto label_1fe4bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE3B8u; }
            if (ctx->pc != 0x1FE3B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1FE3B8u;
    // 0x1fe3b8: 0xc089990  jal         func_226640
    ctx->pc = 0x1FE3B8u;
    SET_GPR_U32(ctx, 31, 0x1FE3C0u);
    ctx->pc = 0x1FE3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE3B8u;
            // 0x1fe3bc: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (runtime->hasFunction(0x226640u)) {
        auto targetFn = runtime->lookupFunction(0x226640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE3C0u; }
        if (ctx->pc != 0x1FE3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226640_0x226680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE3C0u; }
        if (ctx->pc != 0x1FE3C0u) { return; }
    }
    ctx->pc = 0x1FE3C0u;
    // 0x1fe3c0: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x1fe3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1fe3c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fe3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1fe3c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3cc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1fe3ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3d0: 0xc089e44  jal         func_227910
    ctx->pc = 0x1FE3D0u;
    SET_GPR_U32(ctx, 31, 0x1FE3D8u);
    ctx->pc = 0x1FE3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE3D0u;
            // 0x1fe3d4: 0x2408fffd  addiu       $t0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227910u;
    if (runtime->hasFunction(0x227910u)) {
        auto targetFn = runtime->lookupFunction(0x227910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE3D8u; }
        if (ctx->pc != 0x1FE3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227910_0x227910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE3D8u; }
        if (ctx->pc != 0x1FE3D8u) { return; }
    }
    ctx->pc = 0x1FE3D8u;
    // 0x1fe3d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1fe3d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3dc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1fe3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fe3e0: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1fe3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1fe3e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1fe3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1fe3e8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FE3E8u;
    {
        const bool branch_taken_0x1fe3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE3E8u;
            // 0x1fe3ec: 0x27b10080  addiu       $s1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3e8) {
            ctx->pc = 0x1FE468u;
            goto label_1fe468;
        }
    }
    ctx->pc = 0x1FE3F0u;
    // 0x1fe3f0: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x1fe3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1fe3f4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1fe3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1fe3f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3fc: 0x24a57968  addiu       $a1, $a1, 0x7968
    ctx->pc = 0x1fe3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31080));
    // 0x1fe400: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1FE400u;
    SET_GPR_U32(ctx, 31, 0x1FE408u);
    ctx->pc = 0x1FE404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE400u;
            // 0x1fe404: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE408u; }
        if (ctx->pc != 0x1FE408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE408u; }
        if (ctx->pc != 0x1FE408u) { return; }
    }
    ctx->pc = 0x1FE408u;
    // 0x1fe408: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1FE408u;
    SET_GPR_U32(ctx, 31, 0x1FE410u);
    ctx->pc = 0x1FE40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE408u;
            // 0x1fe40c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE410u; }
        if (ctx->pc != 0x1FE410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE410u; }
        if (ctx->pc != 0x1FE410u) { return; }
    }
    ctx->pc = 0x1FE410u;
    // 0x1fe410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe414: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1FE414u;
    {
        const bool branch_taken_0x1fe414 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe414) {
            ctx->pc = 0x1FE418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE414u;
            // 0x1fe418: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE448u;
            goto label_1fe448;
        }
    }
    ctx->pc = 0x1FE41Cu;
    // 0x1fe41c: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1FE41Cu;
    SET_GPR_U32(ctx, 31, 0x1FE424u);
    ctx->pc = 0x1FE420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE41Cu;
            // 0x1fe420: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE424u; }
        if (ctx->pc != 0x1FE424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE424u; }
        if (ctx->pc != 0x1FE424u) { return; }
    }
    ctx->pc = 0x1FE424u;
    // 0x1fe424: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe428: 0x8e840104  lw          $a0, 0x104($s4)
    ctx->pc = 0x1fe428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x1fe42c: 0xc089c86  jal         func_227218
    ctx->pc = 0x1FE42Cu;
    SET_GPR_U32(ctx, 31, 0x1FE434u);
    ctx->pc = 0x1FE430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE42Cu;
            // 0x1fe430: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227218u;
    if (runtime->hasFunction(0x227218u)) {
        auto targetFn = runtime->lookupFunction(0x227218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE434u; }
        if (ctx->pc != 0x1FE434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_227218_0x2274b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE434u; }
        if (ctx->pc != 0x1FE434u) { return; }
    }
    ctx->pc = 0x1FE434u;
    // 0x1fe434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe438: 0xc05e9fc  jal         func_17A7F0
    ctx->pc = 0x1FE438u;
    SET_GPR_U32(ctx, 31, 0x1FE440u);
    ctx->pc = 0x1FE43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE438u;
            // 0x1fe43c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A7F0u;
    if (runtime->hasFunction(0x17A7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17A7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE440u; }
        if (ctx->pc != 0x1FE440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A7F0_0x17a7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE440u; }
        if (ctx->pc != 0x1FE440u) { return; }
    }
    ctx->pc = 0x1FE440u;
    // 0x1fe440: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1fe440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1fe444: 0x0  nop
    ctx->pc = 0x1fe444u;
    // NOP
label_1fe448:
    // 0x1fe448: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fe448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe44c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fe44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe450: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1fe450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1fe454: 0xc089d48  jal         func_227520
    ctx->pc = 0x1FE454u;
    SET_GPR_U32(ctx, 31, 0x1FE45Cu);
    ctx->pc = 0x1FE458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE454u;
            // 0x1fe458: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227520u;
    if (runtime->hasFunction(0x227520u)) {
        auto targetFn = runtime->lookupFunction(0x227520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE45Cu; }
        if (ctx->pc != 0x1FE45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_227520_0x227648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE45Cu; }
        if (ctx->pc != 0x1FE45Cu) { return; }
    }
    ctx->pc = 0x1FE45Cu;
    // 0x1fe45c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fe45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1fe460: 0x2442e158  addiu       $v0, $v0, -0x1EA8
    ctx->pc = 0x1fe460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959448));
    // 0x1fe464: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x1fe464u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_1fe468:
    // 0x1fe468: 0x26b0e848  addiu       $s0, $s5, -0x17B8
    ctx->pc = 0x1fe468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961224));
    // 0x1fe46c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fe46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fe470: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fe470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fe474: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1fe474u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1fe478: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1fe478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1fe47c: 0x40f809  jalr        $v0
    ctx->pc = 0x1FE47Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE484u);
        ctx->pc = 0x1FE480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE47Cu;
            // 0x1fe480: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE484u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE120u: goto label_1fe120;
            case 0x1FE198u: goto label_1fe198;
            case 0x1FE1C0u: goto label_1fe1c0;
            case 0x1FE1F8u: goto label_1fe1f8;
            case 0x1FE1FCu: goto label_1fe1fc;
            case 0x1FE248u: goto label_1fe248;
            case 0x1FE24Cu: goto label_1fe24c;
            case 0x1FE448u: goto label_1fe448;
            case 0x1FE468u: goto label_1fe468;
            case 0x1FE4A0u: goto label_1fe4a0;
            case 0x1FE4A4u: goto label_1fe4a4;
            case 0x1FE4BCu: goto label_1fe4bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE484u; }
            if (ctx->pc != 0x1FE484u) { return; }
        }
        }
    }
    ctx->pc = 0x1FE484u;
    // 0x1fe484: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1fe484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1fe488: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fe488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fe48c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1fe48cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1fe490: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1fe490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1fe494: 0x40f809  jalr        $v0
    ctx->pc = 0x1FE494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE49Cu);
        ctx->pc = 0x1FE498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE494u;
            // 0x1fe498: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE49Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE120u: goto label_1fe120;
            case 0x1FE198u: goto label_1fe198;
            case 0x1FE1C0u: goto label_1fe1c0;
            case 0x1FE1F8u: goto label_1fe1f8;
            case 0x1FE1FCu: goto label_1fe1fc;
            case 0x1FE248u: goto label_1fe248;
            case 0x1FE24Cu: goto label_1fe24c;
            case 0x1FE448u: goto label_1fe448;
            case 0x1FE468u: goto label_1fe468;
            case 0x1FE4A0u: goto label_1fe4a0;
            case 0x1FE4A4u: goto label_1fe4a4;
            case 0x1FE4BCu: goto label_1fe4bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE49Cu; }
            if (ctx->pc != 0x1FE49Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FE49Cu;
    // 0x1fe49c: 0x0  nop
    ctx->pc = 0x1fe49cu;
    // NOP
label_1fe4a0:
    // 0x1fe4a0: 0xfe570000  sd          $s7, 0x0($s2)
    ctx->pc = 0x1fe4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 23));
label_1fe4a4:
    // 0x1fe4a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe4a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe4a8: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE4A8u;
    {
        const bool branch_taken_0x1fe4a8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE4A8u;
            // 0x1fe4ac: 0xfe5e0008  sd          $fp, 0x8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4a8) {
            ctx->pc = 0x1FE4BCu;
            goto label_1fe4bc;
        }
    }
    ctx->pc = 0x1FE4B0u;
    // 0x1fe4b0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1fe4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1fe4b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1fe4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1fe4b8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1fe4b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1fe4bc:
    // 0x1fe4bc: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1fe4bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1fe4c0: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1fe4c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1fe4c4: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1fe4c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1fe4c8: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x1fe4c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1fe4cc: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x1fe4ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1fe4d0: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x1fe4d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1fe4d4: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x1fe4d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fe4d8: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x1fe4d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1fe4dc: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1fe4dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fe4e0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1fe4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fe4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE4E4u;
            // 0x1fe4e8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE120u: goto label_1fe120;
            case 0x1FE198u: goto label_1fe198;
            case 0x1FE1C0u: goto label_1fe1c0;
            case 0x1FE1F8u: goto label_1fe1f8;
            case 0x1FE1FCu: goto label_1fe1fc;
            case 0x1FE248u: goto label_1fe248;
            case 0x1FE24Cu: goto label_1fe24c;
            case 0x1FE448u: goto label_1fe448;
            case 0x1FE468u: goto label_1fe468;
            case 0x1FE4A0u: goto label_1fe4a0;
            case 0x1FE4A4u: goto label_1fe4a4;
            case 0x1FE4BCu: goto label_1fe4bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FE4ECu;
    // 0x1fe4ec: 0x0  nop
    ctx->pc = 0x1fe4ecu;
    // NOP
}
