#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_294d00
// Address: 0x294d00 - 0x294d40
void entry_294d00_0x294d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_294d00_0x294d40");
#endif

    ctx->pc = 0x294d00u;

    // 0x294d00: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x294d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d04: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x294d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x294d08: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x294d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x294d0c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x294d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x294d10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x294d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x294d14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x294d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x294d18: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x294d18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x294d1c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x294d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x294d20: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x294d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x294d24: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x294D24u;
    {
        const bool branch_taken_0x294d24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x294D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294D24u;
            // 0x294d28: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d24) {
            ctx->pc = 0x294D34u;
            goto label_294d34;
        }
    }
    ctx->pc = 0x294D2Cu;
    // 0x294d2c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x294d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x294d30: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x294d30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_294d34:
    // 0x294d34: 0x3e00008  jr          $ra
    ctx->pc = 0x294D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294D34u: goto label_294d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x294D3Cu;
    // 0x294d3c: 0x0  nop
    ctx->pc = 0x294d3cu;
    // NOP
}
