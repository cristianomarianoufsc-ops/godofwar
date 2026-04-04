#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27bed8
// Address: 0x27bed8 - 0x27bf90
void entry_27bed8_0x27bf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27bed8_0x27bf90");
#endif

    ctx->pc = 0x27bed8u;

    // 0x27bed8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27bed8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bedc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27bedcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bee0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27bee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bee4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27bee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bee8: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x27bee8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27beec: 0x0  nop
    ctx->pc = 0x27beecu;
    // NOP
label_27bef0:
    // 0x27bef0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x27bef0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27bef4: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x27bef4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x27bef8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27bef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27befc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27BEFCu;
    {
        const bool branch_taken_0x27befc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BEFCu;
            // 0x27bf00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27befc) {
            ctx->pc = 0x27BF50u;
            goto label_27bf50;
        }
    }
    ctx->pc = 0x27BF04u;
    // 0x27bf04: 0x24c2fff0  addiu       $v0, $a2, -0x10
    ctx->pc = 0x27bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x27bf08: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x27bf08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x27bf0c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27bf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x27bf10: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x27bf10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x27bf14: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27BF14u;
    {
        const bool branch_taken_0x27bf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BF14u;
            // 0x27bf18: 0xaca7000c  sw          $a3, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf14) {
            ctx->pc = 0x27BF2Cu;
            goto label_27bf2c;
        }
    }
    ctx->pc = 0x27BF1Cu;
    // 0x27bf1c: 0x24c2ffdd  addiu       $v0, $a2, -0x23
    ctx->pc = 0x27bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967261));
    // 0x27bf20: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x27bf20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27bf24: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27BF24u;
    {
        const bool branch_taken_0x27bf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bf24) {
            ctx->pc = 0x27BF28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27BF24u;
            // 0x27bf28: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27BF38u;
            goto label_27bf38;
        }
    }
    ctx->pc = 0x27BF2Cu;
label_27bf2c:
    // 0x27bf2c: 0xacaa0004  sw          $t2, 0x4($a1)
    ctx->pc = 0x27bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 10));
    // 0x27bf30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27BF30u;
    {
        const bool branch_taken_0x27bf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BF30u;
            // 0x27bf34: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf30) {
            ctx->pc = 0x27BF5Cu;
            goto label_27bf5c;
        }
    }
    ctx->pc = 0x27BF38u;
label_27bf38:
    // 0x27bf38: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x27bf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x27bf3c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27BF3Cu;
    {
        const bool branch_taken_0x27bf3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BF3Cu;
            // 0x27bf40: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf3c) {
            ctx->pc = 0x27BF5Cu;
            goto label_27bf5c;
        }
    }
    ctx->pc = 0x27BF44u;
    // 0x27bf44: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x27bf44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x27bf48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27BF48u;
    {
        const bool branch_taken_0x27bf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BF48u;
            // 0x27bf4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf48) {
            ctx->pc = 0x27BF5Cu;
            goto label_27bf5c;
        }
    }
    ctx->pc = 0x27BF50u;
label_27bf50:
    // 0x27bf50: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x27bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x27bf54: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x27bf54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x27bf58: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x27bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_27bf5c:
    // 0x27bf5c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x27bf5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x27bf60: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x27bf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x27bf64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BF64u;
    {
        const bool branch_taken_0x27bf64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BF64u;
            // 0x27bf68: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf64) {
            ctx->pc = 0x27BF74u;
            goto label_27bf74;
        }
    }
    ctx->pc = 0x27BF6Cu;
    // 0x27bf6c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27bf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27bf70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27bf70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27bf74:
    // 0x27bf74: 0x28c20028  slti        $v0, $a2, 0x28
    ctx->pc = 0x27bf74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x27bf78: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x27BF78u;
    {
        const bool branch_taken_0x27bf78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BF78u;
            // 0x27bf7c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf78) {
            ctx->pc = 0x27BEF0u;
            runtime->cooperativeGuestYield();
            goto label_27bef0;
        }
    }
    ctx->pc = 0x27BF80u;
    // 0x27bf80: 0x3e00008  jr          $ra
    ctx->pc = 0x27BF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BF80u;
            // 0x27bf84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27BEF0u: goto label_27bef0;
            case 0x27BF2Cu: goto label_27bf2c;
            case 0x27BF38u: goto label_27bf38;
            case 0x27BF50u: goto label_27bf50;
            case 0x27BF5Cu: goto label_27bf5c;
            case 0x27BF74u: goto label_27bf74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27BF88u;
    // 0x27bf88: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x27bf88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x27bf8c: 0x0  nop
    ctx->pc = 0x27bf8cu;
    // NOP
}
