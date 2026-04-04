#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027B568
// Address: 0x27b568 - 0x27b6d0
void sub_0027B568_0x27b568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B568_0x27b568");
#endif

    ctx->pc = 0x27b568u;

    // 0x27b568: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27b568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27b56c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x27b56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x27b570: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27b570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x27b574: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x27b574u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b578: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27b578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27b57c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x27b57cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b580: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27b580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27b584: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27b584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b588: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27b588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27b58c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x27b58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x27b590: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x27b590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b594: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x27b594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x27b598: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27b598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27b59c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27b59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27b5a0: 0x28622081  slti        $v0, $v1, 0x2081
    ctx->pc = 0x27b5a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8321) ? 1 : 0);
    // 0x27b5a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27B5A4u;
    {
        const bool branch_taken_0x27b5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B5A4u;
            // 0x27b5a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b5a4) {
            ctx->pc = 0x27B5C4u;
            goto label_27b5c4;
        }
    }
    ctx->pc = 0x27B5ACu;
    // 0x27b5ac: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x27b5acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x27b5b0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x27b5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b5b4: 0xc09edf0  jal         func_27B7C0
    ctx->pc = 0x27B5B4u;
    SET_GPR_U32(ctx, 31, 0x27B5BCu);
    ctx->pc = 0x27B5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B5B4u;
            // 0x27b5b8: 0x24844f40  addiu       $a0, $a0, 0x4F40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B7C0u;
    if (runtime->hasFunction(0x27B7C0u)) {
        auto targetFn = runtime->lookupFunction(0x27B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B5BCu; }
        if (ctx->pc != 0x27B5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B7C0_0x27b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B5BCu; }
        if (ctx->pc != 0x27B5BCu) { return; }
    }
    ctx->pc = 0x27B5BCu;
    // 0x27b5bc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x27B5BCu;
    {
        const bool branch_taken_0x27b5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B5BCu;
            // 0x27b5c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b5bc) {
            ctx->pc = 0x27B6A4u;
            goto label_27b6a4;
        }
    }
    ctx->pc = 0x27B5C4u;
label_27b5c4:
    // 0x27b5c4: 0x3c150031  lui         $s5, 0x31
    ctx->pc = 0x27b5c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49 << 16));
    // 0x27b5c8: 0x3c130031  lui         $s3, 0x31
    ctx->pc = 0x27b5c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)49 << 16));
    // 0x27b5cc: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x27B5CCu;
    SET_GPR_U32(ctx, 31, 0x27B5D4u);
    ctx->pc = 0x27B5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B5CCu;
            // 0x27b5d0: 0x8ea4d000  lw          $a0, -0x3000($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294955008)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B5D4u; }
        if (ctx->pc != 0x27B5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B5D4u; }
        if (ctx->pc != 0x27B5D4u) { return; }
    }
    ctx->pc = 0x27B5D4u;
    // 0x27b5d4: 0xae72ad00  sw          $s2, -0x5300($s3)
    ctx->pc = 0x27b5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294946048), GPR_U32(ctx, 18));
    // 0x27b5d8: 0x2664ad00  addiu       $a0, $s3, -0x5300
    ctx->pc = 0x27b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946048));
    // 0x27b5dc: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x27b5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x27b5e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27b5e4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x27b5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x27b5e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27b5ec: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x27B5ECu;
    {
        const bool branch_taken_0x27b5ec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27B5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B5ECu;
            // 0x27b5f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b5ec) {
            ctx->pc = 0x27B628u;
            goto label_27b628;
        }
    }
    ctx->pc = 0x27B5F4u;
    // 0x27b5f4: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x27b5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x27b5f8: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x27b5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
    // 0x27b5fc: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x27b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_27b600:
    // 0x27b600: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x27b600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x27b604: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x27b604u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27b608: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27b608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x27b60c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x27b60cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x27b610: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27b610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27b614: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x27b614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27b618: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27B618u;
    {
        const bool branch_taken_0x27b618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B618u;
            // 0x27b61c: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b618) {
            ctx->pc = 0x27B600u;
            runtime->cooperativeGuestYield();
            goto label_27b600;
        }
    }
    ctx->pc = 0x27B620u;
    // 0x27b620: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27B620u;
    {
        const bool branch_taken_0x27b620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B620u;
            // 0x27b624: 0x24f0ab98  addiu       $s0, $a3, -0x5468 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b620) {
            ctx->pc = 0x27B630u;
            goto label_27b630;
        }
    }
    ctx->pc = 0x27B628u;
label_27b628:
    // 0x27b628: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x27b628u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
    // 0x27b62c: 0x24f0ab98  addiu       $s0, $a3, -0x5468
    ctx->pc = 0x27b62cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945688));
