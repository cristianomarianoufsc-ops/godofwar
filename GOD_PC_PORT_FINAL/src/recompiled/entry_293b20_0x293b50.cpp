#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293b20
// Address: 0x293b20 - 0x293b50
void entry_293b20_0x293b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293b20_0x293b50");
#endif

    ctx->pc = 0x293b20u;

    // 0x293b20: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x293b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x293b24: 0xc  syscall     0
    ctx->pc = 0x293b24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293b28: 0x3e00008  jr          $ra
    ctx->pc = 0x293B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293B30u;
    // 0x293b30: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x293b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x293b34: 0xc  syscall     0
    ctx->pc = 0x293b34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293b38: 0x3e00008  jr          $ra
    ctx->pc = 0x293B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293B40u;
    // 0x293b40: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x293b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x293b44: 0xc  syscall     0
    ctx->pc = 0x293b44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293b48: 0x3e00008  jr          $ra
    ctx->pc = 0x293B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293B50u;
}
