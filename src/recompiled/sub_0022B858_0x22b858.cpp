#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022B858
// Address: 0x22b858 - 0x22b908
void sub_0022B858_0x22b858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B858_0x22b858");
#endif

    ctx->pc = 0x22b858u;

    // 0x22b858: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22b858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22b85c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22b860: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22b860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22b864: 0x24428bd0  addiu       $v0, $v0, -0x7430
    ctx->pc = 0x22b864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937552));
    // 0x22b868: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22b868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22b86c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22b86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b870: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22b870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22b874: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22b874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b87c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22b87cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b880: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x22b880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x22b884: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x22b884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_22b888:
    // 0x22b888: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x22b888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22b88c: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x22b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x22b890: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22B890u;
    {
        const bool branch_taken_0x22b890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B890u;
            // 0x22b894: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b890) {
            ctx->pc = 0x22B8ACu;
            goto label_22b8ac;
        }
    }
    ctx->pc = 0x22B898u;
    // 0x22b898: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x22b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x22b89c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x22b89cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22b8a0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x22b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22b8a4: 0x40f809  jalr        $v0
    ctx->pc = 0x22B8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B8ACu);
        ctx->pc = 0x22B8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B8A4u;
            // 0x22b8a8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22B8ACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B888u: goto label_22b888;
            case 0x22B8ACu: goto label_22b8ac;
            case 0x22B8D8u: goto label_22b8d8;
            case 0x22B8F0u: goto label_22b8f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22B8ACu; }
            if (ctx->pc != 0x22B8ACu) { return; }
        }
        }
    }
    ctx->pc = 0x22B8ACu;
label_22b8ac:
    // 0x22b8ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22b8acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22b8b0: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x22b8b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x22b8b4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x22B8B4u;
    {
        const bool branch_taken_0x22b8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B8B4u;
            // 0x22b8b8: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b8b4) {
            ctx->pc = 0x22B888u;
            runtime->cooperativeGuestYield();
            goto label_22b888;
        }
    }
    ctx->pc = 0x22B8BCu;
    // 0x22b8bc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22b8c0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x22b8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22b8c4: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x22b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x22b8c8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B8C8u;
    {
        const bool branch_taken_0x22b8c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B8C8u;
            // 0x22b8cc: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b8c8) {
            ctx->pc = 0x22B8D8u;
            goto label_22b8d8;
        }
    }
    ctx->pc = 0x22B8D0u;
    // 0x22b8d0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x22B8D0u;
    SET_GPR_U32(ctx, 31, 0x22B8D8u);
    ctx->pc = 0x22B8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B8D0u;
            // 0x22b8d4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B8D8u; }
        if (ctx->pc != 0x22B8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B8D8u; }
        if (ctx->pc != 0x22B8D8u) { return; }
    }
    ctx->pc = 0x22B8D8u;
label_22b8d8:
    // 0x22b8d8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x22b8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x22b8dc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B8DCu;
    {
        const bool branch_taken_0x22b8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b8dc) {
            ctx->pc = 0x22B8E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B8DCu;
            // 0x22b8e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B8F0u;
            goto label_22b8f0;
        }
    }
    ctx->pc = 0x22B8E4u;
    // 0x22b8e4: 0xc08acdc  jal         func_22B370
    ctx->pc = 0x22B8E4u;
    SET_GPR_U32(ctx, 31, 0x22B8ECu);
    ctx->pc = 0x22B8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B8E4u;
            // 0x22b8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B370u;
    if (runtime->hasFunction(0x22B370u)) {
        auto targetFn = runtime->lookupFunction(0x22B370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B8ECu; }
        if (ctx->pc != 0x22B8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22b370_0x22b398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B8ECu; }
        if (ctx->pc != 0x22B8ECu) { return; }
    }
    ctx->pc = 0x22B8ECu;
    // 0x22b8ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22b8ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22b8f0:
    // 0x22b8f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22b8f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b8f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22b8f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b8f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x22B8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B8FCu;
            // 0x22b900: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B888u: goto label_22b888;
            case 0x22B8ACu: goto label_22b8ac;
            case 0x22B8D8u: goto label_22b8d8;
            case 0x22B8F0u: goto label_22b8f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B904u;
    // 0x22b904: 0x0  nop
    ctx->pc = 0x22b904u;
    // NOP
}
