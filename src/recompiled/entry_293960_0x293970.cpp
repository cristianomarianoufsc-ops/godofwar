#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293960
// Address: 0x293960 - 0x293970
void entry_293960_0x293970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293960_0x293970");
#endif

    ctx->pc = 0x293960u;

    // 0x293960: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x293960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x293964: 0xc  syscall     0
    ctx->pc = 0x293964u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293968: 0x3e00008  jr          $ra
    ctx->pc = 0x293968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293970u;
}
