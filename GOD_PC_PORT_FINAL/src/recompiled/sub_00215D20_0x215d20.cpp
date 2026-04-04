#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00215D20
// Address: 0x215d20 - 0x215f68
void sub_00215D20_0x215d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215D20_0x215d20");
#endif

    ctx->pc = 0x215d20u;

    // 0x215d20: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x215d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x215d24: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x215d24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x215d28: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x215d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x215d2c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x215d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x215d30: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x215d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x215d34: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x215d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x215d38: 0xc04f856  jal         func_13E158
    ctx->pc = 0x215D38u;
    SET_GPR_U32(ctx, 31, 0x215D40u);
    ctx->pc = 0x215D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215D38u;
            // 0x215d3c: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215D40u; }
        if (ctx->pc != 0x215D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215D40u; }
        if (ctx->pc != 0x215D40u) { return; }
    }
    ctx->pc = 0x215D40u;
    // 0x215d40: 0xc091346  jal         func_244D18
    ctx->pc = 0x215D40u;
    SET_GPR_U32(ctx, 31, 0x215D48u);
    ctx->pc = 0x215D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215D40u;
            // 0x215d44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244D18u;
    if (runtime->hasFunction(0x244D18u)) {
        auto targetFn = runtime->lookupFunction(0x244D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215D48u; }
        if (ctx->pc != 0x215D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_244d18_0x244d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215D48u; }
        if (ctx->pc != 0x215D48u) { return; }
    }
    ctx->pc = 0x215D48u;
    // 0x215d48: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x215D48u;
    SET_GPR_U32(ctx, 31, 0x215D50u);
    ctx->pc = 0x215D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215D48u;
            // 0x215d4c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215D50u; }
        if (ctx->pc != 0x215D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215D50u; }
        if (ctx->pc != 0x215D50u) { return; }
    }
    ctx->pc = 0x215D50u;
    // 0x215d50: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x215D50u;
    SET_GPR_U32(ctx, 31, 0x215D58u);
    ctx->pc = 0x215D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215D50u;
            // 0x215d54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215D58u; }
        if (ctx->pc != 0x215D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215D58u; }
        if (ctx->pc != 0x215D58u) { return; }
    }
    ctx->pc = 0x215D58u;
    // 0x215d58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x215d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d5c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x215d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x215d60: 0x24a57e08  addiu       $a1, $a1, 0x7E08
    ctx->pc = 0x215d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32264));
    // 0x215d64: 0xc060978  jal         func_1825E0
    ctx->pc = 0x215D64u;
    SET_GPR_U32(ctx, 31, 0x215D6Cu);
    ctx->pc = 0x215D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215D64u;
            // 0x215d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215D6Cu; }
        if (ctx->pc != 0x215D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215D6Cu; }
        if (ctx->pc != 0x215D6Cu) { return; }
    }
    ctx->pc = 0x215D6Cu;
    // 0x215d6c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x215d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x215d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d74: 0x244289c0  addiu       $v0, $v0, -0x7640
    ctx->pc = 0x215d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937024));
    // 0x215d78: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x215D78u;
    SET_GPR_U32(ctx, 31, 0x215D80u);
    ctx->pc = 0x215D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215D78u;
            // 0x215d7c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215D80u; }
        if (ctx->pc != 0x215D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215D80u; }
        if (ctx->pc != 0x215D80u) { return; }
    }
    ctx->pc = 0x215D80u;
    // 0x215d80: 0x3c05a2ae  lui         $a1, 0xA2AE
    ctx->pc = 0x215d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41646 << 16));
    // 0x215d84: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d88: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x215d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x215d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d90: 0x34a5f061  ori         $a1, $a1, 0xF061
    ctx->pc = 0x215d90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61537);
    // 0x215d94: 0xc060570  jal         func_1815C0
    ctx->pc = 0x215D94u;
    SET_GPR_U32(ctx, 31, 0x215D9Cu);
    ctx->pc = 0x215D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215D94u;
            // 0x215d98: 0xae30e4b4  sw          $s0, -0x1B4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294960308), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215D9Cu; }
        if (ctx->pc != 0x215D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215D9Cu; }
        if (ctx->pc != 0x215D9Cu) { return; }
    }
    ctx->pc = 0x215D9Cu;
    // 0x215d9c: 0x8e24e4b4  lw          $a0, -0x1B4C($s1)
    ctx->pc = 0x215d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960308)));
    // 0x215da0: 0x3c0551fe  lui         $a1, 0x51FE
    ctx->pc = 0x215da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20990 << 16));
    // 0x215da4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215da8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x215da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x215dac: 0xc060570  jal         func_1815C0
    ctx->pc = 0x215DACu;
    SET_GPR_U32(ctx, 31, 0x215DB4u);
    ctx->pc = 0x215DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215DACu;
            // 0x215db0: 0x34a5e0b7  ori         $a1, $a1, 0xE0B7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57527);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215DB4u; }
        if (ctx->pc != 0x215DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215DB4u; }
        if (ctx->pc != 0x215DB4u) { return; }
    }
    ctx->pc = 0x215DB4u;
    // 0x215db4: 0x8e24e4b4  lw          $a0, -0x1B4C($s1)
    ctx->pc = 0x215db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960308)));
    // 0x215db8: 0x3c05ea64  lui         $a1, 0xEA64
    ctx->pc = 0x215db8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60004 << 16));
    // 0x215dbc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215dc0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x215dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x215dc4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x215DC4u;
    SET_GPR_U32(ctx, 31, 0x215DCCu);
    ctx->pc = 0x215DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215DC4u;
            // 0x215dc8: 0x34a5e72f  ori         $a1, $a1, 0xE72F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59183);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215DCCu; }
        if (ctx->pc != 0x215DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215DCCu; }
        if (ctx->pc != 0x215DCCu) { return; }
    }
    ctx->pc = 0x215DCCu;
    // 0x215dcc: 0x8e24e4b4  lw          $a0, -0x1B4C($s1)
    ctx->pc = 0x215dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960308)));
    // 0x215dd0: 0x3c05ad71  lui         $a1, 0xAD71
    ctx->pc = 0x215dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44401 << 16));
    // 0x215dd4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215dd8: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x215dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x215ddc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x215DDCu;
    SET_GPR_U32(ctx, 31, 0x215DE4u);
    ctx->pc = 0x215DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215DDCu;
            // 0x215de0: 0x34a57afb  ori         $a1, $a1, 0x7AFB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31483);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215DE4u; }
        if (ctx->pc != 0x215DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215DE4u; }
        if (ctx->pc != 0x215DE4u) { return; }
    }
    ctx->pc = 0x215DE4u;
    // 0x215de4: 0x8e24e4b4  lw          $a0, -0x1B4C($s1)
    ctx->pc = 0x215de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960308)));
    // 0x215de8: 0x3c05480e  lui         $a1, 0x480E
    ctx->pc = 0x215de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18446 << 16));
    // 0x215dec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215df0: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x215df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x215df4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x215DF4u;
    SET_GPR_U32(ctx, 31, 0x215DFCu);
    ctx->pc = 0x215DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215DF4u;
            // 0x215df8: 0x34a5b083  ori         $a1, $a1, 0xB083 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45187);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215DFCu; }
        if (ctx->pc != 0x215DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215DFCu; }
        if (ctx->pc != 0x215DFCu) { return; }
    }
    ctx->pc = 0x215DFCu;
    // 0x215dfc: 0x8e24e4b4  lw          $a0, -0x1B4C($s1)
    ctx->pc = 0x215dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960308)));
    // 0x215e00: 0x3c051f59  lui         $a1, 0x1F59
    ctx->pc = 0x215e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8025 << 16));
    // 0x215e04: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e08: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x215e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x215e0c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x215E0Cu;
    SET_GPR_U32(ctx, 31, 0x215E14u);
    ctx->pc = 0x215E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215E0Cu;
            // 0x215e10: 0x34a5f04a  ori         $a1, $a1, 0xF04A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61514);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E14u; }
        if (ctx->pc != 0x215E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E14u; }
        if (ctx->pc != 0x215E14u) { return; }
    }
    ctx->pc = 0x215E14u;
    // 0x215e14: 0x8e24e4b4  lw          $a0, -0x1B4C($s1)
    ctx->pc = 0x215e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960308)));
    // 0x215e18: 0x3c05893d  lui         $a1, 0x893D
    ctx->pc = 0x215e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35133 << 16));
    // 0x215e1c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e20: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x215e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x215e24: 0xc060570  jal         func_1815C0
    ctx->pc = 0x215E24u;
    SET_GPR_U32(ctx, 31, 0x215E2Cu);
    ctx->pc = 0x215E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215E24u;
            // 0x215e28: 0x34a54e1c  ori         $a1, $a1, 0x4E1C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19996);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E2Cu; }
        if (ctx->pc != 0x215E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E2Cu; }
        if (ctx->pc != 0x215E2Cu) { return; }
    }
    ctx->pc = 0x215E2Cu;
    // 0x215e2c: 0x8e24e4b4  lw          $a0, -0x1B4C($s1)
    ctx->pc = 0x215e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960308)));
    // 0x215e30: 0x3c05ec1e  lui         $a1, 0xEC1E
    ctx->pc = 0x215e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60446 << 16));
    // 0x215e34: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e38: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x215e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x215e3c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x215E3Cu;
    SET_GPR_U32(ctx, 31, 0x215E44u);
    ctx->pc = 0x215E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215E3Cu;
            // 0x215e40: 0x34a5f545  ori         $a1, $a1, 0xF545 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62789);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E44u; }
        if (ctx->pc != 0x215E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E44u; }
        if (ctx->pc != 0x215E44u) { return; }
    }
    ctx->pc = 0x215E44u;
    // 0x215e44: 0x8e24e4b4  lw          $a0, -0x1B4C($s1)
    ctx->pc = 0x215e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960308)));
    // 0x215e48: 0x3c05bb80  lui         $a1, 0xBB80
    ctx->pc = 0x215e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48000 << 16));
    // 0x215e4c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e50: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x215e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x215e54: 0xc060570  jal         func_1815C0
    ctx->pc = 0x215E54u;
    SET_GPR_U32(ctx, 31, 0x215E5Cu);
    ctx->pc = 0x215E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215E54u;
            // 0x215e58: 0x34a5882e  ori         $a1, $a1, 0x882E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34862);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E5Cu; }
        if (ctx->pc != 0x215E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E5Cu; }
        if (ctx->pc != 0x215E5Cu) { return; }
    }
    ctx->pc = 0x215E5Cu;
    // 0x215e5c: 0x8e24e4b4  lw          $a0, -0x1B4C($s1)
    ctx->pc = 0x215e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960308)));
    // 0x215e60: 0x3c059a64  lui         $a1, 0x9A64
    ctx->pc = 0x215e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39524 << 16));
    // 0x215e64: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e68: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x215e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x215e6c: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x215E6Cu;
    SET_GPR_U32(ctx, 31, 0x215E74u);
    ctx->pc = 0x215E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215E6Cu;
            // 0x215e70: 0x34a519f6  ori         $a1, $a1, 0x19F6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6646);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E74u; }
        if (ctx->pc != 0x215E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E74u; }
        if (ctx->pc != 0x215E74u) { return; }
    }
    ctx->pc = 0x215E74u;
    // 0x215e74: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x215E74u;
    SET_GPR_U32(ctx, 31, 0x215E7Cu);
    ctx->pc = 0x215E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215E74u;
            // 0x215e78: 0x8e24e4b4  lw          $a0, -0x1B4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960308)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E7Cu; }
        if (ctx->pc != 0x215E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E7Cu; }
        if (ctx->pc != 0x215E7Cu) { return; }
    }
    ctx->pc = 0x215E7Cu;
    // 0x215e7c: 0x8e24e4b4  lw          $a0, -0x1B4C($s1)
    ctx->pc = 0x215e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960308)));
    // 0x215e80: 0x3c05d97b  lui         $a1, 0xD97B
    ctx->pc = 0x215e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55675 << 16));
    // 0x215e84: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e88: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x215e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x215e8c: 0x34a5e500  ori         $a1, $a1, 0xE500
    ctx->pc = 0x215e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58624);
    // 0x215e90: 0xc06081c  jal         func_182070
    ctx->pc = 0x215E90u;
    SET_GPR_U32(ctx, 31, 0x215E98u);
    ctx->pc = 0x215E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215E90u;
            // 0x215e94: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E98u; }
        if (ctx->pc != 0x215E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E98u; }
        if (ctx->pc != 0x215E98u) { return; }
    }
    ctx->pc = 0x215E98u;
    // 0x215e98: 0x8e24e4b4  lw          $a0, -0x1B4C($s1)
    ctx->pc = 0x215e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960308)));
    // 0x215e9c: 0x3c050b47  lui         $a1, 0xB47
    ctx->pc = 0x215e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2887 << 16));
    // 0x215ea0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ea4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x215ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x215ea8: 0x34a577db  ori         $a1, $a1, 0x77DB
    ctx->pc = 0x215ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30683);
    // 0x215eac: 0xc06081c  jal         func_182070
    ctx->pc = 0x215EACu;
    SET_GPR_U32(ctx, 31, 0x215EB4u);
    ctx->pc = 0x215EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215EACu;
            // 0x215eb0: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215EB4u; }
        if (ctx->pc != 0x215EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215EB4u; }
        if (ctx->pc != 0x215EB4u) { return; }
    }
    ctx->pc = 0x215EB4u;
    // 0x215eb4: 0x8e24e4b4  lw          $a0, -0x1B4C($s1)
    ctx->pc = 0x215eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960308)));
    // 0x215eb8: 0x3c0559b2  lui         $a1, 0x59B2
    ctx->pc = 0x215eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22962 << 16));
    // 0x215ebc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ec0: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x215ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x215ec4: 0x34a5d725  ori         $a1, $a1, 0xD725
    ctx->pc = 0x215ec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55077);
    // 0x215ec8: 0xc06081c  jal         func_182070
    ctx->pc = 0x215EC8u;
    SET_GPR_U32(ctx, 31, 0x215ED0u);
    ctx->pc = 0x215ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215EC8u;
            // 0x215ecc: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215ED0u; }
        if (ctx->pc != 0x215ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215ED0u; }
        if (ctx->pc != 0x215ED0u) { return; }
    }
    ctx->pc = 0x215ED0u;
    // 0x215ed0: 0x8e24e4b4  lw          $a0, -0x1B4C($s1)
    ctx->pc = 0x215ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960308)));
    // 0x215ed4: 0x3c056881  lui         $a1, 0x6881
    ctx->pc = 0x215ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26753 << 16));
    // 0x215ed8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215edc: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x215edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x215ee0: 0x34a53237  ori         $a1, $a1, 0x3237
    ctx->pc = 0x215ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12855);
    // 0x215ee4: 0xc06081c  jal         func_182070
    ctx->pc = 0x215EE4u;
    SET_GPR_U32(ctx, 31, 0x215EECu);
    ctx->pc = 0x215EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215EE4u;
            // 0x215ee8: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215EECu; }
        if (ctx->pc != 0x215EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215EECu; }
        if (ctx->pc != 0x215EECu) { return; }
    }
    ctx->pc = 0x215EECu;
    // 0x215eec: 0x8e24e4b4  lw          $a0, -0x1B4C($s1)
    ctx->pc = 0x215eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960308)));
    // 0x215ef0: 0x3c05d32c  lui         $a1, 0xD32C
    ctx->pc = 0x215ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54060 << 16));
    // 0x215ef4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ef8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x215ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x215efc: 0x34a5336d  ori         $a1, $a1, 0x336D
    ctx->pc = 0x215efcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13165);
    // 0x215f00: 0xc06081c  jal         func_182070
    ctx->pc = 0x215F00u;
    SET_GPR_U32(ctx, 31, 0x215F08u);
    ctx->pc = 0x215F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215F00u;
            // 0x215f04: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F08u; }
        if (ctx->pc != 0x215F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F08u; }
        if (ctx->pc != 0x215F08u) { return; }
    }
    ctx->pc = 0x215F08u;
    // 0x215f08: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x215F08u;
    SET_GPR_U32(ctx, 31, 0x215F10u);
    ctx->pc = 0x215F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215F08u;
            // 0x215f0c: 0x8e24e4b4  lw          $a0, -0x1B4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960308)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F10u; }
        if (ctx->pc != 0x215F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F10u; }
        if (ctx->pc != 0x215F10u) { return; }
    }
    ctx->pc = 0x215F10u;
    // 0x215f10: 0x8e24e4b4  lw          $a0, -0x1B4C($s1)
    ctx->pc = 0x215f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960308)));
    // 0x215f14: 0x3c05b389  lui         $a1, 0xB389
    ctx->pc = 0x215f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45961 << 16));
    // 0x215f18: 0x34a519fb  ori         $a1, $a1, 0x19FB
    ctx->pc = 0x215f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6651);
    // 0x215f1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x215f1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f24: 0x27a700b8  addiu       $a3, $sp, 0xB8
    ctx->pc = 0x215f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x215f28: 0xc06074a  jal         func_181D28
    ctx->pc = 0x215F28u;
    SET_GPR_U32(ctx, 31, 0x215F30u);
    ctx->pc = 0x215F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215F28u;
            // 0x215f2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F30u; }
        if (ctx->pc != 0x215F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F30u; }
        if (ctx->pc != 0x215F30u) { return; }
    }
    ctx->pc = 0x215F30u;
    // 0x215f30: 0xc04f860  jal         func_13E180
    ctx->pc = 0x215F30u;
    SET_GPR_U32(ctx, 31, 0x215F38u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F38u; }
        if (ctx->pc != 0x215F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F38u; }
        if (ctx->pc != 0x215F38u) { return; }
    }
    ctx->pc = 0x215F38u;
    // 0x215f38: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x215f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x215f3c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x215f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215f40: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x215f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x215f44: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x215F44u;
    {
        const bool branch_taken_0x215f44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215F44u;
            // 0x215f48: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f44) {
            ctx->pc = 0x215F54u;
            goto label_215f54;
        }
    }
    ctx->pc = 0x215F4Cu;
    // 0x215f4c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x215F4Cu;
    SET_GPR_U32(ctx, 31, 0x215F54u);
    ctx->pc = 0x215F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215F4Cu;
            // 0x215f50: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F54u; }
        if (ctx->pc != 0x215F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F54u; }
        if (ctx->pc != 0x215F54u) { return; }
    }
    ctx->pc = 0x215F54u;
label_215f54:
    // 0x215f54: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x215f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x215f58: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x215f58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x215f5c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x215f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x215f60: 0x3e00008  jr          $ra
    ctx->pc = 0x215F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215F60u;
            // 0x215f64: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215F54u: goto label_215f54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215F68u;
}
