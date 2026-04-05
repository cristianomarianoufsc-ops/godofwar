#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1c1278
// Address: 0x1c1278 - 0x1c12e8
void entry_1c1278_0x1c12e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1c1278_0x1c12e8");
#endif

    ctx->pc = 0x1c1278u;

    // 0x1c1278: 0x8c820374  lw          $v0, 0x374($a0)
    ctx->pc = 0x1c1278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 884)));
    // 0x1c127c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1c127cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c1280: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1280u;
    {
        const bool branch_taken_0x1c1280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1280) {
            ctx->pc = 0x1C1284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1280u;
            // 0x1c1284: 0x8c830378  lw          $v1, 0x378($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 888)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1290u;
            goto label_1c1290;
        }
    }
    ctx->pc = 0x1C1288u;
label_1c1288:
    // 0x1c1288: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C128Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1288u;
            // 0x1c128c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1288u: goto label_1c1288;
            case 0x1C1290u: goto label_1c1290;
            case 0x1C12B4u: goto label_1c12b4;
            case 0x1C12BCu: goto label_1c12bc;
            case 0x1C12C4u: goto label_1c12c4;
            case 0x1C12CCu: goto label_1c12cc;
            case 0x1C12D4u: goto label_1c12d4;
            case 0x1C12DCu: goto label_1c12dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1290u;
label_1c1290:
    // 0x1c1290: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1c1290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1c1294: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C1294u;
    {
        const bool branch_taken_0x1c1294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1294u;
            // 0x1c1298: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1294) {
            ctx->pc = 0x1C12DCu;
            goto label_1c12dc;
        }
    }
    ctx->pc = 0x1C129Cu;
    // 0x1c129c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c129cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c12a0: 0x24425e50  addiu       $v0, $v0, 0x5E50
    ctx->pc = 0x1c12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24144));
    // 0x1c12a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c12a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c12a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c12a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c12ac: 0x400008  jr          $v0
    ctx->pc = 0x1C12ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1288u: goto label_1c1288;
            case 0x1C12B4u: goto label_1c12b4;
            case 0x1C12BCu: goto label_1c12bc;
            case 0x1C12C4u: goto label_1c12c4;
            case 0x1C12CCu: goto label_1c12cc;
            case 0x1C12D4u: goto label_1c12d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C12B4u;
label_1c12b4:
    // 0x1c12b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C12B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C12B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C12B4u;
            // 0x1c12b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1288u: goto label_1c1288;
            case 0x1C1290u: goto label_1c1290;
            case 0x1C12B4u: goto label_1c12b4;
            case 0x1C12BCu: goto label_1c12bc;
            case 0x1C12C4u: goto label_1c12c4;
            case 0x1C12CCu: goto label_1c12cc;
            case 0x1C12D4u: goto label_1c12d4;
            case 0x1C12DCu: goto label_1c12dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C12BCu;
label_1c12bc:
    // 0x1c12bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C12BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C12C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C12BCu;
            // 0x1c12c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1288u: goto label_1c1288;
            case 0x1C1290u: goto label_1c1290;
            case 0x1C12B4u: goto label_1c12b4;
            case 0x1C12BCu: goto label_1c12bc;
            case 0x1C12C4u: goto label_1c12c4;
            case 0x1C12CCu: goto label_1c12cc;
            case 0x1C12D4u: goto label_1c12d4;
            case 0x1C12DCu: goto label_1c12dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C12C4u;
label_1c12c4:
    // 0x1c12c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C12C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C12C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C12C4u;
            // 0x1c12c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1288u: goto label_1c1288;
            case 0x1C1290u: goto label_1c1290;
            case 0x1C12B4u: goto label_1c12b4;
            case 0x1C12BCu: goto label_1c12bc;
            case 0x1C12C4u: goto label_1c12c4;
            case 0x1C12CCu: goto label_1c12cc;
            case 0x1C12D4u: goto label_1c12d4;
            case 0x1C12DCu: goto label_1c12dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C12CCu;
label_1c12cc:
    // 0x1c12cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C12CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C12D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C12CCu;
            // 0x1c12d0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1288u: goto label_1c1288;
            case 0x1C1290u: goto label_1c1290;
            case 0x1C12B4u: goto label_1c12b4;
            case 0x1C12BCu: goto label_1c12bc;
            case 0x1C12C4u: goto label_1c12c4;
            case 0x1C12CCu: goto label_1c12cc;
            case 0x1C12D4u: goto label_1c12d4;
            case 0x1C12DCu: goto label_1c12dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C12D4u;
label_1c12d4:
    // 0x1c12d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C12D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C12D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C12D4u;
            // 0x1c12d8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1288u: goto label_1c1288;
            case 0x1C1290u: goto label_1c1290;
            case 0x1C12B4u: goto label_1c12b4;
            case 0x1C12BCu: goto label_1c12bc;
            case 0x1C12C4u: goto label_1c12c4;
            case 0x1C12CCu: goto label_1c12cc;
            case 0x1C12D4u: goto label_1c12d4;
            case 0x1C12DCu: goto label_1c12dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C12DCu;
label_1c12dc:
    // 0x1c12dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C12DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C12E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C12DCu;
            // 0x1c12e0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1288u: goto label_1c1288;
            case 0x1C1290u: goto label_1c1290;
            case 0x1C12B4u: goto label_1c12b4;
            case 0x1C12BCu: goto label_1c12bc;
            case 0x1C12C4u: goto label_1c12c4;
            case 0x1C12CCu: goto label_1c12cc;
            case 0x1C12D4u: goto label_1c12d4;
            case 0x1C12DCu: goto label_1c12dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C12E4u;
    // 0x1c12e4: 0x0  nop
    ctx->pc = 0x1c12e4u;
    // NOP
}
