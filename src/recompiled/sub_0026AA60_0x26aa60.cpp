#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026AA60
// Address: 0x26aa60 - 0x26adc0
void sub_0026AA60_0x26aa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AA60_0x26aa60");
#endif

    ctx->pc = 0x26aa60u;

    // 0x26aa60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26aa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26aa64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26aa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26aa68: 0xc0775ec  jal         func_1DD7B0
    ctx->pc = 0x26AA68u;
    SET_GPR_U32(ctx, 31, 0x26AA70u);
    ctx->pc = 0x26AA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA68u;
            // 0x26aa6c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD7B0u;
    if (runtime->hasFunction(0x1DD7B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA70u; }
        if (ctx->pc != 0x26AA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD7B0_0x1dd7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA70u; }
        if (ctx->pc != 0x26AA70u) { return; }
    }
    ctx->pc = 0x26AA70u;
    // 0x26aa70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26aa70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26aa74: 0x3e00008  jr          $ra
    ctx->pc = 0x26AA74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA74u;
            // 0x26aa78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AAA4u: goto label_26aaa4;
            case 0x26AAF8u: goto label_26aaf8;
            case 0x26AB08u: goto label_26ab08;
            case 0x26AB34u: goto label_26ab34;
            case 0x26AB94u: goto label_26ab94;
            case 0x26ABC8u: goto label_26abc8;
            case 0x26AC10u: goto label_26ac10;
            case 0x26AC14u: goto label_26ac14;
            case 0x26AC28u: goto label_26ac28;
            case 0x26AC4Cu: goto label_26ac4c;
            case 0x26ACC8u: goto label_26acc8;
            case 0x26ACF8u: goto label_26acf8;
            case 0x26AD60u: goto label_26ad60;
            case 0x26AD64u: goto label_26ad64;
            case 0x26AD70u: goto label_26ad70;
            case 0x26AD8Cu: goto label_26ad8c;
            case 0x26AD94u: goto label_26ad94;
            case 0x26ADACu: goto label_26adac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26AA7Cu;
    // 0x26aa7c: 0x0  nop
    ctx->pc = 0x26aa7cu;
    // NOP
    // 0x26aa80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26aa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26aa84: 0x10850007  beq         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26AA84u;
    {
        const bool branch_taken_0x26aa84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x26AA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA84u;
            // 0x26aa88: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa84) {
            ctx->pc = 0x26AAA4u;
            goto label_26aaa4;
        }
    }
    ctx->pc = 0x26AA8Cu;
    // 0x26aa8c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x26aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26aa90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26aa94: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26aa94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26aa98: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26aa9c: 0x40f809  jalr        $v0
    ctx->pc = 0x26AA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AAA4u);
        ctx->pc = 0x26AAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA9Cu;
            // 0x26aaa0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26AAA4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AAA4u: goto label_26aaa4;
            case 0x26AAF8u: goto label_26aaf8;
            case 0x26AB08u: goto label_26ab08;
            case 0x26AB34u: goto label_26ab34;
            case 0x26AB94u: goto label_26ab94;
            case 0x26ABC8u: goto label_26abc8;
            case 0x26AC10u: goto label_26ac10;
            case 0x26AC14u: goto label_26ac14;
            case 0x26AC28u: goto label_26ac28;
            case 0x26AC4Cu: goto label_26ac4c;
            case 0x26ACC8u: goto label_26acc8;
            case 0x26ACF8u: goto label_26acf8;
            case 0x26AD60u: goto label_26ad60;
            case 0x26AD64u: goto label_26ad64;
            case 0x26AD70u: goto label_26ad70;
            case 0x26AD8Cu: goto label_26ad8c;
            case 0x26AD94u: goto label_26ad94;
            case 0x26ADACu: goto label_26adac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26AAA4u; }
            if (ctx->pc != 0x26AAA4u) { return; }
        }
        }
    }
    ctx->pc = 0x26AAA4u;
