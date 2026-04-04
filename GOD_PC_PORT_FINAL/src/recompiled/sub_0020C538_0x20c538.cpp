#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020C538
// Address: 0x20c538 - 0x20c680
void sub_0020C538_0x20c538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C538_0x20c538");
#endif

    ctx->pc = 0x20c538u;

label_20c538:
    // 0x20c538: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20c538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20c53c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x20c53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x20c540: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20c540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20c544: 0x24a55ab0  addiu       $a1, $a1, 0x5AB0
    ctx->pc = 0x20c544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23216));
    // 0x20c548: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20c548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x20c54c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20c54cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c550: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x20c550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x20c554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c558: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x20c558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x20c55c: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x20C55Cu;
    SET_GPR_U32(ctx, 31, 0x20C564u);
    ctx->pc = 0x20C560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C55Cu;
            // 0x20c560: 0x24840034  addiu       $a0, $a0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C564u; }
        if (ctx->pc != 0x20C564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C564u; }
        if (ctx->pc != 0x20C564u) { return; }
    }
    ctx->pc = 0x20C564u;
    // 0x20c564: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x20C564u;
    {
        const bool branch_taken_0x20c564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C564u;
            // 0x20c568: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c564) {
            ctx->pc = 0x20C5FCu;
            goto label_20c5fc;
        }
    }
    ctx->pc = 0x20C56Cu;
    // 0x20c56c: 0x8e300088  lw          $s0, 0x88($s1)
    ctx->pc = 0x20c56cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x20c570: 0xc05e996  jal         func_17A658
    ctx->pc = 0x20C570u;
    SET_GPR_U32(ctx, 31, 0x20C578u);
    ctx->pc = 0x20C574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C570u;
            // 0x20c574: 0x248414d0  addiu       $a0, $a0, 0x14D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C578u; }
        if (ctx->pc != 0x20C578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C578u; }
        if (ctx->pc != 0x20C578u) { return; }
    }
    ctx->pc = 0x20C578u;
    // 0x20c578: 0x8e05019c  lw          $a1, 0x19C($s0)
    ctx->pc = 0x20c578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x20c57c: 0x50a00020  beql        $a1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x20C57Cu;
    {
        const bool branch_taken_0x20c57c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c57c) {
            ctx->pc = 0x20C580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C57Cu;
            // 0x20c580: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C600u;
            goto label_20c600;
        }
    }
    ctx->pc = 0x20C584u;
    // 0x20c584: 0x8c440360  lw          $a0, 0x360($v0)
    ctx->pc = 0x20c584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 864)));
    // 0x20c588: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x20c588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x20c58c: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20C58Cu;
    {
        const bool branch_taken_0x20c58c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C58Cu;
            // 0x20c590: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c58c) {
            ctx->pc = 0x20C598u;
            goto label_20c598;
        }
    }
    ctx->pc = 0x20C594u;
    // 0x20c594: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x20c594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_20c598:
    // 0x20c598: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x20C598u;
    {
        const bool branch_taken_0x20c598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c598) {
            ctx->pc = 0x20C59Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C598u;
            // 0x20c59c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C600u;
            goto label_20c600;
        }
    }
    ctx->pc = 0x20C5A0u;
    // 0x20c5a0: 0x8cb20048  lw          $s2, 0x48($a1)
    ctx->pc = 0x20c5a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x20c5a4: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20C5A4u;
    {
        const bool branch_taken_0x20c5a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C5A4u;
            // 0x20c5a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5a4) {
            ctx->pc = 0x20C5B0u;
            goto label_20c5b0;
        }
    }
    ctx->pc = 0x20C5ACu;
    // 0x20c5ac: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x20c5acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_20c5b0:
    // 0x20c5b0: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x20c5b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x20c5b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20c5b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C5B8u;
    {
        const bool branch_taken_0x20c5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C5B8u;
            // 0x20c5bc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5b8) {
            ctx->pc = 0x20C5C8u;
            goto label_20c5c8;
        }
    }
    ctx->pc = 0x20C5C0u;
    // 0x20c5c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20C5C0u;
    {
        const bool branch_taken_0x20c5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C5C0u;
            // 0x20c5c4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5c0) {
            ctx->pc = 0x20C5E4u;
            goto label_20c5e4;
        }
    }
    ctx->pc = 0x20C5C8u;
