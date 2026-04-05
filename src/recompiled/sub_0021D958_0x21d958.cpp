#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021D958
// Address: 0x21d958 - 0x21dae0
void sub_0021D958_0x21d958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D958_0x21d958");
#endif

    ctx->pc = 0x21d958u;

    // 0x21d958: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21d958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21d95c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x21d95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21d960: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x21d960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x21d964: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x21d964u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x21d968: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x21d968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x21d96c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21d96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21d970: 0x8e03cb94  lw          $v1, -0x346C($s0)
    ctx->pc = 0x21d970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x21d974: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x21d974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x21d978: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x21D978u;
    {
        const bool branch_taken_0x21d978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x21d978) {
            ctx->pc = 0x21D97Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21D978u;
            // 0x21d97c: 0x8c641574  lw          $a0, 0x1574($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21D980u;
            goto label_21d980;
        }
    }
    ctx->pc = 0x21D980u;
label_21d980:
    // 0x21d980: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21d980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21d984: 0x14820050  bne         $a0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x21D984u;
    {
        const bool branch_taken_0x21d984 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21D988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D984u;
            // 0x21d988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d984) {
            ctx->pc = 0x21DAC8u;
            goto label_21dac8;
        }
    }
    ctx->pc = 0x21D98Cu;
    // 0x21d98c: 0x8c621528  lw          $v0, 0x1528($v1)
    ctx->pc = 0x21d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5416)));
    // 0x21d990: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21D990u;
    {
        const bool branch_taken_0x21d990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D990u;
            // 0x21d994: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d990) {
            ctx->pc = 0x21D9B0u;
            goto label_21d9b0;
        }
    }
    ctx->pc = 0x21D998u;
    // 0x21d998: 0x8c62152c  lw          $v0, 0x152C($v1)
    ctx->pc = 0x21d998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5420)));
    // 0x21d99c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D99Cu;
    {
        const bool branch_taken_0x21d99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d99c) {
            ctx->pc = 0x21D9A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21D99Cu;
            // 0x21d9a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21D9B4u;
            goto label_21d9b4;
        }
    }
    ctx->pc = 0x21D9A4u;
    // 0x21d9a4: 0x8c621530  lw          $v0, 0x1530($v1)
    ctx->pc = 0x21d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5424)));
    // 0x21d9a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21D9A8u;
    {
        const bool branch_taken_0x21d9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d9a8) {
            ctx->pc = 0x21D9B4u;
            goto label_21d9b4;
        }
    }
    ctx->pc = 0x21D9B0u;
label_21d9b0:
    // 0x21d9b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d9b4:
    // 0x21d9b4: 0x14800044  bnez        $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x21D9B4u;
    {
        const bool branch_taken_0x21d9b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D9B4u;
            // 0x21d9b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9b4) {
            ctx->pc = 0x21DAC8u;
            goto label_21dac8;
        }
    }
    ctx->pc = 0x21D9BCu;
    // 0x21d9bc: 0xc087712  jal         func_21DC48
    ctx->pc = 0x21D9BCu;
    SET_GPR_U32(ctx, 31, 0x21D9C4u);
    ctx->pc = 0x21D9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D9BCu;
            // 0x21d9c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC48u;
    if (runtime->hasFunction(0x21DC48u)) {
        auto targetFn = runtime->lookupFunction(0x21DC48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D9C4u; }
        if (ctx->pc != 0x21D9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21dc48_0x21dd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D9C4u; }
        if (ctx->pc != 0x21D9C4u) { return; }
    }
    ctx->pc = 0x21D9C4u;
    // 0x21d9c4: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x21D9C4u;
    {
        const bool branch_taken_0x21d9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D9C4u;
            // 0x21d9c8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9c4) {
            ctx->pc = 0x21DAC4u;
            goto label_21dac4;
        }
    }
    ctx->pc = 0x21D9CCu;
    // 0x21d9cc: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21D9CCu;
    {
        const bool branch_taken_0x21d9cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21D9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D9CCu;
            // 0x21d9d0: 0x8e02cb94  lw          $v0, -0x346C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9cc) {
            ctx->pc = 0x21D9FCu;
            goto label_21d9fc;
        }
    }
    ctx->pc = 0x21D9D4u;
    // 0x21d9d4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x21d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x21d9d8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x21d9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d9dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21d9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d9e0: 0xac431550  sw          $v1, 0x1550($v0)
    ctx->pc = 0x21d9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5456), GPR_U32(ctx, 3));
    // 0x21d9e4: 0xc7ac000c  lwc1        $f12, 0xC($sp)
    ctx->pc = 0x21d9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21d9e8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x21d9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d9ec: 0xc06e37c  jal         func_1B8DF0
    ctx->pc = 0x21D9ECu;
    SET_GPR_U32(ctx, 31, 0x21D9F4u);
    ctx->pc = 0x21D9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D9ECu;
            // 0x21d9f0: 0xac461548  sw          $a2, 0x1548($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 5448), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8DF0u;
    if (runtime->hasFunction(0x1B8DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D9F4u; }
        if (ctx->pc != 0x21D9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8DF0_0x1b8df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D9F4u; }
        if (ctx->pc != 0x21D9F4u) { return; }
    }
    ctx->pc = 0x21D9F4u;
    // 0x21d9f4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x21D9F4u;
    {
        const bool branch_taken_0x21d9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D9F4u;
            // 0x21d9f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9f4) {
            ctx->pc = 0x21DAC8u;
            goto label_21dac8;
        }
    }
    ctx->pc = 0x21D9FCu;
