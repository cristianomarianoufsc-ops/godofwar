#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_282f60
// Address: 0x282f60 - 0x282fa8
void entry_282f60_0x282fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_282f60_0x282fa8");
#endif

    ctx->pc = 0x282f60u;

    // 0x282f60: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x282f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x282f64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x282f64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f68: 0x24452748  addiu       $a1, $v0, 0x2748
    ctx->pc = 0x282f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10056));
    // 0x282f6c: 0x0  nop
    ctx->pc = 0x282f6cu;
    // NOP
label_282f70:
    // 0x282f70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x282f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x282f74: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x282F74u;
    {
        const bool branch_taken_0x282f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282f74) {
            ctx->pc = 0x282F78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x282F74u;
            // 0x282f78: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x282F90u;
            goto label_282f90;
        }
    }
    ctx->pc = 0x282F7Cu;
    // 0x282f7c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x282f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x282f80: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282F80u;
    {
        const bool branch_taken_0x282f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x282f80) {
            ctx->pc = 0x282F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x282F80u;
            // 0x282f84: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x282F90u;
            goto label_282f90;
        }
    }
    ctx->pc = 0x282F88u;
    // 0x282f88: 0x3e00008  jr          $ra
    ctx->pc = 0x282F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F88u;
            // 0x282f8c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282F70u: goto label_282f70;
            case 0x282F90u: goto label_282f90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282F90u;
label_282f90:
    // 0x282f90: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x282f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x282f94: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x282F94u;
    {
        const bool branch_taken_0x282f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F94u;
            // 0x282f98: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f94) {
            ctx->pc = 0x282F70u;
            runtime->cooperativeGuestYield();
            goto label_282f70;
        }
    }
    ctx->pc = 0x282F9Cu;
    // 0x282f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x282F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F9Cu;
            // 0x282fa0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282F70u: goto label_282f70;
            case 0x282F90u: goto label_282f90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282FA4u;
    // 0x282fa4: 0x0  nop
    ctx->pc = 0x282fa4u;
    // NOP
}
