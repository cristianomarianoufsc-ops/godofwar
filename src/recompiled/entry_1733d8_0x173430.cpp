#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1733d8
// Address: 0x1733d8 - 0x173430
void entry_1733d8_0x173430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1733d8_0x173430");
#endif

    ctx->pc = 0x1733d8u;

    // 0x1733d8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1733d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1733dc: 0x8c42c398  lw          $v0, -0x3C68($v0)
    ctx->pc = 0x1733dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951832)));
    // 0x1733e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1733E0u;
    {
        const bool branch_taken_0x1733e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1733E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1733E0u;
            // 0x1733e4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1733e0) {
            ctx->pc = 0x173428u;
            goto label_173428;
        }
    }
    ctx->pc = 0x1733E8u;
    // 0x1733e8: 0x8c42be50  lw          $v0, -0x41B0($v0)
    ctx->pc = 0x1733e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950480)));
    // 0x1733ec: 0x8c430270  lw          $v1, 0x270($v0)
    ctx->pc = 0x1733ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x1733f0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1733F0u;
    {
        const bool branch_taken_0x1733f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1733F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1733F0u;
            // 0x1733f4: 0x8c440274  lw          $a0, 0x274($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1733f0) {
            ctx->pc = 0x173410u;
            goto label_173410;
        }
    }
    ctx->pc = 0x1733F8u;
    // 0x1733f8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1733f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1733fc: 0x8ca2c39c  lw          $v0, -0x3C64($a1)
    ctx->pc = 0x1733fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294951836)));
    // 0x173400: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x173400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x173404: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x173404u;
    {
        const bool branch_taken_0x173404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173404) {
            ctx->pc = 0x173408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173404u;
            // 0x173408: 0xaca3c39c  sw          $v1, -0x3C64($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294951836), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173410u;
            goto label_173410;
        }
    }
    ctx->pc = 0x17340Cu;
    // 0x17340c: 0x0  nop
    ctx->pc = 0x17340cu;
    // NOP
label_173410:
    // 0x173410: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x173410u;
    {
        const bool branch_taken_0x173410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x173414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173410u;
            // 0x173414: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173410) {
            ctx->pc = 0x173428u;
            goto label_173428;
        }
    }
    ctx->pc = 0x173418u;
    // 0x173418: 0x8c62c3a0  lw          $v0, -0x3C60($v1)
    ctx->pc = 0x173418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951840)));
    // 0x17341c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x17341cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x173420: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x173420u;
    {
        const bool branch_taken_0x173420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173420) {
            ctx->pc = 0x173424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173420u;
            // 0x173424: 0xac64c3a0  sw          $a0, -0x3C60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294951840), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173428u;
            goto label_173428;
        }
    }
    ctx->pc = 0x173428u;
label_173428:
    // 0x173428: 0x3e00008  jr          $ra
    ctx->pc = 0x173428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173410u: goto label_173410;
            case 0x173428u: goto label_173428;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173430u;
}