label_20c5c8:
    // 0x20c5c8: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x20c5c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x20c5cc: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x20c5ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x20c5d0: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C5D0u;
    {
        const bool branch_taken_0x20c5d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x20C5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C5D0u;
            // 0x20c5d4: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5d0) {
            ctx->pc = 0x20C5E4u;
            goto label_20c5e4;
        }
    }
    ctx->pc = 0x20C5D8u;
    // 0x20c5d8: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x20C5D8u;
    SET_GPR_U32(ctx, 31, 0x20C5E0u);
    ctx->pc = 0x20C5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C5D8u;
            // 0x20c5dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C5E0u; }
        if (ctx->pc != 0x20C5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C5E0u; }
        if (ctx->pc != 0x20C5E0u) { return; }
    }
    ctx->pc = 0x20C5E0u;
    // 0x20c5e0: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x20c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_20c5e4:
    // 0x20c5e4: 0x78850030  lq          $a1, 0x30($a0)
    ctx->pc = 0x20c5e4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x20c5e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20c5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c5ec: 0xc05b75e  jal         func_16DD78
    ctx->pc = 0x20C5ECu;
    SET_GPR_U32(ctx, 31, 0x20C5F4u);
    ctx->pc = 0x20C5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C5ECu;
            // 0x20c5f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16DD78u;
    if (runtime->hasFunction(0x16DD78u)) {
        auto targetFn = runtime->lookupFunction(0x16DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C5F4u; }
        if (ctx->pc != 0x20C5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16dd78_0x16df30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C5F4u; }
        if (ctx->pc != 0x20C5F4u) { return; }
    }
    ctx->pc = 0x20C5F4u;
    // 0x20c5f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20C5F4u;
    {
        const bool branch_taken_0x20c5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C5F4u;
            // 0x20c5f8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5f4) {
            ctx->pc = 0x20C604u;
            goto label_20c604;
        }
    }
    ctx->pc = 0x20C5FCu;
label_20c5fc:
    // 0x20c5fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c600:
    // 0x20c600: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20c600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20c604:
    // 0x20c604: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20c604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20c608: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20c608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c60c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c610: 0x3e00008  jr          $ra
    ctx->pc = 0x20C610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C610u;
            // 0x20c614: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C538u: goto label_20c538;
            case 0x20C598u: goto label_20c598;
            case 0x20C5B0u: goto label_20c5b0;
            case 0x20C5C8u: goto label_20c5c8;
            case 0x20C5E4u: goto label_20c5e4;
            case 0x20C5FCu: goto label_20c5fc;
            case 0x20C600u: goto label_20c600;
            case 0x20C604u: goto label_20c604;
            case 0x20C650u: goto label_20c650;
            case 0x20C670u: goto label_20c670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C618u;
    // 0x20c618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c61c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20c61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20c620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c628: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20c628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20c62c: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x20c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x20c630: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x20c630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x20c634: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x20c634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x20c638: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x20c638u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x20c63c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x20c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x20c640: 0x40f809  jalr        $v0
    ctx->pc = 0x20C640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20C648u);
        ctx->pc = 0x20C644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C640u;
            // 0x20c644: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20C648u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C538u: goto label_20c538;
            case 0x20C598u: goto label_20c598;
            case 0x20C5B0u: goto label_20c5b0;
            case 0x20C5C8u: goto label_20c5c8;
            case 0x20C5E4u: goto label_20c5e4;
            case 0x20C5FCu: goto label_20c5fc;
            case 0x20C600u: goto label_20c600;
            case 0x20C604u: goto label_20c604;
            case 0x20C650u: goto label_20c650;
            case 0x20C670u: goto label_20c670;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20C648u; }
            if (ctx->pc != 0x20C648u) { return; }
        }
        }
    }
    ctx->pc = 0x20C648u;
    // 0x20c648: 0xc08314e  jal         func_20C538
    ctx->pc = 0x20C648u;
    SET_GPR_U32(ctx, 31, 0x20C650u);
    ctx->pc = 0x20C64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C648u;
            // 0x20c64c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C538u;
    runtime->cooperativeGuestYield();
    goto label_20c538;
    ctx->pc = 0x20C650u;
label_20c650:
    // 0x20c650: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C650u;
    {
        const bool branch_taken_0x20c650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C650u;
            // 0x20c654: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c650) {
            ctx->pc = 0x20C670u;
            goto label_20c670;
        }
    }
    ctx->pc = 0x20C658u;
    // 0x20c658: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x20c658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x20c65c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20c660: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x20c660u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x20c664: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x20c664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x20c668: 0x40f809  jalr        $v0
    ctx->pc = 0x20C668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20C670u);
        ctx->pc = 0x20C66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C668u;
            // 0x20c66c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20C670u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C538u: goto label_20c538;
            case 0x20C598u: goto label_20c598;
            case 0x20C5B0u: goto label_20c5b0;
            case 0x20C5C8u: goto label_20c5c8;
            case 0x20C5E4u: goto label_20c5e4;
            case 0x20C5FCu: goto label_20c5fc;
            case 0x20C600u: goto label_20c600;
            case 0x20C604u: goto label_20c604;
            case 0x20C650u: goto label_20c650;
            case 0x20C670u: goto label_20c670;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20C670u; }
            if (ctx->pc != 0x20C670u) { return; }
        }
        }
    }
    ctx->pc = 0x20C670u;
label_20c670:
    // 0x20c670: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20c670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c678: 0x3e00008  jr          $ra
    ctx->pc = 0x20C678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C678u;
            // 0x20c67c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C538u: goto label_20c538;
            case 0x20C598u: goto label_20c598;
            case 0x20C5B0u: goto label_20c5b0;
            case 0x20C5C8u: goto label_20c5c8;
            case 0x20C5E4u: goto label_20c5e4;
            case 0x20C5FCu: goto label_20c5fc;
            case 0x20C600u: goto label_20c600;
            case 0x20C604u: goto label_20c604;
            case 0x20C650u: goto label_20c650;
            case 0x20C670u: goto label_20c670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C680u;
}
