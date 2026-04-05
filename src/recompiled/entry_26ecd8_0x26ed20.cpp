#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26ecd8
// Address: 0x26ecd8 - 0x26ed20
void entry_26ecd8_0x26ed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26ecd8_0x26ed20");
#endif

    ctx->pc = 0x26ecd8u;

    // 0x26ecd8: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26ecdc: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x26ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x26ece0: 0xac40a600  sw          $zero, -0x5A00($v0)
    ctx->pc = 0x26ece0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294944256), GPR_U32(ctx, 0));
    // 0x26ece4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26ece4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ece8: 0xac60a604  sw          $zero, -0x59FC($v1)
    ctx->pc = 0x26ece8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944260), GPR_U32(ctx, 0));
    // 0x26ecec: 0x0  nop
    ctx->pc = 0x26ececu;
    // NOP
label_26ecf0:
    // 0x26ecf0: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26ecf4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x26ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x26ecf8: 0x2442a5d8  addiu       $v0, $v0, -0x5A28
    ctx->pc = 0x26ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944216));
    // 0x26ecfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26ecfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ed00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26ed04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26ed04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26ed08: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x26ed08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x26ed0c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x26ED0Cu;
    {
        const bool branch_taken_0x26ed0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26ED10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ED0Cu;
            // 0x26ed10: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed0c) {
            ctx->pc = 0x26ECF0u;
            runtime->cooperativeGuestYield();
            goto label_26ecf0;
        }
    }
    ctx->pc = 0x26ED14u;
    // 0x26ed14: 0x3e00008  jr          $ra
    ctx->pc = 0x26ED14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26ECF0u: goto label_26ecf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26ED1Cu;
    // 0x26ed1c: 0x0  nop
    ctx->pc = 0x26ed1cu;
    // NOP
}
