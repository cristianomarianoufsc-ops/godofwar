#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1c1138
// Address: 0x1c1138 - 0x1c11a8
void entry_1c1138_0x1c11a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1c1138_0x1c11a8");
#endif

    ctx->pc = 0x1c1138u;

    // 0x1c1138: 0x8c820374  lw          $v0, 0x374($a0)
    ctx->pc = 0x1c1138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 884)));
    // 0x1c113c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1c113cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c1140: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1140u;
    {
        const bool branch_taken_0x1c1140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1140) {
            ctx->pc = 0x1C1144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1140u;
            // 0x1c1144: 0x8c830378  lw          $v1, 0x378($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 888)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1150u;
            goto label_1c1150;
        }
    }
    ctx->pc = 0x1C1148u;
label_1c1148:
    // 0x1c1148: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C114Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1148u;
            // 0x1c114c: 0x8c82037c  lw          $v0, 0x37C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 892)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1148u: goto label_1c1148;
            case 0x1C1150u: goto label_1c1150;
            case 0x1C1174u: goto label_1c1174;
            case 0x1C117Cu: goto label_1c117c;
            case 0x1C1184u: goto label_1c1184;
            case 0x1C118Cu: goto label_1c118c;
            case 0x1C1194u: goto label_1c1194;
            case 0x1C119Cu: goto label_1c119c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1150u;
label_1c1150:
    // 0x1c1150: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1c1150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1c1154: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C1154u;
    {
        const bool branch_taken_0x1c1154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1154u;
            // 0x1c1158: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1154) {
            ctx->pc = 0x1C119Cu;
            goto label_1c119c;
        }
    }
    ctx->pc = 0x1C115Cu;
    // 0x1c115c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c115cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c1160: 0x24425e30  addiu       $v0, $v0, 0x5E30
    ctx->pc = 0x1c1160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24112));
    // 0x1c1164: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c1164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c1168: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c1168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c116c: 0x400008  jr          $v0
    ctx->pc = 0x1C116Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1148u: goto label_1c1148;
            case 0x1C1174u: goto label_1c1174;
            case 0x1C117Cu: goto label_1c117c;
            case 0x1C1184u: goto label_1c1184;
            case 0x1C118Cu: goto label_1c118c;
            case 0x1C1194u: goto label_1c1194;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1174u;
label_1c1174:
    // 0x1c1174: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1174u;
            // 0x1c1178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1148u: goto label_1c1148;
            case 0x1C1150u: goto label_1c1150;
            case 0x1C1174u: goto label_1c1174;
            case 0x1C117Cu: goto label_1c117c;
            case 0x1C1184u: goto label_1c1184;
            case 0x1C118Cu: goto label_1c118c;
            case 0x1C1194u: goto label_1c1194;
            case 0x1C119Cu: goto label_1c119c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C117Cu;
label_1c117c:
    // 0x1c117c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C117Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C117Cu;
            // 0x1c1180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1148u: goto label_1c1148;
            case 0x1C1150u: goto label_1c1150;
            case 0x1C1174u: goto label_1c1174;
            case 0x1C117Cu: goto label_1c117c;
            case 0x1C1184u: goto label_1c1184;
            case 0x1C118Cu: goto label_1c118c;
            case 0x1C1194u: goto label_1c1194;
            case 0x1C119Cu: goto label_1c119c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1184u;
label_1c1184:
    // 0x1c1184: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1184u;
            // 0x1c1188: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1148u: goto label_1c1148;
            case 0x1C1150u: goto label_1c1150;
            case 0x1C1174u: goto label_1c1174;
            case 0x1C117Cu: goto label_1c117c;
            case 0x1C1184u: goto label_1c1184;
            case 0x1C118Cu: goto label_1c118c;
            case 0x1C1194u: goto label_1c1194;
            case 0x1C119Cu: goto label_1c119c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C118Cu;
label_1c118c:
    // 0x1c118c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C118Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C118Cu;
            // 0x1c1190: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1148u: goto label_1c1148;
            case 0x1C1150u: goto label_1c1150;
            case 0x1C1174u: goto label_1c1174;
            case 0x1C117Cu: goto label_1c117c;
            case 0x1C1184u: goto label_1c1184;
            case 0x1C118Cu: goto label_1c118c;
            case 0x1C1194u: goto label_1c1194;
            case 0x1C119Cu: goto label_1c119c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1194u;
label_1c1194:
    // 0x1c1194: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1194u;
            // 0x1c1198: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1148u: goto label_1c1148;
            case 0x1C1150u: goto label_1c1150;
            case 0x1C1174u: goto label_1c1174;
            case 0x1C117Cu: goto label_1c117c;
            case 0x1C1184u: goto label_1c1184;
            case 0x1C118Cu: goto label_1c118c;
            case 0x1C1194u: goto label_1c1194;
            case 0x1C119Cu: goto label_1c119c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C119Cu;
label_1c119c:
    // 0x1c119c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C119Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C11A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C119Cu;
            // 0x1c11a0: 0x8c82037c  lw          $v0, 0x37C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 892)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1148u: goto label_1c1148;
            case 0x1C1150u: goto label_1c1150;
            case 0x1C1174u: goto label_1c1174;
            case 0x1C117Cu: goto label_1c117c;
            case 0x1C1184u: goto label_1c1184;
            case 0x1C118Cu: goto label_1c118c;
            case 0x1C1194u: goto label_1c1194;
            case 0x1C119Cu: goto label_1c119c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C11A4u;
    // 0x1c11a4: 0x0  nop
    ctx->pc = 0x1c11a4u;
    // NOP
}
