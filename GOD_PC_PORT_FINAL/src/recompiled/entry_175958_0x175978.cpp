#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_175958
// Address: 0x175958 - 0x175978
void entry_175958_0x175978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_175958_0x175978");
#endif

    ctx->pc = 0x175958u;

    // 0x175958: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x175958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x17595c: 0x2462d8d8  addiu       $v0, $v1, -0x2728
    ctx->pc = 0x17595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957272));
    // 0x175960: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x175960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x175964: 0x8c63d8d8  lw          $v1, -0x2728($v1)
    ctx->pc = 0x175964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957272)));
    // 0x175968: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x175968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17596c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175970: 0x3e00008  jr          $ra
    ctx->pc = 0x175970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175970u;
            // 0x175974: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175978u;
}
