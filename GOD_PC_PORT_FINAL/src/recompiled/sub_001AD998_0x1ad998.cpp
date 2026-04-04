#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AD998
// Address: 0x1ad998 - 0x1adab8
void sub_001AD998_0x1ad998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD998_0x1ad998");
#endif

    ctx->pc = 0x1ad998u;

    // 0x1ad998: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ad998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ad99c: 0x3c03ff9c  lui         $v1, 0xFF9C
    ctx->pc = 0x1ad99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65436 << 16));
    // 0x1ad9a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ad9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ad9a4: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1ad9a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x1ad9a8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1ad9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1ad9ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ad9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ad9b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ad9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ad9b4: 0x3463e00f  ori         $v1, $v1, 0xE00F
    ctx->pc = 0x1ad9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57359);
    // 0x1ad9b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ad9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ad9bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ad9bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9c0: 0x8e07bcf8  lw          $a3, -0x4308($s0)
    ctx->pc = 0x1ad9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1ad9c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ad9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad9c8: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1ad9c8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x1ad9cc: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1ad9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x1ad9d0: 0x8ce41044  lw          $a0, 0x1044($a3)
    ctx->pc = 0x1ad9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4164)));
    // 0x1ad9d4: 0x2502f170  addiu       $v0, $t0, -0xE90
    ctx->pc = 0x1ad9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963568));
    // 0x1ad9d8: 0xad03f170  sw          $v1, -0xE90($t0)
    ctx->pc = 0x1ad9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294963568), GPR_U32(ctx, 3));
    // 0x1ad9dc: 0x24a57d18  addiu       $a1, $a1, 0x7D18
    ctx->pc = 0x1ad9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32024));
    // 0x1ad9e0: 0xae26cad4  sw          $a2, -0x352C($s1)
    ctx->pc = 0x1ad9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953684), GPR_U32(ctx, 6));
    // 0x1ad9e4: 0xace41054  sw          $a0, 0x1054($a3)
    ctx->pc = 0x1ad9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4180), GPR_U32(ctx, 4));
    // 0x1ad9e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ad9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9ec: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1ad9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1ad9f0: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1ad9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1ad9f4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ad9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ad9f8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1ad9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1ad9fc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1ad9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1ada00: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1ada00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1ada04: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1ada04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1ada08: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1ada08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1ada0c: 0xc069704  jal         func_1A5C10
    ctx->pc = 0x1ADA0Cu;
    SET_GPR_U32(ctx, 31, 0x1ADA14u);
    ctx->pc = 0x1ADA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA0Cu;
            // 0x1ada10: 0xac520020  sw          $s2, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C10u;
    if (runtime->hasFunction(0x1A5C10u)) {
        auto targetFn = runtime->lookupFunction(0x1A5C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA14u; }
        if (ctx->pc != 0x1ADA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5C10_0x1a5c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA14u; }
        if (ctx->pc != 0x1ADA14u) { return; }
    }
    ctx->pc = 0x1ADA14u;
    // 0x1ada14: 0x8e04bcf8  lw          $a0, -0x4308($s0)
    ctx->pc = 0x1ada14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1ada18: 0xc04797a  jal         func_11E5E8
    ctx->pc = 0x1ADA18u;
    SET_GPR_U32(ctx, 31, 0x1ADA20u);
    ctx->pc = 0x1ADA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA18u;
            // 0x1ada1c: 0x70022ca9  por         $a1, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E5E8u;
    if (runtime->hasFunction(0x11E5E8u)) {
        auto targetFn = runtime->lookupFunction(0x11E5E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA20u; }
        if (ctx->pc != 0x1ADA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E5E8_0x11e5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA20u; }
        if (ctx->pc != 0x1ADA20u) { return; }
    }
    ctx->pc = 0x1ADA20u;
    // 0x1ada20: 0x8e04bcf8  lw          $a0, -0x4308($s0)
    ctx->pc = 0x1ada20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1ada24: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1ada24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1ada28: 0x8c452608  lw          $a1, 0x2608($v0)
    ctx->pc = 0x1ada28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9736)));
    // 0x1ada2c: 0x8c83103c  lw          $v1, 0x103C($a0)
    ctx->pc = 0x1ada2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4156)));
    // 0x1ada30: 0x24422608  addiu       $v0, $v0, 0x2608
    ctx->pc = 0x1ada30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9736));
    // 0x1ada34: 0xae20cad4  sw          $zero, -0x352C($s1)
    ctx->pc = 0x1ada34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953684), GPR_U32(ctx, 0));
    // 0x1ada38: 0xac831054  sw          $v1, 0x1054($a0)
    ctx->pc = 0x1ada38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4180), GPR_U32(ctx, 3));
    // 0x1ada3c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ada3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1ada40: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1ADA40u;
    {
        const bool branch_taken_0x1ada40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ADA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA40u;
            // 0x1ada44: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada40) {
            ctx->pc = 0x1ADAA0u;
            goto label_1adaa0;
        }
    }
    ctx->pc = 0x1ADA48u;
