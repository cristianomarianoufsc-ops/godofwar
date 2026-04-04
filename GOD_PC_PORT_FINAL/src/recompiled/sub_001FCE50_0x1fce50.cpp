#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FCE50
// Address: 0x1fce50 - 0x1fcf30
void sub_001FCE50_0x1fce50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCE50_0x1fce50");
#endif

    ctx->pc = 0x1fce50u;

    // 0x1fce50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fce50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fce54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fce54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fce58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fce58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fce5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fce5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce60: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x1fce60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1fce64: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1fce64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fce68: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fce68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fce6c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FCE6Cu;
    {
        const bool branch_taken_0x1fce6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE6Cu;
            // 0x1fce70: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce6c) {
            ctx->pc = 0x1FCEA0u;
            goto label_1fcea0;
        }
    }
    ctx->pc = 0x1FCE74u;
    // 0x1fce74: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1fce74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fce78: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1fce78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1fce7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fce80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fce80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fce84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fce84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fce88: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fce8c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fce8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1fce90: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1fce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1fce94: 0x40f809  jalr        $v0
    ctx->pc = 0x1FCE94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCE9Cu);
        ctx->pc = 0x1FCE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE94u;
            // 0x1fce98: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FCE9Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FCEA0u: goto label_1fcea0;
            case 0x1FCEE0u: goto label_1fcee0;
            case 0x1FCF20u: goto label_1fcf20;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FCE9Cu; }
            if (ctx->pc != 0x1FCE9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FCE9Cu;
    // 0x1fce9c: 0x0  nop
    ctx->pc = 0x1fce9cu;
    // NOP
label_1fcea0:
    // 0x1fcea0: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x1fcea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x1fcea4: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1fcea4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fcea8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fcea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fceac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FCEACu;
    {
        const bool branch_taken_0x1fceac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCEACu;
            // 0x1fceb0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fceac) {
            ctx->pc = 0x1FCEE0u;
            goto label_1fcee0;
        }
    }
    ctx->pc = 0x1FCEB4u;
    // 0x1fceb4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1fceb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fceb8: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1fceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1fcebc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fcebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fcec0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fcec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fcec4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fcec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fcec8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fcec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fcecc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fceccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1fced0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1fced0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1fced4: 0x40f809  jalr        $v0
    ctx->pc = 0x1FCED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCEDCu);
        ctx->pc = 0x1FCED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCED4u;
            // 0x1fced8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FCEDCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FCEA0u: goto label_1fcea0;
            case 0x1FCEE0u: goto label_1fcee0;
            case 0x1FCF20u: goto label_1fcf20;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FCEDCu; }
            if (ctx->pc != 0x1FCEDCu) { return; }
        }
        }
    }
    ctx->pc = 0x1FCEDCu;
    // 0x1fcedc: 0x0  nop
    ctx->pc = 0x1fcedcu;
    // NOP
label_1fcee0:
    // 0x1fcee0: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1fcee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1fcee4: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1fcee4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fcee8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fcee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fceec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FCEECu;
    {
        const bool branch_taken_0x1fceec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCEECu;
            // 0x1fcef0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fceec) {
            ctx->pc = 0x1FCF20u;
            goto label_1fcf20;
        }
    }
    ctx->pc = 0x1FCEF4u;
    // 0x1fcef4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1fcef4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fcef8: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1fcef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1fcefc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fcefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fcf00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fcf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fcf04: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fcf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fcf08: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fcf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fcf0c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fcf0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1fcf10: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1fcf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1fcf14: 0x40f809  jalr        $v0
    ctx->pc = 0x1FCF14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCF1Cu);
        ctx->pc = 0x1FCF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCF14u;
            // 0x1fcf18: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FCF1Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FCEA0u: goto label_1fcea0;
            case 0x1FCEE0u: goto label_1fcee0;
            case 0x1FCF20u: goto label_1fcf20;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FCF1Cu; }
            if (ctx->pc != 0x1FCF1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FCF1Cu;
    // 0x1fcf1c: 0x0  nop
    ctx->pc = 0x1fcf1cu;
    // NOP
label_1fcf20:
    // 0x1fcf20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fcf20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcf24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fcf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcf28: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCF28u;
            // 0x1fcf2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FCEA0u: goto label_1fcea0;
            case 0x1FCEE0u: goto label_1fcee0;
            case 0x1FCF20u: goto label_1fcf20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FCF30u;
}
