#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13fa48
// Address: 0x13fa48 - 0x13fa78
void entry_13fa48_0x13fa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13fa48_0x13fa78");
#endif

    ctx->pc = 0x13fa48u;

    // 0x13fa48: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13fa4c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13fa50: 0x8c441034  lw          $a0, 0x1034($v0)
    ctx->pc = 0x13fa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4148)));
    // 0x13fa54: 0x8c62f168  lw          $v0, -0xE98($v1)
    ctx->pc = 0x13fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x13fa58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13fa58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13fa5c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x13fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13fa60: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x13fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x13fa64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13fa64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13fa68: 0x3e00008  jr          $ra
    ctx->pc = 0x13FA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FA68u;
            // 0x13fa6c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13FA70u;
    // 0x13fa70: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x13fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x13fa74: 0x0  nop
    ctx->pc = 0x13fa74u;
    // NOP
}
