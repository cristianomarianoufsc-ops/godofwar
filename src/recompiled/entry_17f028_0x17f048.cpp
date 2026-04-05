#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17f028
// Address: 0x17f028 - 0x17f048
void entry_17f028_0x17f048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17f028_0x17f048");
#endif

    ctx->pc = 0x17f028u;

    // 0x17f028: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x17f028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17f02c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17f030: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x17f030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17f034: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17F034u;
    {
        const bool branch_taken_0x17f034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F034u;
            // 0x17f038: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f034) {
            ctx->pc = 0x17F040u;
            goto label_17f040;
        }
    }
    ctx->pc = 0x17F03Cu;
    // 0x17f03c: 0x28650800  slti        $a1, $v1, 0x800
    ctx->pc = 0x17f03cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2048) ? 1 : 0);
label_17f040:
    // 0x17f040: 0x3e00008  jr          $ra
    ctx->pc = 0x17F040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F040u;
            // 0x17f044: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F040u: goto label_17f040;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F048u;
}
