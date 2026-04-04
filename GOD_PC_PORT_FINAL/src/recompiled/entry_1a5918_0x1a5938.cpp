#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a5918
// Address: 0x1a5918 - 0x1a5938
void entry_1a5918_0x1a5938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a5918_0x1a5938");
#endif

    ctx->pc = 0x1a5918u;

    // 0x1a5918: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5918u;
    {
        const bool branch_taken_0x1a5918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A591Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5918u;
            // 0x1a591c: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5918) {
            ctx->pc = 0x1A592Cu;
            goto label_1a592c;
        }
    }
    ctx->pc = 0x1A5920u;
    // 0x1a5920: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1a5920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1a5924: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5924u;
            // 0x1a5928: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A592Cu: goto label_1a592c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A592Cu;
label_1a592c:
    // 0x1a592c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1a592cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1a5930: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5930u;
            // 0x1a5934: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A592Cu: goto label_1a592c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5938u;
}
