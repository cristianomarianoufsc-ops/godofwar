#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181D28
// Address: 0x181d28 - 0x181e38
void sub_00181D28_0x181d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181D28_0x181d28");
#endif

    ctx->pc = 0x181d28u;

    // 0x181d28: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x181d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x181d2c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x181d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x181d30: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x181d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x181d34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x181d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d38: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x181d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x181d3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x181d3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x181d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x181d44: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x181d44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d48: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x181d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x181d4c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x181d4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d50: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x181d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x181d54: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x181d54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d58: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x181d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x181d5c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x181d5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181d64: 0xc08f164  jal         func_23C590
    ctx->pc = 0x181D64u;
    SET_GPR_U32(ctx, 31, 0x181D6Cu);
    ctx->pc = 0x181D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181D64u;
            // 0x181d68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C590u;
    if (runtime->hasFunction(0x23C590u)) {
        auto targetFn = runtime->lookupFunction(0x23C590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D6Cu; }
        if (ctx->pc != 0x181D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23c590_0x23c5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D6Cu; }
        if (ctx->pc != 0x181D6Cu) { return; }
    }
    ctx->pc = 0x181D6Cu;
    // 0x181d6c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x181d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x181d70: 0x2708023  subu        $s0, $s3, $s0
    ctx->pc = 0x181d70u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x181d74: 0x8e22c71c  lw          $v0, -0x38E4($s1)
    ctx->pc = 0x181d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952732)));
    // 0x181d78: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181D78u;
    {
        const bool branch_taken_0x181d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181D78u;
            // 0x181d7c: 0xafb0000c  sw          $s0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d78) {
            ctx->pc = 0x181D90u;
            goto label_181d90;
        }
    }
    ctx->pc = 0x181D80u;
    // 0x181d80: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x181D80u;
    SET_GPR_U32(ctx, 31, 0x181D88u);
    ctx->pc = 0x181D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181D80u;
            // 0x181d84: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D88u; }
        if (ctx->pc != 0x181D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D88u; }
        if (ctx->pc != 0x181D88u) { return; }
    }
    ctx->pc = 0x181D88u;
    // 0x181d88: 0xae22c71c  sw          $v0, -0x38E4($s1)
    ctx->pc = 0x181d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952732), GPR_U32(ctx, 2));
    // 0x181d8c: 0x0  nop
    ctx->pc = 0x181d8cu;
    // NOP
label_181d90:
    // 0x181d90: 0x8e24c71c  lw          $a0, -0x38E4($s1)
    ctx->pc = 0x181d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952732)));
    // 0x181d94: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181D94u;
    SET_GPR_U32(ctx, 31, 0x181D9Cu);
    ctx->pc = 0x181D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181D94u;
            // 0x181d98: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D9Cu; }
        if (ctx->pc != 0x181D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D9Cu; }
        if (ctx->pc != 0x181D9Cu) { return; }
    }
    ctx->pc = 0x181D9Cu;
    // 0x181d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x181d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181da0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x181da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181da4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x181da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181da8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x181da8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181dac: 0xc08cbf8  jal         func_232FE0
    ctx->pc = 0x181DACu;
    SET_GPR_U32(ctx, 31, 0x181DB4u);
    ctx->pc = 0x181DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181DACu;
            // 0x181db0: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232FE0u;
    if (runtime->hasFunction(0x232FE0u)) {
        auto targetFn = runtime->lookupFunction(0x232FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181DB4u; }
        if (ctx->pc != 0x181DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232FE0_0x232fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181DB4u; }
        if (ctx->pc != 0x181DB4u) { return; }
    }
    ctx->pc = 0x181DB4u;
    // 0x181db4: 0x8e03c7bc  lw          $v1, -0x3844($s0)
    ctx->pc = 0x181db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952892)));
    // 0x181db8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181DB8u;
    {
        const bool branch_taken_0x181db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181DB8u;
            // 0x181dbc: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181db8) {
            ctx->pc = 0x181DC8u;
            goto label_181dc8;
        }
    }
    ctx->pc = 0x181DC0u;
    // 0x181dc0: 0xc060468  jal         func_1811A0
    ctx->pc = 0x181DC0u;
    SET_GPR_U32(ctx, 31, 0x181DC8u);
    ctx->pc = 0x1811A0u;
    if (runtime->hasFunction(0x1811A0u)) {
        auto targetFn = runtime->lookupFunction(0x1811A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181DC8u; }
        if (ctx->pc != 0x181DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001811A0_0x1811a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181DC8u; }
        if (ctx->pc != 0x181DC8u) { return; }
    }
    ctx->pc = 0x181DC8u;
label_181dc8:
    // 0x181dc8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181DC8u;
    SET_GPR_U32(ctx, 31, 0x181DD0u);
    ctx->pc = 0x181DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181DC8u;
            // 0x181dcc: 0x8e04c7bc  lw          $a0, -0x3844($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181DD0u; }
        if (ctx->pc != 0x181DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181DD0u; }
        if (ctx->pc != 0x181DD0u) { return; }
    }
    ctx->pc = 0x181DD0u;
    // 0x181dd0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x181dd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181dd4: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x181dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x181dd8: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x181dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x181ddc: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x181ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x181de0: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x181de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x181de4: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x181de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181de8: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x181de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181dec: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x181decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181df0: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x181df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181df4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x181df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x181df8: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x181df8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x181dfc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x181dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181e00: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x181e00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x181e04: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x181e04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x181e08: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x181e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x181e0c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x181e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x181e10: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x181e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x181e14: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x181e14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181e18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x181e18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181e1c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x181e1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181e20: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x181e20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181e24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181e28: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x181e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x181e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x181E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181E2Cu;
            // 0x181e30: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181D90u: goto label_181d90;
            case 0x181DC8u: goto label_181dc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x181E34u;
    // 0x181e34: 0x0  nop
    ctx->pc = 0x181e34u;
    // NOP
}
