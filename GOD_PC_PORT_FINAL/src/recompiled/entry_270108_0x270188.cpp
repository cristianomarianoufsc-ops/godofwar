#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_270108
// Address: 0x270108 - 0x270188
void entry_270108_0x270188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_270108_0x270188");
#endif

    ctx->pc = 0x270108u;

    // 0x270108: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x270108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x27010c: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x27010cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
    // 0x270110: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x270110u;
    {
        const bool branch_taken_0x270110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270110) {
            ctx->pc = 0x270114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x270110u;
            // 0x270114: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x270118u;
            goto label_270118;
        }
    }
    ctx->pc = 0x270118u;
label_270118:
    // 0x270118: 0x8c6201d8  lw          $v0, 0x1D8($v1)
    ctx->pc = 0x270118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 472)));
    // 0x27011c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27011Cu;
    {
        const bool branch_taken_0x27011c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27011c) {
            ctx->pc = 0x270120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27011Cu;
            // 0x270120: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x270124u;
            goto label_270124;
        }
    }
    ctx->pc = 0x270124u;
label_270124:
    // 0x270124: 0x8c6201e8  lw          $v0, 0x1E8($v1)
    ctx->pc = 0x270124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x270128: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x270128u;
    {
        const bool branch_taken_0x270128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270128) {
            ctx->pc = 0x27012Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x270128u;
            // 0x27012c: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x270130u;
            goto label_270130;
        }
    }
    ctx->pc = 0x270130u;
label_270130:
    // 0x270130: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x270130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
    // 0x270134: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x270134u;
    {
        const bool branch_taken_0x270134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270134) {
            ctx->pc = 0x270138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x270134u;
            // 0x270138: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27013Cu;
            goto label_27013c;
        }
    }
    ctx->pc = 0x27013Cu;
label_27013c:
    // 0x27013c: 0x8c6201dc  lw          $v0, 0x1DC($v1)
    ctx->pc = 0x27013cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 476)));
    // 0x270140: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x270140u;
    {
        const bool branch_taken_0x270140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270140) {
            ctx->pc = 0x270144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x270140u;
            // 0x270144: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x270148u;
            goto label_270148;
        }
    }
    ctx->pc = 0x270148u;
label_270148:
    // 0x270148: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x270148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
    // 0x27014c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27014Cu;
    {
        const bool branch_taken_0x27014c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27014c) {
            ctx->pc = 0x270150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27014Cu;
            // 0x270150: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x270154u;
            goto label_270154;
        }
    }
    ctx->pc = 0x270154u;
label_270154:
    // 0x270154: 0x3e00008  jr          $ra
    ctx->pc = 0x270154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270154u;
            // 0x270158: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x270118u: goto label_270118;
            case 0x270124u: goto label_270124;
            case 0x270130u: goto label_270130;
            case 0x27013Cu: goto label_27013c;
            case 0x270148u: goto label_270148;
            case 0x270154u: goto label_270154;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27015Cu;
    // 0x27015c: 0x0  nop
    ctx->pc = 0x27015cu;
    // NOP
    // 0x270160: 0xac60008c  sw          $zero, 0x8C($v1)
    ctx->pc = 0x270160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 0));
    // 0x270164: 0x0  nop
    ctx->pc = 0x270164u;
    // NOP
    // 0x270168: 0x8c6200e0  lw          $v0, 0xE0($v1)
    ctx->pc = 0x270168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x27016c: 0x0  nop
    ctx->pc = 0x27016cu;
    // NOP
    // 0x270170: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x270170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x270174: 0x0  nop
    ctx->pc = 0x270174u;
    // NOP
    // 0x270178: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x270178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x27017c: 0x0  nop
    ctx->pc = 0x27017cu;
    // NOP
    // 0x270180: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x270180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x270184: 0x0  nop
    ctx->pc = 0x270184u;
    // NOP
}
