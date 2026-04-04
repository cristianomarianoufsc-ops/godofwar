#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174768
// Address: 0x174768 - 0x174830
void sub_00174768_0x174768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174768_0x174768");
#endif

    ctx->pc = 0x174768u;

    // 0x174768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17476c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17476cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x174770: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x174770u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x174774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174778: 0xc05f9b8  jal         func_17E6E0
    ctx->pc = 0x174778u;
    SET_GPR_U32(ctx, 31, 0x174780u);
    ctx->pc = 0x17477Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174778u;
            // 0x17477c: 0x8e04c490  lw          $a0, -0x3B70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6E0u;
    if (runtime->hasFunction(0x17E6E0u)) {
        auto targetFn = runtime->lookupFunction(0x17E6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174780u; }
        if (ctx->pc != 0x174780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6e0_0x17e708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174780u; }
        if (ctx->pc != 0x174780u) { return; }
    }
    ctx->pc = 0x174780u;
    // 0x174780: 0xc05c9de  jal         func_172778
    ctx->pc = 0x174780u;
    SET_GPR_U32(ctx, 31, 0x174788u);
    ctx->pc = 0x174784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174780u;
            // 0x174784: 0x8e04c490  lw          $a0, -0x3B70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172778u;
    if (runtime->hasFunction(0x172778u)) {
        auto targetFn = runtime->lookupFunction(0x172778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174788u; }
        if (ctx->pc != 0x174788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172778_0x172778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174788u; }
        if (ctx->pc != 0x174788u) { return; }
    }
    ctx->pc = 0x174788u;
    // 0x174788: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x174788u;
    SET_GPR_U32(ctx, 31, 0x174790u);
    ctx->pc = 0x17478Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174788u;
            // 0x17478c: 0x8e04c490  lw          $a0, -0x3B70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174790u; }
        if (ctx->pc != 0x174790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174790u; }
        if (ctx->pc != 0x174790u) { return; }
    }
    ctx->pc = 0x174790u;
    // 0x174790: 0x8e04c490  lw          $a0, -0x3B70($s0)
    ctx->pc = 0x174790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952080)));
    // 0x174794: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x174794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x174798: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x174798u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x17479c: 0x24a52808  addiu       $a1, $a1, 0x2808
    ctx->pc = 0x17479cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10248));
    // 0x1747a0: 0xc05f76c  jal         func_17DDB0
    ctx->pc = 0x1747A0u;
    SET_GPR_U32(ctx, 31, 0x1747A8u);
    ctx->pc = 0x1747A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1747A0u;
            // 0x1747a4: 0x24c6c494  addiu       $a2, $a2, -0x3B6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952084));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DDB0u;
    if (runtime->hasFunction(0x17DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x17DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747A8u; }
        if (ctx->pc != 0x1747A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DDB0_0x17ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747A8u; }
        if (ctx->pc != 0x1747A8u) { return; }
    }
    ctx->pc = 0x1747A8u;
    // 0x1747a8: 0x8e04c490  lw          $a0, -0x3B70($s0)
    ctx->pc = 0x1747a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952080)));
    // 0x1747ac: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1747acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1747b0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1747b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1747b4: 0x24a52820  addiu       $a1, $a1, 0x2820
    ctx->pc = 0x1747b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10272));
    // 0x1747b8: 0xc05f76c  jal         func_17DDB0
    ctx->pc = 0x1747B8u;
    SET_GPR_U32(ctx, 31, 0x1747C0u);
    ctx->pc = 0x1747BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1747B8u;
            // 0x1747bc: 0x24c6c498  addiu       $a2, $a2, -0x3B68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DDB0u;
    if (runtime->hasFunction(0x17DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x17DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747C0u; }
        if (ctx->pc != 0x1747C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DDB0_0x17ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747C0u; }
        if (ctx->pc != 0x1747C0u) { return; }
    }
    ctx->pc = 0x1747C0u;
    // 0x1747c0: 0x8e04c490  lw          $a0, -0x3B70($s0)
    ctx->pc = 0x1747c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952080)));
    // 0x1747c4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1747c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1747c8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1747c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1747cc: 0x24a52838  addiu       $a1, $a1, 0x2838
    ctx->pc = 0x1747ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10296));
    // 0x1747d0: 0xc05f76c  jal         func_17DDB0
    ctx->pc = 0x1747D0u;
    SET_GPR_U32(ctx, 31, 0x1747D8u);
    ctx->pc = 0x1747D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1747D0u;
            // 0x1747d4: 0x24c6c49c  addiu       $a2, $a2, -0x3B64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952092));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DDB0u;
    if (runtime->hasFunction(0x17DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x17DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747D8u; }
        if (ctx->pc != 0x1747D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DDB0_0x17ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747D8u; }
        if (ctx->pc != 0x1747D8u) { return; }
    }
    ctx->pc = 0x1747D8u;
    // 0x1747d8: 0x8e04c490  lw          $a0, -0x3B70($s0)
    ctx->pc = 0x1747d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952080)));
    // 0x1747dc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1747dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1747e0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1747e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1747e4: 0x24a52858  addiu       $a1, $a1, 0x2858
    ctx->pc = 0x1747e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10328));
    // 0x1747e8: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1747E8u;
    SET_GPR_U32(ctx, 31, 0x1747F0u);
    ctx->pc = 0x1747ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1747E8u;
            // 0x1747ec: 0x24c6c4a0  addiu       $a2, $a2, -0x3B60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747F0u; }
        if (ctx->pc != 0x1747F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747F0u; }
        if (ctx->pc != 0x1747F0u) { return; }
    }
    ctx->pc = 0x1747F0u;
    // 0x1747f0: 0x8e04c490  lw          $a0, -0x3B70($s0)
    ctx->pc = 0x1747f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952080)));
    // 0x1747f4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1747f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1747f8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1747f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1747fc: 0x24a52870  addiu       $a1, $a1, 0x2870
    ctx->pc = 0x1747fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10352));
    // 0x174800: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x174800u;
    SET_GPR_U32(ctx, 31, 0x174808u);
    ctx->pc = 0x174804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174800u;
            // 0x174804: 0x24c6c4a4  addiu       $a2, $a2, -0x3B5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174808u; }
        if (ctx->pc != 0x174808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174808u; }
        if (ctx->pc != 0x174808u) { return; }
    }
    ctx->pc = 0x174808u;
    // 0x174808: 0x8e04c490  lw          $a0, -0x3B70($s0)
    ctx->pc = 0x174808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952080)));
    // 0x17480c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x17480cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x174810: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x174810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x174814: 0x24a52888  addiu       $a1, $a1, 0x2888
    ctx->pc = 0x174814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10376));
    // 0x174818: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x174818u;
    SET_GPR_U32(ctx, 31, 0x174820u);
    ctx->pc = 0x17481Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174818u;
            // 0x17481c: 0x24c6c4a8  addiu       $a2, $a2, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174820u; }
        if (ctx->pc != 0x174820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174820u; }
        if (ctx->pc != 0x174820u) { return; }
    }
    ctx->pc = 0x174820u;
    // 0x174820: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x174820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174828: 0x3e00008  jr          $ra
    ctx->pc = 0x174828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17482Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174828u;
            // 0x17482c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174830u;
}
