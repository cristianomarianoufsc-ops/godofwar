#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282FA8
// Address: 0x282fa8 - 0x282fd8
void sub_00282FA8_0x282fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282FA8_0x282fa8");
#endif

    ctx->pc = 0x282fa8u;

    // 0x282fa8: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x282fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x282fac: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x282facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x282fb0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x282fb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x282fb4: 0x24652748  addiu       $a1, $v1, 0x2748
    ctx->pc = 0x282fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10056));
    // 0x282fb8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x282fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x282fbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x282fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282fc0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282FC0u;
    {
        const bool branch_taken_0x282fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x282FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282FC0u;
            // 0x282fc4: 0xa41821  addu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282fc0) {
            ctx->pc = 0x282FD0u;
            goto label_282fd0;
        }
    }
    ctx->pc = 0x282FC8u;
    // 0x282fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x282FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282FC8u;
            // 0x282fcc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282FD0u: goto label_282fd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282FD0u;
label_282fd0:
    // 0x282fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x282FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282FD0u;
            // 0x282fd4: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282FD0u: goto label_282fd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282FD8u;
}
