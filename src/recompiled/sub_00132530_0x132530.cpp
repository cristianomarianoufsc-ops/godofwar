#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132530
// Address: 0x132530 - 0x132648
void sub_00132530_0x132530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132530_0x132530");
#endif

    ctx->pc = 0x132530u;

    // 0x132530: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x132530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x132534: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x132534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x132538: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x132538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x13253c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13253cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132540: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x132540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x132544: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x132544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x132548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13254c: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x13254cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x132550: 0x2642e848  addiu       $v0, $s2, -0x17B8
    ctx->pc = 0x132550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961224));
    // 0x132554: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x132554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x132558: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x132558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13255c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x13255cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x132560: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x132560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x132564: 0x40f809  jalr        $v0
    ctx->pc = 0x132564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13256Cu);
        ctx->pc = 0x132568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132564u;
            // 0x132568: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13256Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132580u: goto label_132580;
            case 0x1325C0u: goto label_1325c0;
            case 0x1325ECu: goto label_1325ec;
            case 0x1325F4u: goto label_1325f4;
            case 0x132600u: goto label_132600;
            case 0x132624u: goto label_132624;
            case 0x13262Cu: goto label_13262c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13256Cu; }
            if (ctx->pc != 0x13256Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13256Cu;
    // 0x13256c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13256cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132570: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x132570u;
    {
        const bool branch_taken_0x132570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x132574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132570u;
            // 0x132574: 0x2642e848  addiu       $v0, $s2, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132570) {
            ctx->pc = 0x132600u;
            goto label_132600;
        }
    }
    ctx->pc = 0x132578u;
    // 0x132578: 0x26130188  addiu       $s3, $s0, 0x188
    ctx->pc = 0x132578u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
    // 0x13257c: 0x0  nop
    ctx->pc = 0x13257cu;
    // NOP
label_132580:
    // 0x132580: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x132580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x132584: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x132584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132588: 0xc08c85c  jal         func_232170
    ctx->pc = 0x132588u;
    SET_GPR_U32(ctx, 31, 0x132590u);
    ctx->pc = 0x13258Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132588u;
            // 0x13258c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232170u;
    if (runtime->hasFunction(0x232170u)) {
        auto targetFn = runtime->lookupFunction(0x232170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132590u; }
        if (ctx->pc != 0x132590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232170_0x232170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132590u; }
        if (ctx->pc != 0x132590u) { return; }
    }
    ctx->pc = 0x132590u;
    // 0x132590: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x132590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132594: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x132594u;
    {
        const bool branch_taken_0x132594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x132594) {
            ctx->pc = 0x132598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132594u;
            // 0x132598: 0x8e100050  lw          $s0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1325F4u;
            goto label_1325f4;
        }
    }
    ctx->pc = 0x13259Cu;
    // 0x13259c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x13259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1325a0: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1325A0u;
    {
        const bool branch_taken_0x1325a0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1325A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1325A0u;
            // 0x1325a4: 0x2642e848  addiu       $v0, $s2, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1325a0) {
            ctx->pc = 0x1325C0u;
            goto label_1325c0;
        }
    }
    ctx->pc = 0x1325A8u;
    // 0x1325a8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1325a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1325ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1325acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1325b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1325b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1325b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1325B4u;
    {
        const bool branch_taken_0x1325b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1325B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1325B4u;
            // 0x1325b8: 0x2642e848  addiu       $v0, $s2, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1325b4) {
            ctx->pc = 0x1325ECu;
            goto label_1325ec;
        }
    }
    ctx->pc = 0x1325BCu;
    // 0x1325bc: 0x0  nop
    ctx->pc = 0x1325bcu;
    // NOP
label_1325c0:
    // 0x1325c0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1325c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1325c4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1325c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1325c8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1325c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1325cc: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1325ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1325d0: 0x40f809  jalr        $v0
    ctx->pc = 0x1325D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1325D8u);
        ctx->pc = 0x1325D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1325D0u;
            // 0x1325d4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1325D8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132580u: goto label_132580;
            case 0x1325C0u: goto label_1325c0;
            case 0x1325ECu: goto label_1325ec;
            case 0x1325F4u: goto label_1325f4;
            case 0x132600u: goto label_132600;
            case 0x132624u: goto label_132624;
            case 0x13262Cu: goto label_13262c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1325D8u; }
            if (ctx->pc != 0x1325D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1325D8u;
    // 0x1325d8: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x1325d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x1325dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1325dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1325e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1325e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1325e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1325E4u;
    {
        const bool branch_taken_0x1325e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1325E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1325E4u;
            // 0x1325e8: 0x2c460001  sltiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1325e4) {
            ctx->pc = 0x132624u;
            goto label_132624;
        }
    }
    ctx->pc = 0x1325ECu;
label_1325ec:
    // 0x1325ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1325ECu;
    {
        const bool branch_taken_0x1325ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1325F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1325ECu;
            // 0x1325f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1325ec) {
            ctx->pc = 0x13262Cu;
            goto label_13262c;
        }
    }
    ctx->pc = 0x1325F4u;
label_1325f4:
    // 0x1325f4: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1325F4u;
    {
        const bool branch_taken_0x1325f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1325F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1325F4u;
            // 0x1325f8: 0x26130188  addiu       $s3, $s0, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1325f4) {
            ctx->pc = 0x132580u;
            runtime->cooperativeGuestYield();
            goto label_132580;
        }
    }
    ctx->pc = 0x1325FCu;
    // 0x1325fc: 0x2642e848  addiu       $v0, $s2, -0x17B8
    ctx->pc = 0x1325fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961224));
label_132600:
    // 0x132600: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x132600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x132604: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x132604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x132608: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x132608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13260c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x13260cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x132610: 0x40f809  jalr        $v0
    ctx->pc = 0x132610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132618u);
        ctx->pc = 0x132614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132610u;
            // 0x132614: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x132618u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132580u: goto label_132580;
            case 0x1325C0u: goto label_1325c0;
            case 0x1325ECu: goto label_1325ec;
            case 0x1325F4u: goto label_1325f4;
            case 0x132600u: goto label_132600;
            case 0x132624u: goto label_132624;
            case 0x13262Cu: goto label_13262c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132618u; }
            if (ctx->pc != 0x132618u) { return; }
        }
        }
    }
    ctx->pc = 0x132618u;
    // 0x132618: 0x24440188  addiu       $a0, $v0, 0x188
    ctx->pc = 0x132618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 392));
    // 0x13261c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13261cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132620: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x132620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132624:
    // 0x132624: 0xc04c706  jal         func_131C18
    ctx->pc = 0x132624u;
    SET_GPR_U32(ctx, 31, 0x13262Cu);
    ctx->pc = 0x131C18u;
    if (runtime->hasFunction(0x131C18u)) {
        auto targetFn = runtime->lookupFunction(0x131C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13262Cu; }
        if (ctx->pc != 0x13262Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C18_0x131c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13262Cu; }
        if (ctx->pc != 0x13262Cu) { return; }
    }
    ctx->pc = 0x13262Cu;
label_13262c:
    // 0x13262c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13262cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132630: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x132630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132634: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x132634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132638: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x132638u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13263c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13263cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132640: 0x3e00008  jr          $ra
    ctx->pc = 0x132640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132640u;
            // 0x132644: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132580u: goto label_132580;
            case 0x1325C0u: goto label_1325c0;
            case 0x1325ECu: goto label_1325ec;
            case 0x1325F4u: goto label_1325f4;
            case 0x132600u: goto label_132600;
            case 0x132624u: goto label_132624;
            case 0x13262Cu: goto label_13262c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132648u;
}
