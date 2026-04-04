#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ff688
// Address: 0x1ff688 - 0x1ff6b0
void entry_1ff688_0x1ff6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ff688_0x1ff6b0");
#endif

    ctx->pc = 0x1ff688u;

    // 0x1ff688: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1ff688u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff68c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1ff68cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1ff690: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x1ff690u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1ff694: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x1ff694u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x1ff698: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x1ff698u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1ff69c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x1ff69cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x1ff6a0: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x1ff6a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1ff6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF6A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF6A4u;
            // 0x1ff6a8: 0x7c820030  sq          $v0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF6ACu;
    // 0x1ff6ac: 0x0  nop
    ctx->pc = 0x1ff6acu;
    // NOP
}
