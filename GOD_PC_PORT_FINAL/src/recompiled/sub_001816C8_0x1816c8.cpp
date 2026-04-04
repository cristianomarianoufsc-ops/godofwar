#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001816C8
// Address: 0x1816c8 - 0x1817d8
void sub_001816C8_0x1816c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001816C8_0x1816c8");
#endif

    ctx->pc = 0x1816c8u;

    // 0x1816c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1816c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1816cc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1816ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1816d0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1816d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1816d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1816d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1816d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1816dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1816dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816e0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1816e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1816e4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1816e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816e8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1816e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1816ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1816ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1816f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1816f4: 0xc08f164  jal         func_23C590
    ctx->pc = 0x1816F4u;
    SET_GPR_U32(ctx, 31, 0x1816FCu);
    ctx->pc = 0x1816F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1816F4u;
            // 0x1816f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C590u;
    if (runtime->hasFunction(0x23C590u)) {
        auto targetFn = runtime->lookupFunction(0x23C590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816FCu; }
        if (ctx->pc != 0x1816FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23c590_0x23c5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816FCu; }
        if (ctx->pc != 0x1816FCu) { return; }
    }
    ctx->pc = 0x1816FCu;
    // 0x1816fc: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1816fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x181700: 0x2708023  subu        $s0, $s3, $s0
    ctx->pc = 0x181700u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x181704: 0x8e22c714  lw          $v0, -0x38EC($s1)
    ctx->pc = 0x181704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952724)));
    // 0x181708: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181708u;
    {
        const bool branch_taken_0x181708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18170Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181708u;
            // 0x18170c: 0xafb0000c  sw          $s0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181708) {
            ctx->pc = 0x181720u;
            goto label_181720;
        }
    }
    ctx->pc = 0x181710u;
    // 0x181710: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x181710u;
    SET_GPR_U32(ctx, 31, 0x181718u);
    ctx->pc = 0x181714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181710u;
            // 0x181714: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181718u; }
        if (ctx->pc != 0x181718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181718u; }
        if (ctx->pc != 0x181718u) { return; }
    }
    ctx->pc = 0x181718u;
    // 0x181718: 0xae22c714  sw          $v0, -0x38EC($s1)
    ctx->pc = 0x181718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952724), GPR_U32(ctx, 2));
    // 0x18171c: 0x0  nop
    ctx->pc = 0x18171cu;
    // NOP
label_181720:
    // 0x181720: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181720u;
    SET_GPR_U32(ctx, 31, 0x181728u);
    ctx->pc = 0x181724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181720u;
            // 0x181724: 0x8e24c714  lw          $a0, -0x38EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952724)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181728u; }
        if (ctx->pc != 0x181728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181728u; }
        if (ctx->pc != 0x181728u) { return; }
    }
    ctx->pc = 0x181728u;
    // 0x181728: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x181728u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x18172c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18172cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181730: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x181730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181738: 0xc060292  jal         func_180A48
    ctx->pc = 0x181738u;
    SET_GPR_U32(ctx, 31, 0x181740u);
    ctx->pc = 0x18173Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181738u;
            // 0x18173c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A48u;
    if (runtime->hasFunction(0x180A48u)) {
        auto targetFn = runtime->lookupFunction(0x180A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181740u; }
        if (ctx->pc != 0x181740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A48_0x180a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181740u; }
        if (ctx->pc != 0x181740u) { return; }
    }
    ctx->pc = 0x181740u;
    // 0x181740: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x181740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181744: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x181744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x181748: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x181748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x18174c: 0x2442ad68  addiu       $v0, $v0, -0x5298
    ctx->pc = 0x18174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946152));
    // 0x181750: 0x8e23c7bc  lw          $v1, -0x3844($s1)
    ctx->pc = 0x181750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952892)));
    // 0x181754: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x181754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x181758: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x181758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x18175c: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x18175cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x181760: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181760u;
    {
        const bool branch_taken_0x181760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181760u;
            // 0x181764: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181760) {
            ctx->pc = 0x181770u;
            goto label_181770;
        }
    }
    ctx->pc = 0x181768u;
    // 0x181768: 0xc060468  jal         func_1811A0
    ctx->pc = 0x181768u;
    SET_GPR_U32(ctx, 31, 0x181770u);
    ctx->pc = 0x1811A0u;
    if (runtime->hasFunction(0x1811A0u)) {
        auto targetFn = runtime->lookupFunction(0x1811A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181770u; }
        if (ctx->pc != 0x181770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001811A0_0x1811a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181770u; }
        if (ctx->pc != 0x181770u) { return; }
    }
    ctx->pc = 0x181770u;
label_181770:
    // 0x181770: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181770u;
    SET_GPR_U32(ctx, 31, 0x181778u);
    ctx->pc = 0x181774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181770u;
            // 0x181774: 0x8e24c7bc  lw          $a0, -0x3844($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181778u; }
        if (ctx->pc != 0x181778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181778u; }
        if (ctx->pc != 0x181778u) { return; }
    }
    ctx->pc = 0x181778u;
    // 0x181778: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x181778u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18177c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x18177cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x181780: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x181780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x181784: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x181784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x181788: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x181788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x18178c: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x18178cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181790: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x181790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181794: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x181794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181798: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x181798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18179c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x18179cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1817a0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1817a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1817a4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1817a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1817a8: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1817a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x1817ac: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1817acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1817b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1817b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1817b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1817b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1817b8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1817b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1817bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1817bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1817c0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1817c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1817c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1817c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1817c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1817c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1817cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1817CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1817D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1817CCu;
            // 0x1817d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181720u: goto label_181720;
            case 0x181770u: goto label_181770;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1817D4u;
    // 0x1817d4: 0x0  nop
    ctx->pc = 0x1817d4u;
    // NOP
}
