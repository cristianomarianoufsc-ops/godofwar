#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2390
// Address: 0x1b2390 - 0x1b25b8
void sub_001B2390_0x1b2390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2390_0x1b2390");
#endif

    ctx->pc = 0x1b2390u;

label_1b2390:
    // 0x1b2390: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b2390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b2394: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2398: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1b2398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1b239c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1b239cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1b23a0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1b23a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1b23a4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b23a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1b23a8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1b23a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1b23ac: 0x10a6000e  beq         $a1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1B23ACu;
    {
        const bool branch_taken_0x1b23ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1B23B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B23ACu;
            // 0x1b23b0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23ac) {
            ctx->pc = 0x1B23E8u;
            goto label_1b23e8;
        }
    }
    ctx->pc = 0x1B23B4u;
    // 0x1b23b4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B23B4u;
    {
        const bool branch_taken_0x1b23b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B23B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B23B4u;
            // 0x1b23b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23b4) {
            ctx->pc = 0x1B23D4u;
            goto label_1b23d4;
        }
    }
    ctx->pc = 0x1B23BCu;
    // 0x1b23bc: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B23BCu;
    {
        const bool branch_taken_0x1b23bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B23C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B23BCu;
            // 0x1b23c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23bc) {
            ctx->pc = 0x1B2410u;
            goto label_1b2410;
        }
    }
    ctx->pc = 0x1B23C4u;
    // 0x1b23c4: 0x10a2006d  beq         $a1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1B23C4u;
    {
        const bool branch_taken_0x1b23c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B23C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B23C4u;
            // 0x1b23c8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23c4) {
            ctx->pc = 0x1B257Cu;
            goto label_1b257c;
        }
    }
    ctx->pc = 0x1B23CCu;
    // 0x1b23cc: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1B23CCu;
    {
        const bool branch_taken_0x1b23cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B23D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B23CCu;
            // 0x1b23d0: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23cc) {
            ctx->pc = 0x1B25A0u;
            goto label_1b25a0;
        }
    }
    ctx->pc = 0x1B23D4u;
label_1b23d4:
    // 0x1b23d4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b23d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b23d8: 0xc06ee6e  jal         func_1BB9B8
    ctx->pc = 0x1B23D8u;
    SET_GPR_U32(ctx, 31, 0x1B23E0u);
    ctx->pc = 0x1B23DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B23D8u;
            // 0x1b23dc: 0xac40cab4  sw          $zero, -0x354C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9B8u;
    if (runtime->hasFunction(0x1BB9B8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B23E0u; }
        if (ctx->pc != 0x1B23E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB9B8_0x1bb9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B23E0u; }
        if (ctx->pc != 0x1B23E0u) { return; }
    }
    ctx->pc = 0x1B23E0u;
    // 0x1b23e0: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1B23E0u;
    {
        const bool branch_taken_0x1b23e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B23E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B23E0u;
            // 0x1b23e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23e0) {
            ctx->pc = 0x1B259Cu;
            goto label_1b259c;
        }
    }
    ctx->pc = 0x1B23E8u;
label_1b23e8:
    // 0x1b23e8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b23e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b23ec: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b23ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b23f0: 0x8c42cab8  lw          $v0, -0x3548($v0)
    ctx->pc = 0x1b23f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953656)));
    // 0x1b23f4: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x1B23F4u;
    {
        const bool branch_taken_0x1b23f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B23F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B23F4u;
            // 0x1b23f8: 0xac66cab4  sw          $a2, -0x354C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953652), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23f4) {
            ctx->pc = 0x1B2598u;
            goto label_1b2598;
        }
    }
    ctx->pc = 0x1B23FCu;
    // 0x1b23fc: 0xc06c972  jal         func_1B25C8
    ctx->pc = 0x1B23FCu;
    SET_GPR_U32(ctx, 31, 0x1B2404u);
    ctx->pc = 0x1B25C8u;
    if (runtime->hasFunction(0x1B25C8u)) {
        auto targetFn = runtime->lookupFunction(0x1B25C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2404u; }
        if (ctx->pc != 0x1B2404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B25C8_0x1b25c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2404u; }
        if (ctx->pc != 0x1B2404u) { return; }
    }
    ctx->pc = 0x1B2404u;
    // 0x1b2404: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1B2404u;
    {
        const bool branch_taken_0x1b2404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2404u;
            // 0x1b2408: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2404) {
            ctx->pc = 0x1B259Cu;
            goto label_1b259c;
        }
    }
    ctx->pc = 0x1B240Cu;
    // 0x1b240c: 0x0  nop
    ctx->pc = 0x1b240cu;
    // NOP
