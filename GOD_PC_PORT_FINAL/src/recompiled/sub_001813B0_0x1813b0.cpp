#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001813B0
// Address: 0x1813b0 - 0x1814b8
void sub_001813B0_0x1813b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001813B0_0x1813b0");
#endif

    ctx->pc = 0x1813b0u;

    // 0x1813b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1813b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1813b4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1813b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1813b8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1813b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1813bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1813bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1813c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1813c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1813c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813c8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1813c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1813cc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1813ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1813d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1813d4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1813d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1813d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1813dc: 0xc08f164  jal         func_23C590
    ctx->pc = 0x1813DCu;
    SET_GPR_U32(ctx, 31, 0x1813E4u);
    ctx->pc = 0x1813E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1813DCu;
            // 0x1813e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C590u;
    if (runtime->hasFunction(0x23C590u)) {
        auto targetFn = runtime->lookupFunction(0x23C590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1813E4u; }
        if (ctx->pc != 0x1813E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23c590_0x23c5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1813E4u; }
        if (ctx->pc != 0x1813E4u) { return; }
    }
    ctx->pc = 0x1813E4u;
    // 0x1813e4: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1813e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x1813e8: 0x2708023  subu        $s0, $s3, $s0
    ctx->pc = 0x1813e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1813ec: 0x8e22c708  lw          $v0, -0x38F8($s1)
    ctx->pc = 0x1813ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952712)));
    // 0x1813f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1813F0u;
    {
        const bool branch_taken_0x1813f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1813F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1813F0u;
            // 0x1813f4: 0xafb0000c  sw          $s0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813f0) {
            ctx->pc = 0x181408u;
            goto label_181408;
        }
    }
    ctx->pc = 0x1813F8u;
    // 0x1813f8: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1813F8u;
    SET_GPR_U32(ctx, 31, 0x181400u);
    ctx->pc = 0x1813FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1813F8u;
            // 0x1813fc: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181400u; }
        if (ctx->pc != 0x181400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181400u; }
        if (ctx->pc != 0x181400u) { return; }
    }
    ctx->pc = 0x181400u;
    // 0x181400: 0xae22c708  sw          $v0, -0x38F8($s1)
    ctx->pc = 0x181400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952712), GPR_U32(ctx, 2));
    // 0x181404: 0x0  nop
    ctx->pc = 0x181404u;
    // NOP
label_181408:
    // 0x181408: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181408u;
    SET_GPR_U32(ctx, 31, 0x181410u);
    ctx->pc = 0x18140Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181408u;
            // 0x18140c: 0x8e24c708  lw          $a0, -0x38F8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181410u; }
        if (ctx->pc != 0x181410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181410u; }
        if (ctx->pc != 0x181410u) { return; }
    }
    ctx->pc = 0x181410u;
    // 0x181410: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x181410u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x181414: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181418: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x181418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18141c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18141cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181420: 0xc060292  jal         func_180A48
    ctx->pc = 0x181420u;
    SET_GPR_U32(ctx, 31, 0x181428u);
    ctx->pc = 0x181424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181420u;
            // 0x181424: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A48u;
    if (runtime->hasFunction(0x180A48u)) {
        auto targetFn = runtime->lookupFunction(0x180A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181428u; }
        if (ctx->pc != 0x181428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A48_0x180a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181428u; }
        if (ctx->pc != 0x181428u) { return; }
    }
    ctx->pc = 0x181428u;
    // 0x181428: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x181428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x18142c: 0x8e23c7bc  lw          $v1, -0x3844($s1)
    ctx->pc = 0x18142cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952892)));
    // 0x181430: 0x24420218  addiu       $v0, $v0, 0x218
    ctx->pc = 0x181430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 536));
    // 0x181434: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x181434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x181438: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x181438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x18143c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x18143cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x181440: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x181440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x181444: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181444u;
    {
        const bool branch_taken_0x181444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181444u;
            // 0x181448: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181444) {
            ctx->pc = 0x181454u;
            goto label_181454;
        }
    }
    ctx->pc = 0x18144Cu;
    // 0x18144c: 0xc060468  jal         func_1811A0
    ctx->pc = 0x18144Cu;
    SET_GPR_U32(ctx, 31, 0x181454u);
    ctx->pc = 0x1811A0u;
    if (runtime->hasFunction(0x1811A0u)) {
        auto targetFn = runtime->lookupFunction(0x1811A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181454u; }
        if (ctx->pc != 0x181454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001811A0_0x1811a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181454u; }
        if (ctx->pc != 0x181454u) { return; }
    }
    ctx->pc = 0x181454u;
label_181454:
    // 0x181454: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181454u;
    SET_GPR_U32(ctx, 31, 0x18145Cu);
    ctx->pc = 0x181458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181454u;
            // 0x181458: 0x8e24c7bc  lw          $a0, -0x3844($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18145Cu; }
        if (ctx->pc != 0x18145Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18145Cu; }
        if (ctx->pc != 0x18145Cu) { return; }
    }
    ctx->pc = 0x18145Cu;
    // 0x18145c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18145cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181460: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x181460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x181464: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x181464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x181468: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x181468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x18146c: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x18146cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x181470: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x181470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181474: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x181474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181478: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x181478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18147c: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x18147cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181480: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x181480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x181484: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x181484u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x181488: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x181488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18148c: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x18148cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x181490: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x181490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x181494: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x181494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x181498: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x181498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18149c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18149cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1814a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1814a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1814a4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1814a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1814a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1814a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1814ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1814acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1814b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1814B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1814B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1814B0u;
            // 0x1814b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181408u: goto label_181408;
            case 0x181454u: goto label_181454;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1814B8u;
}
