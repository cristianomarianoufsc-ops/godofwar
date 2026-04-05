#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002157D0
// Address: 0x2157d0 - 0x215be8
void sub_002157D0_0x2157d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002157D0_0x2157d0");
#endif

    ctx->pc = 0x2157d0u;

    // 0x2157d0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2157d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2157d4: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x2157d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x2157d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2157d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157dc: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x2157dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x2157e0: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x2157e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x2157e4: 0xc09109c  jal         func_244270
    ctx->pc = 0x2157E4u;
    SET_GPR_U32(ctx, 31, 0x2157ECu);
    ctx->pc = 0x2157E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2157E4u;
            // 0x2157e8: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244270u;
    if (runtime->hasFunction(0x244270u)) {
        auto targetFn = runtime->lookupFunction(0x244270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2157ECu; }
        if (ctx->pc != 0x2157ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_244270_0x244298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2157ECu; }
        if (ctx->pc != 0x2157ECu) { return; }
    }
    ctx->pc = 0x2157ECu;
    // 0x2157ec: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2157ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2157f0: 0xc04f856  jal         func_13E158
    ctx->pc = 0x2157F0u;
    SET_GPR_U32(ctx, 31, 0x2157F8u);
    ctx->pc = 0x2157F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2157F0u;
            // 0x2157f4: 0x8c44ec4c  lw          $a0, -0x13B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2157F8u; }
        if (ctx->pc != 0x2157F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2157F8u; }
        if (ctx->pc != 0x2157F8u) { return; }
    }
    ctx->pc = 0x2157F8u;
    // 0x2157f8: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x2157F8u;
    SET_GPR_U32(ctx, 31, 0x215800u);
    ctx->pc = 0x2157FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2157F8u;
            // 0x2157fc: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215800u; }
        if (ctx->pc != 0x215800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215800u; }
        if (ctx->pc != 0x215800u) { return; }
    }
    ctx->pc = 0x215800u;
    // 0x215800: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x215800u;
    SET_GPR_U32(ctx, 31, 0x215808u);
    ctx->pc = 0x215804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215800u;
            // 0x215804: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215808u; }
        if (ctx->pc != 0x215808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215808u; }
        if (ctx->pc != 0x215808u) { return; }
    }
    ctx->pc = 0x215808u;
    // 0x215808: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x215808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21580c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21580cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x215810: 0x24a57e00  addiu       $a1, $a1, 0x7E00
    ctx->pc = 0x215810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32256));
    // 0x215814: 0xc060978  jal         func_1825E0
    ctx->pc = 0x215814u;
    SET_GPR_U32(ctx, 31, 0x21581Cu);
    ctx->pc = 0x215818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215814u;
            // 0x215818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21581Cu; }
        if (ctx->pc != 0x21581Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21581Cu; }
        if (ctx->pc != 0x21581Cu) { return; }
    }
    ctx->pc = 0x21581Cu;
    // 0x21581c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x21581cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x215820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215824: 0x244295a8  addiu       $v0, $v0, -0x6A58
    ctx->pc = 0x215824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940072));
    // 0x215828: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x215828u;
    SET_GPR_U32(ctx, 31, 0x215830u);
    ctx->pc = 0x21582Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215828u;
            // 0x21582c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215830u; }
        if (ctx->pc != 0x215830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215830u; }
        if (ctx->pc != 0x215830u) { return; }
    }
    ctx->pc = 0x215830u;
    // 0x215830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215834: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x215834u;
    SET_GPR_U32(ctx, 31, 0x21583Cu);
    ctx->pc = 0x215838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215834u;
            // 0x215838: 0xae30e4b0  sw          $s0, -0x1B50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294960304), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21583Cu; }
        if (ctx->pc != 0x21583Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21583Cu; }
        if (ctx->pc != 0x21583Cu) { return; }
    }
    ctx->pc = 0x21583Cu;
    // 0x21583c: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x21583cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215840: 0x3c050a5f  lui         $a1, 0xA5F
    ctx->pc = 0x215840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2655 << 16));
    // 0x215844: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215848: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x215848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x21584c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21584cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215850: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x215850u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215854: 0xc06074a  jal         func_181D28
    ctx->pc = 0x215854u;
    SET_GPR_U32(ctx, 31, 0x21585Cu);
    ctx->pc = 0x215858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215854u;
            // 0x215858: 0x34a57d1a  ori         $a1, $a1, 0x7D1A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32026);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21585Cu; }
        if (ctx->pc != 0x21585Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21585Cu; }
        if (ctx->pc != 0x21585Cu) { return; }
    }
    ctx->pc = 0x21585Cu;
    // 0x21585c: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x21585Cu;
    SET_GPR_U32(ctx, 31, 0x215864u);
    ctx->pc = 0x215860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21585Cu;
            // 0x215860: 0x8e24e4b0  lw          $a0, -0x1B50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215864u; }
        if (ctx->pc != 0x215864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215864u; }
        if (ctx->pc != 0x215864u) { return; }
    }
    ctx->pc = 0x215864u;
    // 0x215864: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215868: 0x3c05b214  lui         $a1, 0xB214
    ctx->pc = 0x215868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45588 << 16));
    // 0x21586c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21586cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215870: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x215870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x215874: 0xc060570  jal         func_1815C0
    ctx->pc = 0x215874u;
    SET_GPR_U32(ctx, 31, 0x21587Cu);
    ctx->pc = 0x215878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215874u;
            // 0x215878: 0x34a53292  ori         $a1, $a1, 0x3292 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12946);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21587Cu; }
        if (ctx->pc != 0x21587Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21587Cu; }
        if (ctx->pc != 0x21587Cu) { return; }
    }
    ctx->pc = 0x21587Cu;
    // 0x21587c: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x21587cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215880: 0x3c05044e  lui         $a1, 0x44E
    ctx->pc = 0x215880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1102 << 16));
    // 0x215884: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215888: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x215888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21588c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x21588Cu;
    SET_GPR_U32(ctx, 31, 0x215894u);
    ctx->pc = 0x215890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21588Cu;
            // 0x215890: 0x34a5d4a7  ori         $a1, $a1, 0xD4A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54439);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215894u; }
        if (ctx->pc != 0x215894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215894u; }
        if (ctx->pc != 0x215894u) { return; }
    }
    ctx->pc = 0x215894u;
    // 0x215894: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215898: 0x3c05866f  lui         $a1, 0x866F
    ctx->pc = 0x215898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34415 << 16));
    // 0x21589c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21589cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158a0: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x2158a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2158a4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x2158A4u;
    SET_GPR_U32(ctx, 31, 0x2158ACu);
    ctx->pc = 0x2158A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2158A4u;
            // 0x2158a8: 0x34a500e0  ori         $a1, $a1, 0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)224);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158ACu; }
        if (ctx->pc != 0x2158ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158ACu; }
        if (ctx->pc != 0x2158ACu) { return; }
    }
    ctx->pc = 0x2158ACu;
    // 0x2158ac: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x2158acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x2158b0: 0x3c0566e9  lui         $a1, 0x66E9
    ctx->pc = 0x2158b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26345 << 16));
    // 0x2158b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2158b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158b8: 0x27a7001a  addiu       $a3, $sp, 0x1A
    ctx->pc = 0x2158b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 26));
    // 0x2158bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2158bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2158c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158c4: 0xc06074a  jal         func_181D28
    ctx->pc = 0x2158C4u;
    SET_GPR_U32(ctx, 31, 0x2158CCu);
    ctx->pc = 0x2158C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2158C4u;
            // 0x2158c8: 0x34a57a18  ori         $a1, $a1, 0x7A18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31256);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158CCu; }
        if (ctx->pc != 0x2158CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158CCu; }
        if (ctx->pc != 0x2158CCu) { return; }
    }
    ctx->pc = 0x2158CCu;
    // 0x2158cc: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x2158ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x2158d0: 0x3c0595b8  lui         $a1, 0x95B8
    ctx->pc = 0x2158d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38328 << 16));
    // 0x2158d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2158d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158d8: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x2158d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2158dc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x2158DCu;
    SET_GPR_U32(ctx, 31, 0x2158E4u);
    ctx->pc = 0x2158E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2158DCu;
            // 0x2158e0: 0x34a5bfb6  ori         $a1, $a1, 0xBFB6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49078);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158E4u; }
        if (ctx->pc != 0x2158E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158E4u; }
        if (ctx->pc != 0x2158E4u) { return; }
    }
    ctx->pc = 0x2158E4u;
    // 0x2158e4: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x2158E4u;
    SET_GPR_U32(ctx, 31, 0x2158ECu);
    ctx->pc = 0x2158E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2158E4u;
            // 0x2158e8: 0x8e24e4b0  lw          $a0, -0x1B50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158ECu; }
        if (ctx->pc != 0x2158ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158ECu; }
        if (ctx->pc != 0x2158ECu) { return; }
    }
    ctx->pc = 0x2158ECu;
    // 0x2158ec: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x2158ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x2158f0: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x2158f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x2158f4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2158f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158f8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2158f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2158fc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x2158FCu;
    SET_GPR_U32(ctx, 31, 0x215904u);
    ctx->pc = 0x215900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2158FCu;
            // 0x215900: 0x34a530c1  ori         $a1, $a1, 0x30C1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12481);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215904u; }
        if (ctx->pc != 0x215904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215904u; }
        if (ctx->pc != 0x215904u) { return; }
    }
    ctx->pc = 0x215904u;
    // 0x215904: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215908: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x215908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x21590c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21590cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215910: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x215910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x215914: 0xc060570  jal         func_1815C0
    ctx->pc = 0x215914u;
    SET_GPR_U32(ctx, 31, 0x21591Cu);
    ctx->pc = 0x215918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215914u;
            // 0x215918: 0x34a5eec2  ori         $a1, $a1, 0xEEC2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61122);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21591Cu; }
        if (ctx->pc != 0x21591Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21591Cu; }
        if (ctx->pc != 0x21591Cu) { return; }
    }
    ctx->pc = 0x21591Cu;
    // 0x21591c: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x21591cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215920: 0x3c05b6ba  lui         $a1, 0xB6BA
    ctx->pc = 0x215920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46778 << 16));
    // 0x215924: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215928: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x215928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x21592c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x21592Cu;
    SET_GPR_U32(ctx, 31, 0x215934u);
    ctx->pc = 0x215930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21592Cu;
            // 0x215930: 0x34a595a3  ori         $a1, $a1, 0x95A3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38307);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215934u; }
        if (ctx->pc != 0x215934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215934u; }
        if (ctx->pc != 0x215934u) { return; }
    }
    ctx->pc = 0x215934u;
    // 0x215934: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x215934u;
    SET_GPR_U32(ctx, 31, 0x21593Cu);
    ctx->pc = 0x215938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215934u;
            // 0x215938: 0x8e24e4b0  lw          $a0, -0x1B50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21593Cu; }
        if (ctx->pc != 0x21593Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21593Cu; }
        if (ctx->pc != 0x21593Cu) { return; }
    }
    ctx->pc = 0x21593Cu;
    // 0x21593c: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x21593cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215940: 0x3c05fe46  lui         $a1, 0xFE46
    ctx->pc = 0x215940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65094 << 16));
    // 0x215944: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215948: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x215948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x21594c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x21594Cu;
    SET_GPR_U32(ctx, 31, 0x215954u);
    ctx->pc = 0x215950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21594Cu;
            // 0x215950: 0x34a57fe6  ori         $a1, $a1, 0x7FE6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32742);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215954u; }
        if (ctx->pc != 0x215954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215954u; }
        if (ctx->pc != 0x215954u) { return; }
    }
    ctx->pc = 0x215954u;
    // 0x215954: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215958: 0x3c05b503  lui         $a1, 0xB503
    ctx->pc = 0x215958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46339 << 16));
    // 0x21595c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21595cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215960: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x215960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x215964: 0xc060570  jal         func_1815C0
    ctx->pc = 0x215964u;
    SET_GPR_U32(ctx, 31, 0x21596Cu);
    ctx->pc = 0x215968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215964u;
            // 0x215968: 0x34a5fbe4  ori         $a1, $a1, 0xFBE4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64484);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21596Cu; }
        if (ctx->pc != 0x21596Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21596Cu; }
        if (ctx->pc != 0x21596Cu) { return; }
    }
    ctx->pc = 0x21596Cu;
    // 0x21596c: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x21596Cu;
    SET_GPR_U32(ctx, 31, 0x215974u);
    ctx->pc = 0x215970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21596Cu;
            // 0x215970: 0x8e24e4b0  lw          $a0, -0x1B50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215974u; }
        if (ctx->pc != 0x215974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215974u; }
        if (ctx->pc != 0x215974u) { return; }
    }
    ctx->pc = 0x215974u;
    // 0x215974: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215978: 0x3c054ab3  lui         $a1, 0x4AB3
    ctx->pc = 0x215978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19123 << 16));
    // 0x21597c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21597cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215980: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x215980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x215984: 0x34a597dc  ori         $a1, $a1, 0x97DC
    ctx->pc = 0x215984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38876);
    // 0x215988: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x215988u;
    SET_GPR_U32(ctx, 31, 0x215990u);
    ctx->pc = 0x21598Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215988u;
            // 0x21598c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215990u; }
        if (ctx->pc != 0x215990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215990u; }
        if (ctx->pc != 0x215990u) { return; }
    }
    ctx->pc = 0x215990u;
    // 0x215990: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x215990u;
    SET_GPR_U32(ctx, 31, 0x215998u);
    ctx->pc = 0x215994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215990u;
            // 0x215994: 0x8e24e4b0  lw          $a0, -0x1B50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215998u; }
        if (ctx->pc != 0x215998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215998u; }
        if (ctx->pc != 0x215998u) { return; }
    }
    ctx->pc = 0x215998u;
    // 0x215998: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x21599c: 0x3c051403  lui         $a1, 0x1403
    ctx->pc = 0x21599cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5123 << 16));
    // 0x2159a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2159a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159a4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2159a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2159a8: 0x34a5c149  ori         $a1, $a1, 0xC149
    ctx->pc = 0x2159a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49481);
    // 0x2159ac: 0xc06081c  jal         func_182070
    ctx->pc = 0x2159ACu;
    SET_GPR_U32(ctx, 31, 0x2159B4u);
    ctx->pc = 0x2159B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2159ACu;
            // 0x2159b0: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159B4u; }
        if (ctx->pc != 0x2159B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159B4u; }
        if (ctx->pc != 0x2159B4u) { return; }
    }
    ctx->pc = 0x2159B4u;
    // 0x2159b4: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x2159b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x2159b8: 0x3c0581e9  lui         $a1, 0x81E9
    ctx->pc = 0x2159b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33257 << 16));
    // 0x2159bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2159bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159c0: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x2159c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2159c4: 0x34a5a672  ori         $a1, $a1, 0xA672
    ctx->pc = 0x2159c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42610);
    // 0x2159c8: 0xc06081c  jal         func_182070
    ctx->pc = 0x2159C8u;
    SET_GPR_U32(ctx, 31, 0x2159D0u);
    ctx->pc = 0x2159CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2159C8u;
            // 0x2159cc: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159D0u; }
        if (ctx->pc != 0x2159D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159D0u; }
        if (ctx->pc != 0x2159D0u) { return; }
    }
    ctx->pc = 0x2159D0u;
    // 0x2159d0: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x2159d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x2159d4: 0x3c054074  lui         $a1, 0x4074
    ctx->pc = 0x2159d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16500 << 16));
    // 0x2159d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2159d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159dc: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2159dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2159e0: 0x34a5ec40  ori         $a1, $a1, 0xEC40
    ctx->pc = 0x2159e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60480);
    // 0x2159e4: 0xc06081c  jal         func_182070
    ctx->pc = 0x2159E4u;
    SET_GPR_U32(ctx, 31, 0x2159ECu);
    ctx->pc = 0x2159E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2159E4u;
            // 0x2159e8: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159ECu; }
        if (ctx->pc != 0x2159ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159ECu; }
        if (ctx->pc != 0x2159ECu) { return; }
    }
    ctx->pc = 0x2159ECu;
    // 0x2159ec: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x2159ECu;
    SET_GPR_U32(ctx, 31, 0x2159F4u);
    ctx->pc = 0x2159F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2159ECu;
            // 0x2159f0: 0x8e24e4b0  lw          $a0, -0x1B50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159F4u; }
        if (ctx->pc != 0x2159F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159F4u; }
        if (ctx->pc != 0x2159F4u) { return; }
    }
    ctx->pc = 0x2159F4u;
    // 0x2159f4: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x2159f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x2159f8: 0x3c05aebc  lui         $a1, 0xAEBC
    ctx->pc = 0x2159f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44732 << 16));
    // 0x2159fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2159fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a00: 0x27a700d8  addiu       $a3, $sp, 0xD8
    ctx->pc = 0x215a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x215a04: 0x34a52dcb  ori         $a1, $a1, 0x2DCB
    ctx->pc = 0x215a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11723);
    // 0x215a08: 0xc06081c  jal         func_182070
    ctx->pc = 0x215A08u;
    SET_GPR_U32(ctx, 31, 0x215A10u);
    ctx->pc = 0x215A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215A08u;
            // 0x215a0c: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A10u; }
        if (ctx->pc != 0x215A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A10u; }
        if (ctx->pc != 0x215A10u) { return; }
    }
    ctx->pc = 0x215A10u;
    // 0x215a10: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215a14: 0x3c05a632  lui         $a1, 0xA632
    ctx->pc = 0x215a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42546 << 16));
    // 0x215a18: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a1c: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x215a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x215a20: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x215a20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x215a24: 0xc06081c  jal         func_182070
    ctx->pc = 0x215A24u;
    SET_GPR_U32(ctx, 31, 0x215A2Cu);
    ctx->pc = 0x215A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215A24u;
            // 0x215a28: 0x34a5e46a  ori         $a1, $a1, 0xE46A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58474);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A2Cu; }
        if (ctx->pc != 0x215A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A2Cu; }
        if (ctx->pc != 0x215A2Cu) { return; }
    }
    ctx->pc = 0x215A2Cu;
    // 0x215a2c: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215a30: 0x3c0563a4  lui         $a1, 0x63A4
    ctx->pc = 0x215a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25508 << 16));
    // 0x215a34: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a38: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x215a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x215a3c: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x215A3Cu;
    SET_GPR_U32(ctx, 31, 0x215A44u);
    ctx->pc = 0x215A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215A3Cu;
            // 0x215a40: 0x34a5ff52  ori         $a1, $a1, 0xFF52 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65362);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A44u; }
        if (ctx->pc != 0x215A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A44u; }
        if (ctx->pc != 0x215A44u) { return; }
    }
    ctx->pc = 0x215A44u;
    // 0x215a44: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215a48: 0x3c05a6e4  lui         $a1, 0xA6E4
    ctx->pc = 0x215a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42724 << 16));
    // 0x215a4c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a50: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x215a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x215a54: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x215a54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x215a58: 0xc06081c  jal         func_182070
    ctx->pc = 0x215A58u;
    SET_GPR_U32(ctx, 31, 0x215A60u);
    ctx->pc = 0x215A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215A58u;
            // 0x215a5c: 0x34a5cfe3  ori         $a1, $a1, 0xCFE3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53219);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A60u; }
        if (ctx->pc != 0x215A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A60u; }
        if (ctx->pc != 0x215A60u) { return; }
    }
    ctx->pc = 0x215A60u;
    // 0x215a60: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215a64: 0x3c059eae  lui         $a1, 0x9EAE
    ctx->pc = 0x215a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40622 << 16));
    // 0x215a68: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a6c: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x215a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x215a70: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x215A70u;
    SET_GPR_U32(ctx, 31, 0x215A78u);
    ctx->pc = 0x215A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215A70u;
            // 0x215a74: 0x34a5f556  ori         $a1, $a1, 0xF556 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62806);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A78u; }
        if (ctx->pc != 0x215A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A78u; }
        if (ctx->pc != 0x215A78u) { return; }
    }
    ctx->pc = 0x215A78u;
    // 0x215a78: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215a7c: 0x3c052a65  lui         $a1, 0x2A65
    ctx->pc = 0x215a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10853 << 16));
    // 0x215a80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a84: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x215a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x215a88: 0x34a57f23  ori         $a1, $a1, 0x7F23
    ctx->pc = 0x215a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32547);
    // 0x215a8c: 0xc06081c  jal         func_182070
    ctx->pc = 0x215A8Cu;
    SET_GPR_U32(ctx, 31, 0x215A94u);
    ctx->pc = 0x215A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215A8Cu;
            // 0x215a90: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A94u; }
        if (ctx->pc != 0x215A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A94u; }
        if (ctx->pc != 0x215A94u) { return; }
    }
    ctx->pc = 0x215A94u;
    // 0x215a94: 0x27b00108  addiu       $s0, $sp, 0x108
    ctx->pc = 0x215a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x215a98: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215a9c: 0x3c054ff6  lui         $a1, 0x4FF6
    ctx->pc = 0x215a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20470 << 16));
    // 0x215aa0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215aa4: 0x34a56d39  ori         $a1, $a1, 0x6D39
    ctx->pc = 0x215aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27961);
    // 0x215aa8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x215aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215aac: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x215AACu;
    SET_GPR_U32(ctx, 31, 0x215AB4u);
    ctx->pc = 0x215AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215AACu;
            // 0x215ab0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215AB4u; }
        if (ctx->pc != 0x215AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215AB4u; }
        if (ctx->pc != 0x215AB4u) { return; }
    }
    ctx->pc = 0x215AB4u;
    // 0x215ab4: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215ab8: 0x3c055529  lui         $a1, 0x5529
    ctx->pc = 0x215ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21801 << 16));
    // 0x215abc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ac0: 0x34a5319f  ori         $a1, $a1, 0x319F
    ctx->pc = 0x215ac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12703);
    // 0x215ac4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x215ac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ac8: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x215AC8u;
    SET_GPR_U32(ctx, 31, 0x215AD0u);
    ctx->pc = 0x215ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215AC8u;
            // 0x215acc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215AD0u; }
        if (ctx->pc != 0x215AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215AD0u; }
        if (ctx->pc != 0x215AD0u) { return; }
    }
    ctx->pc = 0x215AD0u;
    // 0x215ad0: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215ad4: 0x3c052288  lui         $a1, 0x2288
    ctx->pc = 0x215ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8840 << 16));
    // 0x215ad8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215adc: 0x34a582e3  ori         $a1, $a1, 0x82E3
    ctx->pc = 0x215adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33507);
    // 0x215ae0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x215ae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ae4: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x215AE4u;
    SET_GPR_U32(ctx, 31, 0x215AECu);
    ctx->pc = 0x215AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215AE4u;
            // 0x215ae8: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215AECu; }
        if (ctx->pc != 0x215AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215AECu; }
        if (ctx->pc != 0x215AECu) { return; }
    }
    ctx->pc = 0x215AECu;
    // 0x215aec: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215af0: 0x3c0594eb  lui         $a1, 0x94EB
    ctx->pc = 0x215af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38123 << 16));
    // 0x215af4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215af8: 0x27a7010c  addiu       $a3, $sp, 0x10C
    ctx->pc = 0x215af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x215afc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x215afcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x215b00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b04: 0xc06074a  jal         func_181D28
    ctx->pc = 0x215B04u;
    SET_GPR_U32(ctx, 31, 0x215B0Cu);
    ctx->pc = 0x215B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215B04u;
            // 0x215b08: 0x34a5960e  ori         $a1, $a1, 0x960E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38414);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B0Cu; }
        if (ctx->pc != 0x215B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B0Cu; }
        if (ctx->pc != 0x215B0Cu) { return; }
    }
    ctx->pc = 0x215B0Cu;
    // 0x215b0c: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x215B0Cu;
    SET_GPR_U32(ctx, 31, 0x215B14u);
    ctx->pc = 0x215B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215B0Cu;
            // 0x215b10: 0x8e24e4b0  lw          $a0, -0x1B50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B14u; }
        if (ctx->pc != 0x215B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B14u; }
        if (ctx->pc != 0x215B14u) { return; }
    }
    ctx->pc = 0x215B14u;
    // 0x215b14: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215b18: 0x3c05a4c8  lui         $a1, 0xA4C8
    ctx->pc = 0x215b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42184 << 16));
    // 0x215b1c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b20: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x215b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x215b24: 0xc060570  jal         func_1815C0
    ctx->pc = 0x215B24u;
    SET_GPR_U32(ctx, 31, 0x215B2Cu);
    ctx->pc = 0x215B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215B24u;
            // 0x215b28: 0x34a514e9  ori         $a1, $a1, 0x14E9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5353);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B2Cu; }
        if (ctx->pc != 0x215B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B2Cu; }
        if (ctx->pc != 0x215B2Cu) { return; }
    }
    ctx->pc = 0x215B2Cu;
    // 0x215b2c: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x215B2Cu;
    SET_GPR_U32(ctx, 31, 0x215B34u);
    ctx->pc = 0x215B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215B2Cu;
            // 0x215b30: 0x8e24e4b0  lw          $a0, -0x1B50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B34u; }
        if (ctx->pc != 0x215B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B34u; }
        if (ctx->pc != 0x215B34u) { return; }
    }
    ctx->pc = 0x215B34u;
    // 0x215b34: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215b38: 0x3c0525bb  lui         $a1, 0x25BB
    ctx->pc = 0x215b38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9659 << 16));
    // 0x215b3c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b40: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x215b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x215b44: 0xc060570  jal         func_1815C0
    ctx->pc = 0x215B44u;
    SET_GPR_U32(ctx, 31, 0x215B4Cu);
    ctx->pc = 0x215B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215B44u;
            // 0x215b48: 0x34a5317e  ori         $a1, $a1, 0x317E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12670);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B4Cu; }
        if (ctx->pc != 0x215B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B4Cu; }
        if (ctx->pc != 0x215B4Cu) { return; }
    }
    ctx->pc = 0x215B4Cu;
    // 0x215b4c: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215b50: 0x3c052b2d  lui         $a1, 0x2B2D
    ctx->pc = 0x215b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11053 << 16));
    // 0x215b54: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b58: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x215b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x215b5c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x215B5Cu;
    SET_GPR_U32(ctx, 31, 0x215B64u);
    ctx->pc = 0x215B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215B5Cu;
            // 0x215b60: 0x34a52457  ori         $a1, $a1, 0x2457 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9303);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B64u; }
        if (ctx->pc != 0x215B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B64u; }
        if (ctx->pc != 0x215B64u) { return; }
    }
    ctx->pc = 0x215B64u;
    // 0x215b64: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215b68: 0x3c05b4a0  lui         $a1, 0xB4A0
    ctx->pc = 0x215b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46240 << 16));
    // 0x215b6c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b70: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x215b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x215b74: 0xc060570  jal         func_1815C0
    ctx->pc = 0x215B74u;
    SET_GPR_U32(ctx, 31, 0x215B7Cu);
    ctx->pc = 0x215B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215B74u;
            // 0x215b78: 0x34a5531b  ori         $a1, $a1, 0x531B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21275);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B7Cu; }
        if (ctx->pc != 0x215B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B7Cu; }
        if (ctx->pc != 0x215B7Cu) { return; }
    }
    ctx->pc = 0x215B7Cu;
    // 0x215b7c: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215b80: 0x3c05b2a8  lui         $a1, 0xB2A8
    ctx->pc = 0x215b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45736 << 16));
    // 0x215b84: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b88: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x215b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x215b8c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x215B8Cu;
    SET_GPR_U32(ctx, 31, 0x215B94u);
    ctx->pc = 0x215B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215B8Cu;
            // 0x215b90: 0x34a5856f  ori         $a1, $a1, 0x856F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34159);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B94u; }
        if (ctx->pc != 0x215B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B94u; }
        if (ctx->pc != 0x215B94u) { return; }
    }
    ctx->pc = 0x215B94u;
    // 0x215b94: 0x8e24e4b0  lw          $a0, -0x1B50($s1)
    ctx->pc = 0x215b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960304)));
    // 0x215b98: 0x3c05ca68  lui         $a1, 0xCA68
    ctx->pc = 0x215b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51816 << 16));
    // 0x215b9c: 0x34a56863  ori         $a1, $a1, 0x6863
    ctx->pc = 0x215b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26723);
    // 0x215ba0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x215ba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ba4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ba8: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x215BA8u;
    SET_GPR_U32(ctx, 31, 0x215BB0u);
    ctx->pc = 0x215BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215BA8u;
            // 0x215bac: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215BB0u; }
        if (ctx->pc != 0x215BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215BB0u; }
        if (ctx->pc != 0x215BB0u) { return; }
    }
    ctx->pc = 0x215BB0u;
    // 0x215bb0: 0xc04f860  jal         func_13E180
    ctx->pc = 0x215BB0u;
    SET_GPR_U32(ctx, 31, 0x215BB8u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215BB8u; }
        if (ctx->pc != 0x215BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215BB8u; }
        if (ctx->pc != 0x215BB8u) { return; }
    }
    ctx->pc = 0x215BB8u;
    // 0x215bb8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x215bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x215bbc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x215bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215bc0: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x215bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x215bc4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x215BC4u;
    {
        const bool branch_taken_0x215bc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x215BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215BC4u;
            // 0x215bc8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215bc4) {
            ctx->pc = 0x215BD4u;
            goto label_215bd4;
        }
    }
    ctx->pc = 0x215BCCu;
    // 0x215bcc: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x215BCCu;
    SET_GPR_U32(ctx, 31, 0x215BD4u);
    ctx->pc = 0x215BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215BCCu;
            // 0x215bd0: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215BD4u; }
        if (ctx->pc != 0x215BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215BD4u; }
        if (ctx->pc != 0x215BD4u) { return; }
    }
    ctx->pc = 0x215BD4u;
label_215bd4:
    // 0x215bd4: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x215bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x215bd8: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x215bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x215bdc: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x215bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x215be0: 0x3e00008  jr          $ra
    ctx->pc = 0x215BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215BE0u;
            // 0x215be4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215BD4u: goto label_215bd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215BE8u;
}
