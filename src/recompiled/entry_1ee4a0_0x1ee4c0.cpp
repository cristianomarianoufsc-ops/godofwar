#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ee4a0
// Address: 0x1ee4a0 - 0x1ee4c0
void entry_1ee4a0_0x1ee4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ee4a0_0x1ee4c0");
#endif

    ctx->pc = 0x1ee4a0u;

    // 0x1ee4a0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ee4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ee4a4: 0x8c42e2a4  lw          $v0, -0x1D5C($v0)
    ctx->pc = 0x1ee4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
    // 0x1ee4a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE4A8u;
    {
        const bool branch_taken_0x1ee4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4a8) {
            ctx->pc = 0x1EE4B8u;
            goto label_1ee4b8;
        }
    }
    ctx->pc = 0x1EE4B0u;
    // 0x1ee4b0: 0xe44c07a4  swc1        $f12, 0x7A4($v0)
    ctx->pc = 0x1ee4b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1956), bits); }
    // 0x1ee4b4: 0xe44c07a0  swc1        $f12, 0x7A0($v0)
    ctx->pc = 0x1ee4b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1952), bits); }
label_1ee4b8:
    // 0x1ee4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE4B8u: goto label_1ee4b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EE4C0u;
}
