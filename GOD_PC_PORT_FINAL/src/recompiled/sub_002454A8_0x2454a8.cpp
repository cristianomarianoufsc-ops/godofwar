#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002454A8
// Address: 0x2454a8 - 0x245540
void sub_002454A8_0x2454a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002454A8_0x2454a8");
#endif

    ctx->pc = 0x2454a8u;

    // 0x2454a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2454a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2454ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2454acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2454b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2454b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2454b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2454b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2454b8: 0xc096408  jal         func_259020
    ctx->pc = 0x2454B8u;
    SET_GPR_U32(ctx, 31, 0x2454C0u);
    ctx->pc = 0x2454BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2454B8u;
            // 0x2454bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259020u;
    if (runtime->hasFunction(0x259020u)) {
        auto targetFn = runtime->lookupFunction(0x259020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2454C0u; }
        if (ctx->pc != 0x2454C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259020_0x259038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2454C0u; }
        if (ctx->pc != 0x2454C0u) { return; }
    }
    ctx->pc = 0x2454C0u;
    // 0x2454c0: 0x26110050  addiu       $s1, $s0, 0x50
    ctx->pc = 0x2454c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2454c4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2454c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2454c8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2454c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2454cc: 0x244286d8  addiu       $v0, $v0, -0x7928
    ctx->pc = 0x2454ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936280));
    // 0x2454d0: 0xc07737e  jal         func_1DCDF8
    ctx->pc = 0x2454D0u;
    SET_GPR_U32(ctx, 31, 0x2454D8u);
    ctx->pc = 0x2454D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2454D0u;
            // 0x2454d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCDF8u;
    if (runtime->hasFunction(0x1DCDF8u)) {
        auto targetFn = runtime->lookupFunction(0x1DCDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2454D8u; }
        if (ctx->pc != 0x2454D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dcdf8_0x1dce40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2454D8u; }
        if (ctx->pc != 0x2454D8u) { return; }
    }
    ctx->pc = 0x2454D8u;
    // 0x2454d8: 0xc096402  jal         func_259008
    ctx->pc = 0x2454D8u;
    SET_GPR_U32(ctx, 31, 0x2454E0u);
    ctx->pc = 0x2454DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2454D8u;
            // 0x2454dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2454E0u; }
        if (ctx->pc != 0x2454E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2454E0u; }
        if (ctx->pc != 0x2454E0u) { return; }
    }
    ctx->pc = 0x2454E0u;
    // 0x2454e0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2454e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2454e4: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x2454e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x2454e8: 0x24421ce8  addiu       $v0, $v0, 0x1CE8
    ctx->pc = 0x2454e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7400));
    // 0x2454ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2454ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2454f0: 0xc096cf0  jal         func_25B3C0
    ctx->pc = 0x2454F0u;
    SET_GPR_U32(ctx, 31, 0x2454F8u);
    ctx->pc = 0x2454F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2454F0u;
            // 0x2454f4: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25B3C0u;
    if (runtime->hasFunction(0x25B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x25B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2454F8u; }
        if (ctx->pc != 0x2454F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025B3C0_0x25b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2454F8u; }
        if (ctx->pc != 0x2454F8u) { return; }
    }
    ctx->pc = 0x2454F8u;
    // 0x2454f8: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x2454f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x2454fc: 0xc096d02  jal         func_25B408
    ctx->pc = 0x2454FCu;
    SET_GPR_U32(ctx, 31, 0x245504u);
    ctx->pc = 0x245500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2454FCu;
            // 0x245500: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25B408u;
    if (runtime->hasFunction(0x25B408u)) {
        auto targetFn = runtime->lookupFunction(0x25B408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245504u; }
        if (ctx->pc != 0x245504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025B408_0x25b408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245504u; }
        if (ctx->pc != 0x245504u) { return; }
    }
    ctx->pc = 0x245504u;
    // 0x245504: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x245504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x245508: 0xc096d14  jal         func_25B450
    ctx->pc = 0x245508u;
    SET_GPR_U32(ctx, 31, 0x245510u);
    ctx->pc = 0x24550Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245508u;
            // 0x24550c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25B450u;
    if (runtime->hasFunction(0x25B450u)) {
        auto targetFn = runtime->lookupFunction(0x25B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245510u; }
        if (ctx->pc != 0x245510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025B450_0x25b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245510u; }
        if (ctx->pc != 0x245510u) { return; }
    }
    ctx->pc = 0x245510u;
    // 0x245510: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x245510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x245514: 0xc096d26  jal         func_25B498
    ctx->pc = 0x245514u;
    SET_GPR_U32(ctx, 31, 0x24551Cu);
    ctx->pc = 0x245518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245514u;
            // 0x245518: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25B498u;
    if (runtime->hasFunction(0x25B498u)) {
        auto targetFn = runtime->lookupFunction(0x25B498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24551Cu; }
        if (ctx->pc != 0x24551Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025B498_0x25b498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24551Cu; }
        if (ctx->pc != 0x24551Cu) { return; }
    }
    ctx->pc = 0x24551Cu;
    // 0x24551c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24551cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245520: 0xc096d38  jal         func_25B4E0
    ctx->pc = 0x245520u;
    SET_GPR_U32(ctx, 31, 0x245528u);
    ctx->pc = 0x245524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245520u;
            // 0x245524: 0x26040074  addiu       $a0, $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25B4E0u;
    if (runtime->hasFunction(0x25B4E0u)) {
        auto targetFn = runtime->lookupFunction(0x25B4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245528u; }
        if (ctx->pc != 0x245528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025B4E0_0x25b4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245528u; }
        if (ctx->pc != 0x245528u) { return; }
    }
    ctx->pc = 0x245528u;
    // 0x245528: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x245528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24552c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24552cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245530: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x245530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245538: 0x3e00008  jr          $ra
    ctx->pc = 0x245538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24553Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245538u;
            // 0x24553c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x245540u;
}
