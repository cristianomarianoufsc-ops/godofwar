#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293820
// Address: 0x293820 - 0x293840
void entry_293820_0x293840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293820_0x293840");
#endif

    ctx->pc = 0x293820u;

    // 0x293820: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x293820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x293824: 0xc  syscall     0
    ctx->pc = 0x293824u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293828: 0x3e00008  jr          $ra
    ctx->pc = 0x293828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293830u;
    // 0x293830: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x293830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x293834: 0xc  syscall     0
    ctx->pc = 0x293834u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293838: 0x3e00008  jr          $ra
    ctx->pc = 0x293838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293840u;
}
