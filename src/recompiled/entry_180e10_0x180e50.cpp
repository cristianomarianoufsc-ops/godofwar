#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_180e10
// Address: 0x180e10 - 0x180e50
void entry_180e10_0x180e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_180e10_0x180e50");
#endif

    ctx->pc = 0x180e10u;

label_180e10:
    // 0x180e10: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x180e10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x180e14: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x180e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x180e18: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x180e18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x180e1c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x180e1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x180e20: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x180E20u;
    {
        const bool branch_taken_0x180e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x180e20) {
            ctx->pc = 0x180E34u;
            goto label_180e34;
        }
    }
    ctx->pc = 0x180E28u;
    // 0x180e28: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x180e28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x180e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x180E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180E2Cu;
            // 0x180e30: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180E10u: goto label_180e10;
            case 0x180E34u: goto label_180e34;
            case 0x180E44u: goto label_180e44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180E34u;
label_180e34:
    // 0x180e34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180E34u;
    {
        const bool branch_taken_0x180e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180E34u;
            // 0x180e38: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e34) {
            ctx->pc = 0x180E44u;
            goto label_180e44;
        }
    }
    ctx->pc = 0x180E3Cu;
    // 0x180e3c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x180E3Cu;
    {
        const bool branch_taken_0x180e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180E3Cu;
            // 0x180e40: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e3c) {
            ctx->pc = 0x180E10u;
            runtime->cooperativeGuestYield();
            goto label_180e10;
        }
    }
    ctx->pc = 0x180E44u;
label_180e44:
    // 0x180e44: 0x3e00008  jr          $ra
    ctx->pc = 0x180E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180E44u;
            // 0x180e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180E10u: goto label_180e10;
            case 0x180E34u: goto label_180e34;
            case 0x180E44u: goto label_180e44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180E4Cu;
    // 0x180e4c: 0x0  nop
    ctx->pc = 0x180e4cu;
    // NOP
}