label_1b2410:
    // 0x1b2410: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b2410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b2414: 0x24445288  addiu       $a0, $v0, 0x5288
    ctx->pc = 0x1b2414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21128));
    // 0x1b2418: 0x2485000a  addiu       $a1, $a0, 0xA
    ctx->pc = 0x1b2418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x1b241c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b241cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b2420: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1b2420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1b2424: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b2424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b2428: 0x8c62cae4  lw          $v0, -0x351C($v1)
    ctx->pc = 0x1b2428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953700)));
    // 0x1b242c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b242cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b2430: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B2430u;
    {
        const bool branch_taken_0x1b2430 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B2434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2430u;
            // 0x1b2434: 0xac62cae4  sw          $v0, -0x351C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2430) {
            ctx->pc = 0x1B2460u;
            goto label_1b2460;
        }
    }
    ctx->pc = 0x1B2438u;
    // 0x1b2438: 0xc06edfa  jal         func_1BB7E8
    ctx->pc = 0x1B2438u;
    SET_GPR_U32(ctx, 31, 0x1B2440u);
    ctx->pc = 0x1B243Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2438u;
            // 0x1b243c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7E8u;
    if (runtime->hasFunction(0x1BB7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2440u; }
        if (ctx->pc != 0x1B2440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB7E8_0x1bb7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2440u; }
        if (ctx->pc != 0x1B2440u) { return; }
    }
    ctx->pc = 0x1B2440u;
    // 0x1b2440: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1B2440u;
    {
        const bool branch_taken_0x1b2440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2440u;
            // 0x1b2444: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2440) {
            ctx->pc = 0x1B259Cu;
            goto label_1b259c;
        }
    }
    ctx->pc = 0x1B2448u;
    // 0x1b2448: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b2448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b244c: 0xc06c8e4  jal         func_1B2390
    ctx->pc = 0x1B244Cu;
    SET_GPR_U32(ctx, 31, 0x1B2454u);
    ctx->pc = 0x1B2450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B244Cu;
            // 0x1b2450: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2390u;
    runtime->cooperativeGuestYield();
    goto label_1b2390;
    ctx->pc = 0x1B2454u;
label_1b2454:
    // 0x1b2454: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1B2454u;
    {
        const bool branch_taken_0x1b2454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2454u;
            // 0x1b2458: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2454) {
            ctx->pc = 0x1B259Cu;
            goto label_1b259c;
        }
    }
    ctx->pc = 0x1B245Cu;
    // 0x1b245c: 0x0  nop
    ctx->pc = 0x1b245cu;
    // NOP
label_1b2460:
    // 0x1b2460: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1b2460u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2464: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x1b2464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2468: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b2468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b246c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1b246cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2470: 0x27b40008  addiu       $s4, $sp, 0x8
    ctx->pc = 0x1b2470u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1b2474: 0x0  nop
    ctx->pc = 0x1b2474u;
    // NOP
label_1b2478:
    // 0x1b2478: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b2478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b247c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B247Cu;
    {
        const bool branch_taken_0x1b247c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B247Cu;
            // 0x1b2480: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b247c) {
            ctx->pc = 0x1B24B8u;
            goto label_1b24b8;
        }
    }
    ctx->pc = 0x1B2484u;
    // 0x1b2484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2488: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x1b2488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x1b248c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b248cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b2490: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b2490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2494: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x1b2494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1b2498: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b2498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b249c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x1b249cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1b24a0: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B24A0u;
    {
        const bool branch_taken_0x1b24a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b24a0) {
            ctx->pc = 0x1B24A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B24A0u;
            // 0x1b24a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B24BCu;
            goto label_1b24bc;
        }
    }
    ctx->pc = 0x1B24A8u;
    // 0x1b24a8: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1B24A8u;
    SET_GPR_U32(ctx, 31, 0x1B24B0u);
    ctx->pc = 0x1B24ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B24A8u;
            // 0x1b24ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B24B0u; }
        if (ctx->pc != 0x1B24B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B24B0u; }
        if (ctx->pc != 0x1B24B0u) { return; }
    }
    ctx->pc = 0x1B24B0u;
    // 0x1b24b0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B24B0u;
    {
        const bool branch_taken_0x1b24b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b24b0) {
            ctx->pc = 0x1B24B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B24B0u;
            // 0x1b24b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B24CCu;
            goto label_1b24cc;
        }
    }
    ctx->pc = 0x1B24B8u;