label_1ada48:
    // 0x1ada48: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ada48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ada4c: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1ada4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ada50: 0xc06a732  jal         func_1A9CC8
    ctx->pc = 0x1ADA50u;
    SET_GPR_U32(ctx, 31, 0x1ADA58u);
    ctx->pc = 0x1ADA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA50u;
            // 0x1ada54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9CC8u;
    if (runtime->hasFunction(0x1A9CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A9CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA58u; }
        if (ctx->pc != 0x1ADA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9CC8_0x1a9cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA58u; }
        if (ctx->pc != 0x1ADA58u) { return; }
    }
    ctx->pc = 0x1ADA58u;
    // 0x1ada58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ada58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada5c: 0x9642002a  lhu         $v0, 0x2A($s2)
    ctx->pc = 0x1ada5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x1ada60: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADA60u;
    {
        const bool branch_taken_0x1ada60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ada60) {
            ctx->pc = 0x1ADA64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA60u;
            // 0x1ada64: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ADA74u;
            goto label_1ada74;
        }
    }
    ctx->pc = 0x1ADA68u;
    // 0x1ada68: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ADA68u;
    {
        const bool branch_taken_0x1ada68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA68u;
            // 0x1ada6c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada68) {
            ctx->pc = 0x1ADA90u;
            goto label_1ada90;
        }
    }
    ctx->pc = 0x1ADA70u;
    // 0x1ada70: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x1ada70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1ada74:
    // 0x1ada74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ada74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ada78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ada7c: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1ada7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ada80: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1ada80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1ada84: 0x40f809  jalr        $v0
    ctx->pc = 0x1ADA84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ADA8Cu);
        ctx->pc = 0x1ADA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA84u;
            // 0x1ada88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ADA8Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADA48u: goto label_1ada48;
            case 0x1ADA74u: goto label_1ada74;
            case 0x1ADA90u: goto label_1ada90;
            case 0x1ADAA0u: goto label_1adaa0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA8Cu; }
            if (ctx->pc != 0x1ADA8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1ADA8Cu;
    // 0x1ada8c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ada8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1ada90:
    // 0x1ada90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ada90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ada94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ada94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ada98: 0x1443ffeb  bne         $v0, $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1ADA98u;
    {
        const bool branch_taken_0x1ada98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ADA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA98u;
            // 0x1ada9c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada98) {
            ctx->pc = 0x1ADA48u;
            runtime->cooperativeGuestYield();
            goto label_1ada48;
        }
    }
    ctx->pc = 0x1ADAA0u;
label_1adaa0:
    // 0x1adaa0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1adaa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adaa4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1adaa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adaa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1adaa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adaac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1adaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADAB0u;
            // 0x1adab4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADA48u: goto label_1ada48;
            case 0x1ADA74u: goto label_1ada74;
            case 0x1ADA90u: goto label_1ada90;
            case 0x1ADAA0u: goto label_1adaa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ADAB8u;
}
