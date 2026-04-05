#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_148408
// Address: 0x148408 - 0x148458
void entry_148408_0x148458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_148408_0x148458");
#endif

    ctx->pc = 0x148408u;

    // 0x148408: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x148408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14840c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x14840cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x148410: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x148410u;
    {
        const bool branch_taken_0x148410 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x148414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148410u;
            // 0x148414: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148410) {
            ctx->pc = 0x14844Cu;
            goto label_14844c;
        }
    }
    ctx->pc = 0x148418u;
    // 0x148418: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x148418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14841c: 0x0  nop
    ctx->pc = 0x14841cu;
    // NOP
label_148420:
    // 0x148420: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x148420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x148424: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x148424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x148428: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x148428u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14842c: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14842Cu;
    {
        const bool branch_taken_0x14842c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x148430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14842Cu;
            // 0x148430: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14842c) {
            ctx->pc = 0x14843Cu;
            goto label_14843c;
        }
    }
    ctx->pc = 0x148434u;
    // 0x148434: 0x3e00008  jr          $ra
    ctx->pc = 0x148434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148434u;
            // 0x148438: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148420u: goto label_148420;
            case 0x14843Cu: goto label_14843c;
            case 0x14844Cu: goto label_14844c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14843Cu;
label_14843c:
    // 0x14843c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x14843cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x148440: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x148440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x148444: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x148444u;
    {
        const bool branch_taken_0x148444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148444) {
            ctx->pc = 0x148448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x148444u;
            // 0x148448: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x148420u;
            runtime->cooperativeGuestYield();
            goto label_148420;
        }
    }
    ctx->pc = 0x14844Cu;
label_14844c:
    // 0x14844c: 0x3e00008  jr          $ra
    ctx->pc = 0x14844Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14844Cu;
            // 0x148450: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148420u: goto label_148420;
            case 0x14843Cu: goto label_14843c;
            case 0x14844Cu: goto label_14844c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x148454u;
    // 0x148454: 0x0  nop
    ctx->pc = 0x148454u;
    // NOP
}
