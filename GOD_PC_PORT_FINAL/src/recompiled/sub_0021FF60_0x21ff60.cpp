#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021FF60
// Address: 0x21ff60 - 0x220790
void sub_0021FF60_0x21ff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FF60_0x21ff60");
#endif

    ctx->pc = 0x21ff60u;

    // 0x21ff60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x21ff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x21ff64: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21ff68: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x21ff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x21ff6c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x21ff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x21ff70: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x21ff70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x21ff74: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x21ff74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x21ff78: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x21ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x21ff7c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x21ff7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x21ff80: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x21ff80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x21ff84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21ff84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21ff88: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x21ff88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x21ff8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21ff8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21ff90: 0xc04f824  jal         func_13E090
    ctx->pc = 0x21FF90u;
    SET_GPR_U32(ctx, 31, 0x21FF98u);
    ctx->pc = 0x21FF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FF90u;
            // 0x21ff94: 0xac404f50  sw          $zero, 0x4F50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FF98u; }
        if (ctx->pc != 0x21FF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FF98u; }
        if (ctx->pc != 0x21FF98u) { return; }
    }
    ctx->pc = 0x21FF98u;
    // 0x21ff98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21ff98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff9c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x21ff9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x21ffa0: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x21FFA0u;
    SET_GPR_U32(ctx, 31, 0x21FFA8u);
    ctx->pc = 0x21FFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FFA0u;
            // 0x21ffa4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FFA8u; }
        if (ctx->pc != 0x21FFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FFA8u; }
        if (ctx->pc != 0x21FFA8u) { return; }
    }
    ctx->pc = 0x21FFA8u;
    // 0x21ffa8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x21ffa8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21ffacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffb0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21ffb4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x21ffb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21ffb8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x21ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x21ffbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21ffbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffc0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21ffc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffc4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x21ffc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ffc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x21ffc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21ffccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffd0: 0xc0530e2  jal         func_14C388
    ctx->pc = 0x21FFD0u;
    SET_GPR_U32(ctx, 31, 0x21FFD8u);
    ctx->pc = 0x21FFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FFD0u;
            // 0x21ffd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C388u;
    if (runtime->hasFunction(0x14C388u)) {
        auto targetFn = runtime->lookupFunction(0x14C388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FFD8u; }
        if (ctx->pc != 0x21FFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14c388_0x14c3c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FFD8u; }
        if (ctx->pc != 0x21FFD8u) { return; }
    }
    ctx->pc = 0x21FFD8u;
    // 0x21ffd8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ffdc: 0x2446e618  addiu       $a2, $v0, -0x19E8
    ctx->pc = 0x21ffdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960664));
    // 0x21ffe0: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x21ffe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x21ffe4: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x21ffe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21ffe8: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x21ffe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x21ffec: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x21ffecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x21fff0: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x21fff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x21fff4: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x21fff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x21fff8: 0xb2c30017  sdl         $v1, 0x17($s6)
    ctx->pc = 0x21fff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21fffc: 0xb6c30010  sdr         $v1, 0x10($s6)
    ctx->pc = 0x21fffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220000: 0xb2c4001f  sdl         $a0, 0x1F($s6)
    ctx->pc = 0x220000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220004: 0xb6c40018  sdr         $a0, 0x18($s6)
    ctx->pc = 0x220004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220008: 0xb2c50027  sdl         $a1, 0x27($s6)
    ctx->pc = 0x220008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22000c: 0xb6c50020  sdr         $a1, 0x20($s6)
    ctx->pc = 0x22000cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220010: 0x68c3001f  ldl         $v1, 0x1F($a2)
    ctx->pc = 0x220010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x220014: 0x6cc30018  ldr         $v1, 0x18($a2)
    ctx->pc = 0x220014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x220018: 0x68c40027  ldl         $a0, 0x27($a2)
    ctx->pc = 0x220018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x22001c: 0x6cc40020  ldr         $a0, 0x20($a2)
    ctx->pc = 0x22001cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x220020: 0x68c5002f  ldl         $a1, 0x2F($a2)
    ctx->pc = 0x220020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x220024: 0x6cc50028  ldr         $a1, 0x28($a2)
    ctx->pc = 0x220024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x220028: 0xb2c3002f  sdl         $v1, 0x2F($s6)
    ctx->pc = 0x220028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22002c: 0xb6c30028  sdr         $v1, 0x28($s6)
    ctx->pc = 0x22002cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220030: 0xb2c40037  sdl         $a0, 0x37($s6)
    ctx->pc = 0x220030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220034: 0xb6c40030  sdr         $a0, 0x30($s6)
    ctx->pc = 0x220034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220038: 0xb2c5003f  sdl         $a1, 0x3F($s6)
    ctx->pc = 0x220038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22003c: 0xb6c50038  sdr         $a1, 0x38($s6)
    ctx->pc = 0x22003cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220040: 0x68c30037  ldl         $v1, 0x37($a2)
    ctx->pc = 0x220040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x220044: 0x6cc30030  ldr         $v1, 0x30($a2)
    ctx->pc = 0x220044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x220048: 0x68c4003f  ldl         $a0, 0x3F($a2)
    ctx->pc = 0x220048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x22004c: 0x6cc40038  ldr         $a0, 0x38($a2)
    ctx->pc = 0x22004cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x220050: 0xb2c30047  sdl         $v1, 0x47($s6)
    ctx->pc = 0x220050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220054: 0xb6c30040  sdr         $v1, 0x40($s6)
    ctx->pc = 0x220054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220058: 0xb2c4004f  sdl         $a0, 0x4F($s6)
    ctx->pc = 0x220058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22005c: 0xb6c40048  sdr         $a0, 0x48($s6)
    ctx->pc = 0x22005cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220060: 0xc04f824  jal         func_13E090
    ctx->pc = 0x220060u;
    SET_GPR_U32(ctx, 31, 0x220068u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220068u; }
        if (ctx->pc != 0x220068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220068u; }
        if (ctx->pc != 0x220068u) { return; }
    }
    ctx->pc = 0x220068u;
    // 0x220068: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x220068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x22006c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22006cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220070: 0x34a5c010  ori         $a1, $a1, 0xC010
    ctx->pc = 0x220070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49168);
    // 0x220074: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x220074u;
    SET_GPR_U32(ctx, 31, 0x22007Cu);
    ctx->pc = 0x220078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220074u;
            // 0x220078: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22007Cu; }
        if (ctx->pc != 0x22007Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22007Cu; }
        if (ctx->pc != 0x22007Cu) { return; }
    }
    ctx->pc = 0x22007Cu;
    // 0x22007c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x22007cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220080: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220084: 0x24021c00  addiu       $v0, $zero, 0x1C00
    ctx->pc = 0x220084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
    // 0x220088: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x220088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22008c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22008cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x220090: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x220090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x220094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220098: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x220098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22009c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22009cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2200a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200a4: 0xc0530e2  jal         func_14C388
    ctx->pc = 0x2200A4u;
    SET_GPR_U32(ctx, 31, 0x2200ACu);
    ctx->pc = 0x2200A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2200A4u;
            // 0x2200a8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C388u;
    if (runtime->hasFunction(0x14C388u)) {
        auto targetFn = runtime->lookupFunction(0x14C388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2200ACu; }
        if (ctx->pc != 0x2200ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14c388_0x14c3c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2200ACu; }
        if (ctx->pc != 0x2200ACu) { return; }
    }
    ctx->pc = 0x2200ACu;
    // 0x2200ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2200acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200b0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2200b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2200b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2200b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_2200b8:
    // 0x2200b8: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x2200b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2200bc: 0x2442e658  addiu       $v0, $v0, -0x19A8
    ctx->pc = 0x2200bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960728));
    // 0x2200c0: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x2200c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2200c4: 0x90650001  lbu         $a1, 0x1($v1)
    ctx->pc = 0x2200c4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2200c8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2200c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200cc: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x2200ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2200d0: 0x85280a  movz        $a1, $a0, $a1
    ctx->pc = 0x2200d0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x2200d4: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2200D4u;
    {
        const bool branch_taken_0x2200d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2200D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2200D4u;
            // 0x2200d8: 0x90470000  lbu         $a3, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200d4) {
            ctx->pc = 0x220104u;
            goto label_220104;
        }
    }
    ctx->pc = 0x2200DCu;
    // 0x2200dc: 0xd71821  addu        $v1, $a2, $s7
    ctx->pc = 0x2200dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x2200e0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2200e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200e4: 0x0  nop
    ctx->pc = 0x2200e4u;
    // NOP
