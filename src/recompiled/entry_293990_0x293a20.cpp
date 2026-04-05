#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293990
// Address: 0x293990 - 0x293a20
void entry_293990_0x293a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293990_0x293a20");
#endif

    ctx->pc = 0x293990u;

    // 0x293990: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x293990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x293994: 0xc  syscall     0
    ctx->pc = 0x293994u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293998: 0x3e00008  jr          $ra
    ctx->pc = 0x293998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2939A0u;
    // 0x2939a0: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x2939a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x2939a4: 0xc  syscall     0
    ctx->pc = 0x2939a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x2939a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2939A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2939B0u;
    // 0x2939b0: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x2939b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x2939b4: 0xc  syscall     0
    ctx->pc = 0x2939b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x2939b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2939B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2939C0u;
    // 0x2939c0: 0x2403ffe6  addiu       $v1, $zero, -0x1A
    ctx->pc = 0x2939c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967270));
    // 0x2939c4: 0xc  syscall     0
    ctx->pc = 0x2939c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x2939c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2939C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2939D0u;
    // 0x2939d0: 0x2403ffe5  addiu       $v1, $zero, -0x1B
    ctx->pc = 0x2939d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
    // 0x2939d4: 0xc  syscall     0
    ctx->pc = 0x2939d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x2939d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2939D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2939E0u;
    // 0x2939e0: 0x2403ffe4  addiu       $v1, $zero, -0x1C
    ctx->pc = 0x2939e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x2939e4: 0xc  syscall     0
    ctx->pc = 0x2939e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x2939e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2939E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2939F0u;
    // 0x2939f0: 0x2403ffe3  addiu       $v1, $zero, -0x1D
    ctx->pc = 0x2939f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x2939f4: 0xc  syscall     0
    ctx->pc = 0x2939f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x2939f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2939F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293A00u;
    // 0x293a00: 0x2403ff02  addiu       $v1, $zero, -0xFE
    ctx->pc = 0x293a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967042));
    // 0x293a04: 0xc  syscall     0
    ctx->pc = 0x293a04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293a08: 0x3e00008  jr          $ra
    ctx->pc = 0x293A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293A10u;
    // 0x293a10: 0x2403ff01  addiu       $v1, $zero, -0xFF
    ctx->pc = 0x293a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x293a14: 0xc  syscall     0
    ctx->pc = 0x293a14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293a18: 0x3e00008  jr          $ra
    ctx->pc = 0x293A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293A20u;
}
