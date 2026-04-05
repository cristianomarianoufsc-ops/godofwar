#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13f590
// Address: 0x13f590 - 0x13f5e0
void entry_13f590_0x13f5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13f590_0x13f5e0");
#endif

    ctx->pc = 0x13f590u;

    // 0x13f590: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x13f590u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x13f594: 0x8ce6f168  lw          $a2, -0xE98($a3)
    ctx->pc = 0x13f594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294963560)));
    // 0x13f598: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x13f598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x13f59c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F59Cu;
    {
        const bool branch_taken_0x13f59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F59Cu;
            // 0x13f5a0: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f59c) {
            ctx->pc = 0x13F5C8u;
            goto label_13f5c8;
        }
    }
    ctx->pc = 0x13F5A4u;
    // 0x13f5a4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x13f5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_13f5a8:
    // 0x13f5a8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x13f5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x13f5ac: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x13f5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x13f5b0: 0x0  nop
    ctx->pc = 0x13f5b0u;
    // NOP
    // 0x13f5b4: 0x0  nop
    ctx->pc = 0x13f5b4u;
    // NOP
    // 0x13f5b8: 0x0  nop
    ctx->pc = 0x13f5b8u;
    // NOP
    // 0x13f5bc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13F5BCu;
    {
        const bool branch_taken_0x13f5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f5bc) {
            ctx->pc = 0x13F5C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F5BCu;
            // 0x13f5c0: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F5A8u;
            runtime->cooperativeGuestYield();
            goto label_13f5a8;
        }
    }
    ctx->pc = 0x13F5C4u;
    // 0x13f5c4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_13f5c8:
    // 0x13f5c8: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x13f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x13f5cc: 0xace2f168  sw          $v0, -0xE98($a3)
    ctx->pc = 0x13f5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963560), GPR_U32(ctx, 2));
    // 0x13f5d0: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x13f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x13f5d4: 0xac661018  sw          $a2, 0x1018($v1)
    ctx->pc = 0x13f5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4120), GPR_U32(ctx, 6));
    // 0x13f5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x13F5D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F5D8u;
            // 0x13f5dc: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F5A8u: goto label_13f5a8;
            case 0x13F5C8u: goto label_13f5c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F5E0u;
}
