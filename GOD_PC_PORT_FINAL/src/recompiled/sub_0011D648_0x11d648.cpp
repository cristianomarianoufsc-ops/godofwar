#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011D648
// Address: 0x11d648 - 0x11da68
void sub_0011D648_0x11d648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D648_0x11d648");
#endif

    ctx->pc = 0x11d648u;

    // 0x11d648: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11d648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11d64c: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x11d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x11d650: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11d650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x11d654: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x11d654u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x11d658: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x11d658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x11d65c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11d65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d660: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x11d660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x11d664: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11d664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d668: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x11d668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x11d66c: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x11d66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x11d670: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x11d670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x11d674: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x11d674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x11d678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d67c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x11d67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11d680: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x11d680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x11d684: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x11d684u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11d688: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x11d688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x11d68c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11d68cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d690: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x11d690u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11d694: 0xa6270004  sh          $a3, 0x4($s1)
    ctx->pc = 0x11d694u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x11d698: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x11d698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x11d69c: 0xa6280000  sh          $t0, 0x0($s1)
    ctx->pc = 0x11d69cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x11d6a0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x11d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x11d6a4: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x11d6a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d6a8: 0xae260020  sw          $a2, 0x20($s1)
    ctx->pc = 0x11d6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 6));
    // 0x11d6ac: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x11d6acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11d6b0: 0xc08e222  jal         func_238888
    ctx->pc = 0x11D6B0u;
    SET_GPR_U32(ctx, 31, 0x11D6B8u);
    ctx->pc = 0x11D6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D6B0u;
            // 0x11d6b4: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D6B8u; }
        if (ctx->pc != 0x11D6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D6B8u; }
        if (ctx->pc != 0x11D6B8u) { return; }
    }
    ctx->pc = 0x11D6B8u;
    // 0x11d6b8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x11d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11d6bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11d6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6c4: 0xc08e222  jal         func_238888
    ctx->pc = 0x11D6C4u;
    SET_GPR_U32(ctx, 31, 0x11D6CCu);
    ctx->pc = 0x11D6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D6C4u;
            // 0x11d6c8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D6CCu; }
        if (ctx->pc != 0x11D6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D6CCu; }
        if (ctx->pc != 0x11D6CCu) { return; }
    }
    ctx->pc = 0x11D6CCu;
    // 0x11d6cc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x11d6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11d6d0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x11d6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x11d6d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11d6d8: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x11d6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x11d6dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11d6e0: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x11d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x11d6e4: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x11d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x11d6e8: 0x24a5de90  addiu       $a1, $a1, -0x2170
    ctx->pc = 0x11d6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958736));
    // 0x11d6ec: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x11d6ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11d6f0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x11d6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d6f4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x11d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11d6f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6fc: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x11d6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
    // 0x11d700: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x11d700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x11d704: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x11d704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x11d708: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x11d708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x11d70c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x11d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x11d710: 0xa6230004  sh          $v1, 0x4($s1)
    ctx->pc = 0x11d710u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x11d714: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x11d714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x11d718: 0xae250020  sw          $a1, 0x20($s1)
    ctx->pc = 0x11d718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 5));
    // 0x11d71c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x11d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11d720: 0xae261060  sw          $a2, 0x1060($s1)
    ctx->pc = 0x11d720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4192), GPR_U32(ctx, 6));
    // 0x11d724: 0xc047b90  jal         func_11EE40
    ctx->pc = 0x11D724u;
    SET_GPR_U32(ctx, 31, 0x11D72Cu);
    ctx->pc = 0x11D728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D724u;
            // 0x11d728: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EE40u;
    if (runtime->hasFunction(0x11EE40u)) {
        auto targetFn = runtime->lookupFunction(0x11EE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D72Cu; }
        if (ctx->pc != 0x11D72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11ee40_0x11ee88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D72Cu; }
        if (ctx->pc != 0x11D72Cu) { return; }
    }
    ctx->pc = 0x11D72Cu;
    // 0x11d72c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x11d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x11d730: 0xae221064  sw          $v0, 0x1064($s1)
    ctx->pc = 0x11d730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4196), GPR_U32(ctx, 2));
    // 0x11d734: 0xac62f16c  sw          $v0, -0xE94($v1)
    ctx->pc = 0x11d734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963564), GPR_U32(ctx, 2));
