#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_29aa38
// Address: 0x29aa38 - 0x29aa48
void entry_29aa38_0x29aa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_29aa38_0x29aa48");
#endif

    ctx->pc = 0x29aa38u;

    // 0x29aa38: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x29aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x29aa3c: 0xc  syscall     0
    ctx->pc = 0x29aa3cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x29aa40: 0x3e00008  jr          $ra
    ctx->pc = 0x29AA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29AA48u;
}
