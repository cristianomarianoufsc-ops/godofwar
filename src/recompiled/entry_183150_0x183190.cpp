#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_183150
// Address: 0x183150 - 0x183190
void entry_183150_0x183190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_183150_0x183190");
#endif

    ctx->pc = 0x183150u;

    // 0x183150: 0x2c82003b  sltiu       $v0, $a0, 0x3B
    ctx->pc = 0x183150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x183154: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x183154u;
    {
        const bool branch_taken_0x183154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183154u;
            // 0x183158: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183154) {
            ctx->pc = 0x183184u;
            goto label_183184;
        }
    }
    ctx->pc = 0x18315Cu;
    // 0x18315c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18315cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x183160: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x183160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x183164: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x183164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x183168: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x183168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18316c: 0x400008  jr          $v0
    ctx->pc = 0x18316Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183174u: goto label_183174;
            case 0x18317Cu: goto label_18317c;
            case 0x183184u: goto label_183184;
            default: break;
        }
        return;
    }
    ctx->pc = 0x183174u;
label_183174:
    // 0x183174: 0x3e00008  jr          $ra
    ctx->pc = 0x183174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183174u;
            // 0x183178: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183174u: goto label_183174;
            case 0x18317Cu: goto label_18317c;
            case 0x183184u: goto label_183184;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18317Cu;
label_18317c:
    // 0x18317c: 0x3e00008  jr          $ra
    ctx->pc = 0x18317Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18317Cu;
            // 0x183180: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183174u: goto label_183174;
            case 0x18317Cu: goto label_18317c;
            case 0x183184u: goto label_183184;
            default: break;
        }
        return;
    }
    ctx->pc = 0x183184u;
label_183184:
    // 0x183184: 0x3e00008  jr          $ra
    ctx->pc = 0x183184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183184u;
            // 0x183188: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183174u: goto label_183174;
            case 0x18317Cu: goto label_18317c;
            case 0x183184u: goto label_183184;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18318Cu;
    // 0x18318c: 0x0  nop
    ctx->pc = 0x18318cu;
    // NOP
}
