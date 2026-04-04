#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026B918
// Address: 0x26b918 - 0x26bb30
void sub_0026B918_0x26b918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B918_0x26b918");
#endif

    ctx->pc = 0x26b918u;

    // 0x26b918: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26b918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26b91c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x26b91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x26b920: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x26b920u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x26b924: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x26b924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x26b928: 0x8e621338  lw          $v0, 0x1338($s3)
    ctx->pc = 0x26b928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4920)));
    // 0x26b92c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x26b92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x26b930: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26b930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26b934: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x26B934u;
    {
        const bool branch_taken_0x26b934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B934u;
            // 0x26b938: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b934) {
            ctx->pc = 0x26BA1Cu;
            goto label_26ba1c;
        }
    }
    ctx->pc = 0x26B93Cu;
    // 0x26b93c: 0xc09aee6  jal         func_26BB98
    ctx->pc = 0x26B93Cu;
    SET_GPR_U32(ctx, 31, 0x26B944u);
    ctx->pc = 0x26BB98u;
    if (runtime->hasFunction(0x26BB98u)) {
        auto targetFn = runtime->lookupFunction(0x26BB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B944u; }
        if (ctx->pc != 0x26B944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BB98_0x26bb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B944u; }
        if (ctx->pc != 0x26B944u) { return; }
    }
    ctx->pc = 0x26B944u;
    // 0x26b944: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x26B944u;
    {
        const bool branch_taken_0x26b944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B944u;
            // 0x26b948: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b944) {
            ctx->pc = 0x26BA1Cu;
            goto label_26ba1c;
        }
    }
    ctx->pc = 0x26B94Cu;
    // 0x26b94c: 0x8e221354  lw          $v0, 0x1354($s1)
    ctx->pc = 0x26b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4948)));
    // 0x26b950: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26B950u;
    {
        const bool branch_taken_0x26b950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B950u;
            // 0x26b954: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b950) {
            ctx->pc = 0x26B980u;
            goto label_26b980;
        }
    }
    ctx->pc = 0x26B958u;
    // 0x26b958: 0x8e06139c  lw          $a2, 0x139C($s0)
    ctx->pc = 0x26b958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5020)));
    // 0x26b95c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x26B95Cu;
    {
        const bool branch_taken_0x26b95c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B95Cu;
            // 0x26b960: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b95c) {
            ctx->pc = 0x26B974u;
            goto label_26b974;
        }
    }
    ctx->pc = 0x26B964u;
    // 0x26b964: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x26b964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x26b968: 0x8c445604  lw          $a0, 0x5604($v0)
    ctx->pc = 0x26b968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22020)));
    // 0x26b96c: 0xc0f809  jalr        $a2
    ctx->pc = 0x26B96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x26B974u);
        ctx->pc = 0x26B970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B96Cu;
            // 0x26b970: 0xdc6513a0  ld          $a1, 0x13A0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 5024)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B974u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B974u: goto label_26b974;
            case 0x26B980u: goto label_26b980;
            case 0x26B9B8u: goto label_26b9b8;
            case 0x26B9FCu: goto label_26b9fc;
            case 0x26BA1Cu: goto label_26ba1c;
            case 0x26BA64u: goto label_26ba64;
            case 0x26BA6Cu: goto label_26ba6c;
            case 0x26BAB4u: goto label_26bab4;
            case 0x26BAB8u: goto label_26bab8;
            case 0x26BAF0u: goto label_26baf0;
            case 0x26BAF4u: goto label_26baf4;
            case 0x26BB08u: goto label_26bb08;
            case 0x26BB10u: goto label_26bb10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B974u; }
            if (ctx->pc != 0x26B974u) { return; }
        }
        }
    }
    ctx->pc = 0x26B974u;
label_26b974:
    // 0x26b974: 0xae00139c  sw          $zero, 0x139C($s0)
    ctx->pc = 0x26b974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5020), GPR_U32(ctx, 0));
    // 0x26b978: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x26B978u;
    {
        const bool branch_taken_0x26b978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B978u;
            // 0x26b97c: 0xae201354  sw          $zero, 0x1354($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4948), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b978) {
            ctx->pc = 0x26BA1Cu;
            goto label_26ba1c;
        }
    }
    ctx->pc = 0x26B980u;
label_26b980:
    // 0x26b980: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26b980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26b984: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x26b984u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x26b988: 0x8c421378  lw          $v0, 0x1378($v0)
    ctx->pc = 0x26b988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4984)));
    // 0x26b98c: 0x26431358  addiu       $v1, $s2, 0x1358
    ctx->pc = 0x26b98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4952));
    // 0x26b990: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26b990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26b994: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26b994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26b998: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x26b998u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26b99c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x26b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x26b9a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b9a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b9a8: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x26B9A8u;
    {
        const bool branch_taken_0x26b9a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26B9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B9A8u;
            // 0x26b9ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b9a8) {
            ctx->pc = 0x26BA1Cu;
            goto label_26ba1c;
        }
    }
    ctx->pc = 0x26B9B0u;
    // 0x26b9b0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26b9b4: 0x0  nop
    ctx->pc = 0x26b9b4u;
    // NOP
