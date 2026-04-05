#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D610
// Address: 0x15d610 - 0x15d828
void sub_0015D610_0x15d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D610_0x15d610");
#endif

    ctx->pc = 0x15d610u;

    // 0x15d610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15d610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15d614: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x15d614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x15d618: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15d618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15d61c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x15d61cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x15d620: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15d624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d62c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15d62cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d630: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x15d630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x15d634: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x15d634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x15d638: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x15d638u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15d63c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x15d63cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15d640: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x15d640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x15d644: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x15d644u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x15d648: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x15d648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x15d64c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x15d64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x15d650: 0xa6070004  sh          $a3, 0x4($s0)
    ctx->pc = 0x15d650u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x15d654: 0xa6080000  sh          $t0, 0x0($s0)
    ctx->pc = 0x15d654u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x15d658: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x15d658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x15d65c: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x15d65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x15d660: 0xc08e222  jal         func_238888
    ctx->pc = 0x15D660u;
    SET_GPR_U32(ctx, 31, 0x15D668u);
    ctx->pc = 0x15D664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D660u;
            // 0x15d664: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D668u; }
        if (ctx->pc != 0x15D668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D668u; }
        if (ctx->pc != 0x15D668u) { return; }
    }
    ctx->pc = 0x15D668u;
    // 0x15d668: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x15d668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15d66c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15d66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d670: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15d670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d674: 0xc08e222  jal         func_238888
    ctx->pc = 0x15D674u;
    SET_GPR_U32(ctx, 31, 0x15D67Cu);
    ctx->pc = 0x15D678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D674u;
            // 0x15d678: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D67Cu; }
        if (ctx->pc != 0x15D67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D67Cu; }
        if (ctx->pc != 0x15D67Cu) { return; }
    }
    ctx->pc = 0x15D67Cu;
    // 0x15d67c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x15d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15d680: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x15d680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x15d684: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15d684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x15d688: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x15d688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x15d68c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15d68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15d690: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x15d690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x15d694: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x15d694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x15d698: 0x2484cce0  addiu       $a0, $a0, -0x3320
    ctx->pc = 0x15d698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954208));
    // 0x15d69c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x15d69cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d6a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15d6a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d6a4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x15d6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15d6a8: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x15d6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
    // 0x15d6ac: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x15d6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x15d6b0: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x15d6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x15d6b4: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x15d6b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x15d6b8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x15d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15d6bc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x15d6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x15d6c0: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x15d6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x15d6c4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x15d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x15d6c8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x15d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15d6cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d6ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d6d0: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x15d6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x15d6d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15d6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x15D6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6DCu;
            // 0x15d6e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D748u: goto label_15d748;
            case 0x15D798u: goto label_15d798;
            case 0x15D7E0u: goto label_15d7e0;
            case 0x15D7F0u: goto label_15d7f0;
            case 0x15D7F8u: goto label_15d7f8;
            case 0x15D818u: goto label_15d818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D6E4u;
    // 0x15d6e4: 0x0  nop
    ctx->pc = 0x15d6e4u;
    // NOP
    // 0x15d6e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15d6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15d6ec: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x15d6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x15d6f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15d6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15d6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d6f8: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x15D6F8u;
    SET_GPR_U32(ctx, 31, 0x15D700u);
    ctx->pc = 0x15D6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6F8u;
            // 0x15d6fc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D700u; }
        if (ctx->pc != 0x15D700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D700u; }
        if (ctx->pc != 0x15D700u) { return; }
    }
    ctx->pc = 0x15D700u;
    // 0x15d700: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d704: 0xc057458  jal         func_15D160
    ctx->pc = 0x15D704u;
    SET_GPR_U32(ctx, 31, 0x15D70Cu);
    ctx->pc = 0x15D708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D704u;
            // 0x15d708: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D160u;
    if (runtime->hasFunction(0x15D160u)) {
        auto targetFn = runtime->lookupFunction(0x15D160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D70Cu; }
        if (ctx->pc != 0x15D70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D160_0x15d160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D70Cu; }
        if (ctx->pc != 0x15D70Cu) { return; }
    }
    ctx->pc = 0x15D70Cu;
    // 0x15d70c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15d70cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d714: 0x3e00008  jr          $ra
    ctx->pc = 0x15D714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D714u;
            // 0x15d718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D748u: goto label_15d748;
            case 0x15D798u: goto label_15d798;
            case 0x15D7E0u: goto label_15d7e0;
            case 0x15D7F0u: goto label_15d7f0;
            case 0x15D7F8u: goto label_15d7f8;
            case 0x15D818u: goto label_15d818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D71Cu;
    // 0x15d71c: 0x0  nop
    ctx->pc = 0x15d71cu;
    // NOP
    // 0x15d720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15d720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15d724: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x15d724u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d728: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15D728u;
    {
        const bool branch_taken_0x15d728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D728u;
            // 0x15d72c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d728) {
            ctx->pc = 0x15D748u;
            goto label_15d748;
        }
    }
    ctx->pc = 0x15D730u;
    // 0x15d730: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x15d730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15d734: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15d734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15d738: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x15d738u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15d73c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x15d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15d740: 0x40f809  jalr        $v0
    ctx->pc = 0x15D740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D748u);
        ctx->pc = 0x15D744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D740u;
            // 0x15d744: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15D748u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D748u: goto label_15d748;
            case 0x15D798u: goto label_15d798;
            case 0x15D7E0u: goto label_15d7e0;
            case 0x15D7F0u: goto label_15d7f0;
            case 0x15D7F8u: goto label_15d7f8;
            case 0x15D818u: goto label_15d818;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15D748u; }
            if (ctx->pc != 0x15D748u) { return; }
        }
        }
    }
    ctx->pc = 0x15D748u;
