#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5870
// Address: 0x1a5870 - 0x1a5918
void sub_001A5870_0x1a5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5870_0x1a5870");
#endif

    ctx->pc = 0x1a5870u;

    // 0x1a5870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a5874: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a5874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1a5878: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a5878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a587c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a587cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5880: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5884: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1a5884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1a5888: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A5888u;
    {
        const bool branch_taken_0x1a5888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A588Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5888u;
            // 0x1a588c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5888) {
            ctx->pc = 0x1A58D0u;
            goto label_1a58d0;
        }
    }
    ctx->pc = 0x1A5890u;
    // 0x1a5890: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1a5890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1a5894: 0x24432630  addiu       $v1, $v0, 0x2630
    ctx->pc = 0x1a5894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9776));
    // 0x1a5898: 0x8c422630  lw          $v0, 0x2630($v0)
    ctx->pc = 0x1a5898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9776)));
    // 0x1a589c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a589cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a58a0: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A58A0u;
    {
        const bool branch_taken_0x1a58a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A58A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A58A0u;
            // 0x1a58a4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58a0) {
            ctx->pc = 0x1A58D0u;
            goto label_1a58d0;
        }
    }
    ctx->pc = 0x1A58A8u;
    // 0x1a58a8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a58a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a58ac: 0x0  nop
    ctx->pc = 0x1a58acu;
    // NOP
label_1a58b0:
    // 0x1a58b0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a58b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a58b4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a58b8: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A58B8u;
    {
        const bool branch_taken_0x1a58b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1a58b8) {
            ctx->pc = 0x1A58BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A58B8u;
            // 0x1a58bc: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A58C0u;
            goto label_1a58c0;
        }
    }
    ctx->pc = 0x1A58C0u;
label_1a58c0:
    // 0x1a58c0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a58c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a58c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a58c8: 0x1444fff9  bne         $v0, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A58C8u;
    {
        const bool branch_taken_0x1a58c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A58CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A58C8u;
            // 0x1a58cc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58c8) {
            ctx->pc = 0x1A58B0u;
            runtime->cooperativeGuestYield();
            goto label_1a58b0;
        }
    }
    ctx->pc = 0x1A58D0u;
label_1a58d0:
    // 0x1a58d0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a58d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a58d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A58D4u;
    {
        const bool branch_taken_0x1a58d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A58D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A58D4u;
            // 0x1a58d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58d4) {
            ctx->pc = 0x1A58F0u;
            goto label_1a58f0;
        }
    }
    ctx->pc = 0x1A58DCu;
    // 0x1a58dc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a58e0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a58e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a58e4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1a58e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a58e8: 0x40f809  jalr        $v0
    ctx->pc = 0x1A58E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A58F0u);
        ctx->pc = 0x1A58ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A58E8u;
            // 0x1a58ec: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A58F0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A58B0u: goto label_1a58b0;
            case 0x1A58C0u: goto label_1a58c0;
            case 0x1A58D0u: goto label_1a58d0;
            case 0x1A58F0u: goto label_1a58f0;
            case 0x1A5908u: goto label_1a5908;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A58F0u; }
            if (ctx->pc != 0x1A58F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A58F0u;
label_1a58f0:
    // 0x1a58f0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1a58f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1a58f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A58F4u;
    {
        const bool branch_taken_0x1a58f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a58f4) {
            ctx->pc = 0x1A58F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A58F4u;
            // 0x1a58f8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5908u;
            goto label_1a5908;
        }
    }
    ctx->pc = 0x1A58FCu;
    // 0x1a58fc: 0xc06978a  jal         func_1A5E28
    ctx->pc = 0x1A58FCu;
    SET_GPR_U32(ctx, 31, 0x1A5904u);
    ctx->pc = 0x1A5900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A58FCu;
            // 0x1a5900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5E28u;
    if (runtime->hasFunction(0x1A5E28u)) {
        auto targetFn = runtime->lookupFunction(0x1A5E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5904u; }
        if (ctx->pc != 0x1A5904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5e28_0x1a5e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5904u; }
        if (ctx->pc != 0x1A5904u) { return; }
    }
    ctx->pc = 0x1A5904u;
    // 0x1a5904: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a5904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a5908:
    // 0x1a5908: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a5908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a590c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a590cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5910: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5910u;
            // 0x1a5914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A58B0u: goto label_1a58b0;
            case 0x1A58C0u: goto label_1a58c0;
            case 0x1A58D0u: goto label_1a58d0;
            case 0x1A58F0u: goto label_1a58f0;
            case 0x1A5908u: goto label_1a5908;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5918u;
}
