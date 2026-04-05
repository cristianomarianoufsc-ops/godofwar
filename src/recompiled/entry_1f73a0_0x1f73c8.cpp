#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f73a0
// Address: 0x1f73a0 - 0x1f73c8
void entry_1f73a0_0x1f73c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f73a0_0x1f73c8");
#endif

    ctx->pc = 0x1f73a0u;

    // 0x1f73a0: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x1f73a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1f73a4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F73A4u;
    {
        const bool branch_taken_0x1f73a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f73a4) {
            ctx->pc = 0x1F73BCu;
            goto label_1f73bc;
        }
    }
    ctx->pc = 0x1F73ACu;
    // 0x1f73ac: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x1f73acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f73b0: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x1f73b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x1f73b4: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x1f73b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x1f73b8: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x1f73b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
label_1f73bc:
    // 0x1f73bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F73BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F73BCu: goto label_1f73bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F73C4u;
    // 0x1f73c4: 0x0  nop
    ctx->pc = 0x1f73c4u;
    // NOP
}
