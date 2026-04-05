#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_292810
// Address: 0x292810 - 0x292848
void entry_292810_0x292848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_292810_0x292848");
#endif

    ctx->pc = 0x292810u;

    // 0x292810: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x292810u;
    {
        const bool branch_taken_0x292810 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x292814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292810u;
            // 0x292814: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292810) {
            ctx->pc = 0x29283Cu;
            goto label_29283c;
        }
    }
    ctx->pc = 0x292818u;
    // 0x292818: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x292818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x29281c: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x29281cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x292820: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x292820u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x292824: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x292824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x292828: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x292828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29282c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x29282cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x292830: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x292830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x292834: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x292834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x292838: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x292838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_29283c:
    // 0x29283c: 0x3e00008  jr          $ra
    ctx->pc = 0x29283Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29283Cu: goto label_29283c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292844u;
    // 0x292844: 0x0  nop
    ctx->pc = 0x292844u;
    // NOP
}
