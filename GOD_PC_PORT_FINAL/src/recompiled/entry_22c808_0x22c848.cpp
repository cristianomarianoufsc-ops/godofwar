#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_22c808
// Address: 0x22c808 - 0x22c848
void entry_22c808_0x22c848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_22c808_0x22c848");
#endif

    ctx->pc = 0x22c808u;

    // 0x22c808: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x22c808u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x22c80c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22c810: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x22c810u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x22c814: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x22c814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x22c818: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22c818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22c81c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22c81cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22c820: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22c820u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x22c824: 0xac601210  sw          $zero, 0x1210($v1)
    ctx->pc = 0x22c824u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4624), GPR_U32(ctx, 0));
    // 0x22c828: 0xace0120c  sw          $zero, 0x120C($a3)
    ctx->pc = 0x22c828u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4620), GPR_U32(ctx, 0));
    // 0x22c82c: 0xac40121c  sw          $zero, 0x121C($v0)
    ctx->pc = 0x22c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 0));
    // 0x22c830: 0xac801218  sw          $zero, 0x1218($a0)
    ctx->pc = 0x22c830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4632), GPR_U32(ctx, 0));
    // 0x22c834: 0xad001214  sw          $zero, 0x1214($t0)
    ctx->pc = 0x22c834u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4628), GPR_U32(ctx, 0));
    // 0x22c838: 0xaca01224  sw          $zero, 0x1224($a1)
    ctx->pc = 0x22c838u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4644), GPR_U32(ctx, 0));
    // 0x22c83c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C83Cu;
            // 0x22c840: 0xacc01228  sw          $zero, 0x1228($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C844u;
    // 0x22c844: 0x0  nop
    ctx->pc = 0x22c844u;
    // NOP
}
