#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144730
// Address: 0x144730 - 0x144790
void sub_00144730_0x144730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144730_0x144730");
#endif

    ctx->pc = 0x144730u;

    // 0x144730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x144730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x144734: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14473c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14473cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x144740: 0x8c900ce0  lw          $s0, 0xCE0($a0)
    ctx->pc = 0x144740u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3296)));
    // 0x144744: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x144744u;
    {
        const bool branch_taken_0x144744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x144748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144744u;
            // 0x144748: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144744) {
            ctx->pc = 0x144774u;
            goto label_144774;
        }
    }
    ctx->pc = 0x14474Cu;
    // 0x14474c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14474cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_144750:
    // 0x144750: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x144750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144754: 0xc0a26dc  jal         func_289B70
    ctx->pc = 0x144754u;
    SET_GPR_U32(ctx, 31, 0x14475Cu);
    ctx->pc = 0x144758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144754u;
            // 0x144758: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289B70u;
    if (runtime->hasFunction(0x289B70u)) {
        auto targetFn = runtime->lookupFunction(0x289B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14475Cu; }
        if (ctx->pc != 0x14475Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289b70_0x289d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14475Cu; }
        if (ctx->pc != 0x14475Cu) { return; }
    }
    ctx->pc = 0x14475Cu;
    // 0x14475c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14475Cu;
    {
        const bool branch_taken_0x14475c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14475c) {
            ctx->pc = 0x144760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14475Cu;
            // 0x144760: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14476Cu;
            goto label_14476c;
        }
    }
    ctx->pc = 0x144764u;
    // 0x144764: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x144764u;
    {
        const bool branch_taken_0x144764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144764u;
            // 0x144768: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144764) {
            ctx->pc = 0x144778u;
            goto label_144778;
        }
    }
    ctx->pc = 0x14476Cu;
label_14476c:
    // 0x14476c: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14476Cu;
    {
        const bool branch_taken_0x14476c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14476c) {
            ctx->pc = 0x144770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14476Cu;
            // 0x144770: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144750u;
            runtime->cooperativeGuestYield();
            goto label_144750;
        }
    }
    ctx->pc = 0x144774u;
label_144774:
    // 0x144774: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x144774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144778:
    // 0x144778: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x144778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14477c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14477cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144784: 0x3e00008  jr          $ra
    ctx->pc = 0x144784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144784u;
            // 0x144788: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144750u: goto label_144750;
            case 0x14476Cu: goto label_14476c;
            case 0x144774u: goto label_144774;
            case 0x144778u: goto label_144778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14478Cu;
    // 0x14478c: 0x0  nop
    ctx->pc = 0x14478cu;
    // NOP
}
