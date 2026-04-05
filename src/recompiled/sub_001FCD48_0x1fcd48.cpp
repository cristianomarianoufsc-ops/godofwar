#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FCD48
// Address: 0x1fcd48 - 0x1fce40
void sub_001FCD48_0x1fcd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCD48_0x1fcd48");
#endif

    ctx->pc = 0x1fcd48u;

    // 0x1fcd48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fcd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fcd4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fcd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fcd50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fcd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fcd54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fcd54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd58: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x1fcd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1fcd5c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fcd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fcd60: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x1FCD60u;
    {
        const bool branch_taken_0x1fcd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcd60) {
            ctx->pc = 0x1FCD64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCD60u;
            // 0x1fcd64: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FCE30u;
            goto label_1fce30;
        }
    }
    ctx->pc = 0x1FCD68u;
    // 0x1fcd68: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x1fcd68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1fcd6c: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1fcd6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fcd70: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fcd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fcd74: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1FCD74u;
    {
        const bool branch_taken_0x1fcd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcd74) {
            ctx->pc = 0x1FCD78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCD74u;
            // 0x1fcd78: 0x8e0500c8  lw          $a1, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FCDB0u;
            goto label_1fcdb0;
        }
    }
    ctx->pc = 0x1FCD7Cu;
    // 0x1fcd7c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1fcd7cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fcd80: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1fcd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1fcd84: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1fcd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1fcd88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fcd88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fcd8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fcd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fcd90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fcd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fcd94: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fcd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fcd98: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fcd98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fcd9c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1fcd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1fcda0: 0x40f809  jalr        $v0
    ctx->pc = 0x1FCDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCDA8u);
        ctx->pc = 0x1FCDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCDA0u;
            // 0x1fcda4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FCDA8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FCDB0u: goto label_1fcdb0;
            case 0x1FCDF0u: goto label_1fcdf0;
            case 0x1FCE30u: goto label_1fce30;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FCDA8u; }
            if (ctx->pc != 0x1FCDA8u) { return; }
        }
        }
    }
    ctx->pc = 0x1FCDA8u;
    // 0x1fcda8: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x1fcda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x1fcdac: 0x0  nop
    ctx->pc = 0x1fcdacu;
    // NOP
label_1fcdb0:
    // 0x1fcdb0: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1fcdb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fcdb4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fcdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fcdb8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1FCDB8u;
    {
        const bool branch_taken_0x1fcdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcdb8) {
            ctx->pc = 0x1FCDBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCDB8u;
            // 0x1fcdbc: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FCDF0u;
            goto label_1fcdf0;
        }
    }
    ctx->pc = 0x1FCDC0u;
    // 0x1fcdc0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1fcdc0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fcdc4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1fcdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1fcdc8: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1fcdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1fcdcc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fcdccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fcdd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fcdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fcdd4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fcdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fcdd8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fcdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fcddc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fcddcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fcde0: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1fcde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1fcde4: 0x40f809  jalr        $v0
    ctx->pc = 0x1FCDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCDECu);
        ctx->pc = 0x1FCDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCDE4u;
            // 0x1fcde8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FCDECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FCDB0u: goto label_1fcdb0;
            case 0x1FCDF0u: goto label_1fcdf0;
            case 0x1FCE30u: goto label_1fce30;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FCDECu; }
            if (ctx->pc != 0x1FCDECu) { return; }
        }
        }
    }
    ctx->pc = 0x1FCDECu;
    // 0x1fcdec: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1fcdecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_1fcdf0:
    // 0x1fcdf0: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1fcdf0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fcdf4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fcdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fcdf8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FCDF8u;
    {
        const bool branch_taken_0x1fcdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCDF8u;
            // 0x1fcdfc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdf8) {
            ctx->pc = 0x1FCE30u;
            goto label_1fce30;
        }
    }
    ctx->pc = 0x1FCE00u;
    // 0x1fce00: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1fce00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fce04: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1fce04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1fce08: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1fce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1fce0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fce10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fce10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fce14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fce14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fce18: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fce1c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fce1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fce20: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1fce20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1fce24: 0x40f809  jalr        $v0
    ctx->pc = 0x1FCE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCE2Cu);
        ctx->pc = 0x1FCE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE24u;
            // 0x1fce28: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FCE2Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FCDB0u: goto label_1fcdb0;
            case 0x1FCDF0u: goto label_1fcdf0;
            case 0x1FCE30u: goto label_1fce30;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FCE2Cu; }
            if (ctx->pc != 0x1FCE2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FCE2Cu;
    // 0x1fce2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fce2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fce30:
    // 0x1fce30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fce30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fce34: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCE34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE34u;
            // 0x1fce38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FCDB0u: goto label_1fcdb0;
            case 0x1FCDF0u: goto label_1fcdf0;
            case 0x1FCE30u: goto label_1fce30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FCE3Cu;
    // 0x1fce3c: 0x0  nop
    ctx->pc = 0x1fce3cu;
    // NOP
}