label_1b24b8:
    // 0x1b24b8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1b24b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1b24bc:
    // 0x1b24bc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1b24bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1b24c0: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x1b24c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1b24c4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1B24C4u;
    {
        const bool branch_taken_0x1b24c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B24C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B24C4u;
            // 0x1b24c8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24c4) {
            ctx->pc = 0x1B2478u;
            runtime->cooperativeGuestYield();
            goto label_1b2478;
        }
    }
    ctx->pc = 0x1B24CCu;
label_1b24cc:
    // 0x1b24cc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b24d0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1b24d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b24d4: 0x904652a0  lbu         $a2, 0x52A0($v0)
    ctx->pc = 0x1b24d4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21152)));
    // 0x1b24d8: 0x732025  or          $a0, $v1, $s3
    ctx->pc = 0x1b24d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x1b24dc: 0x244252a0  addiu       $v0, $v0, 0x52A0
    ctx->pc = 0x1b24dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21152));
    // 0x1b24e0: 0x2e650001  sltiu       $a1, $s3, 0x1
    ctx->pc = 0x1b24e0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b24e4: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x1b24e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1b24e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b24e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b24ec: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1b24ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1b24f0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1b24f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1b24f4: 0x8cc4cab0  lw          $a0, -0x3550($a2)
    ctx->pc = 0x1b24f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294953648)));
    // 0x1b24f8: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B24F8u;
    {
        const bool branch_taken_0x1b24f8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B24FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B24F8u;
            // 0x1b24fc: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24f8) {
            ctx->pc = 0x1B251Cu;
            goto label_1b251c;
        }
    }
    ctx->pc = 0x1B2500u;
    // 0x1b2500: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2500u;
    {
        const bool branch_taken_0x1b2500 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2500u;
            // 0x1b2504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2500) {
            ctx->pc = 0x1B2510u;
            goto label_1b2510;
        }
    }
    ctx->pc = 0x1B2508u;
    // 0x1b2508: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1b2508u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b250c: 0xacc2cab0  sw          $v0, -0x3550($a2)
    ctx->pc = 0x1b250cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294953648), GPR_U32(ctx, 2));
label_1b2510:
    // 0x1b2510: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b2510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b2514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2518: 0xac62cab4  sw          $v0, -0x354C($v1)
    ctx->pc = 0x1b2518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953652), GPR_U32(ctx, 2));
label_1b251c:
    // 0x1b251c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1b251cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1b2520: 0x8e025280  lw          $v0, 0x5280($s0)
    ctx->pc = 0x1b2520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 21120)));
    // 0x1b2524: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1b2524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1b2528: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b2528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1b252c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B252Cu;
    {
        const bool branch_taken_0x1b252c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B252Cu;
            // 0x1b2530: 0x93a20010  lbu         $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b252c) {
            ctx->pc = 0x1B2544u;
            goto label_1b2544;
        }
    }
    ctx->pc = 0x1B2534u;
    // 0x1b2534: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2534u;
    {
        const bool branch_taken_0x1b2534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2534u;
            // 0x1b2538: 0x26025280  addiu       $v0, $s0, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 21120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2534) {
            ctx->pc = 0x1B2548u;
            goto label_1b2548;
        }
    }
    ctx->pc = 0x1B253Cu;
    // 0x1b253c: 0xc06ee6e  jal         func_1BB9B8
    ctx->pc = 0x1B253Cu;
    SET_GPR_U32(ctx, 31, 0x1B2544u);
    ctx->pc = 0x1B2540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B253Cu;
            // 0x1b2540: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9B8u;
    if (runtime->hasFunction(0x1BB9B8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2544u; }
        if (ctx->pc != 0x1B2544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB9B8_0x1bb9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2544u; }
        if (ctx->pc != 0x1B2544u) { return; }
    }
    ctx->pc = 0x1B2544u;
