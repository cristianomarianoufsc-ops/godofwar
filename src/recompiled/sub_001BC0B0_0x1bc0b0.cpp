#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC0B0
// Address: 0x1bc0b0 - 0x1bc1b8
void sub_001BC0B0_0x1bc0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC0B0_0x1bc0b0");
#endif

    ctx->pc = 0x1bc0b0u;

    // 0x1bc0b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1bc0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1bc0b4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1bc0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1bc0b8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1bc0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bc0bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bc0bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc0c0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1bc0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1bc0c4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1bc0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1bc0c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bc0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc0cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1bc0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1bc0d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bc0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc0d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bc0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1bc0d8: 0xc06ec98  jal         func_1BB260
    ctx->pc = 0x1BC0D8u;
    SET_GPR_U32(ctx, 31, 0x1BC0E0u);
    ctx->pc = 0x1BC0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC0D8u;
            // 0x1bc0dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB260u;
    if (runtime->hasFunction(0x1BB260u)) {
        auto targetFn = runtime->lookupFunction(0x1BB260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0E0u; }
        if (ctx->pc != 0x1BC0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB260_0x1bb260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0E0u; }
        if (ctx->pc != 0x1BC0E0u) { return; }
    }
    ctx->pc = 0x1BC0E0u;
label_1bc0e0:
    // 0x1bc0e0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1bc0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bc0e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc0e8: 0x2051018  mult        $v0, $s0, $a1
    ctx->pc = 0x1bc0e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bc0ec: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1BC0ECu;
    SET_GPR_U32(ctx, 31, 0x1BC0F4u);
    ctx->pc = 0x1BC0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC0ECu;
            // 0x1bc0f0: 0x5d2821  addu        $a1, $v0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0F4u; }
        if (ctx->pc != 0x1BC0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0F4u; }
        if (ctx->pc != 0x1BC0F4u) { return; }
    }
    ctx->pc = 0x1BC0F4u;
    // 0x1bc0f4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1BC0F4u;
    {
        const bool branch_taken_0x1bc0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC0F4u;
            // 0x1bc0f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc0f4) {
            ctx->pc = 0x1BC190u;
            goto label_1bc190;
        }
    }
    ctx->pc = 0x1BC0FCu;
    // 0x1bc0fc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bc0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bc100: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bc100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc104: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x1bc104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x1bc108: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1bc108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1bc10c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bc10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bc110: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x1bc110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1bc114: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc118: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1bc118u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1bc11c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BC11Cu;
    {
        const bool branch_taken_0x1bc11c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC11Cu;
            // 0x1bc120: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc11c) {
            ctx->pc = 0x1BC164u;
            goto label_1bc164;
        }
    }
    ctx->pc = 0x1BC124u;
    // 0x1bc124: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc128: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1BC128u;
    SET_GPR_U32(ctx, 31, 0x1BC130u);
    ctx->pc = 0x1BC12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC128u;
            // 0x1bc12c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC130u; }
        if (ctx->pc != 0x1BC130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC130u; }
        if (ctx->pc != 0x1BC130u) { return; }
    }
    ctx->pc = 0x1BC130u;
    // 0x1bc130: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC130u;
    {
        const bool branch_taken_0x1bc130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc130) {
            ctx->pc = 0x1BC14Cu;
            goto label_1bc14c;
        }
    }
    ctx->pc = 0x1BC138u;
    // 0x1bc138: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bc138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bc13c: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1bc13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1bc140: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1bc140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1bc144: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC144u;
    {
        const bool branch_taken_0x1bc144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc144) {
            ctx->pc = 0x1BC148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC144u;
            // 0x1bc148: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC168u;
            goto label_1bc168;
        }
    }
    ctx->pc = 0x1BC14Cu;
label_1bc14c:
    // 0x1bc14c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC14Cu;
    {
        const bool branch_taken_0x1bc14c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC14Cu;
            // 0x1bc150: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc14c) {
            ctx->pc = 0x1BC164u;
            goto label_1bc164;
        }
    }
    ctx->pc = 0x1BC154u;
    // 0x1bc154: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1BC154u;
    SET_GPR_U32(ctx, 31, 0x1BC15Cu);
    ctx->pc = 0x1BC158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC154u;
            // 0x1bc158: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC15Cu; }
        if (ctx->pc != 0x1BC15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC15Cu; }
        if (ctx->pc != 0x1BC15Cu) { return; }
    }
    ctx->pc = 0x1BC15Cu;
    // 0x1bc15c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC15Cu;
    {
        const bool branch_taken_0x1bc15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc15c) {
            ctx->pc = 0x1BC168u;
            goto label_1bc168;
        }
    }
    ctx->pc = 0x1BC164u;
label_1bc164:
    // 0x1bc164: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1bc164u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc168:
    // 0x1bc168: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1BC168u;
    {
        const bool branch_taken_0x1bc168 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC168u;
            // 0x1bc16c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc168) {
            ctx->pc = 0x1BC1A0u;
            goto label_1bc1a0;
        }
    }
    ctx->pc = 0x1BC170u;
    // 0x1bc170: 0xc08735e  jal         func_21CD78
    ctx->pc = 0x1BC170u;
    SET_GPR_U32(ctx, 31, 0x1BC178u);
    ctx->pc = 0x21CD78u;
    if (runtime->hasFunction(0x21CD78u)) {
        auto targetFn = runtime->lookupFunction(0x21CD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC178u; }
        if (ctx->pc != 0x1BC178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CD78_0x21cd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC178u; }
        if (ctx->pc != 0x1BC178u) { return; }
    }
    ctx->pc = 0x1BC178u;
    // 0x1bc178: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1bc178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1bc17c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bc17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc180: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1BC180u;
    SET_GPR_U32(ctx, 31, 0x1BC188u);
    ctx->pc = 0x1BC184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC180u;
            // 0x1bc184: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC188u; }
        if (ctx->pc != 0x1BC188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC188u; }
        if (ctx->pc != 0x1BC188u) { return; }
    }
    ctx->pc = 0x1BC188u;
    // 0x1bc188: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC188u;
    {
        const bool branch_taken_0x1bc188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC188u;
            // 0x1bc18c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc188) {
            ctx->pc = 0x1BC1A0u;
            goto label_1bc1a0;
        }
    }
    ctx->pc = 0x1BC190u;
label_1bc190:
    // 0x1bc190: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1bc190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bc194: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1BC194u;
    {
        const bool branch_taken_0x1bc194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC194u;
            // 0x1bc198: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc194) {
            ctx->pc = 0x1BC0E0u;
            runtime->cooperativeGuestYield();
            goto label_1bc0e0;
        }
    }
    ctx->pc = 0x1BC19Cu;
    // 0x1bc19c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1bc19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1bc1a0:
    // 0x1bc1a0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1bc1a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bc1a4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1bc1a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bc1a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1bc1a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bc1ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bc1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC1B0u;
            // 0x1bc1b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC0E0u: goto label_1bc0e0;
            case 0x1BC14Cu: goto label_1bc14c;
            case 0x1BC164u: goto label_1bc164;
            case 0x1BC168u: goto label_1bc168;
            case 0x1BC190u: goto label_1bc190;
            case 0x1BC1A0u: goto label_1bc1a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BC1B8u;
}
