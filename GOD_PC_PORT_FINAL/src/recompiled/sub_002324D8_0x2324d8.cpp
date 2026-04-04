#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002324D8
// Address: 0x2324d8 - 0x2325e0
void sub_002324D8_0x2324d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002324D8_0x2324d8");
#endif

    ctx->pc = 0x2324d8u;

    // 0x2324d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2324d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2324dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2324dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2324e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2324e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2324e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2324e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2324e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2324ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2324ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2324f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2324f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2324f4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x2324f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2324f8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2324f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2324fc: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x2324fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x232500: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x232500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232504: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x232504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232508: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x232508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23250c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x23250cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232510: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x232510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x232514: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x232514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x232518: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x232518u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23251c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23251cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232520: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x232520u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x232524: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x232524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232528: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x232528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23252c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23252cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232530: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x232530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232534: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x232534u;
    {
        const bool branch_taken_0x232534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232534u;
            // 0x232538: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232534) {
            ctx->pc = 0x2325C8u;
            goto label_2325c8;
        }
    }
    ctx->pc = 0x23253Cu;
    // 0x23253c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x23253cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x232540: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x232540u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x232544: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x232544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x232548: 0x40f809  jalr        $v0
    ctx->pc = 0x232548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232550u);
        ctx->pc = 0x23254Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232548u;
            // 0x23254c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232550u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232580u: goto label_232580;
            case 0x2325C8u: goto label_2325c8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232550u; }
            if (ctx->pc != 0x232550u) { return; }
        }
        }
    }
    ctx->pc = 0x232550u;
    // 0x232550: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x232550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232554: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x232554u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x232558: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x232558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x23255c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23255Cu;
    {
        const bool branch_taken_0x23255c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23255Cu;
            // 0x232560: 0x8e330028  lw          $s3, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23255c) {
            ctx->pc = 0x232580u;
            goto label_232580;
        }
    }
    ctx->pc = 0x232564u;
    // 0x232564: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x232564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x232568: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x232568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23256c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x23256cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x232570: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x232570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x232574: 0x40f809  jalr        $v0
    ctx->pc = 0x232574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23257Cu);
        ctx->pc = 0x232578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232574u;
            // 0x232578: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23257Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232580u: goto label_232580;
            case 0x2325C8u: goto label_2325c8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23257Cu; }
            if (ctx->pc != 0x23257Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23257Cu;
    // 0x23257c: 0x0  nop
    ctx->pc = 0x23257cu;
    // NOP
label_232580:
    // 0x232580: 0x2630002c  addiu       $s0, $s1, 0x2C
    ctx->pc = 0x232580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x232584: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x232584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x232588: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x232588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23258c: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x23258cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x232590: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x232590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232594: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x232594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x232598: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x232598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x23259c: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x23259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2325a0: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x2325a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x2325a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2325a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2325a8: 0x84840030  lh          $a0, 0x30($a0)
    ctx->pc = 0x2325a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2325ac: 0x40f809  jalr        $v0
    ctx->pc = 0x2325ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2325B4u);
        ctx->pc = 0x2325B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2325ACu;
            // 0x2325b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2325B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232580u: goto label_232580;
            case 0x2325C8u: goto label_2325c8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2325B4u; }
            if (ctx->pc != 0x2325B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2325B4u;
    // 0x2325b4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2325b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2325b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2325b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2325bc: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2325bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2325c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2325c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2325c4: 0x0  nop
    ctx->pc = 0x2325c4u;
    // NOP
label_2325c8:
    // 0x2325c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2325c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2325cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2325ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2325d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2325d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2325d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2325d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2325d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2325D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2325DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2325D8u;
            // 0x2325dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232580u: goto label_232580;
            case 0x2325C8u: goto label_2325c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2325E0u;
}
