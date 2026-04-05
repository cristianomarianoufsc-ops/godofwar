#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6670
// Address: 0x1a6670 - 0x1a6778
void sub_001A6670_0x1a6670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6670_0x1a6670");
#endif

    ctx->pc = 0x1a6670u;

    // 0x1a6670: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a6670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a6674: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a6674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a6678: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a6678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a667c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a667cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6680: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a6680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a6684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a6684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6688: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a6688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a668c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1a668cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x1a6690: 0x10520030  beq         $v0, $s2, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A6690u;
    {
        const bool branch_taken_0x1a6690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A6694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6690u;
            // 0x1a6694: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6690) {
            ctx->pc = 0x1A6754u;
            goto label_1a6754;
        }
    }
    ctx->pc = 0x1A6698u;
    // 0x1a6698: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x1a6698u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a669c: 0x0  nop
    ctx->pc = 0x1a669cu;
    // NOP
label_1a66a0:
    // 0x1a66a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a66a4: 0x26230014  addiu       $v1, $s1, 0x14
    ctx->pc = 0x1a66a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1a66a8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a66a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1a66ac: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a66acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1a66b0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1a66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1a66b4: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A66B4u;
    {
        const bool branch_taken_0x1a66b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A66B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A66B4u;
            // 0x1a66b8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66b4) {
            ctx->pc = 0x1A671Cu;
            goto label_1a671c;
        }
    }
    ctx->pc = 0x1A66BCu;
    // 0x1a66bc: 0x8fb00014  lw          $s0, 0x14($sp)
    ctx->pc = 0x1a66bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1a66c0:
    // 0x1a66c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a66c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a66c4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1a66c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a66c8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A66C8u;
    {
        const bool branch_taken_0x1a66c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A66CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A66C8u;
            // 0x1a66cc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66c8) {
            ctx->pc = 0x1A66FCu;
            goto label_1a66fc;
        }
    }
    ctx->pc = 0x1A66D0u;
    // 0x1a66d0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1a66d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a66d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A66D4u;
    {
        const bool branch_taken_0x1a66d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A66D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A66D4u;
            // 0x1a66d8: 0x3c05001b  lui         $a1, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66d4) {
            ctx->pc = 0x1A66F0u;
            goto label_1a66f0;
        }
    }
    ctx->pc = 0x1A66DCu;
    // 0x1a66dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a66dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a66e0: 0xc04c572  jal         func_1315C8
    ctx->pc = 0x1A66E0u;
    SET_GPR_U32(ctx, 31, 0x1A66E8u);
    ctx->pc = 0x1A66E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A66E0u;
            // 0x1a66e4: 0x24a5d7c8  addiu       $a1, $a1, -0x2838 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315C8u;
    if (runtime->hasFunction(0x1315C8u)) {
        auto targetFn = runtime->lookupFunction(0x1315C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66E8u; }
        if (ctx->pc != 0x1A66E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315c8_0x1315d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66E8u; }
        if (ctx->pc != 0x1A66E8u) { return; }
    }
    ctx->pc = 0x1A66E8u;
    // 0x1a66e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A66E8u;
    {
        const bool branch_taken_0x1a66e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a66e8) {
            ctx->pc = 0x1A66FCu;
            goto label_1a66fc;
        }
    }
    ctx->pc = 0x1A66F0u;
label_1a66f0:
    // 0x1a66f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a66f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a66f4: 0xc04c572  jal         func_1315C8
    ctx->pc = 0x1A66F4u;
    SET_GPR_U32(ctx, 31, 0x1A66FCu);
    ctx->pc = 0x1A66F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A66F4u;
            // 0x1a66f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315C8u;
    if (runtime->hasFunction(0x1315C8u)) {
        auto targetFn = runtime->lookupFunction(0x1315C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66FCu; }
        if (ctx->pc != 0x1A66FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315c8_0x1315d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66FCu; }
        if (ctx->pc != 0x1A66FCu) { return; }
    }
    ctx->pc = 0x1A66FCu;
