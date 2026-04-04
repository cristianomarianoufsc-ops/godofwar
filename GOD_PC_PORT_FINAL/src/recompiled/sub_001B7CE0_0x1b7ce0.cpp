#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7CE0
// Address: 0x1b7ce0 - 0x1b7df0
void sub_001B7CE0_0x1b7ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7CE0_0x1b7ce0");
#endif

    ctx->pc = 0x1b7ce0u;

    // 0x1b7ce0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b7ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b7ce4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b7ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b7ce8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b7ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b7cec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b7cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7cf0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b7cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b7cf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b7cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7cf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b7cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b7cfc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b7cfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7d04: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b7d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1b7d08:
    // 0x1b7d08: 0x26321558  addiu       $s2, $s1, 0x1558
    ctx->pc = 0x1b7d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 5464));
    // 0x1b7d0c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b7d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b7d10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b7d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7d14: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7D14u;
    {
        const bool branch_taken_0x1b7d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7d14) {
            ctx->pc = 0x1B7D18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D14u;
            // 0x1b7d18: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7D38u;
            goto label_1b7d38;
        }
    }
    ctx->pc = 0x1B7D1Cu;
    // 0x1b7d1c: 0xc052ac8  jal         func_14AB20
    ctx->pc = 0x1B7D1Cu;
    SET_GPR_U32(ctx, 31, 0x1B7D24u);
    ctx->pc = 0x14AB20u;
    if (runtime->hasFunction(0x14AB20u)) {
        auto targetFn = runtime->lookupFunction(0x14AB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7D24u; }
        if (ctx->pc != 0x1B7D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14ab20_0x14ab38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7D24u; }
        if (ctx->pc != 0x1B7D24u) { return; }
    }
    ctx->pc = 0x1B7D24u;
    // 0x1b7d24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b7d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d28: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1B7D28u;
    SET_GPR_U32(ctx, 31, 0x1B7D30u);
    ctx->pc = 0x1B7D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D28u;
            // 0x1b7d2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7D30u; }
        if (ctx->pc != 0x1B7D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7D30u; }
        if (ctx->pc != 0x1B7D30u) { return; }
    }
    ctx->pc = 0x1B7D30u;
    // 0x1b7d30: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B7D30u;
    {
        const bool branch_taken_0x1b7d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D30u;
            // 0x1b7d34: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d30) {
            ctx->pc = 0x1B7DCCu;
            goto label_1b7dcc;
        }
    }
    ctx->pc = 0x1B7D38u;
