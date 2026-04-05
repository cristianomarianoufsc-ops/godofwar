#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224700
// Address: 0x224700 - 0x224778
void sub_00224700_0x224700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224700_0x224700");
#endif

    ctx->pc = 0x224700u;

    // 0x224700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224704: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x224704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x224708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22470c: 0x8c426ea8  lw          $v0, 0x6EA8($v0)
    ctx->pc = 0x22470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28328)));
    // 0x224710: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x224710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x224714: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x224714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x224718: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224718u;
    {
        const bool branch_taken_0x224718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22471Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224718u;
            // 0x22471c: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224718) {
            ctx->pc = 0x224728u;
            goto label_224728;
        }
    }
    ctx->pc = 0x224720u;
    // 0x224720: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x224720u;
    {
        const bool branch_taken_0x224720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224720u;
            // 0x224724: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224720) {
            ctx->pc = 0x22472Cu;
            goto label_22472c;
        }
    }
    ctx->pc = 0x224728u;
label_224728:
    // 0x224728: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x224728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22472c:
    // 0x22472c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22472cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x224730: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x224730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224734: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x224734u;
    {
        const bool branch_taken_0x224734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224734u;
            // 0x224738: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224734) {
            ctx->pc = 0x224770u;
            goto label_224770;
        }
    }
    ctx->pc = 0x22473Cu;
    // 0x22473c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x22473cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_224740:
    // 0x224740: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x224740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x224744: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x224744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224748: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x224748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22474c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22474cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224750: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x224750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x224754: 0xc089142  jal         func_224508
    ctx->pc = 0x224754u;
    SET_GPR_U32(ctx, 31, 0x22475Cu);
    ctx->pc = 0x224758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224754u;
            // 0x224758: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224508u;
    if (runtime->hasFunction(0x224508u)) {
        auto targetFn = runtime->lookupFunction(0x224508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22475Cu; }
        if (ctx->pc != 0x22475Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224508_0x224508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22475Cu; }
        if (ctx->pc != 0x22475Cu) { return; }
    }
    ctx->pc = 0x22475Cu;
    // 0x22475c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22475cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224760: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x224760u;
    {
        const bool branch_taken_0x224760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224760u;
            // 0x224764: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224760) {
            ctx->pc = 0x224740u;
            runtime->cooperativeGuestYield();
            goto label_224740;
        }
    }
    ctx->pc = 0x224768u;
    // 0x224768: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22476c: 0x0  nop
    ctx->pc = 0x22476cu;
    // NOP
label_224770:
    // 0x224770: 0x3e00008  jr          $ra
    ctx->pc = 0x224770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224770u;
            // 0x224774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224728u: goto label_224728;
            case 0x22472Cu: goto label_22472c;
            case 0x224740u: goto label_224740;
            case 0x224770u: goto label_224770;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224778u;
}
