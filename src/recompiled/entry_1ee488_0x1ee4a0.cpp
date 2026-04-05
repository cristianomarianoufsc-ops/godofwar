#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ee488
// Address: 0x1ee488 - 0x1ee4a0
void entry_1ee488_0x1ee4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ee488_0x1ee4a0");
#endif

    ctx->pc = 0x1ee488u;

    // 0x1ee488: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ee488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ee48c: 0x8c42e2a4  lw          $v0, -0x1D5C($v0)
    ctx->pc = 0x1ee48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
    // 0x1ee490: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EE490u;
    {
        const bool branch_taken_0x1ee490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee490) {
            ctx->pc = 0x1EE494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE490u;
            // 0x1ee494: 0xe44c07a4  swc1        $f12, 0x7A4($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1956), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE498u;
            goto label_1ee498;
        }
    }
    ctx->pc = 0x1EE498u;
label_1ee498:
    // 0x1ee498: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE498u: goto label_1ee498;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EE4A0u;
}
