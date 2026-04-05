#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00278680
// Address: 0x278680 - 0x278c18
void sub_00278680_0x278680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278680_0x278680");
#endif

    ctx->pc = 0x278680u;

    // 0x278680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278684: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x278684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x278688: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x278688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27868c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27868cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x278690: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x278690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x278694: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278694u;
    SET_GPR_U32(ctx, 31, 0x27869Cu);
    ctx->pc = 0x278698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278694u;
            // 0x278698: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27869Cu; }
        if (ctx->pc != 0x27869Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27869Cu; }
        if (ctx->pc != 0x27869Cu) { return; }
    }
    ctx->pc = 0x27869Cu;
    // 0x27869c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27869cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2786a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2786a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2786a4: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x2786A4u;
    SET_GPR_U32(ctx, 31, 0x2786ACu);
    ctx->pc = 0x2786A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2786A4u;
            // 0x2786a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2786ACu; }
        if (ctx->pc != 0x2786ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2786ACu; }
        if (ctx->pc != 0x2786ACu) { return; }
    }
    ctx->pc = 0x2786ACu;
    // 0x2786ac: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x2786acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x2786b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2786b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2786b4: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x2786B4u;
    SET_GPR_U32(ctx, 31, 0x2786BCu);
    ctx->pc = 0x2786B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2786B4u;
            // 0x2786b8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2786BCu; }
        if (ctx->pc != 0x2786BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2786BCu; }
        if (ctx->pc != 0x2786BCu) { return; }
    }
    ctx->pc = 0x2786BCu;
    // 0x2786bc: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x2786bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2786c0: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x2786c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2786c4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2786c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2786c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2786C8u;
    {
        const bool branch_taken_0x2786c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2786CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2786C8u;
            // 0x2786cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2786c8) {
            ctx->pc = 0x2786F0u;
            goto label_2786f0;
        }
    }
    ctx->pc = 0x2786D0u;
    // 0x2786d0: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x2786D0u;
    SET_GPR_U32(ctx, 31, 0x2786D8u);
    ctx->pc = 0x2786D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2786D0u;
            // 0x2786d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2786D8u; }
        if (ctx->pc != 0x2786D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2786D8u; }
        if (ctx->pc != 0x2786D8u) { return; }
    }
    ctx->pc = 0x2786D8u;
    // 0x2786d8: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x2786d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x2786dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2786dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2786e0: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x2786E0u;
    SET_GPR_U32(ctx, 31, 0x2786E8u);
    ctx->pc = 0x2786E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2786E0u;
            // 0x2786e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2786E8u; }
        if (ctx->pc != 0x2786E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2786E8u; }
        if (ctx->pc != 0x2786E8u) { return; }
    }
    ctx->pc = 0x2786E8u;
    // 0x2786e8: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x2786e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x2786ec: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x2786ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_2786f0:
    // 0x2786f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2786f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2786f4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2786F4u;
    {
        const bool branch_taken_0x2786f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2786F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2786F4u;
            // 0x2786f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2786f4) {
            ctx->pc = 0x27872Cu;
            goto label_27872c;
        }
    }
    ctx->pc = 0x2786FCu;
    // 0x2786fc: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x2786FCu;
    SET_GPR_U32(ctx, 31, 0x278704u);
    ctx->pc = 0x278700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2786FCu;
            // 0x278700: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278704u; }
        if (ctx->pc != 0x278704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278704u; }
        if (ctx->pc != 0x278704u) { return; }
    }
    ctx->pc = 0x278704u;
    // 0x278704: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x278704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
    // 0x278708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27870c: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x27870Cu;
    SET_GPR_U32(ctx, 31, 0x278714u);
    ctx->pc = 0x278710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27870Cu;
            // 0x278710: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278714u; }
        if (ctx->pc != 0x278714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278714u; }
        if (ctx->pc != 0x278714u) { return; }
    }
    ctx->pc = 0x278714u;
    // 0x278714: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x278714u;
    {
        const bool branch_taken_0x278714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278714u;
            // 0x278718: 0xae020170  sw          $v0, 0x170($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278714) {
            ctx->pc = 0x278728u;
            goto label_278728;
        }
    }
    ctx->pc = 0x27871Cu;
    // 0x27871c: 0x0  nop
    ctx->pc = 0x27871cu;
    // NOP
label_278720:
    // 0x278720: 0xc09e388  jal         func_278E20
    ctx->pc = 0x278720u;
    SET_GPR_U32(ctx, 31, 0x278728u);
    ctx->pc = 0x278724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278720u;
            // 0x278724: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278E20u;
    if (runtime->hasFunction(0x278E20u)) {
        auto targetFn = runtime->lookupFunction(0x278E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278728u; }
        if (ctx->pc != 0x278728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278e20_0x278e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278728u; }
        if (ctx->pc != 0x278728u) { return; }
    }
    ctx->pc = 0x278728u;
