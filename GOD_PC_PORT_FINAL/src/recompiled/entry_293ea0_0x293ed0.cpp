#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293ea0
// Address: 0x293ea0 - 0x293ed0
void entry_293ea0_0x293ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293ea0_0x293ed0");
#endif

    ctx->pc = 0x293ea0u;

    // 0x293ea0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x293ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x293ea4: 0xc  syscall     0
    ctx->pc = 0x293ea4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x293EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293EB0u;
    // 0x293eb0: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x293eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x293eb4: 0xc  syscall     0
    ctx->pc = 0x293eb4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x293EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293EC0u;
    // 0x293ec0: 0x2403ff99  addiu       $v1, $zero, -0x67
    ctx->pc = 0x293ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967193));
    // 0x293ec4: 0xc  syscall     0
    ctx->pc = 0x293ec4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x293EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293ED0u;
}
