#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9520
// Address: 0x1a9520 - 0x1a95d8
void sub_001A9520_0x1a9520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9520_0x1a9520");
#endif

    ctx->pc = 0x1a9520u;

    // 0x1a9520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a9520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a9524: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a9524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1a9528: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a9528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a952c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a952cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9530: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1a9530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1a9534: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a9534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a953c: 0x9602004a  lhu         $v0, 0x4A($s0)
    ctx->pc = 0x1a953cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x1a9540: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A9540u;
    {
        const bool branch_taken_0x1a9540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9540u;
            // 0x1a9544: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9540) {
            ctx->pc = 0x1A95C0u;
            goto label_1a95c0;
        }
    }
    ctx->pc = 0x1A9548u;
    // 0x1a9548: 0x86040048  lh          $a0, 0x48($s0)
    ctx->pc = 0x1a9548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1a954c: 0x0  nop
    ctx->pc = 0x1a954cu;
    // NOP
label_1a9550:
    // 0x1a9550: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1a9550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1a9554: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1a9554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a9558: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1a9558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1a955c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1a955cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1a9560: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1a9560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1a9564: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a9564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a9568: 0x24632668  addiu       $v1, $v1, 0x2668
    ctx->pc = 0x1a9568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9832));
    // 0x1a956c: 0x94470000  lhu         $a3, 0x0($v0)
    ctx->pc = 0x1a956cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9570: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a9570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a9574: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x1a9574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1a9578: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1a9578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a957c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9580: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a9580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9584: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9584u;
    {
        const bool branch_taken_0x1a9584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9584u;
            // 0x1a9588: 0x3c06002b  lui         $a2, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9584) {
            ctx->pc = 0x1A959Cu;
            goto label_1a959c;
        }
    }
    ctx->pc = 0x1A958Cu;
    // 0x1a958c: 0xc06a416  jal         func_1A9058
    ctx->pc = 0x1A958Cu;
    SET_GPR_U32(ctx, 31, 0x1A9594u);
    ctx->pc = 0x1A9590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A958Cu;
            // 0x1a9590: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9058u;
    if (runtime->hasFunction(0x1A9058u)) {
        auto targetFn = runtime->lookupFunction(0x1A9058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9594u; }
        if (ctx->pc != 0x1A9594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9058_0x1a9058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9594u; }
        if (ctx->pc != 0x1A9594u) { return; }
    }
    ctx->pc = 0x1A9594u;
    // 0x1a9594: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9594u;
    {
        const bool branch_taken_0x1a9594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9594u;
            // 0x1a9598: 0x9602004a  lhu         $v0, 0x4A($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 74)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9594) {
            ctx->pc = 0x1A95B0u;
            goto label_1a95b0;
        }
    }
    ctx->pc = 0x1A959Cu;
label_1a959c:
    // 0x1a959c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a959cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a95a0: 0x24c64260  addiu       $a2, $a2, 0x4260
    ctx->pc = 0x1a95a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16992));
    // 0x1a95a4: 0xc091258  jal         func_244960
    ctx->pc = 0x1A95A4u;
    SET_GPR_U32(ctx, 31, 0x1A95ACu);
    ctx->pc = 0x1A95A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A95A4u;
            // 0x1a95a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244960u;
    if (runtime->hasFunction(0x244960u)) {
        auto targetFn = runtime->lookupFunction(0x244960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A95ACu; }
        if (ctx->pc != 0x1A95ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244960_0x244960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A95ACu; }
        if (ctx->pc != 0x1A95ACu) { return; }
    }
    ctx->pc = 0x1A95ACu;
    // 0x1a95ac: 0x9602004a  lhu         $v0, 0x4A($s0)
    ctx->pc = 0x1a95acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 74)));
label_1a95b0:
    // 0x1a95b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a95b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a95b4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a95b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a95b8: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1A95B8u;
    {
        const bool branch_taken_0x1a95b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a95b8) {
            ctx->pc = 0x1A95BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A95B8u;
            // 0x1a95bc: 0x86040048  lh          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9550u;
            runtime->cooperativeGuestYield();
            goto label_1a9550;
        }
    }
    ctx->pc = 0x1A95C0u;
label_1a95c0:
    // 0x1a95c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a95c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a95c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a95c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a95c8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1a95c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a95cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a95ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a95d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A95D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A95D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A95D0u;
            // 0x1a95d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9550u: goto label_1a9550;
            case 0x1A959Cu: goto label_1a959c;
            case 0x1A95B0u: goto label_1a95b0;
            case 0x1A95C0u: goto label_1a95c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A95D8u;
}
