#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022AE58
// Address: 0x22ae58 - 0x22af20
void sub_0022AE58_0x22ae58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AE58_0x22ae58");
#endif

    ctx->pc = 0x22ae58u;

    // 0x22ae58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22ae58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22ae5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22ae5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22ae60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ae60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22ae64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22ae64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ae68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ae6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22ae6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae70: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x22ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22ae74: 0xc08ab72  jal         func_22ADC8
    ctx->pc = 0x22AE74u;
    SET_GPR_U32(ctx, 31, 0x22AE7Cu);
    ctx->pc = 0x22AE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AE74u;
            // 0x22ae78: 0xae2200a8  sw          $v0, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ADC8u;
    if (runtime->hasFunction(0x22ADC8u)) {
        auto targetFn = runtime->lookupFunction(0x22ADC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AE7Cu; }
        if (ctx->pc != 0x22AE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22adc8_0x22ae58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AE7Cu; }
        if (ctx->pc != 0x22AE7Cu) { return; }
    }
    ctx->pc = 0x22AE7Cu;
    // 0x22ae7c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x22ae7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x22ae80: 0xc08ab72  jal         func_22ADC8
    ctx->pc = 0x22AE80u;
    SET_GPR_U32(ctx, 31, 0x22AE88u);
    ctx->pc = 0x22AE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AE80u;
            // 0x22ae84: 0x26250054  addiu       $a1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ADC8u;
    if (runtime->hasFunction(0x22ADC8u)) {
        auto targetFn = runtime->lookupFunction(0x22ADC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AE88u; }
        if (ctx->pc != 0x22AE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22adc8_0x22ae58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AE88u; }
        if (ctx->pc != 0x22AE88u) { return; }
    }
    ctx->pc = 0x22AE88u;
    // 0x22ae88: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x22ae88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ae8c: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x22ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x22ae90: 0xe62000b8  swc1        $f0, 0xB8($s1)
    ctx->pc = 0x22ae90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
    // 0x22ae94: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x22ae94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x22ae98: 0xc60000cc  lwc1        $f0, 0xCC($s0)
    ctx->pc = 0x22ae98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ae9c: 0xae2200ac  sw          $v0, 0xAC($s1)
    ctx->pc = 0x22ae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
    // 0x22aea0: 0xe62000bc  swc1        $f0, 0xBC($s1)
    ctx->pc = 0x22aea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
    // 0x22aea4: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x22aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
    // 0x22aea8: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x22aea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22aeac: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x22aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x22aeb0: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x22aeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
    // 0x22aeb4: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x22aeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x22aeb8: 0x6a0200db  ldl         $v0, 0xDB($s0)
    ctx->pc = 0x22aeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x22aebc: 0x6e0200d4  ldr         $v0, 0xD4($s0)
    ctx->pc = 0x22aebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22aec0: 0x6a0300e3  ldl         $v1, 0xE3($s0)
    ctx->pc = 0x22aec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 227); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x22aec4: 0x6e0300dc  ldr         $v1, 0xDC($s0)
    ctx->pc = 0x22aec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 220); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x22aec8: 0x6a0400eb  ldl         $a0, 0xEB($s0)
    ctx->pc = 0x22aec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 235); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x22aecc: 0x6e0400e4  ldr         $a0, 0xE4($s0)
    ctx->pc = 0x22aeccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 228); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x22aed0: 0xb22200cb  sdl         $v0, 0xCB($s1)
    ctx->pc = 0x22aed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 203); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22aed4: 0xb62200c4  sdr         $v0, 0xC4($s1)
    ctx->pc = 0x22aed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 196); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22aed8: 0xb22300d3  sdl         $v1, 0xD3($s1)
    ctx->pc = 0x22aed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 211); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22aedc: 0xb62300cc  sdr         $v1, 0xCC($s1)
    ctx->pc = 0x22aedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 204); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22aee0: 0xb22400db  sdl         $a0, 0xDB($s1)
    ctx->pc = 0x22aee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22aee4: 0xb62400d4  sdr         $a0, 0xD4($s1)
    ctx->pc = 0x22aee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22aee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22aee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22aeec: 0xc60000ec  lwc1        $f0, 0xEC($s0)
    ctx->pc = 0x22aeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22aef0: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x22aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x22aef4: 0xe62000dc  swc1        $f0, 0xDC($s1)
    ctx->pc = 0x22aef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
    // 0x22aef8: 0xae2200e4  sw          $v0, 0xE4($s1)
    ctx->pc = 0x22aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
    // 0x22aefc: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x22aefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22af00: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x22af00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x22af04: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x22af04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
    // 0x22af08: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x22af08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
    // 0x22af0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22af0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22af10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22af10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22af14: 0x3e00008  jr          $ra
    ctx->pc = 0x22AF14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AF14u;
            // 0x22af18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AF1Cu;
    // 0x22af1c: 0x0  nop
    ctx->pc = 0x22af1cu;
    // NOP
}