label_278728:
    // 0x278728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27872c:
    // 0x27872c: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x27872Cu;
    SET_GPR_U32(ctx, 31, 0x278734u);
    ctx->pc = 0x278730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27872Cu;
            // 0x278730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278734u; }
        if (ctx->pc != 0x278734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278734u; }
        if (ctx->pc != 0x278734u) { return; }
    }
    ctx->pc = 0x278734u;
    // 0x278734: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x278734u;
    {
        const bool branch_taken_0x278734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278734u;
            // 0x278738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278734) {
            ctx->pc = 0x278720u;
            runtime->cooperativeGuestYield();
            goto label_278720;
        }
    }
    ctx->pc = 0x27873Cu;
    // 0x27873c: 0xc09e306  jal         func_278C18
    ctx->pc = 0x27873Cu;
    SET_GPR_U32(ctx, 31, 0x278744u);
    ctx->pc = 0x278740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27873Cu;
            // 0x278740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278C18u;
    if (runtime->hasFunction(0x278C18u)) {
        auto targetFn = runtime->lookupFunction(0x278C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278744u; }
        if (ctx->pc != 0x278744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278c18_0x278de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278744u; }
        if (ctx->pc != 0x278744u) { return; }
    }
    ctx->pc = 0x278744u;
    // 0x278744: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x278744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x278748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x278748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27874c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27874cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x278750: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x278750u;
    {
        const bool branch_taken_0x278750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x278754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278750u;
            // 0x278754: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278750) {
            ctx->pc = 0x278778u;
            goto label_278778;
        }
    }
    ctx->pc = 0x278758u;
    // 0x278758: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x278758u;
    {
        const bool branch_taken_0x278758 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x278758) {
            ctx->pc = 0x27875Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x278758u;
            // 0x27875c: 0x8e02085c  lw          $v0, 0x85C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27877Cu;
            goto label_27877c;
        }
    }
    ctx->pc = 0x278760u;
    // 0x278760: 0x6230004  bgezl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x278760u;
    {
        const bool branch_taken_0x278760 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x278760) {
            ctx->pc = 0x278764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x278760u;
            // 0x278764: 0xae000864  sw          $zero, 0x864($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x278774u;
            goto label_278774;
        }
    }
    ctx->pc = 0x278768u;
    // 0x278768: 0x8e020864  lw          $v0, 0x864($s0)
    ctx->pc = 0x278768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2148)));
    // 0x27876c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x27876cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x278770: 0xae000864  sw          $zero, 0x864($s0)
    ctx->pc = 0x278770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
label_278774:
    // 0x278774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278778:
    // 0x278778: 0x8e02085c  lw          $v0, 0x85C($s0)
    ctx->pc = 0x278778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
label_27877c:
    // 0x27877c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x27877cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x278780: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x278780u;
    {
        const bool branch_taken_0x278780 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x278784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278780u;
            // 0x278784: 0xae0301bc  sw          $v1, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278780) {
            ctx->pc = 0x27879Cu;
            goto label_27879c;
        }
    }
    ctx->pc = 0x278788u;
    // 0x278788: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x278788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x27878c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27878Cu;
    {
        const bool branch_taken_0x27878c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27878c) {
            ctx->pc = 0x278790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27878Cu;
            // 0x278790: 0x8e020860  lw          $v0, 0x860($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2787A0u;
            goto label_2787a0;
        }
    }
    ctx->pc = 0x278794u;
    // 0x278794: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x278794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x278798: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x278798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_27879c:
    // 0x27879c: 0x8e020860  lw          $v0, 0x860($s0)
    ctx->pc = 0x27879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
