#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_21ff00
// Address: 0x21ff00 - 0x21ff60
void entry_21ff00_0x21ff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_21ff00_0x21ff60");
#endif

    ctx->pc = 0x21ff00u;

    // 0x21ff00: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x21ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x21ff04: 0x8c83c7d4  lw          $v1, -0x382C($a0)
    ctx->pc = 0x21ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952916)));
    // 0x21ff08: 0x8c82c7d4  lw          $v0, -0x382C($a0)
    ctx->pc = 0x21ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952916)));
    // 0x21ff0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21ff10: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x21ff10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21ff14: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21FF14u;
    {
        const bool branch_taken_0x21ff14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FF14u;
            // 0x21ff18: 0x24024e20  addiu       $v0, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff14) {
            ctx->pc = 0x21FF54u;
            goto label_21ff54;
        }
    }
    ctx->pc = 0x21FF1Cu;
    // 0x21ff1c: 0x0  nop
    ctx->pc = 0x21ff1cu;
    // NOP
label_21ff20:
    // 0x21ff20: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x21ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_21ff24:
    // 0x21ff24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21ff28: 0x0  nop
    ctx->pc = 0x21ff28u;
    // NOP
    // 0x21ff2c: 0x0  nop
    ctx->pc = 0x21ff2cu;
    // NOP
    // 0x21ff30: 0x0  nop
    ctx->pc = 0x21ff30u;
    // NOP
    // 0x21ff34: 0x0  nop
    ctx->pc = 0x21ff34u;
    // NOP
    // 0x21ff38: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21FF38u;
    {
        const bool branch_taken_0x21ff38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ff38) {
            ctx->pc = 0x21FF24u;
            runtime->cooperativeGuestYield();
            goto label_21ff24;
        }
    }
    ctx->pc = 0x21FF40u;
    // 0x21ff40: 0x0  nop
    ctx->pc = 0x21ff40u;
    // NOP
    // 0x21ff44: 0x8c82c7d4  lw          $v0, -0x382C($a0)
    ctx->pc = 0x21ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952916)));
    // 0x21ff48: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x21ff48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21ff4c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x21FF4Cu;
    {
        const bool branch_taken_0x21ff4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FF4Cu;
            // 0x21ff50: 0x24024e20  addiu       $v0, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff4c) {
            ctx->pc = 0x21FF20u;
            runtime->cooperativeGuestYield();
            goto label_21ff20;
        }
    }
    ctx->pc = 0x21FF54u;
label_21ff54:
    // 0x21ff54: 0x3e00008  jr          $ra
    ctx->pc = 0x21FF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21FF20u: goto label_21ff20;
            case 0x21FF24u: goto label_21ff24;
            case 0x21FF54u: goto label_21ff54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21FF5Cu;
    // 0x21ff5c: 0x0  nop
    ctx->pc = 0x21ff5cu;
    // NOP
}
