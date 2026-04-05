#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DE850
// Address: 0x1de850 - 0x1de8e8
void sub_001DE850_0x1de850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE850_0x1de850");
#endif

    ctx->pc = 0x1de850u;

    // 0x1de850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de854: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1de854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1de858: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1de858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1de85c: 0x2442a7b0  addiu       $v0, $v0, -0x5850
    ctx->pc = 0x1de85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944688));
    // 0x1de860: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1de860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1de864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de86c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1de86cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de870: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1de870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1de874: 0xc07821c  jal         func_1E0870
    ctx->pc = 0x1DE874u;
    SET_GPR_U32(ctx, 31, 0x1DE87Cu);
    ctx->pc = 0x1DE878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE874u;
            // 0x1de878: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0870u;
    if (runtime->hasFunction(0x1E0870u)) {
        auto targetFn = runtime->lookupFunction(0x1E0870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE87Cu; }
        if (ctx->pc != 0x1DE87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0870_0x1e0870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE87Cu; }
        if (ctx->pc != 0x1DE87Cu) { return; }
    }
    ctx->pc = 0x1DE87Cu;
    // 0x1de87c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1de87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1de880: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1de880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1de884: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE884u;
    {
        const bool branch_taken_0x1de884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de884) {
            ctx->pc = 0x1DE888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE884u;
            // 0x1de888: 0x8e020174  lw          $v0, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE898u;
            goto label_1de898;
        }
    }
    ctx->pc = 0x1DE88Cu;
    // 0x1de88c: 0xc078350  jal         func_1E0D40
    ctx->pc = 0x1DE88Cu;
    SET_GPR_U32(ctx, 31, 0x1DE894u);
    ctx->pc = 0x1DE890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE88Cu;
            // 0x1de890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0D40u;
    if (runtime->hasFunction(0x1E0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE894u; }
        if (ctx->pc != 0x1DE894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0D40_0x1e0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE894u; }
        if (ctx->pc != 0x1DE894u) { return; }
    }
    ctx->pc = 0x1DE894u;
    // 0x1de894: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1de894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1de898:
    // 0x1de898: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1de898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1de89c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE89Cu;
    {
        const bool branch_taken_0x1de89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de89c) {
            ctx->pc = 0x1DE8ACu;
            goto label_1de8ac;
        }
    }
    ctx->pc = 0x1DE8A4u;
    // 0x1de8a4: 0xc078350  jal         func_1E0D40
    ctx->pc = 0x1DE8A4u;
    SET_GPR_U32(ctx, 31, 0x1DE8ACu);
    ctx->pc = 0x1DE8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE8A4u;
            // 0x1de8a8: 0x8e04018c  lw          $a0, 0x18C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0D40u;
    if (runtime->hasFunction(0x1E0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE8ACu; }
        if (ctx->pc != 0x1DE8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0D40_0x1e0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE8ACu; }
        if (ctx->pc != 0x1DE8ACu) { return; }
    }
    ctx->pc = 0x1DE8ACu;
label_1de8ac:
    // 0x1de8ac: 0xc077b10  jal         func_1DEC40
    ctx->pc = 0x1DE8ACu;
    SET_GPR_U32(ctx, 31, 0x1DE8B4u);
    ctx->pc = 0x1DE8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE8ACu;
            // 0x1de8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DEC40u;
    if (runtime->hasFunction(0x1DEC40u)) {
        auto targetFn = runtime->lookupFunction(0x1DEC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE8B4u; }
        if (ctx->pc != 0x1DE8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DEC40_0x1dec40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE8B4u; }
        if (ctx->pc != 0x1DE8B4u) { return; }
    }
    ctx->pc = 0x1DE8B4u;
    // 0x1de8b4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1de8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1de8b8: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x1de8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1de8bc: 0x2442a8b0  addiu       $v0, $v0, -0x5750
    ctx->pc = 0x1de8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944944));
    // 0x1de8c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE8C0u;
    {
        const bool branch_taken_0x1de8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE8C0u;
            // 0x1de8c4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de8c0) {
            ctx->pc = 0x1DE8D0u;
            goto label_1de8d0;
        }
    }
    ctx->pc = 0x1DE8C8u;
    // 0x1de8c8: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x1DE8C8u;
    SET_GPR_U32(ctx, 31, 0x1DE8D0u);
    ctx->pc = 0x1DE8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE8C8u;
            // 0x1de8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE8D0u; }
        if (ctx->pc != 0x1DE8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE8D0u; }
        if (ctx->pc != 0x1DE8D0u) { return; }
    }
    ctx->pc = 0x1DE8D0u;
label_1de8d0:
    // 0x1de8d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1de8d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de8d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de8d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE8DCu;
            // 0x1de8e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE898u: goto label_1de898;
            case 0x1DE8ACu: goto label_1de8ac;
            case 0x1DE8D0u: goto label_1de8d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DE8E4u;
    // 0x1de8e4: 0x0  nop
    ctx->pc = 0x1de8e4u;
    // NOP
}