label_21d9fc:
    // 0x21d9fc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x21d9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21da00: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DA00u;
    {
        const bool branch_taken_0x21da00 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x21DA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA00u;
            // 0x21da04: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da00) {
            ctx->pc = 0x21DA18u;
            goto label_21da18;
        }
    }
    ctx->pc = 0x21DA08u;
    // 0x21da08: 0xc06e4d6  jal         func_1B9358
    ctx->pc = 0x21DA08u;
    SET_GPR_U32(ctx, 31, 0x21DA10u);
    ctx->pc = 0x21DA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA08u;
            // 0x21da0c: 0x8e04cb94  lw          $a0, -0x346C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9358u;
    if (runtime->hasFunction(0x1B9358u)) {
        auto targetFn = runtime->lookupFunction(0x1B9358u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DA10u; }
        if (ctx->pc != 0x21DA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9358_0x1b9358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DA10u; }
        if (ctx->pc != 0x21DA10u) { return; }
    }
    ctx->pc = 0x21DA10u;
    // 0x21da10: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x21DA10u;
    {
        const bool branch_taken_0x21da10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA10u;
            // 0x21da14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da10) {
            ctx->pc = 0x21DAC8u;
            goto label_21dac8;
        }
    }
    ctx->pc = 0x21DA18u;
label_21da18:
    // 0x21da18: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x21DA18u;
    {
        const bool branch_taken_0x21da18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21DA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA18u;
            // 0x21da1c: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da18) {
            ctx->pc = 0x21DABCu;
            goto label_21dabc;
        }
    }
    ctx->pc = 0x21DA20u;
    // 0x21da20: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21DA20u;
    {
        const bool branch_taken_0x21da20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA20u;
            // 0x21da24: 0x8e04cb94  lw          $a0, -0x346C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da20) {
            ctx->pc = 0x21DA48u;
            goto label_21da48;
        }
    }
    ctx->pc = 0x21DA28u;
    // 0x21da28: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x21da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x21da2c: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x21DA2Cu;
    {
        const bool branch_taken_0x21da2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21DA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA2Cu;
            // 0x21da30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da2c) {
            ctx->pc = 0x21DA6Cu;
            goto label_21da6c;
        }
    }
    ctx->pc = 0x21DA34u;
    // 0x21da34: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x21da34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x21da38: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21DA38u;
    SET_GPR_U32(ctx, 31, 0x21DA40u);
    ctx->pc = 0x21DA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA38u;
            // 0x21da3c: 0xac820214  sw          $v0, 0x214($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DA40u; }
        if (ctx->pc != 0x21DA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DA40u; }
        if (ctx->pc != 0x21DA40u) { return; }
    }
    ctx->pc = 0x21DA40u;
    // 0x21da40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x21DA40u;
    {
        const bool branch_taken_0x21da40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA40u;
            // 0x21da44: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da40) {
            ctx->pc = 0x21DA70u;
            goto label_21da70;
        }
    }
    ctx->pc = 0x21DA48u;
label_21da48:
    // 0x21da48: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x21da48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x21da4c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21DA4Cu;
    {
        const bool branch_taken_0x21da4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA4Cu;
            // 0x21da50: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da4c) {
            ctx->pc = 0x21DA70u;
            goto label_21da70;
        }
    }
    ctx->pc = 0x21DA54u;
    // 0x21da54: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x21da54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x21da58: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21DA58u;
    {
        const bool branch_taken_0x21da58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21DA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA58u;
            // 0x21da5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da58) {
            ctx->pc = 0x21DA6Cu;
            goto label_21da6c;
        }
    }
    ctx->pc = 0x21DA60u;
    // 0x21da60: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x21da60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x21da64: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21DA64u;
    SET_GPR_U32(ctx, 31, 0x21DA6Cu);
    ctx->pc = 0x21DA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA64u;
            // 0x21da68: 0xac820218  sw          $v0, 0x218($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DA6Cu; }
        if (ctx->pc != 0x21DA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DA6Cu; }
        if (ctx->pc != 0x21DA6Cu) { return; }
    }
    ctx->pc = 0x21DA6Cu;
