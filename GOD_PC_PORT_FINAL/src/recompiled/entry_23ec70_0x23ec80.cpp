#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23ec70
// Address: 0x23ec70 - 0x23ec80
void entry_23ec70_0x23ec80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23ec70_0x23ec80");
#endif

    ctx->pc = 0x23ec70u;

    // 0x23ec70: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x23ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x23ec74: 0x3e00008  jr          $ra
    ctx->pc = 0x23EC74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EC74u;
            // 0x23ec78: 0xc4400020  lwc1        $f0, 0x20($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23EC7Cu;
    // 0x23ec7c: 0x0  nop
    ctx->pc = 0x23ec7cu;
    // NOP
}
