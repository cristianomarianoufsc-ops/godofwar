#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1cc188
// Address: 0x1cc188 - 0x1cc198
void entry_1cc188_0x1cc198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1cc188_0x1cc198");
#endif

    ctx->pc = 0x1cc188u;

    // 0x1cc188: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1cc188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1cc18c: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x1cc18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc190: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC190u;
            // 0x1cc194: 0xe4800060  swc1        $f0, 0x60($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC198u;
}
