#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17cf28
// Address: 0x17cf28 - 0x17cf78
void entry_17cf28_0x17cf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17cf28_0x17cf78");
#endif

    ctx->pc = 0x17cf28u;

    // 0x17cf28: 0x3c090030  lui         $t1, 0x30
    ctx->pc = 0x17cf28u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)48 << 16));
    // 0x17cf2c: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x17cf2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x17cf30: 0x8d274710  lw          $a3, 0x4710($t1)
    ctx->pc = 0x17cf30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 18192)));
    // 0x17cf34: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x17cf34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x17cf38: 0x8d034714  lw          $v1, 0x4714($t0)
    ctx->pc = 0x17cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 18196)));
    // 0x17cf3c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x17cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17cf40: 0xacc24718  sw          $v0, 0x4718($a2)
    ctx->pc = 0x17cf40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18200), GPR_U32(ctx, 2));
    // 0x17cf44: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x17cf44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x17cf48: 0x8cc24718  lw          $v0, 0x4718($a2)
    ctx->pc = 0x17cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18200)));
    // 0x17cf4c: 0x8d074714  lw          $a3, 0x4714($t0)
    ctx->pc = 0x17cf4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 18196)));
    // 0x17cf50: 0x8d234710  lw          $v1, 0x4710($t1)
    ctx->pc = 0x17cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 18192)));
    // 0x17cf54: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17cf58: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x17cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x17cf5c: 0xacc24718  sw          $v0, 0x4718($a2)
    ctx->pc = 0x17cf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18200), GPR_U32(ctx, 2));
    // 0x17cf60: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17cf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17cf64: 0x8d024714  lw          $v0, 0x4714($t0)
    ctx->pc = 0x17cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 18196)));
    // 0x17cf68: 0xad234710  sw          $v1, 0x4710($t1)
    ctx->pc = 0x17cf68u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 18192), GPR_U32(ctx, 3));
    // 0x17cf6c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x17cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x17cf70: 0x3e00008  jr          $ra
    ctx->pc = 0x17CF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF70u;
            // 0x17cf74: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CF78u;
}
