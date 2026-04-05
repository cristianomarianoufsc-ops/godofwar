#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00222118
// Address: 0x222118 - 0x2225c0
void sub_00222118_0x222118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222118_0x222118");
#endif

    ctx->pc = 0x222118u;

    // 0x222118: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x222118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x22211c: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x22211cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x222120: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x222120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x222124: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x222124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x222128: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x222128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x22212c: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x22212cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x222130: 0xc04f856  jal         func_13E158
    ctx->pc = 0x222130u;
    SET_GPR_U32(ctx, 31, 0x222138u);
    ctx->pc = 0x222134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222130u;
            // 0x222134: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222138u; }
        if (ctx->pc != 0x222138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222138u; }
        if (ctx->pc != 0x222138u) { return; }
    }
    ctx->pc = 0x222138u;
    // 0x222138: 0xc090f10  jal         func_243C40
    ctx->pc = 0x222138u;
    SET_GPR_U32(ctx, 31, 0x222140u);
    ctx->pc = 0x22213Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222138u;
            // 0x22213c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243C40u;
    if (runtime->hasFunction(0x243C40u)) {
        auto targetFn = runtime->lookupFunction(0x243C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222140u; }
        if (ctx->pc != 0x222140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243C40_0x243c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222140u; }
        if (ctx->pc != 0x222140u) { return; }
    }
    ctx->pc = 0x222140u;
    // 0x222140: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x222140u;
    SET_GPR_U32(ctx, 31, 0x222148u);
    ctx->pc = 0x222144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222140u;
            // 0x222144: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222148u; }
        if (ctx->pc != 0x222148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222148u; }
        if (ctx->pc != 0x222148u) { return; }
    }
    ctx->pc = 0x222148u;
    // 0x222148: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x222148u;
    SET_GPR_U32(ctx, 31, 0x222150u);
    ctx->pc = 0x22214Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222148u;
            // 0x22214c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222150u; }
        if (ctx->pc != 0x222150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222150u; }
        if (ctx->pc != 0x222150u) { return; }
    }
    ctx->pc = 0x222150u;
    // 0x222150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x222150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222154: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x222154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x222158: 0x24a58050  addiu       $a1, $a1, -0x7FB0
    ctx->pc = 0x222158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934608));
    // 0x22215c: 0xc060978  jal         func_1825E0
    ctx->pc = 0x22215Cu;
    SET_GPR_U32(ctx, 31, 0x222164u);
    ctx->pc = 0x222160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22215Cu;
            // 0x222160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222164u; }
        if (ctx->pc != 0x222164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222164u; }
        if (ctx->pc != 0x222164u) { return; }
    }
    ctx->pc = 0x222164u;
    // 0x222164: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x222164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x222168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22216c: 0x24429a30  addiu       $v0, $v0, -0x65D0
    ctx->pc = 0x22216cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941232));
    // 0x222170: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x222170u;
    SET_GPR_U32(ctx, 31, 0x222178u);
    ctx->pc = 0x222174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222170u;
            // 0x222174: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222178u; }
        if (ctx->pc != 0x222178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222178u; }
        if (ctx->pc != 0x222178u) { return; }
    }
    ctx->pc = 0x222178u;
    // 0x222178: 0x3c05117c  lui         $a1, 0x117C
    ctx->pc = 0x222178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4476 << 16));
    // 0x22217c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22217cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222180: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x222180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x222184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222188: 0x34a5872e  ori         $a1, $a1, 0x872E
    ctx->pc = 0x222188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34606);
    // 0x22218c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x22218Cu;
    SET_GPR_U32(ctx, 31, 0x222194u);
    ctx->pc = 0x222190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22218Cu;
            // 0x222190: 0xae30118c  sw          $s0, 0x118C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4492), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222194u; }
        if (ctx->pc != 0x222194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222194u; }
        if (ctx->pc != 0x222194u) { return; }
    }
    ctx->pc = 0x222194u;
    // 0x222194: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x222198: 0x3c05126e  lui         $a1, 0x126E
    ctx->pc = 0x222198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4718 << 16));
    // 0x22219c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22219cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221a0: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2221a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2221a4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x2221A4u;
    SET_GPR_U32(ctx, 31, 0x2221ACu);
    ctx->pc = 0x2221A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2221A4u;
            // 0x2221a8: 0x34a5ecd1  ori         $a1, $a1, 0xECD1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60625);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2221ACu; }
        if (ctx->pc != 0x2221ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2221ACu; }
        if (ctx->pc != 0x2221ACu) { return; }
    }
    ctx->pc = 0x2221ACu;
    // 0x2221ac: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x2221acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2221b0: 0x3c0508cc  lui         $a1, 0x8CC
    ctx->pc = 0x2221b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2252 << 16));
    // 0x2221b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2221b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221b8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2221b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2221bc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x2221BCu;
    SET_GPR_U32(ctx, 31, 0x2221C4u);
    ctx->pc = 0x2221C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2221BCu;
            // 0x2221c0: 0x34a552b5  ori         $a1, $a1, 0x52B5 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21173);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2221C4u; }
        if (ctx->pc != 0x2221C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2221C4u; }
        if (ctx->pc != 0x2221C4u) { return; }
    }
    ctx->pc = 0x2221C4u;
    // 0x2221c4: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x2221c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2221c8: 0x3c0596c0  lui         $a1, 0x96C0
    ctx->pc = 0x2221c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38592 << 16));
    // 0x2221cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2221ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221d0: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x2221d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2221d4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x2221D4u;
    SET_GPR_U32(ctx, 31, 0x2221DCu);
    ctx->pc = 0x2221D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2221D4u;
            // 0x2221d8: 0x34a5539d  ori         $a1, $a1, 0x539D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21405);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2221DCu; }
        if (ctx->pc != 0x2221DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2221DCu; }
        if (ctx->pc != 0x2221DCu) { return; }
    }
    ctx->pc = 0x2221DCu;
    // 0x2221dc: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x2221dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2221e0: 0x3c059fdb  lui         $a1, 0x9FDB
    ctx->pc = 0x2221e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40923 << 16));
    // 0x2221e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2221e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221e8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2221e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2221ec: 0xc060570  jal         func_1815C0
    ctx->pc = 0x2221ECu;
    SET_GPR_U32(ctx, 31, 0x2221F4u);
    ctx->pc = 0x2221F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2221ECu;
            // 0x2221f0: 0x34a5479c  ori         $a1, $a1, 0x479C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18332);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2221F4u; }
        if (ctx->pc != 0x2221F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2221F4u; }
        if (ctx->pc != 0x2221F4u) { return; }
    }
    ctx->pc = 0x2221F4u;
    // 0x2221f4: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x2221f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2221f8: 0x3c05bb80  lui         $a1, 0xBB80
    ctx->pc = 0x2221f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48000 << 16));
    // 0x2221fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2221fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222200: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x222200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x222204: 0xc060570  jal         func_1815C0
    ctx->pc = 0x222204u;
    SET_GPR_U32(ctx, 31, 0x22220Cu);
    ctx->pc = 0x222208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222204u;
            // 0x222208: 0x34a5882e  ori         $a1, $a1, 0x882E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34862);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22220Cu; }
        if (ctx->pc != 0x22220Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22220Cu; }
        if (ctx->pc != 0x22220Cu) { return; }
    }
    ctx->pc = 0x22220Cu;
    // 0x22220c: 0x27b00034  addiu       $s0, $sp, 0x34
    ctx->pc = 0x22220cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x222210: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x222214: 0x3c0583b7  lui         $a1, 0x83B7
    ctx->pc = 0x222214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33719 << 16));
    // 0x222218: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22221c: 0x34a5589e  ori         $a1, $a1, 0x589E
    ctx->pc = 0x22221cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22686);
    // 0x222220: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x222220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222224: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x222224u;
    SET_GPR_U32(ctx, 31, 0x22222Cu);
    ctx->pc = 0x222228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222224u;
            // 0x222228: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22222Cu; }
        if (ctx->pc != 0x22222Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22222Cu; }
        if (ctx->pc != 0x22222Cu) { return; }
    }
    ctx->pc = 0x22222Cu;
    // 0x22222c: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x22222cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x222230: 0x3c057c3c  lui         $a1, 0x7C3C
    ctx->pc = 0x222230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31804 << 16));
    // 0x222234: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222238: 0x34a59275  ori         $a1, $a1, 0x9275
    ctx->pc = 0x222238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37493);
    // 0x22223c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22223cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222240: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x222240u;
    SET_GPR_U32(ctx, 31, 0x222248u);
    ctx->pc = 0x222244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222240u;
            // 0x222244: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222248u; }
        if (ctx->pc != 0x222248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222248u; }
        if (ctx->pc != 0x222248u) { return; }
    }
    ctx->pc = 0x222248u;
    // 0x222248: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x22224c: 0x3c053f23  lui         $a1, 0x3F23
    ctx->pc = 0x22224cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16163 << 16));
    // 0x222250: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222254: 0x34a5934f  ori         $a1, $a1, 0x934F
    ctx->pc = 0x222254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37711);
    // 0x222258: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x222258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22225c: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x22225Cu;
    SET_GPR_U32(ctx, 31, 0x222264u);
    ctx->pc = 0x222260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22225Cu;
            // 0x222260: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222264u; }
        if (ctx->pc != 0x222264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222264u; }
        if (ctx->pc != 0x222264u) { return; }
    }
    ctx->pc = 0x222264u;
    // 0x222264: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x222268: 0x3c055dfc  lui         $a1, 0x5DFC
    ctx->pc = 0x222268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24060 << 16));
    // 0x22226c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22226cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222270: 0x34a54510  ori         $a1, $a1, 0x4510
    ctx->pc = 0x222270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17680);
    // 0x222274: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x222274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222278: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x222278u;
    SET_GPR_U32(ctx, 31, 0x222280u);
    ctx->pc = 0x22227Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222278u;
            // 0x22227c: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222280u; }
        if (ctx->pc != 0x222280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222280u; }
        if (ctx->pc != 0x222280u) { return; }
    }
    ctx->pc = 0x222280u;
    // 0x222280: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x222284: 0x3c05f676  lui         $a1, 0xF676
    ctx->pc = 0x222284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63094 << 16));
    // 0x222288: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22228c: 0x34a5b63b  ori         $a1, $a1, 0xB63B
    ctx->pc = 0x22228cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46651);
    // 0x222290: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x222290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222294: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x222294u;
    SET_GPR_U32(ctx, 31, 0x22229Cu);
    ctx->pc = 0x222298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222294u;
            // 0x222298: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22229Cu; }
        if (ctx->pc != 0x22229Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22229Cu; }
        if (ctx->pc != 0x22229Cu) { return; }
    }
    ctx->pc = 0x22229Cu;
    // 0x22229c: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x22229cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2222a0: 0x3c058b52  lui         $a1, 0x8B52
    ctx->pc = 0x2222a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35666 << 16));
    // 0x2222a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2222a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222a8: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x2222a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2222ac: 0x34a57b23  ori         $a1, $a1, 0x7B23
    ctx->pc = 0x2222acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31523);
    // 0x2222b0: 0xc06081c  jal         func_182070
    ctx->pc = 0x2222B0u;
    SET_GPR_U32(ctx, 31, 0x2222B8u);
    ctx->pc = 0x2222B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2222B0u;
            // 0x2222b4: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2222B8u; }
        if (ctx->pc != 0x2222B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2222B8u; }
        if (ctx->pc != 0x2222B8u) { return; }
    }
    ctx->pc = 0x2222B8u;
    // 0x2222b8: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x2222b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2222bc: 0x3c053557  lui         $a1, 0x3557
    ctx->pc = 0x2222bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13655 << 16));
    // 0x2222c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2222c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222c4: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x2222c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2222c8: 0x34a522e5  ori         $a1, $a1, 0x22E5
    ctx->pc = 0x2222c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8933);
    // 0x2222cc: 0xc06081c  jal         func_182070
    ctx->pc = 0x2222CCu;
    SET_GPR_U32(ctx, 31, 0x2222D4u);
    ctx->pc = 0x2222D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2222CCu;
            // 0x2222d0: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2222D4u; }
        if (ctx->pc != 0x2222D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2222D4u; }
        if (ctx->pc != 0x2222D4u) { return; }
    }
    ctx->pc = 0x2222D4u;
    // 0x2222d4: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x2222d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2222d8: 0x3c05886c  lui         $a1, 0x886C
    ctx->pc = 0x2222d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34924 << 16));
    // 0x2222dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2222dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222e0: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x2222e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2222e4: 0x34a5a383  ori         $a1, $a1, 0xA383
    ctx->pc = 0x2222e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)41859);
    // 0x2222e8: 0xc06081c  jal         func_182070
    ctx->pc = 0x2222E8u;
    SET_GPR_U32(ctx, 31, 0x2222F0u);
    ctx->pc = 0x2222ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2222E8u;
            // 0x2222ec: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2222F0u; }
        if (ctx->pc != 0x2222F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2222F0u; }
        if (ctx->pc != 0x2222F0u) { return; }
    }
    ctx->pc = 0x2222F0u;
    // 0x2222f0: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x2222F0u;
    SET_GPR_U32(ctx, 31, 0x2222F8u);
    ctx->pc = 0x2222F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2222F0u;
            // 0x2222f4: 0x8e24118c  lw          $a0, 0x118C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2222F8u; }
        if (ctx->pc != 0x2222F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2222F8u; }
        if (ctx->pc != 0x2222F8u) { return; }
    }
    ctx->pc = 0x2222F8u;
    // 0x2222f8: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x2222f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2222fc: 0x3c055ea8  lui         $a1, 0x5EA8
    ctx->pc = 0x2222fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24232 << 16));
    // 0x222300: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222304: 0x27a7012c  addiu       $a3, $sp, 0x12C
    ctx->pc = 0x222304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x222308: 0x34a55bfe  ori         $a1, $a1, 0x5BFE
    ctx->pc = 0x222308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)23550);
    // 0x22230c: 0xc06081c  jal         func_182070
    ctx->pc = 0x22230Cu;
    SET_GPR_U32(ctx, 31, 0x222314u);
    ctx->pc = 0x222310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22230Cu;
            // 0x222310: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222314u; }
        if (ctx->pc != 0x222314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222314u; }
        if (ctx->pc != 0x222314u) { return; }
    }
    ctx->pc = 0x222314u;
    // 0x222314: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x222318: 0x3c050b40  lui         $a1, 0xB40
    ctx->pc = 0x222318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2880 << 16));
    // 0x22231c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22231cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222320: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x222320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222324: 0x34a54e79  ori         $a1, $a1, 0x4E79
    ctx->pc = 0x222324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20089);
    // 0x222328: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x222328u;
    SET_GPR_U32(ctx, 31, 0x222330u);
    ctx->pc = 0x22232Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222328u;
            // 0x22232c: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222330u; }
        if (ctx->pc != 0x222330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222330u; }
        if (ctx->pc != 0x222330u) { return; }
    }
    ctx->pc = 0x222330u;
    // 0x222330: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x222334: 0x3c058aa2  lui         $a1, 0x8AA2
    ctx->pc = 0x222334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35490 << 16));
    // 0x222338: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22233c: 0x27a70144  addiu       $a3, $sp, 0x144
    ctx->pc = 0x22233cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x222340: 0x34a58c7c  ori         $a1, $a1, 0x8C7C
    ctx->pc = 0x222340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35964);
    // 0x222344: 0xc06081c  jal         func_182070
    ctx->pc = 0x222344u;
    SET_GPR_U32(ctx, 31, 0x22234Cu);
    ctx->pc = 0x222348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222344u;
            // 0x222348: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22234Cu; }
        if (ctx->pc != 0x22234Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22234Cu; }
        if (ctx->pc != 0x22234Cu) { return; }
    }
    ctx->pc = 0x22234Cu;
    // 0x22234c: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x22234cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x222350: 0x3c0511f2  lui         $a1, 0x11F2
    ctx->pc = 0x222350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4594 << 16));
    // 0x222354: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222358: 0x27a70084  addiu       $a3, $sp, 0x84
    ctx->pc = 0x222358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x22235c: 0x34a58939  ori         $a1, $a1, 0x8939
    ctx->pc = 0x22235cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35129);
    // 0x222360: 0xc06081c  jal         func_182070
    ctx->pc = 0x222360u;
    SET_GPR_U32(ctx, 31, 0x222368u);
    ctx->pc = 0x222364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222360u;
            // 0x222364: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222368u; }
        if (ctx->pc != 0x222368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222368u; }
        if (ctx->pc != 0x222368u) { return; }
    }
    ctx->pc = 0x222368u;
    // 0x222368: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x22236c: 0x3c051793  lui         $a1, 0x1793
    ctx->pc = 0x22236cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6035 << 16));
    // 0x222370: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222374: 0x27a7009c  addiu       $a3, $sp, 0x9C
    ctx->pc = 0x222374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x222378: 0x34a55493  ori         $a1, $a1, 0x5493
    ctx->pc = 0x222378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21651);
    // 0x22237c: 0xc06081c  jal         func_182070
    ctx->pc = 0x22237Cu;
    SET_GPR_U32(ctx, 31, 0x222384u);
    ctx->pc = 0x222380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22237Cu;
            // 0x222380: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222384u; }
        if (ctx->pc != 0x222384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222384u; }
        if (ctx->pc != 0x222384u) { return; }
    }
    ctx->pc = 0x222384u;
    // 0x222384: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x222388: 0x3c051793  lui         $a1, 0x1793
    ctx->pc = 0x222388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6035 << 16));
    // 0x22238c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22238cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222390: 0x27a700b4  addiu       $a3, $sp, 0xB4
    ctx->pc = 0x222390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x222394: 0x34a55494  ori         $a1, $a1, 0x5494
    ctx->pc = 0x222394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21652);
    // 0x222398: 0xc06081c  jal         func_182070
    ctx->pc = 0x222398u;
    SET_GPR_U32(ctx, 31, 0x2223A0u);
    ctx->pc = 0x22239Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222398u;
            // 0x22239c: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223A0u; }
        if (ctx->pc != 0x2223A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223A0u; }
        if (ctx->pc != 0x2223A0u) { return; }
    }
    ctx->pc = 0x2223A0u;
    // 0x2223a0: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x2223a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2223a4: 0x3c051793  lui         $a1, 0x1793
    ctx->pc = 0x2223a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6035 << 16));
    // 0x2223a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2223a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2223ac: 0x27a700cc  addiu       $a3, $sp, 0xCC
    ctx->pc = 0x2223acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x2223b0: 0x34a55495  ori         $a1, $a1, 0x5495
    ctx->pc = 0x2223b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21653);
    // 0x2223b4: 0xc06081c  jal         func_182070
    ctx->pc = 0x2223B4u;
    SET_GPR_U32(ctx, 31, 0x2223BCu);
    ctx->pc = 0x2223B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2223B4u;
            // 0x2223b8: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223BCu; }
        if (ctx->pc != 0x2223BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223BCu; }
        if (ctx->pc != 0x2223BCu) { return; }
    }
    ctx->pc = 0x2223BCu;
    // 0x2223bc: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x2223bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2223c0: 0x3c051793  lui         $a1, 0x1793
    ctx->pc = 0x2223c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6035 << 16));
    // 0x2223c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2223c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2223c8: 0x27a700e4  addiu       $a3, $sp, 0xE4
    ctx->pc = 0x2223c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x2223cc: 0x34a55496  ori         $a1, $a1, 0x5496
    ctx->pc = 0x2223ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21654);
    // 0x2223d0: 0xc06081c  jal         func_182070
    ctx->pc = 0x2223D0u;
    SET_GPR_U32(ctx, 31, 0x2223D8u);
    ctx->pc = 0x2223D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2223D0u;
            // 0x2223d4: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223D8u; }
        if (ctx->pc != 0x2223D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223D8u; }
        if (ctx->pc != 0x2223D8u) { return; }
    }
    ctx->pc = 0x2223D8u;
    // 0x2223d8: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x2223d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2223dc: 0x3c051793  lui         $a1, 0x1793
    ctx->pc = 0x2223dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6035 << 16));
    // 0x2223e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2223e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2223e4: 0x27a700fc  addiu       $a3, $sp, 0xFC
    ctx->pc = 0x2223e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x2223e8: 0x34a55497  ori         $a1, $a1, 0x5497
    ctx->pc = 0x2223e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21655);
    // 0x2223ec: 0xc06081c  jal         func_182070
    ctx->pc = 0x2223ECu;
    SET_GPR_U32(ctx, 31, 0x2223F4u);
    ctx->pc = 0x2223F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2223ECu;
            // 0x2223f0: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223F4u; }
        if (ctx->pc != 0x2223F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223F4u; }
        if (ctx->pc != 0x2223F4u) { return; }
    }
    ctx->pc = 0x2223F4u;
    // 0x2223f4: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x2223f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2223f8: 0x3c051793  lui         $a1, 0x1793
    ctx->pc = 0x2223f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6035 << 16));
    // 0x2223fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2223fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222400: 0x27a70114  addiu       $a3, $sp, 0x114
    ctx->pc = 0x222400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x222404: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x222404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x222408: 0xc06081c  jal         func_182070
    ctx->pc = 0x222408u;
    SET_GPR_U32(ctx, 31, 0x222410u);
    ctx->pc = 0x22240Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222408u;
            // 0x22240c: 0x34a55498  ori         $a1, $a1, 0x5498 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21656);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222410u; }
        if (ctx->pc != 0x222410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222410u; }
        if (ctx->pc != 0x222410u) { return; }
    }
    ctx->pc = 0x222410u;
    // 0x222410: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x222414: 0x3c0533c3  lui         $a1, 0x33C3
    ctx->pc = 0x222414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13251 << 16));
    // 0x222418: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22241c: 0x27a7015c  addiu       $a3, $sp, 0x15C
    ctx->pc = 0x22241cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x222420: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x222420u;
    SET_GPR_U32(ctx, 31, 0x222428u);
    ctx->pc = 0x222424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222420u;
            // 0x222424: 0x34a537ed  ori         $a1, $a1, 0x37ED (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14317);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222428u; }
        if (ctx->pc != 0x222428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222428u; }
        if (ctx->pc != 0x222428u) { return; }
    }
    ctx->pc = 0x222428u;
    // 0x222428: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x22242c: 0x3c059f24  lui         $a1, 0x9F24
    ctx->pc = 0x22242cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40740 << 16));
    // 0x222430: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222434: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x222434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x222438: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x222438u;
    SET_GPR_U32(ctx, 31, 0x222440u);
    ctx->pc = 0x22243Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222438u;
            // 0x22243c: 0x34a50649  ori         $a1, $a1, 0x649 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1609);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222440u; }
        if (ctx->pc != 0x222440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222440u; }
        if (ctx->pc != 0x222440u) { return; }
    }
    ctx->pc = 0x222440u;
    // 0x222440: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x222444: 0x3c052a81  lui         $a1, 0x2A81
    ctx->pc = 0x222444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10881 << 16));
    // 0x222448: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22244c: 0x27a70164  addiu       $a3, $sp, 0x164
    ctx->pc = 0x22244cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    // 0x222450: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x222450u;
    SET_GPR_U32(ctx, 31, 0x222458u);
    ctx->pc = 0x222454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222450u;
            // 0x222454: 0x34a507dc  ori         $a1, $a1, 0x7DC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2012);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222458u; }
        if (ctx->pc != 0x222458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222458u; }
        if (ctx->pc != 0x222458u) { return; }
    }
    ctx->pc = 0x222458u;
    // 0x222458: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x22245c: 0x3c054de4  lui         $a1, 0x4DE4
    ctx->pc = 0x22245cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19940 << 16));
    // 0x222460: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222464: 0x27a70168  addiu       $a3, $sp, 0x168
    ctx->pc = 0x222464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x222468: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x222468u;
    SET_GPR_U32(ctx, 31, 0x222470u);
    ctx->pc = 0x22246Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222468u;
            // 0x22246c: 0x34a57328  ori         $a1, $a1, 0x7328 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29480);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222470u; }
        if (ctx->pc != 0x222470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222470u; }
        if (ctx->pc != 0x222470u) { return; }
    }
    ctx->pc = 0x222470u;
    // 0x222470: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x222474: 0x3c058ae8  lui         $a1, 0x8AE8
    ctx->pc = 0x222474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35560 << 16));
    // 0x222478: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22247c: 0x27a7016c  addiu       $a3, $sp, 0x16C
    ctx->pc = 0x22247cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x222480: 0xc060570  jal         func_1815C0
    ctx->pc = 0x222480u;
    SET_GPR_U32(ctx, 31, 0x222488u);
    ctx->pc = 0x222484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222480u;
            // 0x222484: 0x34a591cf  ori         $a1, $a1, 0x91CF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37327);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222488u; }
        if (ctx->pc != 0x222488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222488u; }
        if (ctx->pc != 0x222488u) { return; }
    }
    ctx->pc = 0x222488u;
    // 0x222488: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x222488u;
    SET_GPR_U32(ctx, 31, 0x222490u);
    ctx->pc = 0x22248Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222488u;
            // 0x22248c: 0x8e24118c  lw          $a0, 0x118C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222490u; }
        if (ctx->pc != 0x222490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222490u; }
        if (ctx->pc != 0x222490u) { return; }
    }
    ctx->pc = 0x222490u;
    // 0x222490: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x222494: 0x3c05bb0c  lui         $a1, 0xBB0C
    ctx->pc = 0x222494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47884 << 16));
    // 0x222498: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22249c: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x22249cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2224a0: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x2224A0u;
    SET_GPR_U32(ctx, 31, 0x2224A8u);
    ctx->pc = 0x2224A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2224A0u;
            // 0x2224a4: 0x34a5f5af  ori         $a1, $a1, 0xF5AF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62895);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2224A8u; }
        if (ctx->pc != 0x2224A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2224A8u; }
        if (ctx->pc != 0x2224A8u) { return; }
    }
    ctx->pc = 0x2224A8u;
    // 0x2224a8: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x2224a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2224ac: 0x3c05d68c  lui         $a1, 0xD68C
    ctx->pc = 0x2224acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54924 << 16));
    // 0x2224b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2224b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2224b4: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x2224b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2224b8: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x2224B8u;
    SET_GPR_U32(ctx, 31, 0x2224C0u);
    ctx->pc = 0x2224BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2224B8u;
            // 0x2224bc: 0x34a54314  ori         $a1, $a1, 0x4314 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17172);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2224C0u; }
        if (ctx->pc != 0x2224C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2224C0u; }
        if (ctx->pc != 0x2224C0u) { return; }
    }
    ctx->pc = 0x2224C0u;
    // 0x2224c0: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x2224C0u;
    SET_GPR_U32(ctx, 31, 0x2224C8u);
    ctx->pc = 0x2224C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2224C0u;
            // 0x2224c4: 0x8e24118c  lw          $a0, 0x118C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2224C8u; }
        if (ctx->pc != 0x2224C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2224C8u; }
        if (ctx->pc != 0x2224C8u) { return; }
    }
    ctx->pc = 0x2224C8u;
    // 0x2224c8: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x2224c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2224cc: 0x3c0501ce  lui         $a1, 0x1CE
    ctx->pc = 0x2224ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)462 << 16));
    // 0x2224d0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2224d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2224d4: 0x27a7003a  addiu       $a3, $sp, 0x3A
    ctx->pc = 0x2224d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 58));
    // 0x2224d8: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x2224D8u;
    SET_GPR_U32(ctx, 31, 0x2224E0u);
    ctx->pc = 0x2224DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2224D8u;
            // 0x2224dc: 0x34a55e0f  ori         $a1, $a1, 0x5E0F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24079);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2224E0u; }
        if (ctx->pc != 0x2224E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2224E0u; }
        if (ctx->pc != 0x2224E0u) { return; }
    }
    ctx->pc = 0x2224E0u;
    // 0x2224e0: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x2224e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2224e4: 0x3c0522bb  lui         $a1, 0x22BB
    ctx->pc = 0x2224e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8891 << 16));
    // 0x2224e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2224e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2224ec: 0x27a70186  addiu       $a3, $sp, 0x186
    ctx->pc = 0x2224ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 390));
    // 0x2224f0: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x2224F0u;
    SET_GPR_U32(ctx, 31, 0x2224F8u);
    ctx->pc = 0x2224F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2224F0u;
            // 0x2224f4: 0x34a537bb  ori         $a1, $a1, 0x37BB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14267);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2224F8u; }
        if (ctx->pc != 0x2224F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2224F8u; }
        if (ctx->pc != 0x2224F8u) { return; }
    }
    ctx->pc = 0x2224F8u;
    // 0x2224f8: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x2224f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2224fc: 0x3c0530cd  lui         $a1, 0x30CD
    ctx->pc = 0x2224fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12493 << 16));
    // 0x222500: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222504: 0x27a70174  addiu       $a3, $sp, 0x174
    ctx->pc = 0x222504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x222508: 0xc06052e  jal         func_1814B8
    ctx->pc = 0x222508u;
    SET_GPR_U32(ctx, 31, 0x222510u);
    ctx->pc = 0x22250Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222508u;
            // 0x22250c: 0x34a5d4b2  ori         $a1, $a1, 0xD4B2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54450);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B8u;
    if (runtime->hasFunction(0x1814B8u)) {
        auto targetFn = runtime->lookupFunction(0x1814B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222510u; }
        if (ctx->pc != 0x222510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814B8_0x1814b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222510u; }
        if (ctx->pc != 0x222510u) { return; }
    }
    ctx->pc = 0x222510u;
    // 0x222510: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x222514: 0x3c056685  lui         $a1, 0x6685
    ctx->pc = 0x222514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26245 << 16));
    // 0x222518: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22251c: 0x27a70172  addiu       $a3, $sp, 0x172
    ctx->pc = 0x22251cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 370));
    // 0x222520: 0xc06052e  jal         func_1814B8
    ctx->pc = 0x222520u;
    SET_GPR_U32(ctx, 31, 0x222528u);
    ctx->pc = 0x222524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222520u;
            // 0x222524: 0x34a547ff  ori         $a1, $a1, 0x47FF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18431);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B8u;
    if (runtime->hasFunction(0x1814B8u)) {
        auto targetFn = runtime->lookupFunction(0x1814B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222528u; }
        if (ctx->pc != 0x222528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814B8_0x1814b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222528u; }
        if (ctx->pc != 0x222528u) { return; }
    }
    ctx->pc = 0x222528u;
    // 0x222528: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x22252c: 0x3c053c01  lui         $a1, 0x3C01
    ctx->pc = 0x22252cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15361 << 16));
    // 0x222530: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222534: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x222534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x222538: 0xc06052e  jal         func_1814B8
    ctx->pc = 0x222538u;
    SET_GPR_U32(ctx, 31, 0x222540u);
    ctx->pc = 0x22253Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222538u;
            // 0x22253c: 0x34a5bf78  ori         $a1, $a1, 0xBF78 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49016);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B8u;
    if (runtime->hasFunction(0x1814B8u)) {
        auto targetFn = runtime->lookupFunction(0x1814B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222540u; }
        if (ctx->pc != 0x222540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814B8_0x1814b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222540u; }
        if (ctx->pc != 0x222540u) { return; }
    }
    ctx->pc = 0x222540u;
    // 0x222540: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x222544: 0x3c0590a7  lui         $a1, 0x90A7
    ctx->pc = 0x222544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37031 << 16));
    // 0x222548: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22254c: 0x27a7017a  addiu       $a3, $sp, 0x17A
    ctx->pc = 0x22254cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 378));
    // 0x222550: 0xc06052e  jal         func_1814B8
    ctx->pc = 0x222550u;
    SET_GPR_U32(ctx, 31, 0x222558u);
    ctx->pc = 0x222554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222550u;
            // 0x222554: 0x34a57a8f  ori         $a1, $a1, 0x7A8F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31375);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B8u;
    if (runtime->hasFunction(0x1814B8u)) {
        auto targetFn = runtime->lookupFunction(0x1814B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222558u; }
        if (ctx->pc != 0x222558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814B8_0x1814b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222558u; }
        if (ctx->pc != 0x222558u) { return; }
    }
    ctx->pc = 0x222558u;
    // 0x222558: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x22255c: 0x3c05daea  lui         $a1, 0xDAEA
    ctx->pc = 0x22255cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56042 << 16));
    // 0x222560: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x222560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222564: 0x27a70178  addiu       $a3, $sp, 0x178
    ctx->pc = 0x222564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x222568: 0xc06052e  jal         func_1814B8
    ctx->pc = 0x222568u;
    SET_GPR_U32(ctx, 31, 0x222570u);
    ctx->pc = 0x22256Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222568u;
            // 0x22256c: 0x34a58adc  ori         $a1, $a1, 0x8ADC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35548);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B8u;
    if (runtime->hasFunction(0x1814B8u)) {
        auto targetFn = runtime->lookupFunction(0x1814B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222570u; }
        if (ctx->pc != 0x222570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814B8_0x1814b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222570u; }
        if (ctx->pc != 0x222570u) { return; }
    }
    ctx->pc = 0x222570u;
    // 0x222570: 0x8e24118c  lw          $a0, 0x118C($s1)
    ctx->pc = 0x222570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x222574: 0x3c05c8fb  lui         $a1, 0xC8FB
    ctx->pc = 0x222574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51451 << 16));
    // 0x222578: 0x34a5081b  ori         $a1, $a1, 0x81B
    ctx->pc = 0x222578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2075);
    // 0x22257c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22257cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222580: 0xc06052e  jal         func_1814B8
    ctx->pc = 0x222580u;
    SET_GPR_U32(ctx, 31, 0x222588u);
    ctx->pc = 0x222584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222580u;
            // 0x222584: 0x27a70176  addiu       $a3, $sp, 0x176 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 374));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B8u;
    if (runtime->hasFunction(0x1814B8u)) {
        auto targetFn = runtime->lookupFunction(0x1814B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222588u; }
        if (ctx->pc != 0x222588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814B8_0x1814b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222588u; }
        if (ctx->pc != 0x222588u) { return; }
    }
    ctx->pc = 0x222588u;
    // 0x222588: 0xc04f860  jal         func_13E180
    ctx->pc = 0x222588u;
    SET_GPR_U32(ctx, 31, 0x222590u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222590u; }
        if (ctx->pc != 0x222590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222590u; }
        if (ctx->pc != 0x222590u) { return; }
    }
    ctx->pc = 0x222590u;
    // 0x222590: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x222590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x222594: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x222594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222598: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x222598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x22259c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22259Cu;
    {
        const bool branch_taken_0x22259c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2225A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22259Cu;
            // 0x2225a0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22259c) {
            ctx->pc = 0x2225ACu;
            goto label_2225ac;
        }
    }
    ctx->pc = 0x2225A4u;
    // 0x2225a4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2225A4u;
    SET_GPR_U32(ctx, 31, 0x2225ACu);
    ctx->pc = 0x2225A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2225A4u;
            // 0x2225a8: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2225ACu; }
        if (ctx->pc != 0x2225ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2225ACu; }
        if (ctx->pc != 0x2225ACu) { return; }
    }
    ctx->pc = 0x2225ACu;
label_2225ac:
    // 0x2225ac: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x2225acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2225b0: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x2225b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2225b4: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x2225b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2225b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2225B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2225BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2225B8u;
            // 0x2225bc: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2225ACu: goto label_2225ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2225C0u;
}
