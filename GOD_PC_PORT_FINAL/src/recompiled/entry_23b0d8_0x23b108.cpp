#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23b0d8
// Address: 0x23b0d8 - 0x23b108
void entry_23b0d8_0x23b108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23b0d8_0x23b108");
#endif

    ctx->pc = 0x23b0d8u;

    // 0x23b0d8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x23b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23b0dc: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x23b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x23b0e0: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x23b0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x23b0e4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x23b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x23b0e8: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x23b0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x23b0ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23b0f0: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x23b0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x23b0f4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23b0f8: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x23b0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x23b0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x23B0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B0FCu;
            // 0x23b100: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B104u;
    // 0x23b104: 0x0  nop
    ctx->pc = 0x23b104u;
    // NOP
}
