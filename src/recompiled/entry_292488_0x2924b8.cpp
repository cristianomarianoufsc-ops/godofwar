#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_292488
// Address: 0x292488 - 0x2924b8
void entry_292488_0x2924b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_292488_0x2924b8");
#endif

    ctx->pc = 0x292488u;

    // 0x292488: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x292488u;
    {
        const bool branch_taken_0x292488 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x29248Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292488u;
            // 0x29248c: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292488) {
            ctx->pc = 0x2924B0u;
            goto label_2924b0;
        }
    }
    ctx->pc = 0x292490u;
    // 0x292490: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x292490u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x292494: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x292494u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_292498:
    // 0x292498: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x292498u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29249c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29249cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2924a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2924a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2924a4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2924a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2924a8: 0x1466fffb  bne         $v1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2924A8u;
    {
        const bool branch_taken_0x2924a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2924ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2924A8u;
            // 0x2924ac: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2924a8) {
            ctx->pc = 0x292498u;
            runtime->cooperativeGuestYield();
            goto label_292498;
        }
    }
    ctx->pc = 0x2924B0u;
label_2924b0:
    // 0x2924b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2924B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292498u: goto label_292498;
            case 0x2924B0u: goto label_2924b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2924B8u;
}