label_11d738:
    // 0x11d738: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x11d738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11d73c: 0x2630103c  addiu       $s0, $s1, 0x103C
    ctx->pc = 0x11d73cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4156));
    // 0x11d740: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x11d740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11d744: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x11D744u;
    SET_GPR_U32(ctx, 31, 0x11D74Cu);
    ctx->pc = 0x11D748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D744u;
            // 0x11d748: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D74Cu; }
        if (ctx->pc != 0x11D74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D74Cu; }
        if (ctx->pc != 0x11D74Cu) { return; }
    }
    ctx->pc = 0x11D74Cu;
    // 0x11d74c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x11d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x11d750: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x11d750u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x11d754: 0x2463bd10  addiu       $v1, $v1, -0x42F0
    ctx->pc = 0x11d754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950160));
    // 0x11d758: 0x24c6bd28  addiu       $a2, $a2, -0x42D8
    ctx->pc = 0x11d758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950184));
    // 0x11d75c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x11d75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x11d760: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x11d760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x11d764: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x11d764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11d768: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x11d768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11d76c: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x11d76cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11d770: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x11d770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d774: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d778: 0xc05d4e0  jal         func_175380
    ctx->pc = 0x11D778u;
    SET_GPR_U32(ctx, 31, 0x11D780u);
    ctx->pc = 0x11D77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D778u;
            // 0x11d77c: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175380u;
    if (runtime->hasFunction(0x175380u)) {
        auto targetFn = runtime->lookupFunction(0x175380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D780u; }
        if (ctx->pc != 0x11D780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175380_0x175380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D780u; }
        if (ctx->pc != 0x11D780u) { return; }
    }
    ctx->pc = 0x11D780u;
    // 0x11d780: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x11d780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x11d784: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x11d784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x11d788: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11D788u;
    {
        const bool branch_taken_0x11d788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D788u;
            // 0x11d78c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d788) {
            ctx->pc = 0x11D738u;
            runtime->cooperativeGuestYield();
            goto label_11d738;
        }
    }
    ctx->pc = 0x11D790u;
    // 0x11d790: 0x8e23103c  lw          $v1, 0x103C($s1)
    ctx->pc = 0x11d790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4156)));
    // 0x11d794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d798: 0xae221058  sw          $v0, 0x1058($s1)
    ctx->pc = 0x11d798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4184), GPR_U32(ctx, 2));
    // 0x11d79c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11d79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d7a0: 0xae231054  sw          $v1, 0x1054($s1)
    ctx->pc = 0x11d7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4180), GPR_U32(ctx, 3));
    // 0x11d7a4: 0xae20104c  sw          $zero, 0x104C($s1)
    ctx->pc = 0x11d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4172), GPR_U32(ctx, 0));
    // 0x11d7a8: 0xae201050  sw          $zero, 0x1050($s1)
    ctx->pc = 0x11d7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4176), GPR_U32(ctx, 0));
    // 0x11d7ac: 0xae20105c  sw          $zero, 0x105C($s1)
    ctx->pc = 0x11d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4188), GPR_U32(ctx, 0));
    // 0x11d7b0: 0xae201068  sw          $zero, 0x1068($s1)
    ctx->pc = 0x11d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4200), GPR_U32(ctx, 0));
    // 0x11d7b4: 0xae201070  sw          $zero, 0x1070($s1)
    ctx->pc = 0x11d7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4208), GPR_U32(ctx, 0));
    // 0x11d7b8: 0xae20106c  sw          $zero, 0x106C($s1)
    ctx->pc = 0x11d7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4204), GPR_U32(ctx, 0));
    // 0x11d7bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x11d7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11d7c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x11d7c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11d7c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x11d7c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d7c8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x11d7c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d7cc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x11d7ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d7d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x11D7D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D7D4u;
            // 0x11d7d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D738u: goto label_11d738;
            case 0x11D810u: goto label_11d810;
            case 0x11D82Cu: goto label_11d82c;
            case 0x11D8C8u: goto label_11d8c8;
            case 0x11D908u: goto label_11d908;
            case 0x11D920u: goto label_11d920;
            case 0x11D968u: goto label_11d968;
            case 0x11D96Cu: goto label_11d96c;
            case 0x11D978u: goto label_11d978;
            case 0x11D9C8u: goto label_11d9c8;
            case 0x11DA10u: goto label_11da10;
            case 0x11DA20u: goto label_11da20;
            case 0x11DA28u: goto label_11da28;
            case 0x11DA44u: goto label_11da44;
            case 0x11DA50u: goto label_11da50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D7DCu;
    // 0x11d7dc: 0x0  nop
    ctx->pc = 0x11d7dcu;
    // NOP
    // 0x11d7e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11d7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11d7e4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x11d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x11d7e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11d7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11d7ec: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x11d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
    // 0x11d7f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11d7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11d7f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11d7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d7f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11d7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11d7fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11d7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d804: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11d804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d808: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x11d808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x11d80c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x11d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_11d810:
    // 0x11d810: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x11d810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11d814: 0x8c44103c  lw          $a0, 0x103C($v0)
    ctx->pc = 0x11d814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4156)));
    // 0x11d818: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D818u;
    {
        const bool branch_taken_0x11d818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d818) {
            ctx->pc = 0x11D81Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11D818u;
            // 0x11d81c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11D82Cu;
            goto label_11d82c;
        }
    }
    ctx->pc = 0x11D820u;
    // 0x11d820: 0xc05d4f4  jal         func_1753D0
    ctx->pc = 0x11D820u;
    SET_GPR_U32(ctx, 31, 0x11D828u);
    ctx->pc = 0x11D824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D820u;
            // 0x11d824: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1753D0u;
    if (runtime->hasFunction(0x1753D0u)) {
        auto targetFn = runtime->lookupFunction(0x1753D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D828u; }
        if (ctx->pc != 0x11D828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001753D0_0x1753d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D828u; }
        if (ctx->pc != 0x11D828u) { return; }
    }
    ctx->pc = 0x11D828u;
    // 0x11d828: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x11d828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11d82c:
    // 0x11d82c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x11d82cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x11d830: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11D830u;
    {
        const bool branch_taken_0x11d830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D830u;
            // 0x11d834: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d830) {
            ctx->pc = 0x11D810u;
            runtime->cooperativeGuestYield();
            goto label_11d810;
        }
    }
    ctx->pc = 0x11D838u;
    // 0x11d838: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x11d838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x11d83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d840: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x11d840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x11d844: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11d844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d848: 0xc08e218  jal         func_238860
    ctx->pc = 0x11D848u;
    SET_GPR_U32(ctx, 31, 0x11D850u);
    ctx->pc = 0x11D84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D848u;
            // 0x11d84c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D850u; }
        if (ctx->pc != 0x11D850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D850u; }
        if (ctx->pc != 0x11D850u) { return; }
    }
    ctx->pc = 0x11D850u;
    // 0x11d850: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11d850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d854: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11d854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d858: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11d858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d85c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d860: 0x3e00008  jr          $ra
    ctx->pc = 0x11D860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D860u;
            // 0x11d864: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D738u: goto label_11d738;
            case 0x11D810u: goto label_11d810;
            case 0x11D82Cu: goto label_11d82c;
            case 0x11D8C8u: goto label_11d8c8;
            case 0x11D908u: goto label_11d908;
            case 0x11D920u: goto label_11d920;
            case 0x11D968u: goto label_11d968;
            case 0x11D96Cu: goto label_11d96c;
            case 0x11D978u: goto label_11d978;
            case 0x11D9C8u: goto label_11d9c8;
            case 0x11DA10u: goto label_11da10;
            case 0x11DA20u: goto label_11da20;
            case 0x11DA28u: goto label_11da28;
            case 0x11DA44u: goto label_11da44;
            case 0x11DA50u: goto label_11da50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D868u;
    // 0x11d868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11d868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11d86c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x11d86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x11d870: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11d870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11d874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d878: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x11D878u;
    SET_GPR_U32(ctx, 31, 0x11D880u);
    ctx->pc = 0x11D87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D878u;
            // 0x11d87c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D880u; }
        if (ctx->pc != 0x11D880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D880u; }
        if (ctx->pc != 0x11D880u) { return; }
    }
    ctx->pc = 0x11D880u;
    // 0x11d880: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11d880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d884: 0xc047474  jal         func_11D1D0
    ctx->pc = 0x11D884u;
    SET_GPR_U32(ctx, 31, 0x11D88Cu);
    ctx->pc = 0x11D888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D884u;
            // 0x11d888: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D1D0u;
    if (runtime->hasFunction(0x11D1D0u)) {
        auto targetFn = runtime->lookupFunction(0x11D1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D88Cu; }
        if (ctx->pc != 0x11D88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D1D0_0x11d1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D88Cu; }
        if (ctx->pc != 0x11D88Cu) { return; }
    }
    ctx->pc = 0x11D88Cu;
    // 0x11d88c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11d88cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d894: 0x3e00008  jr          $ra
    ctx->pc = 0x11D894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D894u;
            // 0x11d898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D738u: goto label_11d738;
            case 0x11D810u: goto label_11d810;
            case 0x11D82Cu: goto label_11d82c;
            case 0x11D8C8u: goto label_11d8c8;
            case 0x11D908u: goto label_11d908;
            case 0x11D920u: goto label_11d920;
            case 0x11D968u: goto label_11d968;
            case 0x11D96Cu: goto label_11d96c;
            case 0x11D978u: goto label_11d978;
            case 0x11D9C8u: goto label_11d9c8;
            case 0x11DA10u: goto label_11da10;
            case 0x11DA20u: goto label_11da20;
            case 0x11DA28u: goto label_11da28;
            case 0x11DA44u: goto label_11da44;
            case 0x11DA50u: goto label_11da50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D89Cu;
    // 0x11d89c: 0x0  nop
    ctx->pc = 0x11d89cu;
    // NOP
    // 0x11d8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d8a4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x11d8a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8a8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11D8A8u;
    {
        const bool branch_taken_0x11d8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8A8u;
            // 0x11d8ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8a8) {
            ctx->pc = 0x11D8C8u;
            goto label_11d8c8;
        }
    }
    ctx->pc = 0x11D8B0u;
    // 0x11d8b0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11d8b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11d8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11d8b8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x11d8b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11d8bc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x11d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11d8c0: 0x40f809  jalr        $v0
    ctx->pc = 0x11D8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11D8C8u);
        ctx->pc = 0x11D8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8C0u;
            // 0x11d8c4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11D8C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D738u: goto label_11d738;
            case 0x11D810u: goto label_11d810;
            case 0x11D82Cu: goto label_11d82c;
            case 0x11D8C8u: goto label_11d8c8;
            case 0x11D908u: goto label_11d908;
            case 0x11D920u: goto label_11d920;
            case 0x11D968u: goto label_11d968;
            case 0x11D96Cu: goto label_11d96c;
            case 0x11D978u: goto label_11d978;
            case 0x11D9C8u: goto label_11d9c8;
            case 0x11DA10u: goto label_11da10;
            case 0x11DA20u: goto label_11da20;
            case 0x11DA28u: goto label_11da28;
            case 0x11DA44u: goto label_11da44;
            case 0x11DA50u: goto label_11da50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11D8C8u; }
            if (ctx->pc != 0x11D8C8u) { return; }
        }
        }
    }
    ctx->pc = 0x11D8C8u;
