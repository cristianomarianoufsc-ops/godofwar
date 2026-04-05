#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d8730
// Address: 0x1d8730 - 0x1d8788
void entry_1d8730_0x1d8788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d8730_0x1d8788");
#endif

    ctx->pc = 0x1d8730u;

    // 0x1d8730: 0x24a3fffd  addiu       $v1, $a1, -0x3
    ctx->pc = 0x1d8730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x1d8734: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x1d8734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x1d8738: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D8738u;
    {
        const bool branch_taken_0x1d8738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D873Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8738u;
            // 0x1d873c: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8738) {
            ctx->pc = 0x1D877Cu;
            goto label_1d877c;
        }
    }
    ctx->pc = 0x1D8740u;
    // 0x1d8740: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8744: 0x24426ad0  addiu       $v0, $v0, 0x6AD0
    ctx->pc = 0x1d8744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27344));
    // 0x1d8748: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d8748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d874c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d8750: 0x400008  jr          $v0
    ctx->pc = 0x1D8750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8758u: goto label_1d8758;
            case 0x1D8760u: goto label_1d8760;
            case 0x1D8768u: goto label_1d8768;
            case 0x1D877Cu: goto label_1d877c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8758u;
label_1d8758:
    // 0x1d8758: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D875Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8758u;
            // 0x1d875c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8758u: goto label_1d8758;
            case 0x1D8760u: goto label_1d8760;
            case 0x1D8768u: goto label_1d8768;
            case 0x1D877Cu: goto label_1d877c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8760u;
label_1d8760:
    // 0x1d8760: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8760u;
            // 0x1d8764: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8758u: goto label_1d8758;
            case 0x1D8760u: goto label_1d8760;
            case 0x1D8768u: goto label_1d8768;
            case 0x1D877Cu: goto label_1d877c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8768u;
label_1d8768:
    // 0x1d8768: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d8768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d876c: 0x8c432924  lw          $v1, 0x2924($v0)
    ctx->pc = 0x1d876cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10532)));
    // 0x1d8770: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d8770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d8774: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8774u;
            // 0x1d8778: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8758u: goto label_1d8758;
            case 0x1D8760u: goto label_1d8760;
            case 0x1D8768u: goto label_1d8768;
            case 0x1D877Cu: goto label_1d877c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D877Cu;
label_1d877c:
    // 0x1d877c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D877Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D877Cu;
            // 0x1d8780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8758u: goto label_1d8758;
            case 0x1D8760u: goto label_1d8760;
            case 0x1D8768u: goto label_1d8768;
            case 0x1D877Cu: goto label_1d877c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8784u;
    // 0x1d8784: 0x0  nop
    ctx->pc = 0x1d8784u;
    // NOP
}
