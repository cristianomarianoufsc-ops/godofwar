#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1443c8
// Address: 0x1443c8 - 0x144410
void entry_1443c8_0x144410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1443c8_0x144410");
#endif

    ctx->pc = 0x1443c8u;

    // 0x1443c8: 0x8c820c00  lw          $v0, 0xC00($a0)
    ctx->pc = 0x1443c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3072)));
    // 0x1443cc: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x1443ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1443d0: 0x8c870c04  lw          $a3, 0xC04($a0)
    ctx->pc = 0x1443d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3076)));
    // 0x1443d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1443d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1443d8: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x1443d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1443dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1443dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1443e0: 0xa4c80000  sh          $t0, 0x0($a2)
    ctx->pc = 0x1443e0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1443e4: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x1443e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1443e8: 0xac820c00  sw          $v0, 0xC00($a0)
    ctx->pc = 0x1443e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3072), GPR_U32(ctx, 2));
    // 0x1443ec: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1443ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1443f0: 0x94820c04  lhu         $v0, 0xC04($a0)
    ctx->pc = 0x1443f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3076)));
    // 0x1443f4: 0xace50400  sw          $a1, 0x400($a3)
    ctx->pc = 0x1443f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1024), GPR_U32(ctx, 5));
    // 0x1443f8: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x1443f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1443fc: 0x8c820c04  lw          $v0, 0xC04($a0)
    ctx->pc = 0x1443fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3076)));
    // 0x144400: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x144400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x144404: 0x3e00008  jr          $ra
    ctx->pc = 0x144404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144404u;
            // 0x144408: 0xac820c04  sw          $v0, 0xC04($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14440Cu;
    // 0x14440c: 0x0  nop
    ctx->pc = 0x14440cu;
    // NOP
}