label_11d8c8:
    // 0x11d8c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x11D8CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8CCu;
            // 0x11d8d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D738u: goto label_11d738;
            case 0x11D810u: goto label_11d810;
            case 0x11D82Cu: goto label_11d82c;
            case 0x11D8C8u: goto label_11d8c8;
            case 0x11D908u: goto label_11d908;
            case 0x11D920u: goto label_11d920;
            case 0x11D968u: goto label_11d968;
            case 0x11D96Cu: goto label_11d96c;
            case 0x11D978u: goto label_11d978;
            case 0x11D9C8u: goto label_11d9c8;
            case 0x11DA10u: goto label_11da10;
            case 0x11DA20u: goto label_11da20;
            case 0x11DA28u: goto label_11da28;
            case 0x11DA44u: goto label_11da44;
            case 0x11DA50u: goto label_11da50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D8D4u;
    // 0x11d8d4: 0x0  nop
    ctx->pc = 0x11d8d4u;
    // NOP
    // 0x11d8d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11d8dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11d8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11d8e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11d8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11d8e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11d8e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8e8: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x11d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x11d8ec: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x11d8ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11d8f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11d8f4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x11d8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x11d8f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D8F8u;
    {
        const bool branch_taken_0x11d8f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8F8u;
            // 0x11d8fc: 0xaca20034  sw          $v0, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8f8) {
            ctx->pc = 0x11D908u;
            goto label_11d908;
        }
    }
    ctx->pc = 0x11D900u;
    // 0x11d900: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11D900u;
    {
        const bool branch_taken_0x11d900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D900u;
            // 0x11d904: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d900) {
            ctx->pc = 0x11D96Cu;
            goto label_11d96c;
        }
    }
    ctx->pc = 0x11D908u;