label_1b2544:
    // 0x1b2544: 0x26025280  addiu       $v0, $s0, 0x5280
    ctx->pc = 0x1b2544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 21120));
label_1b2548:
    // 0x1b2548: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b2548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b254c: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1b254cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1b2550: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b2550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1b2554: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2554u;
    {
        const bool branch_taken_0x1b2554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2554u;
            // 0x1b2558: 0x93a20011  lbu         $v0, 0x11($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2554) {
            ctx->pc = 0x1B256Cu;
            goto label_1b256c;
        }
    }
    ctx->pc = 0x1B255Cu;
    // 0x1b255c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B255Cu;
    {
        const bool branch_taken_0x1b255c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B255Cu;
            // 0x1b2560: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b255c) {
            ctx->pc = 0x1B2570u;
            goto label_1b2570;
        }
    }
    ctx->pc = 0x1B2564u;
    // 0x1b2564: 0xc06ee6e  jal         func_1BB9B8
    ctx->pc = 0x1B2564u;
    SET_GPR_U32(ctx, 31, 0x1B256Cu);
    ctx->pc = 0x1B2568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2564u;
            // 0x1b2568: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9B8u;
    if (runtime->hasFunction(0x1BB9B8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B256Cu; }
        if (ctx->pc != 0x1B256Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB9B8_0x1bb9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B256Cu; }
        if (ctx->pc != 0x1B256Cu) { return; }
    }
    ctx->pc = 0x1B256Cu;
label_1b256c:
    // 0x1b256c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b256cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_1b2570:
    // 0x1b2570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2574: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2574u;
    {
        const bool branch_taken_0x1b2574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2574u;
            // 0x1b2578: 0xac62cae0  sw          $v0, -0x3520($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2574) {
            ctx->pc = 0x1B2598u;
            goto label_1b2598;
        }
    }
    ctx->pc = 0x1B257Cu;
label_1b257c:
    // 0x1b257c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b257cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b2580: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b2580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b2584: 0x8c42cb0c  lw          $v0, -0x34F4($v0)
    ctx->pc = 0x1b2584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953740)));
    // 0x1b2588: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2588u;
    {
        const bool branch_taken_0x1b2588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B258Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2588u;
            // 0x1b258c: 0xac60cab4  sw          $zero, -0x354C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2588) {
            ctx->pc = 0x1B2598u;
            goto label_1b2598;
        }
    }
    ctx->pc = 0x1B2590u;
    // 0x1b2590: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b2590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b2594: 0xac46cb14  sw          $a2, -0x34EC($v0)
    ctx->pc = 0x1b2594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953748), GPR_U32(ctx, 6));
label_1b2598:
    // 0x1b2598: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1b2598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b259c:
    // 0x1b259c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1b259cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b25a0:
    // 0x1b25a0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1b25a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b25a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b25a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b25a8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1b25a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b25ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b25acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b25b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B25B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B25B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B25B0u;
            // 0x1b25b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2390u: goto label_1b2390;
            case 0x1B23D4u: goto label_1b23d4;
            case 0x1B23E8u: goto label_1b23e8;
            case 0x1B2410u: goto label_1b2410;
            case 0x1B2454u: goto label_1b2454;
            case 0x1B2460u: goto label_1b2460;
            case 0x1B2478u: goto label_1b2478;
            case 0x1B24B8u: goto label_1b24b8;
            case 0x1B24BCu: goto label_1b24bc;
            case 0x1B24CCu: goto label_1b24cc;
            case 0x1B2510u: goto label_1b2510;
            case 0x1B251Cu: goto label_1b251c;
            case 0x1B2544u: goto label_1b2544;
            case 0x1B2548u: goto label_1b2548;
            case 0x1B256Cu: goto label_1b256c;
            case 0x1B2570u: goto label_1b2570;
            case 0x1B257Cu: goto label_1b257c;
            case 0x1B2598u: goto label_1b2598;
            case 0x1B259Cu: goto label_1b259c;
            case 0x1B25A0u: goto label_1b25a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B25B8u;
}
