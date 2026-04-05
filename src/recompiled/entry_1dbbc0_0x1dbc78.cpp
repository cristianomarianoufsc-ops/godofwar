#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1dbbc0
// Address: 0x1dbbc0 - 0x1dbc78
void entry_1dbbc0_0x1dbc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1dbbc0_0x1dbc78");
#endif

    ctx->pc = 0x1dbbc0u;

    // 0x1dbbc0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1dbbc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbc4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1dbbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1dbbc8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1dbbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x1dbbcc: 0x84c20038  lh          $v0, 0x38($a2)
    ctx->pc = 0x1dbbccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1dbbd0: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x1dbbd0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1dbbd4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1dbbd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1dbbd8: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x1dbbd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1dbbdc: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBBDCu;
    {
        const bool branch_taken_0x1dbbdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DBBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBBDCu;
            // 0x1dbbe0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbdc) {
            ctx->pc = 0x1DBBF0u;
            goto label_1dbbf0;
        }
    }
    ctx->pc = 0x1DBBE4u;
    // 0x1dbbe4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1DBBE4u;
    {
        const bool branch_taken_0x1dbbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBBE4u;
            // 0x1dbbe8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbe4) {
            ctx->pc = 0x1DBC44u;
            goto label_1dbc44;
        }
    }
    ctx->pc = 0x1DBBECu;
    // 0x1dbbec: 0x0  nop
    ctx->pc = 0x1dbbecu;
    // NOP
label_1dbbf0:
    // 0x1dbbf0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1dbbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1dbbf4:
    // 0x1dbbf4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1dbbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1dbbf8: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1dbbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1dbbfc: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x1dbbfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1dbc00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DBC00u;
    {
        const bool branch_taken_0x1dbc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC00u;
            // 0x1dbc04: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc00) {
            ctx->pc = 0x1DBC20u;
            goto label_1dbc20;
        }
    }
    ctx->pc = 0x1DBC08u;
    // 0x1dbc08: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1dbc08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc0c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1dbc0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc10: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x1dbc10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1dbc14: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1dbc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1dbc18: 0xa4400044  sh          $zero, 0x44($v0)
    ctx->pc = 0x1dbc18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dbc1c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1dbc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1dbc20:
    // 0x1dbc20: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1dbc20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dbc24: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x1dbc24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1dbc28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DBC28u;
    {
        const bool branch_taken_0x1dbc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC28u;
            // 0x1dbc2c: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc28) {
            ctx->pc = 0x1DBC44u;
            goto label_1dbc44;
        }
    }
    ctx->pc = 0x1DBC30u;
    // 0x1dbc30: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1dbc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1dbc34: 0x84420038  lh          $v0, 0x38($v0)
    ctx->pc = 0x1dbc34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1dbc38: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1DBC38u;
    {
        const bool branch_taken_0x1dbc38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DBC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC38u;
            // 0x1dbc3c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc38) {
            ctx->pc = 0x1DBBF4u;
            runtime->cooperativeGuestYield();
            goto label_1dbbf4;
        }
    }
    ctx->pc = 0x1DBC40u;
    // 0x1dbc40: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1dbc40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dbc44:
    // 0x1dbc44: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x1dbc44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1dbc48: 0x24c40044  addiu       $a0, $a2, 0x44
    ctx->pc = 0x1dbc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 68));
    // 0x1dbc4c: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x1dbc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1dbc50: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1dbc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dbc54: 0xa4650038  sh          $a1, 0x38($v1)
    ctx->pc = 0x1dbc54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 56), (uint16_t)GPR_U32(ctx, 5));
    // 0x1dbc58: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1dbc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1dbc5c: 0x34059c40  ori         $a1, $zero, 0x9C40
    ctx->pc = 0x1dbc5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40000);
    // 0x1dbc60: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1dbc60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dbc64: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1dbc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1dbc68: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x1dbc68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
    // 0x1dbc6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dbc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dbc70: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC70u;
            // 0x1dbc74: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DBBF0u: goto label_1dbbf0;
            case 0x1DBBF4u: goto label_1dbbf4;
            case 0x1DBC20u: goto label_1dbc20;
            case 0x1DBC44u: goto label_1dbc44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DBC78u;
}
