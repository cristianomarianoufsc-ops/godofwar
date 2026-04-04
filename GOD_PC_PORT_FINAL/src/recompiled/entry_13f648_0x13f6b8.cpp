#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13f648
// Address: 0x13f648 - 0x13f6b8
void entry_13f648_0x13f6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13f648_0x13f6b8");
#endif

    ctx->pc = 0x13f648u;

    // 0x13f648: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x13f648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x13f64c: 0x8ca4f168  lw          $a0, -0xE98($a1)
    ctx->pc = 0x13f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294963560)));
    // 0x13f650: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x13f650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x13f654: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F654u;
    {
        const bool branch_taken_0x13f654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F654u;
            // 0x13f658: 0x3c027000  lui         $v0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f654) {
            ctx->pc = 0x13F680u;
            goto label_13f680;
        }
    }
    ctx->pc = 0x13F65Cu;
    // 0x13f65c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x13f65cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_13f660:
    // 0x13f660: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x13f660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x13f664: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x13f664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x13f668: 0x0  nop
    ctx->pc = 0x13f668u;
    // NOP
    // 0x13f66c: 0x0  nop
    ctx->pc = 0x13f66cu;
    // NOP
    // 0x13f670: 0x0  nop
    ctx->pc = 0x13f670u;
    // NOP
    // 0x13f674: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13F674u;
    {
        const bool branch_taken_0x13f674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f674) {
            ctx->pc = 0x13F678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F674u;
            // 0x13f678: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F660u;
            runtime->cooperativeGuestYield();
            goto label_13f660;
        }
    }
    ctx->pc = 0x13F67Cu;
    // 0x13f67c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_13f680:
    // 0x13f680: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x13f680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x13f684: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13f684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13f688: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x13f688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13f68c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x13f68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x13f690: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13f690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13f694: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x13f694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x13f698: 0xaca3f168  sw          $v1, -0xE98($a1)
    ctx->pc = 0x13f698u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 3));
    // 0x13f69c: 0x8c42101c  lw          $v0, 0x101C($v0)
    ctx->pc = 0x13f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4124)));
    // 0x13f6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x13F6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F6A0u;
            // 0x13f6a4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F660u: goto label_13f660;
            case 0x13F680u: goto label_13f680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F6A8u;
    // 0x13f6a8: 0x0  nop
    ctx->pc = 0x13f6a8u;
    // NOP
    // 0x13f6ac: 0x0  nop
    ctx->pc = 0x13f6acu;
    // NOP
    // 0x13f6b0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x13f6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x13f6b4: 0x0  nop
    ctx->pc = 0x13f6b4u;
    // NOP
}
