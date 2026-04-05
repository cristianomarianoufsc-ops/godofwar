#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293910
// Address: 0x293910 - 0x293920
void entry_293910_0x293920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293910_0x293920");
#endif

    ctx->pc = 0x293910u;

    // 0x293910: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x293910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x293914: 0xc  syscall     0
    ctx->pc = 0x293914u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293918: 0x3e00008  jr          $ra
    ctx->pc = 0x293918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293920u;
}
