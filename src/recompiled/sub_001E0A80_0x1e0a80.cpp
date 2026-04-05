#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0A80
// Address: 0x1e0a80 - 0x1e0a98
void sub_001E0A80_0x1e0a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0A80_0x1e0a80");
#endif

    ctx->pc = 0x1e0a80u;

    // 0x1e0a80: 0xc481017c  lwc1        $f1, 0x17C($a0)
    ctx->pc = 0x1e0a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0a84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e0a84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0a88: 0x46006328  max.s       $f12, $f12, $f0
    ctx->pc = 0x1e0a88u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[0]);
    // 0x1e0a8c: 0x46016329  min.s       $f12, $f12, $f1
    ctx->pc = 0x1e0a8cu;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[1]);
    // 0x1e0a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A90u;
            // 0x1e0a94: 0xe48c0178  swc1        $f12, 0x178($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 376), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0A98u;
}
