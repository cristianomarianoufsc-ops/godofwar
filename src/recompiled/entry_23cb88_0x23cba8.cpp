#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23cb88
// Address: 0x23cb88 - 0x23cba8
void entry_23cb88_0x23cba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23cb88_0x23cba8");
#endif

    ctx->pc = 0x23cb88u;

    // 0x23cb88: 0x3e00008  jr          $ra
    ctx->pc = 0x23CB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CB88u;
            // 0x23cb8c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23CB90u;
    // 0x23cb90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23cb94: 0x3e00008  jr          $ra
    ctx->pc = 0x23CB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CB94u;
            // 0x23cb98: 0xac824634  sw          $v0, 0x4634($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 17972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23CB9Cu;
    // 0x23cb9c: 0x0  nop
    ctx->pc = 0x23cb9cu;
    // NOP
    // 0x23cba0: 0x3e00008  jr          $ra
    ctx->pc = 0x23CBA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CBA0u;
            // 0x23cba4: 0xac804634  sw          $zero, 0x4634($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 17972), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23CBA8u;
}
