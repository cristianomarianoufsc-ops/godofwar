#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017ED88
// Address: 0x17ed88 - 0x17ee70
void sub_0017ED88_0x17ed88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017ED88_0x17ed88");
#endif

    ctx->pc = 0x17ed88u;

    // 0x17ed88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17ed88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17ed8c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17ed8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17ed90: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x17ed90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x17ed94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17ed94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed98: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17ed98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17ed9c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x17ed9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17eda0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x17eda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17eda4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17eda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17eda8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x17eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17edac: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17EDACu;
    {
        const bool branch_taken_0x17edac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x17EDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EDACu;
            // 0x17edb0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17edac) {
            ctx->pc = 0x17EDDCu;
            goto label_17eddc;
        }
    }
    ctx->pc = 0x17EDB4u;
    // 0x17edb4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x17edb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17edb8:
    // 0x17edb8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x17edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17edbc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x17edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x17edc0: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x17edc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x17edc4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x17edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x17edc8: 0x40f809  jalr        $v0
    ctx->pc = 0x17EDC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17EDD0u);
        ctx->pc = 0x17EDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EDC8u;
            // 0x17edcc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17EDD0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17EDB8u: goto label_17edb8;
            case 0x17EDDCu: goto label_17eddc;
            case 0x17EDF0u: goto label_17edf0;
            case 0x17EE38u: goto label_17ee38;
            case 0x17EE4Cu: goto label_17ee4c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17EDD0u; }
            if (ctx->pc != 0x17EDD0u) { return; }
        }
        }
    }
    ctx->pc = 0x17EDD0u;
    // 0x17edd0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x17edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17edd4: 0x5642fff8  bnel        $s2, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17EDD4u;
    {
        const bool branch_taken_0x17edd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x17edd4) {
            ctx->pc = 0x17EDD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17EDD4u;
            // 0x17edd8: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17EDB8u;
            runtime->cooperativeGuestYield();
            goto label_17edb8;
        }
    }
    ctx->pc = 0x17EDDCu;
label_17eddc:
    // 0x17eddc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x17eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17ede0: 0x26530008  addiu       $s3, $s2, 0x8
    ctx->pc = 0x17ede0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x17ede4: 0x10530014  beq         $v0, $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x17EDE4u;
    {
        const bool branch_taken_0x17ede4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x17EDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EDE4u;
            // 0x17ede8: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ede4) {
            ctx->pc = 0x17EE38u;
            goto label_17ee38;
        }
    }
    ctx->pc = 0x17EDECu;
    // 0x17edec: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x17edecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_17edf0:
    // 0x17edf0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17edf4: 0x8c44c788  lw          $a0, -0x3878($v0)
    ctx->pc = 0x17edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952840)));
    // 0x17edf8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17edfc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x17edfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee00: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x17ee00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17ee04: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x17ee04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17ee08: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x17EE08u;
    SET_GPR_U32(ctx, 31, 0x17EE10u);
    ctx->pc = 0x17EE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE08u;
            // 0x17ee0c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE10u; }
        if (ctx->pc != 0x17EE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE10u; }
        if (ctx->pc != 0x17EE10u) { return; }
    }
    ctx->pc = 0x17EE10u;
    // 0x17ee10: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x17ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17ee14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ee14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee18: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x17ee18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17ee1c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x17ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x17ee20: 0x40f809  jalr        $v0
    ctx->pc = 0x17EE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17EE28u);
        ctx->pc = 0x17EE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE20u;
            // 0x17ee24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17EE28u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17EDB8u: goto label_17edb8;
            case 0x17EDDCu: goto label_17eddc;
            case 0x17EDF0u: goto label_17edf0;
            case 0x17EE38u: goto label_17ee38;
            case 0x17EE4Cu: goto label_17ee4c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17EE28u; }
            if (ctx->pc != 0x17EE28u) { return; }
        }
        }
    }
    ctx->pc = 0x17EE28u;
    // 0x17ee28: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x17ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17ee2c: 0x5453fff0  bnel        $v0, $s3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x17EE2Cu;
    {
        const bool branch_taken_0x17ee2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x17ee2c) {
            ctx->pc = 0x17EE30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE2Cu;
            // 0x17ee30: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17EDF0u;
            runtime->cooperativeGuestYield();
            goto label_17edf0;
        }
    }
    ctx->pc = 0x17EE34u;
    // 0x17ee34: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x17ee34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_17ee38:
    // 0x17ee38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EE38u;
    {
        const bool branch_taken_0x17ee38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE38u;
            // 0x17ee3c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee38) {
            ctx->pc = 0x17EE4Cu;
            goto label_17ee4c;
        }
    }
    ctx->pc = 0x17EE40u;
    // 0x17ee40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17ee40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee44: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x17EE44u;
    SET_GPR_U32(ctx, 31, 0x17EE4Cu);
    ctx->pc = 0x17EE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE44u;
            // 0x17ee48: 0x8c44c78c  lw          $a0, -0x3874($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952844)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE4Cu; }
        if (ctx->pc != 0x17EE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE4Cu; }
        if (ctx->pc != 0x17EE4Cu) { return; }
    }
    ctx->pc = 0x17EE4Cu;
label_17ee4c:
    // 0x17ee4c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17ee4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ee50: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17ee50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ee54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17ee54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ee58: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x17ee58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ee5c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x17ee5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ee60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ee60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ee64: 0x3e00008  jr          $ra
    ctx->pc = 0x17EE64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE64u;
            // 0x17ee68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17EDB8u: goto label_17edb8;
            case 0x17EDDCu: goto label_17eddc;
            case 0x17EDF0u: goto label_17edf0;
            case 0x17EE38u: goto label_17ee38;
            case 0x17EE4Cu: goto label_17ee4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17EE6Cu;
    // 0x17ee6c: 0x0  nop
    ctx->pc = 0x17ee6cu;
    // NOP
}
