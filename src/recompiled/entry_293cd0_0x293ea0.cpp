#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293cd0
// Address: 0x293cd0 - 0x293ea0
void entry_293cd0_0x293ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293cd0_0x293ea0");
#endif

    ctx->pc = 0x293cd0u;

    // 0x293cd0: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x293cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x293cd4: 0xc  syscall     0
    ctx->pc = 0x293cd4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x293CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293CE0u;
    // 0x293ce0: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x293ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x293ce4: 0xc  syscall     0
    ctx->pc = 0x293ce4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x293CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293CF0u;
    // 0x293cf0: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x293cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x293cf4: 0xc  syscall     0
    ctx->pc = 0x293cf4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x293CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293D00u;
    // 0x293d00: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x293d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x293d04: 0xc  syscall     0
    ctx->pc = 0x293d04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293d08: 0x3e00008  jr          $ra
    ctx->pc = 0x293D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293D10u;
    // 0x293d10: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x293d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x293d14: 0xc  syscall     0
    ctx->pc = 0x293d14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293d18: 0x3e00008  jr          $ra
    ctx->pc = 0x293D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293D20u;
    // 0x293d20: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x293d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x293d24: 0xc  syscall     0
    ctx->pc = 0x293d24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293d28: 0x3e00008  jr          $ra
    ctx->pc = 0x293D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293D30u;
    // 0x293d30: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x293d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x293d34: 0xc  syscall     0
    ctx->pc = 0x293d34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293d38: 0x3e00008  jr          $ra
    ctx->pc = 0x293D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293D40u;
    // 0x293d40: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x293d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x293d44: 0xc  syscall     0
    ctx->pc = 0x293d44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293d48: 0x3e00008  jr          $ra
    ctx->pc = 0x293D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293D50u;
    // 0x293d50: 0x2403ffad  addiu       $v1, $zero, -0x53
    ctx->pc = 0x293d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967213));
    // 0x293d54: 0xc  syscall     0
    ctx->pc = 0x293d54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293d58: 0x3e00008  jr          $ra
    ctx->pc = 0x293D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293D60u;
    // 0x293d60: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x293d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x293d64: 0xc  syscall     0
    ctx->pc = 0x293d64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293d68: 0x3e00008  jr          $ra
    ctx->pc = 0x293D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293D70u;
    // 0x293d70: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x293d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
    // 0x293d74: 0xc  syscall     0
    ctx->pc = 0x293d74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293d78: 0x3e00008  jr          $ra
    ctx->pc = 0x293D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293D80u;
    // 0x293d80: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x293d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x293d84: 0xc  syscall     0
    ctx->pc = 0x293d84u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293d88: 0x3e00008  jr          $ra
    ctx->pc = 0x293D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293D90u;
    // 0x293d90: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x293d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x293d94: 0xc  syscall     0
    ctx->pc = 0x293d94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293d98: 0x3e00008  jr          $ra
    ctx->pc = 0x293D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293DA0u;
    // 0x293da0: 0x2403ffa8  addiu       $v1, $zero, -0x58
    ctx->pc = 0x293da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
    // 0x293da4: 0xc  syscall     0
    ctx->pc = 0x293da4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293da8: 0x3e00008  jr          $ra
    ctx->pc = 0x293DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293DB0u;
    // 0x293db0: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x293db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x293db4: 0xc  syscall     0
    ctx->pc = 0x293db4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293db8: 0x3e00008  jr          $ra
    ctx->pc = 0x293DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293DC0u;
    // 0x293dc0: 0x2403ffa6  addiu       $v1, $zero, -0x5A
    ctx->pc = 0x293dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967206));
    // 0x293dc4: 0xc  syscall     0
    ctx->pc = 0x293dc4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x293DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293DD0u;
    // 0x293dd0: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x293dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x293dd4: 0xc  syscall     0
    ctx->pc = 0x293dd4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x293DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293DE0u;
    // 0x293de0: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x293de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x293de4: 0xc  syscall     0
    ctx->pc = 0x293de4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293de8: 0x3e00008  jr          $ra
    ctx->pc = 0x293DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293DF0u;
    // 0x293df0: 0x2403ffa4  addiu       $v1, $zero, -0x5C
    ctx->pc = 0x293df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967204));
    // 0x293df4: 0xc  syscall     0
    ctx->pc = 0x293df4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293df8: 0x3e00008  jr          $ra
    ctx->pc = 0x293DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293E00u;
    // 0x293e00: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x293e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x293e04: 0xc  syscall     0
    ctx->pc = 0x293e04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293e08: 0x3e00008  jr          $ra
    ctx->pc = 0x293E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293E10u;
    // 0x293e10: 0x2403ffa3  addiu       $v1, $zero, -0x5D
    ctx->pc = 0x293e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967203));
    // 0x293e14: 0xc  syscall     0
    ctx->pc = 0x293e14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293e18: 0x3e00008  jr          $ra
    ctx->pc = 0x293E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293E20u;
    // 0x293e20: 0x2403005e  addiu       $v1, $zero, 0x5E
    ctx->pc = 0x293e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x293e24: 0xc  syscall     0
    ctx->pc = 0x293e24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293e28: 0x3e00008  jr          $ra
    ctx->pc = 0x293E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293E30u;
    // 0x293e30: 0x2403ffa2  addiu       $v1, $zero, -0x5E
    ctx->pc = 0x293e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967202));
    // 0x293e34: 0xc  syscall     0
    ctx->pc = 0x293e34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293e38: 0x3e00008  jr          $ra
    ctx->pc = 0x293E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293E40u;
    // 0x293e40: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x293e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x293e44: 0xc  syscall     0
    ctx->pc = 0x293e44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293e48: 0x3e00008  jr          $ra
    ctx->pc = 0x293E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293E50u;
    // 0x293e50: 0x2403ffa1  addiu       $v1, $zero, -0x5F
    ctx->pc = 0x293e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967201));
    // 0x293e54: 0xc  syscall     0
    ctx->pc = 0x293e54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293e58: 0x3e00008  jr          $ra
    ctx->pc = 0x293E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293E60u;
    // 0x293e60: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x293e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x293e64: 0xc  syscall     0
    ctx->pc = 0x293e64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293e68: 0x3e00008  jr          $ra
    ctx->pc = 0x293E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293E70u;
    // 0x293e70: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x293e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x293e74: 0xc  syscall     0
    ctx->pc = 0x293e74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293e78: 0x3e00008  jr          $ra
    ctx->pc = 0x293E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293E80u;
    // 0x293e80: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x293e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x293e84: 0xc  syscall     0
    ctx->pc = 0x293e84u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293e88: 0x3e00008  jr          $ra
    ctx->pc = 0x293E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293E90u;
    // 0x293e90: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x293e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x293e94: 0xc  syscall     0
    ctx->pc = 0x293e94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293e98: 0x3e00008  jr          $ra
    ctx->pc = 0x293E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293EA0u;
}