label_26b9b8:
    // 0x26b9b8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26b9b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b9bc: 0x24421368  addiu       $v0, $v0, 0x1368
    ctx->pc = 0x26b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4968));
    // 0x26b9c0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x26b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x26b9c4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x26b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x26b9c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b9cc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x26b9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26b9d0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x26b9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26b9d4: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B9D4u;
    {
        const bool branch_taken_0x26b9d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B9D4u;
            // 0x26b9d8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b9d4) {
            ctx->pc = 0x26B9FCu;
            goto label_26b9fc;
        }
    }
    ctx->pc = 0x26B9DCu;
    // 0x26b9dc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x26b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x26b9e0: 0x24421370  addiu       $v0, $v0, 0x1370
    ctx->pc = 0x26b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4976));
    // 0x26b9e4: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x26b9e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26b9e8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x26b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x26b9ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b9f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26b9f4: 0xc0f809  jalr        $a2
    ctx->pc = 0x26B9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x26B9FCu);
        ctx->pc = 0x26B9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B9F4u;
            // 0x26b9f8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B9FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B974u: goto label_26b974;
            case 0x26B980u: goto label_26b980;
            case 0x26B9B8u: goto label_26b9b8;
            case 0x26B9FCu: goto label_26b9fc;
            case 0x26BA1Cu: goto label_26ba1c;
            case 0x26BA64u: goto label_26ba64;
            case 0x26BA6Cu: goto label_26ba6c;
            case 0x26BAB4u: goto label_26bab4;
            case 0x26BAB8u: goto label_26bab8;
            case 0x26BAF0u: goto label_26baf0;
            case 0x26BAF4u: goto label_26baf4;
            case 0x26BB08u: goto label_26bb08;
            case 0x26BB10u: goto label_26bb10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B9FCu; }
            if (ctx->pc != 0x26B9FCu) { return; }
        }
        }
    }
    ctx->pc = 0x26B9FCu;
label_26b9fc:
    // 0x26b9fc: 0x26421358  addiu       $v0, $s2, 0x1358
    ctx->pc = 0x26b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4952));
    // 0x26ba00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26ba00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26ba04: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x26ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x26ba08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26ba0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26ba10: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x26ba10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26ba14: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x26BA14u;
    {
        const bool branch_taken_0x26ba14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BA14u;
            // 0x26ba18: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba14) {
            ctx->pc = 0x26B9B8u;
            runtime->cooperativeGuestYield();
            goto label_26b9b8;
        }
    }
    ctx->pc = 0x26BA1Cu;
label_26ba1c:
    // 0x26ba1c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x26ba1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x26ba20: 0x8e221380  lw          $v0, 0x1380($s1)
    ctx->pc = 0x26ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4992)));
    // 0x26ba24: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26BA24u;
    {
        const bool branch_taken_0x26ba24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BA24u;
            // 0x26ba28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba24) {
            ctx->pc = 0x26BA6Cu;
            goto label_26ba6c;
        }
    }
    ctx->pc = 0x26BA2Cu;
    // 0x26ba2c: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x26BA2Cu;
    SET_GPR_U32(ctx, 31, 0x26BA34u);
    ctx->pc = 0x26BA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BA2Cu;
            // 0x26ba30: 0x3c100031  lui         $s0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BA34u; }
        if (ctx->pc != 0x26BA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BA34u; }
        if (ctx->pc != 0x26BA34u) { return; }
    }
    ctx->pc = 0x26BA34u;
    // 0x26ba34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26ba38: 0x8e04a240  lw          $a0, -0x5DC0($s0)
    ctx->pc = 0x26ba38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943296)));
    // 0x26ba3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26ba3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26ba40: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26BA40u;
    {
        const bool branch_taken_0x26ba40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BA40u;
            // 0x26ba44: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba40) {
            ctx->pc = 0x26BA6Cu;
            goto label_26ba6c;
        }
    }
    ctx->pc = 0x26BA48u;
    // 0x26ba48: 0x8c431388  lw          $v1, 0x1388($v0)
    ctx->pc = 0x26ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5000)));
    // 0x26ba4c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BA4Cu;
    {
        const bool branch_taken_0x26ba4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BA4Cu;
            // 0x26ba50: 0x24461388  addiu       $a2, $v0, 0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba4c) {
            ctx->pc = 0x26BA64u;
            goto label_26ba64;
        }
    }
    ctx->pc = 0x26BA54u;
    // 0x26ba54: 0xdcc50008  ld          $a1, 0x8($a2)
    ctx->pc = 0x26ba54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x26ba58: 0xac401388  sw          $zero, 0x1388($v0)
    ctx->pc = 0x26ba58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5000), GPR_U32(ctx, 0));
    // 0x26ba5c: 0x60f809  jalr        $v1
    ctx->pc = 0x26BA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26BA64u);
        ctx->pc = 0x26BA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BA5Cu;
            // 0x26ba60: 0xfcc00008  sd          $zero, 0x8($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26BA64u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B974u: goto label_26b974;
            case 0x26B980u: goto label_26b980;
            case 0x26B9B8u: goto label_26b9b8;
            case 0x26B9FCu: goto label_26b9fc;
            case 0x26BA1Cu: goto label_26ba1c;
            case 0x26BA64u: goto label_26ba64;
            case 0x26BA6Cu: goto label_26ba6c;
            case 0x26BAB4u: goto label_26bab4;
            case 0x26BAB8u: goto label_26bab8;
            case 0x26BAF0u: goto label_26baf0;
            case 0x26BAF4u: goto label_26baf4;
            case 0x26BB08u: goto label_26bb08;
            case 0x26BB10u: goto label_26bb10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26BA64u; }
            if (ctx->pc != 0x26BA64u) { return; }
        }
        }
    }
    ctx->pc = 0x26BA64u;
