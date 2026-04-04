#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_244e68
// Address: 0x244e68 - 0x244ea0
void entry_244e68_0x244ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_244e68_0x244ea0");
#endif

    ctx->pc = 0x244e68u;

    // 0x244e68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x244e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x244e6c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x244e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x244e70: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x244e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x244e74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x244e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x244e78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x244e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x244e7c: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x244e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x244e80: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x244E80u;
    {
        const bool branch_taken_0x244e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x244e80) {
            ctx->pc = 0x244E84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x244E80u;
            // 0x244e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x244E90u;
            goto label_244e90;
        }
    }
    ctx->pc = 0x244E88u;
    // 0x244e88: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x244e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x244e8c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x244e8cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_244e90:
    // 0x244e90: 0x3e00008  jr          $ra
    ctx->pc = 0x244E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244E90u;
            // 0x244e94: 0x24420124  addiu       $v0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244E90u: goto label_244e90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244E98u;
    // 0x244e98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x244e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x244e9c: 0x0  nop
    ctx->pc = 0x244e9cu;
    // NOP
}
