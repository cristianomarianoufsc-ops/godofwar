#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26ee80
// Address: 0x26ee80 - 0x26eeb0
void entry_26ee80_0x26eeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26ee80_0x26eeb0");
#endif

    ctx->pc = 0x26ee80u;

    // 0x26ee80: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x26ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x26ee84: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x26ee84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x26ee88: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x26ee88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x26ee8c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x26ee8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x26ee90: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x26ee90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x26ee94: 0x73e3c  dsll32      $a3, $a3, 24
    ctx->pc = 0x26ee94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
    // 0x26ee98: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x26ee98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x26ee9c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x26ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x26eea0: 0xfc820028  sd          $v0, 0x28($a0)
    ctx->pc = 0x26eea0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 2));
    // 0x26eea4: 0x3e00008  jr          $ra
    ctx->pc = 0x26EEA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EEA4u;
            // 0x26eea8: 0xfc850020  sd          $a1, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26EEACu;
    // 0x26eeac: 0x0  nop
    ctx->pc = 0x26eeacu;
    // NOP
}