label_11d908:
    // 0x11d908: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x11d908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x11d90c: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x11d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x11d910: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11d910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11d914: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11D914u;
    {
        const bool branch_taken_0x11d914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D914u;
            // 0x11d918: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d914) {
            ctx->pc = 0x11D968u;
            goto label_11d968;
        }
    }
    ctx->pc = 0x11D91Cu;
    // 0x11d91c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_11d920:
    // 0x11d920: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x11d920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11d924: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11d928: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x11d928u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11d92c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x11d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x11d930: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11d930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11d934: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x11d934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x11d938: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11d938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11d93c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11d940: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x11d940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11d944: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11d944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11d948: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x11d948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x11d94c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x11d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x11d950: 0x40f809  jalr        $v0
    ctx->pc = 0x11D950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11D958u);
        ctx->pc = 0x11D954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D950u;
            // 0x11d954: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11D958u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D738u: goto label_11d738;
            case 0x11D810u: goto label_11d810;
            case 0x11D82Cu: goto label_11d82c;
            case 0x11D8C8u: goto label_11d8c8;
            case 0x11D908u: goto label_11d908;
            case 0x11D920u: goto label_11d920;
            case 0x11D968u: goto label_11d968;
            case 0x11D96Cu: goto label_11d96c;
            case 0x11D978u: goto label_11d978;
            case 0x11D9C8u: goto label_11d9c8;
            case 0x11DA10u: goto label_11da10;
            case 0x11DA20u: goto label_11da20;
            case 0x11DA28u: goto label_11da28;
            case 0x11DA44u: goto label_11da44;
            case 0x11DA50u: goto label_11da50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11D958u; }
            if (ctx->pc != 0x11D958u) { return; }
        }
        }
    }
    ctx->pc = 0x11D958u;
    // 0x11d958: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11d958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11d95c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d960: 0x1462ffef  bne         $v1, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x11D960u;
    {
        const bool branch_taken_0x11d960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D960u;
            // 0x11d964: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d960) {
            ctx->pc = 0x11D920u;
            runtime->cooperativeGuestYield();
            goto label_11d920;
        }
    }
    ctx->pc = 0x11D968u;
