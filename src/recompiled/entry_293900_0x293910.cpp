#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293900
// Address: 0x293900 - 0x293910
void entry_293900_0x293910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293900_0x293910");
#endif

    ctx->pc = 0x293900u;

    // 0x293900: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x293900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x293904: 0xc  syscall     0
    ctx->pc = 0x293904u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293908: 0x3e00008  jr          $ra
    ctx->pc = 0x293908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293910u;
}