label_1a66fc:
    // 0x1a66fc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A66FCu;
    {
        const bool branch_taken_0x1a66fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A66FCu;
            // 0x1a6700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66fc) {
            ctx->pc = 0x1A670Cu;
            goto label_1a670c;
        }
    }
    ctx->pc = 0x1A6704u;
    // 0x1a6704: 0xc06961c  jal         func_1A5870
    ctx->pc = 0x1A6704u;
    SET_GPR_U32(ctx, 31, 0x1A670Cu);
    ctx->pc = 0x1A6708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6704u;
            // 0x1a6708: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5870u;
    if (runtime->hasFunction(0x1A5870u)) {
        auto targetFn = runtime->lookupFunction(0x1A5870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A670Cu; }
        if (ctx->pc != 0x1A670Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5870_0x1a5870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A670Cu; }
        if (ctx->pc != 0x1A670Cu) { return; }
    }
    ctx->pc = 0x1A670Cu;
label_1a670c:
    // 0x1a670c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1a670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1a6710: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a6710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6714: 0x5462ffea  bnel        $v1, $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1A6714u;
    {
        const bool branch_taken_0x1a6714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a6714) {
            ctx->pc = 0x1A6718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6714u;
            // 0x1a6718: 0x8fb00014  lw          $s0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A66C0u;
            runtime->cooperativeGuestYield();
            goto label_1a66c0;
        }
    }
    ctx->pc = 0x1A671Cu;
label_1a671c:
    // 0x1a671c: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x1a671cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1a6720: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1a6720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a6724: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1a6724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1a6728: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6728u;
    {
        const bool branch_taken_0x1a6728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A672Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6728u;
            // 0x1a672c: 0xac420004  sw          $v0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6728) {
            ctx->pc = 0x1A673Cu;
            goto label_1a673c;
        }
    }
    ctx->pc = 0x1A6730u;
    // 0x1a6730: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6734: 0xc04d290  jal         func_134A40
    ctx->pc = 0x1A6734u;
    SET_GPR_U32(ctx, 31, 0x1A673Cu);
    ctx->pc = 0x1A6738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6734u;
            // 0x1a6738: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A40u;
    if (runtime->hasFunction(0x134A40u)) {
        auto targetFn = runtime->lookupFunction(0x134A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A673Cu; }
        if (ctx->pc != 0x1A673Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_134a40_0x134a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A673Cu; }
        if (ctx->pc != 0x1A673Cu) { return; }
    }
    ctx->pc = 0x1A673Cu;
label_1a673c:
    // 0x1a673c: 0xc0699e8  jal         func_1A67A0
    ctx->pc = 0x1A673Cu;
    SET_GPR_U32(ctx, 31, 0x1A6744u);
    ctx->pc = 0x1A6740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A673Cu;
            // 0x1a6740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A67A0u;
    if (runtime->hasFunction(0x1A67A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A67A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6744u; }
        if (ctx->pc != 0x1A6744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a67a0_0x1a67c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6744u; }
        if (ctx->pc != 0x1A6744u) { return; }
    }
    ctx->pc = 0x1A6744u;
    // 0x1a6744: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a6744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a6748: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a6748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a674c: 0x1462ffd4  bne         $v1, $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1A674Cu;
    {
        const bool branch_taken_0x1a674c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A674Cu;
            // 0x1a6750: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a674c) {
            ctx->pc = 0x1A66A0u;
            runtime->cooperativeGuestYield();
            goto label_1a66a0;
        }
    }
    ctx->pc = 0x1A6754u;
label_1a6754:
    // 0x1a6754: 0xae520004  sw          $s2, 0x4($s2)
    ctx->pc = 0x1a6754u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 18));
    // 0x1a6758: 0xae520000  sw          $s2, 0x0($s2)
    ctx->pc = 0x1a6758u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 18));
    // 0x1a675c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a675cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a6760: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a6760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6764: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a6764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6768: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a676c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A676Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A676Cu;
            // 0x1a6770: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A66A0u: goto label_1a66a0;
            case 0x1A66C0u: goto label_1a66c0;
            case 0x1A66F0u: goto label_1a66f0;
            case 0x1A66FCu: goto label_1a66fc;
            case 0x1A670Cu: goto label_1a670c;
            case 0x1A671Cu: goto label_1a671c;
            case 0x1A673Cu: goto label_1a673c;
            case 0x1A6754u: goto label_1a6754;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A6774u;
    // 0x1a6774: 0x0  nop
    ctx->pc = 0x1a6774u;
    // NOP
}
