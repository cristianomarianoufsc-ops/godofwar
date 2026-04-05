#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2943a0
// Address: 0x2943a0 - 0x2943b8
void entry_2943a0_0x2943b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2943a0_0x2943b8");
#endif

    ctx->pc = 0x2943a0u;

    // 0x2943a0: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x2943a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2943a4: 0xfca00048  sd          $zero, 0x48($a1)
    ctx->pc = 0x2943a4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 0));
    // 0x2943a8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2943a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2943ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2943ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2943B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2943ACu;
            // 0x2943b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2943B4u;
    // 0x2943b4: 0x0  nop
    ctx->pc = 0x2943b4u;
    // NOP
}