label_2787a0:
    // 0x2787a0: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x2787a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x2787a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2787a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2787a8: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x2787a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2787ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2787acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2787b0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2787b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2787b4: 0xae020860  sw          $v0, 0x860($s0)
    ctx->pc = 0x2787b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2144), GPR_U32(ctx, 2));
    // 0x2787b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2787b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2787bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2787BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2787C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2787BCu;
            // 0x2787c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2786F0u: goto label_2786f0;
            case 0x278720u: goto label_278720;
            case 0x278728u: goto label_278728;
            case 0x27872Cu: goto label_27872c;
            case 0x278774u: goto label_278774;
            case 0x278778u: goto label_278778;
            case 0x27877Cu: goto label_27877c;
            case 0x27879Cu: goto label_27879c;
            case 0x2787A0u: goto label_2787a0;
            case 0x278854u: goto label_278854;
            case 0x27889Cu: goto label_27889c;
            case 0x278954u: goto label_278954;
            case 0x278998u: goto label_278998;
            case 0x2789B8u: goto label_2789b8;
            case 0x2789E4u: goto label_2789e4;
            case 0x278AACu: goto label_278aac;
            case 0x278BE4u: goto label_278be4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2787C4u;
    // 0x2787c4: 0x0  nop
    ctx->pc = 0x2787c4u;
    // NOP
    // 0x2787c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2787c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2787cc: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2787ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2787d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2787d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2787d4: 0x34c62010  ori         $a2, $a2, 0x2010
    ctx->pc = 0x2787d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8208);
    // 0x2787d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2787d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2787dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2787dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2787e0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2787e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2787e4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2787e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2787e8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2787e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2787ec: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x2787ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x2787f0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2787f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2787f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2787f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2787f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2787f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2787fc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2787fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x278800: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x278800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x278804: 0xae300858  sw          $s0, 0x858($s1)
    ctx->pc = 0x278804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2136), GPR_U32(ctx, 16));
    // 0x278808: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x278808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27880c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27880cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x278810: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278810u;
    SET_GPR_U32(ctx, 31, 0x278818u);
    ctx->pc = 0x278814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278810u;
            // 0x278814: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278818u; }
        if (ctx->pc != 0x278818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278818u; }
        if (ctx->pc != 0x278818u) { return; }
    }
    ctx->pc = 0x278818u;
    // 0x278818: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x278818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27881c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x27881cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x278820: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x278820u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x278824: 0x30750fff  andi        $s5, $v1, 0xFFF
    ctx->pc = 0x278824u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x278828: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x278828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x27882c: 0x122342  srl         $a0, $s2, 13
    ctx->pc = 0x27882cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 13));
    // 0x278830: 0x121bc2  srl         $v1, $s2, 15
    ctx->pc = 0x278830u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 15));
    // 0x278834: 0x30940003  andi        $s4, $a0, 0x3
    ctx->pc = 0x278834u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x278838: 0x30730003  andi        $s3, $v1, 0x3
    ctx->pc = 0x278838u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x27883c: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27883Cu;
    {
        const bool branch_taken_0x27883c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x278840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27883Cu;
            // 0x278840: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27883c) {
            ctx->pc = 0x278854u;
            goto label_278854;
        }
    }
    ctx->pc = 0x278844u;
    // 0x278844: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x278844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x278848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27884c: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x27884Cu;
    SET_GPR_U32(ctx, 31, 0x278854u);
    ctx->pc = 0x278850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27884Cu;
            // 0x278850: 0x24a54700  addiu       $a1, $a1, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278854u; }
        if (ctx->pc != 0x278854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278854u; }
        if (ctx->pc != 0x278854u) { return; }
    }
    ctx->pc = 0x278854u;
label_278854:
    // 0x278854: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x278854u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
    // 0x278858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27885c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27885cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x278860: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x278860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x278864: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x278864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
    // 0x278868: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278868u;
    SET_GPR_U32(ctx, 31, 0x278870u);
    ctx->pc = 0x27886Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278868u;
            // 0x27886c: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278870u; }
        if (ctx->pc != 0x278870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278870u; }
        if (ctx->pc != 0x278870u) { return; }
    }
    ctx->pc = 0x278870u;
    // 0x278870: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x278870u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x278874: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x278874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x278878: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x278878u;
    {
        const bool branch_taken_0x278878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x27887Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278878u;
            // 0x27887c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278878) {
            ctx->pc = 0x27889Cu;
            goto label_27889c;
        }
    }
    ctx->pc = 0x278880u;
    // 0x278880: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x278880u;
    {
        const bool branch_taken_0x278880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x278884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278880u;
            // 0x278884: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278880) {
            ctx->pc = 0x27889Cu;
            goto label_27889c;
        }
    }
    ctx->pc = 0x278888u;
    // 0x278888: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x278888u;
    {
        const bool branch_taken_0x278888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x27888Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278888u;
            // 0x27888c: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278888) {
            ctx->pc = 0x27889Cu;
            goto label_27889c;
        }
    }
    ctx->pc = 0x278890u;
    // 0x278890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278894: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x278894u;
    SET_GPR_U32(ctx, 31, 0x27889Cu);
    ctx->pc = 0x278898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278894u;
            // 0x278898: 0x24a54728  addiu       $a1, $a1, 0x4728 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27889Cu; }
        if (ctx->pc != 0x27889Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27889Cu; }
        if (ctx->pc != 0x27889Cu) { return; }
    }
    ctx->pc = 0x27889Cu;