label_26aaa4:
    // 0x26aaa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26aaa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26aaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x26AAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AAA8u;
            // 0x26aaac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AAA4u: goto label_26aaa4;
            case 0x26AAF8u: goto label_26aaf8;
            case 0x26AB08u: goto label_26ab08;
            case 0x26AB34u: goto label_26ab34;
            case 0x26AB94u: goto label_26ab94;
            case 0x26ABC8u: goto label_26abc8;
            case 0x26AC10u: goto label_26ac10;
            case 0x26AC14u: goto label_26ac14;
            case 0x26AC28u: goto label_26ac28;
            case 0x26AC4Cu: goto label_26ac4c;
            case 0x26ACC8u: goto label_26acc8;
            case 0x26ACF8u: goto label_26acf8;
            case 0x26AD60u: goto label_26ad60;
            case 0x26AD64u: goto label_26ad64;
            case 0x26AD70u: goto label_26ad70;
            case 0x26AD8Cu: goto label_26ad8c;
            case 0x26AD94u: goto label_26ad94;
            case 0x26ADACu: goto label_26adac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26AAB0u;
    // 0x26aab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26aab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26aab4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x26aab4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26aab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26aabc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x26aabcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aac0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x26aac0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26aac4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x26aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26aac8: 0x8d050030  lw          $a1, 0x30($t0)
    ctx->pc = 0x26aac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x26aacc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26AACCu;
    {
        const bool branch_taken_0x26aacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AACCu;
            // 0x26aad0: 0x24a40010  addiu       $a0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aacc) {
            ctx->pc = 0x26AAF8u;
            goto label_26aaf8;
        }
    }
    ctx->pc = 0x26AAD4u;
    // 0x26aad4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x26aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x26aad8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x26aad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aadc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26aae0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x26aae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26aae4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26aae8: 0x40f809  jalr        $v0
    ctx->pc = 0x26AAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AAF0u);
        ctx->pc = 0x26AAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AAE8u;
            // 0x26aaec: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26AAF0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AAA4u: goto label_26aaa4;
            case 0x26AAF8u: goto label_26aaf8;
            case 0x26AB08u: goto label_26ab08;
            case 0x26AB34u: goto label_26ab34;
            case 0x26AB94u: goto label_26ab94;
            case 0x26ABC8u: goto label_26abc8;
            case 0x26AC10u: goto label_26ac10;
            case 0x26AC14u: goto label_26ac14;
            case 0x26AC28u: goto label_26ac28;
            case 0x26AC4Cu: goto label_26ac4c;
            case 0x26ACC8u: goto label_26acc8;
            case 0x26ACF8u: goto label_26acf8;
            case 0x26AD60u: goto label_26ad60;
            case 0x26AD64u: goto label_26ad64;
            case 0x26AD70u: goto label_26ad70;
            case 0x26AD8Cu: goto label_26ad8c;
            case 0x26AD94u: goto label_26ad94;
            case 0x26ADACu: goto label_26adac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26AAF0u; }
            if (ctx->pc != 0x26AAF0u) { return; }
        }
        }
    }
    ctx->pc = 0x26AAF0u;
    // 0x26aaf0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26AAF0u;
    {
        const bool branch_taken_0x26aaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AAF0u;
            // 0x26aaf4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aaf0) {
            ctx->pc = 0x26AB08u;
            goto label_26ab08;
        }
    }
    ctx->pc = 0x26AAF8u;
