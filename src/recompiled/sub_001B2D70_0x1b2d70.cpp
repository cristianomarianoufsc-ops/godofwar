#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2D70
// Address: 0x1b2d70 - 0x1b2ec0
void sub_001B2D70_0x1b2d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2D70_0x1b2d70");
#endif

    ctx->pc = 0x1b2d70u;

    // 0x1b2d70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b2d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b2d74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b2d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b2d78: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b2d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b2d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b2d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b2d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2d88: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b2d88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2d8c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1B2D8Cu;
    {
        const bool branch_taken_0x1b2d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D8Cu;
            // 0x1b2d90: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d8c) {
            ctx->pc = 0x1B2EA8u;
            goto label_1b2ea8;
        }
    }
    ctx->pc = 0x1B2D94u;
    // 0x1b2d94: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b2d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b2d98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d9c: 0x2451509e  addiu       $s1, $v0, 0x509E
    ctx->pc = 0x1b2d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 20638));
    // 0x1b2da0: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1B2DA0u;
    SET_GPR_U32(ctx, 31, 0x1B2DA8u);
    ctx->pc = 0x1B2DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DA0u;
            // 0x1b2da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DA8u; }
        if (ctx->pc != 0x1B2DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DA8u; }
        if (ctx->pc != 0x1B2DA8u) { return; }
    }
    ctx->pc = 0x1B2DA8u;
    // 0x1b2da8: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x1B2DA8u;
    {
        const bool branch_taken_0x1b2da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2da8) {
            ctx->pc = 0x1B2DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DA8u;
            // 0x1b2dac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2EACu;
            goto label_1b2eac;
        }
    }
    ctx->pc = 0x1B2DB0u;
    // 0x1b2db0: 0xc06cbb0  jal         func_1B2EC0
    ctx->pc = 0x1B2DB0u;
    SET_GPR_U32(ctx, 31, 0x1B2DB8u);
    ctx->pc = 0x1B2EC0u;
    if (runtime->hasFunction(0x1B2EC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B2EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DB8u; }
        if (ctx->pc != 0x1B2DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2EC0_0x1b2ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DB8u; }
        if (ctx->pc != 0x1B2DB8u) { return; }
    }
    ctx->pc = 0x1B2DB8u;
    // 0x1b2db8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1b2db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b2dbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2dc0: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x1B2DC0u;
    SET_GPR_U32(ctx, 31, 0x1B2DC8u);
    ctx->pc = 0x1B2DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DC0u;
            // 0x1b2dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DC8u; }
        if (ctx->pc != 0x1B2DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DC8u; }
        if (ctx->pc != 0x1B2DC8u) { return; }
    }
    ctx->pc = 0x1B2DC8u;
    // 0x1b2dc8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b2dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b2dcc: 0x2623ffda  addiu       $v1, $s1, -0x26
    ctx->pc = 0x1b2dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967258));
    // 0x1b2dd0: 0x8c44cc6c  lw          $a0, -0x3394($v0)
    ctx->pc = 0x1b2dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954092)));
    // 0x1b2dd4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1b2dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b2dd8: 0xa0720025  sb          $s2, 0x25($v1)
    ctx->pc = 0x1b2dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 37), (uint8_t)GPR_U32(ctx, 18));
    // 0x1b2ddc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b2ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b2de0: 0xac44cb0c  sw          $a0, -0x34F4($v0)
    ctx->pc = 0x1b2de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953740), GPR_U32(ctx, 4));
    // 0x1b2de4: 0xc04f87e  jal         func_13E1F8
    ctx->pc = 0x1B2DE4u;
    SET_GPR_U32(ctx, 31, 0x1B2DECu);
    ctx->pc = 0x1B2DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DE4u;
            // 0x1b2de8: 0xa060002f  sb          $zero, 0x2F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 47), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E1F8u;
    if (runtime->hasFunction(0x13E1F8u)) {
        auto targetFn = runtime->lookupFunction(0x13E1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DECu; }
        if (ctx->pc != 0x1B2DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e1f8_0x13e2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DECu; }
        if (ctx->pc != 0x1B2DECu) { return; }
    }
    ctx->pc = 0x1B2DECu;
    // 0x1b2dec: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x1b2decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x1b2df0: 0x3463e417  ori         $v1, $v1, 0xE417
    ctx->pc = 0x1b2df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)58391);
    // 0x1b2df4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1b2df4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b2df8: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1B2DF8u;
    {
        const bool branch_taken_0x1b2df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DF8u;
            // 0x1b2dfc: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2df8) {
            ctx->pc = 0x1B2EA0u;
            goto label_1b2ea0;
        }
    }
    ctx->pc = 0x1B2E00u;
    // 0x1b2e00: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b2e04: 0x8c43cac8  lw          $v1, -0x3538($v0)
    ctx->pc = 0x1b2e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953672)));
    // 0x1b2e08: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b2e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b2e0c: 0x8c46e84c  lw          $a2, -0x17B4($v0)
    ctx->pc = 0x1b2e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1b2e10: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x1b2e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1b2e14: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x1b2e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1b2e18: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1b2e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1b2e1c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1b2e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1b2e20: 0x40f809  jalr        $v0
    ctx->pc = 0x1B2E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B2E28u);
        ctx->pc = 0x1B2E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E20u;
            // 0x1b2e24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B2E28u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2E48u: goto label_1b2e48;
            case 0x1B2E6Cu: goto label_1b2e6c;
            case 0x1B2EA0u: goto label_1b2ea0;
            case 0x1B2EA8u: goto label_1b2ea8;
            case 0x1B2EACu: goto label_1b2eac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E28u; }
            if (ctx->pc != 0x1B2E28u) { return; }
        }
        }
    }
    ctx->pc = 0x1B2E28u;
    // 0x1b2e28: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x1b2e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1b2e2c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1b2e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1b2e30: 0x8ca25280  lw          $v0, 0x5280($a1)
    ctx->pc = 0x1b2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 21120)));
    // 0x1b2e34: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1b2e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1b2e38: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B2E38u;
    {
        const bool branch_taken_0x1b2e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E38u;
            // 0x1b2e3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e38) {
            ctx->pc = 0x1B2E6Cu;
            goto label_1b2e6c;
        }
    }
    ctx->pc = 0x1B2E40u;
    // 0x1b2e40: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b2e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b2e44: 0x0  nop
    ctx->pc = 0x1b2e44u;
    // NOP
