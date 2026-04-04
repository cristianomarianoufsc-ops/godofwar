#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_15ece8
// Address: 0x15ece8 - 0x15ed28
void entry_15ece8_0x15ed28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_15ece8_0x15ed28");
#endif

    ctx->pc = 0x15ece8u;

    // 0x15ece8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x15ece8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x15ecec: 0x8ca2c294  lw          $v0, -0x3D6C($a1)
    ctx->pc = 0x15ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294951572)));
    // 0x15ecf0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x15ecf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15ecf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15ECF4u;
    {
        const bool branch_taken_0x15ecf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15ECF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ECF4u;
            // 0x15ecf8: 0x8ca4c294  lw          $a0, -0x3D6C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294951572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ecf4) {
            ctx->pc = 0x15ED08u;
            goto label_15ed08;
        }
    }
    ctx->pc = 0x15ECFCu;
    // 0x15ecfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ed00: 0xaca2c294  sw          $v0, -0x3D6C($a1)
    ctx->pc = 0x15ed00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294951572), GPR_U32(ctx, 2));
    // 0x15ed04: 0x8ca4c294  lw          $a0, -0x3D6C($a1)
    ctx->pc = 0x15ed04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294951572)));
label_15ed08:
    // 0x15ed08: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x15ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x15ed0c: 0x2442c288  addiu       $v0, $v0, -0x3D78
    ctx->pc = 0x15ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951560));
    // 0x15ed10: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15ed10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15ed14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15ed18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15ed18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15ed1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15ed20: 0x3e00008  jr          $ra
    ctx->pc = 0x15ED20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ED24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED20u;
            // 0x15ed24: 0xaca4c294  sw          $a0, -0x3D6C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294951572), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15ED08u: goto label_15ed08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15ED28u;
}
