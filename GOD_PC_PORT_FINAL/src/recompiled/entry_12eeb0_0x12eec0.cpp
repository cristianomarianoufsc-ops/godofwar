#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_12eeb0
// Address: 0x12eeb0 - 0x12eec0
void entry_12eeb0_0x12eec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_12eeb0_0x12eec0");
#endif

    ctx->pc = 0x12eeb0u;

    // 0x12eeb0: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x12eeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12eeb4: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x12eeb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x12eeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x12EEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EEB8u;
            // 0x12eebc: 0xe480008c  swc1        $f0, 0x8C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EEC0u;
}