label_15d748:
    // 0x15d748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d74c: 0x3e00008  jr          $ra
    ctx->pc = 0x15D74Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D74Cu;
            // 0x15d750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D748u: goto label_15d748;
            case 0x15D798u: goto label_15d798;
            case 0x15D7E0u: goto label_15d7e0;
            case 0x15D7F0u: goto label_15d7f0;
            case 0x15D7F8u: goto label_15d7f8;
            case 0x15D818u: goto label_15d818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D754u;
    // 0x15d754: 0x0  nop
    ctx->pc = 0x15d754u;
    // NOP
    // 0x15d758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15d758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15d75c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15d75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15d760: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15d760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15d764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15d768: 0xc05756c  jal         func_15D5B0
    ctx->pc = 0x15D768u;
    SET_GPR_U32(ctx, 31, 0x15D770u);
    ctx->pc = 0x15D76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D768u;
            // 0x15d76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D5B0u;
    if (runtime->hasFunction(0x15D5B0u)) {
        auto targetFn = runtime->lookupFunction(0x15D5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D770u; }
        if (ctx->pc != 0x15D770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D5B0_0x15d5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D770u; }
        if (ctx->pc != 0x15D770u) { return; }
    }
    ctx->pc = 0x15D770u;
    // 0x15d770: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x15d770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x15d774: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15d774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15d778: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x15D778u;
    {
        const bool branch_taken_0x15d778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D778u;
            // 0x15d77c: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d778) {
            ctx->pc = 0x15D7F8u;
            goto label_15d7f8;
        }
    }
    ctx->pc = 0x15D780u;
    // 0x15d780: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x15d780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x15d784: 0x2602003c  addiu       $v0, $s0, 0x3C
    ctx->pc = 0x15d784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x15d788: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x15d788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15d78c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x15D78Cu;
    {
        const bool branch_taken_0x15d78c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15D790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D78Cu;
            // 0x15d790: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d78c) {
            ctx->pc = 0x15D7F0u;
            goto label_15d7f0;
        }
    }
    ctx->pc = 0x15D794u;
    // 0x15d794: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x15d794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15d798:
    // 0x15d798: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x15d798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15d79c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15d7a0: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x15d7a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x15d7a4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15d7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15d7a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15D7A8u;
    {
        const bool branch_taken_0x15d7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D7A8u;
            // 0x15d7ac: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7a8) {
            ctx->pc = 0x15D7E0u;
            goto label_15d7e0;
        }
    }
    ctx->pc = 0x15D7B0u;
    // 0x15d7b0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x15d7b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15d7b4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15d7b8: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x15d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x15d7bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15d7c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15d7c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15d7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15d7c8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x15d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15d7cc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x15d7ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x15d7d0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x15d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x15d7d4: 0x40f809  jalr        $v0
    ctx->pc = 0x15D7D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D7DCu);
        ctx->pc = 0x15D7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D7D4u;
            // 0x15d7d8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15D7DCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D748u: goto label_15d748;
            case 0x15D798u: goto label_15d798;
            case 0x15D7E0u: goto label_15d7e0;
            case 0x15D7F0u: goto label_15d7f0;
            case 0x15D7F8u: goto label_15d7f8;
            case 0x15D818u: goto label_15d818;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15D7DCu; }
            if (ctx->pc != 0x15D7DCu) { return; }
        }
        }
    }
    ctx->pc = 0x15D7DCu;
    // 0x15d7dc: 0x0  nop
    ctx->pc = 0x15d7dcu;
    // NOP
label_15d7e0:
    // 0x15d7e0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x15d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15d7e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d7e8: 0x1462ffeb  bne         $v1, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x15D7E8u;
    {
        const bool branch_taken_0x15d7e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15D7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D7E8u;
            // 0x15d7ec: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7e8) {
            ctx->pc = 0x15D798u;
            runtime->cooperativeGuestYield();
            goto label_15d798;
        }
    }
    ctx->pc = 0x15D7F0u;
label_15d7f0:
    // 0x15d7f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15D7F0u;
    {
        const bool branch_taken_0x15d7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D7F0u;
            // 0x15d7f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7f0) {
            ctx->pc = 0x15D818u;
            goto label_15d818;
        }
    }
    ctx->pc = 0x15D7F8u;
label_15d7f8:
    // 0x15d7f8: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x15d7f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d7fc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15d7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15d800: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D800u;
    {
        const bool branch_taken_0x15d800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D800u;
            // 0x15d804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d800) {
            ctx->pc = 0x15D818u;
            goto label_15d818;
        }
    }
    ctx->pc = 0x15D808u;
    // 0x15d808: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x15d808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x15d80c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15d810: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x15d810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x15d814: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15d814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d818:
    // 0x15d818: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15d818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d81c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15d81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d820: 0x3e00008  jr          $ra
    ctx->pc = 0x15D820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D820u;
            // 0x15d824: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D748u: goto label_15d748;
            case 0x15D798u: goto label_15d798;
            case 0x15D7E0u: goto label_15d7e0;
            case 0x15D7F0u: goto label_15d7f0;
            case 0x15D7F8u: goto label_15d7f8;
            case 0x15D818u: goto label_15d818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D828u;
}
