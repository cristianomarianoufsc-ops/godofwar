#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f47c8
// Address: 0x1f47c8 - 0x1f47e0
void entry_1f47c8_0x1f47e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f47c8_0x1f47e0");
#endif

    ctx->pc = 0x1f47c8u;

    // 0x1f47c8: 0xe48e0020  swc1        $f14, 0x20($a0)
    ctx->pc = 0x1f47c8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1f47cc: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x1f47ccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1f47d0: 0xe48d001c  swc1        $f13, 0x1C($a0)
    ctx->pc = 0x1f47d0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1f47d4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1f47d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1f47d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F47D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F47DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F47D8u;
            // 0x1f47dc: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F47E0u;
}
