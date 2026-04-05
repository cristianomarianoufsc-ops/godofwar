#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d8c68
// Address: 0x1d8c68 - 0x1d8cb0
void entry_1d8c68_0x1d8cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d8c68_0x1d8cb0");
#endif

    ctx->pc = 0x1d8c68u;

    // 0x1d8c68: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d8c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d8c6c: 0x24462cc0  addiu       $a2, $v0, 0x2CC0
    ctx->pc = 0x1d8c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1d8c70: 0x90c30077  lbu         $v1, 0x77($a2)
    ctx->pc = 0x1d8c70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 119)));
    // 0x1d8c74: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1d8c74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d8c78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8C78u;
    {
        const bool branch_taken_0x1d8c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C78u;
            // 0x1d8c7c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c78) {
            ctx->pc = 0x1D8C88u;
            goto label_1d8c88;
        }
    }
    ctx->pc = 0x1D8C80u;
    // 0x1d8c80: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C80u;
            // 0x1d8c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8C88u: goto label_1d8c88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8C88u;
label_1d8c88:
    // 0x1d8c88: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1d8c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d8c8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d8c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8c90: 0xa0c20077  sb          $v0, 0x77($a2)
    ctx->pc = 0x1d8c90u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 119), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8c94: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1d8c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1d8c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8c9c: 0x8c64cb94  lw          $a0, -0x346C($v1)
    ctx->pc = 0x1d8c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953876)));
    // 0x1d8ca0: 0x90c30077  lbu         $v1, 0x77($a2)
    ctx->pc = 0x1d8ca0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 119)));
    // 0x1d8ca4: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x1d8ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
    // 0x1d8ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CA8u;
            // 0x1d8cac: 0xace501c0  sw          $a1, 0x1C0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 448), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8C88u: goto label_1d8c88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8CB0u;
}