label_2200e8:
    // 0x2200e8: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x2200e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x2200ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2200ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2200f0: 0x0  nop
    ctx->pc = 0x2200f0u;
    // NOP
    // 0x2200f4: 0x0  nop
    ctx->pc = 0x2200f4u;
    // NOP
    // 0x2200f8: 0x0  nop
    ctx->pc = 0x2200f8u;
    // NOP
    // 0x2200fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2200FCu;
    {
        const bool branch_taken_0x2200fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2200FCu;
            // 0x220100: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200fc) {
            ctx->pc = 0x2200E8u;
            runtime->cooperativeGuestYield();
            goto label_2200e8;
        }
    }
    ctx->pc = 0x220104u;
label_220104:
    // 0x220104: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x220104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x220108: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x220108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x22010c: 0x3442c00f  ori         $v0, $v0, 0xC00F
    ctx->pc = 0x22010cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49167);
    // 0x220110: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x220110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x220114: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x220114u;
    {
        const bool branch_taken_0x220114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220114u;
            // 0x220118: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220114) {
            ctx->pc = 0x2200B8u;
            runtime->cooperativeGuestYield();
            goto label_2200b8;
        }
    }
    ctx->pc = 0x22011Cu;
    // 0x22011c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x22011cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x220120: 0x8c501048  lw          $s0, 0x1048($v0)
    ctx->pc = 0x220120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4168)));
    // 0x220124: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x220124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x220128: 0x8c43ed60  lw          $v1, -0x12A0($v0)
    ctx->pc = 0x220128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962528)));
    // 0x22012c: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x22012cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x220130: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x220130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x220134: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x220134u;
    {
        const bool branch_taken_0x220134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220134) {
            ctx->pc = 0x220138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x220134u;
            // 0x220138: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x220160u;
            goto label_220160;
        }
    }
    ctx->pc = 0x22013Cu;
    // 0x22013c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x22013cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x220140: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x220140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x220144: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x220144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x220148: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x220148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x22014c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22014cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220150: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x220150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x220154: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x220154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220158: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x220158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x22015c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x22015cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_220160:
    // 0x220160: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x220160u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x220164: 0x8c83ed60  lw          $v1, -0x12A0($a0)
    ctx->pc = 0x220164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294962528)));
    // 0x220168: 0x24c5ed68  addiu       $a1, $a2, -0x1298
    ctx->pc = 0x220168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962536));
    // 0x22016c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x22016cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x220170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220174: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x220174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x220178: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x220178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22017c: 0xacc3ed60  sw          $v1, -0x12A0($a2)
    ctx->pc = 0x22017cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294962528), GPR_U32(ctx, 3));
    // 0x220180: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x220180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x220184: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x220184u;
    SET_GPR_U32(ctx, 31, 0x22018Cu);
    ctx->pc = 0x220188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220184u;
            // 0x220188: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22018Cu; }
        if (ctx->pc != 0x22018Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22018Cu; }
        if (ctx->pc != 0x22018Cu) { return; }
    }
    ctx->pc = 0x22018Cu;
    // 0x22018c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x22018cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x220190: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x220190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x220194: 0x2446bb98  addiu       $a2, $v0, -0x4468
    ctx->pc = 0x220194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949784));
    // 0x220198: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x220198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x22019c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x22019cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2201a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2201a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2201a4: 0x8c64382c  lw          $a0, 0x382C($v1)
    ctx->pc = 0x2201a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14380)));
    // 0x2201a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2201a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2201ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2201acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2201b0: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x2201b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x2201b4: 0x48940  sll         $s1, $a0, 5
    ctx->pc = 0x2201b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2201b8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2201b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2201bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2201bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2201c0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2201c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x2201c4: 0x48140  sll         $s0, $a0, 5
    ctx->pc = 0x2201c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2201c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2201c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2201ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201d0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2201d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2201d4: 0xc0530f2  jal         func_14C3C8
    ctx->pc = 0x2201D4u;
    SET_GPR_U32(ctx, 31, 0x2201DCu);
    ctx->pc = 0x2201D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2201D4u;
            // 0x2201d8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C3C8u;
    if (runtime->hasFunction(0x14C3C8u)) {
        auto targetFn = runtime->lookupFunction(0x14C3C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2201DCu; }
        if (ctx->pc != 0x2201DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C3C8_0x14c3c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2201DCu; }
        if (ctx->pc != 0x2201DCu) { return; }
    }
    ctx->pc = 0x2201DCu;
    // 0x2201dc: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x2201dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x2201e0: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x2201e0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x2201e4: 0x8fc7f168  lw          $a3, -0xE98($fp)
    ctx->pc = 0x2201e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x2201e8: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x2201e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x2201ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2201ECu;
    {
        const bool branch_taken_0x2201ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2201F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2201ECu;
            // 0x2201f0: 0x34840005  ori         $a0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201ec) {
            ctx->pc = 0x220214u;
            goto label_220214;
        }
    }
    ctx->pc = 0x2201F4u;
    // 0x2201f4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2201f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_2201f8:
    // 0x2201f8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2201f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2201fc: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x2201fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x220200: 0x0  nop
    ctx->pc = 0x220200u;
    // NOP
    // 0x220204: 0x0  nop
    ctx->pc = 0x220204u;
    // NOP
    // 0x220208: 0x0  nop
    ctx->pc = 0x220208u;
    // NOP
    // 0x22020c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22020Cu;
    {
        const bool branch_taken_0x22020c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22020c) {
            ctx->pc = 0x220210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22020Cu;
            // 0x220210: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2201F8u;
            runtime->cooperativeGuestYield();
            goto label_2201f8;
        }
    }
    ctx->pc = 0x220214u;
