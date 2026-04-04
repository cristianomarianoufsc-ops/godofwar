#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00183190
// Address: 0x183190 - 0x1832e8
void sub_00183190_0x183190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183190_0x183190");
#endif

    ctx->pc = 0x183190u;

    // 0x183190: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x183190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x183194: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x183194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x183198: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x183198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18319c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18319cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831a0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1831a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1831a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1831a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1831a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1831a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1831ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1831acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1831b0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1831b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1831b4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1831b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1831b8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1831b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1831bc: 0xc060e08  jal         func_183820
    ctx->pc = 0x1831BCu;
    SET_GPR_U32(ctx, 31, 0x1831C4u);
    ctx->pc = 0x1831C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1831BCu;
            // 0x1831c0: 0xac43f1b4  sw          $v1, -0xE4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963636), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183820u;
    if (runtime->hasFunction(0x183820u)) {
        auto targetFn = runtime->lookupFunction(0x183820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1831C4u; }
        if (ctx->pc != 0x1831C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183820_0x183838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1831C4u; }
        if (ctx->pc != 0x1831C4u) { return; }
    }
    ctx->pc = 0x1831C4u;
    // 0x1831c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1831c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1831c8: 0xc060e0e  jal         func_183838
    ctx->pc = 0x1831C8u;
    SET_GPR_U32(ctx, 31, 0x1831D0u);
    ctx->pc = 0x1831CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1831C8u;
            // 0x1831cc: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183838u;
    if (runtime->hasFunction(0x183838u)) {
        auto targetFn = runtime->lookupFunction(0x183838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1831D0u; }
        if (ctx->pc != 0x1831D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183838_0x183850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1831D0u; }
        if (ctx->pc != 0x1831D0u) { return; }
    }
    ctx->pc = 0x1831D0u;
    // 0x1831d0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1831d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1831d4: 0xc060e14  jal         func_183850
    ctx->pc = 0x1831D4u;
    SET_GPR_U32(ctx, 31, 0x1831DCu);
    ctx->pc = 0x1831D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1831D4u;
            // 0x1831d8: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183850u;
    if (runtime->hasFunction(0x183850u)) {
        auto targetFn = runtime->lookupFunction(0x183850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1831DCu; }
        if (ctx->pc != 0x1831DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183850_0x183868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1831DCu; }
        if (ctx->pc != 0x1831DCu) { return; }
    }
    ctx->pc = 0x1831DCu;
    // 0x1831dc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1831dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1831e0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1831e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1831e4: 0xac431078  sw          $v1, 0x1078($v0)
    ctx->pc = 0x1831e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4216), GPR_U32(ctx, 3));
    // 0x1831e8: 0xc060e04  jal         func_183810
    ctx->pc = 0x1831E8u;
    SET_GPR_U32(ctx, 31, 0x1831F0u);
    ctx->pc = 0x1831ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1831E8u;
            // 0x1831ec: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183810u;
    if (runtime->hasFunction(0x183810u)) {
        auto targetFn = runtime->lookupFunction(0x183810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1831F0u; }
        if (ctx->pc != 0x1831F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183810_0x183820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1831F0u; }
        if (ctx->pc != 0x1831F0u) { return; }
    }
    ctx->pc = 0x1831F0u;
    // 0x1831f0: 0xc060e1a  jal         func_183868
    ctx->pc = 0x1831F0u;
    SET_GPR_U32(ctx, 31, 0x1831F8u);
    ctx->pc = 0x1831F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1831F0u;
            // 0x1831f4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183868u;
    if (runtime->hasFunction(0x183868u)) {
        auto targetFn = runtime->lookupFunction(0x183868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1831F8u; }
        if (ctx->pc != 0x1831F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183868_0x183878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1831F8u; }
        if (ctx->pc != 0x1831F8u) { return; }
    }
    ctx->pc = 0x1831F8u;
    // 0x1831f8: 0x8a02002b  lwl         $v0, 0x2B($s0)
    ctx->pc = 0x1831f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1831fc: 0x9a020028  lwr         $v0, 0x28($s0)
    ctx->pc = 0x1831fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x183200: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x183200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x183204: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x183204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x183208: 0xc060dfc  jal         func_1837F0
    ctx->pc = 0x183208u;
    SET_GPR_U32(ctx, 31, 0x183210u);
    ctx->pc = 0x18320Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183208u;
            // 0x18320c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1837F0u;
    if (runtime->hasFunction(0x1837F0u)) {
        auto targetFn = runtime->lookupFunction(0x1837F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183210u; }
        if (ctx->pc != 0x183210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1837f0_0x183810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183210u; }
        if (ctx->pc != 0x183210u) { return; }
    }
    ctx->pc = 0x183210u;
    // 0x183210: 0x8a07002f  lwl         $a3, 0x2F($s0)
    ctx->pc = 0x183210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x183214: 0x9a07002c  lwr         $a3, 0x2C($s0)
    ctx->pc = 0x183214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x183218: 0xaba70013  swl         $a3, 0x13($sp)
    ctx->pc = 0x183218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18321c: 0xbba70010  swr         $a3, 0x10($sp)
    ctx->pc = 0x18321cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x183220: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x183220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x183224: 0x2443dd58  addiu       $v1, $v0, -0x22A8
    ctx->pc = 0x183224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958424));
    // 0x183228: 0x8c52dd58  lw          $s2, -0x22A8($v0)
    ctx->pc = 0x183228u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958424)));
    // 0x18322c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x18322cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x183230: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x183230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x183234: 0x24a9dd68  addiu       $t1, $a1, -0x2298
    ctx->pc = 0x183234u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958440));
    // 0x183238: 0x8ba60013  lwl         $a2, 0x13($sp)
    ctx->pc = 0x183238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x18323c: 0x9ba60010  lwr         $a2, 0x10($sp)
    ctx->pc = 0x18323cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x183240: 0xa9260003  swl         $a2, 0x3($t1)
    ctx->pc = 0x183240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x183244: 0xb9260000  swr         $a2, 0x0($t1)
    ctx->pc = 0x183244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x183248: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x183248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x18324c: 0x2444dd50  addiu       $a0, $v0, -0x22B0
    ctx->pc = 0x18324cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958416));
    // 0x183250: 0x8c51dd50  lw          $s1, -0x22B0($v0)
    ctx->pc = 0x183250u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958416)));
    // 0x183254: 0x2439018  mult        $s2, $s2, $v1
    ctx->pc = 0x183254u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x183258: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x183258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18325c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x18325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x183260: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x183260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x183264: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x183264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x183268: 0xe4a0f1b0  swc1        $f0, -0xE50($a1)
    ctx->pc = 0x183268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294963632), bits); }
    // 0x18326c: 0xc060c54  jal         func_183150
    ctx->pc = 0x18326Cu;
    SET_GPR_U32(ctx, 31, 0x183274u);
    ctx->pc = 0x183270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18326Cu;
            // 0x183270: 0x2228818  mult        $s1, $s1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x183150u;
    if (runtime->hasFunction(0x183150u)) {
        auto targetFn = runtime->lookupFunction(0x183150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183274u; }
        if (ctx->pc != 0x183274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183150_0x183190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183274u; }
        if (ctx->pc != 0x183274u) { return; }
    }
    ctx->pc = 0x183274u;
    // 0x183274: 0x2429818  mult        $s3, $s2, $v0
    ctx->pc = 0x183274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x183278: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x183278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x18327c: 0xc060c54  jal         func_183150
    ctx->pc = 0x18327Cu;
    SET_GPR_U32(ctx, 31, 0x183284u);
    ctx->pc = 0x183280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18327Cu;
            // 0x183280: 0x139b42  srl         $s3, $s3, 13 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183150u;
    if (runtime->hasFunction(0x183150u)) {
        auto targetFn = runtime->lookupFunction(0x183150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183284u; }
        if (ctx->pc != 0x183284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183150_0x183190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183284u; }
        if (ctx->pc != 0x183284u) { return; }
    }
    ctx->pc = 0x183284u;
    // 0x183284: 0x2429018  mult        $s2, $s2, $v0
    ctx->pc = 0x183284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x183288: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x183288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x18328c: 0xc060c54  jal         func_183150
    ctx->pc = 0x18328Cu;
    SET_GPR_U32(ctx, 31, 0x183294u);
    ctx->pc = 0x183290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18328Cu;
            // 0x183290: 0x129342  srl         $s2, $s2, 13 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183150u;
    if (runtime->hasFunction(0x183150u)) {
        auto targetFn = runtime->lookupFunction(0x183150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183294u; }
        if (ctx->pc != 0x183294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183150_0x183190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183294u; }
        if (ctx->pc != 0x183294u) { return; }
    }
    ctx->pc = 0x183294u;
    // 0x183294: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x183294u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x183298: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x183298u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x18329c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x18329cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1832a0: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x1832a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1832a4: 0xacd2f1a0  sw          $s2, -0xE60($a2)
    ctx->pc = 0x1832a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963616), GPR_U32(ctx, 18));
    // 0x1832a8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1832a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1832ac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1832acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1832b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1832b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1832b4: 0x118b42  srl         $s1, $s1, 13
    ctx->pc = 0x1832b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 13));
    // 0x1832b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1832b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1832bc: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x1832bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1832c0: 0xac431074  sw          $v1, 0x1074($v0)
    ctx->pc = 0x1832c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4212), GPR_U32(ctx, 3));
    // 0x1832c4: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x1832c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1832c8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1832c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1832cc: 0xacb1382c  sw          $s1, 0x382C($a1)
    ctx->pc = 0x1832ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 14380), GPR_U32(ctx, 17));
    // 0x1832d0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1832d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1832d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1832d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1832d8: 0xac80f1ac  sw          $zero, -0xE54($a0)
    ctx->pc = 0x1832d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294963628), GPR_U32(ctx, 0));
    // 0x1832dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1832DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1832E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1832DCu;
            // 0x1832e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1832E4u;
    // 0x1832e4: 0x0  nop
    ctx->pc = 0x1832e4u;
    // NOP
}