label_26aaf8:
    // 0x26aaf8: 0xc074092  jal         func_1D0248
    ctx->pc = 0x26AAF8u;
    SET_GPR_U32(ctx, 31, 0x26AB00u);
    ctx->pc = 0x1D0248u;
    if (runtime->hasFunction(0x1D0248u)) {
        auto targetFn = runtime->lookupFunction(0x1D0248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AB00u; }
        if (ctx->pc != 0x26AB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0248_0x1d0248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AB00u; }
        if (ctx->pc != 0x26AB00u) { return; }
    }
    ctx->pc = 0x26AB00u;
    // 0x26ab00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26ab00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26ab04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26ab08:
    // 0x26ab08: 0x3e00008  jr          $ra
    ctx->pc = 0x26AB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB08u;
            // 0x26ab0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AAA4u: goto label_26aaa4;
            case 0x26AAF8u: goto label_26aaf8;
            case 0x26AB08u: goto label_26ab08;
            case 0x26AB34u: goto label_26ab34;
            case 0x26AB94u: goto label_26ab94;
            case 0x26ABC8u: goto label_26abc8;
            case 0x26AC10u: goto label_26ac10;
            case 0x26AC14u: goto label_26ac14;
            case 0x26AC28u: goto label_26ac28;
            case 0x26AC4Cu: goto label_26ac4c;
            case 0x26ACC8u: goto label_26acc8;
            case 0x26ACF8u: goto label_26acf8;
            case 0x26AD60u: goto label_26ad60;
            case 0x26AD64u: goto label_26ad64;
            case 0x26AD70u: goto label_26ad70;
            case 0x26AD8Cu: goto label_26ad8c;
            case 0x26AD94u: goto label_26ad94;
            case 0x26ADACu: goto label_26adac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26AB10u;
    // 0x26ab10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26ab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26ab14: 0x10850007  beq         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26AB14u;
    {
        const bool branch_taken_0x26ab14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x26AB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB14u;
            // 0x26ab18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab14) {
            ctx->pc = 0x26AB34u;
            goto label_26ab34;
        }
    }
    ctx->pc = 0x26AB1Cu;
    // 0x26ab1c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x26ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26ab20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26ab24: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26ab24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26ab28: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26ab2c: 0x40f809  jalr        $v0
    ctx->pc = 0x26AB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AB34u);
        ctx->pc = 0x26AB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB2Cu;
            // 0x26ab30: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26AB34u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AAA4u: goto label_26aaa4;
            case 0x26AAF8u: goto label_26aaf8;
            case 0x26AB08u: goto label_26ab08;
            case 0x26AB34u: goto label_26ab34;
            case 0x26AB94u: goto label_26ab94;
            case 0x26ABC8u: goto label_26abc8;
            case 0x26AC10u: goto label_26ac10;
            case 0x26AC14u: goto label_26ac14;
            case 0x26AC28u: goto label_26ac28;
            case 0x26AC4Cu: goto label_26ac4c;
            case 0x26ACC8u: goto label_26acc8;
            case 0x26ACF8u: goto label_26acf8;
            case 0x26AD60u: goto label_26ad60;
            case 0x26AD64u: goto label_26ad64;
            case 0x26AD70u: goto label_26ad70;
            case 0x26AD8Cu: goto label_26ad8c;
            case 0x26AD94u: goto label_26ad94;
            case 0x26ADACu: goto label_26adac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26AB34u; }
            if (ctx->pc != 0x26AB34u) { return; }
        }
        }
    }
    ctx->pc = 0x26AB34u;
label_26ab34:
    // 0x26ab34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26ab34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ab38: 0x3e00008  jr          $ra
    ctx->pc = 0x26AB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB38u;
            // 0x26ab3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AAA4u: goto label_26aaa4;
            case 0x26AAF8u: goto label_26aaf8;
            case 0x26AB08u: goto label_26ab08;
            case 0x26AB34u: goto label_26ab34;
            case 0x26AB94u: goto label_26ab94;
            case 0x26ABC8u: goto label_26abc8;
            case 0x26AC10u: goto label_26ac10;
            case 0x26AC14u: goto label_26ac14;
            case 0x26AC28u: goto label_26ac28;
            case 0x26AC4Cu: goto label_26ac4c;
            case 0x26ACC8u: goto label_26acc8;
            case 0x26ACF8u: goto label_26acf8;
            case 0x26AD60u: goto label_26ad60;
            case 0x26AD64u: goto label_26ad64;
            case 0x26AD70u: goto label_26ad70;
            case 0x26AD8Cu: goto label_26ad8c;
            case 0x26AD94u: goto label_26ad94;
            case 0x26ADACu: goto label_26adac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26AB40u;
    // 0x26ab40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ab40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ab44: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x26ab44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26ab48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26ab4c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x26ab4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ab50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ab54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26ab54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26ab58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26ab5c: 0x24020409  addiu       $v0, $zero, 0x409
    ctx->pc = 0x26ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x26ab60: 0x8d050030  lw          $a1, 0x30($t0)
    ctx->pc = 0x26ab60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x26ab64: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x26ab64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x26ab68: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26AB68u;
    {
        const bool branch_taken_0x26ab68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB68u;
            // 0x26ab6c: 0x24b10010  addiu       $s1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab68) {
            ctx->pc = 0x26AB94u;
            goto label_26ab94;
        }
    }
    ctx->pc = 0x26AB70u;
    // 0x26ab70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x26ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26ab74: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x26ab74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26ab7c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x26ab7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26ab80: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26ab84: 0x40f809  jalr        $v0
    ctx->pc = 0x26AB84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AB8Cu);
        ctx->pc = 0x26AB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB84u;
            // 0x26ab88: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26AB8Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AAA4u: goto label_26aaa4;
            case 0x26AAF8u: goto label_26aaf8;
            case 0x26AB08u: goto label_26ab08;
            case 0x26AB34u: goto label_26ab34;
            case 0x26AB94u: goto label_26ab94;
            case 0x26ABC8u: goto label_26abc8;
            case 0x26AC10u: goto label_26ac10;
            case 0x26AC14u: goto label_26ac14;
            case 0x26AC28u: goto label_26ac28;
            case 0x26AC4Cu: goto label_26ac4c;
            case 0x26ACC8u: goto label_26acc8;
            case 0x26ACF8u: goto label_26acf8;
            case 0x26AD60u: goto label_26ad60;
            case 0x26AD64u: goto label_26ad64;
            case 0x26AD70u: goto label_26ad70;
            case 0x26AD8Cu: goto label_26ad8c;
            case 0x26AD94u: goto label_26ad94;
            case 0x26ADACu: goto label_26adac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26AB8Cu; }
            if (ctx->pc != 0x26AB8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26AB8Cu;
    // 0x26ab8c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26AB8Cu;
    {
        const bool branch_taken_0x26ab8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB8Cu;
            // 0x26ab90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab8c) {
            ctx->pc = 0x26ABC8u;
            goto label_26abc8;
        }
    }
    ctx->pc = 0x26AB94u;
