#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_279f28
// Address: 0x279f28 - 0x279f50
void entry_279f28_0x279f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_279f28_0x279f50");
#endif

    ctx->pc = 0x279f28u;

    // 0x279f28: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x279f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x279f2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x279F2Cu;
    {
        const bool branch_taken_0x279f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279F2Cu;
            // 0x279f30: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f2c) {
            ctx->pc = 0x279F48u;
            goto label_279f48;
        }
    }
    ctx->pc = 0x279F34u;
    // 0x279f34: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x279f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x279f38: 0x244216d0  addiu       $v0, $v0, 0x16D0
    ctx->pc = 0x279f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5840));
    // 0x279f3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x279f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x279f40: 0x3e00008  jr          $ra
    ctx->pc = 0x279F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279F40u;
            // 0x279f44: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279F48u: goto label_279f48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x279F48u;
label_279f48:
    // 0x279f48: 0x3e00008  jr          $ra
    ctx->pc = 0x279F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279F48u;
            // 0x279f4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279F48u: goto label_279f48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x279F50u;
}
