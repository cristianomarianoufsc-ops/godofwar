#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_299550
// Address: 0x299550 - 0x299560
void entry_299550_0x299560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_299550_0x299560");
#endif

    ctx->pc = 0x299550u;

    // 0x299550: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x299550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x299554: 0xc  syscall     0
    ctx->pc = 0x299554u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x299558: 0x3e00008  jr          $ra
    ctx->pc = 0x299558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299560u;
}
