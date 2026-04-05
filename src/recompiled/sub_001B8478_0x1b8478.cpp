#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8478
// Address: 0x1b8478 - 0x1b8968
void sub_001B8478_0x1b8478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8478_0x1b8478");
#endif

    ctx->pc = 0x1b8478u;

label_1b8478:
    // 0x1b8478: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b8478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b847c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b847cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b8480: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b8480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b8484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8488: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b8488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b848c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b848cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b8490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8494: 0xae0015ac  sw          $zero, 0x15AC($s0)
    ctx->pc = 0x1b8494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5548), GPR_U32(ctx, 0));
    // 0x1b8498: 0x8e021528  lw          $v0, 0x1528($s0)
    ctx->pc = 0x1b8498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5416)));
    // 0x1b849c: 0x504000b5  beql        $v0, $zero, . + 4 + (0xB5 << 2)
    ctx->pc = 0x1B849Cu;
    {
        const bool branch_taken_0x1b849c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b849c) {
            ctx->pc = 0x1B84A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B849Cu;
            // 0x1b84a0: 0x8e02152c  lw          $v0, 0x152C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5420)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8774u;
            goto label_1b8774;
        }
    }
    ctx->pc = 0x1B84A4u;
    // 0x1b84a4: 0x8e021584  lw          $v0, 0x1584($s0)
    ctx->pc = 0x1b84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5508)));
    // 0x1b84a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B84A8u;
    {
        const bool branch_taken_0x1b84a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B84ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84A8u;
            // 0x1b84ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84a8) {
            ctx->pc = 0x1B84C8u;
            goto label_1b84c8;
        }
    }
    ctx->pc = 0x1B84B0u;
    // 0x1b84b0: 0x8e021588  lw          $v0, 0x1588($s0)
    ctx->pc = 0x1b84b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5512)));
    // 0x1b84b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B84B4u;
    {
        const bool branch_taken_0x1b84b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B84B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84B4u;
            // 0x1b84b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84b4) {
            ctx->pc = 0x1B84C8u;
            goto label_1b84c8;
        }
    }
    ctx->pc = 0x1B84BCu;
    // 0x1b84bc: 0x8e02158c  lw          $v0, 0x158C($s0)
    ctx->pc = 0x1b84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5516)));
    // 0x1b84c0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1B84C0u;
    {
        const bool branch_taken_0x1b84c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B84C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84C0u;
            // 0x1b84c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84c0) {
            ctx->pc = 0x1B859Cu;
            goto label_1b859c;
        }
    }
    ctx->pc = 0x1B84C8u;
label_1b84c8:
    // 0x1b84c8: 0x8e11001c  lw          $s1, 0x1C($s0)
    ctx->pc = 0x1b84c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b84cc: 0xae0215ac  sw          $v0, 0x15AC($s0)
    ctx->pc = 0x1b84ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5548), GPR_U32(ctx, 2));
    // 0x1b84d0: 0x8e021584  lw          $v0, 0x1584($s0)
    ctx->pc = 0x1b84d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5508)));
    // 0x1b84d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B84D4u;
    {
        const bool branch_taken_0x1b84d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B84D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84D4u;
            // 0x1b84d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84d4) {
            ctx->pc = 0x1B84E8u;
            goto label_1b84e8;
        }
    }
    ctx->pc = 0x1B84DCu;
    // 0x1b84dc: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x1b84dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
    // 0x1b84e0: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B84E0u;
    SET_GPR_U32(ctx, 31, 0x1B84E8u);
    ctx->pc = 0x1B84E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84E0u;
            // 0x1b84e4: 0xae001584  sw          $zero, 0x1584($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5508), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84E8u; }
        if (ctx->pc != 0x1B84E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84E8u; }
        if (ctx->pc != 0x1B84E8u) { return; }
    }
    ctx->pc = 0x1B84E8u;
label_1b84e8:
    // 0x1b84e8: 0x8e120020  lw          $s2, 0x20($s0)
    ctx->pc = 0x1b84e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1b84ec: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1b84ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1b84f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b84f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84f4: 0x8e021588  lw          $v0, 0x1588($s0)
    ctx->pc = 0x1b84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5512)));
    // 0x1b84f8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B84F8u;
    {
        const bool branch_taken_0x1b84f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B84FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84F8u;
            // 0x1b84fc: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84f8) {
            ctx->pc = 0x1B8510u;
            goto label_1b8510;
        }
    }
    ctx->pc = 0x1B8500u;
    // 0x1b8500: 0xae031588  sw          $v1, 0x1588($s0)
    ctx->pc = 0x1b8500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5512), GPR_U32(ctx, 3));
    // 0x1b8504: 0xae020230  sw          $v0, 0x230($s0)
    ctx->pc = 0x1b8504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
    // 0x1b8508: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B8508u;
    SET_GPR_U32(ctx, 31, 0x1B8510u);
    ctx->pc = 0x1B850Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8508u;
            // 0x1b850c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8510u; }
        if (ctx->pc != 0x1B8510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8510u; }
        if (ctx->pc != 0x1B8510u) { return; }
    }
    ctx->pc = 0x1B8510u;