label_27889c:
    // 0x27889c: 0x8e240134  lw          $a0, 0x134($s1)
    ctx->pc = 0x27889cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x2788a0: 0x154480  sll         $t0, $s5, 18
    ctx->pc = 0x2788a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 18));
    // 0x2788a4: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x2788a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x2788a8: 0x124a80  sll         $t1, $s2, 10
    ctx->pc = 0x2788a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x2788ac: 0x8e260144  lw          $a2, 0x144($s1)
    ctx->pc = 0x2788acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x2788b0: 0x133b00  sll         $a3, $s3, 12
    ctx->pc = 0x2788b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x2788b4: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x2788b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2788b8: 0x142b00  sll         $a1, $s4, 12
    ctx->pc = 0x2788b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
    // 0x2788bc: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x2788bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x2788c0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x2788c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x2788c4: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x2788c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x2788c8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2788c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2788cc: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x2788ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2788d0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2788d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2788d4: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x2788d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x2788d8: 0xae270134  sw          $a3, 0x134($s1)
    ctx->pc = 0x2788d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 7));
    // 0x2788dc: 0xae250138  sw          $a1, 0x138($s1)
    ctx->pc = 0x2788dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 5));
    // 0x2788e0: 0xae260144  sw          $a2, 0x144($s1)
    ctx->pc = 0x2788e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 6));
    // 0x2788e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2788e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2788e8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2788e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2788ec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2788ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2788f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2788f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2788f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2788f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2788f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2788f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2788fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2788fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278900: 0x3e00008  jr          $ra
    ctx->pc = 0x278900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278900u;
            // 0x278904: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2786F0u: goto label_2786f0;
            case 0x278720u: goto label_278720;
            case 0x278728u: goto label_278728;
            case 0x27872Cu: goto label_27872c;
            case 0x278774u: goto label_278774;
            case 0x278778u: goto label_278778;
            case 0x27877Cu: goto label_27877c;
            case 0x27879Cu: goto label_27879c;
            case 0x2787A0u: goto label_2787a0;
            case 0x278854u: goto label_278854;
            case 0x27889Cu: goto label_27889c;
            case 0x278954u: goto label_278954;
            case 0x278998u: goto label_278998;
            case 0x2789B8u: goto label_2789b8;
            case 0x2789E4u: goto label_2789e4;
            case 0x278AACu: goto label_278aac;
            case 0x278BE4u: goto label_278be4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x278908u;
    // 0x278908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x278908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27890c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27890cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x278910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x278914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x278914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x278918: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278918u;
    SET_GPR_U32(ctx, 31, 0x278920u);
    ctx->pc = 0x27891Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278918u;
            // 0x27891c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278920u; }
        if (ctx->pc != 0x278920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278920u; }
        if (ctx->pc != 0x278920u) { return; }
    }
    ctx->pc = 0x278920u;
    // 0x278920: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x278920u;
    {
        const bool branch_taken_0x278920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278920u;
            // 0x278924: 0xae020850  sw          $v0, 0x850($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278920) {
            ctx->pc = 0x278954u;
            goto label_278954;
        }
    }
    ctx->pc = 0x278928u;
    // 0x278928: 0xc09e37a  jal         func_278DE8
    ctx->pc = 0x278928u;
    SET_GPR_U32(ctx, 31, 0x278930u);
    ctx->pc = 0x27892Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278928u;
            // 0x27892c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278DE8u;
    if (runtime->hasFunction(0x278DE8u)) {
        auto targetFn = runtime->lookupFunction(0x278DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278930u; }
        if (ctx->pc != 0x278930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278de8_0x278e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278930u; }
        if (ctx->pc != 0x278930u) { return; }
    }
    ctx->pc = 0x278930u;
    // 0x278930: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x278930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x278934: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x278934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x278938: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x278938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x27893c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27893cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278940: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x278940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x278944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278948: 0xae03082c  sw          $v1, 0x82C($s0)
    ctx->pc = 0x278948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    // 0x27894c: 0xc09e37a  jal         func_278DE8
    ctx->pc = 0x27894Cu;
    SET_GPR_U32(ctx, 31, 0x278954u);
    ctx->pc = 0x278950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27894Cu;
            // 0x278950: 0xae050828  sw          $a1, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278DE8u;
    if (runtime->hasFunction(0x278DE8u)) {
        auto targetFn = runtime->lookupFunction(0x278DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278954u; }
        if (ctx->pc != 0x278954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278de8_0x278e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278954u; }
        if (ctx->pc != 0x278954u) { return; }
    }
    ctx->pc = 0x278954u;
