#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE718
// Address: 0x1be718 - 0x1be7a0
void sub_001BE718_0x1be718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE718_0x1be718");
#endif

    ctx->pc = 0x1be718u;

    // 0x1be718: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1be718u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1be71c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be71cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be720: 0x24e25e90  addiu       $v0, $a3, 0x5E90
    ctx->pc = 0x1be720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 24208));
    // 0x1be724: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1be724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1be728: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1be728u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1be72c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1be72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1be730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be734: 0xacc0ccb4  sw          $zero, -0x334C($a2)
    ctx->pc = 0x1be734u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954164), GPR_U32(ctx, 0));
    // 0x1be738: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1be738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1be73c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1be73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1be740: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE740u;
    {
        const bool branch_taken_0x1be740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE740u;
            // 0x1be744: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be740) {
            ctx->pc = 0x1BE750u;
            goto label_1be750;
        }
    }
    ctx->pc = 0x1BE748u;
    // 0x1be748: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BE748u;
    {
        const bool branch_taken_0x1be748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE748u;
            // 0x1be74c: 0xacc4ccb4  sw          $a0, -0x334C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294954164), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be748) {
            ctx->pc = 0x1BE778u;
            goto label_1be778;
        }
    }
    ctx->pc = 0x1BE750u;
label_1be750:
    // 0x1be750: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1be750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1be754:
    // 0x1be754: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE754u;
    {
        const bool branch_taken_0x1be754 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1BE758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE754u;
            // 0x1be758: 0x24e25e90  addiu       $v0, $a3, 0x5E90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 24208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be754) {
            ctx->pc = 0x1BE778u;
            goto label_1be778;
        }
    }
    ctx->pc = 0x1BE75Cu;
    // 0x1be75c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1be75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1be760: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be764: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1be764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be768: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BE768u;
    {
        const bool branch_taken_0x1be768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be768) {
            ctx->pc = 0x1BE76Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE768u;
            // 0x1be76c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BE754u;
            runtime->cooperativeGuestYield();
            goto label_1be754;
        }
    }
    ctx->pc = 0x1BE770u;
    // 0x1be770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be774: 0xacc2ccb4  sw          $v0, -0x334C($a2)
    ctx->pc = 0x1be774u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954164), GPR_U32(ctx, 2));
label_1be778:
    // 0x1be778: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1be778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1be77c: 0x8c42ccb4  lw          $v0, -0x334C($v0)
    ctx->pc = 0x1be77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954164)));
    // 0x1be780: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE780u;
    {
        const bool branch_taken_0x1be780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE780u;
            // 0x1be784: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be780) {
            ctx->pc = 0x1BE794u;
            goto label_1be794;
        }
    }
    ctx->pc = 0x1BE788u;
    // 0x1be788: 0xc07b9ce  jal         func_1EE738
    ctx->pc = 0x1BE788u;
    SET_GPR_U32(ctx, 31, 0x1BE790u);
    ctx->pc = 0x1BE78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE788u;
            // 0x1be78c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE738u;
    if (runtime->hasFunction(0x1EE738u)) {
        auto targetFn = runtime->lookupFunction(0x1EE738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE790u; }
        if (ctx->pc != 0x1BE790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ee738_0x1ee758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE790u; }
        if (ctx->pc != 0x1BE790u) { return; }
    }
    ctx->pc = 0x1BE790u;
    // 0x1be790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be794:
    // 0x1be794: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE794u;
            // 0x1be798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE750u: goto label_1be750;
            case 0x1BE754u: goto label_1be754;
            case 0x1BE778u: goto label_1be778;
            case 0x1BE794u: goto label_1be794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BE79Cu;
    // 0x1be79c: 0x0  nop
    ctx->pc = 0x1be79cu;
    // NOP
}
