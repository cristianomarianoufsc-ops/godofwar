#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00229148
// Address: 0x229148 - 0x229290
void sub_00229148_0x229148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229148_0x229148");
#endif

    ctx->pc = 0x229148u;

    // 0x229148: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x229148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22914c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22914cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x229150: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x229150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x229154: 0x24429190  addiu       $v0, $v0, -0x6E70
    ctx->pc = 0x229154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939024));
    // 0x229158: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x229158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x22915c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22915cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229160: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x229160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x229164: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x229164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x229168: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x229168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x22916c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x229170: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x229170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x229174: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x229174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x229178: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x229178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x22917c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x22917cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x229180: 0xa6200010  sh          $zero, 0x10($s1)
    ctx->pc = 0x229180u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x229184: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x229184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x229188: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x229188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22918c: 0x0  nop
    ctx->pc = 0x22918cu;
    // NOP
label_229190:
    // 0x229190: 0x0  nop
    ctx->pc = 0x229190u;
    // NOP
    // 0x229194: 0x0  nop
    ctx->pc = 0x229194u;
    // NOP
    // 0x229198: 0x0  nop
    ctx->pc = 0x229198u;
    // NOP
    // 0x22919c: 0x0  nop
    ctx->pc = 0x22919cu;
    // NOP
    // 0x2291a0: 0x0  nop
    ctx->pc = 0x2291a0u;
    // NOP
    // 0x2291a4: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2291A4u;
    {
        const bool branch_taken_0x2291a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2291A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2291A4u;
            // 0x2291a8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291a4) {
            ctx->pc = 0x229190u;
            runtime->cooperativeGuestYield();
            goto label_229190;
        }
    }
    ctx->pc = 0x2291ACu;
    // 0x2291ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2291acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2291b0: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x2291b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2291b4: 0x0  nop
    ctx->pc = 0x2291b4u;
    // NOP
label_2291b8:
    // 0x2291b8: 0x3c13002b  lui         $s3, 0x2B
    ctx->pc = 0x2291b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)43 << 16));
    // 0x2291bc: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x2291bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2291c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2291c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2291c4: 0x26651300  addiu       $a1, $s3, 0x1300
    ctx->pc = 0x2291c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4864));
    // 0x2291c8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2291c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2291cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2291ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2291d0: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x2291D0u;
    SET_GPR_U32(ctx, 31, 0x2291D8u);
    ctx->pc = 0x2291D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2291D0u;
            // 0x2291d4: 0x518021  addu        $s0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2291D8u; }
        if (ctx->pc != 0x2291D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2291D8u; }
        if (ctx->pc != 0x2291D8u) { return; }
    }
    ctx->pc = 0x2291D8u;
    // 0x2291d8: 0xa3a00017  sb          $zero, 0x17($sp)
    ctx->pc = 0x2291d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x2291dc: 0x2a420014  slti        $v0, $s2, 0x14
    ctx->pc = 0x2291dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2291e0: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x2291e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2291e4: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x2291e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2291e8: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x2291e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2291ec: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x2291ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2291f0: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x2291f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2291f4: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x2291f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2291f8: 0xb203001f  sdl         $v1, 0x1F($s0)
    ctx->pc = 0x2291f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2291fc: 0xb6030018  sdr         $v1, 0x18($s0)
    ctx->pc = 0x2291fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229200: 0xb2040027  sdl         $a0, 0x27($s0)
    ctx->pc = 0x229200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229204: 0xb6040020  sdr         $a0, 0x20($s0)
    ctx->pc = 0x229204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229208: 0xb205002f  sdl         $a1, 0x2F($s0)
    ctx->pc = 0x229208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22920c: 0xb6050028  sdr         $a1, 0x28($s0)
    ctx->pc = 0x22920cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229210: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x229210u;
    {
        const bool branch_taken_0x229210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229210u;
            // 0x229214: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229210) {
            ctx->pc = 0x2291B8u;
            runtime->cooperativeGuestYield();
            goto label_2291b8;
        }
    }
    ctx->pc = 0x229218u;
    // 0x229218: 0x26651300  addiu       $a1, $s3, 0x1300
    ctx->pc = 0x229218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4864));
    // 0x22921c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22921cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x229220: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x229220u;
    SET_GPR_U32(ctx, 31, 0x229228u);
    ctx->pc = 0x229224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229220u;
            // 0x229224: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229228u; }
        if (ctx->pc != 0x229228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229228u; }
        if (ctx->pc != 0x229228u) { return; }
    }
    ctx->pc = 0x229228u;
    // 0x229228: 0xa3a00037  sb          $zero, 0x37($sp)
    ctx->pc = 0x229228u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x22922c: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x22922cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x229230: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x229230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229234: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x229234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x229238: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x229238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x22923c: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x22923cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x229240: 0x6ba4002f  ldl         $a0, 0x2F($sp)
    ctx->pc = 0x229240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x229244: 0x6fa40028  ldr         $a0, 0x28($sp)
    ctx->pc = 0x229244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x229248: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x229248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x22924c: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x22924cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x229250: 0xb22701ff  sdl         $a3, 0x1FF($s1)
    ctx->pc = 0x229250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 511); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229254: 0xb62701f8  sdr         $a3, 0x1F8($s1)
    ctx->pc = 0x229254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 504); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229258: 0xb2240207  sdl         $a0, 0x207($s1)
    ctx->pc = 0x229258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 519); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22925c: 0xb6240200  sdr         $a0, 0x200($s1)
    ctx->pc = 0x22925cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 512); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229260: 0xb225020f  sdl         $a1, 0x20F($s1)
    ctx->pc = 0x229260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 527); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229264: 0xb6250208  sdr         $a1, 0x208($s1)
    ctx->pc = 0x229264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 520); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229268: 0xae23021c  sw          $v1, 0x21C($s1)
    ctx->pc = 0x229268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 3));
    // 0x22926c: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x22926cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
    // 0x229270: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x229270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
    // 0x229274: 0xae230218  sw          $v1, 0x218($s1)
    ctx->pc = 0x229274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 3));
    // 0x229278: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x229278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22927c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x22927cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229280: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x229280u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229284: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x229284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229288: 0x3e00008  jr          $ra
    ctx->pc = 0x229288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22928Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229288u;
            // 0x22928c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229190u: goto label_229190;
            case 0x2291B8u: goto label_2291b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x229290u;
}
