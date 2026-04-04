#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_168b90
// Address: 0x168b90 - 0x168bb0
void entry_168b90_0x168bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_168b90_0x168bb0");
#endif

    ctx->pc = 0x168b90u;

    // 0x168b90: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x168b90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x168b94: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x168b94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x168b98: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x168b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x168b9c: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x168b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x168ba0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x168ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x168ba4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x168ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x168ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x168BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168BA8u;
            // 0x168bac: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168BB0u;
}
