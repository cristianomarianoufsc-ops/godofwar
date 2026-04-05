#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1dbc78
// Address: 0x1dbc78 - 0x1dbd38
void entry_1dbc78_0x1dbd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1dbc78_0x1dbd38");
#endif

    ctx->pc = 0x1dbc78u;

    // 0x1dbc78: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1dbc78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc7c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1dbc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1dbc80: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1dbc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1dbc84: 0x84c20018  lh          $v0, 0x18($a2)
    ctx->pc = 0x1dbc84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1dbc88: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x1dbc88u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1dbc8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1dbc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1dbc90: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x1dbc90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1dbc94: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBC94u;
    {
        const bool branch_taken_0x1dbc94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DBC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC94u;
            // 0x1dbc98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc94) {
            ctx->pc = 0x1DBCA8u;
            goto label_1dbca8;
        }
    }
    ctx->pc = 0x1DBC9Cu;
    // 0x1dbc9c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1DBC9Cu;
    {
        const bool branch_taken_0x1dbc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC9Cu;
            // 0x1dbca0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc9c) {
            ctx->pc = 0x1DBD00u;
            goto label_1dbd00;
        }
    }
    ctx->pc = 0x1DBCA4u;
    // 0x1dbca4: 0x0  nop
    ctx->pc = 0x1dbca4u;
    // NOP
label_1dbca8:
    // 0x1dbca8: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x1dbca8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1dbcac:
    // 0x1dbcac: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x1dbcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1dbcb0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1dbcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1dbcb4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1dbcb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1dbcb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DBCB8u;
    {
        const bool branch_taken_0x1dbcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBCB8u;
            // 0x1dbcbc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbcb8) {
            ctx->pc = 0x1DBCDCu;
            goto label_1dbcdc;
        }
    }
    ctx->pc = 0x1DBCC0u;
    // 0x1dbcc0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1dbcc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcc4: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1dbcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1dbcc8: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x1dbcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1dbccc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dbcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dbcd0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1dbcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1dbcd4: 0xa4400010  sh          $zero, 0x10($v0)
    ctx->pc = 0x1dbcd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dbcd8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1dbcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1dbcdc:
    // 0x1dbcdc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1dbcdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dbce0: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x1dbce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1dbce4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DBCE4u;
    {
        const bool branch_taken_0x1dbce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBCE4u;
            // 0x1dbce8: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbce4) {
            ctx->pc = 0x1DBD00u;
            goto label_1dbd00;
        }
    }
    ctx->pc = 0x1DBCECu;
    // 0x1dbcec: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1dbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1dbcf0: 0x84420018  lh          $v0, 0x18($v0)
    ctx->pc = 0x1dbcf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1dbcf4: 0x14a2ffed  bne         $a1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1DBCF4u;
    {
        const bool branch_taken_0x1dbcf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DBCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBCF4u;
            // 0x1dbcf8: 0x43880  sll         $a3, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbcf4) {
            ctx->pc = 0x1DBCACu;
            runtime->cooperativeGuestYield();
            goto label_1dbcac;
        }
    }
    ctx->pc = 0x1DBCFCu;
    // 0x1dbcfc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1dbcfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dbd00:
    // 0x1dbd00: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x1dbd00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1dbd04: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x1dbd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1dbd08: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x1dbd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1dbd0c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1dbd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dbd10: 0xa4650018  sh          $a1, 0x18($v1)
    ctx->pc = 0x1dbd10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 5));
    // 0x1dbd14: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1dbd14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1dbd18: 0x3405ea60  ori         $a1, $zero, 0xEA60
    ctx->pc = 0x1dbd18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x1dbd1c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1dbd1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dbd20: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1dbd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1dbd24: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1dbd24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1dbd28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dbd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dbd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBD2Cu;
            // 0x1dbd30: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DBCA8u: goto label_1dbca8;
            case 0x1DBCACu: goto label_1dbcac;
            case 0x1DBCDCu: goto label_1dbcdc;
            case 0x1DBD00u: goto label_1dbd00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DBD34u;
    // 0x1dbd34: 0x0  nop
    ctx->pc = 0x1dbd34u;
    // NOP
}