label_220214:
    // 0x220214: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x220214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x220218: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x220218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x22021c: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x22021cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x220220: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x220220u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x220224: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x220224u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x220228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22022c: 0xacf60004  sw          $s6, 0x4($a3)
    ctx->pc = 0x22022cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 22));
    // 0x220230: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x220230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x220234: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x220234u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x220238: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x220238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22023c: 0xafc3f168  sw          $v1, -0xE98($fp)
    ctx->pc = 0x22023cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294963560), GPR_U32(ctx, 3));
    // 0x220240: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x220240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x220244: 0xc0530f2  jal         func_14C3C8
    ctx->pc = 0x220244u;
    SET_GPR_U32(ctx, 31, 0x22024Cu);
    ctx->pc = 0x220248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220244u;
            // 0x220248: 0x240801c0  addiu       $t0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C3C8u;
    if (runtime->hasFunction(0x14C3C8u)) {
        auto targetFn = runtime->lookupFunction(0x14C3C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22024Cu; }
        if (ctx->pc != 0x22024Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C3C8_0x14c3c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22024Cu; }
        if (ctx->pc != 0x22024Cu) { return; }
    }
    ctx->pc = 0x22024Cu;
    // 0x22024c: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x22024cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x220250: 0x8fc5f168  lw          $a1, -0xE98($fp)
    ctx->pc = 0x220250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x220254: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x220254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x220258: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x220258u;
    {
        const bool branch_taken_0x220258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22025Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220258u;
            // 0x22025c: 0x34841c01  ori         $a0, $a0, 0x1C01 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)7169);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220258) {
            ctx->pc = 0x220284u;
            goto label_220284;
        }
    }
    ctx->pc = 0x220260u;
    // 0x220260: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x220260u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x220264: 0x0  nop
    ctx->pc = 0x220264u;
    // NOP
label_220268:
    // 0x220268: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x220268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x22026c: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x22026cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x220270: 0x0  nop
    ctx->pc = 0x220270u;
    // NOP
    // 0x220274: 0x0  nop
    ctx->pc = 0x220274u;
    // NOP
    // 0x220278: 0x0  nop
    ctx->pc = 0x220278u;
    // NOP
    // 0x22027c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22027Cu;
    {
        const bool branch_taken_0x22027c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22027c) {
            ctx->pc = 0x220280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22027Cu;
            // 0x220280: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x220268u;
            runtime->cooperativeGuestYield();
            goto label_220268;
        }
    }
    ctx->pc = 0x220284u;
