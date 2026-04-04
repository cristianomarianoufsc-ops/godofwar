#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2343c8
// Address: 0x2343c8 - 0x234430
void entry_2343c8_0x234430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2343c8_0x234430");
#endif

    ctx->pc = 0x2343c8u;

    // 0x2343c8: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x2343c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2343cc: 0x24830028  addiu       $v1, $a0, 0x28
    ctx->pc = 0x2343ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2343d0: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x2343d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x2343d4: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x2343d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2343d8: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x2343d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x2343dc: 0x24860038  addiu       $a2, $a0, 0x38
    ctx->pc = 0x2343dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x2343e0: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x2343e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x2343e4: 0x24870040  addiu       $a3, $a0, 0x40
    ctx->pc = 0x2343e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2343e8: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x2343e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x2343ec: 0x24880050  addiu       $t0, $a0, 0x50
    ctx->pc = 0x2343ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2343f0: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x2343f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x2343f4: 0x24830048  addiu       $v1, $a0, 0x48
    ctx->pc = 0x2343f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x2343f8: 0xaca50004  sw          $a1, 0x4($a1)
    ctx->pc = 0x2343f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 5));
    // 0x2343fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2343fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234400: 0xac860038  sw          $a2, 0x38($a0)
    ctx->pc = 0x234400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 6));
    // 0x234404: 0x24850058  addiu       $a1, $a0, 0x58
    ctx->pc = 0x234404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x234408: 0xacc60004  sw          $a2, 0x4($a2)
    ctx->pc = 0x234408u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 6));
    // 0x23440c: 0xac870040  sw          $a3, 0x40($a0)
    ctx->pc = 0x23440cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 7));
    // 0x234410: 0xace70004  sw          $a3, 0x4($a3)
    ctx->pc = 0x234410u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 7));
    // 0x234414: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x234414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x234418: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x234418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x23441c: 0xac880050  sw          $t0, 0x50($a0)
    ctx->pc = 0x23441cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 8));
    // 0x234420: 0xad080004  sw          $t0, 0x4($t0)
    ctx->pc = 0x234420u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 8));
    // 0x234424: 0xac850058  sw          $a1, 0x58($a0)
    ctx->pc = 0x234424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
    // 0x234428: 0x3e00008  jr          $ra
    ctx->pc = 0x234428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23442Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234428u;
            // 0x23442c: 0xaca50004  sw          $a1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234430u;
}
