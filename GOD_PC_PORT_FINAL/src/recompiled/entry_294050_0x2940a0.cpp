#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_294050
// Address: 0x294050 - 0x2940a0
void entry_294050_0x2940a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_294050_0x2940a0");
#endif

    ctx->pc = 0x294050u;

    // 0x294050: 0x2403007c  addiu       $v1, $zero, 0x7C
    ctx->pc = 0x294050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x294054: 0xc  syscall     0
    ctx->pc = 0x294054u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x294058: 0x3e00008  jr          $ra
    ctx->pc = 0x294058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294060u;
    // 0x294060: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x294060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x294064: 0xc  syscall     0
    ctx->pc = 0x294064u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x294068: 0x3e00008  jr          $ra
    ctx->pc = 0x294068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294070u;
    // 0x294070: 0x2403007e  addiu       $v1, $zero, 0x7E
    ctx->pc = 0x294070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x294074: 0xc  syscall     0
    ctx->pc = 0x294074u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x294078: 0x3e00008  jr          $ra
    ctx->pc = 0x294078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294080u;
    // 0x294080: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x294080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x294084: 0xc  syscall     0
    ctx->pc = 0x294084u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x294088: 0x3e00008  jr          $ra
    ctx->pc = 0x294088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294090u;
    // 0x294090: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x294090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x294094: 0xc  syscall     0
    ctx->pc = 0x294094u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x294098: 0x3e00008  jr          $ra
    ctx->pc = 0x294098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2940A0u;
}
