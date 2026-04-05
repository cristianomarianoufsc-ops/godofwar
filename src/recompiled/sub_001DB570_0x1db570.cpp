#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DB570
// Address: 0x1db570 - 0x1db838
void sub_001DB570_0x1db570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB570_0x1db570");
#endif

    ctx->pc = 0x1db570u;

    // 0x1db570: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1db570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1db574: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1db574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1db578: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1db578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1db57c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1db57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1db580: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1db580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1db584: 0x3c160030  lui         $s6, 0x30
    ctx->pc = 0x1db584u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)48 << 16));
    // 0x1db588: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1db588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1db58c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db590: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1db590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x1db594: 0x26d22cc0  addiu       $s2, $s6, 0x2CC0
    ctx->pc = 0x1db594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 11456));
    // 0x1db598: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1db598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1db59c: 0x3c17002a  lui         $s7, 0x2A
    ctx->pc = 0x1db59cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)42 << 16));
    // 0x1db5a0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1db5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1db5a4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1db5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1db5a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1db5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1db5ac: 0x8c55cd58  lw          $s5, -0x32A8($v0)
    ctx->pc = 0x1db5acu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1db5b0: 0x8e540048  lw          $s4, 0x48($s2)
    ctx->pc = 0x1db5b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1db5b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1db5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db5b8: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x1db5b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1db5bc: 0xc0756d4  jal         func_1D5B50
    ctx->pc = 0x1DB5BCu;
    SET_GPR_U32(ctx, 31, 0x1DB5C4u);
    ctx->pc = 0x1DB5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB5BCu;
            // 0x1db5c0: 0x8e530050  lw          $s3, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5B50u;
    if (runtime->hasFunction(0x1D5B50u)) {
        auto targetFn = runtime->lookupFunction(0x1D5B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB5C4u; }
        if (ctx->pc != 0x1DB5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5B50_0x1d5b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB5C4u; }
        if (ctx->pc != 0x1DB5C4u) { return; }
    }
    ctx->pc = 0x1DB5C4u;
    // 0x1db5c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1db5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db5c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db5cc: 0xc0a24d0  jal         func_289340
    ctx->pc = 0x1DB5CCu;
    SET_GPR_U32(ctx, 31, 0x1DB5D4u);
    ctx->pc = 0x1DB5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB5CCu;
            // 0x1db5d0: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289340u;
    if (runtime->hasFunction(0x289340u)) {
        auto targetFn = runtime->lookupFunction(0x289340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB5D4u; }
        if (ctx->pc != 0x1DB5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289340_0x28943c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB5D4u; }
        if (ctx->pc != 0x1DB5D4u) { return; }
    }
    ctx->pc = 0x1DB5D4u;
    // 0x1db5d4: 0x8ee2e57c  lw          $v0, -0x1A84($s7)
    ctx->pc = 0x1db5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294960508)));
    // 0x1db5d8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB5D8u;
    {
        const bool branch_taken_0x1db5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db5d8) {
            ctx->pc = 0x1DB5DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB5D8u;
            // 0x1db5dc: 0xae530050  sw          $s3, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB5E8u;
            goto label_1db5e8;
        }
    }
    ctx->pc = 0x1DB5E0u;
    // 0x1db5e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DB5E0u;
    {
        const bool branch_taken_0x1db5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB5E0u;
            // 0x1db5e4: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db5e0) {
            ctx->pc = 0x1DB5ECu;
            goto label_1db5ec;
        }
    }
    ctx->pc = 0x1DB5E8u;
label_1db5e8:
    // 0x1db5e8: 0xae540048  sw          $s4, 0x48($s2)
    ctx->pc = 0x1db5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 20));
