#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2994f8
// Address: 0x2994f8 - 0x299508
void entry_2994f8_0x299508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2994f8_0x299508");
#endif

    ctx->pc = 0x2994f8u;

    // 0x2994f8: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x2994f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x2994fc: 0xc  syscall     0
    ctx->pc = 0x2994fcu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x299500: 0x3e00008  jr          $ra
    ctx->pc = 0x299500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299508u;
}
