#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293ad0
// Address: 0x293ad0 - 0x293b10
void entry_293ad0_0x293b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293ad0_0x293b10");
#endif

    ctx->pc = 0x293ad0u;

    // 0x293ad0: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x293ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x293ad4: 0xc  syscall     0
    ctx->pc = 0x293ad4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x293AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293AE0u;
    // 0x293ae0: 0x2403ffd4  addiu       $v1, $zero, -0x2C
    ctx->pc = 0x293ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967252));
    // 0x293ae4: 0xc  syscall     0
    ctx->pc = 0x293ae4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x293AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293AF0u;
    // 0x293af0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x293af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x293af4: 0xc  syscall     0
    ctx->pc = 0x293af4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293af8: 0x3e00008  jr          $ra
    ctx->pc = 0x293AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293B00u;
    // 0x293b00: 0x2403ffd2  addiu       $v1, $zero, -0x2E
    ctx->pc = 0x293b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967250));
    // 0x293b04: 0xc  syscall     0
    ctx->pc = 0x293b04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293b08: 0x3e00008  jr          $ra
    ctx->pc = 0x293B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293B10u;
}
