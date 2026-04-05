#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EC830
// Address: 0x1ec830 - 0x1ec8b8
void sub_001EC830_0x1ec830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC830_0x1ec830");
#endif

    ctx->pc = 0x1ec830u;

    // 0x1ec830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ec830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ec834: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ec834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ec838: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ec838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ec83c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ec83cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec840: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ec840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ec844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec848: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1ec848u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ec84c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EC84Cu;
    {
        const bool branch_taken_0x1ec84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC84Cu;
            // 0x1ec850: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec84c) {
            ctx->pc = 0x1EC89Cu;
            goto label_1ec89c;
        }
    }
    ctx->pc = 0x1EC854u;
    // 0x1ec854: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ec854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ec858: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ec858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec85c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ec85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec860: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1EC860u;
    SET_GPR_U32(ctx, 31, 0x1EC868u);
    ctx->pc = 0x1EC864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC860u;
            // 0x1ec864: 0x8c500104  lw          $s0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC868u; }
        if (ctx->pc != 0x1EC868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC868u; }
        if (ctx->pc != 0x1EC868u) { return; }
    }
    ctx->pc = 0x1EC868u;
    // 0x1ec868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ec868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec86c: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1EC86Cu;
    SET_GPR_U32(ctx, 31, 0x1EC874u);
    ctx->pc = 0x1EC870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC86Cu;
            // 0x1ec870: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC874u; }
        if (ctx->pc != 0x1EC874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC874u; }
        if (ctx->pc != 0x1EC874u) { return; }
    }
    ctx->pc = 0x1EC874u;
    // 0x1ec874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ec874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec878: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x1ec878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1ec87c: 0x26220344  addiu       $v0, $s1, 0x344
    ctx->pc = 0x1ec87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 836));
    // 0x1ec880: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ec880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec884: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x1ec884u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec888: 0x50440005  beql        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC888u;
    {
        const bool branch_taken_0x1ec888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ec888) {
            ctx->pc = 0x1EC88Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC888u;
            // 0x1ec88c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC8A0u;
            goto label_1ec8a0;
        }
    }
    ctx->pc = 0x1EC890u;
    // 0x1ec890: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x1ec890u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ec894: 0xc04d9ca  jal         func_136728
    ctx->pc = 0x1EC894u;
    SET_GPR_U32(ctx, 31, 0x1EC89Cu);
    ctx->pc = 0x1EC898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC894u;
            // 0x1ec898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136728u;
    if (runtime->hasFunction(0x136728u)) {
        auto targetFn = runtime->lookupFunction(0x136728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC89Cu; }
        if (ctx->pc != 0x1EC89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136728_0x136728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC89Cu; }
        if (ctx->pc != 0x1EC89Cu) { return; }
    }
    ctx->pc = 0x1EC89Cu;
label_1ec89c:
    // 0x1ec89c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ec89cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ec8a0:
    // 0x1ec8a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ec8a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec8a4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ec8a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec8a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC8ACu;
            // 0x1ec8b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC89Cu: goto label_1ec89c;
            case 0x1EC8A0u: goto label_1ec8a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EC8B4u;
    // 0x1ec8b4: 0x0  nop
    ctx->pc = 0x1ec8b4u;
    // NOP
}
