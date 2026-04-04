#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014E8F0
// Address: 0x14e8f0 - 0x14e9d8
void sub_0014E8F0_0x14e8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E8F0_0x14e8f0");
#endif

    ctx->pc = 0x14e8f0u;

    // 0x14e8f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14e8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14e8f4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x14e8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x14e8f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14e8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14e8fc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x14e8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x14e900: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14e900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e904: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14e904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14e908: 0x52403  sra         $a0, $a1, 16
    ctx->pc = 0x14e908u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 16));
    // 0x14e90c: 0x30f0ffff  andi        $s0, $a3, 0xFFFF
    ctx->pc = 0x14e90cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x14e910: 0x62c03  sra         $a1, $a2, 16
    ctx->pc = 0x14e910u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 16));
    // 0x14e914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14e914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14e918: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14e918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e91c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x14e91cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e920: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14e920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e924: 0xc0534de  jal         func_14D378
    ctx->pc = 0x14E924u;
    SET_GPR_U32(ctx, 31, 0x14E92Cu);
    ctx->pc = 0x14E928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E924u;
            // 0x14e928: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D378u;
    if (runtime->hasFunction(0x14D378u)) {
        auto targetFn = runtime->lookupFunction(0x14D378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E92Cu; }
        if (ctx->pc != 0x14E92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D378_0x14d378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E92Cu; }
        if (ctx->pc != 0x14E92Cu) { return; }
    }
    ctx->pc = 0x14E92Cu;
    // 0x14e92c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14e92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e930: 0x2e02003b  sltiu       $v0, $s0, 0x3B
    ctx->pc = 0x14e930u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x14e934: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x14E934u;
    {
        const bool branch_taken_0x14e934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E934u;
            // 0x14e938: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e934) {
            ctx->pc = 0x14E9C4u;
            goto label_14e9c4;
        }
    }
    ctx->pc = 0x14E93Cu;
    // 0x14e93c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x14e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x14e940: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14e940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14e944: 0x244221b0  addiu       $v0, $v0, 0x21B0
    ctx->pc = 0x14e944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8624));
    // 0x14e948: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14e94c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e950: 0x400008  jr          $v0
    ctx->pc = 0x14E950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E958u: goto label_14e958;
            case 0x14E96Cu: goto label_14e96c;
            case 0x14E980u: goto label_14e980;
            case 0x14E998u: goto label_14e998;
            case 0x14E9B0u: goto label_14e9b0;
            case 0x14E9C0u: goto label_14e9c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14E958u;
label_14e958:
    // 0x14e958: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x14e958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e95c: 0xc053668  jal         func_14D9A0
    ctx->pc = 0x14E95Cu;
    SET_GPR_U32(ctx, 31, 0x14E964u);
    ctx->pc = 0x14E960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E95Cu;
            // 0x14e960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D9A0u;
    if (runtime->hasFunction(0x14D9A0u)) {
        auto targetFn = runtime->lookupFunction(0x14D9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E964u; }
        if (ctx->pc != 0x14E964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14d9a0_0x14da78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E964u; }
        if (ctx->pc != 0x14E964u) { return; }
    }
    ctx->pc = 0x14E964u;
    // 0x14e964: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14E964u;
    {
        const bool branch_taken_0x14e964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E964u;
            // 0x14e968: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e964) {
            ctx->pc = 0x14E9C4u;
            goto label_14e9c4;
        }
    }
    ctx->pc = 0x14E96Cu;
label_14e96c:
    // 0x14e96c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x14e96cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e970: 0xc05369e  jal         func_14DA78
    ctx->pc = 0x14E970u;
    SET_GPR_U32(ctx, 31, 0x14E978u);
    ctx->pc = 0x14E974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E970u;
            // 0x14e974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DA78u;
    if (runtime->hasFunction(0x14DA78u)) {
        auto targetFn = runtime->lookupFunction(0x14DA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E978u; }
        if (ctx->pc != 0x14E978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14da78_0x14db88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E978u; }
        if (ctx->pc != 0x14E978u) { return; }
    }
    ctx->pc = 0x14E978u;
    // 0x14e978: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14E978u;
    {
        const bool branch_taken_0x14e978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E978u;
            // 0x14e97c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e978) {
            ctx->pc = 0x14E9C4u;
            goto label_14e9c4;
        }
    }
    ctx->pc = 0x14E980u;
label_14e980:
    // 0x14e980: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x14e980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e988: 0xc0536e2  jal         func_14DB88
    ctx->pc = 0x14E988u;
    SET_GPR_U32(ctx, 31, 0x14E990u);
    ctx->pc = 0x14E98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E988u;
            // 0x14e98c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB88u;
    if (runtime->hasFunction(0x14DB88u)) {
        auto targetFn = runtime->lookupFunction(0x14DB88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E990u; }
        if (ctx->pc != 0x14E990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14db88_0x14dc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E990u; }
        if (ctx->pc != 0x14E990u) { return; }
    }
    ctx->pc = 0x14E990u;
    // 0x14e990: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14E990u;
    {
        const bool branch_taken_0x14e990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E990u;
            // 0x14e994: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e990) {
            ctx->pc = 0x14E9C4u;
            goto label_14e9c4;
        }
    }
    ctx->pc = 0x14E998u;
label_14e998:
    // 0x14e998: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x14e998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e99c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e9a0: 0xc0536e2  jal         func_14DB88
    ctx->pc = 0x14E9A0u;
    SET_GPR_U32(ctx, 31, 0x14E9A8u);
    ctx->pc = 0x14E9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E9A0u;
            // 0x14e9a4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB88u;
    if (runtime->hasFunction(0x14DB88u)) {
        auto targetFn = runtime->lookupFunction(0x14DB88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E9A8u; }
        if (ctx->pc != 0x14E9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14db88_0x14dc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E9A8u; }
        if (ctx->pc != 0x14E9A8u) { return; }
    }
    ctx->pc = 0x14E9A8u;
    // 0x14e9a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14E9A8u;
    {
        const bool branch_taken_0x14e9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E9A8u;
            // 0x14e9ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9a8) {
            ctx->pc = 0x14E9C4u;
            goto label_14e9c4;
        }
    }
    ctx->pc = 0x14E9B0u;
label_14e9b0:
    // 0x14e9b0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x14e9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e9b4: 0xc053618  jal         func_14D860
    ctx->pc = 0x14E9B4u;
    SET_GPR_U32(ctx, 31, 0x14E9BCu);
    ctx->pc = 0x14E9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E9B4u;
            // 0x14e9b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D860u;
    if (runtime->hasFunction(0x14D860u)) {
        auto targetFn = runtime->lookupFunction(0x14D860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E9BCu; }
        if (ctx->pc != 0x14E9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14d860_0x14d9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E9BCu; }
        if (ctx->pc != 0x14E9BCu) { return; }
    }
    ctx->pc = 0x14E9BCu;
    // 0x14e9bc: 0x0  nop
    ctx->pc = 0x14e9bcu;
    // NOP
label_14e9c0:
    // 0x14e9c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14e9c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e9c4:
    // 0x14e9c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14e9c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e9c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14e9c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e9cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14e9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x14E9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E9D0u;
            // 0x14e9d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E958u: goto label_14e958;
            case 0x14E96Cu: goto label_14e96c;
            case 0x14E980u: goto label_14e980;
            case 0x14E998u: goto label_14e998;
            case 0x14E9B0u: goto label_14e9b0;
            case 0x14E9C0u: goto label_14e9c0;
            case 0x14E9C4u: goto label_14e9c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14E9D8u;
}
