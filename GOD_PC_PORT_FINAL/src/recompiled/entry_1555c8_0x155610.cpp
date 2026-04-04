#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1555c8
// Address: 0x1555c8 - 0x155610
void entry_1555c8_0x155610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1555c8_0x155610");
#endif

    ctx->pc = 0x1555c8u;

    // 0x1555c8: 0x8c860024  lw          $a2, 0x24($a0)
    ctx->pc = 0x1555c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1555cc: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1555CCu;
    {
        const bool branch_taken_0x1555cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1555cc) {
            ctx->pc = 0x155608u;
            goto label_155608;
        }
    }
    ctx->pc = 0x1555D4u;
    // 0x1555d4: 0x0  nop
    ctx->pc = 0x1555d4u;
    // NOP
label_1555d8:
    // 0x1555d8: 0x24c4fff8  addiu       $a0, $a2, -0x8
    ctx->pc = 0x1555d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x1555dc: 0x6200a  movz        $a0, $zero, $a2
    ctx->pc = 0x1555dcu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1555e0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1555e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1555e4: 0x30a27fff  andi        $v0, $a1, 0x7FFF
    ctx->pc = 0x1555e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x1555e8: 0x246339a8  addiu       $v1, $v1, 0x39A8
    ctx->pc = 0x1555e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14760));
    // 0x1555ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1555ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1555f0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1555f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1555f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1555f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1555f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1555f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1555fc: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1555FCu;
    {
        const bool branch_taken_0x1555fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x155600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1555FCu;
            // 0x155600: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555fc) {
            ctx->pc = 0x1555D8u;
            runtime->cooperativeGuestYield();
            goto label_1555d8;
        }
    }
    ctx->pc = 0x155604u;
    // 0x155604: 0x0  nop
    ctx->pc = 0x155604u;
    // NOP
label_155608:
    // 0x155608: 0x3e00008  jr          $ra
    ctx->pc = 0x155608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15560Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155608u;
            // 0x15560c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1555D8u: goto label_1555d8;
            case 0x155608u: goto label_155608;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155610u;
}
