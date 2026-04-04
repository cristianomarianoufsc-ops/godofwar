#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027D2C8
// Address: 0x27d2c8 - 0x27d3e8
void sub_0027D2C8_0x27d2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D2C8_0x27d2c8");
#endif

    ctx->pc = 0x27d2c8u;

    // 0x27d2c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27d2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27d2cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27d2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27d2d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27d2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d2d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27d2d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27d2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27d2dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27d2dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2e0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27d2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27d2e4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27D2E4u;
    {
        const bool branch_taken_0x27d2e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D2E4u;
            // 0x27d2e8: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d2e4) {
            ctx->pc = 0x27D30Cu;
            goto label_27d30c;
        }
    }
    ctx->pc = 0x27D2ECu;
    // 0x27d2ec: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x27d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x27d2f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27d2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2f4: 0x2442c8c8  addiu       $v0, $v0, -0x3738
    ctx->pc = 0x27d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    // 0x27d2f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2fc: 0xc0a2644  jal         func_289910
    ctx->pc = 0x27D2FCu;
    SET_GPR_U32(ctx, 31, 0x27D304u);
    ctx->pc = 0x27D300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D2FCu;
            // 0x27d300: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D304u; }
        if (ctx->pc != 0x27D304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D304u; }
        if (ctx->pc != 0x27D304u) { return; }
    }
    ctx->pc = 0x27D304u;
    // 0x27d304: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27D304u;
    {
        const bool branch_taken_0x27d304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d304) {
            ctx->pc = 0x27D308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27D304u;
            // 0x27d308: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27D320u;
            goto label_27d320;
        }
    }
    ctx->pc = 0x27D30Cu;
label_27d30c:
    // 0x27d30c: 0x3c130032  lui         $s3, 0x32
    ctx->pc = 0x27d30cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)50 << 16));
    // 0x27d310: 0x8e70c8c0  lw          $s0, -0x3740($s3)
    ctx->pc = 0x27d310u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953152)));
    // 0x27d314: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x27D314u;
    {
        const bool branch_taken_0x27d314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D314u;
            // 0x27d318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d314) {
            ctx->pc = 0x27D3CCu;
            goto label_27d3cc;
        }
    }
    ctx->pc = 0x27D31Cu;
    // 0x27d31c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x27d31cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_27d320:
    // 0x27d320: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27D320u;
    {
        const bool branch_taken_0x27d320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D320u;
            // 0x27d324: 0x92050000  lbu         $a1, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d320) {
            ctx->pc = 0x27D33Cu;
            goto label_27d33c;
        }
    }
    ctx->pc = 0x27D328u;
    // 0x27d328: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27D328u;
    {
        const bool branch_taken_0x27d328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D328u;
            // 0x27d32c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d328) {
            ctx->pc = 0x27D3CCu;
            goto label_27d3cc;
        }
    }
    ctx->pc = 0x27D330u;
label_27d330:
    // 0x27d330: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x27D330u;
    {
        const bool branch_taken_0x27d330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D330u;
            // 0x27d334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d330) {
            ctx->pc = 0x27D3CCu;
            goto label_27d3cc;
        }
    }
    ctx->pc = 0x27D338u;
    // 0x27d338: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x27d338u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_27d33c:
    // 0x27d33c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x27d33cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x27d340: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27d340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27d344: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x27d344u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x27d348: 0xc0a2589  jal         func_289624
    ctx->pc = 0x27D348u;
    SET_GPR_U32(ctx, 31, 0x27D350u);
    ctx->pc = 0x27D34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D348u;
            // 0x27d34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289624u;
    if (runtime->hasFunction(0x289624u)) {
        auto targetFn = runtime->lookupFunction(0x289624u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D350u; }
        if (ctx->pc != 0x27D350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289624_0x2897c4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D350u; }
        if (ctx->pc != 0x27D350u) { return; }
    }
    ctx->pc = 0x27D350u;
    // 0x27d350: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x27D350u;
    {
        const bool branch_taken_0x27d350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d350) {
            ctx->pc = 0x27D354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27D350u;
            // 0x27d354: 0x8202ffff  lb          $v0, -0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27D330u;
            runtime->cooperativeGuestYield();
            goto label_27d330;
        }
    }
    ctx->pc = 0x27D358u;
    // 0x27d358: 0x8203ffff  lb          $v1, -0x1($s0)
    ctx->pc = 0x27d358u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
    // 0x27d35c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x27d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x27d360: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27D360u;
    {
        const bool branch_taken_0x27d360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27D364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D360u;
            // 0x27d364: 0x2612ffff  addiu       $s2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d360) {
            ctx->pc = 0x27D394u;
            goto label_27d394;
        }
    }
    ctx->pc = 0x27D368u;
    // 0x27d368: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x27d368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d36c: 0x3c130032  lui         $s3, 0x32
    ctx->pc = 0x27d36cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)50 << 16));
    // 0x27d370: 0x3c11002c  lui         $s1, 0x2C
    ctx->pc = 0x27d370u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)44 << 16));
    // 0x27d374: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x27d374u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_27d378:
    // 0x27d378: 0x26245230  addiu       $a0, $s1, 0x5230
    ctx->pc = 0x27d378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 21040));
    // 0x27d37c: 0xc0a2589  jal         func_289624
    ctx->pc = 0x27D37Cu;
    SET_GPR_U32(ctx, 31, 0x27D384u);
    ctx->pc = 0x27D380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D37Cu;
            // 0x27d380: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289624u;
    if (runtime->hasFunction(0x289624u)) {
        auto targetFn = runtime->lookupFunction(0x289624u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D384u; }
        if (ctx->pc != 0x27D384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289624_0x2897c4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D384u; }
        if (ctx->pc != 0x27D384u) { return; }
    }
    ctx->pc = 0x27D384u;
    // 0x27d384: 0x5040fffc  beql        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x27D384u;
    {
        const bool branch_taken_0x27d384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d384) {
            ctx->pc = 0x27D388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27D384u;
            // 0x27d388: 0x82050000  lb          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27D378u;
            runtime->cooperativeGuestYield();
            goto label_27d378;
        }
    }
    ctx->pc = 0x27D38Cu;
    // 0x27d38c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27D38Cu;
    {
        const bool branch_taken_0x27d38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D38Cu;
            // 0x27d390: 0x8202ffff  lb          $v0, -0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d38c) {
            ctx->pc = 0x27D3B8u;
            goto label_27d3b8;
        }
    }
    ctx->pc = 0x27D394u;
