#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_11f468
// Address: 0x11f468 - 0x11f498
void entry_11f468_0x11f498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_11f468_0x11f498");
#endif

    ctx->pc = 0x11f468u;

    // 0x11f468: 0x2482022c  addiu       $v0, $a0, 0x22C
    ctx->pc = 0x11f468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    // 0x11f46c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x11f46cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x11f470: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x11f470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11f474: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11f474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f478: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F478u;
    {
        const bool branch_taken_0x11f478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x11f478) {
            ctx->pc = 0x11F490u;
            goto label_11f490;
        }
    }
    ctx->pc = 0x11F480u;
    // 0x11f480: 0x9482462e  lhu         $v0, 0x462E($a0)
    ctx->pc = 0x11f480u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 17966)));
    // 0x11f484: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x11f484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x11f488: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11f488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11f48c: 0xa482462e  sh          $v0, 0x462E($a0)
    ctx->pc = 0x11f48cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 17966), (uint16_t)GPR_U32(ctx, 2));
label_11f490:
    // 0x11f490: 0x3e00008  jr          $ra
    ctx->pc = 0x11F490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F490u: goto label_11f490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F498u;
}
