#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_150308
// Address: 0x150308 - 0x150340
void entry_150308_0x150340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_150308_0x150340");
#endif

    ctx->pc = 0x150308u;

    // 0x150308: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x150308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x15030c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15030cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150310: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x150310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x150314: 0x0  nop
    ctx->pc = 0x150314u;
    // NOP
label_150318:
    // 0x150318: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x150318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15031c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15031cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x150320: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x150320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x150324: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x150324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x150328: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x150328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x15032c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15032Cu;
    {
        const bool branch_taken_0x15032c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15032Cu;
            // 0x150330: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15032c) {
            ctx->pc = 0x150318u;
            runtime->cooperativeGuestYield();
            goto label_150318;
        }
    }
    ctx->pc = 0x150334u;
    // 0x150334: 0x3e00008  jr          $ra
    ctx->pc = 0x150334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150318u: goto label_150318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15033Cu;
    // 0x15033c: 0x0  nop
    ctx->pc = 0x15033cu;
    // NOP
}
