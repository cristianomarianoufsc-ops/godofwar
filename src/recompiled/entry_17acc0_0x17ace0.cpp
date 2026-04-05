#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17acc0
// Address: 0x17acc0 - 0x17ace0
void entry_17acc0_0x17ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17acc0_0x17ace0");
#endif

    ctx->pc = 0x17acc0u;

    // 0x17acc0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17acc4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17acc8: 0x2442d8e0  addiu       $v0, $v0, -0x2720
    ctx->pc = 0x17acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957280));
    // 0x17accc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x17acccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x17acd0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x17acd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x17acd4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17acd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17acd8: 0x3e00008  jr          $ra
    ctx->pc = 0x17ACD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ACDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ACD8u;
            // 0x17acdc: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17ACE0u;
}