label_26ab94:
    // 0x26ab94: 0x8d030034  lw          $v1, 0x34($t0)
    ctx->pc = 0x26ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x26ab98: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x26ab98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ab9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aba0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26aba4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26aba4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26aba8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26abac: 0x40f809  jalr        $v0
    ctx->pc = 0x26ABACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26ABB4u);
        ctx->pc = 0x26ABB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ABACu;
            // 0x26abb0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26ABB4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AAA4u: goto label_26aaa4;
            case 0x26AAF8u: goto label_26aaf8;
            case 0x26AB08u: goto label_26ab08;
            case 0x26AB34u: goto label_26ab34;
            case 0x26AB94u: goto label_26ab94;
            case 0x26ABC8u: goto label_26abc8;
            case 0x26AC10u: goto label_26ac10;
            case 0x26AC14u: goto label_26ac14;
            case 0x26AC28u: goto label_26ac28;
            case 0x26AC4Cu: goto label_26ac4c;
            case 0x26ACC8u: goto label_26acc8;
            case 0x26ACF8u: goto label_26acf8;
            case 0x26AD60u: goto label_26ad60;
            case 0x26AD64u: goto label_26ad64;
            case 0x26AD70u: goto label_26ad70;
            case 0x26AD8Cu: goto label_26ad8c;
            case 0x26AD94u: goto label_26ad94;
            case 0x26ADACu: goto label_26adac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26ABB4u; }
            if (ctx->pc != 0x26ABB4u) { return; }
        }
        }
    }
    ctx->pc = 0x26ABB4u;
    // 0x26abb4: 0xc0742ec  jal         func_1D0BB0
    ctx->pc = 0x26ABB4u;
    SET_GPR_U32(ctx, 31, 0x26ABBCu);
    ctx->pc = 0x26ABB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ABB4u;
            // 0x26abb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BB0u;
    if (runtime->hasFunction(0x1D0BB0u)) {
        auto targetFn = runtime->lookupFunction(0x1D0BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ABBCu; }
        if (ctx->pc != 0x26ABBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0BB0_0x1d0bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ABBCu; }
        if (ctx->pc != 0x26ABBCu) { return; }
    }
    ctx->pc = 0x26ABBCu;
    // 0x26abbc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26abc0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x26abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26abc4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26abc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26abc8:
    // 0x26abc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26abc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26abcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26abccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26abd0: 0x3e00008  jr          $ra
    ctx->pc = 0x26ABD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ABD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ABD0u;
            // 0x26abd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AAA4u: goto label_26aaa4;
            case 0x26AAF8u: goto label_26aaf8;
            case 0x26AB08u: goto label_26ab08;
            case 0x26AB34u: goto label_26ab34;
            case 0x26AB94u: goto label_26ab94;
            case 0x26ABC8u: goto label_26abc8;
            case 0x26AC10u: goto label_26ac10;
            case 0x26AC14u: goto label_26ac14;
            case 0x26AC28u: goto label_26ac28;
            case 0x26AC4Cu: goto label_26ac4c;
            case 0x26ACC8u: goto label_26acc8;
            case 0x26ACF8u: goto label_26acf8;
            case 0x26AD60u: goto label_26ad60;
            case 0x26AD64u: goto label_26ad64;
            case 0x26AD70u: goto label_26ad70;
            case 0x26AD8Cu: goto label_26ad8c;
            case 0x26AD94u: goto label_26ad94;
            case 0x26ADACu: goto label_26adac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26ABD8u;
    // 0x26abd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26abd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26abdc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26abe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26abe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26abe4: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x26abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x26abe8: 0x24480010  addiu       $t0, $v0, 0x10
    ctx->pc = 0x26abe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26abec: 0x9502007c  lhu         $v0, 0x7C($t0)
    ctx->pc = 0x26abecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 124)));
    // 0x26abf0: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x26ABF0u;
    {
        const bool branch_taken_0x26abf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26ABF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ABF0u;
            // 0x26abf4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abf0) {
            ctx->pc = 0x26AC28u;
            goto label_26ac28;
        }
    }
    ctx->pc = 0x26ABF8u;
    // 0x26abf8: 0x8d020024  lw          $v0, 0x24($t0)
    ctx->pc = 0x26abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x26abfc: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x26abfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26ac00: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AC00u;
    {
        const bool branch_taken_0x26ac00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26AC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC00u;
            // 0x26ac04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac00) {
            ctx->pc = 0x26AC10u;
            goto label_26ac10;
        }
    }
    ctx->pc = 0x26AC08u;
    // 0x26ac08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26AC08u;
    {
        const bool branch_taken_0x26ac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC08u;
            // 0x26ac0c: 0xa500007c  sh          $zero, 0x7C($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 124), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac08) {
            ctx->pc = 0x26AC14u;
            goto label_26ac14;
        }
    }
    ctx->pc = 0x26AC10u;