label_1db5ec:
    // 0x1db5ec: 0x26d02cc0  addiu       $s0, $s6, 0x2CC0
    ctx->pc = 0x1db5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 11456));
    // 0x1db5f0: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x1db5f0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1db5f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1db5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db5f8: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x1db5f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1db5fc: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x1db5fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1db600: 0x7a040030  lq          $a0, 0x30($s0)
    ctx->pc = 0x1db600u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1db604: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1db604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1db608: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1db608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1db60c: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x1db60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x1db610: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x1db610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
    // 0x1db614: 0x7e260010  sq          $a2, 0x10($s1)
    ctx->pc = 0x1db614u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 6));
    // 0x1db618: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1db618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1db61c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1db61cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db620: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x1db620u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x1db624: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1db624u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db628: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x1db628u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x1db62c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1db62cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db630: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x1db630u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x1db634: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1db634u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1db638: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1db638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1db63c: 0x40f809  jalr        $v0
    ctx->pc = 0x1DB63Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB644u);
        ctx->pc = 0x1DB640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB63Cu;
            // 0x1db640: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DB644u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB5E8u: goto label_1db5e8;
            case 0x1DB5ECu: goto label_1db5ec;
            case 0x1DB690u: goto label_1db690;
            case 0x1DB6A4u: goto label_1db6a4;
            case 0x1DB6D4u: goto label_1db6d4;
            case 0x1DB70Cu: goto label_1db70c;
            case 0x1DB720u: goto label_1db720;
            case 0x1DB754u: goto label_1db754;
            case 0x1DB768u: goto label_1db768;
            case 0x1DB7B0u: goto label_1db7b0;
            case 0x1DB7E0u: goto label_1db7e0;
            case 0x1DB7FCu: goto label_1db7fc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DB644u; }
            if (ctx->pc != 0x1DB644u) { return; }
        }
        }
    }
    ctx->pc = 0x1DB644u;
    // 0x1db644: 0xae200174  sw          $zero, 0x174($s1)
    ctx->pc = 0x1db644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 0));
    // 0x1db648: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1db648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db64c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1db64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1db650: 0xc077002  jal         func_1DC008
    ctx->pc = 0x1DB650u;
    SET_GPR_U32(ctx, 31, 0x1DB658u);
    ctx->pc = 0x1DB654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB650u;
            // 0x1db654: 0xae220174  sw          $v0, 0x174($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC008u;
    if (runtime->hasFunction(0x1DC008u)) {
        auto targetFn = runtime->lookupFunction(0x1DC008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB658u; }
        if (ctx->pc != 0x1DB658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dc008_0x1dc040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB658u; }
        if (ctx->pc != 0x1DB658u) { return; }
    }
    ctx->pc = 0x1DB658u;
    // 0x1db658: 0xe620017c  swc1        $f0, 0x17C($s1)
    ctx->pc = 0x1db658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
    // 0x1db65c: 0x96020082  lhu         $v0, 0x82($s0)
    ctx->pc = 0x1db65cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x1db660: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1db660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1db664: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DB664u;
    {
        const bool branch_taken_0x1db664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB664u;
            // 0x1db668: 0x3c040020  lui         $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db664) {
            ctx->pc = 0x1DB690u;
            goto label_1db690;
        }
    }
    ctx->pc = 0x1DB66Cu;
    // 0x1db66c: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x1db66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x1db670: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x1db670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x1db674: 0x3463ffdf  ori         $v1, $v1, 0xFFDF
    ctx->pc = 0x1db674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65503);
    // 0x1db678: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1db678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1db67c: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x1db67cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x1db680: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1db680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1db684: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DB684u;
    {
        const bool branch_taken_0x1db684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB684u;
            // 0x1db688: 0xae2202dc  sw          $v0, 0x2DC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db684) {
            ctx->pc = 0x1DB6A4u;
            goto label_1db6a4;
        }
    }
    ctx->pc = 0x1DB68Cu;
    // 0x1db68c: 0x0  nop
    ctx->pc = 0x1db68cu;
    // NOP
label_1db690:
    // 0x1db690: 0x8e2302dc  lw          $v1, 0x2DC($s1)
    ctx->pc = 0x1db690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x1db694: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x1db694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x1db698: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x1db698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
    // 0x1db69c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1db69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1db6a0: 0xae2302dc  sw          $v1, 0x2DC($s1)
    ctx->pc = 0x1db6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 3));
label_1db6a4:
    // 0x1db6a4: 0x8ee2e57c  lw          $v0, -0x1A84($s7)
    ctx->pc = 0x1db6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294960508)));
    // 0x1db6a8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DB6A8u;
    {
        const bool branch_taken_0x1db6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB6A8u;
            // 0x1db6ac: 0x26c22cc0  addiu       $v0, $s6, 0x2CC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 11456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6a8) {
            ctx->pc = 0x1DB6D4u;
            goto label_1db6d4;
        }
    }
    ctx->pc = 0x1DB6B0u;
    // 0x1db6b0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1db6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1db6b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1db6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db6b8: 0xc44c0058  lwc1        $f12, 0x58($v0)
    ctx->pc = 0x1db6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1db6bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db6c0: 0x46006328  max.s       $f12, $f12, $f0
    ctx->pc = 0x1db6c0u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[0]);
    // 0x1db6c4: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x1DB6C4u;
    SET_GPR_U32(ctx, 31, 0x1DB6CCu);
    ctx->pc = 0x1DB6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB6C4u;
            // 0x1db6c8: 0xe44c0058  swc1        $f12, 0x58($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB6CCu; }
        if (ctx->pc != 0x1DB6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB6CCu; }
        if (ctx->pc != 0x1DB6CCu) { return; }
    }
    ctx->pc = 0x1DB6CCu;
    // 0x1db6cc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1DB6CCu;
    {
        const bool branch_taken_0x1db6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db6cc) {
            ctx->pc = 0x1DB768u;
            goto label_1db768;
        }
    }
    ctx->pc = 0x1DB6D4u;