label_220284:
    // 0x220284: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x220284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x220288: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x220288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x22028c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x22028cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x220290: 0x34421c01  ori         $v0, $v0, 0x1C01
    ctx->pc = 0x220290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7169);
    // 0x220294: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x220294u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x220298: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x220298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x22029c: 0xafc3f168  sw          $v1, -0xE98($fp)
    ctx->pc = 0x22029cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294963560), GPR_U32(ctx, 3));
    // 0x2202a0: 0x3c140030  lui         $s4, 0x30
    ctx->pc = 0x2202a0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)48 << 16));
    // 0x2202a4: 0xacb70004  sw          $s7, 0x4($a1)
    ctx->pc = 0x2202a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 23));
    // 0x2202a8: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x2202A8u;
    SET_GPR_U32(ctx, 31, 0x2202B0u);
    ctx->pc = 0x2202ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2202A8u;
            // 0x2202ac: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2202B0u; }
        if (ctx->pc != 0x2202B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2202B0u; }
        if (ctx->pc != 0x2202B0u) { return; }
    }
    ctx->pc = 0x2202B0u;
    // 0x2202b0: 0x8fc2f168  lw          $v0, -0xE98($fp)
    ctx->pc = 0x2202b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x2202b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2202b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2202b8: 0x8fc2f168  lw          $v0, -0xE98($fp)
    ctx->pc = 0x2202b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x2202bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2202bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2202c0: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x2202C0u;
    SET_GPR_U32(ctx, 31, 0x2202C8u);
    ctx->pc = 0x2202C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2202C0u;
            // 0x2202c4: 0xafc2f168  sw          $v0, -0xE98($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2202C8u; }
        if (ctx->pc != 0x2202C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2202C8u; }
        if (ctx->pc != 0x2202C8u) { return; }
    }
    ctx->pc = 0x2202C8u;
    // 0x2202c8: 0x8fc2f168  lw          $v0, -0xE98($fp)
    ctx->pc = 0x2202c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x2202cc: 0x3403800d  ori         $v1, $zero, 0x800D
    ctx->pc = 0x2202ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32781);
    // 0x2202d0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2202d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2202d4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x2202d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x2202d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2202d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2202dc: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x2202dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x2202e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2202e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2202e4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2202e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2202e8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2202e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2202ec: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x2202ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x2202f0: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x2202f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x2202f4: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x2202f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x2202f8: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x2202f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2202fc: 0xc6478  dsll        $t4, $t4, 17
    ctx->pc = 0x2202fcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 17);
    // 0x220300: 0x240a004f  addiu       $t2, $zero, 0x4F
    ctx->pc = 0x220300u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x220304: 0x8e85dd50  lw          $a1, -0x22B0($s4)
    ctx->pc = 0x220304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294958416)));
    // 0x220308: 0x240b0019  addiu       $t3, $zero, 0x19
    ctx->pc = 0x220308u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x22030c: 0x9c871074  lwu         $a3, 0x1074($a0)
    ctx->pc = 0x22030cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4212)));
    // 0x220310: 0x240d0041  addiu       $t5, $zero, 0x41
    ctx->pc = 0x220310u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x220314: 0x51182  srl         $v0, $a1, 6
    ctx->pc = 0x220314u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x220318: 0x9cc41070  lwu         $a0, 0x1070($a2)
    ctx->pc = 0x220318u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4208)));
    // 0x22031c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x22031cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x220320: 0x8fc3f168  lw          $v1, -0xE98($fp)
    ctx->pc = 0x220320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x220324: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x220324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x220328: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x220328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x22032c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x22032cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x220330: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x220330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x220334: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x220334u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x220338: 0xfc660018  sd          $a2, 0x18($v1)
    ctx->pc = 0x220338u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 6));
    // 0x22033c: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x22033cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x220340: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x220340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220344: 0x2442dd50  addiu       $v0, $v0, -0x22B0
    ctx->pc = 0x220344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958416));
    // 0x220348: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x220348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x22034c: 0x9d04f19c  lwu         $a0, -0xE64($t0)
    ctx->pc = 0x22034cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 4294963612)));
    // 0x220350: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x220350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x220354: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x220354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x220358: 0x52c3a  dsrl        $a1, $a1, 16
    ctx->pc = 0x220358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 16);
    // 0x22035c: 0x9d22f1a0  lwu         $v0, -0xE60($t1)
    ctx->pc = 0x22035cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 4294963616)));
    // 0x220360: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x220360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x220364: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x220364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x220368: 0xfc6a0028  sd          $t2, 0x28($v1)
    ctx->pc = 0x220368u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 10));
    // 0x22036c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x22036cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x220370: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x220370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x220374: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x220374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x220378: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x220378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x22037c: 0xfc6b0038  sd          $t3, 0x38($v1)
    ctx->pc = 0x22037cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 11));
    // 0x220380: 0xfc620020  sd          $v0, 0x20($v1)
    ctx->pc = 0x220380u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 2));
    // 0x220384: 0xfc650040  sd          $a1, 0x40($v1)
    ctx->pc = 0x220384u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 5));
    // 0x220388: 0xfc6d0048  sd          $t5, 0x48($v1)
    ctx->pc = 0x220388u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 13));
    // 0x22038c: 0xfc600030  sd          $zero, 0x30($v1)
    ctx->pc = 0x22038cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 0));
    // 0x220390: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x220390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220394: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x220394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x220398: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x220398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x22039c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x22039cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2203a0: 0x3c050140  lui         $a1, 0x140
    ctx->pc = 0x2203a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)320 << 16));
    // 0x2203a4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2203a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2203a8: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x2203a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2203ac: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2203acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2203b0: 0x3c042400  lui         $a0, 0x2400
    ctx->pc = 0x2203b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9216 << 16));
    // 0x2203b4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2203b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2203b8: 0x34059000  ori         $a1, $zero, 0x9000
    ctx->pc = 0x2203b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x2203bc: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x2203bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
    // 0x2203c0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2203c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2203c4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2203c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2203c8: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x2203c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
    // 0x2203cc: 0x11297c  dsll32      $a1, $s1, 5
    ctx->pc = 0x2203ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 5));
    // 0x2203d0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2203d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2203d4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2203d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2203d8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2203d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2203dc: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2203dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2203e0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2203e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2203e4: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x2203e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2203e8: 0x240b0044  addiu       $t3, $zero, 0x44
    ctx->pc = 0x2203e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2203ec: 0x240c0043  addiu       $t4, $zero, 0x43
    ctx->pc = 0x2203ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2203f0: 0x240d0007  addiu       $t5, $zero, 0x7
    ctx->pc = 0x2203f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2203f4: 0x240e0060  addiu       $t6, $zero, 0x60
    ctx->pc = 0x2203f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2203f8: 0x240f0015  addiu       $t7, $zero, 0x15
    ctx->pc = 0x2203f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2203fc: 0x247300e0  addiu       $s3, $v1, 0xE0
    ctx->pc = 0x2203fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x220400: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x220400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x220404: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x220404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x220408: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x220408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x22040c: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x22040cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x220410: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x220410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x220414: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x220414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x220418: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x220418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x22041c: 0x3c103f80  lui         $s0, 0x3F80
    ctx->pc = 0x22041cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16256 << 16));
    // 0x220420: 0x108438  dsll        $s0, $s0, 16
    ctx->pc = 0x220420u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 16);
    // 0x220424: 0x36108080  ori         $s0, $s0, 0x8080
    ctx->pc = 0x220424u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32896);
    // 0x220428: 0x108438  dsll        $s0, $s0, 16
    ctx->pc = 0x220428u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 16);
    // 0x22042c: 0x36108080  ori         $s0, $s0, 0x8080
    ctx->pc = 0x22042cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32896);
    // 0x220430: 0xfc690088  sd          $t1, 0x88($v1)
    ctx->pc = 0x220430u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 136), GPR_U64(ctx, 9));
    // 0x220434: 0x34158001  ori         $s5, $zero, 0x8001
    ctx->pc = 0x220434u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x220438: 0xfc6a0098  sd          $t2, 0x98($v1)
    ctx->pc = 0x220438u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 152), GPR_U64(ctx, 10));
    // 0x22043c: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x22043cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x220440: 0xfc6b00a0  sd          $t3, 0xA0($v1)
    ctx->pc = 0x220440u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 160), GPR_U64(ctx, 11));
    // 0x220444: 0xfc6c00a8  sd          $t4, 0xA8($v1)
    ctx->pc = 0x220444u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 12));
    // 0x220448: 0xfc6d00b8  sd          $t5, 0xB8($v1)
    ctx->pc = 0x220448u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 184), GPR_U64(ctx, 13));
    // 0x22044c: 0xfc6e00c0  sd          $t6, 0xC0($v1)
    ctx->pc = 0x22044cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 192), GPR_U64(ctx, 14));
    // 0x220450: 0xfc6f00c8  sd          $t7, 0xC8($v1)
    ctx->pc = 0x220450u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 200), GPR_U64(ctx, 15));
    // 0x220454: 0xfc640050  sd          $a0, 0x50($v1)
    ctx->pc = 0x220454u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 4));
    // 0x220458: 0xfc650058  sd          $a1, 0x58($v1)
    ctx->pc = 0x220458u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 5));
    // 0x22045c: 0xfc660060  sd          $a2, 0x60($v1)
    ctx->pc = 0x22045cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 6));
    // 0x220460: 0xfc670068  sd          $a3, 0x68($v1)
    ctx->pc = 0x220460u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 104), GPR_U64(ctx, 7));
    // 0x220464: 0xfc680078  sd          $t0, 0x78($v1)
    ctx->pc = 0x220464u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 120), GPR_U64(ctx, 8));
    // 0x220468: 0xfc7000d0  sd          $s0, 0xD0($v1)
    ctx->pc = 0x220468u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 208), GPR_U64(ctx, 16));
    // 0x22046c: 0xfc6200b0  sd          $v0, 0xB0($v1)
    ctx->pc = 0x22046cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 176), GPR_U64(ctx, 2));
    // 0x220470: 0xfc720070  sd          $s2, 0x70($v1)
    ctx->pc = 0x220470u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 112), GPR_U64(ctx, 18));
    // 0x220474: 0xfc720080  sd          $s2, 0x80($v1)
    ctx->pc = 0x220474u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 128), GPR_U64(ctx, 18));
    // 0x220478: 0xfc600090  sd          $zero, 0x90($v1)
    ctx->pc = 0x220478u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 0));
    // 0x22047c: 0xfc7200d8  sd          $s2, 0xD8($v1)
    ctx->pc = 0x22047cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 216), GPR_U64(ctx, 18));
    // 0x220480: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x220480u;
    SET_GPR_U32(ctx, 31, 0x220488u);
    ctx->pc = 0x220484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220480u;
            // 0x220484: 0xafd3f168  sw          $s3, -0xE98($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294963560), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220488u; }
        if (ctx->pc != 0x220488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220488u; }
        if (ctx->pc != 0x220488u) { return; }
    }
    ctx->pc = 0x220488u;
    // 0x220488: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x220488u;
    SET_GPR_U32(ctx, 31, 0x220490u);
    ctx->pc = 0x22048Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220488u;
            // 0x22048c: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220490u; }
        if (ctx->pc != 0x220490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220490u; }
        if (ctx->pc != 0x220490u) { return; }
    }
    ctx->pc = 0x220490u;
    // 0x220490: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x220490u;
    SET_GPR_U32(ctx, 31, 0x220498u);
    ctx->pc = 0x220494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220490u;
            // 0x220494: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220498u; }
        if (ctx->pc != 0x220498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220498u; }
        if (ctx->pc != 0x220498u) { return; }
    }
    ctx->pc = 0x220498u;
    // 0x220498: 0x8fc2f168  lw          $v0, -0xE98($fp)
    ctx->pc = 0x220498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x22049c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22049cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2204a0: 0x8fc2f168  lw          $v0, -0xE98($fp)
    ctx->pc = 0x2204a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x2204a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2204a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2204a8: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x2204A8u;
    SET_GPR_U32(ctx, 31, 0x2204B0u);
    ctx->pc = 0x2204ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2204A8u;
            // 0x2204ac: 0xafc2f168  sw          $v0, -0xE98($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2204B0u; }
        if (ctx->pc != 0x2204B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2204B0u; }
        if (ctx->pc != 0x2204B0u) { return; }
    }
    ctx->pc = 0x2204B0u;
    // 0x2204b0: 0x8fc3f168  lw          $v1, -0xE98($fp)
    ctx->pc = 0x2204b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x2204b4: 0x3c0241ab  lui         $v0, 0x41AB
    ctx->pc = 0x2204b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16811 << 16));
    // 0x2204b8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2204b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2204bc: 0x24045353  addiu       $a0, $zero, 0x5353
    ctx->pc = 0x2204bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x2204c0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2204c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2204c4: 0x24082008  addiu       $t0, $zero, 0x2008
    ctx->pc = 0x2204c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8200));
    // 0x2204c8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2204c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2204cc: 0x24071c08  addiu       $a3, $zero, 0x1C08
    ctx->pc = 0x2204ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7176));
    // 0x2204d0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2204d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2204d4: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x2204d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
    // 0x2204d8: 0x8fc4f168  lw          $a0, -0xE98($fp)
    ctx->pc = 0x2204d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x2204dc: 0xac930010  sw          $s3, 0x10($a0)
    ctx->pc = 0x2204dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 19));
    // 0x2204e0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2204e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2204e4: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x2204e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x2204e8: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x2204e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2204ec: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2204ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2204f0: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x2204f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2204f4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2204f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2204f8: 0x24860040  addiu       $a2, $a0, 0x40
    ctx->pc = 0x2204f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2204fc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2204fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x220500: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x220500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x220504: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x220504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x220508: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x220508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x22050c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x22050cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x220510: 0xac880030  sw          $t0, 0x30($a0)
    ctx->pc = 0x220510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 8));
    // 0x220514: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x220514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x220518: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x220518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x22051c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x22051cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x220520: 0xafc2f168  sw          $v0, -0xE98($fp)
    ctx->pc = 0x220520u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294963560), GPR_U32(ctx, 2));
    // 0x220524: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x220524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220528: 0x8e82dd50  lw          $v0, -0x22B0($s4)
    ctx->pc = 0x220528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294958416)));
    // 0x22052c: 0x24a5dd50  addiu       $a1, $a1, -0x22B0
    ctx->pc = 0x22052cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958416));
    // 0x220530: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x220530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x220534: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x220534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x220538: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x220538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x22053c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x22053cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x220540: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x220540u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x220544: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x220544u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x220548: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x220548u;
    SET_GPR_U32(ctx, 31, 0x220550u);
    ctx->pc = 0x22054Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220548u;
            // 0x22054c: 0xacc00008  sw          $zero, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220550u; }
        if (ctx->pc != 0x220550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220550u; }
        if (ctx->pc != 0x220550u) { return; }
    }
    ctx->pc = 0x220550u;
    // 0x220550: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x220550u;
    SET_GPR_U32(ctx, 31, 0x220558u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220558u; }
        if (ctx->pc != 0x220558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220558u; }
        if (ctx->pc != 0x220558u) { return; }
    }
    ctx->pc = 0x220558u;
    // 0x220558: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x220558u;
    SET_GPR_U32(ctx, 31, 0x220560u);
    ctx->pc = 0x22055Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220558u;
            // 0x22055c: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220560u; }
        if (ctx->pc != 0x220560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220560u; }
        if (ctx->pc != 0x220560u) { return; }
    }
    ctx->pc = 0x220560u;
    // 0x220560: 0x8fc2f168  lw          $v0, -0xE98($fp)
    ctx->pc = 0x220560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x220564: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x220564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x220568: 0x8fc2f168  lw          $v0, -0xE98($fp)
    ctx->pc = 0x220568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x22056c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x22056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x220570: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x220570u;
    SET_GPR_U32(ctx, 31, 0x220578u);
    ctx->pc = 0x220574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220570u;
            // 0x220574: 0xafc2f168  sw          $v0, -0xE98($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220578u; }
        if (ctx->pc != 0x220578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220578u; }
        if (ctx->pc != 0x220578u) { return; }
    }
    ctx->pc = 0x220578u;
    // 0x220578: 0x8fc2f168  lw          $v0, -0xE98($fp)
    ctx->pc = 0x220578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x22057c: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x22057cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x220580: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x220580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x220584: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x220584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x220588: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x220588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22058c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x22058cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x220590: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x220590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x220594: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x220594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x220598: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x220598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x22059c: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x22059cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x2205a0: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2205a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x2205a4: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x2205a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x2205a8: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2205a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x2205ac: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2205acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2205b0: 0x8e22dd58  lw          $v0, -0x22A8($s1)
    ctx->pc = 0x2205b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294958424)));
    // 0x2205b4: 0x9c85f1ac  lwu         $a1, -0xE54($a0)
    ctx->pc = 0x2205b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4294963628)));
    // 0x2205b8: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x2205b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x2205bc: 0x9cc4f1a8  lwu         $a0, -0xE58($a2)
    ctx->pc = 0x2205bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4294963624)));
    // 0x2205c0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2205c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2205c4: 0x8fc3f168  lw          $v1, -0xE98($fp)
    ctx->pc = 0x2205c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x2205c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2205c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2205cc: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x2205ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x2205d0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2205d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2205d4: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x2205d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2205d8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2205d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2205dc: 0x24730030  addiu       $s3, $v1, 0x30
    ctx->pc = 0x2205dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2205e0: 0xfc660018  sd          $a2, 0x18($v1)
    ctx->pc = 0x2205e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 6));
    // 0x2205e4: 0xfc670020  sd          $a3, 0x20($v1)
    ctx->pc = 0x2205e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 7));
    // 0x2205e8: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x2205e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x2205ec: 0xfc720028  sd          $s2, 0x28($v1)
    ctx->pc = 0x2205ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 18));
    // 0x2205f0: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x2205F0u;
    SET_GPR_U32(ctx, 31, 0x2205F8u);
    ctx->pc = 0x2205F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2205F0u;
            // 0x2205f4: 0xafd3f168  sw          $s3, -0xE98($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294963560), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2205F8u; }
        if (ctx->pc != 0x2205F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2205F8u; }
        if (ctx->pc != 0x2205F8u) { return; }
    }
    ctx->pc = 0x2205F8u;
    // 0x2205f8: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x2205F8u;
    SET_GPR_U32(ctx, 31, 0x220600u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220600u; }
        if (ctx->pc != 0x220600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220600u; }
        if (ctx->pc != 0x220600u) { return; }
    }
    ctx->pc = 0x220600u;
    // 0x220600: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x220600u;
    SET_GPR_U32(ctx, 31, 0x220608u);
    ctx->pc = 0x220604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220600u;
            // 0x220604: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220608u; }
        if (ctx->pc != 0x220608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220608u; }
        if (ctx->pc != 0x220608u) { return; }
    }
    ctx->pc = 0x220608u;
    // 0x220608: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x220608u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22060c: 0x8fc2f168  lw          $v0, -0xE98($fp)
    ctx->pc = 0x22060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x220610: 0x8e30dd58  lw          $s0, -0x22A8($s1)
    ctx->pc = 0x220610u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294958424)));
    // 0x220614: 0x2463dd58  addiu       $v1, $v1, -0x22A8
    ctx->pc = 0x220614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958424));
    // 0x220618: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x220618u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22061c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22061cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x220620: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x220620u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x220624: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x220624u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x220628: 0x8fc2f168  lw          $v0, -0xE98($fp)
    ctx->pc = 0x220628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x22062c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x22062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x220630: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x220630u;
    SET_GPR_U32(ctx, 31, 0x220638u);
    ctx->pc = 0x220634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220630u;
            // 0x220634: 0xafc2f168  sw          $v0, -0xE98($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220638u; }
        if (ctx->pc != 0x220638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220638u; }
        if (ctx->pc != 0x220638u) { return; }
    }
    ctx->pc = 0x220638u;
    // 0x220638: 0x8fc3f168  lw          $v1, -0xE98($fp)
    ctx->pc = 0x220638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x22063c: 0x3c022103  lui         $v0, 0x2103
    ctx->pc = 0x22063cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8451 << 16));
    // 0x220640: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x220640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x220644: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x220644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x220648: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x220648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x22064c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x22064cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x220650: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x220650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
    // 0x220654: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x220654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x220658: 0x8fc3f168  lw          $v1, -0xE98($fp)
    ctx->pc = 0x220658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x22065c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x22065cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x220660: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x220660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x220664: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x220664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x220668: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x220668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x22066c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22066cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x220670: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x220670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x220674: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x220674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x220678: 0xac700020  sw          $s0, 0x20($v1)
    ctx->pc = 0x220678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 16));
    // 0x22067c: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x22067cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x220680: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x220680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x220684: 0xafc5f168  sw          $a1, -0xE98($fp)
    ctx->pc = 0x220684u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294963560), GPR_U32(ctx, 5));
    // 0x220688: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x220688u;
    SET_GPR_U32(ctx, 31, 0x220690u);
    ctx->pc = 0x22068Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220688u;
            // 0x22068c: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220690u; }
        if (ctx->pc != 0x220690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220690u; }
        if (ctx->pc != 0x220690u) { return; }
    }
    ctx->pc = 0x220690u;
    // 0x220690: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x220690u;
    SET_GPR_U32(ctx, 31, 0x220698u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220698u; }
        if (ctx->pc != 0x220698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220698u; }
        if (ctx->pc != 0x220698u) { return; }
    }
    ctx->pc = 0x220698u;
    // 0x220698: 0xc05021e  jal         func_140878
    ctx->pc = 0x220698u;
    SET_GPR_U32(ctx, 31, 0x2206A0u);
    ctx->pc = 0x140878u;
    if (runtime->hasFunction(0x140878u)) {
        auto targetFn = runtime->lookupFunction(0x140878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206A0u; }
        if (ctx->pc != 0x2206A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140878_0x140878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206A0u; }
        if (ctx->pc != 0x2206A0u) { return; }
    }
    ctx->pc = 0x2206A0u;
    // 0x2206a0: 0xc04fd92  jal         func_13F648
    ctx->pc = 0x2206A0u;
    SET_GPR_U32(ctx, 31, 0x2206A8u);
    ctx->pc = 0x13F648u;
    if (runtime->hasFunction(0x13F648u)) {
        auto targetFn = runtime->lookupFunction(0x13F648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206A8u; }
        if (ctx->pc != 0x2206A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f648_0x13f6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206A8u; }
        if (ctx->pc != 0x2206A8u) { return; }
    }
    ctx->pc = 0x2206A8u;
    // 0x2206a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2206a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2206ac: 0xc04fdcc  jal         func_13F730
    ctx->pc = 0x2206ACu;
    SET_GPR_U32(ctx, 31, 0x2206B4u);
    ctx->pc = 0x2206B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2206ACu;
            // 0x2206b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F730u;
    if (runtime->hasFunction(0x13F730u)) {
        auto targetFn = runtime->lookupFunction(0x13F730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206B4u; }
        if (ctx->pc != 0x2206B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F730_0x13f730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206B4u; }
        if (ctx->pc != 0x2206B4u) { return; }
    }
    ctx->pc = 0x2206B4u;
    // 0x2206b4: 0x8fc4f168  lw          $a0, -0xE98($fp)
    ctx->pc = 0x2206b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294963560)));
    // 0x2206b8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x2206b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2206bc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2206BCu;
    {
        const bool branch_taken_0x2206bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2206bc) {
            ctx->pc = 0x2206C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2206BCu;
            // 0x2206c0: 0x3c050033  lui         $a1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2206E8u;
            goto label_2206e8;
        }
    }
    ctx->pc = 0x2206C4u;
    // 0x2206c4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2206c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2206c8:
    // 0x2206c8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2206c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2206cc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x2206ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2206d0: 0x0  nop
    ctx->pc = 0x2206d0u;
    // NOP
    // 0x2206d4: 0x0  nop
    ctx->pc = 0x2206d4u;
    // NOP
    // 0x2206d8: 0x0  nop
    ctx->pc = 0x2206d8u;
    // NOP
    // 0x2206dc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2206DCu;
    {
        const bool branch_taken_0x2206dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2206dc) {
            ctx->pc = 0x2206E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2206DCu;
            // 0x2206e0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2206C8u;
            runtime->cooperativeGuestYield();
            goto label_2206c8;
        }
    }
    ctx->pc = 0x2206E4u;
    // 0x2206e4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x2206e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_2206e8:
    // 0x2206e8: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x2206e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x2206ec: 0x8ca2ed60  lw          $v0, -0x12A0($a1)
    ctx->pc = 0x2206ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962528)));
    // 0x2206f0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2206f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2206f4: 0x24c5ed68  addiu       $a1, $a2, -0x1298
    ctx->pc = 0x2206f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962536));
    // 0x2206f8: 0xafc4f168  sw          $a0, -0xE98($fp)
    ctx->pc = 0x2206f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294963560), GPR_U32(ctx, 4));
    // 0x2206fc: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x2206fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x220700: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x220700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x220704: 0xac66ed60  sw          $a2, -0x12A0($v1)
    ctx->pc = 0x220704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294962528), GPR_U32(ctx, 6));
    // 0x220708: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x220708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22070c: 0x2cc30100  sltiu       $v1, $a2, 0x100
    ctx->pc = 0x22070cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x220710: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x220710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220714: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220714u;
    {
        const bool branch_taken_0x220714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x220718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220714u;
            // 0x220718: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220714) {
            ctx->pc = 0x22072Cu;
            goto label_22072c;
        }
    }
    ctx->pc = 0x22071Cu;
    // 0x22071c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x22071cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x220720: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x220720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x220724: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x220724u;
    SET_GPR_U32(ctx, 31, 0x22072Cu);
    ctx->pc = 0x220728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220724u;
            // 0x220728: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22072Cu; }
        if (ctx->pc != 0x22072Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22072Cu; }
        if (ctx->pc != 0x22072Cu) { return; }
    }
    ctx->pc = 0x22072Cu;