label_21da6c:
    // 0x21da6c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_21da70:
    // 0x21da70: 0x8fb00008  lw          $s0, 0x8($sp)
    ctx->pc = 0x21da70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21da74: 0x8c51cb94  lw          $s1, -0x346C($v0)
    ctx->pc = 0x21da74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21da78: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x21da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x21da7c: 0xae301530  sw          $s0, 0x1530($s1)
    ctx->pc = 0x21da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5424), GPR_U32(ctx, 16));
    // 0x21da80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21da80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da84: 0xae300228  sw          $s0, 0x228($s1)
    ctx->pc = 0x21da84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 16));
    // 0x21da88: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21DA88u;
    SET_GPR_U32(ctx, 31, 0x21DA90u);
    ctx->pc = 0x21DA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA88u;
            // 0x21da8c: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DA90u; }
        if (ctx->pc != 0x21DA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DA90u; }
        if (ctx->pc != 0x21DA90u) { return; }
    }
    ctx->pc = 0x21DA90u;
    // 0x21da90: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x21DA90u;
    {
        const bool branch_taken_0x21da90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA90u;
            // 0x21da94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da90) {
            ctx->pc = 0x21DABCu;
            goto label_21dabc;
        }
    }
    ctx->pc = 0x21DA98u;
    // 0x21da98: 0xc06e642  jal         func_1B9908
    ctx->pc = 0x21DA98u;
    SET_GPR_U32(ctx, 31, 0x21DAA0u);
    ctx->pc = 0x21DA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA98u;
            // 0x21da9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9908u;
    if (runtime->hasFunction(0x1B9908u)) {
        auto targetFn = runtime->lookupFunction(0x1B9908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DAA0u; }
        if (ctx->pc != 0x21DAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9908_0x1b9908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DAA0u; }
        if (ctx->pc != 0x21DAA0u) { return; }
    }
    ctx->pc = 0x21DAA0u;
    // 0x21daa0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x21daa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x21daa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21daa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21daa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21daa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21daac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21daacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21dab0: 0xc06e5c6  jal         func_1B9718
    ctx->pc = 0x21DAB0u;
    SET_GPR_U32(ctx, 31, 0x21DAB8u);
    ctx->pc = 0x21DAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DAB0u;
            // 0x21dab4: 0xe620153c  swc1        $f0, 0x153C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5436), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9718u;
    if (runtime->hasFunction(0x1B9718u)) {
        auto targetFn = runtime->lookupFunction(0x1B9718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DAB8u; }
        if (ctx->pc != 0x21DAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9718_0x1b9718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DAB8u; }
        if (ctx->pc != 0x21DAB8u) { return; }
    }
    ctx->pc = 0x21DAB8u;
    // 0x21dab8: 0xae20027c  sw          $zero, 0x27C($s1)
    ctx->pc = 0x21dab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 0));
label_21dabc:
    // 0x21dabc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21DABCu;
    {
        const bool branch_taken_0x21dabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DABCu;
            // 0x21dac0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dabc) {
            ctx->pc = 0x21DAC8u;
            goto label_21dac8;
        }
    }
    ctx->pc = 0x21DAC4u;
label_21dac4:
    // 0x21dac4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21dac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21dac8:
    // 0x21dac8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x21dac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21dacc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x21daccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21dad0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21dad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21dad4: 0x3e00008  jr          $ra
    ctx->pc = 0x21DAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DAD4u;
            // 0x21dad8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21D980u: goto label_21d980;
            case 0x21D9B0u: goto label_21d9b0;
            case 0x21D9B4u: goto label_21d9b4;
            case 0x21D9FCu: goto label_21d9fc;
            case 0x21DA18u: goto label_21da18;
            case 0x21DA48u: goto label_21da48;
            case 0x21DA6Cu: goto label_21da6c;
            case 0x21DA70u: goto label_21da70;
            case 0x21DABCu: goto label_21dabc;
            case 0x21DAC4u: goto label_21dac4;
            case 0x21DAC8u: goto label_21dac8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21DADCu;
    // 0x21dadc: 0x0  nop
    ctx->pc = 0x21dadcu;
    // NOP
}
