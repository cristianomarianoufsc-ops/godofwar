#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187868
// Address: 0x187868 - 0x187990
void sub_00187868_0x187868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187868_0x187868");
#endif

    ctx->pc = 0x187868u;

label_187868:
    // 0x187868: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x187868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18786c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18786cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x187870: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x187870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x187874: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x187874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187878: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x187878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18787c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18787cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187880: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x187880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x187884: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x187884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187888: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x187888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x18788c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18788cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187890: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x187890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x187894: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x187894u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18789c: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x18789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1878a0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1878A0u;
    {
        const bool branch_taken_0x1878a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1878A0u;
            // 0x1878a4: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878a0) {
            ctx->pc = 0x1878DCu;
            goto label_1878dc;
        }
    }
    ctx->pc = 0x1878A8u;
    // 0x1878a8: 0xc04f856  jal         func_13E158
    ctx->pc = 0x1878A8u;
    SET_GPR_U32(ctx, 31, 0x1878B0u);
    ctx->pc = 0x1878ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1878A8u;
            // 0x1878ac: 0x8c440074  lw          $a0, 0x74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1878B0u; }
        if (ctx->pc != 0x1878B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1878B0u; }
        if (ctx->pc != 0x1878B0u) { return; }
    }
    ctx->pc = 0x1878B0u;
    // 0x1878b0: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x1878b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1878b4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1878b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1878b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1878bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878c0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1878c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878c4: 0xc061e1a  jal         func_187868
    ctx->pc = 0x1878C4u;
    SET_GPR_U32(ctx, 31, 0x1878CCu);
    ctx->pc = 0x1878C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1878C4u;
            // 0x1878c8: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    runtime->cooperativeGuestYield();
    goto label_187868;
    ctx->pc = 0x1878CCu;
label_1878cc:
    // 0x1878cc: 0xc04f860  jal         func_13E180
    ctx->pc = 0x1878CCu;
    SET_GPR_U32(ctx, 31, 0x1878D4u);
    ctx->pc = 0x1878D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1878CCu;
            // 0x1878d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1878D4u; }
        if (ctx->pc != 0x1878D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1878D4u; }
        if (ctx->pc != 0x1878D4u) { return; }
    }
    ctx->pc = 0x1878D4u;
    // 0x1878d4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1878D4u;
    {
        const bool branch_taken_0x1878d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1878D4u;
            // 0x1878d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878d4) {
            ctx->pc = 0x187968u;
            goto label_187968;
        }
    }
    ctx->pc = 0x1878DCu;
label_1878dc:
    // 0x1878dc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1878dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1878e0: 0x26030084  addiu       $v1, $s0, 0x84
    ctx->pc = 0x1878e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x1878e4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1878e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1878e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1878e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1878ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1878ECu;
    {
        const bool branch_taken_0x1878ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1878ec) {
            ctx->pc = 0x187908u;
            goto label_187908;
        }
    }
    ctx->pc = 0x1878F4u;
    // 0x1878f4: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1878F4u;
    SET_GPR_U32(ctx, 31, 0x1878FCu);
    ctx->pc = 0x1878F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1878F4u;
            // 0x1878f8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1878FCu; }
        if (ctx->pc != 0x1878FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1878FCu; }
        if (ctx->pc != 0x1878FCu) { return; }
    }
    ctx->pc = 0x1878FCu;
    // 0x1878fc: 0xc08ea90  jal         func_23AA40
    ctx->pc = 0x1878FCu;
    SET_GPR_U32(ctx, 31, 0x187904u);
    ctx->pc = 0x187900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1878FCu;
            // 0x187900: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AA40u;
    if (runtime->hasFunction(0x23AA40u)) {
        auto targetFn = runtime->lookupFunction(0x23AA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187904u; }
        if (ctx->pc != 0x187904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aa40_0x23aa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187904u; }
        if (ctx->pc != 0x187904u) { return; }
    }
    ctx->pc = 0x187904u;
    // 0x187904: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x187904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_187908:
    // 0x187908: 0xc04f824  jal         func_13E090
    ctx->pc = 0x187908u;
    SET_GPR_U32(ctx, 31, 0x187910u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187910u; }
        if (ctx->pc != 0x187910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187910u; }
        if (ctx->pc != 0x187910u) { return; }
    }
    ctx->pc = 0x187910u;
    // 0x187910: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x187910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187914: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x187914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187918: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x187918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18791c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x18791cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187920: 0xc04f644  jal         func_13D910
    ctx->pc = 0x187920u;
    SET_GPR_U32(ctx, 31, 0x187928u);
    ctx->pc = 0x187924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187920u;
            // 0x187924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187928u; }
        if (ctx->pc != 0x187928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187928u; }
        if (ctx->pc != 0x187928u) { return; }
    }
    ctx->pc = 0x187928u;
    // 0x187928: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x187928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x18792c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18792cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187930: 0x8c647910  lw          $a0, 0x7910($v1)
    ctx->pc = 0x187930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30992)));
    // 0x187934: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x187934u;
    SET_GPR_U32(ctx, 31, 0x18793Cu);
    ctx->pc = 0x187938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187934u;
            // 0x187938: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18793Cu; }
        if (ctx->pc != 0x18793Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18793Cu; }
        if (ctx->pc != 0x18793Cu) { return; }
    }
    ctx->pc = 0x18793Cu;
    // 0x18793c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18793cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187940: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x187940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x187944: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x187944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x187948: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x187948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x18794c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18794cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x187950: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x187950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x187954: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x187954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x187958: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x187958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18795c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x18795cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x187960: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x187960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x187964: 0x0  nop
    ctx->pc = 0x187964u;
    // NOP
label_187968:
    // 0x187968: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x187968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18796c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18796cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x187970: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x187970u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187974: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x187974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187978: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x187978u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18797c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x18797cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187984: 0x3e00008  jr          $ra
    ctx->pc = 0x187984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187984u;
            // 0x187988: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187868u: goto label_187868;
            case 0x1878CCu: goto label_1878cc;
            case 0x1878DCu: goto label_1878dc;
            case 0x187908u: goto label_187908;
            case 0x187968u: goto label_187968;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18798Cu;
    // 0x18798c: 0x0  nop
    ctx->pc = 0x18798cu;
    // NOP
}
