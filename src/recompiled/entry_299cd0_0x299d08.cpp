#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_299cd0
// Address: 0x299cd0 - 0x299d08
void entry_299cd0_0x299d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_299cd0_0x299d08");
#endif

    ctx->pc = 0x299cd0u;

    // 0x299cd0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x299cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x299cd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299CD4u;
    {
        const bool branch_taken_0x299cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299CD4u;
            // 0x299cd8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299cd4) {
            ctx->pc = 0x299CE4u;
            goto label_299ce4;
        }
    }
    ctx->pc = 0x299CDCu;
    // 0x299cdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x299CDCu;
    {
        const bool branch_taken_0x299cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299CDCu;
            // 0x299ce0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299cdc) {
            ctx->pc = 0x299CECu;
            goto label_299cec;
        }
    }
    ctx->pc = 0x299CE4u;
label_299ce4:
    // 0x299ce4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x299ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x299ce8: 0xac435b10  sw          $v1, 0x5B10($v0)
    ctx->pc = 0x299ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23312), GPR_U32(ctx, 3));
label_299cec:
    // 0x299cec: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x299CECu;
    {
        const bool branch_taken_0x299cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x299cec) {
            ctx->pc = 0x299CF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x299CECu;
            // 0x299cf0: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x299D00u;
            goto label_299d00;
        }
    }
    ctx->pc = 0x299CF4u;
    // 0x299cf4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x299cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x299cf8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x299cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x299cfc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x299cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_299d00:
    // 0x299d00: 0x3e00008  jr          $ra
    ctx->pc = 0x299D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299D00u;
            // 0x299d04: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299CE4u: goto label_299ce4;
            case 0x299CECu: goto label_299cec;
            case 0x299D00u: goto label_299d00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299D08u;
}