label_1b8510:
    // 0x1b8510: 0x8e130024  lw          $s3, 0x24($s0)
    ctx->pc = 0x1b8510u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b8514: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x1b8514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x1b8518: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b8518u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b851c: 0x8e02158c  lw          $v0, 0x158C($s0)
    ctx->pc = 0x1b851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5516)));
    // 0x1b8520: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8520u;
    {
        const bool branch_taken_0x1b8520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B8524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8520u;
            // 0x1b8524: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8520) {
            ctx->pc = 0x1B8538u;
            goto label_1b8538;
        }
    }
    ctx->pc = 0x1B8528u;
    // 0x1b8528: 0xae03158c  sw          $v1, 0x158C($s0)
    ctx->pc = 0x1b8528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5516), GPR_U32(ctx, 3));
    // 0x1b852c: 0xae020234  sw          $v0, 0x234($s0)
    ctx->pc = 0x1b852cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
    // 0x1b8530: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B8530u;
    SET_GPR_U32(ctx, 31, 0x1B8538u);
    ctx->pc = 0x1B8534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8530u;
            // 0x1b8534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8538u; }
        if (ctx->pc != 0x1B8538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8538u; }
        if (ctx->pc != 0x1B8538u) { return; }
    }
    ctx->pc = 0x1B8538u;
label_1b8538:
    // 0x1b8538: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x1b8538u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b853c: 0xae130024  sw          $s3, 0x24($s0)
    ctx->pc = 0x1b853cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
    // 0x1b8540: 0x8e021590  lw          $v0, 0x1590($s0)
    ctx->pc = 0x1b8540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5520)));
    // 0x1b8544: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8544u;
    {
        const bool branch_taken_0x1b8544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8544u;
            // 0x1b8548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8544) {
            ctx->pc = 0x1B8558u;
            goto label_1b8558;
        }
    }
    ctx->pc = 0x1B854Cu;
    // 0x1b854c: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x1b854cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    // 0x1b8550: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B8550u;
    SET_GPR_U32(ctx, 31, 0x1B8558u);
    ctx->pc = 0x1B8554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8550u;
            // 0x1b8554: 0xae001590  sw          $zero, 0x1590($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8558u; }
        if (ctx->pc != 0x1B8558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8558u; }
        if (ctx->pc != 0x1B8558u) { return; }
    }
    ctx->pc = 0x1B8558u;
label_1b8558:
    // 0x1b8558: 0x8e12002c  lw          $s2, 0x2C($s0)
    ctx->pc = 0x1b8558u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1b855c: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x1b855cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
    // 0x1b8560: 0x8e021594  lw          $v0, 0x1594($s0)
    ctx->pc = 0x1b8560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5524)));
    // 0x1b8564: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8564u;
    {
        const bool branch_taken_0x1b8564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8564u;
            // 0x1b8568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8564) {
            ctx->pc = 0x1B8578u;
            goto label_1b8578;
        }
    }
    ctx->pc = 0x1B856Cu;
    // 0x1b856c: 0xae00023c  sw          $zero, 0x23C($s0)
    ctx->pc = 0x1b856cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 0));
    // 0x1b8570: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B8570u;
    SET_GPR_U32(ctx, 31, 0x1B8578u);
    ctx->pc = 0x1B8574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8570u;
            // 0x1b8574: 0xae001594  sw          $zero, 0x1594($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8578u; }
        if (ctx->pc != 0x1B8578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8578u; }
        if (ctx->pc != 0x1B8578u) { return; }
    }
    ctx->pc = 0x1B8578u;
label_1b8578:
    // 0x1b8578: 0x8e110030  lw          $s1, 0x30($s0)
    ctx->pc = 0x1b8578u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1b857c: 0xae12002c  sw          $s2, 0x2C($s0)
    ctx->pc = 0x1b857cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
    // 0x1b8580: 0x8e021598  lw          $v0, 0x1598($s0)
    ctx->pc = 0x1b8580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5528)));
    // 0x1b8584: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8584u;
    {
        const bool branch_taken_0x1b8584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8584u;
            // 0x1b8588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8584) {
            ctx->pc = 0x1B8598u;
            goto label_1b8598;
        }
    }
    ctx->pc = 0x1B858Cu;
    // 0x1b858c: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x1b858cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x1b8590: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B8590u;
    SET_GPR_U32(ctx, 31, 0x1B8598u);
    ctx->pc = 0x1B8594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8590u;
            // 0x1b8594: 0xae001598  sw          $zero, 0x1598($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8598u; }
        if (ctx->pc != 0x1B8598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8598u; }
        if (ctx->pc != 0x1B8598u) { return; }
    }
    ctx->pc = 0x1B8598u;
label_1b8598:
    // 0x1b8598: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x1b8598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
