#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00293c60
// Address: 0x293c60 - 0x293c70
void FUN_00293c60_0x293c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00293c60_0x293c60");
#endif

    ctx->pc = 0x293c60u;

    // 0x293c60: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x293c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x293c64: 0xc  syscall     0
    ctx->pc = 0x293c64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293c68: 0x3e00008  jr          $ra
    ctx->pc = 0x293C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293C70u;
}