label_278954:
    // 0x278954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278958: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278958u;
    SET_GPR_U32(ctx, 31, 0x278960u);
    ctx->pc = 0x27895Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278958u;
            // 0x27895c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278960u; }
        if (ctx->pc != 0x278960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278960u; }
        if (ctx->pc != 0x278960u) { return; }
    }
    ctx->pc = 0x278960u;
    // 0x278960: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x278960u;
    {
        const bool branch_taken_0x278960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278960u;
            // 0x278964: 0xae020854  sw          $v0, 0x854($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278960) {
            ctx->pc = 0x278998u;
            goto label_278998;
        }
    }
    ctx->pc = 0x278968u;
    // 0x278968: 0xc09e37a  jal         func_278DE8
    ctx->pc = 0x278968u;
    SET_GPR_U32(ctx, 31, 0x278970u);
    ctx->pc = 0x27896Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278968u;
            // 0x27896c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278DE8u;
    if (runtime->hasFunction(0x278DE8u)) {
        auto targetFn = runtime->lookupFunction(0x278DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278970u; }
        if (ctx->pc != 0x278970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278de8_0x278e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278970u; }
        if (ctx->pc != 0x278970u) { return; }
    }
    ctx->pc = 0x278970u;
    // 0x278970: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x278970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x278974: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x278974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x278978: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x278978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x27897c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x27897cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x278980: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x278980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x278984: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x278984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278988: 0xae04082c  sw          $a0, 0x82C($s0)
    ctx->pc = 0x278988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 4));
    // 0x27898c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27898cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278990: 0xc09e37a  jal         func_278DE8
    ctx->pc = 0x278990u;
    SET_GPR_U32(ctx, 31, 0x278998u);
    ctx->pc = 0x278994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278990u;
            // 0x278994: 0xae050828  sw          $a1, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278DE8u;
    if (runtime->hasFunction(0x278DE8u)) {
        auto targetFn = runtime->lookupFunction(0x278DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278998u; }
        if (ctx->pc != 0x278998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278de8_0x278e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278998u; }
        if (ctx->pc != 0x278998u) { return; }
    }
    ctx->pc = 0x278998u;
label_278998:
    // 0x278998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27899c: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x27899Cu;
    SET_GPR_U32(ctx, 31, 0x2789A4u);
    ctx->pc = 0x2789A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27899Cu;
            // 0x2789a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2789A4u; }
        if (ctx->pc != 0x2789A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2789A4u; }
        if (ctx->pc != 0x2789A4u) { return; }
    }
    ctx->pc = 0x2789A4u;
    // 0x2789a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2789A4u;
    {
        const bool branch_taken_0x2789a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2789A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2789A4u;
            // 0x2789a8: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2789a4) {
            ctx->pc = 0x2789B8u;
            goto label_2789b8;
        }
    }
    ctx->pc = 0x2789ACu;
    // 0x2789ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2789acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2789b0: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x2789B0u;
    SET_GPR_U32(ctx, 31, 0x2789B8u);
    ctx->pc = 0x2789B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2789B0u;
            // 0x2789b4: 0x24a54748  addiu       $a1, $a1, 0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2789B8u; }
        if (ctx->pc != 0x2789B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2789B8u; }
        if (ctx->pc != 0x2789B8u) { return; }
    }
    ctx->pc = 0x2789B8u;
label_2789b8:
    // 0x2789b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2789b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2789bc: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x2789BCu;
    SET_GPR_U32(ctx, 31, 0x2789C4u);
    ctx->pc = 0x2789C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2789BCu;
            // 0x2789c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2789C4u; }
        if (ctx->pc != 0x2789C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2789C4u; }
        if (ctx->pc != 0x2789C4u) { return; }
    }
    ctx->pc = 0x2789C4u;
    // 0x2789c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2789C4u;
    {
        const bool branch_taken_0x2789c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2789C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2789C4u;
            // 0x2789c8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2789c4) {
            ctx->pc = 0x2789E4u;
            goto label_2789e4;
        }
    }
    ctx->pc = 0x2789CCu;
    // 0x2789cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2789ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2789d0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2789d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2789d4: 0x24a54770  addiu       $a1, $a1, 0x4770
    ctx->pc = 0x2789d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18288));
    // 0x2789d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2789d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2789dc: 0x809d0e6  j           func_274398
    ctx->pc = 0x2789DCu;
    ctx->pc = 0x2789E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2789DCu;
            // 0x2789e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00274398_0x274398(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2789E4u;