label_1b859c:
    // 0x1b859c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b859cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b85a0: 0xc6011540  lwc1        $f1, 0x1540($s0)
    ctx->pc = 0x1b85a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b85a4: 0xc440c64c  lwc1        $f0, -0x39B4($v0)
    ctx->pc = 0x1b85a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b85a8: 0xc602153c  lwc1        $f2, 0x153C($s0)
    ctx->pc = 0x1b85a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b85ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b85acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b85b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b85b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b85b4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b85b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b85b8: 0x0  nop
    ctx->pc = 0x1b85b8u;
    // NOP
    // 0x1b85bc: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x1B85BCu;
    {
        const bool branch_taken_0x1b85bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B85C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B85BCu;
            // 0x1b85c0: 0xe6011540  swc1        $f1, 0x1540($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5440), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b85bc) {
            ctx->pc = 0x1B864Cu;
            goto label_1b864c;
        }
    }
    ctx->pc = 0x1B85C4u;
    // 0x1b85c4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1b85c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b85c8: 0x0  nop
    ctx->pc = 0x1b85c8u;
    // NOP
    // 0x1b85cc: 0x45020091  bc1fl       . + 4 + (0x91 << 2)
    ctx->pc = 0x1B85CCu;
    {
        const bool branch_taken_0x1b85cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b85cc) {
            ctx->pc = 0x1B85D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B85CCu;
            // 0x1b85d0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8814u;
            goto label_1b8814;
        }
    }
    ctx->pc = 0x1B85D4u;
    // 0x1b85d4: 0x8e021534  lw          $v0, 0x1534($s0)
    ctx->pc = 0x1b85d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
    // 0x1b85d8: 0x8e031538  lw          $v1, 0x1538($s0)
    ctx->pc = 0x1b85d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5432)));
    // 0x1b85dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b85e0: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1b85e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b85e4: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1B85E4u;
    {
        const bool branch_taken_0x1b85e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B85E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B85E4u;
            // 0x1b85e8: 0xae021534  sw          $v0, 0x1534($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b85e4) {
            ctx->pc = 0x1B86C4u;
            goto label_1b86c4;
        }
    }
    ctx->pc = 0x1B85ECu;
    // 0x1b85ec: 0x8e021530  lw          $v0, 0x1530($s0)
    ctx->pc = 0x1b85ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5424)));
    // 0x1b85f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B85F0u;
    {
        const bool branch_taken_0x1b85f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B85F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B85F0u;
            // 0x1b85f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b85f0) {
            ctx->pc = 0x1B8624u;
            goto label_1b8624;
        }
    }
    ctx->pc = 0x1B85F8u;
    // 0x1b85f8: 0xae001530  sw          $zero, 0x1530($s0)
    ctx->pc = 0x1b85f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5424), GPR_U32(ctx, 0));
    // 0x1b85fc: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x1b85fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x1b8600: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B8600u;
    SET_GPR_U32(ctx, 31, 0x1B8608u);
    ctx->pc = 0x1B8604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8600u;
            // 0x1b8604: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8608u; }
        if (ctx->pc != 0x1B8608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8608u; }
        if (ctx->pc != 0x1B8608u) { return; }
    }
    ctx->pc = 0x1B8608u;
    // 0x1b8608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b860c: 0xc06e5c6  jal         func_1B9718
    ctx->pc = 0x1B860Cu;
    SET_GPR_U32(ctx, 31, 0x1B8614u);
    ctx->pc = 0x1B8610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B860Cu;
            // 0x1b8610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9718u;
    if (runtime->hasFunction(0x1B9718u)) {
        auto targetFn = runtime->lookupFunction(0x1B9718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8614u; }
        if (ctx->pc != 0x1B8614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9718_0x1b9718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8614u; }
        if (ctx->pc != 0x1B8614u) { return; }
    }
    ctx->pc = 0x1B8614u;
    // 0x1b8614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8618: 0xae001528  sw          $zero, 0x1528($s0)
    ctx->pc = 0x1b8618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5416), GPR_U32(ctx, 0));
    // 0x1b861c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1B861Cu;
    {
        const bool branch_taken_0x1b861c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B861Cu;
            // 0x1b8620: 0xae0201bc  sw          $v0, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b861c) {
            ctx->pc = 0x1B8810u;
            goto label_1b8810;
        }
    }
    ctx->pc = 0x1B8624u;
label_1b8624:
    // 0x1b8624: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x1b8624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
    // 0x1b8628: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B8628u;
    SET_GPR_U32(ctx, 31, 0x1B8630u);
    ctx->pc = 0x1B862Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8628u;
            // 0x1b862c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8630u; }
        if (ctx->pc != 0x1B8630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8630u; }
        if (ctx->pc != 0x1B8630u) { return; }
    }
    ctx->pc = 0x1B8630u;
    // 0x1b8630: 0xc06e4ce  jal         func_1B9338
    ctx->pc = 0x1B8630u;
    SET_GPR_U32(ctx, 31, 0x1B8638u);
    ctx->pc = 0x1B8634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8630u;
            // 0x1b8634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9338u;
    if (runtime->hasFunction(0x1B9338u)) {
        auto targetFn = runtime->lookupFunction(0x1B9338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8638u; }
        if (ctx->pc != 0x1B8638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9338_0x1b9338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8638u; }
        if (ctx->pc != 0x1B8638u) { return; }
    }
    ctx->pc = 0x1B8638u;
    // 0x1b8638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b863c: 0xae001528  sw          $zero, 0x1528($s0)
    ctx->pc = 0x1b863cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5416), GPR_U32(ctx, 0));
    // 0x1b8640: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x1b8640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
    // 0x1b8644: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1B8644u;
    {
        const bool branch_taken_0x1b8644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8644u;
            // 0x1b8648: 0xae001548  sw          $zero, 0x1548($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8644) {
            ctx->pc = 0x1B8810u;
            goto label_1b8810;
        }
    }
    ctx->pc = 0x1B864Cu;
label_1b864c:
    // 0x1b864c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1b864cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1b8650: 0x2442d9c0  addiu       $v0, $v0, -0x2640
    ctx->pc = 0x1b8650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957504));
    // 0x1b8654: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1b8654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1b8658: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1b8658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1b865c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b865cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b8660: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b8660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b8664: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b8664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b8668: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x1B8668u;
    {
        const bool branch_taken_0x1b8668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8668) {
            ctx->pc = 0x1B866Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8668u;
            // 0x1b866c: 0x8e021578  lw          $v0, 0x1578($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5496)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8740u;
            goto label_1b8740;
        }
    }
    ctx->pc = 0x1B8670u;
    // 0x1b8670: 0x8e021548  lw          $v0, 0x1548($s0)
    ctx->pc = 0x1b8670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5448)));
    // 0x1b8674: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8674u;
    {
        const bool branch_taken_0x1b8674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8674u;
            // 0x1b8678: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8674) {
            ctx->pc = 0x1B8688u;
            goto label_1b8688;
        }
    }
    ctx->pc = 0x1B867Cu;
    // 0x1b867c: 0x8e02154c  lw          $v0, 0x154C($s0)
    ctx->pc = 0x1b867cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5452)));
    // 0x1b8680: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1b8680u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b8684: 0x0  nop
    ctx->pc = 0x1b8684u;
    // NOP
