#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001818E8
// Address: 0x1818e8 - 0x1819f8
void sub_001818E8_0x1818e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001818E8_0x1818e8");
#endif

    ctx->pc = 0x1818e8u;

    // 0x1818e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1818e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1818ec: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1818ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1818f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1818f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1818f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1818f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1818f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1818fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1818fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181900: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x181900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x181904: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x181904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181908: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x181908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18190c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18190cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181910: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181914: 0xc08f164  jal         func_23C590
    ctx->pc = 0x181914u;
    SET_GPR_U32(ctx, 31, 0x18191Cu);
    ctx->pc = 0x181918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181914u;
            // 0x181918: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C590u;
    if (runtime->hasFunction(0x23C590u)) {
        auto targetFn = runtime->lookupFunction(0x23C590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18191Cu; }
        if (ctx->pc != 0x18191Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23c590_0x23c5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18191Cu; }
        if (ctx->pc != 0x18191Cu) { return; }
    }
    ctx->pc = 0x18191Cu;
    // 0x18191c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x18191cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x181920: 0x2708023  subu        $s0, $s3, $s0
    ctx->pc = 0x181920u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x181924: 0x8e22c708  lw          $v0, -0x38F8($s1)
    ctx->pc = 0x181924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952712)));
    // 0x181928: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181928u;
    {
        const bool branch_taken_0x181928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18192Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181928u;
            // 0x18192c: 0xafb0000c  sw          $s0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181928) {
            ctx->pc = 0x181940u;
            goto label_181940;
        }
    }
    ctx->pc = 0x181930u;
    // 0x181930: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x181930u;
    SET_GPR_U32(ctx, 31, 0x181938u);
    ctx->pc = 0x181934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181930u;
            // 0x181934: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181938u; }
        if (ctx->pc != 0x181938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181938u; }
        if (ctx->pc != 0x181938u) { return; }
    }
    ctx->pc = 0x181938u;
    // 0x181938: 0xae22c708  sw          $v0, -0x38F8($s1)
    ctx->pc = 0x181938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952712), GPR_U32(ctx, 2));
    // 0x18193c: 0x0  nop
    ctx->pc = 0x18193cu;
    // NOP
label_181940:
    // 0x181940: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181940u;
    SET_GPR_U32(ctx, 31, 0x181948u);
    ctx->pc = 0x181944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181940u;
            // 0x181944: 0x8e24c708  lw          $a0, -0x38F8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181948u; }
        if (ctx->pc != 0x181948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181948u; }
        if (ctx->pc != 0x181948u) { return; }
    }
    ctx->pc = 0x181948u;
    // 0x181948: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x181948u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x18194c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18194cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181950: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x181950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181958: 0xc060292  jal         func_180A48
    ctx->pc = 0x181958u;
    SET_GPR_U32(ctx, 31, 0x181960u);
    ctx->pc = 0x18195Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181958u;
            // 0x18195c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A48u;
    if (runtime->hasFunction(0x180A48u)) {
        auto targetFn = runtime->lookupFunction(0x180A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181960u; }
        if (ctx->pc != 0x181960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A48_0x180a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181960u; }
        if (ctx->pc != 0x181960u) { return; }
    }
    ctx->pc = 0x181960u;
    // 0x181960: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x181960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x181964: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x181964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x181968: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x181968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x18196c: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x18196cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
    // 0x181970: 0x8e23c7bc  lw          $v1, -0x3844($s1)
    ctx->pc = 0x181970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952892)));
    // 0x181974: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x181974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x181978: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x181978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x18197c: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x18197cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x181980: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181980u;
    {
        const bool branch_taken_0x181980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181980u;
            // 0x181984: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181980) {
            ctx->pc = 0x181990u;
            goto label_181990;
        }
    }
    ctx->pc = 0x181988u;
    // 0x181988: 0xc060468  jal         func_1811A0
    ctx->pc = 0x181988u;
    SET_GPR_U32(ctx, 31, 0x181990u);
    ctx->pc = 0x1811A0u;
    if (runtime->hasFunction(0x1811A0u)) {
        auto targetFn = runtime->lookupFunction(0x1811A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181990u; }
        if (ctx->pc != 0x181990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001811A0_0x1811a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181990u; }
        if (ctx->pc != 0x181990u) { return; }
    }
    ctx->pc = 0x181990u;
label_181990:
    // 0x181990: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181990u;
    SET_GPR_U32(ctx, 31, 0x181998u);
    ctx->pc = 0x181994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181990u;
            // 0x181994: 0x8e24c7bc  lw          $a0, -0x3844($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181998u; }
        if (ctx->pc != 0x181998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181998u; }
        if (ctx->pc != 0x181998u) { return; }
    }
    ctx->pc = 0x181998u;
    // 0x181998: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x181998u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18199c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x18199cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1819a0: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1819a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1819a4: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x1819a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1819a8: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x1819a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1819ac: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x1819acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1819b0: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x1819b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1819b4: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x1819b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1819b8: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x1819b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1819bc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1819bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1819c0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1819c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1819c4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1819c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1819c8: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1819c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x1819cc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1819ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1819d0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1819d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1819d4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1819d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1819d8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1819d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1819dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1819dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1819e0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1819e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1819e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1819e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1819e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1819e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1819ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1819ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1819F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1819ECu;
            // 0x1819f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181940u: goto label_181940;
            case 0x181990u: goto label_181990;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1819F4u;
    // 0x1819f4: 0x0  nop
    ctx->pc = 0x1819f4u;
    // NOP
}
