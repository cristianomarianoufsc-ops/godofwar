#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293940
// Address: 0x293940 - 0x293950
void entry_293940_0x293950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293940_0x293950");
#endif

    ctx->pc = 0x293940u;

    // 0x293940: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x293940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x293944: 0xc  syscall     0
    ctx->pc = 0x293944u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293948: 0x3e00008  jr          $ra
    ctx->pc = 0x293948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293950u;
}