label_1b8688:
    // 0x1b8688: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8688u;
    {
        const bool branch_taken_0x1b8688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8688) {
            ctx->pc = 0x1B868Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8688u;
            // 0x1b868c: 0x8e021578  lw          $v0, 0x1578($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5496)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B86A4u;
            goto label_1b86a4;
        }
    }
    ctx->pc = 0x1B8690u;
    // 0x1b8690: 0xc0520f8  jal         func_1483E0
    ctx->pc = 0x1B8690u;
    SET_GPR_U32(ctx, 31, 0x1B8698u);
    ctx->pc = 0x1483E0u;
    if (runtime->hasFunction(0x1483E0u)) {
        auto targetFn = runtime->lookupFunction(0x1483E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8698u; }
        if (ctx->pc != 0x1B8698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1483e0_0x148408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8698u; }
        if (ctx->pc != 0x1B8698u) { return; }
    }
    ctx->pc = 0x1B8698u;
    // 0x1b8698: 0x5040005e  beql        $v0, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x1B8698u;
    {
        const bool branch_taken_0x1b8698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8698) {
            ctx->pc = 0x1B869Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8698u;
            // 0x1b869c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8814u;
            goto label_1b8814;
        }
    }
    ctx->pc = 0x1B86A0u;
    // 0x1b86a0: 0x8e021578  lw          $v0, 0x1578($s0)
    ctx->pc = 0x1b86a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5496)));
label_1b86a4:
    // 0x1b86a4: 0x5440005b  bnel        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x1B86A4u;
    {
        const bool branch_taken_0x1b86a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b86a4) {
            ctx->pc = 0x1B86A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86A4u;
            // 0x1b86a8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8814u;
            goto label_1b8814;
        }
    }
    ctx->pc = 0x1B86ACu;
    // 0x1b86ac: 0x8e021534  lw          $v0, 0x1534($s0)
    ctx->pc = 0x1b86acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
    // 0x1b86b0: 0x8e031538  lw          $v1, 0x1538($s0)
    ctx->pc = 0x1b86b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5432)));
    // 0x1b86b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b86b8: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1b86b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b86bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B86BCu;
    {
        const bool branch_taken_0x1b86bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B86C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86BCu;
            // 0x1b86c0: 0xae021534  sw          $v0, 0x1534($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86bc) {
            ctx->pc = 0x1B86D4u;
            goto label_1b86d4;
        }
    }
    ctx->pc = 0x1B86C4u;
label_1b86c4:
    // 0x1b86c4: 0xc06e3a2  jal         func_1B8E88
    ctx->pc = 0x1B86C4u;
    SET_GPR_U32(ctx, 31, 0x1B86CCu);
    ctx->pc = 0x1B86C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86C4u;
            // 0x1b86c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E88u;
    if (runtime->hasFunction(0x1B8E88u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86CCu; }
        if (ctx->pc != 0x1B86CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E88_0x1b8e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86CCu; }
        if (ctx->pc != 0x1B86CCu) { return; }
    }
    ctx->pc = 0x1B86CCu;
    // 0x1b86cc: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1B86CCu;
    {
        const bool branch_taken_0x1b86cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B86D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86CCu;
            // 0x1b86d0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86cc) {
            ctx->pc = 0x1B8814u;
            goto label_1b8814;
        }
    }
    ctx->pc = 0x1B86D4u;
label_1b86d4:
    // 0x1b86d4: 0x8e021530  lw          $v0, 0x1530($s0)
    ctx->pc = 0x1b86d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5424)));
    // 0x1b86d8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B86D8u;
    {
        const bool branch_taken_0x1b86d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B86DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86D8u;
            // 0x1b86dc: 0x8e111528  lw          $s1, 0x1528($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86d8) {
            ctx->pc = 0x1B8714u;
            goto label_1b8714;
        }
    }
    ctx->pc = 0x1B86E0u;
    // 0x1b86e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b86e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b86e4: 0xc06e5c6  jal         func_1B9718
    ctx->pc = 0x1B86E4u;
    SET_GPR_U32(ctx, 31, 0x1B86ECu);
    ctx->pc = 0x1B86E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86E4u;
            // 0x1b86e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9718u;
    if (runtime->hasFunction(0x1B9718u)) {
        auto targetFn = runtime->lookupFunction(0x1B9718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86ECu; }
        if (ctx->pc != 0x1B86ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9718_0x1b9718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86ECu; }
        if (ctx->pc != 0x1B86ECu) { return; }
    }
    ctx->pc = 0x1B86ECu;
    // 0x1b86ec: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x1b86ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x1b86f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b86f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b86f4: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B86F4u;
    SET_GPR_U32(ctx, 31, 0x1B86FCu);
    ctx->pc = 0x1B86F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86F4u;
            // 0x1b86f8: 0xae000204  sw          $zero, 0x204($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86FCu; }
        if (ctx->pc != 0x1B86FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B86FCu; }
        if (ctx->pc != 0x1B86FCu) { return; }
    }
    ctx->pc = 0x1B86FCu;
    // 0x1b86fc: 0xc06e4ce  jal         func_1B9338
    ctx->pc = 0x1B86FCu;
    SET_GPR_U32(ctx, 31, 0x1B8704u);
    ctx->pc = 0x1B8700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86FCu;
            // 0x1b8700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9338u;
    if (runtime->hasFunction(0x1B9338u)) {
        auto targetFn = runtime->lookupFunction(0x1B9338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8704u; }
        if (ctx->pc != 0x1B8704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9338_0x1b9338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8704u; }
        if (ctx->pc != 0x1B8704u) { return; }
    }
    ctx->pc = 0x1B8704u;
    // 0x1b8704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8708: 0xae001528  sw          $zero, 0x1528($s0)
    ctx->pc = 0x1b8708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5416), GPR_U32(ctx, 0));
    // 0x1b870c: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x1b870cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
    // 0x1b8710: 0xae001548  sw          $zero, 0x1548($s0)
    ctx->pc = 0x1b8710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5448), GPR_U32(ctx, 0));
