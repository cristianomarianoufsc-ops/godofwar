#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002a4d70
// Address: 0x2a4d70 - 0x2a4dbc
void FUN_002a4d70_0x2a4d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002a4d70_0x2a4d70");
#endif

    ctx->pc = 0x2a4d70u;

    // 0x2a4d70: 0x3c06bc00  lui         $a2, 0xBC00
    ctx->pc = 0x2a4d70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48128 << 16));
    // 0x2a4d74: 0x8cc603c0  lw          $a2, 0x3C0($a2)
    ctx->pc = 0x2a4d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 960)));
    // 0x2a4d78: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A4D78u;
    {
        const bool branch_taken_0x2a4d78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4D78u;
            // 0x2a4d7c: 0x3c088007  lui         $t0, 0x8007 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d78) {
            ctx->pc = 0x2A4DC0u;
            return;
        }
    }
    ctx->pc = 0x2A4D80u;
    // 0x2a4d80: 0x3c02bc00  lui         $v0, 0xBC00
    ctx->pc = 0x2a4d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48128 << 16));
    // 0x2a4d84: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2a4d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a4d88: 0x25074700  addiu       $a3, $t0, 0x4700
    ctx->pc = 0x2a4d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 18176));
    // 0x2a4d8c: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x2a4d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x2a4d90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a4d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d94: 0x0  nop
    ctx->pc = 0x2a4d94u;
    // NOP
label_2a4d98:
    // 0x2a4d98: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2a4d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2a4d9c: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2a4d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2a4da0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a4da0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4da4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a4da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a4da8: 0x28a20026  slti        $v0, $a1, 0x26
    ctx->pc = 0x2a4da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)38) ? 1 : 0);
    // 0x2a4dac: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2a4dacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a4db0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A4DB0u;
    {
        const bool branch_taken_0x2a4db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4db0) {
            ctx->pc = 0x2A4D98u;
            runtime->cooperativeGuestYield();
            goto label_2a4d98;
        }
    }
    ctx->pc = 0x2A4DB8u;
    // 0x2a4db8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A4DB8u;
    {
        const bool branch_taken_0x2a4db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4db8) {
            ctx->pc = 0x2A4DC4u;
            return;
        }
    }
    ctx->pc = 0x2A4DC0u;
}
