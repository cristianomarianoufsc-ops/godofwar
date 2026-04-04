#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1c0880
// Address: 0x1c0880 - 0x1c08a0
void entry_1c0880_0x1c08a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1c0880_0x1c08a0");
#endif

    ctx->pc = 0x1c0880u;

    // 0x1c0880: 0x8c820378  lw          $v0, 0x378($a0)
    ctx->pc = 0x1c0880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 888)));
    // 0x1c0884: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1c0884u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c0888: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0888u;
    {
        const bool branch_taken_0x1c0888 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C088Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0888u;
            // 0x1c088c: 0xac820378  sw          $v0, 0x378($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0888) {
            ctx->pc = 0x1C0894u;
            goto label_1c0894;
        }
    }
    ctx->pc = 0x1C0890u;
    // 0x1c0890: 0xac800378  sw          $zero, 0x378($a0)
    ctx->pc = 0x1c0890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 888), GPR_U32(ctx, 0));
label_1c0894:
    // 0x1c0894: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0894u;
            // 0x1c0898: 0xac800370  sw          $zero, 0x370($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0894u: goto label_1c0894;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C089Cu;
    // 0x1c089c: 0x0  nop
    ctx->pc = 0x1c089cu;
    // NOP
}
