#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_107480
// Address: 0x107480 - 0x1074d8
void entry_107480_0x1074d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_107480_0x1074d8");
#endif

    ctx->pc = 0x107480u;

    // 0x107480: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x107480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x107484: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x107484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107488: 0x10870011  beq         $a0, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x107488u;
    {
        const bool branch_taken_0x107488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x107488) {
            ctx->pc = 0x1074D0u;
            goto label_1074d0;
        }
    }
    ctx->pc = 0x107490u;
    // 0x107490: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x107490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x107494: 0x0  nop
    ctx->pc = 0x107494u;
    // NOP
label_107498:
    // 0x107498: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x107498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x10749c: 0x5066000a  beql        $v1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x10749Cu;
    {
        const bool branch_taken_0x10749c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x10749c) {
            ctx->pc = 0x1074A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10749Cu;
            // 0x1074a0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1074C8u;
            goto label_1074c8;
        }
    }
    ctx->pc = 0x1074A4u;
    // 0x1074a4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1074a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1074a8:
    // 0x1074a8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1074a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1074ac: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1074acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x1074b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1074b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1074b4: 0x0  nop
    ctx->pc = 0x1074b4u;
    // NOP
    // 0x1074b8: 0x0  nop
    ctx->pc = 0x1074b8u;
    // NOP
    // 0x1074bc: 0x5466fffa  bnel        $v1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1074BCu;
    {
        const bool branch_taken_0x1074bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1074bc) {
            ctx->pc = 0x1074C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1074BCu;
            // 0x1074c0: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1074A8u;
            runtime->cooperativeGuestYield();
            goto label_1074a8;
        }
    }
    ctx->pc = 0x1074C4u;
    // 0x1074c4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1074c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1074c8:
    // 0x1074c8: 0x5487fff3  bnel        $a0, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1074C8u;
    {
        const bool branch_taken_0x1074c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x1074c8) {
            ctx->pc = 0x1074CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1074C8u;
            // 0x1074cc: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107498u;
            runtime->cooperativeGuestYield();
            goto label_107498;
        }
    }
    ctx->pc = 0x1074D0u;
label_1074d0:
    // 0x1074d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1074D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107498u: goto label_107498;
            case 0x1074A8u: goto label_1074a8;
            case 0x1074C8u: goto label_1074c8;
            case 0x1074D0u: goto label_1074d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1074D8u;
}