label_2789e4:
    // 0x2789e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2789e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2789e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2789E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2789ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2789E8u;
            // 0x2789ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2786F0u: goto label_2786f0;
            case 0x278720u: goto label_278720;
            case 0x278728u: goto label_278728;
            case 0x27872Cu: goto label_27872c;
            case 0x278774u: goto label_278774;
            case 0x278778u: goto label_278778;
            case 0x27877Cu: goto label_27877c;
            case 0x27879Cu: goto label_27879c;
            case 0x2787A0u: goto label_2787a0;
            case 0x278854u: goto label_278854;
            case 0x27889Cu: goto label_27889c;
            case 0x278954u: goto label_278954;
            case 0x278998u: goto label_278998;
            case 0x2789B8u: goto label_2789b8;
            case 0x2789E4u: goto label_2789e4;
            case 0x278AACu: goto label_278aac;
            case 0x278BE4u: goto label_278be4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2789F0u;
    // 0x2789f0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2789f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2789f4: 0x809d0e6  j           func_274398
    ctx->pc = 0x2789F4u;
    ctx->pc = 0x2789F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2789F4u;
            // 0x2789f8: 0x24a547a0  addiu       $a1, $a1, 0x47A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00274398_0x274398(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2789FCu;
    // 0x2789fc: 0x0  nop
    ctx->pc = 0x2789fcu;
    // NOP
    // 0x278a00: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x278a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x278a04: 0x809d0e6  j           func_274398
    ctx->pc = 0x278A04u;
    ctx->pc = 0x278A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278A04u;
            // 0x278a08: 0x24a547d0  addiu       $a1, $a1, 0x47D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00274398_0x274398(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x278A0Cu;
    // 0x278a0c: 0x0  nop
    ctx->pc = 0x278a0cu;
    // NOP
    // 0x278a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x278a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x278a14: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x278a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x278a18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x278a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x278a1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x278a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x278a20: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278A20u;
    SET_GPR_U32(ctx, 31, 0x278A28u);
    ctx->pc = 0x278A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278A20u;
            // 0x278a24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278A28u; }
        if (ctx->pc != 0x278A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278A28u; }
        if (ctx->pc != 0x278A28u) { return; }
    }
    ctx->pc = 0x278A28u;
    // 0x278a28: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x278a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x278a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278a30: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278A30u;
    SET_GPR_U32(ctx, 31, 0x278A38u);
    ctx->pc = 0x278A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278A30u;
            // 0x278a34: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278A38u; }
        if (ctx->pc != 0x278A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278A38u; }
        if (ctx->pc != 0x278A38u) { return; }
    }
    ctx->pc = 0x278A38u;
    // 0x278a38: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x278a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
    // 0x278a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278a40: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278A40u;
    SET_GPR_U32(ctx, 31, 0x278A48u);
    ctx->pc = 0x278A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278A40u;
            // 0x278a44: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278A48u; }
        if (ctx->pc != 0x278A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278A48u; }
        if (ctx->pc != 0x278A48u) { return; }
    }
    ctx->pc = 0x278A48u;
    // 0x278a48: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x278a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    // 0x278a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278a50: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278A50u;
    SET_GPR_U32(ctx, 31, 0x278A58u);
    ctx->pc = 0x278A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278A50u;
            // 0x278a54: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278A58u; }
        if (ctx->pc != 0x278A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278A58u; }
        if (ctx->pc != 0x278A58u) { return; }
    }
    ctx->pc = 0x278A58u;
    // 0x278a58: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x278a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x278a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278a60: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278A60u;
    SET_GPR_U32(ctx, 31, 0x278A68u);
    ctx->pc = 0x278A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278A60u;
            // 0x278a64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278A68u; }
        if (ctx->pc != 0x278A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278A68u; }
        if (ctx->pc != 0x278A68u) { return; }
    }
    ctx->pc = 0x278A68u;
    // 0x278a68: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x278a68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x278a6c: 0x3c06fffc  lui         $a2, 0xFFFC
    ctx->pc = 0x278a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65532 << 16));
    // 0x278a70: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x278a70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x278a74: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x278a74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x278a78: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x278a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x278a7c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x278a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x278a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278a84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x278a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x278a88: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x278a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x278a8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x278a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x278a90: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278A90u;
    SET_GPR_U32(ctx, 31, 0x278A98u);
    ctx->pc = 0x278A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278A90u;
            // 0x278a94: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278A98u; }
        if (ctx->pc != 0x278A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278A98u; }
        if (ctx->pc != 0x278A98u) { return; }
    }
    ctx->pc = 0x278A98u;
    // 0x278a98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x278a98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278a9c: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x278a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x278aa0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x278AA0u;
    {
        const bool branch_taken_0x278aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278AA0u;
            // 0x278aa4: 0xae030184  sw          $v1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278aa0) {
            ctx->pc = 0x278AACu;
            goto label_278aac;
        }
    }
    ctx->pc = 0x278AA8u;
    // 0x278aa8: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x278aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_278aac:
    // 0x278aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278ab0: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278AB0u;
    SET_GPR_U32(ctx, 31, 0x278AB8u);
    ctx->pc = 0x278AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278AB0u;
            // 0x278ab4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278AB8u; }
        if (ctx->pc != 0x278AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278AB8u; }
        if (ctx->pc != 0x278AB8u) { return; }
    }
    ctx->pc = 0x278AB8u;
    // 0x278ab8: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x278ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x278abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278ac0: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278AC0u;
    SET_GPR_U32(ctx, 31, 0x278AC8u);
    ctx->pc = 0x278AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278AC0u;
            // 0x278ac4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278AC8u; }
        if (ctx->pc != 0x278AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278AC8u; }
        if (ctx->pc != 0x278AC8u) { return; }
    }
    ctx->pc = 0x278AC8u;
    // 0x278ac8: 0xae02018c  sw          $v0, 0x18C($s0)
    ctx->pc = 0x278ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 2));
    // 0x278acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278ad0: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278AD0u;
    SET_GPR_U32(ctx, 31, 0x278AD8u);
    ctx->pc = 0x278AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278AD0u;
            // 0x278ad4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278AD8u; }
        if (ctx->pc != 0x278AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278AD8u; }
        if (ctx->pc != 0x278AD8u) { return; }
    }
    ctx->pc = 0x278AD8u;
    // 0x278ad8: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x278ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x278adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278ae0: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278AE0u;
    SET_GPR_U32(ctx, 31, 0x278AE8u);
    ctx->pc = 0x278AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278AE0u;
            // 0x278ae4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278AE8u; }
        if (ctx->pc != 0x278AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278AE8u; }
        if (ctx->pc != 0x278AE8u) { return; }
    }
    ctx->pc = 0x278AE8u;
    // 0x278ae8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x278ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x278aec: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x278aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8208)));
    // 0x278af0: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x278af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x278af4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x278af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x278af8: 0x21580  sll         $v0, $v0, 22
    ctx->pc = 0x278af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
    // 0x278afc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x278afcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x278b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b04: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x278b04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x278b08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x278b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278b0c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x278b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x278b10: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278B10u;
    SET_GPR_U32(ctx, 31, 0x278B18u);
    ctx->pc = 0x278B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278B10u;
            // 0x278b14: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B18u; }
        if (ctx->pc != 0x278B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B18u; }
        if (ctx->pc != 0x278B18u) { return; }
    }
    ctx->pc = 0x278B18u;
    // 0x278b18: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x278b18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x278b1c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x278b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8208)));
    // 0x278b20: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x278b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x278b24: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x278b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x278b28: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x278b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x278b2c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x278b2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x278b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b34: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x278b34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x278b38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x278b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278b3c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x278b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x278b40: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278B40u;
    SET_GPR_U32(ctx, 31, 0x278B48u);
    ctx->pc = 0x278B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278B40u;
            // 0x278b44: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B48u; }
        if (ctx->pc != 0x278B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B48u; }
        if (ctx->pc != 0x278B48u) { return; }
    }
    ctx->pc = 0x278B48u;
    // 0x278b48: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x278b48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x278b4c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x278b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8208)));
    // 0x278b50: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x278b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x278b54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x278b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x278b58: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x278b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x278b5c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x278b5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x278b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b64: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x278b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x278b68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x278b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278b6c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x278b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x278b70: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278B70u;
    SET_GPR_U32(ctx, 31, 0x278B78u);
    ctx->pc = 0x278B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278B70u;
            // 0x278b74: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B78u; }
        if (ctx->pc != 0x278B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B78u; }
        if (ctx->pc != 0x278B78u) { return; }
    }
    ctx->pc = 0x278B78u;
    // 0x278b78: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x278b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
    // 0x278b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b80: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278B80u;
    SET_GPR_U32(ctx, 31, 0x278B88u);
    ctx->pc = 0x278B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278B80u;
            // 0x278b84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B88u; }
        if (ctx->pc != 0x278B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B88u; }
        if (ctx->pc != 0x278B88u) { return; }
    }
    ctx->pc = 0x278B88u;
    // 0x278b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b8c: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278B8Cu;
    SET_GPR_U32(ctx, 31, 0x278B94u);
    ctx->pc = 0x278B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278B8Cu;
            // 0x278b90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B94u; }
        if (ctx->pc != 0x278B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B94u; }
        if (ctx->pc != 0x278B94u) { return; }
    }
    ctx->pc = 0x278B94u;
    // 0x278b94: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x278b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    // 0x278b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b9c: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278B9Cu;
    SET_GPR_U32(ctx, 31, 0x278BA4u);
    ctx->pc = 0x278BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278B9Cu;
            // 0x278ba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278BA4u; }
        if (ctx->pc != 0x278BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278BA4u; }
        if (ctx->pc != 0x278BA4u) { return; }
    }
    ctx->pc = 0x278BA4u;
    // 0x278ba4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x278BA4u;
    {
        const bool branch_taken_0x278ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278BA4u;
            // 0x278ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ba4) {
            ctx->pc = 0x278BE4u;
            goto label_278be4;
        }
    }
    ctx->pc = 0x278BACu;
    // 0x278bac: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278BACu;
    SET_GPR_U32(ctx, 31, 0x278BB4u);
    ctx->pc = 0x278BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278BACu;
            // 0x278bb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278BB4u; }
        if (ctx->pc != 0x278BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278BB4u; }
        if (ctx->pc != 0x278BB4u) { return; }
    }
    ctx->pc = 0x278BB4u;
    // 0x278bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278bb8: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278BB8u;
    SET_GPR_U32(ctx, 31, 0x278BC0u);
    ctx->pc = 0x278BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278BB8u;
            // 0x278bbc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278BC0u; }
        if (ctx->pc != 0x278BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278BC0u; }
        if (ctx->pc != 0x278BC0u) { return; }
    }
    ctx->pc = 0x278BC0u;
    // 0x278bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278bc4: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278BC4u;
    SET_GPR_U32(ctx, 31, 0x278BCCu);
    ctx->pc = 0x278BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278BC4u;
            // 0x278bc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278BCCu; }
        if (ctx->pc != 0x278BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278BCCu; }
        if (ctx->pc != 0x278BCCu) { return; }
    }
    ctx->pc = 0x278BCCu;
    // 0x278bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278bd0: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278BD0u;
    SET_GPR_U32(ctx, 31, 0x278BD8u);
    ctx->pc = 0x278BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278BD0u;
            // 0x278bd4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278BD8u; }
        if (ctx->pc != 0x278BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278BD8u; }
        if (ctx->pc != 0x278BD8u) { return; }
    }
    ctx->pc = 0x278BD8u;
    // 0x278bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278bdc: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278BDCu;
    SET_GPR_U32(ctx, 31, 0x278BE4u);
    ctx->pc = 0x278BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278BDCu;
            // 0x278be0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278BE4u; }
        if (ctx->pc != 0x278BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278BE4u; }
        if (ctx->pc != 0x278BE4u) { return; }
    }
    ctx->pc = 0x278BE4u;