label_1db6d4:
    // 0x1db6d4: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1db6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x1db6d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1db6d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1db6dc: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x1db6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db6e0: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x1db6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1db6e4: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x1db6e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1db6e8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DB6E8u;
    {
        const bool branch_taken_0x1db6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB6E8u;
            // 0x1db6ec: 0x460100e8  max.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = std::max(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6e8) {
            ctx->pc = 0x1DB754u;
            goto label_1db754;
        }
    }
    ctx->pc = 0x1DB6F0u;
    // 0x1db6f0: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x1db6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1db6f4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB6F4u;
    {
        const bool branch_taken_0x1db6f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DB6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB6F4u;
            // 0x1db6f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6f4) {
            ctx->pc = 0x1DB70Cu;
            goto label_1db70c;
        }
    }
    ctx->pc = 0x1DB6FCu;
    // 0x1db6fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1db6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1db700: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1db700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1db704: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DB704u;
    {
        const bool branch_taken_0x1db704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db704) {
            ctx->pc = 0x1DB720u;
            goto label_1db720;
        }
    }
    ctx->pc = 0x1DB70Cu;
label_1db70c:
    // 0x1db70c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1db70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1db710: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1db710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db714: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1db714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1db718: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1db718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1db71c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1db71cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1db720:
    // 0x1db720: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1db720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1db724: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1db724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db728: 0x26c22cc0  addiu       $v0, $s6, 0x2CC0
    ctx->pc = 0x1db728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 11456));
    // 0x1db72c: 0xc4420058  lwc1        $f2, 0x58($v0)
    ctx->pc = 0x1db72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db730: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1db730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1db734: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x1db734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x1db738: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1db738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1db73c: 0xc621017c  lwc1        $f1, 0x17C($s1)
    ctx->pc = 0x1db73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db740: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x1db740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db744: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1db744u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1db748: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1DB748u;
    {
        const bool branch_taken_0x1db748 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DB74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB748u;
            // 0x1db74c: 0x460118e9  min.s       $f3, $f3, $f1 (Delay Slot)
        ctx->f[3] = std::min(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db748) {
            ctx->pc = 0x1DB754u;
            goto label_1db754;
        }
    }
    ctx->pc = 0x1DB750u;
    // 0x1db750: 0x460418e9  min.s       $f3, $f3, $f4
    ctx->pc = 0x1db750u;
    ctx->f[3] = std::min(ctx->f[3], ctx->f[4]);
label_1db754:
    // 0x1db754: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1db754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1db758: 0x46001b06  mov.s       $f12, $f3
    ctx->pc = 0x1db758u;
    ctx->f[12] = FPU_MOV_S(ctx->f[3]);
    // 0x1db75c: 0xe4432d18  swc1        $f3, 0x2D18($v0)
    ctx->pc = 0x1db75cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 11544), bits); }
    // 0x1db760: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x1DB760u;
    SET_GPR_U32(ctx, 31, 0x1DB768u);
    ctx->pc = 0x1DB764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB760u;
            // 0x1db764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB768u; }
        if (ctx->pc != 0x1DB768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB768u; }
        if (ctx->pc != 0x1DB768u) { return; }
    }
    ctx->pc = 0x1DB768u;
label_1db768:
    // 0x1db768: 0xc0799d8  jal         func_1E6760
    ctx->pc = 0x1DB768u;
    SET_GPR_U32(ctx, 31, 0x1DB770u);
    ctx->pc = 0x1DB76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB768u;
            // 0x1db76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6760u;
    if (runtime->hasFunction(0x1E6760u)) {
        auto targetFn = runtime->lookupFunction(0x1E6760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB770u; }
        if (ctx->pc != 0x1DB770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6760_0x1e6760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB770u; }
        if (ctx->pc != 0x1DB770u) { return; }
    }
    ctx->pc = 0x1DB770u;
    // 0x1db770: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1db770u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x1db774: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1db774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1db778: 0x8e24cb94  lw          $a0, -0x346C($s1)
    ctx->pc = 0x1db778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953876)));
    // 0x1db77c: 0x24502cc0  addiu       $s0, $v0, 0x2CC0
    ctx->pc = 0x1db77cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1db780: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x1db780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db784: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1db784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db788: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1db788u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1db78c: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1db78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1db790: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1db790u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1db794: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1db794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1db798: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB798u;
    {
        const bool branch_taken_0x1db798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DB79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB798u;
            // 0x1db79c: 0xac8201d0  sw          $v0, 0x1D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db798) {
            ctx->pc = 0x1DB7B0u;
            goto label_1db7b0;
        }
    }
    ctx->pc = 0x1DB7A0u;
    // 0x1db7a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1db7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db7a4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1db7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1db7a8: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1DB7A8u;
    SET_GPR_U32(ctx, 31, 0x1DB7B0u);
    ctx->pc = 0x1DB7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB7A8u;
            // 0x1db7ac: 0xac820214  sw          $v0, 0x214($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB7B0u; }
        if (ctx->pc != 0x1DB7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB7B0u; }
        if (ctx->pc != 0x1DB7B0u) { return; }
    }
    ctx->pc = 0x1DB7B0u;
