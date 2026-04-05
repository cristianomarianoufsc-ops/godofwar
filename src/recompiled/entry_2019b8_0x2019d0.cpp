#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2019b8
// Address: 0x2019b8 - 0x2019d0
void entry_2019b8_0x2019d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2019b8_0x2019d0");
#endif

    ctx->pc = 0x2019b8u;

    // 0x2019b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2019b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2019bc: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2019bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2019c0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x2019c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x2019c4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2019c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2019c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2019C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2019CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2019C8u;
            // 0x2019cc: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2019D0u;
}