label_278be4:
    // 0x278be4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x278be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278be8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x278be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278bec: 0x3e00008  jr          $ra
    ctx->pc = 0x278BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278BECu;
            // 0x278bf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2786F0u: goto label_2786f0;
            case 0x278720u: goto label_278720;
            case 0x278728u: goto label_278728;
            case 0x27872Cu: goto label_27872c;
            case 0x278774u: goto label_278774;
            case 0x278778u: goto label_278778;
            case 0x27877Cu: goto label_27877c;
            case 0x27879Cu: goto label_27879c;
            case 0x2787A0u: goto label_2787a0;
            case 0x278854u: goto label_278854;
            case 0x27889Cu: goto label_27889c;
            case 0x278954u: goto label_278954;
            case 0x278998u: goto label_278998;
            case 0x2789B8u: goto label_2789b8;
            case 0x2789E4u: goto label_2789e4;
            case 0x278AACu: goto label_278aac;
            case 0x278BE4u: goto label_278be4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x278BF4u;
    // 0x278bf4: 0x0  nop
    ctx->pc = 0x278bf4u;
    // NOP
    // 0x278bf8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x278bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x278bfc: 0x809d0e6  j           func_274398
    ctx->pc = 0x278BFCu;
    ctx->pc = 0x278C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278BFCu;
            // 0x278c00: 0x24a547e8  addiu       $a1, $a1, 0x47E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00274398_0x274398(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x278C04u;
    // 0x278c04: 0x0  nop
    ctx->pc = 0x278c04u;
    // NOP
    // 0x278c08: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x278c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x278c0c: 0x809d0e6  j           func_274398
    ctx->pc = 0x278C0Cu;
    ctx->pc = 0x278C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278C0Cu;
            // 0x278c10: 0x24a54820  addiu       $a1, $a1, 0x4820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00274398_0x274398(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x278C14u;
    // 0x278c14: 0x0  nop
    ctx->pc = 0x278c14u;
    // NOP
}