label_26ac10:
    // 0x26ac10: 0xa502007c  sh          $v0, 0x7C($t0)
    ctx->pc = 0x26ac10u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 124), (uint16_t)GPR_U32(ctx, 2));
label_26ac14:
    // 0x26ac14: 0x8d030048  lw          $v1, 0x48($t0)
    ctx->pc = 0x26ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x26ac18: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26ac1c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x26ac1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x26ac20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x26ac20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26ac24: 0xad030048  sw          $v1, 0x48($t0)
    ctx->pc = 0x26ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 3));
label_26ac28:
    // 0x26ac28: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26AC28u;
    {
        const bool branch_taken_0x26ac28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x26AC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC28u;
            // 0x26ac2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac28) {
            ctx->pc = 0x26AC4Cu;
            goto label_26ac4c;
        }
    }
    ctx->pc = 0x26AC30u;
    // 0x26ac30: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x26ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26ac34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26ac38: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26ac38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26ac3c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26ac40: 0x40f809  jalr        $v0
    ctx->pc = 0x26AC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AC48u);
        ctx->pc = 0x26AC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC40u;
            // 0x26ac44: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26AC48u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AAA4u: goto label_26aaa4;
            case 0x26AAF8u: goto label_26aaf8;
            case 0x26AB08u: goto label_26ab08;
            case 0x26AB34u: goto label_26ab34;
            case 0x26AB94u: goto label_26ab94;
            case 0x26ABC8u: goto label_26abc8;
            case 0x26AC10u: goto label_26ac10;
            case 0x26AC14u: goto label_26ac14;
            case 0x26AC28u: goto label_26ac28;
            case 0x26AC4Cu: goto label_26ac4c;
            case 0x26ACC8u: goto label_26acc8;
            case 0x26ACF8u: goto label_26acf8;
            case 0x26AD60u: goto label_26ad60;
            case 0x26AD64u: goto label_26ad64;
            case 0x26AD70u: goto label_26ad70;
            case 0x26AD8Cu: goto label_26ad8c;
            case 0x26AD94u: goto label_26ad94;
            case 0x26ADACu: goto label_26adac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26AC48u; }
            if (ctx->pc != 0x26AC48u) { return; }
        }
        }
    }
    ctx->pc = 0x26AC48u;
    // 0x26ac48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26ac48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26ac4c:
    // 0x26ac4c: 0x3e00008  jr          $ra
    ctx->pc = 0x26AC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC4Cu;
            // 0x26ac50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AAA4u: goto label_26aaa4;
            case 0x26AAF8u: goto label_26aaf8;
            case 0x26AB08u: goto label_26ab08;
            case 0x26AB34u: goto label_26ab34;
            case 0x26AB94u: goto label_26ab94;
            case 0x26ABC8u: goto label_26abc8;
            case 0x26AC10u: goto label_26ac10;
            case 0x26AC14u: goto label_26ac14;
            case 0x26AC28u: goto label_26ac28;
            case 0x26AC4Cu: goto label_26ac4c;
            case 0x26ACC8u: goto label_26acc8;
            case 0x26ACF8u: goto label_26acf8;
            case 0x26AD60u: goto label_26ad60;
            case 0x26AD64u: goto label_26ad64;
            case 0x26AD70u: goto label_26ad70;
            case 0x26AD8Cu: goto label_26ad8c;
            case 0x26AD94u: goto label_26ad94;
            case 0x26ADACu: goto label_26adac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26AC54u;
    // 0x26ac54: 0x0  nop
    ctx->pc = 0x26ac54u;
    // NOP
    // 0x26ac58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ac58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ac5c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x26ac5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26ac64: 0x24020411  addiu       $v0, $zero, 0x411
    ctx->pc = 0x26ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1041));
    // 0x26ac68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ac68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ac6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26ac6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26ac70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26ac70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac74: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x26ac74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x26ac78: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x26ac78u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x26ac7c: 0x1482001e  bne         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x26AC7Cu;
    {
        const bool branch_taken_0x26ac7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x26AC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC7Cu;
            // 0x26ac80: 0x24700010  addiu       $s0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac7c) {
            ctx->pc = 0x26ACF8u;
            goto label_26acf8;
        }
    }
    ctx->pc = 0x26AC84u;
    // 0x26ac84: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x26ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x26ac88: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x26ac88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26ac8c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x26ac8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x26ac90: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26AC90u;
    {
        const bool branch_taken_0x26ac90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC90u;
            // 0x26ac94: 0x8ca30034  lw          $v1, 0x34($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac90) {
            ctx->pc = 0x26ACC8u;
            goto label_26acc8;
        }
    }
    ctx->pc = 0x26AC98u;
    // 0x26ac98: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x26ac98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26ac9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aca0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26aca4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26aca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26aca8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26acac: 0x40f809  jalr        $v0
    ctx->pc = 0x26ACACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26ACB4u);
        ctx->pc = 0x26ACB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ACACu;
            // 0x26acb0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26ACB4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AAA4u: goto label_26aaa4;
            case 0x26AAF8u: goto label_26aaf8;
            case 0x26AB08u: goto label_26ab08;
            case 0x26AB34u: goto label_26ab34;
            case 0x26AB94u: goto label_26ab94;
            case 0x26ABC8u: goto label_26abc8;
            case 0x26AC10u: goto label_26ac10;
            case 0x26AC14u: goto label_26ac14;
            case 0x26AC28u: goto label_26ac28;
            case 0x26AC4Cu: goto label_26ac4c;
            case 0x26ACC8u: goto label_26acc8;
            case 0x26ACF8u: goto label_26acf8;
            case 0x26AD60u: goto label_26ad60;
            case 0x26AD64u: goto label_26ad64;
            case 0x26AD70u: goto label_26ad70;
            case 0x26AD8Cu: goto label_26ad8c;
            case 0x26AD94u: goto label_26ad94;
            case 0x26ADACu: goto label_26adac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26ACB4u; }
            if (ctx->pc != 0x26ACB4u) { return; }
        }
        }
    }
    ctx->pc = 0x26ACB4u;
    // 0x26acb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26acb8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x26acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26acbc: 0xa6030072  sh          $v1, 0x72($s0)
    ctx->pc = 0x26acbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 3));
    // 0x26acc0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x26ACC0u;
    {
        const bool branch_taken_0x26acc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ACC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ACC0u;
            // 0x26acc4: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26acc0) {
            ctx->pc = 0x26ADACu;
            goto label_26adac;
        }
    }
    ctx->pc = 0x26ACC8u;
