#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192110
// Address: 0x192110 - 0x192208
void sub_00192110_0x192110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192110_0x192110");
#endif

    ctx->pc = 0x192110u;

    // 0x192110: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x192110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x192114: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x192114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x192118: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x192118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19211c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19211cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x192120: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x192120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x192124: 0xc090dc4  jal         func_243710
    ctx->pc = 0x192124u;
    SET_GPR_U32(ctx, 31, 0x19212Cu);
    ctx->pc = 0x192128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192124u;
            // 0x192128: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243710u;
    if (runtime->hasFunction(0x243710u)) {
        auto targetFn = runtime->lookupFunction(0x243710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19212Cu; }
        if (ctx->pc != 0x19212Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243710_0x243738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19212Cu; }
        if (ctx->pc != 0x19212Cu) { return; }
    }
    ctx->pc = 0x19212Cu;
    // 0x19212c: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x19212Cu;
    SET_GPR_U32(ctx, 31, 0x192134u);
    ctx->pc = 0x192130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19212Cu;
            // 0x192130: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192134u; }
        if (ctx->pc != 0x192134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192134u; }
        if (ctx->pc != 0x192134u) { return; }
    }
    ctx->pc = 0x192134u;
    // 0x192134: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x192134u;
    SET_GPR_U32(ctx, 31, 0x19213Cu);
    ctx->pc = 0x192138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192134u;
            // 0x192138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19213Cu; }
        if (ctx->pc != 0x19213Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19213Cu; }
        if (ctx->pc != 0x19213Cu) { return; }
    }
    ctx->pc = 0x19213Cu;
    // 0x19213c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19213cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192140: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x192140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x192144: 0x24a532f0  addiu       $a1, $a1, 0x32F0
    ctx->pc = 0x192144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13040));
    // 0x192148: 0xc060978  jal         func_1825E0
    ctx->pc = 0x192148u;
    SET_GPR_U32(ctx, 31, 0x192150u);
    ctx->pc = 0x19214Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192148u;
            // 0x19214c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192150u; }
        if (ctx->pc != 0x192150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192150u; }
        if (ctx->pc != 0x192150u) { return; }
    }
    ctx->pc = 0x192150u;
    // 0x192150: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x192150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x192154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192158: 0x24429f90  addiu       $v0, $v0, -0x6070
    ctx->pc = 0x192158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942608));
    // 0x19215c: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x19215Cu;
    SET_GPR_U32(ctx, 31, 0x192164u);
    ctx->pc = 0x192160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19215Cu;
            // 0x192160: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192164u; }
        if (ctx->pc != 0x192164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192164u; }
        if (ctx->pc != 0x192164u) { return; }
    }
    ctx->pc = 0x192164u;
    // 0x192164: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x192164u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x192168: 0x3c05d650  lui         $a1, 0xD650
    ctx->pc = 0x192168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54864 << 16));
    // 0x19216c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19216cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192170: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x192170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x192174: 0x2529c8e0  addiu       $t1, $t1, -0x3720
    ctx->pc = 0x192174u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294953184));
    // 0x192178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19217c: 0xae30c904  sw          $s0, -0x36FC($s1)
    ctx->pc = 0x19217cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953220), GPR_U32(ctx, 16));
    // 0x192180: 0x34a5acb2  ori         $a1, $a1, 0xACB2
    ctx->pc = 0x192180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44210);
    // 0x192184: 0xc06074a  jal         func_181D28
    ctx->pc = 0x192184u;
    SET_GPR_U32(ctx, 31, 0x19218Cu);
    ctx->pc = 0x192188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192184u;
            // 0x192188: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19218Cu; }
        if (ctx->pc != 0x19218Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19218Cu; }
        if (ctx->pc != 0x19218Cu) { return; }
    }
    ctx->pc = 0x19218Cu;
    // 0x19218c: 0x8e24c904  lw          $a0, -0x36FC($s1)
    ctx->pc = 0x19218cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953220)));
    // 0x192190: 0x3c05815f  lui         $a1, 0x815F
    ctx->pc = 0x192190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33119 << 16));
    // 0x192194: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x192194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192198: 0x27a7001b  addiu       $a3, $sp, 0x1B
    ctx->pc = 0x192198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 27));
    // 0x19219c: 0x34a5f05d  ori         $a1, $a1, 0xF05D
    ctx->pc = 0x19219cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61533);
    // 0x1921a0: 0xc06081c  jal         func_182070
    ctx->pc = 0x1921A0u;
    SET_GPR_U32(ctx, 31, 0x1921A8u);
    ctx->pc = 0x1921A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1921A0u;
            // 0x1921a4: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921A8u; }
        if (ctx->pc != 0x1921A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921A8u; }
        if (ctx->pc != 0x1921A8u) { return; }
    }
    ctx->pc = 0x1921A8u;
    // 0x1921a8: 0x8e24c904  lw          $a0, -0x36FC($s1)
    ctx->pc = 0x1921a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953220)));
    // 0x1921ac: 0x3c05f48a  lui         $a1, 0xF48A
    ctx->pc = 0x1921acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62602 << 16));
    // 0x1921b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1921b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1921b4: 0x27a70033  addiu       $a3, $sp, 0x33
    ctx->pc = 0x1921b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 51));
    // 0x1921b8: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x1921b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1921bc: 0xc06081c  jal         func_182070
    ctx->pc = 0x1921BCu;
    SET_GPR_U32(ctx, 31, 0x1921C4u);
    ctx->pc = 0x1921C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1921BCu;
            // 0x1921c0: 0x34a53e39  ori         $a1, $a1, 0x3E39 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15929);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921C4u; }
        if (ctx->pc != 0x1921C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921C4u; }
        if (ctx->pc != 0x1921C4u) { return; }
    }
    ctx->pc = 0x1921C4u;
    // 0x1921c4: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x1921C4u;
    SET_GPR_U32(ctx, 31, 0x1921CCu);
    ctx->pc = 0x1921C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1921C4u;
            // 0x1921c8: 0x8e24c904  lw          $a0, -0x36FC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921CCu; }
        if (ctx->pc != 0x1921CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921CCu; }
        if (ctx->pc != 0x1921CCu) { return; }
    }
    ctx->pc = 0x1921CCu;
    // 0x1921cc: 0x8e24c904  lw          $a0, -0x36FC($s1)
    ctx->pc = 0x1921ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953220)));
    // 0x1921d0: 0x3c05776f  lui         $a1, 0x776F
    ctx->pc = 0x1921d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30575 << 16));
    // 0x1921d4: 0x34a52158  ori         $a1, $a1, 0x2158
    ctx->pc = 0x1921d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8536);
    // 0x1921d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1921d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1921dc: 0xc060706  jal         func_181C18
    ctx->pc = 0x1921DCu;
    SET_GPR_U32(ctx, 31, 0x1921E4u);
    ctx->pc = 0x1921E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1921DCu;
            // 0x1921e0: 0x27a7001a  addiu       $a3, $sp, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C18u;
    if (runtime->hasFunction(0x181C18u)) {
        auto targetFn = runtime->lookupFunction(0x181C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921E4u; }
        if (ctx->pc != 0x1921E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181C18_0x181c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921E4u; }
        if (ctx->pc != 0x1921E4u) { return; }
    }
    ctx->pc = 0x1921E4u;
    // 0x1921e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1921e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1921e8: 0xc090dac  jal         func_2436B0
    ctx->pc = 0x1921E8u;
    SET_GPR_U32(ctx, 31, 0x1921F0u);
    ctx->pc = 0x1921ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1921E8u;
            // 0x1921ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2436B0u;
    if (runtime->hasFunction(0x2436B0u)) {
        auto targetFn = runtime->lookupFunction(0x2436B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921F0u; }
        if (ctx->pc != 0x1921F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002436B0_0x2436b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921F0u; }
        if (ctx->pc != 0x1921F0u) { return; }
    }
    ctx->pc = 0x1921F0u;
    // 0x1921f0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1921f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1921f4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1921f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1921f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1921f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1921fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1921FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1921FCu;
            // 0x192200: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192204u;
    // 0x192204: 0x0  nop
    ctx->pc = 0x192204u;
    // NOP
}
