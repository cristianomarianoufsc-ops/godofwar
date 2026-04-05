#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011CA70
// Address: 0x11ca70 - 0x11cbd0
void sub_0011CA70_0x11ca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CA70_0x11ca70");
#endif

    ctx->pc = 0x11ca70u;

    // 0x11ca70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11ca70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11ca74: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11ca74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x11ca78: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x11ca78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x11ca7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11ca7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca80: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x11ca80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x11ca84: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11ca84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x11ca88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x11ca8c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x11ca8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x11ca90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ca90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ca94: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11ca98: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x11ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x11ca9c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11caa0: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x11caa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x11caa4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x11caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x11caa8: 0x40f809  jalr        $v0
    ctx->pc = 0x11CAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CAB0u);
        ctx->pc = 0x11CAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CAA8u;
            // 0x11caac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11CAB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CAC0u: goto label_11cac0;
            case 0x11CB10u: goto label_11cb10;
            case 0x11CB40u: goto label_11cb40;
            case 0x11CB4Cu: goto label_11cb4c;
            case 0x11CB98u: goto label_11cb98;
            case 0x11CBC0u: goto label_11cbc0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11CAB0u; }
            if (ctx->pc != 0x11CAB0u) { return; }
        }
        }
    }
    ctx->pc = 0x11CAB0u;
    // 0x11cab0: 0x8e110024  lw          $s1, 0x24($s0)
    ctx->pc = 0x11cab0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x11cab4: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x11CAB4u;
    {
        const bool branch_taken_0x11cab4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CAB4u;
            // 0x11cab8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cab4) {
            ctx->pc = 0x11CB4Cu;
            goto label_11cb4c;
        }
    }
    ctx->pc = 0x11CABCu;
    // 0x11cabc: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x11cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
label_11cac0:
    // 0x11cac0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11cac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cac4: 0x51800b  movn        $s0, $v0, $s1
    ctx->pc = 0x11cac4u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x11cac8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x11cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x11cacc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11CACCu;
    {
        const bool branch_taken_0x11cacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CACCu;
            // 0x11cad0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cacc) {
            ctx->pc = 0x11CB40u;
            goto label_11cb40;
        }
    }
    ctx->pc = 0x11CAD4u;
    // 0x11cad4: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x11cad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x11cad8: 0x1265000d  beq         $s3, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x11CAD8u;
    {
        const bool branch_taken_0x11cad8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x11CADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CAD8u;
            // 0x11cadc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cad8) {
            ctx->pc = 0x11CB10u;
            goto label_11cb10;
        }
    }
    ctx->pc = 0x11CAE0u;
    // 0x11cae0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x11cae0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11cae4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x11cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x11cae8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11caec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11caecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11caf0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x11caf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11caf4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x11caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11caf8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11cafc: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x11cafcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x11cb00: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x11cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x11cb04: 0x40f809  jalr        $v0
    ctx->pc = 0x11CB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CB0Cu);
        ctx->pc = 0x11CB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CB04u;
            // 0x11cb08: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11CB0Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CAC0u: goto label_11cac0;
            case 0x11CB10u: goto label_11cb10;
            case 0x11CB40u: goto label_11cb40;
            case 0x11CB4Cu: goto label_11cb4c;
            case 0x11CB98u: goto label_11cb98;
            case 0x11CBC0u: goto label_11cbc0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11CB0Cu; }
            if (ctx->pc != 0x11CB0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x11CB0Cu;
    // 0x11cb0c: 0x0  nop
    ctx->pc = 0x11cb0cu;
    // NOP
label_11cb10:
    // 0x11cb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11cb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb14: 0xc0472f4  jal         func_11CBD0
    ctx->pc = 0x11CB14u;
    SET_GPR_U32(ctx, 31, 0x11CB1Cu);
    ctx->pc = 0x11CB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CB14u;
            // 0x11cb18: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CBD0u;
    if (runtime->hasFunction(0x11CBD0u)) {
        auto targetFn = runtime->lookupFunction(0x11CBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CB1Cu; }
        if (ctx->pc != 0x11CB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CBD0_0x11cbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CB1Cu; }
        if (ctx->pc != 0x11CB1Cu) { return; }
    }
    ctx->pc = 0x11CB1Cu;
    // 0x11cb1c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x11CB1Cu;
    {
        const bool branch_taken_0x11cb1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CB1Cu;
            // 0x11cb20: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb1c) {
            ctx->pc = 0x11CB40u;
            goto label_11cb40;
        }
    }
    ctx->pc = 0x11CB24u;
    // 0x11cb24: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x11cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x11cb28: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11cb2c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x11cb2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x11cb30: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x11cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x11cb34: 0x40f809  jalr        $v0
    ctx->pc = 0x11CB34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CB3Cu);
        ctx->pc = 0x11CB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CB34u;
            // 0x11cb38: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11CB3Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CAC0u: goto label_11cac0;
            case 0x11CB10u: goto label_11cb10;
            case 0x11CB40u: goto label_11cb40;
            case 0x11CB4Cu: goto label_11cb4c;
            case 0x11CB98u: goto label_11cb98;
            case 0x11CBC0u: goto label_11cbc0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11CB3Cu; }
            if (ctx->pc != 0x11CB3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x11CB3Cu;
    // 0x11cb3c: 0x0  nop
    ctx->pc = 0x11cb3cu;
    // NOP
label_11cb40:
    // 0x11cb40: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x11cb40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11cb44: 0x1620ffde  bnez        $s1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x11CB44u;
    {
        const bool branch_taken_0x11cb44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CB44u;
            // 0x11cb48: 0x2622fff8  addiu       $v0, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb44) {
            ctx->pc = 0x11CAC0u;
            runtime->cooperativeGuestYield();
            goto label_11cac0;
        }
    }
    ctx->pc = 0x11CB4Cu;
