#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1fd0c8
// Address: 0x1fd0c8 - 0x1fd0f0
void entry_1fd0c8_0x1fd0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1fd0c8_0x1fd0f0");
#endif

    ctx->pc = 0x1fd0c8u;

    // 0x1fd0c8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD0C8u;
    {
        const bool branch_taken_0x1fd0c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD0C8u;
            // 0x1fd0cc: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd0c8) {
            ctx->pc = 0x1FD0DCu;
            goto label_1fd0dc;
        }
    }
    ctx->pc = 0x1FD0D0u;
    // 0x1fd0d0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1fd0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1fd0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD0D4u;
            // 0x1fd0d8: 0xac8200a8  sw          $v0, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD0DCu: goto label_1fd0dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD0DCu;
label_1fd0dc:
    // 0x1fd0dc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1fd0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1fd0e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fd0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fd0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD0E4u;
            // 0x1fd0e8: 0xac8200a8  sw          $v0, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD0DCu: goto label_1fd0dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD0ECu;
    // 0x1fd0ec: 0x0  nop
    ctx->pc = 0x1fd0ecu;
    // NOP
}
