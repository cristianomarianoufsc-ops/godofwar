#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_15a448
// Address: 0x15a448 - 0x15a488
void entry_15a448_0x15a488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_15a448_0x15a488");
#endif

    ctx->pc = 0x15a448u;

    // 0x15a448: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15a448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a44c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x15a44cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x15a450: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15A450u;
    {
        const bool branch_taken_0x15a450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A450u;
            // 0x15a454: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a450) {
            ctx->pc = 0x15A480u;
            goto label_15a480;
        }
    }
    ctx->pc = 0x15A458u;
    // 0x15a458: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15a458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15a45c: 0x0  nop
    ctx->pc = 0x15a45cu;
    // NOP
label_15a460:
    // 0x15a460: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x15a460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x15a464: 0x0  nop
    ctx->pc = 0x15a464u;
    // NOP
    // 0x15a468: 0x0  nop
    ctx->pc = 0x15a468u;
    // NOP
    // 0x15a46c: 0x0  nop
    ctx->pc = 0x15a46cu;
    // NOP
    // 0x15a470: 0x0  nop
    ctx->pc = 0x15a470u;
    // NOP
    // 0x15a474: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15A474u;
    {
        const bool branch_taken_0x15a474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a474) {
            ctx->pc = 0x15A478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A474u;
            // 0x15a478: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A460u;
            runtime->cooperativeGuestYield();
            goto label_15a460;
        }
    }
    ctx->pc = 0x15A47Cu;
    // 0x15a47c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x15a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15a480:
    // 0x15a480: 0x3e00008  jr          $ra
    ctx->pc = 0x15A480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A480u;
            // 0x15a484: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A460u: goto label_15a460;
            case 0x15A480u: goto label_15a480;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15A488u;
}