label_11cb4c:
    // 0x11cb4c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x11cb4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11cb50: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x11cb50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11cb54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x11cb54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11cb58: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x11cb58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11cb5c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x11cb5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cb60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11cb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cb64: 0x3e00008  jr          $ra
    ctx->pc = 0x11CB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CB64u;
            // 0x11cb68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CAC0u: goto label_11cac0;
            case 0x11CB10u: goto label_11cb10;
            case 0x11CB40u: goto label_11cb40;
            case 0x11CB4Cu: goto label_11cb4c;
            case 0x11CB98u: goto label_11cb98;
            case 0x11CBC0u: goto label_11cbc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CB6Cu;
    // 0x11cb6c: 0x0  nop
    ctx->pc = 0x11cb6cu;
    // NOP
    // 0x11cb70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11cb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11cb74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11cb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11cb78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11cb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11cb7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11cb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11cb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11cb84: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x11cb84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x11cb88: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x11CB88u;
    {
        const bool branch_taken_0x11cb88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cb88) {
            ctx->pc = 0x11CB8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CB88u;
            // 0x11cb8c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11CBC0u;
            goto label_11cbc0;
        }
    }
    ctx->pc = 0x11CB90u;
    // 0x11cb90: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x11cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x11cb94: 0x0  nop
    ctx->pc = 0x11cb94u;
    // NOP
label_11cb98:
    // 0x11cb98: 0x2605fff8  addiu       $a1, $s0, -0x8
    ctx->pc = 0x11cb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x11cb9c: 0x10280a  movz        $a1, $zero, $s0
    ctx->pc = 0x11cb9cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x11cba0: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x11cba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x11cba4: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x11cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x11cba8: 0x40f809  jalr        $v0
    ctx->pc = 0x11CBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CBB0u);
        ctx->pc = 0x11CBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CBA8u;
            // 0x11cbac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11CBB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CAC0u: goto label_11cac0;
            case 0x11CB10u: goto label_11cb10;
            case 0x11CB40u: goto label_11cb40;
            case 0x11CB4Cu: goto label_11cb4c;
            case 0x11CB98u: goto label_11cb98;
            case 0x11CBC0u: goto label_11cbc0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11CBB0u; }
            if (ctx->pc != 0x11CBB0u) { return; }
        }
        }
    }
    ctx->pc = 0x11CBB0u;
    // 0x11cbb0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x11cbb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11cbb4: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11CBB4u;
    {
        const bool branch_taken_0x11cbb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cbb4) {
            ctx->pc = 0x11CBB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CBB4u;
            // 0x11cbb8: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11CB98u;
            runtime->cooperativeGuestYield();
            goto label_11cb98;
        }
    }
    ctx->pc = 0x11CBBCu;
    // 0x11cbbc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11cbbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11cbc0:
    // 0x11cbc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11cbc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cbc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11cbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x11CBC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CBC8u;
            // 0x11cbcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CAC0u: goto label_11cac0;
            case 0x11CB10u: goto label_11cb10;
            case 0x11CB40u: goto label_11cb40;
            case 0x11CB4Cu: goto label_11cb4c;
            case 0x11CB98u: goto label_11cb98;
            case 0x11CBC0u: goto label_11cbc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CBD0u;
}
