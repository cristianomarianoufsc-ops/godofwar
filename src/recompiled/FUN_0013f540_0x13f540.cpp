#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0013f540
// Address: 0x13f540 - 0x13f590
void FUN_0013f540_0x13f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013f540_0x13f540");
#endif

    ctx->pc = 0x13f540u;

    // 0x13f540: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x13f540u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x13f544: 0x8cc5f168  lw          $a1, -0xE98($a2)
    ctx->pc = 0x13f544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x13f548: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x13f548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x13f54c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F54Cu;
    {
        const bool branch_taken_0x13f54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F54Cu;
            // 0x13f550: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f54c) {
            ctx->pc = 0x13F578u;
            goto label_13f578;
        }
    }
    ctx->pc = 0x13F554u;
    // 0x13f554: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x13f554u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_13f558:
    // 0x13f558: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x13f558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13f55c: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x13f55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x13f560: 0x0  nop
    ctx->pc = 0x13f560u;
    // NOP
    // 0x13f564: 0x0  nop
    ctx->pc = 0x13f564u;
    // NOP
    // 0x13f568: 0x0  nop
    ctx->pc = 0x13f568u;
    // NOP
    // 0x13f56c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13F56Cu;
    {
        const bool branch_taken_0x13f56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f56c) {
            ctx->pc = 0x13F570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F56Cu;
            // 0x13f570: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F558u;
            runtime->cooperativeGuestYield();
            goto label_13f558;
        }
    }
    ctx->pc = 0x13F574u;
    // 0x13f574: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13f574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_13f578:
    // 0x13f578: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x13f578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x13f57c: 0xacc2f168  sw          $v0, -0xE98($a2)
    ctx->pc = 0x13f57cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963560), GPR_U32(ctx, 2));
    // 0x13f580: 0xac651018  sw          $a1, 0x1018($v1)
    ctx->pc = 0x13f580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4120), GPR_U32(ctx, 5));
    // 0x13f584: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x13f584u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x13f588: 0x3e00008  jr          $ra
    ctx->pc = 0x13F588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F588u;
            // 0x13f58c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F558u: goto label_13f558;
            case 0x13F578u: goto label_13f578;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F590u;
}
