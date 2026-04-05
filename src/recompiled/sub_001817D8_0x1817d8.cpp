#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001817D8
// Address: 0x1817d8 - 0x1818e8
void sub_001817D8_0x1817d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001817D8_0x1817d8");
#endif

    ctx->pc = 0x1817d8u;

    // 0x1817d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1817d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1817dc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1817dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1817e0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1817e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1817e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1817e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1817e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1817e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1817ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1817ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1817f0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1817f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1817f4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1817f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1817f8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1817f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1817fc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1817fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181800: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181804: 0xc08f164  jal         func_23C590
    ctx->pc = 0x181804u;
    SET_GPR_U32(ctx, 31, 0x18180Cu);
    ctx->pc = 0x181808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181804u;
            // 0x181808: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C590u;
    if (runtime->hasFunction(0x23C590u)) {
        auto targetFn = runtime->lookupFunction(0x23C590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18180Cu; }
        if (ctx->pc != 0x18180Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23c590_0x23c5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18180Cu; }
        if (ctx->pc != 0x18180Cu) { return; }
    }
    ctx->pc = 0x18180Cu;
    // 0x18180c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x18180cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x181810: 0x2708023  subu        $s0, $s3, $s0
    ctx->pc = 0x181810u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x181814: 0x8e22c710  lw          $v0, -0x38F0($s1)
    ctx->pc = 0x181814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952720)));
    // 0x181818: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181818u;
    {
        const bool branch_taken_0x181818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18181Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181818u;
            // 0x18181c: 0xafb0000c  sw          $s0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181818) {
            ctx->pc = 0x181830u;
            goto label_181830;
        }
    }
    ctx->pc = 0x181820u;
    // 0x181820: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x181820u;
    SET_GPR_U32(ctx, 31, 0x181828u);
    ctx->pc = 0x181824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181820u;
            // 0x181824: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181828u; }
        if (ctx->pc != 0x181828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181828u; }
        if (ctx->pc != 0x181828u) { return; }
    }
    ctx->pc = 0x181828u;
    // 0x181828: 0xae22c710  sw          $v0, -0x38F0($s1)
    ctx->pc = 0x181828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952720), GPR_U32(ctx, 2));
    // 0x18182c: 0x0  nop
    ctx->pc = 0x18182cu;
    // NOP
label_181830:
    // 0x181830: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181830u;
    SET_GPR_U32(ctx, 31, 0x181838u);
    ctx->pc = 0x181834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181830u;
            // 0x181834: 0x8e24c710  lw          $a0, -0x38F0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952720)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181838u; }
        if (ctx->pc != 0x181838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181838u; }
        if (ctx->pc != 0x181838u) { return; }
    }
    ctx->pc = 0x181838u;
    // 0x181838: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x181838u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x18183c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18183cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181840: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x181840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181848: 0xc060292  jal         func_180A48
    ctx->pc = 0x181848u;
    SET_GPR_U32(ctx, 31, 0x181850u);
    ctx->pc = 0x18184Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181848u;
            // 0x18184c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A48u;
    if (runtime->hasFunction(0x180A48u)) {
        auto targetFn = runtime->lookupFunction(0x180A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181850u; }
        if (ctx->pc != 0x181850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A48_0x180a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181850u; }
        if (ctx->pc != 0x181850u) { return; }
    }
    ctx->pc = 0x181850u;
    // 0x181850: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181854: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x181854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x181858: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x181858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x18185c: 0x2442ade0  addiu       $v0, $v0, -0x5220
    ctx->pc = 0x18185cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946272));
    // 0x181860: 0x8e23c7bc  lw          $v1, -0x3844($s1)
    ctx->pc = 0x181860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952892)));
    // 0x181864: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x181864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x181868: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x181868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x18186c: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x18186cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x181870: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181870u;
    {
        const bool branch_taken_0x181870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181870u;
            // 0x181874: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181870) {
            ctx->pc = 0x181880u;
            goto label_181880;
        }
    }
    ctx->pc = 0x181878u;
    // 0x181878: 0xc060468  jal         func_1811A0
    ctx->pc = 0x181878u;
    SET_GPR_U32(ctx, 31, 0x181880u);
    ctx->pc = 0x1811A0u;
    if (runtime->hasFunction(0x1811A0u)) {
        auto targetFn = runtime->lookupFunction(0x1811A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181880u; }
        if (ctx->pc != 0x181880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001811A0_0x1811a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181880u; }
        if (ctx->pc != 0x181880u) { return; }
    }
    ctx->pc = 0x181880u;
label_181880:
    // 0x181880: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181880u;
    SET_GPR_U32(ctx, 31, 0x181888u);
    ctx->pc = 0x181884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181880u;
            // 0x181884: 0x8e24c7bc  lw          $a0, -0x3844($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181888u; }
        if (ctx->pc != 0x181888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181888u; }
        if (ctx->pc != 0x181888u) { return; }
    }
    ctx->pc = 0x181888u;
    // 0x181888: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x181888u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18188c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x18188cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x181890: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x181890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x181894: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x181894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x181898: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x181898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x18189c: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x18189cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1818a0: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x1818a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1818a4: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x1818a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1818a8: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x1818a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1818ac: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1818acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1818b0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1818b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1818b4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1818b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1818b8: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1818b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x1818bc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1818bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1818c0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1818c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1818c4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1818c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1818c8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1818c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1818cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1818ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1818d0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1818d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1818d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1818d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1818d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1818d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1818dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1818DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1818E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1818DCu;
            // 0x1818e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181830u: goto label_181830;
            case 0x181880u: goto label_181880;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1818E4u;
    // 0x1818e4: 0x0  nop
    ctx->pc = 0x1818e4u;
    // NOP
}
