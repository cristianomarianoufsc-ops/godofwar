#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1dbde8
// Address: 0x1dbde8 - 0x1dbe98
void entry_1dbde8_0x1dbe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1dbde8_0x1dbe98");
#endif

    ctx->pc = 0x1dbde8u;

    // 0x1dbde8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dbde8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdec: 0x3c0b0100  lui         $t3, 0x100
    ctx->pc = 0x1dbdecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)256 << 16));
    // 0x1dbdf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dbdf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdf4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1dbdf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdf8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dbdf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdfc: 0x0  nop
    ctx->pc = 0x1dbdfcu;
    // NOP
label_1dbe00:
    // 0x1dbe00: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1dbe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1dbe04: 0x4a3021  addu        $a2, $v0, $t2
    ctx->pc = 0x1dbe04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1dbe08: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1dbe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dbe0c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DBE0Cu;
    {
        const bool branch_taken_0x1dbe0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE0Cu;
            // 0x1dbe10: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe0c) {
            ctx->pc = 0x1DBE34u;
            goto label_1dbe34;
        }
    }
    ctx->pc = 0x1DBE14u;
    // 0x1dbe14: 0x5c400007  bgtzl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DBE14u;
    {
        const bool branch_taken_0x1dbe14 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1dbe14) {
            ctx->pc = 0x1DBE18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE14u;
            // 0x1dbe18: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DBE34u;
            goto label_1dbe34;
        }
    }
    ctx->pc = 0x1DBE1Cu;
    // 0x1dbe1c: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x1dbe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1dbe20: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1dbe20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1dbe24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dbe24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe28: 0xa4400044  sh          $zero, 0x44($v0)
    ctx->pc = 0x1dbe28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dbe2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dbe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbe30: 0xa4620038  sh          $v0, 0x38($v1)
    ctx->pc = 0x1dbe30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 56), (uint16_t)GPR_U32(ctx, 2));
label_1dbe34:
    // 0x1dbe34: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x1dbe34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1dbe38: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DBE38u;
    {
        const bool branch_taken_0x1dbe38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE38u;
            // 0x1dbe3c: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe38) {
            ctx->pc = 0x1DBE70u;
            goto label_1dbe70;
        }
    }
    ctx->pc = 0x1DBE40u;
    // 0x1dbe40: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1dbe40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dbe44: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DBE44u;
    {
        const bool branch_taken_0x1dbe44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE44u;
            // 0x1dbe48: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe44) {
            ctx->pc = 0x1DBE6Cu;
            goto label_1dbe6c;
        }
    }
    ctx->pc = 0x1DBE4Cu;
    // 0x1dbe4c: 0x5c400007  bgtzl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DBE4Cu;
    {
        const bool branch_taken_0x1dbe4c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1dbe4c) {
            ctx->pc = 0x1DBE50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE4Cu;
            // 0x1dbe50: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DBE6Cu;
            goto label_1dbe6c;
        }
    }
    ctx->pc = 0x1DBE54u;
    // 0x1dbe54: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x1dbe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1dbe58: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1dbe58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1dbe5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dbe5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe60: 0xa4400010  sh          $zero, 0x10($v0)
    ctx->pc = 0x1dbe60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dbe64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dbe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbe68: 0xa4620018  sh          $v0, 0x18($v1)
    ctx->pc = 0x1dbe68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 2));
label_1dbe6c:
    // 0x1dbe6c: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x1dbe6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1dbe70:
    // 0x1dbe70: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1dbe70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1dbe74: 0x24e03  sra         $t1, $v0, 24
    ctx->pc = 0x1dbe74u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1dbe78: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x1dbe78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1dbe7c: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x1dbe7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x1dbe80: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1dbe80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1dbe84: 0x29220006  slti        $v0, $t1, 0x6
    ctx->pc = 0x1dbe84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1dbe88: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1DBE88u;
    {
        const bool branch_taken_0x1dbe88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE88u;
            // 0x1dbe8c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe88) {
            ctx->pc = 0x1DBE00u;
            runtime->cooperativeGuestYield();
            goto label_1dbe00;
        }
    }
    ctx->pc = 0x1DBE90u;
    // 0x1dbe90: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DBE00u: goto label_1dbe00;
            case 0x1DBE34u: goto label_1dbe34;
            case 0x1DBE6Cu: goto label_1dbe6c;
            case 0x1DBE70u: goto label_1dbe70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DBE98u;
}
