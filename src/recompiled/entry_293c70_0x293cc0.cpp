#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293c70
// Address: 0x293c70 - 0x293cc0
void entry_293c70_0x293cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293c70_0x293cc0");
#endif

    ctx->pc = 0x293c70u;

    // 0x293c70: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x293c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x293c74: 0xc  syscall     0
    ctx->pc = 0x293c74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293c78: 0x3e00008  jr          $ra
    ctx->pc = 0x293C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293C80u;
    // 0x293c80: 0x2403ffba  addiu       $v1, $zero, -0x46
    ctx->pc = 0x293c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967226));
    // 0x293c84: 0xc  syscall     0
    ctx->pc = 0x293c84u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293c88: 0x3e00008  jr          $ra
    ctx->pc = 0x293C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293C90u;
    // 0x293c90: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x293c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x293c94: 0xc  syscall     0
    ctx->pc = 0x293c94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293c98: 0x3e00008  jr          $ra
    ctx->pc = 0x293C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293CA0u;
    // 0x293ca0: 0x2403ffb8  addiu       $v1, $zero, -0x48
    ctx->pc = 0x293ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967224));
    // 0x293ca4: 0xc  syscall     0
    ctx->pc = 0x293ca4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x293CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293CB0u;
    // 0x293cb0: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x293cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x293cb4: 0xc  syscall     0
    ctx->pc = 0x293cb4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x293CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293CC0u;
}