label_26ba64:
    // 0x26ba64: 0xae00a240  sw          $zero, -0x5DC0($s0)
    ctx->pc = 0x26ba64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943296), GPR_U32(ctx, 0));
    // 0x26ba68: 0xae201380  sw          $zero, 0x1380($s1)
    ctx->pc = 0x26ba68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4992), GPR_U32(ctx, 0));
label_26ba6c:
    // 0x26ba6c: 0x8e621338  lw          $v0, 0x1338($s3)
    ctx->pc = 0x26ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4920)));
    // 0x26ba70: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26BA70u;
    {
        const bool branch_taken_0x26ba70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BA70u;
            // 0x26ba74: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba70) {
            ctx->pc = 0x26BAB4u;
            goto label_26bab4;
        }
    }
    ctx->pc = 0x26BA78u;
    // 0x26ba78: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26ba7c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x26ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x26ba80: 0x8c421378  lw          $v0, 0x1378($v0)
    ctx->pc = 0x26ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4984)));
    // 0x26ba84: 0x24631358  addiu       $v1, $v1, 0x1358
    ctx->pc = 0x26ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4952));
    // 0x26ba88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26ba8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26ba90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26ba94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26ba98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BA98u;
    {
        const bool branch_taken_0x26ba98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BA98u;
            // 0x26ba9c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba98) {
            ctx->pc = 0x26BAB4u;
            goto label_26bab4;
        }
    }
    ctx->pc = 0x26BAA0u;
    // 0x26baa0: 0x8c42137c  lw          $v0, 0x137C($v0)
    ctx->pc = 0x26baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4988)));
    // 0x26baa4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BAA4u;
    {
        const bool branch_taken_0x26baa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BAA4u;
            // 0x26baa8: 0x8e02134c  lw          $v0, 0x134C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26baa4) {
            ctx->pc = 0x26BAB8u;
            goto label_26bab8;
        }
    }
    ctx->pc = 0x26BAACu;
    // 0x26baac: 0xc09b12e  jal         func_26C4B8
    ctx->pc = 0x26BAACu;
    SET_GPR_U32(ctx, 31, 0x26BAB4u);
    ctx->pc = 0x26C4B8u;
    if (runtime->hasFunction(0x26C4B8u)) {
        auto targetFn = runtime->lookupFunction(0x26C4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BAB4u; }
        if (ctx->pc != 0x26BAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C4B8_0x26c4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BAB4u; }
        if (ctx->pc != 0x26BAB4u) { return; }
    }
    ctx->pc = 0x26BAB4u;
label_26bab4:
    // 0x26bab4: 0x8e02134c  lw          $v0, 0x134C($s0)
    ctx->pc = 0x26bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4940)));
