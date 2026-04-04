#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_294020
// Address: 0x294020 - 0x294030
void entry_294020_0x294030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_294020_0x294030");
#endif

    ctx->pc = 0x294020u;

    // 0x294020: 0x24030079  addiu       $v1, $zero, 0x79
    ctx->pc = 0x294020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x294024: 0xc  syscall     0
    ctx->pc = 0x294024u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x294028: 0x3e00008  jr          $ra
    ctx->pc = 0x294028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294030u;
}
