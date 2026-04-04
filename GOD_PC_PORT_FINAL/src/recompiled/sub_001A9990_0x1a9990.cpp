#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9990
// Address: 0x1a9990 - 0x1a9ac8
void sub_001A9990_0x1a9990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9990_0x1a9990");
#endif

    ctx->pc = 0x1a9990u;

    // 0x1a9990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9998: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a9998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a999c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1a999cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a99a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a99a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a99a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a99a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99a8: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x1a99a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1a99ac: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1a99acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a99b0: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a99b4: 0x40f809  jalr        $v0
    ctx->pc = 0x1A99B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A99BCu);
        ctx->pc = 0x1A99B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A99B4u;
            // 0x1a99b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A99BCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A99D8u: goto label_1a99d8;
            case 0x1A9A20u: goto label_1a9a20;
            case 0x1A9A2Cu: goto label_1a9a2c;
            case 0x1A9A30u: goto label_1a9a30;
            case 0x1A9A48u: goto label_1a9a48;
            case 0x1A9A78u: goto label_1a9a78;
            case 0x1A9AA4u: goto label_1a9aa4;
            case 0x1A9AB4u: goto label_1a9ab4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A99BCu; }
            if (ctx->pc != 0x1A99BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1A99BCu;
    // 0x1a99bc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1a99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1a99c0: 0x8c432620  lw          $v1, 0x2620($v0)
    ctx->pc = 0x1a99c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9760)));
    // 0x1a99c4: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x1a99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
    // 0x1a99c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a99c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1a99cc: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A99CCu;
    {
        const bool branch_taken_0x1a99cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A99D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A99CCu;
            // 0x1a99d0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a99cc) {
            ctx->pc = 0x1A9A2Cu;
            goto label_1a9a2c;
        }
    }
    ctx->pc = 0x1A99D4u;
    // 0x1a99d4: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1a99d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a99d8:
    // 0x1a99d8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1a99d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a99dc: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1a99dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1a99e0: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A99E0u;
    {
        const bool branch_taken_0x1a99e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A99E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A99E0u;
            // 0x1a99e4: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a99e0) {
            ctx->pc = 0x1A9A20u;
            goto label_1a9a20;
        }
    }
    ctx->pc = 0x1A99E8u;
    // 0x1a99e8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1a99e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a99ec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a99ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a99f0: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x1a99f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a99f4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1a99f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99f8: 0x8c44ca10  lw          $a0, -0x35F0($v0)
    ctx->pc = 0x1a99f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953488)));
    // 0x1a99fc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1a99fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1a9a00: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1a9a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a9a04: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1a9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a9a08: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a9a08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a9a0c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1a9a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1a9a10: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1A9A10u;
    SET_GPR_U32(ctx, 31, 0x1A9A18u);
    ctx->pc = 0x1A9A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A10u;
            // 0x1a9a14: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A18u; }
        if (ctx->pc != 0x1A9A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A18u; }
        if (ctx->pc != 0x1A9A18u) { return; }
    }
    ctx->pc = 0x1A9A18u;
    // 0x1a9a18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9A18u;
    {
        const bool branch_taken_0x1a9a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A18u;
            // 0x1a9a1c: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a18) {
            ctx->pc = 0x1A9A30u;
            goto label_1a9a30;
        }
    }
    ctx->pc = 0x1A9A20u;
label_1a9a20:
    // 0x1a9a20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a9a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9a24: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1A9A24u;
    {
        const bool branch_taken_0x1a9a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A24u;
            // 0x1a9a28: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a24) {
            ctx->pc = 0x1A99D8u;
            runtime->cooperativeGuestYield();
            goto label_1a99d8;
        }
    }
    ctx->pc = 0x1A9A2Cu;
label_1a9a2c:
    // 0x1a9a2c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1a9a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_1a9a30:
    // 0x1a9a30: 0x8c432630  lw          $v1, 0x2630($v0)
    ctx->pc = 0x1a9a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9776)));
    // 0x1a9a34: 0x24422630  addiu       $v0, $v0, 0x2630
    ctx->pc = 0x1a9a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9776));
    // 0x1a9a38: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a9a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1a9a3c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A9A3Cu;
    {
        const bool branch_taken_0x1a9a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A3Cu;
            // 0x1a9a40: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a3c) {
            ctx->pc = 0x1A9AB4u;
            goto label_1a9ab4;
        }
    }
    ctx->pc = 0x1A9A44u;
    // 0x1a9a44: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1a9a44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a9a48:
    // 0x1a9a48: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1a9a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a9a4c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1a9a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1a9a50: 0x16030014  bne         $s0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A9A50u;
    {
        const bool branch_taken_0x1a9a50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A9A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A50u;
            // 0x1a9a54: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a50) {
            ctx->pc = 0x1A9AA4u;
            goto label_1a9aa4;
        }
    }
    ctx->pc = 0x1A9A58u;
    // 0x1a9a58: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x1a9a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1a9a5c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9A5Cu;
    {
        const bool branch_taken_0x1a9a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9a5c) {
            ctx->pc = 0x1A9A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A5Cu;
            // 0x1a9a60: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9A78u;
            goto label_1a9a78;
        }
    }
    ctx->pc = 0x1A9A64u;
    // 0x1a9a64: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1a9a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1a9a68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a9a6c: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x1a9a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x1a9a70: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1a9a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a9a74: 0x0  nop
    ctx->pc = 0x1a9a74u;
    // NOP
label_1a9a78:
    // 0x1a9a78: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a9a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a9a7c: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x1a9a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a9a80: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1a9a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a84: 0x8c44ca18  lw          $a0, -0x35E8($v0)
    ctx->pc = 0x1a9a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953496)));
    // 0x1a9a88: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1a9a88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1a9a8c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1a9a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a9a90: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1a9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a9a94: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a9a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a9a98: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1a9a98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1a9a9c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1A9A9Cu;
    SET_GPR_U32(ctx, 31, 0x1A9AA4u);
    ctx->pc = 0x1A9AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A9Cu;
            // 0x1a9aa0: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9AA4u; }
        if (ctx->pc != 0x1A9AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9AA4u; }
        if (ctx->pc != 0x1A9AA4u) { return; }
    }
    ctx->pc = 0x1A9AA4u;
label_1a9aa4:
    // 0x1a9aa4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a9aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a9aa8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a9aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9aac: 0x1462ffe6  bne         $v1, $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1A9AACu;
    {
        const bool branch_taken_0x1a9aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9AACu;
            // 0x1a9ab0: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9aac) {
            ctx->pc = 0x1A9A48u;
            runtime->cooperativeGuestYield();
            goto label_1a9a48;
        }
    }
    ctx->pc = 0x1A9AB4u;
label_1a9ab4:
    // 0x1a9ab4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a9ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9ab8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a9ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9abc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9ABCu;
            // 0x1a9ac0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A99D8u: goto label_1a99d8;
            case 0x1A9A20u: goto label_1a9a20;
            case 0x1A9A2Cu: goto label_1a9a2c;
            case 0x1A9A30u: goto label_1a9a30;
            case 0x1A9A48u: goto label_1a9a48;
            case 0x1A9A78u: goto label_1a9a78;
            case 0x1A9AA4u: goto label_1a9aa4;
            case 0x1A9AB4u: goto label_1a9ab4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9AC4u;
    // 0x1a9ac4: 0x0  nop
    ctx->pc = 0x1a9ac4u;
    // NOP
}