label_11d968:
    // 0x11d968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11d96c:
    // 0x11d96c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11D96Cu;
    {
        const bool branch_taken_0x11d96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D96Cu;
            // 0x11d970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d96c) {
            ctx->pc = 0x11D978u;
            goto label_11d978;
        }
    }
    ctx->pc = 0x11D974u;
    // 0x11d974: 0xae021058  sw          $v0, 0x1058($s0)
    ctx->pc = 0x11d974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4184), GPR_U32(ctx, 2));
label_11d978:
    // 0x11d978: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11d978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d97c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11d97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11d980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d984: 0x3e00008  jr          $ra
    ctx->pc = 0x11D984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D984u;
            // 0x11d988: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D738u: goto label_11d738;
            case 0x11D810u: goto label_11d810;
            case 0x11D82Cu: goto label_11d82c;
            case 0x11D8C8u: goto label_11d8c8;
            case 0x11D908u: goto label_11d908;
            case 0x11D920u: goto label_11d920;
            case 0x11D968u: goto label_11d968;
            case 0x11D96Cu: goto label_11d96c;
            case 0x11D978u: goto label_11d978;
            case 0x11D9C8u: goto label_11d9c8;
            case 0x11DA10u: goto label_11da10;
            case 0x11DA20u: goto label_11da20;
            case 0x11DA28u: goto label_11da28;
            case 0x11DA44u: goto label_11da44;
            case 0x11DA50u: goto label_11da50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D98Cu;
    // 0x11d98c: 0x0  nop
    ctx->pc = 0x11d98cu;
    // NOP
    // 0x11d990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11d994: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11d994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11d998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11d99c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11d99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9a0: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x11d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x11d9a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11d9a8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x11D9A8u;
    {
        const bool branch_taken_0x11d9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D9A8u;
            // 0x11d9ac: 0xaca20034  sw          $v0, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d9a8) {
            ctx->pc = 0x11DA28u;
            goto label_11da28;
        }
    }
    ctx->pc = 0x11D9B0u;
    // 0x11d9b0: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x11d9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x11d9b4: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x11d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x11d9b8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11d9bc: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x11D9BCu;
    {
        const bool branch_taken_0x11d9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D9BCu;
            // 0x11d9c0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d9bc) {
            ctx->pc = 0x11DA20u;
            goto label_11da20;
        }
    }
    ctx->pc = 0x11D9C4u;
    // 0x11d9c4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_11d9c8:
    // 0x11d9c8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x11d9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11d9cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11d9d0: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x11d9d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11d9d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x11d9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x11d9d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11D9D8u;
    {
        const bool branch_taken_0x11d9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D9D8u;
            // 0x11d9dc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d9d8) {
            ctx->pc = 0x11DA10u;
            goto label_11da10;
        }
    }
    ctx->pc = 0x11D9E0u;
    // 0x11d9e0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x11d9e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11d9e4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11d9e8: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x11d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x11d9ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11d9f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11d9f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x11d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11d9f8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11d9fc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x11d9fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11da00: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x11da00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x11da04: 0x40f809  jalr        $v0
    ctx->pc = 0x11DA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11DA0Cu);
        ctx->pc = 0x11DA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DA04u;
            // 0x11da08: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11DA0Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D738u: goto label_11d738;
            case 0x11D810u: goto label_11d810;
            case 0x11D82Cu: goto label_11d82c;
            case 0x11D8C8u: goto label_11d8c8;
            case 0x11D908u: goto label_11d908;
            case 0x11D920u: goto label_11d920;
            case 0x11D968u: goto label_11d968;
            case 0x11D96Cu: goto label_11d96c;
            case 0x11D978u: goto label_11d978;
            case 0x11D9C8u: goto label_11d9c8;
            case 0x11DA10u: goto label_11da10;
            case 0x11DA20u: goto label_11da20;
            case 0x11DA28u: goto label_11da28;
            case 0x11DA44u: goto label_11da44;
            case 0x11DA50u: goto label_11da50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11DA0Cu; }
            if (ctx->pc != 0x11DA0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x11DA0Cu;
    // 0x11da0c: 0x0  nop
    ctx->pc = 0x11da0cu;
    // NOP
label_11da10:
    // 0x11da10: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11da10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11da14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11da14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11da18: 0x1462ffeb  bne         $v1, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11DA18u;
    {
        const bool branch_taken_0x11da18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11DA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DA18u;
            // 0x11da1c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da18) {
            ctx->pc = 0x11D9C8u;
            runtime->cooperativeGuestYield();
            goto label_11d9c8;
        }
    }
    ctx->pc = 0x11DA20u;
