#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_22f4b0
// Address: 0x22f4b0 - 0x22f4f8
void entry_22f4b0_0x22f4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_22f4b0_0x22f4f8");
#endif

    ctx->pc = 0x22f4b0u;

    // 0x22f4b0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22f4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22f4b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22f4b8: 0x8ca3cb94  lw          $v1, -0x346C($a1)
    ctx->pc = 0x22f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953876)));
    // 0x22f4bc: 0xac4412c8  sw          $a0, 0x12C8($v0)
    ctx->pc = 0x22f4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4808), GPR_U32(ctx, 4));
    // 0x22f4c0: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x22f4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x22f4c4: 0xac6001ac  sw          $zero, 0x1AC($v1)
    ctx->pc = 0x22f4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 428), GPR_U32(ctx, 0));
    // 0x22f4c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F4C8u;
    {
        const bool branch_taken_0x22f4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F4C8u;
            // 0x22f4cc: 0xac6001b0  sw          $zero, 0x1B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f4c8) {
            ctx->pc = 0x22F4D8u;
            goto label_22f4d8;
        }
    }
    ctx->pc = 0x22F4D0u;
    // 0x22f4d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f4d4: 0xac6201b0  sw          $v0, 0x1B0($v1)
    ctx->pc = 0x22f4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 432), GPR_U32(ctx, 2));
label_22f4d8:
    // 0x22f4d8: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x22f4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x22f4dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F4DCu;
    {
        const bool branch_taken_0x22f4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F4DCu;
            // 0x22f4e0: 0x8ca3cb94  lw          $v1, -0x346C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f4dc) {
            ctx->pc = 0x22F4ECu;
            goto label_22f4ec;
        }
    }
    ctx->pc = 0x22F4E4u;
    // 0x22f4e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22f4e8: 0xac6201ac  sw          $v0, 0x1AC($v1)
    ctx->pc = 0x22f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 428), GPR_U32(ctx, 2));
label_22f4ec:
    // 0x22f4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x22F4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22F4D8u: goto label_22f4d8;
            case 0x22F4ECu: goto label_22f4ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22F4F4u;
    // 0x22f4f4: 0x0  nop
    ctx->pc = 0x22f4f4u;
    // NOP
}
