#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026FA68
// Address: 0x26fa68 - 0x26fbd8
void sub_0026FA68_0x26fa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FA68_0x26fa68");
#endif

    ctx->pc = 0x26fa68u;

    // 0x26fa68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26fa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26fa6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26fa70: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x26fa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x26fa74: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x26fa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x26fa78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26fa78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fa7c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x26fa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x26fa80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26fa80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fa84: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x26fa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x26fa88: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x26fa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x26fa8c: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FA8Cu;
    {
        const bool branch_taken_0x26fa8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x26FA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA8Cu;
            // 0x26fa90: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa8c) {
            ctx->pc = 0x26FAA0u;
            goto label_26faa0;
        }
    }
    ctx->pc = 0x26FA94u;
    // 0x26fa94: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x26fa94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x26fa98: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26FA98u;
    {
        const bool branch_taken_0x26fa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA98u;
            // 0x26fa9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa98) {
            ctx->pc = 0x26FADCu;
            goto label_26fadc;
        }
    }
    ctx->pc = 0x26FAA0u;
label_26faa0:
    // 0x26faa0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x26faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26faa4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FAA4u;
    {
        const bool branch_taken_0x26faa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FAA4u;
            // 0x26faa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26faa4) {
            ctx->pc = 0x26FAB8u;
            goto label_26fab8;
        }
    }
    ctx->pc = 0x26FAACu;
    // 0x26faac: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x26faacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x26fab0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fab4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x26fab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_26fab8:
    // 0x26fab8: 0xc09bdec  jal         func_26F7B0
    ctx->pc = 0x26FAB8u;
    SET_GPR_U32(ctx, 31, 0x26FAC0u);
    ctx->pc = 0x26FABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FAB8u;
            // 0x26fabc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F7B0u;
    if (runtime->hasFunction(0x26F7B0u)) {
        auto targetFn = runtime->lookupFunction(0x26F7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAC0u; }
        if (ctx->pc != 0x26FAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26f7b0_0x26fa68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAC0u; }
        if (ctx->pc != 0x26FAC0u) { return; }
    }
    ctx->pc = 0x26FAC0u;
    // 0x26fac0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FAC0u;
    {
        const bool branch_taken_0x26fac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FAC0u;
            // 0x26fac4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fac0) {
            ctx->pc = 0x26FAD4u;
            goto label_26fad4;
        }
    }
    ctx->pc = 0x26FAC8u;
    // 0x26fac8: 0xc09c062  jal         func_270188
    ctx->pc = 0x26FAC8u;
    SET_GPR_U32(ctx, 31, 0x26FAD0u);
    ctx->pc = 0x26FACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FAC8u;
            // 0x26facc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270188u;
    if (runtime->hasFunction(0x270188u)) {
        auto targetFn = runtime->lookupFunction(0x270188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAD0u; }
        if (ctx->pc != 0x26FAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_270188_0x270258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAD0u; }
        if (ctx->pc != 0x26FAD0u) { return; }
    }
    ctx->pc = 0x26FAD0u;
    // 0x26fad0: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x26fad0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26fad4:
    // 0x26fad4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x26FAD4u;
    {
        const bool branch_taken_0x26fad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FAD4u;
            // 0x26fad8: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fad4) {
            ctx->pc = 0x26FB44u;
            goto label_26fb44;
        }
    }
    ctx->pc = 0x26FADCu;
