#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17b200
// Address: 0x17b200 - 0x17b248
void entry_17b200_0x17b248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17b200_0x17b248");
#endif

    ctx->pc = 0x17b200u;

    // 0x17b200: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17b200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17b204: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x17b204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x17b208: 0x2442c570  addiu       $v0, $v0, -0x3A90
    ctx->pc = 0x17b208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952304));
    // 0x17b20c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x17b20cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x17b210: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x17b210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x17b214: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17b214u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b218: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17b218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17b21c: 0x0  nop
    ctx->pc = 0x17b21cu;
    // NOP
label_17b220:
    // 0x17b220: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17b220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17b224: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17b224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17b228: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x17b228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x17b22c: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x17b22cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17b230: 0x0  nop
    ctx->pc = 0x17b230u;
    // NOP
    // 0x17b234: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17B234u;
    {
        const bool branch_taken_0x17b234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B234u;
            // 0x17b238: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b234) {
            ctx->pc = 0x17B220u;
            runtime->cooperativeGuestYield();
            goto label_17b220;
        }
    }
    ctx->pc = 0x17B23Cu;
    // 0x17b23c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B23Cu;
            // 0x17b240: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B220u: goto label_17b220;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B244u;
    // 0x17b244: 0x0  nop
    ctx->pc = 0x17b244u;
    // NOP
}