label_26acc8:
    // 0x26acc8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x26acc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26accc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26acccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26acd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26acd4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26acd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26acd8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26acdc: 0x40f809  jalr        $v0
    ctx->pc = 0x26ACDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26ACE4u);
        ctx->pc = 0x26ACE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ACDCu;
            // 0x26ace0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26ACE4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AAA4u: goto label_26aaa4;
            case 0x26AAF8u: goto label_26aaf8;
            case 0x26AB08u: goto label_26ab08;
            case 0x26AB34u: goto label_26ab34;
            case 0x26AB94u: goto label_26ab94;
            case 0x26ABC8u: goto label_26abc8;
            case 0x26AC10u: goto label_26ac10;
            case 0x26AC14u: goto label_26ac14;
            case 0x26AC28u: goto label_26ac28;
            case 0x26AC4Cu: goto label_26ac4c;
            case 0x26ACC8u: goto label_26acc8;
            case 0x26ACF8u: goto label_26acf8;
            case 0x26AD60u: goto label_26ad60;
            case 0x26AD64u: goto label_26ad64;
            case 0x26AD70u: goto label_26ad70;
            case 0x26AD8Cu: goto label_26ad8c;
            case 0x26AD94u: goto label_26ad94;
            case 0x26ADACu: goto label_26adac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26ACE4u; }
            if (ctx->pc != 0x26ACE4u) { return; }
        }
        }
    }
    ctx->pc = 0x26ACE4u;
    // 0x26ace4: 0xc0742ec  jal         func_1D0BB0
    ctx->pc = 0x26ACE4u;
    SET_GPR_U32(ctx, 31, 0x26ACECu);
    ctx->pc = 0x26ACE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ACE4u;
            // 0x26ace8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BB0u;
    if (runtime->hasFunction(0x1D0BB0u)) {
        auto targetFn = runtime->lookupFunction(0x1D0BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ACECu; }
        if (ctx->pc != 0x26ACECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0BB0_0x1d0bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ACECu; }
        if (ctx->pc != 0x26ACECu) { return; }
    }
    ctx->pc = 0x26ACECu;
    // 0x26acec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x26acecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26acf0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x26ACF0u;
    {
        const bool branch_taken_0x26acf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ACF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ACF0u;
            // 0x26acf4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26acf0) {
            ctx->pc = 0x26ADACu;
            goto label_26adac;
        }
    }
    ctx->pc = 0x26ACF8u;
