#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001819F8
// Address: 0x1819f8 - 0x181b08
void sub_001819F8_0x1819f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001819F8_0x1819f8");
#endif

    ctx->pc = 0x1819f8u;

    // 0x1819f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1819f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1819fc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1819fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x181a00: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x181a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x181a04: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x181a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x181a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x181a0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x181a0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a10: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x181a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x181a14: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x181a14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a18: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x181a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x181a1c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x181a1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181a24: 0xc08f164  jal         func_23C590
    ctx->pc = 0x181A24u;
    SET_GPR_U32(ctx, 31, 0x181A2Cu);
    ctx->pc = 0x181A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181A24u;
            // 0x181a28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C590u;
    if (runtime->hasFunction(0x23C590u)) {
        auto targetFn = runtime->lookupFunction(0x23C590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181A2Cu; }
        if (ctx->pc != 0x181A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23c590_0x23c5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181A2Cu; }
        if (ctx->pc != 0x181A2Cu) { return; }
    }
    ctx->pc = 0x181A2Cu;
    // 0x181a2c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x181a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x181a30: 0x2708023  subu        $s0, $s3, $s0
    ctx->pc = 0x181a30u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x181a34: 0x8e22c70c  lw          $v0, -0x38F4($s1)
    ctx->pc = 0x181a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952716)));
    // 0x181a38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181A38u;
    {
        const bool branch_taken_0x181a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181A38u;
            // 0x181a3c: 0xafb0000c  sw          $s0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a38) {
            ctx->pc = 0x181A50u;
            goto label_181a50;
        }
    }
    ctx->pc = 0x181A40u;
    // 0x181a40: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x181A40u;
    SET_GPR_U32(ctx, 31, 0x181A48u);
    ctx->pc = 0x181A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181A40u;
            // 0x181a44: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181A48u; }
        if (ctx->pc != 0x181A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181A48u; }
        if (ctx->pc != 0x181A48u) { return; }
    }
    ctx->pc = 0x181A48u;
    // 0x181a48: 0xae22c70c  sw          $v0, -0x38F4($s1)
    ctx->pc = 0x181a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952716), GPR_U32(ctx, 2));
    // 0x181a4c: 0x0  nop
    ctx->pc = 0x181a4cu;
    // NOP
label_181a50:
    // 0x181a50: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181A50u;
    SET_GPR_U32(ctx, 31, 0x181A58u);
    ctx->pc = 0x181A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181A50u;
            // 0x181a54: 0x8e24c70c  lw          $a0, -0x38F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952716)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181A58u; }
        if (ctx->pc != 0x181A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181A58u; }
        if (ctx->pc != 0x181A58u) { return; }
    }
    ctx->pc = 0x181A58u;
    // 0x181a58: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x181a58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x181a5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x181a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a68: 0xc060292  jal         func_180A48
    ctx->pc = 0x181A68u;
    SET_GPR_U32(ctx, 31, 0x181A70u);
    ctx->pc = 0x181A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181A68u;
            // 0x181a6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A48u;
    if (runtime->hasFunction(0x180A48u)) {
        auto targetFn = runtime->lookupFunction(0x180A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181A70u; }
        if (ctx->pc != 0x181A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A48_0x180a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181A70u; }
        if (ctx->pc != 0x181A70u) { return; }
    }
    ctx->pc = 0x181A70u;
    // 0x181a70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x181a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x181a74: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x181a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x181a78: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x181a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x181a7c: 0x2442ae58  addiu       $v0, $v0, -0x51A8
    ctx->pc = 0x181a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946392));
    // 0x181a80: 0x8e23c7bc  lw          $v1, -0x3844($s1)
    ctx->pc = 0x181a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952892)));
    // 0x181a84: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x181a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x181a88: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x181a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x181a8c: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x181a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x181a90: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181A90u;
    {
        const bool branch_taken_0x181a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181A90u;
            // 0x181a94: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a90) {
            ctx->pc = 0x181AA0u;
            goto label_181aa0;
        }
    }
    ctx->pc = 0x181A98u;
    // 0x181a98: 0xc060468  jal         func_1811A0
    ctx->pc = 0x181A98u;
    SET_GPR_U32(ctx, 31, 0x181AA0u);
    ctx->pc = 0x1811A0u;
    if (runtime->hasFunction(0x1811A0u)) {
        auto targetFn = runtime->lookupFunction(0x1811A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AA0u; }
        if (ctx->pc != 0x181AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001811A0_0x1811a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AA0u; }
        if (ctx->pc != 0x181AA0u) { return; }
    }
    ctx->pc = 0x181AA0u;
label_181aa0:
    // 0x181aa0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181AA0u;
    SET_GPR_U32(ctx, 31, 0x181AA8u);
    ctx->pc = 0x181AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181AA0u;
            // 0x181aa4: 0x8e24c7bc  lw          $a0, -0x3844($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AA8u; }
        if (ctx->pc != 0x181AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AA8u; }
        if (ctx->pc != 0x181AA8u) { return; }
    }
    ctx->pc = 0x181AA8u;
    // 0x181aa8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x181aa8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181aac: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x181aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x181ab0: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x181ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x181ab4: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x181ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x181ab8: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x181ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x181abc: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x181abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181ac0: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x181ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181ac4: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x181ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181ac8: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x181ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181acc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x181accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x181ad0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x181ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x181ad4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x181ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181ad8: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x181ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x181adc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x181adcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x181ae0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x181ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x181ae4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x181ae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181ae8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x181ae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181aec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x181aecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181af0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x181af0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181af4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181af8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x181af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x181afc: 0x3e00008  jr          $ra
    ctx->pc = 0x181AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181AFCu;
            // 0x181b00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181A50u: goto label_181a50;
            case 0x181AA0u: goto label_181aa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x181B04u;
    // 0x181b04: 0x0  nop
    ctx->pc = 0x181b04u;
    // NOP
}
