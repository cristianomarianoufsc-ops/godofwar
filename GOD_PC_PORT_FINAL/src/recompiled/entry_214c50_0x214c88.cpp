#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_214c50
// Address: 0x214c50 - 0x214c88
void entry_214c50_0x214c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_214c50_0x214c88");
#endif

    ctx->pc = 0x214c50u;

    // 0x214c50: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x214c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x214c54: 0x8c62752c  lw          $v0, 0x752C($v1)
    ctx->pc = 0x214c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29996)));
    // 0x214c58: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x214C58u;
    {
        const bool branch_taken_0x214c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214c58) {
            ctx->pc = 0x214C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214C58u;
            // 0x214c5c: 0x8c8301f0  lw          $v1, 0x1F0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 496)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214C6Cu;
            goto label_214c6c;
        }
    }
    ctx->pc = 0x214C60u;
    // 0x214c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214c64: 0xac62752c  sw          $v0, 0x752C($v1)
    ctx->pc = 0x214c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29996), GPR_U32(ctx, 2));
    // 0x214c68: 0x8c8301f0  lw          $v1, 0x1F0($a0)
    ctx->pc = 0x214c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 496)));
label_214c6c:
    // 0x214c6c: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x214c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x214c70: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x214c70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x214c74: 0x24827528  addiu       $v0, $a0, 0x7528
    ctx->pc = 0x214c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29992));
    // 0x214c78: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x214c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x214c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x214C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214C7Cu;
            // 0x214c80: 0xa0837528  sb          $v1, 0x7528($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 29992), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214C6Cu: goto label_214c6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214C84u;
    // 0x214c84: 0x0  nop
    ctx->pc = 0x214c84u;
    // NOP
}
