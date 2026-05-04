#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_281510
// Address: 0x281510 - 0x281548
void entry_281510_0x281548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_281510_0x281548");
#endif

    ctx->pc = 0x281510u;
    std::cerr << "[entry_281510] START\n";

    // 0x281510: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x281510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x281514: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x281514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x281518: 0x2443df00  addiu       $v1, $v0, -0x2100
    ctx->pc = 0x281518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958848));
    // 0x28151c: 0x24644020  addiu       $a0, $v1, 0x4020
    ctx->pc = 0x28151cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16416));
label_281520:
    // 0x281520: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x281520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x281524: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x281524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x281528: 0x24632010  addiu       $v1, $v1, 0x2010
    ctx->pc = 0x281528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8208));
    // 0x28152c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x28152cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x281530: 0x0  nop
    ctx->pc = 0x281530u;
    // NOP
    // 0x281534: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x281534u;
    {
        const bool branch_taken_0x281534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281534) {
            ctx->pc = 0x281520u;
            runtime->cooperativeGuestYield();
            goto label_281520;
        }
    }
    ctx->pc = 0x28153Cu;
    // 0x28153c: 0x3e00008  jr          $ra
    ctx->pc = 0x28153Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28153Cu;
            // 0x281540: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281520u: goto label_281520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x281544u;
    // 0x281544: 0x0  nop
    ctx->pc = 0x281544u;
    // NOP
}
