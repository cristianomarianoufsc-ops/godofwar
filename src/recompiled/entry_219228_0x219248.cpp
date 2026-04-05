#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_219228
// Address: 0x219228 - 0x219248
void entry_219228_0x219248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_219228_0x219248");
#endif

    ctx->pc = 0x219228u;

    // 0x219228: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x219228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21922c: 0x8c42e2a4  lw          $v0, -0x1D5C($v0)
    ctx->pc = 0x21922cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
    // 0x219230: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x219230u;
    {
        const bool branch_taken_0x219230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219230u;
            // 0x219234: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219230) {
            ctx->pc = 0x21923Cu;
            goto label_21923c;
        }
    }
    ctx->pc = 0x219238u;
    // 0x219238: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x219238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21923c:
    // 0x21923c: 0x3e00008  jr          $ra
    ctx->pc = 0x21923Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21923Cu;
            // 0x219240: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21923Cu: goto label_21923c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x219244u;
    // 0x219244: 0x0  nop
    ctx->pc = 0x219244u;
    // NOP
}
