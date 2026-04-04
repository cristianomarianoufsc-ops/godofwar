#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1dc040
// Address: 0x1dc040 - 0x1dc060
void entry_1dc040_0x1dc060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1dc040_0x1dc060");
#endif

    ctx->pc = 0x1dc040u;

    // 0x1dc040: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1dc040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dc044: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1dc044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1dc048: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC048u;
    {
        const bool branch_taken_0x1dc048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc048) {
            ctx->pc = 0x1DC058u;
            goto label_1dc058;
        }
    }
    ctx->pc = 0x1DC050u;
    // 0x1dc050: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC050u;
            // 0x1dc054: 0x8c8201c0  lw          $v0, 0x1C0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC058u: goto label_1dc058;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DC058u;
label_1dc058:
    // 0x1dc058: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC058u;
            // 0x1dc05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC058u: goto label_1dc058;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DC060u;
}
