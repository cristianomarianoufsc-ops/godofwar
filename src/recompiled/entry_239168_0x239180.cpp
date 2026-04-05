#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_239168
// Address: 0x239168 - 0x239180
void entry_239168_0x239180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_239168_0x239180");
#endif

    ctx->pc = 0x239168u;

    // 0x239168: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x239168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23916c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x23916cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x239170: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x239170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x239174: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x239174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x239178: 0x3e00008  jr          $ra
    ctx->pc = 0x239178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23917Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239178u;
            // 0x23917c: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239180u;
}