label_27d394:
    // 0x27d394: 0x3c130032  lui         $s3, 0x32
    ctx->pc = 0x27d394u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)50 << 16));
    // 0x27d398: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x27d398u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27d39c: 0x0  nop
    ctx->pc = 0x27d39cu;
    // NOP
label_27d3a0:
    // 0x27d3a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d3a4: 0xc0a2589  jal         func_289624
    ctx->pc = 0x27D3A4u;
    SET_GPR_U32(ctx, 31, 0x27D3ACu);
    ctx->pc = 0x27D3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D3A4u;
            // 0x27d3a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289624u;
    if (runtime->hasFunction(0x289624u)) {
        auto targetFn = runtime->lookupFunction(0x289624u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D3ACu; }
        if (ctx->pc != 0x27D3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289624_0x2897c4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D3ACu; }
        if (ctx->pc != 0x27D3ACu) { return; }
    }
    ctx->pc = 0x27D3ACu;
    // 0x27d3ac: 0x5040fffc  beql        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x27D3ACu;
    {
        const bool branch_taken_0x27d3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d3ac) {
            ctx->pc = 0x27D3B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27D3ACu;
            // 0x27d3b0: 0x82050000  lb          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27D3A0u;
            runtime->cooperativeGuestYield();
            goto label_27d3a0;
        }
    }
    ctx->pc = 0x27D3B4u;
    // 0x27d3b4: 0x8202ffff  lb          $v0, -0x1($s0)
    ctx->pc = 0x27d3b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
label_27d3b8:
    // 0x27d3b8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x27D3B8u;
    {
        const bool branch_taken_0x27d3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d3b8) {
            ctx->pc = 0x27D3BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27D3B8u;
            // 0x27d3bc: 0xae60c8c0  sw          $zero, -0x3740($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294953152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27D3C4u;
            goto label_27d3c4;
        }
    }
    ctx->pc = 0x27D3C0u;
    // 0x27d3c0: 0xae70c8c0  sw          $s0, -0x3740($s3)
    ctx->pc = 0x27d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294953152), GPR_U32(ctx, 16));
label_27d3c4:
    // 0x27d3c4: 0xa200ffff  sb          $zero, -0x1($s0)
    ctx->pc = 0x27d3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294967295), (uint8_t)GPR_U32(ctx, 0));
    // 0x27d3c8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x27d3c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27d3cc:
    // 0x27d3cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27d3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27d3d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27d3d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d3d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27d3d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d3d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27d3d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d3dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d3dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x27D3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D3E0u;
            // 0x27d3e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D30Cu: goto label_27d30c;
            case 0x27D320u: goto label_27d320;
            case 0x27D330u: goto label_27d330;
            case 0x27D33Cu: goto label_27d33c;
            case 0x27D378u: goto label_27d378;
            case 0x27D394u: goto label_27d394;
            case 0x27D3A0u: goto label_27d3a0;
            case 0x27D3B8u: goto label_27d3b8;
            case 0x27D3C4u: goto label_27d3c4;
            case 0x27D3CCu: goto label_27d3cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D3E8u;
}