label_26acf8:
    // 0x26acf8: 0x24020409  addiu       $v0, $zero, 0x409
    ctx->pc = 0x26acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x26acfc: 0x54820025  bnel        $a0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x26ACFCu;
    {
        const bool branch_taken_0x26acfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x26acfc) {
            ctx->pc = 0x26AD00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26ACFCu;
            // 0x26ad00: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26AD94u;
            goto label_26ad94;
        }
    }
    ctx->pc = 0x26AD04u;
    // 0x26ad04: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x26ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x26ad08: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x26ad08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26ad0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26ad14: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26ad14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26ad18: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26ad1c: 0x40f809  jalr        $v0
    ctx->pc = 0x26AD1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AD24u);
        ctx->pc = 0x26AD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD1Cu;
            // 0x26ad20: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26AD24u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AAA4u: goto label_26aaa4;
            case 0x26AAF8u: goto label_26aaf8;
            case 0x26AB08u: goto label_26ab08;
            case 0x26AB34u: goto label_26ab34;
            case 0x26AB94u: goto label_26ab94;
            case 0x26ABC8u: goto label_26abc8;
            case 0x26AC10u: goto label_26ac10;
            case 0x26AC14u: goto label_26ac14;
            case 0x26AC28u: goto label_26ac28;
            case 0x26AC4Cu: goto label_26ac4c;
            case 0x26ACC8u: goto label_26acc8;
            case 0x26ACF8u: goto label_26acf8;
            case 0x26AD60u: goto label_26ad60;
            case 0x26AD64u: goto label_26ad64;
            case 0x26AD70u: goto label_26ad70;
            case 0x26AD8Cu: goto label_26ad8c;
            case 0x26AD94u: goto label_26ad94;
            case 0x26ADACu: goto label_26adac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26AD24u; }
            if (ctx->pc != 0x26AD24u) { return; }
        }
        }
    }
    ctx->pc = 0x26AD24u;
    // 0x26ad24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ad24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad28: 0xc0742c4  jal         func_1D0B10
    ctx->pc = 0x26AD28u;
    SET_GPR_U32(ctx, 31, 0x26AD30u);
    ctx->pc = 0x26AD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD28u;
            // 0x26ad2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0B10u;
    if (runtime->hasFunction(0x1D0B10u)) {
        auto targetFn = runtime->lookupFunction(0x1D0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD30u; }
        if (ctx->pc != 0x26AD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0B10_0x1d0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD30u; }
        if (ctx->pc != 0x26AD30u) { return; }
    }
    ctx->pc = 0x26AD30u;
    // 0x26ad30: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x26ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26ad34: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x26ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x26ad38: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26AD38u;
    {
        const bool branch_taken_0x26ad38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD38u;
            // 0x26ad3c: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad38) {
            ctx->pc = 0x26AD60u;
            goto label_26ad60;
        }
    }
    ctx->pc = 0x26AD40u;
    // 0x26ad40: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x26ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26ad44: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x26ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26ad48: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26ad4c: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x26ad4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x26ad50: 0x4a20007  bltzl       $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26AD50u;
    {
        const bool branch_taken_0x26ad50 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x26ad50) {
            ctx->pc = 0x26AD54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD50u;
            // 0x26ad54: 0x9603007c  lhu         $v1, 0x7C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26AD70u;
            goto label_26ad70;
        }
    }
    ctx->pc = 0x26AD58u;
    // 0x26ad58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26AD58u;
    {
        const bool branch_taken_0x26ad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ad58) {
            ctx->pc = 0x26AD64u;
            goto label_26ad64;
        }
    }
    ctx->pc = 0x26AD60u;