label_1b8714:
    // 0x1b8714: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b8714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b8718: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b8718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b871c: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1b871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1b8720: 0x24040410  addiu       $a0, $zero, 0x410
    ctx->pc = 0x1b8720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x1b8724: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8728: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b8728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b872c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8730: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x1B8730u;
    SET_GPR_U32(ctx, 31, 0x1B8738u);
    ctx->pc = 0x1B8734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8730u;
            // 0x1b8734: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8738u; }
        if (ctx->pc != 0x1B8738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8738u; }
        if (ctx->pc != 0x1B8738u) { return; }
    }
    ctx->pc = 0x1B8738u;
    // 0x1b8738: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1B8738u;
    {
        const bool branch_taken_0x1b8738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B873Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8738u;
            // 0x1b873c: 0xae001528  sw          $zero, 0x1528($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8738) {
            ctx->pc = 0x1B8810u;
            goto label_1b8810;
        }
    }
    ctx->pc = 0x1B8740u;
label_1b8740:
    // 0x1b8740: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1B8740u;
    {
        const bool branch_taken_0x1b8740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8740) {
            ctx->pc = 0x1B8744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8740u;
            // 0x1b8744: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8814u;
            goto label_1b8814;
        }
    }
    ctx->pc = 0x1B8748u;
    // 0x1b8748: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1b8748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1b874c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b874cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8750: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b8750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8754: 0x0  nop
    ctx->pc = 0x1b8754u;
    // NOP
    // 0x1b8758: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x1B8758u;
    {
        const bool branch_taken_0x1b8758 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B875Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8758u;
            // 0x1b875c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8758) {
            ctx->pc = 0x1B8810u;
            goto label_1b8810;
        }
    }
    ctx->pc = 0x1B8760u;
    // 0x1b8760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8764: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B8764u;
    SET_GPR_U32(ctx, 31, 0x1B876Cu);
    ctx->pc = 0x1B8768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8764u;
            // 0x1b8768: 0xae020204  sw          $v0, 0x204($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B876Cu; }
        if (ctx->pc != 0x1B876Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B876Cu; }
        if (ctx->pc != 0x1B876Cu) { return; }
    }
    ctx->pc = 0x1B876Cu;
    // 0x1b876c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1B876Cu;
    {
        const bool branch_taken_0x1b876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B876Cu;
            // 0x1b8770: 0xae001578  sw          $zero, 0x1578($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5496), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b876c) {
            ctx->pc = 0x1B8810u;
            goto label_1b8810;
        }
    }
    ctx->pc = 0x1B8774u;
label_1b8774:
    // 0x1b8774: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B8774u;
    {
        const bool branch_taken_0x1b8774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8774) {
            ctx->pc = 0x1B8778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8774u;
            // 0x1b8778: 0x8e021530  lw          $v0, 0x1530($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B87C0u;
            goto label_1b87c0;
        }
    }
    ctx->pc = 0x1B877Cu;
    // 0x1b877c: 0x8e02027c  lw          $v0, 0x27C($s0)
    ctx->pc = 0x1b877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
    // 0x1b8780: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B8780u;
    {
        const bool branch_taken_0x1b8780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8780u;
            // 0x1b8784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8780) {
            ctx->pc = 0x1B8810u;
            goto label_1b8810;
        }
    }
    ctx->pc = 0x1B8788u;
    // 0x1b8788: 0xc06e5c6  jal         func_1B9718
    ctx->pc = 0x1B8788u;
    SET_GPR_U32(ctx, 31, 0x1B8790u);
    ctx->pc = 0x1B878Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8788u;
            // 0x1b878c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9718u;
    if (runtime->hasFunction(0x1B9718u)) {
        auto targetFn = runtime->lookupFunction(0x1B9718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8790u; }
        if (ctx->pc != 0x1B8790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9718_0x1b9718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8790u; }
        if (ctx->pc != 0x1B8790u) { return; }
    }
    ctx->pc = 0x1B8790u;
    // 0x1b8790: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b8790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b8794: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1b8794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1b8798: 0x240403fd  addiu       $a0, $zero, 0x3FD
    ctx->pc = 0x1b8798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
    // 0x1b879c: 0x8e050278  lw          $a1, 0x278($s0)
    ctx->pc = 0x1b879cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1b87a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b87a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b87a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b87a8: 0x8e06152c  lw          $a2, 0x152C($s0)
    ctx->pc = 0x1b87a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5420)));
    // 0x1b87ac: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x1B87ACu;
    SET_GPR_U32(ctx, 31, 0x1B87B4u);
    ctx->pc = 0x1B87B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87ACu;
            // 0x1b87b0: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87B4u; }
        if (ctx->pc != 0x1B87B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87B4u; }
        if (ctx->pc != 0x1B87B4u) { return; }
    }
    ctx->pc = 0x1B87B4u;
    // 0x1b87b4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B87B4u;
    {
        const bool branch_taken_0x1b87b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B87B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87B4u;
            // 0x1b87b8: 0xae00152c  sw          $zero, 0x152C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5420), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b87b4) {
            ctx->pc = 0x1B8810u;
            goto label_1b8810;
        }
    }
    ctx->pc = 0x1B87BCu;
    // 0x1b87bc: 0x0  nop
    ctx->pc = 0x1b87bcu;
    // NOP
