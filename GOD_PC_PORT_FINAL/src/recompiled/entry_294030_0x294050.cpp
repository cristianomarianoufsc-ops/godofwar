#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_294030
// Address: 0x294030 - 0x294050
void entry_294030_0x294050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_294030_0x294050");
#endif

    ctx->pc = 0x294030u;

    // 0x294030: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x294030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x294034: 0xc  syscall     0
    ctx->pc = 0x294034u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x294038: 0x3e00008  jr          $ra
    ctx->pc = 0x294038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294040u;
    // 0x294040: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x294040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x294044: 0xc  syscall     0
    ctx->pc = 0x294044u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x294048: 0x3e00008  jr          $ra
    ctx->pc = 0x294048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294050u;
}
