#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b3160
// Address: 0x1b3160 - 0x1b3188
void entry_1b3160_0x1b3188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b3160_0x1b3188");
#endif

    ctx->pc = 0x1b3160u;

    // 0x1b3160: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x1b3160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1b3164: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3164u;
    {
        const bool branch_taken_0x1b3164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3164) {
            ctx->pc = 0x1B3180u;
            goto label_1b3180;
        }
    }
    ctx->pc = 0x1B316Cu;
    // 0x1b316c: 0x94a20042  lhu         $v0, 0x42($a1)
    ctx->pc = 0x1b316cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 66)));
    // 0x1b3170: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b3170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3178: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b3178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b317c: 0x0  nop
    ctx->pc = 0x1b317cu;
    // NOP
label_1b3180:
    // 0x1b3180: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3180u: goto label_1b3180;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3188u;
}