label_26ad60:
    // 0x26ad60: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26ad60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26ad64:
    // 0x26ad64: 0xc0742fe  jal         func_1D0BF8
    ctx->pc = 0x26AD64u;
    SET_GPR_U32(ctx, 31, 0x26AD6Cu);
    ctx->pc = 0x26AD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD64u;
            // 0x26ad68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BF8u;
    if (runtime->hasFunction(0x1D0BF8u)) {
        auto targetFn = runtime->lookupFunction(0x1D0BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD6Cu; }
        if (ctx->pc != 0x26AD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0BF8_0x1d0bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD6Cu; }
        if (ctx->pc != 0x26AD6Cu) { return; }
    }
    ctx->pc = 0x26AD6Cu;
    // 0x26ad6c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x26ad6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
label_26ad70:
    // 0x26ad70: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26ad74: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26AD74u;
    {
        const bool branch_taken_0x26ad74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26ad74) {
            ctx->pc = 0x26AD78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD74u;
            // 0x26ad78: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26AD8Cu;
            goto label_26ad8c;
        }
    }
    ctx->pc = 0x26AD7Cu;
    // 0x26ad7c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x26ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x26ad80: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x26ad80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x26ad84: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x26ad84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x26ad88: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x26ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_26ad8c:
    // 0x26ad8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26AD8Cu;
    {
        const bool branch_taken_0x26ad8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD8Cu;
            // 0x26ad90: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad8c) {
            ctx->pc = 0x26ADACu;
            goto label_26adac;
        }
    }
    ctx->pc = 0x26AD94u;
label_26ad94:
    // 0x26ad94: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x26ad94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26ad9c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x26ad9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26ada0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26ada4: 0x40f809  jalr        $v0
    ctx->pc = 0x26ADA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26ADACu);
        ctx->pc = 0x26ADA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADA4u;
            // 0x26ada8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26ADACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AAA4u: goto label_26aaa4;
            case 0x26AAF8u: goto label_26aaf8;
            case 0x26AB08u: goto label_26ab08;
            case 0x26AB34u: goto label_26ab34;
            case 0x26AB94u: goto label_26ab94;
            case 0x26ABC8u: goto label_26abc8;
            case 0x26AC10u: goto label_26ac10;
            case 0x26AC14u: goto label_26ac14;
            case 0x26AC28u: goto label_26ac28;
            case 0x26AC4Cu: goto label_26ac4c;
            case 0x26ACC8u: goto label_26acc8;
            case 0x26ACF8u: goto label_26acf8;
            case 0x26AD60u: goto label_26ad60;
            case 0x26AD64u: goto label_26ad64;
            case 0x26AD70u: goto label_26ad70;
            case 0x26AD8Cu: goto label_26ad8c;
            case 0x26AD94u: goto label_26ad94;
            case 0x26ADACu: goto label_26adac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26ADACu; }
            if (ctx->pc != 0x26ADACu) { return; }
        }
        }
    }
    ctx->pc = 0x26ADACu;
label_26adac:
    // 0x26adac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26adacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26adb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26adb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26adb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26adb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26adb8: 0x3e00008  jr          $ra
    ctx->pc = 0x26ADB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ADBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADB8u;
            // 0x26adbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AAA4u: goto label_26aaa4;
            case 0x26AAF8u: goto label_26aaf8;
            case 0x26AB08u: goto label_26ab08;
            case 0x26AB34u: goto label_26ab34;
            case 0x26AB94u: goto label_26ab94;
            case 0x26ABC8u: goto label_26abc8;
            case 0x26AC10u: goto label_26ac10;
            case 0x26AC14u: goto label_26ac14;
            case 0x26AC28u: goto label_26ac28;
            case 0x26AC4Cu: goto label_26ac4c;
            case 0x26ACC8u: goto label_26acc8;
            case 0x26ACF8u: goto label_26acf8;
            case 0x26AD60u: goto label_26ad60;
            case 0x26AD64u: goto label_26ad64;
            case 0x26AD70u: goto label_26ad70;
            case 0x26AD8Cu: goto label_26ad8c;
            case 0x26AD94u: goto label_26ad94;
            case 0x26ADACu: goto label_26adac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26ADC0u;
}
