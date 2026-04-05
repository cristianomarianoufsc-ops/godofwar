#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_18fc88
// Address: 0x18fc88 - 0x18ffe8
void entry_18fc88_0x18ffe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_18fc88_0x18ffe8");
#endif

    ctx->pc = 0x18fc88u;

    // 0x18fc88: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18fc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18fc8c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x18fc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x18fc90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18fc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc94: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x18fc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x18fc98: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18fc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x18fc9c: 0xc090d78  jal         func_2435E0
    ctx->pc = 0x18FC9Cu;
    SET_GPR_U32(ctx, 31, 0x18FCA4u);
    ctx->pc = 0x18FCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC9Cu;
            // 0x18fca0: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2435E0u;
    if (runtime->hasFunction(0x2435E0u)) {
        auto targetFn = runtime->lookupFunction(0x2435E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCA4u; }
        if (ctx->pc != 0x18FCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002435E0_0x2435e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCA4u; }
        if (ctx->pc != 0x18FCA4u) { return; }
    }
    ctx->pc = 0x18FCA4u;
    // 0x18fca4: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x18FCA4u;
    SET_GPR_U32(ctx, 31, 0x18FCACu);
    ctx->pc = 0x18FCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FCA4u;
            // 0x18fca8: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCACu; }
        if (ctx->pc != 0x18FCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCACu; }
        if (ctx->pc != 0x18FCACu) { return; }
    }
    ctx->pc = 0x18FCACu;
    // 0x18fcac: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18FCACu;
    SET_GPR_U32(ctx, 31, 0x18FCB4u);
    ctx->pc = 0x18FCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FCACu;
            // 0x18fcb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCB4u; }
        if (ctx->pc != 0x18FCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCB4u; }
        if (ctx->pc != 0x18FCB4u) { return; }
    }
    ctx->pc = 0x18FCB4u;
    // 0x18fcb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18fcb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fcb8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18fcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18fcbc: 0x24a532b8  addiu       $a1, $a1, 0x32B8
    ctx->pc = 0x18fcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12984));
    // 0x18fcc0: 0xc060978  jal         func_1825E0
    ctx->pc = 0x18FCC0u;
    SET_GPR_U32(ctx, 31, 0x18FCC8u);
    ctx->pc = 0x18FCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FCC0u;
            // 0x18fcc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCC8u; }
        if (ctx->pc != 0x18FCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCC8u; }
        if (ctx->pc != 0x18FCC8u) { return; }
    }
    ctx->pc = 0x18FCC8u;
    // 0x18fcc8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x18fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x18fccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18fcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fcd0: 0x2442a010  addiu       $v0, $v0, -0x5FF0
    ctx->pc = 0x18fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942736));
    // 0x18fcd4: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x18FCD4u;
    SET_GPR_U32(ctx, 31, 0x18FCDCu);
    ctx->pc = 0x18FCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FCD4u;
            // 0x18fcd8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCDCu; }
        if (ctx->pc != 0x18FCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCDCu; }
        if (ctx->pc != 0x18FCDCu) { return; }
    }
    ctx->pc = 0x18FCDCu;
    // 0x18fcdc: 0x3c05e7a9  lui         $a1, 0xE7A9
    ctx->pc = 0x18fcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59305 << 16));
    // 0x18fce0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fce4: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x18fce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x18fce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18fce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fcec: 0xae30c8d8  sw          $s0, -0x3728($s1)
    ctx->pc = 0x18fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953176), GPR_U32(ctx, 16));
    // 0x18fcf0: 0x34a53efa  ori         $a1, $a1, 0x3EFA
    ctx->pc = 0x18fcf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16122);
    // 0x18fcf4: 0xc06085e  jal         func_182178
    ctx->pc = 0x18FCF4u;
    SET_GPR_U32(ctx, 31, 0x18FCFCu);
    ctx->pc = 0x18FCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FCF4u;
            // 0x18fcf8: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182178u;
    if (runtime->hasFunction(0x182178u)) {
        auto targetFn = runtime->lookupFunction(0x182178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCFCu; }
        if (ctx->pc != 0x18FCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182178_0x182178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCFCu; }
        if (ctx->pc != 0x18FCFCu) { return; }
    }
    ctx->pc = 0x18FCFCu;
    // 0x18fcfc: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fd00: 0x3c0551f0  lui         $a1, 0x51F0
    ctx->pc = 0x18fd00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20976 << 16));
    // 0x18fd04: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fd04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd08: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x18fd08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18fd0c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x18fd0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18fd10: 0xc06085e  jal         func_182178
    ctx->pc = 0x18FD10u;
    SET_GPR_U32(ctx, 31, 0x18FD18u);
    ctx->pc = 0x18FD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD10u;
            // 0x18fd14: 0x34a5e2e1  ori         $a1, $a1, 0xE2E1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58081);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182178u;
    if (runtime->hasFunction(0x182178u)) {
        auto targetFn = runtime->lookupFunction(0x182178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD18u; }
        if (ctx->pc != 0x18FD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182178_0x182178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD18u; }
        if (ctx->pc != 0x18FD18u) { return; }
    }
    ctx->pc = 0x18FD18u;
    // 0x18fd18: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fd1c: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x18fd1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x18fd20: 0x3c050a5f  lui         $a1, 0xA5F
    ctx->pc = 0x18fd20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2655 << 16));
    // 0x18fd24: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fd24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd28: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x18fd28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x18fd2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18fd2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd30: 0x25085008  addiu       $t0, $t0, 0x5008
    ctx->pc = 0x18fd30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20488));
    // 0x18fd34: 0xc06074a  jal         func_181D28
    ctx->pc = 0x18FD34u;
    SET_GPR_U32(ctx, 31, 0x18FD3Cu);
    ctx->pc = 0x18FD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD34u;
            // 0x18fd38: 0x34a57d1a  ori         $a1, $a1, 0x7D1A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32026);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD3Cu; }
        if (ctx->pc != 0x18FD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD3Cu; }
        if (ctx->pc != 0x18FD3Cu) { return; }
    }
    ctx->pc = 0x18FD3Cu;
    // 0x18fd3c: 0x27b00054  addiu       $s0, $sp, 0x54
    ctx->pc = 0x18fd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x18fd40: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fd44: 0x3c056ae9  lui         $a1, 0x6AE9
    ctx->pc = 0x18fd44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27369 << 16));
    // 0x18fd48: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fd48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd4c: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x18fd4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18fd50: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18fd50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd54: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18FD54u;
    SET_GPR_U32(ctx, 31, 0x18FD5Cu);
    ctx->pc = 0x18FD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD54u;
            // 0x18fd58: 0x34a5ba97  ori         $a1, $a1, 0xBA97 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47767);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD5Cu; }
        if (ctx->pc != 0x18FD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD5Cu; }
        if (ctx->pc != 0x18FD5Cu) { return; }
    }
    ctx->pc = 0x18FD5Cu;
    // 0x18fd5c: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fd60: 0x3c05cbb7  lui         $a1, 0xCBB7
    ctx->pc = 0x18fd60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52151 << 16));
    // 0x18fd64: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fd64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd68: 0x27a7005a  addiu       $a3, $sp, 0x5A
    ctx->pc = 0x18fd68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 90));
    // 0x18fd6c: 0xc06063a  jal         func_1818E8
    ctx->pc = 0x18FD6Cu;
    SET_GPR_U32(ctx, 31, 0x18FD74u);
    ctx->pc = 0x18FD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD6Cu;
            // 0x18fd70: 0x34a5bb38  ori         $a1, $a1, 0xBB38 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47928);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818E8u;
    if (runtime->hasFunction(0x1818E8u)) {
        auto targetFn = runtime->lookupFunction(0x1818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD74u; }
        if (ctx->pc != 0x18FD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001818E8_0x1818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD74u; }
        if (ctx->pc != 0x18FD74u) { return; }
    }
    ctx->pc = 0x18FD74u;
    // 0x18fd74: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fd78: 0x3c05dc64  lui         $a1, 0xDC64
    ctx->pc = 0x18fd78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56420 << 16));
    // 0x18fd7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fd7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd80: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x18fd80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x18fd84: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18FD84u;
    SET_GPR_U32(ctx, 31, 0x18FD8Cu);
    ctx->pc = 0x18FD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD84u;
            // 0x18fd88: 0x34a59970  ori         $a1, $a1, 0x9970 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39280);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD8Cu; }
        if (ctx->pc != 0x18FD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD8Cu; }
        if (ctx->pc != 0x18FD8Cu) { return; }
    }
    ctx->pc = 0x18FD8Cu;
    // 0x18fd8c: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fd90: 0x3c050914  lui         $a1, 0x914
    ctx->pc = 0x18fd90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2324 << 16));
    // 0x18fd94: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fd94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd98: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x18fd98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x18fd9c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18FD9Cu;
    SET_GPR_U32(ctx, 31, 0x18FDA4u);
    ctx->pc = 0x18FDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD9Cu;
            // 0x18fda0: 0x34a5aef7  ori         $a1, $a1, 0xAEF7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44791);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FDA4u; }
        if (ctx->pc != 0x18FDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FDA4u; }
        if (ctx->pc != 0x18FDA4u) { return; }
    }
    ctx->pc = 0x18FDA4u;
    // 0x18fda4: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fda8: 0x3c05fd68  lui         $a1, 0xFD68
    ctx->pc = 0x18fda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64872 << 16));
    // 0x18fdac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fdacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fdb0: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x18fdb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x18fdb4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18FDB4u;
    SET_GPR_U32(ctx, 31, 0x18FDBCu);
    ctx->pc = 0x18FDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FDB4u;
            // 0x18fdb8: 0x34a5b233  ori         $a1, $a1, 0xB233 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45619);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FDBCu; }
        if (ctx->pc != 0x18FDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FDBCu; }
        if (ctx->pc != 0x18FDBCu) { return; }
    }
    ctx->pc = 0x18FDBCu;
    // 0x18fdbc: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fdc0: 0x3c05f536  lui         $a1, 0xF536
    ctx->pc = 0x18fdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62774 << 16));
    // 0x18fdc4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fdc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fdc8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x18fdc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x18fdcc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18FDCCu;
    SET_GPR_U32(ctx, 31, 0x18FDD4u);
    ctx->pc = 0x18FDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FDCCu;
            // 0x18fdd0: 0x34a5f2a0  ori         $a1, $a1, 0xF2A0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62112);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FDD4u; }
        if (ctx->pc != 0x18FDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FDD4u; }
        if (ctx->pc != 0x18FDD4u) { return; }
    }
    ctx->pc = 0x18FDD4u;
    // 0x18fdd4: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fdd8: 0x3c05d109  lui         $a1, 0xD109
    ctx->pc = 0x18fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53513 << 16));
    // 0x18fddc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fde0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x18fde0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18fde4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18FDE4u;
    SET_GPR_U32(ctx, 31, 0x18FDECu);
    ctx->pc = 0x18FDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FDE4u;
            // 0x18fde8: 0x34a5e694  ori         $a1, $a1, 0xE694 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59028);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FDECu; }
        if (ctx->pc != 0x18FDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FDECu; }
        if (ctx->pc != 0x18FDECu) { return; }
    }
    ctx->pc = 0x18FDECu;
    // 0x18fdec: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fdf0: 0x3c05bb0c  lui         $a1, 0xBB0C
    ctx->pc = 0x18fdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47884 << 16));
    // 0x18fdf4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fdf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fdf8: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x18fdf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x18fdfc: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x18FDFCu;
    SET_GPR_U32(ctx, 31, 0x18FE04u);
    ctx->pc = 0x18FE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FDFCu;
            // 0x18fe00: 0x34a5f5af  ori         $a1, $a1, 0xF5AF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62895);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE04u; }
        if (ctx->pc != 0x18FE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE04u; }
        if (ctx->pc != 0x18FE04u) { return; }
    }
    ctx->pc = 0x18FE04u;
    // 0x18fe04: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fe04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fe08: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fe08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe0c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x18fe0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18fe10: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x18FE10u;
    SET_GPR_U32(ctx, 31, 0x18FE18u);
    ctx->pc = 0x18FE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE10u;
            // 0x18fe14: 0x2405247b  addiu       $a1, $zero, 0x247B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9339));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE18u; }
        if (ctx->pc != 0x18FE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE18u; }
        if (ctx->pc != 0x18FE18u) { return; }
    }
    ctx->pc = 0x18FE18u;
    // 0x18fe18: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fe18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fe1c: 0x3c0579d9  lui         $a1, 0x79D9
    ctx->pc = 0x18fe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31193 << 16));
    // 0x18fe20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fe20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe24: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18fe24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe28: 0x34a50a02  ori         $a1, $a1, 0xA02
    ctx->pc = 0x18fe28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2562);
    // 0x18fe2c: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18FE2Cu;
    SET_GPR_U32(ctx, 31, 0x18FE34u);
    ctx->pc = 0x18FE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE2Cu;
            // 0x18fe30: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE34u; }
        if (ctx->pc != 0x18FE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE34u; }
        if (ctx->pc != 0x18FE34u) { return; }
    }
    ctx->pc = 0x18FE34u;
    // 0x18fe34: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fe34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fe38: 0x3c0579d9  lui         $a1, 0x79D9
    ctx->pc = 0x18fe38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31193 << 16));
    // 0x18fe3c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fe3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe40: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18fe40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe44: 0x34a50a03  ori         $a1, $a1, 0xA03
    ctx->pc = 0x18fe44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2563);
    // 0x18fe48: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18FE48u;
    SET_GPR_U32(ctx, 31, 0x18FE50u);
    ctx->pc = 0x18FE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE48u;
            // 0x18fe4c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE50u; }
        if (ctx->pc != 0x18FE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE50u; }
        if (ctx->pc != 0x18FE50u) { return; }
    }
    ctx->pc = 0x18FE50u;
    // 0x18fe50: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fe50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fe54: 0x3c0579d9  lui         $a1, 0x79D9
    ctx->pc = 0x18fe54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31193 << 16));
    // 0x18fe58: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fe58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe5c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18fe5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe60: 0x34a50a04  ori         $a1, $a1, 0xA04
    ctx->pc = 0x18fe60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2564);
    // 0x18fe64: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18FE64u;
    SET_GPR_U32(ctx, 31, 0x18FE6Cu);
    ctx->pc = 0x18FE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE64u;
            // 0x18fe68: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE6Cu; }
        if (ctx->pc != 0x18FE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE6Cu; }
        if (ctx->pc != 0x18FE6Cu) { return; }
    }
    ctx->pc = 0x18FE6Cu;
    // 0x18fe6c: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fe70: 0x3c058a83  lui         $a1, 0x8A83
    ctx->pc = 0x18fe70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35459 << 16));
    // 0x18fe74: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fe74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe78: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18fe78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe7c: 0x34a57da4  ori         $a1, $a1, 0x7DA4
    ctx->pc = 0x18fe7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32164);
    // 0x18fe80: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18FE80u;
    SET_GPR_U32(ctx, 31, 0x18FE88u);
    ctx->pc = 0x18FE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE80u;
            // 0x18fe84: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE88u; }
        if (ctx->pc != 0x18FE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE88u; }
        if (ctx->pc != 0x18FE88u) { return; }
    }
    ctx->pc = 0x18FE88u;
    // 0x18fe88: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fe88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fe8c: 0x3c05ef5e  lui         $a1, 0xEF5E
    ctx->pc = 0x18fe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61278 << 16));
    // 0x18fe90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fe90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe94: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18fe94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe98: 0x34a55b9a  ori         $a1, $a1, 0x5B9A
    ctx->pc = 0x18fe98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)23450);
    // 0x18fe9c: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18FE9Cu;
    SET_GPR_U32(ctx, 31, 0x18FEA4u);
    ctx->pc = 0x18FEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE9Cu;
            // 0x18fea0: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FEA4u; }
        if (ctx->pc != 0x18FEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FEA4u; }
        if (ctx->pc != 0x18FEA4u) { return; }
    }
    ctx->pc = 0x18FEA4u;
    // 0x18fea4: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fea8: 0x3c05a0cd  lui         $a1, 0xA0CD
    ctx->pc = 0x18fea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41165 << 16));
    // 0x18feac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18feacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18feb0: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x18feb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18feb4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18feb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18feb8: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x18FEB8u;
    SET_GPR_U32(ctx, 31, 0x18FEC0u);
    ctx->pc = 0x18FEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FEB8u;
            // 0x18febc: 0x34a5b24e  ori         $a1, $a1, 0xB24E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45646);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FEC0u; }
        if (ctx->pc != 0x18FEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FEC0u; }
        if (ctx->pc != 0x18FEC0u) { return; }
    }
    ctx->pc = 0x18FEC0u;
    // 0x18fec0: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fec4: 0x3c0501ce  lui         $a1, 0x1CE
    ctx->pc = 0x18fec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)462 << 16));
    // 0x18fec8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fecc: 0x27a70031  addiu       $a3, $sp, 0x31
    ctx->pc = 0x18feccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 49));
    // 0x18fed0: 0xc060706  jal         func_181C18
    ctx->pc = 0x18FED0u;
    SET_GPR_U32(ctx, 31, 0x18FED8u);
    ctx->pc = 0x18FED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FED0u;
            // 0x18fed4: 0x34a55e0f  ori         $a1, $a1, 0x5E0F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24079);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C18u;
    if (runtime->hasFunction(0x181C18u)) {
        auto targetFn = runtime->lookupFunction(0x181C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FED8u; }
        if (ctx->pc != 0x18FED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181C18_0x181c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FED8u; }
        if (ctx->pc != 0x18FED8u) { return; }
    }
    ctx->pc = 0x18FED8u;
    // 0x18fed8: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fedc: 0x3c0522bb  lui         $a1, 0x22BB
    ctx->pc = 0x18fedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8891 << 16));
    // 0x18fee0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fee4: 0x27a7002e  addiu       $a3, $sp, 0x2E
    ctx->pc = 0x18fee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
    // 0x18fee8: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x18FEE8u;
    SET_GPR_U32(ctx, 31, 0x18FEF0u);
    ctx->pc = 0x18FEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FEE8u;
            // 0x18feec: 0x34a537bb  ori         $a1, $a1, 0x37BB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14267);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FEF0u; }
        if (ctx->pc != 0x18FEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FEF0u; }
        if (ctx->pc != 0x18FEF0u) { return; }
    }
    ctx->pc = 0x18FEF0u;
    // 0x18fef0: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18fef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18fef4: 0x3c0530cd  lui         $a1, 0x30CD
    ctx->pc = 0x18fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12493 << 16));
    // 0x18fef8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18fef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fefc: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x18fefcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x18ff00: 0xc06052e  jal         func_1814B8
    ctx->pc = 0x18FF00u;
    SET_GPR_U32(ctx, 31, 0x18FF08u);
    ctx->pc = 0x18FF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF00u;
            // 0x18ff04: 0x34a5d4b2  ori         $a1, $a1, 0xD4B2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54450);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B8u;
    if (runtime->hasFunction(0x1814B8u)) {
        auto targetFn = runtime->lookupFunction(0x1814B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF08u; }
        if (ctx->pc != 0x18FF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814B8_0x1814b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF08u; }
        if (ctx->pc != 0x18FF08u) { return; }
    }
    ctx->pc = 0x18FF08u;
    // 0x18ff08: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18ff08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18ff0c: 0x3c056685  lui         $a1, 0x6685
    ctx->pc = 0x18ff0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26245 << 16));
    // 0x18ff10: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ff10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff14: 0x27a7001a  addiu       $a3, $sp, 0x1A
    ctx->pc = 0x18ff14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 26));
    // 0x18ff18: 0xc06052e  jal         func_1814B8
    ctx->pc = 0x18FF18u;
    SET_GPR_U32(ctx, 31, 0x18FF20u);
    ctx->pc = 0x18FF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF18u;
            // 0x18ff1c: 0x34a547ff  ori         $a1, $a1, 0x47FF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18431);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B8u;
    if (runtime->hasFunction(0x1814B8u)) {
        auto targetFn = runtime->lookupFunction(0x1814B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF20u; }
        if (ctx->pc != 0x18FF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814B8_0x1814b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF20u; }
        if (ctx->pc != 0x18FF20u) { return; }
    }
    ctx->pc = 0x18FF20u;
    // 0x18ff20: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18ff20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18ff24: 0x3c053c01  lui         $a1, 0x3C01
    ctx->pc = 0x18ff24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15361 << 16));
    // 0x18ff28: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ff28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff2c: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x18ff2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x18ff30: 0xc06052e  jal         func_1814B8
    ctx->pc = 0x18FF30u;
    SET_GPR_U32(ctx, 31, 0x18FF38u);
    ctx->pc = 0x18FF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF30u;
            // 0x18ff34: 0x34a5bf78  ori         $a1, $a1, 0xBF78 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49016);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B8u;
    if (runtime->hasFunction(0x1814B8u)) {
        auto targetFn = runtime->lookupFunction(0x1814B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF38u; }
        if (ctx->pc != 0x18FF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814B8_0x1814b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF38u; }
        if (ctx->pc != 0x18FF38u) { return; }
    }
    ctx->pc = 0x18FF38u;
    // 0x18ff38: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18ff38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18ff3c: 0x3c0590a7  lui         $a1, 0x90A7
    ctx->pc = 0x18ff3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37031 << 16));
    // 0x18ff40: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ff40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff44: 0x27a70022  addiu       $a3, $sp, 0x22
    ctx->pc = 0x18ff44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 34));
    // 0x18ff48: 0xc06052e  jal         func_1814B8
    ctx->pc = 0x18FF48u;
    SET_GPR_U32(ctx, 31, 0x18FF50u);
    ctx->pc = 0x18FF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF48u;
            // 0x18ff4c: 0x34a57a8f  ori         $a1, $a1, 0x7A8F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31375);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B8u;
    if (runtime->hasFunction(0x1814B8u)) {
        auto targetFn = runtime->lookupFunction(0x1814B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF50u; }
        if (ctx->pc != 0x18FF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814B8_0x1814b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF50u; }
        if (ctx->pc != 0x18FF50u) { return; }
    }
    ctx->pc = 0x18FF50u;
    // 0x18ff50: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18ff50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18ff54: 0x3c05daea  lui         $a1, 0xDAEA
    ctx->pc = 0x18ff54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56042 << 16));
    // 0x18ff58: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ff58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff5c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x18ff5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18ff60: 0xc06052e  jal         func_1814B8
    ctx->pc = 0x18FF60u;
    SET_GPR_U32(ctx, 31, 0x18FF68u);
    ctx->pc = 0x18FF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF60u;
            // 0x18ff64: 0x34a58adc  ori         $a1, $a1, 0x8ADC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35548);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B8u;
    if (runtime->hasFunction(0x1814B8u)) {
        auto targetFn = runtime->lookupFunction(0x1814B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF68u; }
        if (ctx->pc != 0x18FF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814B8_0x1814b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF68u; }
        if (ctx->pc != 0x18FF68u) { return; }
    }
    ctx->pc = 0x18FF68u;
    // 0x18ff68: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18ff68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18ff6c: 0x3c05c8fb  lui         $a1, 0xC8FB
    ctx->pc = 0x18ff6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51451 << 16));
    // 0x18ff70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ff70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff74: 0x27a7001e  addiu       $a3, $sp, 0x1E
    ctx->pc = 0x18ff74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
    // 0x18ff78: 0xc06052e  jal         func_1814B8
    ctx->pc = 0x18FF78u;
    SET_GPR_U32(ctx, 31, 0x18FF80u);
    ctx->pc = 0x18FF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF78u;
            // 0x18ff7c: 0x34a5081b  ori         $a1, $a1, 0x81B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2075);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B8u;
    if (runtime->hasFunction(0x1814B8u)) {
        auto targetFn = runtime->lookupFunction(0x1814B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF80u; }
        if (ctx->pc != 0x18FF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814B8_0x1814b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF80u; }
        if (ctx->pc != 0x18FF80u) { return; }
    }
    ctx->pc = 0x18FF80u;
    // 0x18ff80: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18ff80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18ff84: 0x3c05d0d4  lui         $a1, 0xD0D4
    ctx->pc = 0x18ff84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53460 << 16));
    // 0x18ff88: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ff88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff8c: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x18ff8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x18ff90: 0xc06052e  jal         func_1814B8
    ctx->pc = 0x18FF90u;
    SET_GPR_U32(ctx, 31, 0x18FF98u);
    ctx->pc = 0x18FF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF90u;
            // 0x18ff94: 0x34a5210c  ori         $a1, $a1, 0x210C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8460);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B8u;
    if (runtime->hasFunction(0x1814B8u)) {
        auto targetFn = runtime->lookupFunction(0x1814B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF98u; }
        if (ctx->pc != 0x18FF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814B8_0x1814b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF98u; }
        if (ctx->pc != 0x18FF98u) { return; }
    }
    ctx->pc = 0x18FF98u;
    // 0x18ff98: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18ff98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18ff9c: 0x3c05131b  lui         $a1, 0x131B
    ctx->pc = 0x18ff9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4891 << 16));
    // 0x18ffa0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ffa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffa4: 0x27a70026  addiu       $a3, $sp, 0x26
    ctx->pc = 0x18ffa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 38));
    // 0x18ffa8: 0xc06052e  jal         func_1814B8
    ctx->pc = 0x18FFA8u;
    SET_GPR_U32(ctx, 31, 0x18FFB0u);
    ctx->pc = 0x18FFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FFA8u;
            // 0x18ffac: 0x34a56e59  ori         $a1, $a1, 0x6E59 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28249);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B8u;
    if (runtime->hasFunction(0x1814B8u)) {
        auto targetFn = runtime->lookupFunction(0x1814B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FFB0u; }
        if (ctx->pc != 0x18FFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814B8_0x1814b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FFB0u; }
        if (ctx->pc != 0x18FFB0u) { return; }
    }
    ctx->pc = 0x18FFB0u;
    // 0x18ffb0: 0x8e24c8d8  lw          $a0, -0x3728($s1)
    ctx->pc = 0x18ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953176)));
    // 0x18ffb4: 0x3c059f21  lui         $a1, 0x9F21
    ctx->pc = 0x18ffb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40737 << 16));
    // 0x18ffb8: 0x34a5a01e  ori         $a1, $a1, 0xA01E
    ctx->pc = 0x18ffb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40990);
    // 0x18ffbc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ffbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffc0: 0xc06052e  jal         func_1814B8
    ctx->pc = 0x18FFC0u;
    SET_GPR_U32(ctx, 31, 0x18FFC8u);
    ctx->pc = 0x18FFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FFC0u;
            // 0x18ffc4: 0x27a70024  addiu       $a3, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B8u;
    if (runtime->hasFunction(0x1814B8u)) {
        auto targetFn = runtime->lookupFunction(0x1814B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FFC8u; }
        if (ctx->pc != 0x18FFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814B8_0x1814b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FFC8u; }
        if (ctx->pc != 0x18FFC8u) { return; }
    }
    ctx->pc = 0x18FFC8u;
    // 0x18ffc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18ffc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffcc: 0xc090d60  jal         func_243580
    ctx->pc = 0x18FFCCu;
    SET_GPR_U32(ctx, 31, 0x18FFD4u);
    ctx->pc = 0x18FFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FFCCu;
            // 0x18ffd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243580u;
    if (runtime->hasFunction(0x243580u)) {
        auto targetFn = runtime->lookupFunction(0x243580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FFD4u; }
        if (ctx->pc != 0x18FFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243580_0x243580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FFD4u; }
        if (ctx->pc != 0x18FFD4u) { return; }
    }
    ctx->pc = 0x18FFD4u;
    // 0x18ffd4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x18ffd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18ffd8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x18ffd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18ffdc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18ffdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18ffe0: 0x3e00008  jr          $ra
    ctx->pc = 0x18FFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FFE0u;
            // 0x18ffe4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FFE8u;
}