label_27b630:
    // 0x27b630: 0xc0a5d9c  jal         func_297670
    ctx->pc = 0x27B630u;
    SET_GPR_U32(ctx, 31, 0x27B638u);
    ctx->pc = 0x27B634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B630u;
            // 0x27b634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297670u;
    if (runtime->hasFunction(0x297670u)) {
        auto targetFn = runtime->lookupFunction(0x297670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B638u; }
        if (ctx->pc != 0x27B638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297670_0x2976c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B638u; }
        if (ctx->pc != 0x27B638u) { return; }
    }
    ctx->pc = 0x27B638u;
    // 0x27b638: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27b638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b63c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27B63Cu;
    {
        const bool branch_taken_0x27b63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27B640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B63Cu;
            // 0x27b640: 0x2667ad00  addiu       $a3, $s3, -0x5300 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b63c) {
            ctx->pc = 0x27B658u;
            goto label_27b658;
        }
    }
    ctx->pc = 0x27B644u;
    // 0x27b644: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x27b644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x27b648: 0xc09edf0  jal         func_27B7C0
    ctx->pc = 0x27B648u;
    SET_GPR_U32(ctx, 31, 0x27B650u);
    ctx->pc = 0x27B64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B648u;
            // 0x27b64c: 0x24844f70  addiu       $a0, $a0, 0x4F70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B7C0u;
    if (runtime->hasFunction(0x27B7C0u)) {
        auto targetFn = runtime->lookupFunction(0x27B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B650u; }
        if (ctx->pc != 0x27B650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B7C0_0x27b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B650u; }
        if (ctx->pc != 0x27B650u) { return; }
    }
    ctx->pc = 0x27B650u;
    // 0x27b650: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27B650u;
    {
        const bool branch_taken_0x27b650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b650) {
            ctx->pc = 0x27B688u;
            goto label_27b688;
        }
    }
    ctx->pc = 0x27B658u;
label_27b658:
    // 0x27b658: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x27b658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x27b65c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b660: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x27b660u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b664: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27b664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27b668: 0x34a5131c  ori         $a1, $a1, 0x131C
    ctx->pc = 0x27b668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4892);
    // 0x27b66c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27b66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b670: 0x24082090  addiu       $t0, $zero, 0x2090
    ctx->pc = 0x27b670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8336));
    // 0x27b674: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x27b674u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b678: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x27B678u;
    SET_GPR_U32(ctx, 31, 0x27B680u);
    ctx->pc = 0x27B67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B678u;
            // 0x27b67c: 0x240a2090  addiu       $t2, $zero, 0x2090 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B680u; }
        if (ctx->pc != 0x27B680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B680u; }
        if (ctx->pc != 0x27B680u) { return; }
    }
    ctx->pc = 0x27B680u;
    // 0x27b680: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B680u;
    {
        const bool branch_taken_0x27b680 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27b680) {
            ctx->pc = 0x27B698u;
            goto label_27b698;
        }
    }
    ctx->pc = 0x27B688u;
label_27b688:
    // 0x27b688: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27B688u;
    SET_GPR_U32(ctx, 31, 0x27B690u);
    ctx->pc = 0x27B68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B688u;
            // 0x27b68c: 0x8ea4d000  lw          $a0, -0x3000($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294955008)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B690u; }
        if (ctx->pc != 0x27B690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B690u; }
        if (ctx->pc != 0x27B690u) { return; }
    }
    ctx->pc = 0x27B690u;
    // 0x27b690: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27B690u;
    {
        const bool branch_taken_0x27b690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B690u;
            // 0x27b694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b690) {
            ctx->pc = 0x27B6A4u;
            goto label_27b6a4;
        }
    }
    ctx->pc = 0x27B698u;
label_27b698:
    // 0x27b698: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27B698u;
    SET_GPR_U32(ctx, 31, 0x27B6A0u);
    ctx->pc = 0x27B69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B698u;
            // 0x27b69c: 0x8ea4d000  lw          $a0, -0x3000($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294955008)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B6A0u; }
        if (ctx->pc != 0x27B6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B6A0u; }
        if (ctx->pc != 0x27B6A0u) { return; }
    }
    ctx->pc = 0x27B6A0u;
    // 0x27b6a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b6a4:
    // 0x27b6a4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x27b6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27b6a8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x27b6a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27b6ac: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x27b6acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27b6b0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27b6b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27b6b4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27b6b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b6b8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27b6b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b6bc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27b6bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b6c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27b6c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x27B6C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B6C4u;
            // 0x27b6c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27B5C4u: goto label_27b5c4;
            case 0x27B600u: goto label_27b600;
            case 0x27B628u: goto label_27b628;
            case 0x27B630u: goto label_27b630;
            case 0x27B658u: goto label_27b658;
            case 0x27B688u: goto label_27b688;
            case 0x27B698u: goto label_27b698;
            case 0x27B6A4u: goto label_27b6a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27B6CCu;
    // 0x27b6cc: 0x0  nop
    ctx->pc = 0x27b6ccu;
    // NOP
}