label_26fadc:
    // 0x26fadc: 0xc09bdec  jal         func_26F7B0
    ctx->pc = 0x26FADCu;
    SET_GPR_U32(ctx, 31, 0x26FAE4u);
    ctx->pc = 0x26FAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FADCu;
            // 0x26fae0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F7B0u;
    if (runtime->hasFunction(0x26F7B0u)) {
        auto targetFn = runtime->lookupFunction(0x26F7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAE4u; }
        if (ctx->pc != 0x26FAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26f7b0_0x26fa68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAE4u; }
        if (ctx->pc != 0x26FAE4u) { return; }
    }
    ctx->pc = 0x26FAE4u;
    // 0x26fae4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fae8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26fae8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26faec: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x26FAECu;
    {
        const bool branch_taken_0x26faec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FAECu;
            // 0x26faf0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26faec) {
            ctx->pc = 0x26FB40u;
            goto label_26fb40;
        }
    }
    ctx->pc = 0x26FAF4u;
    // 0x26faf4: 0x8e460040  lw          $a2, 0x40($s2)
    ctx->pc = 0x26faf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x26faf8: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x26FAF8u;
    {
        const bool branch_taken_0x26faf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FAF8u;
            // 0x26fafc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26faf8) {
            ctx->pc = 0x26FB44u;
            goto label_26fb44;
        }
    }
    ctx->pc = 0x26FB00u;
    // 0x26fb00: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x26fb00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x26fb04: 0x50e00010  beql        $a3, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x26FB04u;
    {
        const bool branch_taken_0x26fb04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fb04) {
            ctx->pc = 0x26FB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB04u;
            // 0x26fb08: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26FB48u;
            goto label_26fb48;
        }
    }
    ctx->pc = 0x26FB0Cu;
    // 0x26fb0c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x26fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x26fb10: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x26fb10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fb14: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x26fb14u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fb18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x26fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fb1c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x26fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26fb20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26fb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fb24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26fb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fb28: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x26fb28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x26fb2c: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x26fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x26fb30: 0xe0f809  jalr        $a3
    ctx->pc = 0x26FB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x26FB38u);
        ctx->pc = 0x26FB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB30u;
            // 0x26fb34: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26FB38u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26FAA0u: goto label_26faa0;
            case 0x26FAB8u: goto label_26fab8;
            case 0x26FAD4u: goto label_26fad4;
            case 0x26FADCu: goto label_26fadc;
            case 0x26FB40u: goto label_26fb40;
            case 0x26FB44u: goto label_26fb44;
            case 0x26FB48u: goto label_26fb48;
            case 0x26FB88u: goto label_26fb88;
            case 0x26FBBCu: goto label_26fbbc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26FB38u; }
            if (ctx->pc != 0x26FB38u) { return; }
        }
        }
    }
    ctx->pc = 0x26FB38u;
    // 0x26fb38: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x26fb38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fb3c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x26fb3cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26fb40:
    // 0x26fb40: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x26fb40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26fb44:
    // 0x26fb44: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x26fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_26fb48:
    // 0x26fb48: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x26FB48u;
    {
        const bool branch_taken_0x26fb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB48u;
            // 0x26fb4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb48) {
            ctx->pc = 0x26FBBCu;
            goto label_26fbbc;
        }
    }
    ctx->pc = 0x26FB50u;
    // 0x26fb50: 0x8e250128  lw          $a1, 0x128($s1)
    ctx->pc = 0x26fb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x26fb54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26fb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fb58: 0xc09c360  jal         func_270D80
    ctx->pc = 0x26FB58u;
    SET_GPR_U32(ctx, 31, 0x26FB60u);
    ctx->pc = 0x26FB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB58u;
            // 0x26fb5c: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270D80u;
    if (runtime->hasFunction(0x270D80u)) {
        auto targetFn = runtime->lookupFunction(0x270D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FB60u; }
        if (ctx->pc != 0x26FB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270D80_0x270d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FB60u; }
        if (ctx->pc != 0x26FB60u) { return; }
    }
    ctx->pc = 0x26FB60u;
    // 0x26fb60: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x26fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x26fb64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26fb68: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26FB68u;
    {
        const bool branch_taken_0x26fb68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26fb68) {
            ctx->pc = 0x26FB6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB68u;
            // 0x26fb6c: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26FB88u;
            goto label_26fb88;
        }
    }
    ctx->pc = 0x26FB70u;
    // 0x26fb70: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FB70u;
    {
        const bool branch_taken_0x26fb70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fb70) {
            ctx->pc = 0x26FB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB70u;
            // 0x26fb74: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26FB88u;
            goto label_26fb88;
        }
    }
    ctx->pc = 0x26FB78u;
    // 0x26fb78: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x26fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x26fb7c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x26fb7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26fb80: 0xae220130  sw          $v0, 0x130($s1)
    ctx->pc = 0x26fb80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
    // 0x26fb84: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x26fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_26fb88:
    // 0x26fb88: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x26fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x26fb8c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x26fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26fb90: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x26fb90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x26fb94: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x26fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x26fb98: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26FB98u;
    {
        const bool branch_taken_0x26fb98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB98u;
            // 0x26fb9c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb98) {
            ctx->pc = 0x26FBBCu;
            goto label_26fbbc;
        }
    }
    ctx->pc = 0x26FBA0u;
    // 0x26fba0: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x26fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x26fba4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x26fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26fba8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26fbac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26fbb0: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x26fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
    // 0x26fbb4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x26fbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x26fbb8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x26fbb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26fbbc:
    // 0x26fbbc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26fbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26fbc0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x26fbc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26fbc4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x26fbc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26fbc8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x26fbc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26fbcc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x26fbccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x26FBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FBD0u;
            // 0x26fbd4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26FAA0u: goto label_26faa0;
            case 0x26FAB8u: goto label_26fab8;
            case 0x26FAD4u: goto label_26fad4;
            case 0x26FADCu: goto label_26fadc;
            case 0x26FB40u: goto label_26fb40;
            case 0x26FB44u: goto label_26fb44;
            case 0x26FB48u: goto label_26fb48;
            case 0x26FB88u: goto label_26fb88;
            case 0x26FBBCu: goto label_26fbbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26FBD8u;
}
