#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C2858
// Address: 0x1c2858 - 0x1c28b0
void sub_001C2858_0x1c2858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2858_0x1c2858");
#endif

    ctx->pc = 0x1c2858u;

    // 0x1c2858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c285c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c285cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c2860: 0x3c10002b  lui         $s0, 0x2B
    ctx->pc = 0x1c2860u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)43 << 16));
    // 0x1c2864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2868: 0x261062d8  addiu       $s0, $s0, 0x62D8
    ctx->pc = 0x1c2868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25304));
    // 0x1c286c: 0xc05f9ae  jal         func_17E6B8
    ctx->pc = 0x1C286Cu;
    SET_GPR_U32(ctx, 31, 0x1C2874u);
    ctx->pc = 0x1C2870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C286Cu;
            // 0x1c2870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6B8u;
    if (runtime->hasFunction(0x17E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2874u; }
        if (ctx->pc != 0x1C2874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6b8_0x17e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2874u; }
        if (ctx->pc != 0x1C2874u) { return; }
    }
    ctx->pc = 0x1C2874u;
    // 0x1c2874: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c2874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c2878: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c2878u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c287c: 0x24a562e8  addiu       $a1, $a1, 0x62E8
    ctx->pc = 0x1c287cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25320));
    // 0x1c2880: 0x24c6cd28  addiu       $a2, $a2, -0x32D8
    ctx->pc = 0x1c2880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954280));
    // 0x1c2884: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C2884u;
    SET_GPR_U32(ctx, 31, 0x1C288Cu);
    ctx->pc = 0x1C2888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2884u;
            // 0x1c2888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C288Cu; }
        if (ctx->pc != 0x1C288Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C288Cu; }
        if (ctx->pc != 0x1C288Cu) { return; }
    }
    ctx->pc = 0x1C288Cu;
    // 0x1c288c: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1C288Cu;
    SET_GPR_U32(ctx, 31, 0x1C2894u);
    ctx->pc = 0x1C2890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C288Cu;
            // 0x1c2890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2894u; }
        if (ctx->pc != 0x1C2894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2894u; }
        if (ctx->pc != 0x1C2894u) { return; }
    }
    ctx->pc = 0x1C2894u;
    // 0x1c2894: 0xc07d212  jal         func_1F4848
    ctx->pc = 0x1C2894u;
    SET_GPR_U32(ctx, 31, 0x1C289Cu);
    ctx->pc = 0x1C2898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2894u;
            // 0x1c2898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4848u;
    if (runtime->hasFunction(0x1F4848u)) {
        auto targetFn = runtime->lookupFunction(0x1F4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C289Cu; }
        if (ctx->pc != 0x1C289Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4848_0x1f4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C289Cu; }
        if (ctx->pc != 0x1C289Cu) { return; }
    }
    ctx->pc = 0x1C289Cu;
    // 0x1c289c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c289cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c28a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c28a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c28a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C28A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C28A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C28A4u;
            // 0x1c28a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C28ACu;
    // 0x1c28ac: 0x0  nop
    ctx->pc = 0x1c28acu;
    // NOP
}