label_1b87c0:
    // 0x1b87c0: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B87C0u;
    {
        const bool branch_taken_0x1b87c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b87c0) {
            ctx->pc = 0x1B87C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87C0u;
            // 0x1b87c4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8814u;
            goto label_1b8814;
        }
    }
    ctx->pc = 0x1B87C8u;
    // 0x1b87c8: 0x8e02027c  lw          $v0, 0x27C($s0)
    ctx->pc = 0x1b87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
    // 0x1b87cc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B87CCu;
    {
        const bool branch_taken_0x1b87cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B87D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87CCu;
            // 0x1b87d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b87cc) {
            ctx->pc = 0x1B8810u;
            goto label_1b8810;
        }
    }
    ctx->pc = 0x1B87D4u;
    // 0x1b87d4: 0xc06e5c6  jal         func_1B9718
    ctx->pc = 0x1B87D4u;
    SET_GPR_U32(ctx, 31, 0x1B87DCu);
    ctx->pc = 0x1B87D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87D4u;
            // 0x1b87d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9718u;
    if (runtime->hasFunction(0x1B9718u)) {
        auto targetFn = runtime->lookupFunction(0x1B9718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87DCu; }
        if (ctx->pc != 0x1B87DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9718_0x1b9718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87DCu; }
        if (ctx->pc != 0x1B87DCu) { return; }
    }
    ctx->pc = 0x1B87DCu;
    // 0x1b87dc: 0x8e051554  lw          $a1, 0x1554($s0)
    ctx->pc = 0x1b87dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5460)));
    // 0x1b87e0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B87E0u;
    {
        const bool branch_taken_0x1b87e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B87E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87E0u;
            // 0x1b87e4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b87e0) {
            ctx->pc = 0x1B8808u;
            goto label_1b8808;
        }
    }
    ctx->pc = 0x1B87E8u;
    // 0x1b87e8: 0x24040410  addiu       $a0, $zero, 0x410
    ctx->pc = 0x1b87e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x1b87ec: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1b87ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1b87f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b87f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b87f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b87f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b87fc: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x1B87FCu;
    SET_GPR_U32(ctx, 31, 0x1B8804u);
    ctx->pc = 0x1B8800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87FCu;
            // 0x1b8800: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8804u; }
        if (ctx->pc != 0x1B8804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8804u; }
        if (ctx->pc != 0x1B8804u) { return; }
    }
    ctx->pc = 0x1B8804u;
    // 0x1b8804: 0xae001554  sw          $zero, 0x1554($s0)
    ctx->pc = 0x1b8804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5460), GPR_U32(ctx, 0));
label_1b8808:
    // 0x1b8808: 0xae001530  sw          $zero, 0x1530($s0)
    ctx->pc = 0x1b8808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5424), GPR_U32(ctx, 0));
    // 0x1b880c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x1b880cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_1b8810:
    // 0x1b8810: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b8810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b8814:
    // 0x1b8814: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b8814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8818: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b8818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b881c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b881cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8824: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8824u;
            // 0x1b8828: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8478u: goto label_1b8478;
            case 0x1B84C8u: goto label_1b84c8;
            case 0x1B84E8u: goto label_1b84e8;
            case 0x1B8510u: goto label_1b8510;
            case 0x1B8538u: goto label_1b8538;
            case 0x1B8558u: goto label_1b8558;
            case 0x1B8578u: goto label_1b8578;
            case 0x1B8598u: goto label_1b8598;
            case 0x1B859Cu: goto label_1b859c;
            case 0x1B8624u: goto label_1b8624;
            case 0x1B864Cu: goto label_1b864c;
            case 0x1B8688u: goto label_1b8688;
            case 0x1B86A4u: goto label_1b86a4;
            case 0x1B86C4u: goto label_1b86c4;
            case 0x1B86D4u: goto label_1b86d4;
            case 0x1B8714u: goto label_1b8714;
            case 0x1B8740u: goto label_1b8740;
            case 0x1B8774u: goto label_1b8774;
            case 0x1B87C0u: goto label_1b87c0;
            case 0x1B8808u: goto label_1b8808;
            case 0x1B8810u: goto label_1b8810;
            case 0x1B8814u: goto label_1b8814;
            case 0x1B8870u: goto label_1b8870;
            case 0x1B88C4u: goto label_1b88c4;
            case 0x1B88C8u: goto label_1b88c8;
            case 0x1B88D8u: goto label_1b88d8;
            case 0x1B891Cu: goto label_1b891c;
            case 0x1B8920u: goto label_1b8920;
            case 0x1B893Cu: goto label_1b893c;
            case 0x1B8954u: goto label_1b8954;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B882Cu;
    // 0x1b882c: 0x0  nop
    ctx->pc = 0x1b882cu;
    // NOP
    // 0x1b8830: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b8830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b8834: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b8838: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1b8838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1b883c: 0x8c43ed58  lw          $v1, -0x12A8($v0)
    ctx->pc = 0x1b883cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x1b8840: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b8840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b8844: 0x8ca2cbb0  lw          $v0, -0x3450($a1)
    ctx->pc = 0x1b8844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953904)));
    // 0x1b8848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b884c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b884cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b8850: 0x10430040  beq         $v0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1B8850u;
    {
        const bool branch_taken_0x1b8850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B8854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8850u;
            // 0x1b8854: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8850) {
            ctx->pc = 0x1B8954u;
            goto label_1b8954;
        }
    }
    ctx->pc = 0x1B8858u;
    // 0x1b8858: 0x8e0215a8  lw          $v0, 0x15A8($s0)
    ctx->pc = 0x1b8858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5544)));
    // 0x1b885c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B885Cu;
    {
        const bool branch_taken_0x1b885c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B885Cu;
            // 0x1b8860: 0xaca3cbb0  sw          $v1, -0x3450($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294953904), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b885c) {
            ctx->pc = 0x1B8870u;
            goto label_1b8870;
        }
    }
    ctx->pc = 0x1B8864u;
    // 0x1b8864: 0xc08a0f0  jal         func_2283C0
    ctx->pc = 0x1B8864u;
    SET_GPR_U32(ctx, 31, 0x1B886Cu);
    ctx->pc = 0x1B8868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8864u;
            // 0x1b8868: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2283C0u;
    if (runtime->hasFunction(0x2283C0u)) {
        auto targetFn = runtime->lookupFunction(0x2283C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B886Cu; }
        if (ctx->pc != 0x1B886Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002283C0_0x2283c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B886Cu; }
        if (ctx->pc != 0x1B886Cu) { return; }
    }
    ctx->pc = 0x1B886Cu;
    // 0x1b886c: 0xae0215a8  sw          $v0, 0x15A8($s0)
    ctx->pc = 0x1b886cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5544), GPR_U32(ctx, 2));
