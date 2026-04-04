#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_143c08
// Address: 0x143c08 - 0x143c58
void entry_143c08_0x143c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_143c08_0x143c58");
#endif

    ctx->pc = 0x143c08u;

    // 0x143c08: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x143c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143c0c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x143c0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x143c10: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x143c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x143c14: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x143C14u;
    {
        const bool branch_taken_0x143c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x143C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143C14u;
            // 0x143c18: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c14) {
            ctx->pc = 0x143C3Cu;
            goto label_143c3c;
        }
    }
    ctx->pc = 0x143C1Cu;
    // 0x143c1c: 0x0  nop
    ctx->pc = 0x143c1cu;
    // NOP
label_143c20:
    // 0x143c20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x143c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143c24: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x143c24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143c28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x143c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x143c2c: 0x0  nop
    ctx->pc = 0x143c2cu;
    // NOP
    // 0x143c30: 0x0  nop
    ctx->pc = 0x143c30u;
    // NOP
    // 0x143c34: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x143C34u;
    {
        const bool branch_taken_0x143c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x143C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143C34u;
            // 0x143c38: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c34) {
            ctx->pc = 0x143C20u;
            runtime->cooperativeGuestYield();
            goto label_143c20;
        }
    }
    ctx->pc = 0x143C3Cu;
label_143c3c:
    // 0x143c3c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x143C3Cu;
    {
        const bool branch_taken_0x143c3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x143c3c) {
            ctx->pc = 0x143C50u;
            goto label_143c50;
        }
    }
    ctx->pc = 0x143C44u;
    // 0x143c44: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x143c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143c48: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x143c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x143c4c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x143c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_143c50:
    // 0x143c50: 0x3e00008  jr          $ra
    ctx->pc = 0x143C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143C50u;
            // 0x143c54: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143C20u: goto label_143c20;
            case 0x143C3Cu: goto label_143c3c;
            case 0x143C50u: goto label_143c50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143C58u;
}
