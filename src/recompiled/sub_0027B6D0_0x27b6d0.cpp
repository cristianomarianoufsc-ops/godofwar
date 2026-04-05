#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027B6D0
// Address: 0x27b6d0 - 0x27b7c0
void sub_0027B6D0_0x27b6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B6D0_0x27b6d0");
#endif

    ctx->pc = 0x27b6d0u;

    // 0x27b6d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27b6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27b6d4: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x27b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x27b6d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27b6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27b6dc: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x27b6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x27b6e0: 0x2450ac40  addiu       $s0, $v0, -0x53C0
    ctx->pc = 0x27b6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945856));
    // 0x27b6e4: 0xac44ac40  sw          $a0, -0x53C0($v0)
    ctx->pc = 0x27b6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945856), GPR_U32(ctx, 4));
    // 0x27b6e8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27b6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27b6ec: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x27b6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x27b6f0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27b6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27b6f4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x27b6f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b6f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27b6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27b6fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x27b6fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b700: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x27b700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x27b704: 0x2484ab48  addiu       $a0, $a0, -0x54B8
    ctx->pc = 0x27b704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945608));
    // 0x27b708: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x27b708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x27b70c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27b70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b710: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27b710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27b714: 0x34a5131a  ori         $a1, $a1, 0x131A
    ctx->pc = 0x27b714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4890);
    // 0x27b718: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27b718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27b71c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27b71cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b720: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x27b720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x27b724: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x27b724u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b728: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x27b728u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x27b72c: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x27B72Cu;
    SET_GPR_U32(ctx, 31, 0x27B734u);
    ctx->pc = 0x27B730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B72Cu;
            // 0x27b730: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B734u; }
        if (ctx->pc != 0x27B734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B734u; }
        if (ctx->pc != 0x27B734u) { return; }
    }
    ctx->pc = 0x27B734u;
    // 0x27b734: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27B734u;
    {
        const bool branch_taken_0x27b734 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27b734) {
            ctx->pc = 0x27B738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27B734u;
            // 0x27b738: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27B750u;
            goto label_27b750;
        }
    }
    ctx->pc = 0x27B73Cu;
    // 0x27b73c: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x27b73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x27b740: 0xc09edf0  jal         func_27B7C0
    ctx->pc = 0x27B740u;
    SET_GPR_U32(ctx, 31, 0x27B748u);
    ctx->pc = 0x27B744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B740u;
            // 0x27b744: 0x24844f90  addiu       $a0, $a0, 0x4F90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B7C0u;
    if (runtime->hasFunction(0x27B7C0u)) {
        auto targetFn = runtime->lookupFunction(0x27B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B748u; }
        if (ctx->pc != 0x27B748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B7C0_0x27b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B748u; }
        if (ctx->pc != 0x27B748u) { return; }
    }
    ctx->pc = 0x27B748u;
    // 0x27b748: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27B748u;
    {
        const bool branch_taken_0x27b748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B748u;
            // 0x27b74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b748) {
            ctx->pc = 0x27B7A4u;
            goto label_27b7a4;
        }
    }
    ctx->pc = 0x27B750u;
label_27b750:
    // 0x27b750: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27B750u;
    {
        const bool branch_taken_0x27b750 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27B754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B750u;
            // 0x27b754: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b750) {
            ctx->pc = 0x27B7A8u;
            goto label_27b7a8;
        }
    }
    ctx->pc = 0x27B758u;
    // 0x27b758: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x27b758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27b75c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x27b75cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x27b760: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27b760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27b764: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27B764u;
    {
        const bool branch_taken_0x27b764 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27B768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B764u;
            // 0x27b768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b764) {
            ctx->pc = 0x27B7A0u;
            goto label_27b7a0;
        }
    }
    ctx->pc = 0x27B76Cu;
    // 0x27b76c: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x27b76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x27b770: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x27b770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x27b774: 0x0  nop
    ctx->pc = 0x27b774u;
    // NOP
label_27b778:
    // 0x27b778: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x27b778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x27b77c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x27b77cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27b780: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27b780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x27b784: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x27b784u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x27b788: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27b788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27b78c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x27b78cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27b790: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27B790u;
    {
        const bool branch_taken_0x27b790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B790u;
            // 0x27b794: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b790) {
            ctx->pc = 0x27B778u;
            runtime->cooperativeGuestYield();
            goto label_27b778;
        }
    }
    ctx->pc = 0x27B798u;
    // 0x27b798: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27B798u;
    {
        const bool branch_taken_0x27b798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B798u;
            // 0x27b79c: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b798) {
            ctx->pc = 0x27B7A4u;
            goto label_27b7a4;
        }
    }
    ctx->pc = 0x27B7A0u;
label_27b7a0:
    // 0x27b7a0: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x27b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_27b7a4:
    // 0x27b7a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27b7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27b7a8:
    // 0x27b7a8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27b7a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b7ac: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27b7acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b7b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27b7b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x27B7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B7B4u;
            // 0x27b7b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27B750u: goto label_27b750;
            case 0x27B778u: goto label_27b778;
            case 0x27B7A0u: goto label_27b7a0;
            case 0x27B7A4u: goto label_27b7a4;
            case 0x27B7A8u: goto label_27b7a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27B7BCu;
    // 0x27b7bc: 0x0  nop
    ctx->pc = 0x27b7bcu;
    // NOP
}