label_1b2e48:
    // 0x1b2e48: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1b2e48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b2e4c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2E4Cu;
    {
        const bool branch_taken_0x1b2e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E4Cu;
            // 0x1b2e50: 0x24a35280  addiu       $v1, $a1, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 21120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e4c) {
            ctx->pc = 0x1B2E6Cu;
            goto label_1b2e6c;
        }
    }
    ctx->pc = 0x1B2E54u;
    // 0x1b2e54: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b2e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b2e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2e5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b2e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2e60: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1b2e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1b2e64: 0x5482fff8  bnel        $a0, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B2E64u;
    {
        const bool branch_taken_0x1b2e64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b2e64) {
            ctx->pc = 0x1B2E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E64u;
            // 0x1b2e68: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2E48u;
            runtime->cooperativeGuestYield();
            goto label_1b2e48;
        }
    }
    ctx->pc = 0x1B2E6Cu;
label_1b2e6c:
    // 0x1b2e6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b2e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2e70: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b2e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b2e74: 0xc06eff8  jal         func_1BBFE0
    ctx->pc = 0x1B2E74u;
    SET_GPR_U32(ctx, 31, 0x1B2E7Cu);
    ctx->pc = 0x1B2E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E74u;
            // 0x1b2e78: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBFE0u;
    if (runtime->hasFunction(0x1BBFE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E7Cu; }
        if (ctx->pc != 0x1B2E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBFE0_0x1bbfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E7Cu; }
        if (ctx->pc != 0x1B2E7Cu) { return; }
    }
    ctx->pc = 0x1B2E7Cu;
    // 0x1b2e7c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1b2e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1b2e80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2e84: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b2e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b2e88: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1b2e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1b2e8c: 0xaca2cab0  sw          $v0, -0x3550($a1)
    ctx->pc = 0x1b2e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294953648), GPR_U32(ctx, 2));
    // 0x1b2e90: 0xac60cab4  sw          $zero, -0x354C($v1)
    ctx->pc = 0x1b2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953652), GPR_U32(ctx, 0));
    // 0x1b2e94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2E94u;
    {
        const bool branch_taken_0x1b2e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E94u;
            // 0x1b2e98: 0xac80cab8  sw          $zero, -0x3548($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294953656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e94) {
            ctx->pc = 0x1B2EA8u;
            goto label_1b2ea8;
        }
    }
    ctx->pc = 0x1B2E9Cu;
    // 0x1b2e9c: 0x0  nop
    ctx->pc = 0x1b2e9cu;
    // NOP
label_1b2ea0:
    // 0x1b2ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2ea4: 0xac62cb14  sw          $v0, -0x34EC($v1)
    ctx->pc = 0x1b2ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953748), GPR_U32(ctx, 2));
label_1b2ea8:
    // 0x1b2ea8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b2ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b2eac:
    // 0x1b2eac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b2eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2eb0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b2eb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2EB8u;
            // 0x1b2ebc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2E48u: goto label_1b2e48;
            case 0x1B2E6Cu: goto label_1b2e6c;
            case 0x1B2EA0u: goto label_1b2ea0;
            case 0x1B2EA8u: goto label_1b2ea8;
            case 0x1B2EACu: goto label_1b2eac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B2EC0u;
}