label_1b8870:
    // 0x1b8870: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1b8870u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x1b8874: 0x8e22e560  lw          $v0, -0x1AA0($s1)
    ctx->pc = 0x1b8874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960480)));
    // 0x1b8878: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x1b8878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x1b887c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B887Cu;
    {
        const bool branch_taken_0x1b887c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B887Cu;
            // 0x1b8880: 0x8e22e560  lw          $v0, -0x1AA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b887c) {
            ctx->pc = 0x1B8920u;
            goto label_1b8920;
        }
    }
    ctx->pc = 0x1B8884u;
    // 0x1b8884: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b8884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b8888: 0x8c42e564  lw          $v0, -0x1A9C($v0)
    ctx->pc = 0x1b8888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960484)));
    // 0x1b888c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B888Cu;
    {
        const bool branch_taken_0x1b888c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B888Cu;
            // 0x1b8890: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b888c) {
            ctx->pc = 0x1B88C4u;
            goto label_1b88c4;
        }
    }
    ctx->pc = 0x1B8894u;
    // 0x1b8894: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b8894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b8898: 0x8c42e568  lw          $v0, -0x1A98($v0)
    ctx->pc = 0x1b8898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960488)));
    // 0x1b889c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1B889Cu;
    {
        const bool branch_taken_0x1b889c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b889c) {
            ctx->pc = 0x1B88A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B889Cu;
            // 0x1b88a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B88C8u;
            goto label_1b88c8;
        }
    }
    ctx->pc = 0x1B88A4u;
    // 0x1b88a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b88a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b88a8: 0x8c42e56c  lw          $v0, -0x1A94($v0)
    ctx->pc = 0x1b88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960492)));
    // 0x1b88ac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B88ACu;
    {
        const bool branch_taken_0x1b88ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b88ac) {
            ctx->pc = 0x1B88B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88ACu;
            // 0x1b88b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B88C8u;
            goto label_1b88c8;
        }
    }
    ctx->pc = 0x1B88B4u;
    // 0x1b88b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b88b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b88b8: 0x8c42e570  lw          $v0, -0x1A90($v0)
    ctx->pc = 0x1b88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960496)));
    // 0x1b88bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B88BCu;
    {
        const bool branch_taken_0x1b88bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b88bc) {
            ctx->pc = 0x1B88C8u;
            goto label_1b88c8;
        }
    }
    ctx->pc = 0x1B88C4u;
label_1b88c4:
    // 0x1b88c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b88c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b88c8:
    // 0x1b88c8: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B88C8u;
    {
        const bool branch_taken_0x1b88c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B88CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88C8u;
            // 0x1b88cc: 0x8e22e560  lw          $v0, -0x1AA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88c8) {
            ctx->pc = 0x1B8920u;
            goto label_1b8920;
        }
    }
    ctx->pc = 0x1B88D0u;
    // 0x1b88d0: 0xc06e11e  jal         func_1B8478
    ctx->pc = 0x1B88D0u;
    SET_GPR_U32(ctx, 31, 0x1B88D8u);
    ctx->pc = 0x1B88D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88D0u;
            // 0x1b88d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8478u;
    runtime->cooperativeGuestYield();
    goto label_1b8478;
    ctx->pc = 0x1B88D8u;
