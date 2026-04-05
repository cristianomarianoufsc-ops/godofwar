#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26c658
// Address: 0x26c658 - 0x26c728
void entry_26c658_0x26c728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26c658_0x26c728");
#endif

    ctx->pc = 0x26c658u;

    // 0x26c658: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26c658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26c65c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26c660: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x26c660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x26c664: 0x8c421344  lw          $v0, 0x1344($v0)
    ctx->pc = 0x26c664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4932)));
    // 0x26c668: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26c668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c66c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26c66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26c670: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x26c670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x26c674: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C674u;
    {
        const bool branch_taken_0x26c674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C674u;
            // 0x26c678: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c674) {
            ctx->pc = 0x26C68Cu;
            goto label_26c68c;
        }
    }
    ctx->pc = 0x26C67Cu;
    // 0x26c67c: 0xc09e96a  jal         func_27A5A8
    ctx->pc = 0x26C67Cu;
    SET_GPR_U32(ctx, 31, 0x26C684u);
    ctx->pc = 0x27A5A8u;
    if (runtime->hasFunction(0x27A5A8u)) {
        auto targetFn = runtime->lookupFunction(0x27A5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C684u; }
        if (ctx->pc != 0x26C684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27a5a8_0x27a648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C684u; }
        if (ctx->pc != 0x26C684u) { return; }
    }
    ctx->pc = 0x26C684u;
    // 0x26c684: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x26C684u;
    {
        const bool branch_taken_0x26c684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C684u;
            // 0x26c688: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c684) {
            ctx->pc = 0x26C6FCu;
            goto label_26c6fc;
        }
    }
    ctx->pc = 0x26C68Cu;
label_26c68c:
    // 0x26c68c: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26c690: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x26c690u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x26c694: 0x2451a1ff  addiu       $s1, $v0, -0x5E01
    ctx->pc = 0x26c694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943231));
    // 0x26c698: 0x2624ffc1  addiu       $a0, $s1, -0x3F
    ctx->pc = 0x26c698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967233));
    // 0x26c69c: 0xc0a5164  jal         func_294590
    ctx->pc = 0x26C69Cu;
    SET_GPR_U32(ctx, 31, 0x26C6A4u);
    ctx->pc = 0x26C6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C69Cu;
            // 0x26c6a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294590u;
    if (runtime->hasFunction(0x294590u)) {
        auto targetFn = runtime->lookupFunction(0x294590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C6A4u; }
        if (ctx->pc != 0x26C6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294590_0x294590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C6A4u; }
        if (ctx->pc != 0x26C6A4u) { return; }
    }
    ctx->pc = 0x26C6A4u;
    // 0x26c6a4: 0x8e22ffc1  lw          $v0, -0x3F($s1)
    ctx->pc = 0x26c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967233)));
    // 0x26c6a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c6ac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x26c6acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26c6b0: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x26C6B0u;
    {
        const bool branch_taken_0x26c6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26C6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C6B0u;
            // 0x26c6b4: 0xae421350  sw          $v0, 0x1350($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6b0) {
            ctx->pc = 0x26C6F4u;
            goto label_26c6f4;
        }
    }
    ctx->pc = 0x26C6B8u;
    // 0x26c6b8: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C6B8u;
    {
        const bool branch_taken_0x26c6b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x26c6b8) {
            ctx->pc = 0x26C6C8u;
            goto label_26c6c8;
        }
    }
    ctx->pc = 0x26C6C0u;
    // 0x26c6c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26C6C0u;
    {
        const bool branch_taken_0x26c6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C6C0u;
            // 0x26c6c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6c0) {
            ctx->pc = 0x26C6F8u;
            goto label_26c6f8;
        }
    }
    ctx->pc = 0x26C6C8u;
label_26c6c8:
    // 0x26c6c8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26C6C8u;
    {
        const bool branch_taken_0x26c6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C6C8u;
            // 0x26c6cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6c8) {
            ctx->pc = 0x26C6F8u;
            goto label_26c6f8;
        }
    }
    ctx->pc = 0x26C6D0u;
label_26c6d0:
    // 0x26c6d0: 0xc09ae46  jal         func_26B918
    ctx->pc = 0x26C6D0u;
    SET_GPR_U32(ctx, 31, 0x26C6D8u);
    ctx->pc = 0x26C6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C6D0u;
            // 0x26c6d4: 0x3c100031  lui         $s0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B918u;
    if (runtime->hasFunction(0x26B918u)) {
        auto targetFn = runtime->lookupFunction(0x26B918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C6D8u; }
        if (ctx->pc != 0x26C6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B918_0x26b918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C6D8u; }
        if (ctx->pc != 0x26C6D8u) { return; }
    }
    ctx->pc = 0x26C6D8u;
    // 0x26c6d8: 0x2604a1c0  addiu       $a0, $s0, -0x5E40
    ctx->pc = 0x26c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943168));
    // 0x26c6dc: 0xc0a5164  jal         func_294590
    ctx->pc = 0x26C6DCu;
    SET_GPR_U32(ctx, 31, 0x26C6E4u);
    ctx->pc = 0x26C6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C6DCu;
            // 0x26c6e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294590u;
    if (runtime->hasFunction(0x294590u)) {
        auto targetFn = runtime->lookupFunction(0x294590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C6E4u; }
        if (ctx->pc != 0x26C6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294590_0x294590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C6E4u; }
        if (ctx->pc != 0x26C6E4u) { return; }
    }
    ctx->pc = 0x26C6E4u;
    // 0x26c6e4: 0x8e02a1c0  lw          $v0, -0x5E40($s0)
    ctx->pc = 0x26c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943168)));
    // 0x26c6e8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x26c6e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26c6ec: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x26C6ECu;
    {
        const bool branch_taken_0x26c6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C6ECu;
            // 0x26c6f0: 0xae421350  sw          $v0, 0x1350($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6ec) {
            ctx->pc = 0x26C6D0u;
            runtime->cooperativeGuestYield();
            goto label_26c6d0;
        }
    }
    ctx->pc = 0x26C6F4u;
label_26c6f4:
    // 0x26c6f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26c6f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c6f8:
    // 0x26c6f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x26c6f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26c6fc:
    // 0x26c6fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26c6fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c700: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x26c700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26c704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c708: 0x3e00008  jr          $ra
    ctx->pc = 0x26C708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C708u;
            // 0x26c70c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26C68Cu: goto label_26c68c;
            case 0x26C6C8u: goto label_26c6c8;
            case 0x26C6D0u: goto label_26c6d0;
            case 0x26C6F4u: goto label_26c6f4;
            case 0x26C6F8u: goto label_26c6f8;
            case 0x26C6FCu: goto label_26c6fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26C710u;
    // 0x26c710: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26c710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c714: 0x0  nop
    ctx->pc = 0x26c714u;
    // NOP
    // 0x26c718: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26c718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c71c: 0x0  nop
    ctx->pc = 0x26c71cu;
    // NOP
    // 0x26c720: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c724: 0x0  nop
    ctx->pc = 0x26c724u;
    // NOP
}
