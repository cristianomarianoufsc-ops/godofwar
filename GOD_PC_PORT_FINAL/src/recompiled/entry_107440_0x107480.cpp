#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_107440
// Address: 0x107440 - 0x107480
void entry_107440_0x107480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_107440_0x107480");
#endif

    ctx->pc = 0x107440u;

    // 0x107440: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x107440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107444: 0x24850014  addiu       $a1, $a0, 0x14
    ctx->pc = 0x107444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x107448: 0x1065000b  beq         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x107448u;
    {
        const bool branch_taken_0x107448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x107448) {
            ctx->pc = 0x107478u;
            goto label_107478;
        }
    }
    ctx->pc = 0x107450u;
    // 0x107450: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x107450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x107454: 0x0  nop
    ctx->pc = 0x107454u;
    // NOP
label_107458:
    // 0x107458: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x107458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x10745c: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10745Cu;
    {
        const bool branch_taken_0x10745c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x10745c) {
            ctx->pc = 0x107460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10745Cu;
            // 0x107460: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107470u;
            goto label_107470;
        }
    }
    ctx->pc = 0x107464u;
    // 0x107464: 0x3e00008  jr          $ra
    ctx->pc = 0x107464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107464u;
            // 0x107468: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107458u: goto label_107458;
            case 0x107470u: goto label_107470;
            case 0x107478u: goto label_107478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10746Cu;
    // 0x10746c: 0x0  nop
    ctx->pc = 0x10746cu;
    // NOP
label_107470:
    // 0x107470: 0x5465fff9  bnel        $v1, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x107470u;
    {
        const bool branch_taken_0x107470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x107470) {
            ctx->pc = 0x107474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107470u;
            // 0x107474: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107458u;
            runtime->cooperativeGuestYield();
            goto label_107458;
        }
    }
    ctx->pc = 0x107478u;
label_107478:
    // 0x107478: 0x3e00008  jr          $ra
    ctx->pc = 0x107478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10747Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107478u;
            // 0x10747c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107458u: goto label_107458;
            case 0x107470u: goto label_107470;
            case 0x107478u: goto label_107478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107480u;
}
