#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_149f78
// Address: 0x149f78 - 0x149fa0
void entry_149f78_0x149fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_149f78_0x149fa0");
#endif

    ctx->pc = 0x149f78u;

    // 0x149f78: 0x8c820cfc  lw          $v0, 0xCFC($a0)
    ctx->pc = 0x149f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3324)));
    // 0x149f7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x149F7Cu;
    {
        const bool branch_taken_0x149f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149f7c) {
            ctx->pc = 0x149F94u;
            goto label_149f94;
        }
    }
    ctx->pc = 0x149F84u;
    // 0x149f84: 0xac800d24  sw          $zero, 0xD24($a0)
    ctx->pc = 0x149f84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3364), GPR_U32(ctx, 0));
    // 0x149f88: 0xac800d18  sw          $zero, 0xD18($a0)
    ctx->pc = 0x149f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 0));
    // 0x149f8c: 0xac800d1c  sw          $zero, 0xD1C($a0)
    ctx->pc = 0x149f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 0));
    // 0x149f90: 0xac800d20  sw          $zero, 0xD20($a0)
    ctx->pc = 0x149f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 0));
label_149f94:
    // 0x149f94: 0x3e00008  jr          $ra
    ctx->pc = 0x149F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x149F94u: goto label_149f94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x149F9Cu;
    // 0x149f9c: 0x0  nop
    ctx->pc = 0x149f9cu;
    // NOP
}
