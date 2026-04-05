#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156288
// Address: 0x156288 - 0x156400
void sub_00156288_0x156288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156288_0x156288");
#endif

    ctx->pc = 0x156288u;

    // 0x156288: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x156288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x15628c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x15628cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x156290: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x156290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156294: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x156294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x156298: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x156298u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15629c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x15629cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1562a0: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x1562a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1562a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1562a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1562a8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1562a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1562ac: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1562acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1562b0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1562b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1562b4: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x1562b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1562b8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1562b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1562bc: 0x2636000c  addiu       $s6, $s1, 0xC
    ctx->pc = 0x1562bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1562c0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1562c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1562c4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1562c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1562c8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1562c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1562cc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1562ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1562d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1562d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1562d4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1562d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1562d8: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1562D8u;
    SET_GPR_U32(ctx, 31, 0x1562E0u);
    ctx->pc = 0x1562DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1562D8u;
            // 0x1562dc: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1562E0u; }
        if (ctx->pc != 0x1562E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1562E0u; }
        if (ctx->pc != 0x1562E0u) { return; }
    }
    ctx->pc = 0x1562E0u;
    // 0x1562e0: 0xaed40008  sw          $s4, 0x8($s6)
    ctx->pc = 0x1562e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 20));
    // 0x1562e4: 0xaed40004  sw          $s4, 0x4($s6)
    ctx->pc = 0x1562e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 20));
    // 0x1562e8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1562e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1562ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1562ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1562f0: 0xae3e0008  sw          $fp, 0x8($s1)
    ctx->pc = 0x1562f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 30));
    // 0x1562f4: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x1562f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1562f8: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x1562f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x1562fc: 0x12800030  beqz        $s4, . + 4 + (0x30 << 2)
    ctx->pc = 0x1562FCu;
    {
        const bool branch_taken_0x1562fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x156300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1562FCu;
            // 0x156300: 0xae350004  sw          $s5, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1562fc) {
            ctx->pc = 0x1563C0u;
            goto label_1563c0;
        }
    }
    ctx->pc = 0x156304u;
    // 0x156304: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x156304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_156308:
    // 0x156308: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x156308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x15630c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15630cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156310: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x156310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x156314: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x156314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x156318: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x156318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15631c: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x15631cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x156320: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x156320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x156324: 0x12a00020  beqz        $s5, . + 4 + (0x20 << 2)
    ctx->pc = 0x156324u;
    {
        const bool branch_taken_0x156324 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x156328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156324u;
            // 0x156328: 0xac770000  sw          $s7, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156324) {
            ctx->pc = 0x1563A8u;
            goto label_1563a8;
        }
    }
    ctx->pc = 0x15632Cu;
    // 0x15632c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x15632cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x156330: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x156330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156334: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x156334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156338: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x156338u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15633c: 0x0  nop
    ctx->pc = 0x15633cu;
    // NOP
label_156340:
    // 0x156340: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x156340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156344: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x156344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x156348: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x156348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15634c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156350: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x156350u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x156354: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x156354u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156358: 0x86040040  lh          $a0, 0x40($s0)
    ctx->pc = 0x156358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x15635c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15635cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x156360: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x156360u;
    SET_GPR_U32(ctx, 31, 0x156368u);
    ctx->pc = 0x156364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156360u;
            // 0x156364: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156368u; }
        if (ctx->pc != 0x156368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156368u; }
        if (ctx->pc != 0x156368u) { return; }
    }
    ctx->pc = 0x156368u;
    // 0x156368: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x156368u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15636c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15636cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156370: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156374: 0xc054e94  jal         func_153A50
    ctx->pc = 0x156374u;
    SET_GPR_U32(ctx, 31, 0x15637Cu);
    ctx->pc = 0x156378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156374u;
            // 0x156378: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153A50u;
    if (runtime->hasFunction(0x153A50u)) {
        auto targetFn = runtime->lookupFunction(0x153A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15637Cu; }
        if (ctx->pc != 0x15637Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153A50_0x153a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15637Cu; }
        if (ctx->pc != 0x15637Cu) { return; }
    }
    ctx->pc = 0x15637Cu;
    // 0x15637c: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x15637cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x156380: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x156380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156384: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156388: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x156388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15638c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15638cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x156390: 0x40f809  jalr        $v0
    ctx->pc = 0x156390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156398u);
        ctx->pc = 0x156394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156390u;
            // 0x156394: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x156398u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156308u: goto label_156308;
            case 0x156340u: goto label_156340;
            case 0x1563A8u: goto label_1563a8;
            case 0x1563C0u: goto label_1563c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x156398u; }
            if (ctx->pc != 0x156398u) { return; }
        }
        }
    }
    ctx->pc = 0x156398u;
    // 0x156398: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x156398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x15639c: 0x275102b  sltu        $v0, $s3, $s5
    ctx->pc = 0x15639cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1563a0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1563A0u;
    {
        const bool branch_taken_0x1563a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1563A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1563A0u;
            // 0x1563a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1563a0) {
            ctx->pc = 0x156340u;
            runtime->cooperativeGuestYield();
            goto label_156340;
        }
    }
    ctx->pc = 0x1563A8u;
label_1563a8:
    // 0x1563a8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1563a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1563ac: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1563acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1563b0: 0x2f4102b  sltu        $v0, $s7, $s4
    ctx->pc = 0x1563b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1563b4: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1563b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1563b8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1563B8u;
    {
        const bool branch_taken_0x1563b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1563BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1563B8u;
            // 0x1563bc: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1563b8) {
            ctx->pc = 0x156308u;
            runtime->cooperativeGuestYield();
            goto label_156308;
        }
    }
    ctx->pc = 0x1563C0u;
label_1563c0:
    // 0x1563c0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1563c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1563c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1563c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1563c8: 0xac62c090  sw          $v0, -0x3F70($v1)
    ctx->pc = 0x1563c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294951056), GPR_U32(ctx, 2));
    // 0x1563cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1563ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1563d0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1563d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1563d4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1563d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1563d8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1563d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1563dc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1563dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1563e0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1563e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1563e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1563e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1563e8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1563e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1563ec: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1563ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1563f0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1563f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1563f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1563f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1563f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1563F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1563FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1563F8u;
            // 0x1563fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156308u: goto label_156308;
            case 0x156340u: goto label_156340;
            case 0x1563A8u: goto label_1563a8;
            case 0x1563C0u: goto label_1563c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x156400u;
}