label_11da20:
    // 0x11da20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11DA20u;
    {
        const bool branch_taken_0x11da20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DA20u;
            // 0x11da24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da20) {
            ctx->pc = 0x11DA44u;
            goto label_11da44;
        }
    }
    ctx->pc = 0x11DA28u;
label_11da28:
    // 0x11da28: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x11da28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11da2c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x11da2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x11da30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DA30u;
    {
        const bool branch_taken_0x11da30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DA30u;
            // 0x11da34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da30) {
            ctx->pc = 0x11DA44u;
            goto label_11da44;
        }
    }
    ctx->pc = 0x11DA38u;
    // 0x11da38: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x11da38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x11da3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11da40: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x11da40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
label_11da44:
    // 0x11da44: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11DA44u;
    {
        const bool branch_taken_0x11da44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DA44u;
            // 0x11da48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da44) {
            ctx->pc = 0x11DA50u;
            goto label_11da50;
        }
    }
    ctx->pc = 0x11DA4Cu;
    // 0x11da4c: 0xae021058  sw          $v0, 0x1058($s0)
    ctx->pc = 0x11da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4184), GPR_U32(ctx, 2));
label_11da50:
    // 0x11da50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11da50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11da54: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11da54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11da58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11da5c: 0x3e00008  jr          $ra
    ctx->pc = 0x11DA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DA5Cu;
            // 0x11da60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D738u: goto label_11d738;
            case 0x11D810u: goto label_11d810;
            case 0x11D82Cu: goto label_11d82c;
            case 0x11D8C8u: goto label_11d8c8;
            case 0x11D908u: goto label_11d908;
            case 0x11D920u: goto label_11d920;
            case 0x11D968u: goto label_11d968;
            case 0x11D96Cu: goto label_11d96c;
            case 0x11D978u: goto label_11d978;
            case 0x11D9C8u: goto label_11d9c8;
            case 0x11DA10u: goto label_11da10;
            case 0x11DA20u: goto label_11da20;
            case 0x11DA28u: goto label_11da28;
            case 0x11DA44u: goto label_11da44;
            case 0x11DA50u: goto label_11da50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11DA64u;
    // 0x11da64: 0x0  nop
    ctx->pc = 0x11da64u;
    // NOP
}
