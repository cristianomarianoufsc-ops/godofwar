#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132688
// Address: 0x132688 - 0x132728
void sub_00132688_0x132688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132688_0x132688");
#endif

    ctx->pc = 0x132688u;

    // 0x132688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x132688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13268c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13268cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x132690: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x132690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x132694: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x132694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13269c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13269cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1326a0: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1326a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1326a4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1326a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1326a8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1326a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1326ac: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1326acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1326b0: 0x40f809  jalr        $v0
    ctx->pc = 0x1326B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1326B8u);
        ctx->pc = 0x1326B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1326B0u;
            // 0x1326b4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1326B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1326C8u: goto label_1326c8;
            case 0x132708u: goto label_132708;
            case 0x132710u: goto label_132710;
            case 0x132714u: goto label_132714;
            case 0x132718u: goto label_132718;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1326B8u; }
            if (ctx->pc != 0x1326B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1326B8u;
    // 0x1326b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1326b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1326bc: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1326BCu;
    {
        const bool branch_taken_0x1326bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1326C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1326BCu;
            // 0x1326c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1326bc) {
            ctx->pc = 0x132714u;
            goto label_132714;
        }
    }
    ctx->pc = 0x1326C4u;
    // 0x1326c4: 0x26040188  addiu       $a0, $s0, 0x188
    ctx->pc = 0x1326c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
label_1326c8:
    // 0x1326c8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1326c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1326cc: 0xc08c85c  jal         func_232170
    ctx->pc = 0x1326CCu;
    SET_GPR_U32(ctx, 31, 0x1326D4u);
    ctx->pc = 0x1326D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1326CCu;
            // 0x1326d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232170u;
    if (runtime->hasFunction(0x232170u)) {
        auto targetFn = runtime->lookupFunction(0x232170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1326D4u; }
        if (ctx->pc != 0x1326D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232170_0x232170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1326D4u; }
        if (ctx->pc != 0x1326D4u) { return; }
    }
    ctx->pc = 0x1326D4u;
    // 0x1326d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1326d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1326d8: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1326D8u;
    {
        const bool branch_taken_0x1326d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1326d8) {
            ctx->pc = 0x1326DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1326D8u;
            // 0x1326dc: 0x8e100050  lw          $s0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132708u;
            goto label_132708;
        }
    }
    ctx->pc = 0x1326E0u;
    // 0x1326e0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1326e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1326e4: 0x1c40000b  bgtz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1326E4u;
    {
        const bool branch_taken_0x1326e4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1326E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1326E4u;
            // 0x1326e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1326e4) {
            ctx->pc = 0x132714u;
            goto label_132714;
        }
    }
    ctx->pc = 0x1326ECu;
    // 0x1326ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1326ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1326f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1326f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1326f4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1326f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1326f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1326F8u;
    {
        const bool branch_taken_0x1326f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1326FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1326F8u;
            // 0x1326fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1326f8) {
            ctx->pc = 0x132710u;
            goto label_132710;
        }
    }
    ctx->pc = 0x132700u;
    // 0x132700: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x132700u;
    {
        const bool branch_taken_0x132700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132700u;
            // 0x132704: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132700) {
            ctx->pc = 0x132718u;
            goto label_132718;
        }
    }
    ctx->pc = 0x132708u;
label_132708:
    // 0x132708: 0x1600ffef  bnez        $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x132708u;
    {
        const bool branch_taken_0x132708 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13270Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132708u;
            // 0x13270c: 0x26040188  addiu       $a0, $s0, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132708) {
            ctx->pc = 0x1326C8u;
            runtime->cooperativeGuestYield();
            goto label_1326c8;
        }
    }
    ctx->pc = 0x132710u;
label_132710:
    // 0x132710: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x132710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132714:
    // 0x132714: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x132714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_132718:
    // 0x132718: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x132718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13271c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13271cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132720: 0x3e00008  jr          $ra
    ctx->pc = 0x132720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132720u;
            // 0x132724: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1326C8u: goto label_1326c8;
            case 0x132708u: goto label_132708;
            case 0x132710u: goto label_132710;
            case 0x132714u: goto label_132714;
            case 0x132718u: goto label_132718;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132728u;
}
