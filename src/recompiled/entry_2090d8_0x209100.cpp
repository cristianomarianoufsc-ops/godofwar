#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2090d8
// Address: 0x2090d8 - 0x209100
void entry_2090d8_0x209100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2090d8_0x209100");
#endif

    ctx->pc = 0x2090d8u;

    // 0x2090d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2090d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2090dc: 0xa080009f  sb          $zero, 0x9F($a0)
    ctx->pc = 0x2090dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 159), (uint8_t)GPR_U32(ctx, 0));
    // 0x2090e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2090e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2090e4: 0xa080009c  sb          $zero, 0x9C($a0)
    ctx->pc = 0x2090e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x2090e8: 0xac8200a8  sw          $v0, 0xA8($a0)
    ctx->pc = 0x2090e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 2));
    // 0x2090ec: 0xac8200a0  sw          $v0, 0xA0($a0)
    ctx->pc = 0x2090ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
    // 0x2090f0: 0xac8200a4  sw          $v0, 0xA4($a0)
    ctx->pc = 0x2090f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 2));
    // 0x2090f4: 0xa080009d  sb          $zero, 0x9D($a0)
    ctx->pc = 0x2090f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 157), (uint8_t)GPR_U32(ctx, 0));
    // 0x2090f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2090F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2090FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2090F8u;
            // 0x2090fc: 0xa080009e  sb          $zero, 0x9E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 158), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209100u;
}