label_26bab8:
    // 0x26bab8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26BAB8u;
    {
        const bool branch_taken_0x26bab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BAB8u;
            // 0x26babc: 0x8e621338  lw          $v0, 0x1338($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bab8) {
            ctx->pc = 0x26BAF4u;
            goto label_26baf4;
        }
    }
    ctx->pc = 0x26BAC0u;
    // 0x26bac0: 0xc09b196  jal         func_26C658
    ctx->pc = 0x26BAC0u;
    SET_GPR_U32(ctx, 31, 0x26BAC8u);
    ctx->pc = 0x26BAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BAC0u;
            // 0x26bac4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C658u;
    if (runtime->hasFunction(0x26C658u)) {
        auto targetFn = runtime->lookupFunction(0x26C658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BAC8u; }
        if (ctx->pc != 0x26BAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26c658_0x26c728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BAC8u; }
        if (ctx->pc != 0x26BAC8u) { return; }
    }
    ctx->pc = 0x26BAC8u;
    // 0x26bac8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x26bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x26bacc: 0x8c621350  lw          $v0, 0x1350($v1)
    ctx->pc = 0x26baccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4944)));
    // 0x26bad0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26BAD0u;
    {
        const bool branch_taken_0x26bad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BAD0u;
            // 0x26bad4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bad0) {
            ctx->pc = 0x26BAF0u;
            goto label_26baf0;
        }
    }
    ctx->pc = 0x26BAD8u;
    // 0x26bad8: 0xae00134c  sw          $zero, 0x134C($s0)
    ctx->pc = 0x26bad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4940), GPR_U32(ctx, 0));
    // 0x26badc: 0x8c421348  lw          $v0, 0x1348($v0)
    ctx->pc = 0x26badcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4936)));
    // 0x26bae0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BAE0u;
    {
        const bool branch_taken_0x26bae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BAE0u;
            // 0x26bae4: 0xac601350  sw          $zero, 0x1350($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4944), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bae0) {
            ctx->pc = 0x26BAF0u;
            goto label_26baf0;
        }
    }
    ctx->pc = 0x26BAE8u;
    // 0x26bae8: 0x40f809  jalr        $v0
    ctx->pc = 0x26BAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26BAF0u);
        ctx->pc = 0x26BAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BAE8u;
            // 0x26baec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26BAF0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B974u: goto label_26b974;
            case 0x26B980u: goto label_26b980;
            case 0x26B9B8u: goto label_26b9b8;
            case 0x26B9FCu: goto label_26b9fc;
            case 0x26BA1Cu: goto label_26ba1c;
            case 0x26BA64u: goto label_26ba64;
            case 0x26BA6Cu: goto label_26ba6c;
            case 0x26BAB4u: goto label_26bab4;
            case 0x26BAB8u: goto label_26bab8;
            case 0x26BAF0u: goto label_26baf0;
            case 0x26BAF4u: goto label_26baf4;
            case 0x26BB08u: goto label_26bb08;
            case 0x26BB10u: goto label_26bb10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26BAF0u; }
            if (ctx->pc != 0x26BAF0u) { return; }
        }
        }
    }
    ctx->pc = 0x26BAF0u;
label_26baf0:
    // 0x26baf0: 0x8e621338  lw          $v0, 0x1338($s3)
    ctx->pc = 0x26baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4920)));
label_26baf4:
    // 0x26baf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BAF4u;
    {
        const bool branch_taken_0x26baf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BAF4u;
            // 0x26baf8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26baf4) {
            ctx->pc = 0x26BB08u;
            goto label_26bb08;
        }
    }
    ctx->pc = 0x26BAFCu;
    // 0x26bafc: 0x8e221380  lw          $v0, 0x1380($s1)
    ctx->pc = 0x26bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4992)));
    // 0x26bb00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BB00u;
    {
        const bool branch_taken_0x26bb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BB00u;
            // 0x26bb04: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb00) {
            ctx->pc = 0x26BB10u;
            goto label_26bb10;
        }
    }
    ctx->pc = 0x26BB08u;
label_26bb08:
    // 0x26bb08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bb0c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x26bb0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26bb10:
    // 0x26bb10: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x26bb10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bb14: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x26bb14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26bb18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26bb18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bb1c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x26bb1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bb20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26bb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bb24: 0x3e00008  jr          $ra
    ctx->pc = 0x26BB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BB24u;
            // 0x26bb28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B974u: goto label_26b974;
            case 0x26B980u: goto label_26b980;
            case 0x26B9B8u: goto label_26b9b8;
            case 0x26B9FCu: goto label_26b9fc;
            case 0x26BA1Cu: goto label_26ba1c;
            case 0x26BA64u: goto label_26ba64;
            case 0x26BA6Cu: goto label_26ba6c;
            case 0x26BAB4u: goto label_26bab4;
            case 0x26BAB8u: goto label_26bab8;
            case 0x26BAF0u: goto label_26baf0;
            case 0x26BAF4u: goto label_26baf4;
            case 0x26BB08u: goto label_26bb08;
            case 0x26BB10u: goto label_26bb10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26BB2Cu;
    // 0x26bb2c: 0x0  nop
    ctx->pc = 0x26bb2cu;
    // NOP
}