label_22072c:
    // 0x22072c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x22072cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x220730: 0x2483bb98  addiu       $v1, $a0, -0x4468
    ctx->pc = 0x220730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949784));
    // 0x220734: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x220734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x220738: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x220738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22073c: 0xc087fc0  jal         func_21FF00
    ctx->pc = 0x22073Cu;
    SET_GPR_U32(ctx, 31, 0x220744u);
    ctx->pc = 0x220740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22073Cu;
            // 0x220740: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF00u;
    if (runtime->hasFunction(0x21FF00u)) {
        auto targetFn = runtime->lookupFunction(0x21FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220744u; }
        if (ctx->pc != 0x220744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21ff00_0x21ff60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220744u; }
        if (ctx->pc != 0x220744u) { return; }
    }
    ctx->pc = 0x220744u;
    // 0x220744: 0xc060dee  jal         func_1837B8
    ctx->pc = 0x220744u;
    SET_GPR_U32(ctx, 31, 0x22074Cu);
    ctx->pc = 0x1837B8u;
    if (runtime->hasFunction(0x1837B8u)) {
        auto targetFn = runtime->lookupFunction(0x1837B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22074Cu; }
        if (ctx->pc != 0x22074Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001837B8_0x1837b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22074Cu; }
        if (ctx->pc != 0x22074Cu) { return; }
    }
    ctx->pc = 0x22074Cu;
    // 0x22074c: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x22074Cu;
    SET_GPR_U32(ctx, 31, 0x220754u);
    ctx->pc = 0x220750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22074Cu;
            // 0x220750: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220754u; }
        if (ctx->pc != 0x220754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220754u; }
        if (ctx->pc != 0x220754u) { return; }
    }
    ctx->pc = 0x220754u;
    // 0x220754: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x220754u;
    SET_GPR_U32(ctx, 31, 0x22075Cu);
    ctx->pc = 0x220758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220754u;
            // 0x220758: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22075Cu; }
        if (ctx->pc != 0x22075Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22075Cu; }
        if (ctx->pc != 0x22075Cu) { return; }
    }
    ctx->pc = 0x22075Cu;
    // 0x22075c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x22075cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220760: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x220760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x220764: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x220764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x220768: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x220768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22076c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x22076cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x220770: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x220770u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x220774: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x220774u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x220778: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x220778u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22077c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x22077cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x220780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220784: 0x3e00008  jr          $ra
    ctx->pc = 0x220784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220784u;
            // 0x220788: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2200B8u: goto label_2200b8;
            case 0x2200E8u: goto label_2200e8;
            case 0x220104u: goto label_220104;
            case 0x220160u: goto label_220160;
            case 0x2201F8u: goto label_2201f8;
            case 0x220214u: goto label_220214;
            case 0x220268u: goto label_220268;
            case 0x220284u: goto label_220284;
            case 0x2206C8u: goto label_2206c8;
            case 0x2206E8u: goto label_2206e8;
            case 0x22072Cu: goto label_22072c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22078Cu;
    // 0x22078c: 0x0  nop
    ctx->pc = 0x22078cu;
    // NOP
}
