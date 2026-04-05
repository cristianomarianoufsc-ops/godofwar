#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14bb20
// Address: 0x14bb20 - 0x14bb58
void entry_14bb20_0x14bb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14bb20_0x14bb58");
#endif

    ctx->pc = 0x14bb20u;

    // 0x14bb20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14bb24: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14bb28: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14bb2c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bb30: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14bb34: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bb38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14bb3c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14bb40: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x14bb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14bb44: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x14bb44u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x14bb48: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x14bb48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x14bb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x14BB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB4Cu;
            // 0x14bb50: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14BB54u;
    // 0x14bb54: 0x0  nop
    ctx->pc = 0x14bb54u;
    // NOP
}