label_1b7d38:
    // 0x1b7d38: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1b7d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b7d3c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1B7D3Cu;
    {
        const bool branch_taken_0x1b7d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D3Cu;
            // 0x1b7d40: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d3c) {
            ctx->pc = 0x1B7D08u;
            runtime->cooperativeGuestYield();
            goto label_1b7d08;
        }
    }
    ctx->pc = 0x1B7D44u;
    // 0x1b7d44: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1b7d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d48: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1b7d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b7d4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b7d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b7d50:
    // 0x1b7d50: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B7D50u;
    {
        const bool branch_taken_0x1b7d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7d50) {
            ctx->pc = 0x1B7D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D50u;
            // 0x1b7d54: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7DC0u;
            goto label_1b7dc0;
        }
    }
    ctx->pc = 0x1B7D58u;
    // 0x1b7d58: 0xc053012  jal         func_14C048
    ctx->pc = 0x1B7D58u;
    SET_GPR_U32(ctx, 31, 0x1B7D60u);
    ctx->pc = 0x1B7D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D58u;
            // 0x1b7d5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C048u;
    if (runtime->hasFunction(0x14C048u)) {
        auto targetFn = runtime->lookupFunction(0x14C048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7D60u; }
        if (ctx->pc != 0x1B7D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C048_0x14c048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7D60u; }
        if (ctx->pc != 0x1B7D60u) { return; }
    }
    ctx->pc = 0x1B7D60u;
    // 0x1b7d60: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B7D60u;
    {
        const bool branch_taken_0x1b7d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D60u;
            // 0x1b7d64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d60) {
            ctx->pc = 0x1B7DCCu;
            goto label_1b7dcc;
        }
    }
    ctx->pc = 0x1B7D68u;
    // 0x1b7d68: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1b7d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1b7d6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b7d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d70: 0x24a55640  addiu       $a1, $a1, 0x5640
    ctx->pc = 0x1b7d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22080));
    // 0x1b7d74: 0xc052a28  jal         func_14A8A0
    ctx->pc = 0x1B7D74u;
    SET_GPR_U32(ctx, 31, 0x1B7D7Cu);
    ctx->pc = 0x1B7D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D74u;
            // 0x1b7d78: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A8A0u;
    if (runtime->hasFunction(0x14A8A0u)) {
        auto targetFn = runtime->lookupFunction(0x14A8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7D7Cu; }
        if (ctx->pc != 0x1B7D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14a8a0_0x14a8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7D7Cu; }
        if (ctx->pc != 0x1B7D7Cu) { return; }
    }
    ctx->pc = 0x1B7D7Cu;
    // 0x1b7d7c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b7d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b7d80: 0xc06de78  jal         func_1B79E0
    ctx->pc = 0x1B7D80u;
    SET_GPR_U32(ctx, 31, 0x1B7D88u);
    ctx->pc = 0x1B7D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D80u;
            // 0x1b7d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B79E0u;
    if (runtime->hasFunction(0x1B79E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B79E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7D88u; }
        if (ctx->pc != 0x1B7D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B79E0_0x1b79e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7D88u; }
        if (ctx->pc != 0x1B7D88u) { return; }
    }
    ctx->pc = 0x1B7D88u;
    // 0x1b7d88: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b7d8c: 0x8c43e8cc  lw          $v1, -0x1734($v0)
    ctx->pc = 0x1b7d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961356)));
    // 0x1b7d90: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b7d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b7d94: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b7d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b7d98: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1b7d98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1b7d9c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1b7d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1b7da0: 0x40f809  jalr        $v0
    ctx->pc = 0x1B7DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B7DA8u);
        ctx->pc = 0x1B7DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7DA0u;
            // 0x1b7da4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B7DA8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7D08u: goto label_1b7d08;
            case 0x1B7D38u: goto label_1b7d38;
            case 0x1B7D50u: goto label_1b7d50;
            case 0x1B7DC0u: goto label_1b7dc0;
            case 0x1B7DCCu: goto label_1b7dcc;
            case 0x1B7DD0u: goto label_1b7dd0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B7DA8u; }
            if (ctx->pc != 0x1B7DA8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B7DA8u;
    // 0x1b7da8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b7da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7dac: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x1b7dacu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b7db0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7db4: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x1b7db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
    // 0x1b7db8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7DB8u;
    {
        const bool branch_taken_0x1b7db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7DB8u;
            // 0x1b7dbc: 0xa4830004  sh          $v1, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7db8) {
            ctx->pc = 0x1B7DD0u;
            goto label_1b7dd0;
        }
    }
    ctx->pc = 0x1B7DC0u;
label_1b7dc0:
    // 0x1b7dc0: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1b7dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b7dc4: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1B7DC4u;
    {
        const bool branch_taken_0x1b7dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7dc4) {
            ctx->pc = 0x1B7DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7DC4u;
            // 0x1b7dc8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7D50u;
            runtime->cooperativeGuestYield();
            goto label_1b7d50;
        }
    }
    ctx->pc = 0x1B7DCCu;
label_1b7dcc:
    // 0x1b7dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7dd0:
    // 0x1b7dd0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b7dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7dd4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b7dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7dd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b7dd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7ddc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b7ddcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7de4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7DE4u;
            // 0x1b7de8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7D08u: goto label_1b7d08;
            case 0x1B7D38u: goto label_1b7d38;
            case 0x1B7D50u: goto label_1b7d50;
            case 0x1B7DC0u: goto label_1b7dc0;
            case 0x1B7DCCu: goto label_1b7dcc;
            case 0x1B7DD0u: goto label_1b7dd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7DECu;
    // 0x1b7dec: 0x0  nop
    ctx->pc = 0x1b7decu;
    // NOP
}