label_1b88d8:
    // 0x1b88d8: 0xc6011544  lwc1        $f1, 0x1544($s0)
    ctx->pc = 0x1b88d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b88dc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b88dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b88e0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1b88e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b88e4: 0x0  nop
    ctx->pc = 0x1b88e4u;
    // NOP
    // 0x1b88e8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1B88E8u;
    {
        const bool branch_taken_0x1b88e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B88ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88E8u;
            // 0x1b88ec: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88e8) {
            ctx->pc = 0x1B891Cu;
            goto label_1b891c;
        }
    }
    ctx->pc = 0x1B88F0u;
    // 0x1b88f0: 0xc440c64c  lwc1        $f0, -0x39B4($v0)
    ctx->pc = 0x1b88f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b88f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b88f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b88f8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1b88f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b88fc: 0x0  nop
    ctx->pc = 0x1b88fcu;
    // NOP
    // 0x1b8900: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8900u;
    {
        const bool branch_taken_0x1b8900 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8900u;
            // 0x1b8904: 0xe6001544  swc1        $f0, 0x1544($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8900) {
            ctx->pc = 0x1B891Cu;
            goto label_1b891c;
        }
    }
    ctx->pc = 0x1B8908u;
    // 0x1b8908: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b8908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1b890c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b890cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b8910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8914: 0xc06e5e0  jal         func_1B9780
    ctx->pc = 0x1B8914u;
    SET_GPR_U32(ctx, 31, 0x1B891Cu);
    ctx->pc = 0x1B8918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8914u;
            // 0x1b8918: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9780u;
    if (runtime->hasFunction(0x1B9780u)) {
        auto targetFn = runtime->lookupFunction(0x1B9780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B891Cu; }
        if (ctx->pc != 0x1B891Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9780_0x1b9780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B891Cu; }
        if (ctx->pc != 0x1B891Cu) { return; }
    }
    ctx->pc = 0x1B891Cu;
label_1b891c:
    // 0x1b891c: 0x8e22e560  lw          $v0, -0x1AA0($s1)
    ctx->pc = 0x1b891cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960480)));
label_1b8920:
    // 0x1b8920: 0x3842000d  xori        $v0, $v0, 0xD
    ctx->pc = 0x1b8920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)13);
    // 0x1b8924: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8924u;
    {
        const bool branch_taken_0x1b8924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8924u;
            // 0x1b8928: 0x8e22e560  lw          $v0, -0x1AA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8924) {
            ctx->pc = 0x1B893Cu;
            goto label_1b893c;
        }
    }
    ctx->pc = 0x1B892Cu;
    // 0x1b892c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b892cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8930: 0xc06e75e  jal         func_1B9D78
    ctx->pc = 0x1B8930u;
    SET_GPR_U32(ctx, 31, 0x1B8938u);
    ctx->pc = 0x1B8934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8930u;
            // 0x1b8934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D78u;
    if (runtime->hasFunction(0x1B9D78u)) {
        auto targetFn = runtime->lookupFunction(0x1B9D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8938u; }
        if (ctx->pc != 0x1B8938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9D78_0x1b9d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8938u; }
        if (ctx->pc != 0x1B8938u) { return; }
    }
    ctx->pc = 0x1B8938u;
    // 0x1b8938: 0x8e22e560  lw          $v0, -0x1AA0($s1)
    ctx->pc = 0x1b8938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960480)));
label_1b893c:
    // 0x1b893c: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1b893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1b8940: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b8940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b8944: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8944u;
    {
        const bool branch_taken_0x1b8944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8944u;
            // 0x1b8948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8944) {
            ctx->pc = 0x1B8954u;
            goto label_1b8954;
        }
    }
    ctx->pc = 0x1B894Cu;
    // 0x1b894c: 0xc06e93e  jal         func_1BA4F8
    ctx->pc = 0x1B894Cu;
    SET_GPR_U32(ctx, 31, 0x1B8954u);
    ctx->pc = 0x1B8950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B894Cu;
            // 0x1b8950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA4F8u;
    if (runtime->hasFunction(0x1BA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8954u; }
        if (ctx->pc != 0x1B8954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA4F8_0x1ba4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8954u; }
        if (ctx->pc != 0x1B8954u) { return; }
    }
    ctx->pc = 0x1B8954u;
label_1b8954:
    // 0x1b8954: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b8954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b895c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b895cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8960: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8960u;
            // 0x1b8964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8478u: goto label_1b8478;
            case 0x1B84C8u: goto label_1b84c8;
            case 0x1B84E8u: goto label_1b84e8;
            case 0x1B8510u: goto label_1b8510;
            case 0x1B8538u: goto label_1b8538;
            case 0x1B8558u: goto label_1b8558;
            case 0x1B8578u: goto label_1b8578;
            case 0x1B8598u: goto label_1b8598;
            case 0x1B859Cu: goto label_1b859c;
            case 0x1B8624u: goto label_1b8624;
            case 0x1B864Cu: goto label_1b864c;
            case 0x1B8688u: goto label_1b8688;
            case 0x1B86A4u: goto label_1b86a4;
            case 0x1B86C4u: goto label_1b86c4;
            case 0x1B86D4u: goto label_1b86d4;
            case 0x1B8714u: goto label_1b8714;
            case 0x1B8740u: goto label_1b8740;
            case 0x1B8774u: goto label_1b8774;
            case 0x1B87C0u: goto label_1b87c0;
            case 0x1B8808u: goto label_1b8808;
            case 0x1B8810u: goto label_1b8810;
            case 0x1B8814u: goto label_1b8814;
            case 0x1B8870u: goto label_1b8870;
            case 0x1B88C4u: goto label_1b88c4;
            case 0x1B88C8u: goto label_1b88c8;
            case 0x1B88D8u: goto label_1b88d8;
            case 0x1B891Cu: goto label_1b891c;
            case 0x1B8920u: goto label_1b8920;
            case 0x1B893Cu: goto label_1b893c;
            case 0x1B8954u: goto label_1b8954;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8968u;
}