label_1db7b0:
    // 0x1db7b0: 0x8e24cb94  lw          $a0, -0x346C($s1)
    ctx->pc = 0x1db7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953876)));
    // 0x1db7b4: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x1db7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db7b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1db7b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1db7bc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1db7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1db7c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1db7c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1db7c4: 0x0  nop
    ctx->pc = 0x1db7c4u;
    // NOP
    // 0x1db7c8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB7C8u;
    {
        const bool branch_taken_0x1db7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DB7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB7C8u;
            // 0x1db7cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db7c8) {
            ctx->pc = 0x1DB7E0u;
            goto label_1db7e0;
        }
    }
    ctx->pc = 0x1DB7D0u;
    // 0x1db7d0: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1db7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1db7d4: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1DB7D4u;
    SET_GPR_U32(ctx, 31, 0x1DB7DCu);
    ctx->pc = 0x1DB7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB7D4u;
            // 0x1db7d8: 0xac820218  sw          $v0, 0x218($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB7DCu; }
        if (ctx->pc != 0x1DB7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB7DCu; }
        if (ctx->pc != 0x1DB7DCu) { return; }
    }
    ctx->pc = 0x1DB7DCu;
    // 0x1db7dc: 0x8e24cb94  lw          $a0, -0x346C($s1)
    ctx->pc = 0x1db7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953876)));
label_1db7e0:
    // 0x1db7e0: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x1db7e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1db7e4: 0x8c8201d0  lw          $v0, 0x1D0($a0)
    ctx->pc = 0x1db7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 464)));
    // 0x1db7e8: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB7E8u;
    {
        const bool branch_taken_0x1db7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DB7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB7E8u;
            // 0x1db7ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db7e8) {
            ctx->pc = 0x1DB7FCu;
            goto label_1db7fc;
        }
    }
    ctx->pc = 0x1DB7F0u;
    // 0x1db7f0: 0xac8301d0  sw          $v1, 0x1D0($a0)
    ctx->pc = 0x1db7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 3));
    // 0x1db7f4: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1DB7F4u;
    SET_GPR_U32(ctx, 31, 0x1DB7FCu);
    ctx->pc = 0x1DB7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB7F4u;
            // 0x1db7f8: 0xac82021c  sw          $v0, 0x21C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB7FCu; }
        if (ctx->pc != 0x1DB7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB7FCu; }
        if (ctx->pc != 0x1DB7FCu) { return; }
    }
    ctx->pc = 0x1DB7FCu;
label_1db7fc:
    // 0x1db7fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db800: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1db800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db804: 0xc075aae  jal         func_1D6AB8
    ctx->pc = 0x1DB804u;
    SET_GPR_U32(ctx, 31, 0x1DB80Cu);
    ctx->pc = 0x1DB808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB804u;
            // 0x1db808: 0xaea201c0  sw          $v0, 0x1C0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6AB8u;
    if (runtime->hasFunction(0x1D6AB8u)) {
        auto targetFn = runtime->lookupFunction(0x1D6AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB80Cu; }
        if (ctx->pc != 0x1DB80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d6ab8_0x1d6b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB80Cu; }
        if (ctx->pc != 0x1DB80Cu) { return; }
    }
    ctx->pc = 0x1DB80Cu;
    // 0x1db80c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1db80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1db810: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1db810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db814: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1db814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1db818: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1db818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1db81c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1db81cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1db820: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1db820u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1db824: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1db824u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1db828: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1db828u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1db82c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1db82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db830: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB830u;
            // 0x1db834: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB5E8u: goto label_1db5e8;
            case 0x1DB5ECu: goto label_1db5ec;
            case 0x1DB690u: goto label_1db690;
            case 0x1DB6A4u: goto label_1db6a4;
            case 0x1DB6D4u: goto label_1db6d4;
            case 0x1DB70Cu: goto label_1db70c;
            case 0x1DB720u: goto label_1db720;
            case 0x1DB754u: goto label_1db754;
            case 0x1DB768u: goto label_1db768;
            case 0x1DB7B0u: goto label_1db7b0;
            case 0x1DB7E0u: goto label_1db7e0;
            case 0x1DB7FCu: goto label_1db7fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB838u;
}
