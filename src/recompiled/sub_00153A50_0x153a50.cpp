#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00153A50
// Address: 0x153a50 - 0x153c28
void sub_00153A50_0x153a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153A50_0x153a50");
#endif

    ctx->pc = 0x153a50u;

    // 0x153a50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x153a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x153a54: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x153a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x153a58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x153a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x153a5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x153a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a60: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x153a60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a64: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x153a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x153a68: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x153a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x153a6c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x153a6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a70: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x153a70u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a74: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x153a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x153a78: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x153a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x153a7c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x153a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x153a80: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x153a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x153a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153a88: 0xc08e210  jal         func_238840
    ctx->pc = 0x153A88u;
    SET_GPR_U32(ctx, 31, 0x153A90u);
    ctx->pc = 0x153A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153A88u;
            // 0x153a8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238840u;
    if (runtime->hasFunction(0x238840u)) {
        auto targetFn = runtime->lookupFunction(0x238840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153A90u; }
        if (ctx->pc != 0x153A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238840_0x238848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153A90u; }
        if (ctx->pc != 0x153A90u) { return; }
    }
    ctx->pc = 0x153A90u;
    // 0x153a90: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x153a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x153a94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x153a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a98: 0xc08e214  jal         func_238850
    ctx->pc = 0x153A98u;
    SET_GPR_U32(ctx, 31, 0x153AA0u);
    ctx->pc = 0x153A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153A98u;
            // 0x153a9c: 0xa6420004  sh          $v0, 0x4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238850u;
    if (runtime->hasFunction(0x238850u)) {
        auto targetFn = runtime->lookupFunction(0x238850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153AA0u; }
        if (ctx->pc != 0x153AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238850_0x238858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153AA0u; }
        if (ctx->pc != 0x153AA0u) { return; }
    }
    ctx->pc = 0x153AA0u;
    // 0x153aa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x153aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153aa4: 0xc08e212  jal         func_238848
    ctx->pc = 0x153AA4u;
    SET_GPR_U32(ctx, 31, 0x153AACu);
    ctx->pc = 0x153AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153AA4u;
            // 0x153aa8: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238848u;
    if (runtime->hasFunction(0x238848u)) {
        auto targetFn = runtime->lookupFunction(0x238848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153AACu; }
        if (ctx->pc != 0x153AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238848_0x238850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153AACu; }
        if (ctx->pc != 0x153AACu) { return; }
    }
    ctx->pc = 0x153AACu;
    // 0x153aac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x153aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153ab0: 0xc08e216  jal         func_238858
    ctx->pc = 0x153AB0u;
    SET_GPR_U32(ctx, 31, 0x153AB8u);
    ctx->pc = 0x153AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153AB0u;
            // 0x153ab4: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238858u;
    if (runtime->hasFunction(0x238858u)) {
        auto targetFn = runtime->lookupFunction(0x238858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153AB8u; }
        if (ctx->pc != 0x153AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238858_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153AB8u; }
        if (ctx->pc != 0x153AB8u) { return; }
    }
    ctx->pc = 0x153AB8u;
    // 0x153ab8: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x153ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x153abc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x153abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153ac0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x153ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x153ac4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x153ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x153ac8: 0x6a820017  ldl         $v0, 0x17($s4)
    ctx->pc = 0x153ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x153acc: 0x6e820010  ldr         $v0, 0x10($s4)
    ctx->pc = 0x153accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x153ad0: 0x6a83001f  ldl         $v1, 0x1F($s4)
    ctx->pc = 0x153ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x153ad4: 0x6e830018  ldr         $v1, 0x18($s4)
    ctx->pc = 0x153ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x153ad8: 0xb2420017  sdl         $v0, 0x17($s2)
    ctx->pc = 0x153ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153adc: 0xb6420010  sdr         $v0, 0x10($s2)
    ctx->pc = 0x153adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153ae0: 0xb243001f  sdl         $v1, 0x1F($s2)
    ctx->pc = 0x153ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153ae4: 0xb6430018  sdr         $v1, 0x18($s2)
    ctx->pc = 0x153ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153ae8: 0x6a820027  ldl         $v0, 0x27($s4)
    ctx->pc = 0x153ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x153aec: 0x6e820020  ldr         $v0, 0x20($s4)
    ctx->pc = 0x153aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x153af0: 0x6a83002f  ldl         $v1, 0x2F($s4)
    ctx->pc = 0x153af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x153af4: 0x6e830028  ldr         $v1, 0x28($s4)
    ctx->pc = 0x153af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x153af8: 0xb2420027  sdl         $v0, 0x27($s2)
    ctx->pc = 0x153af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153afc: 0xb6420020  sdr         $v0, 0x20($s2)
    ctx->pc = 0x153afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153b00: 0xb243002f  sdl         $v1, 0x2F($s2)
    ctx->pc = 0x153b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153b04: 0xb6430028  sdr         $v1, 0x28($s2)
    ctx->pc = 0x153b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153b08: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x153b08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x153b0c: 0x9682003c  lhu         $v0, 0x3C($s4)
    ctx->pc = 0x153b0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x153b10: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x153b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153b14: 0xa642003c  sh          $v0, 0x3C($s2)
    ctx->pc = 0x153b14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x153b18: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x153b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x153b1c: 0x9682003e  lhu         $v0, 0x3E($s4)
    ctx->pc = 0x153b1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 62)));
    // 0x153b20: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x153b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x153b24: 0xa642003e  sh          $v0, 0x3E($s2)
    ctx->pc = 0x153b24u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x153b28: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x153b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153b2c: 0x96820040  lhu         $v0, 0x40($s4)
    ctx->pc = 0x153b2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x153b30: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x153b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x153b34: 0xa6420040  sh          $v0, 0x40($s2)
    ctx->pc = 0x153b34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x153b38: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x153b38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x153b3c: 0xa2400042  sb          $zero, 0x42($s2)
    ctx->pc = 0x153b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x153b40: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x153b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x153b44: 0x0  nop
    ctx->pc = 0x153b44u;
    // NOP
label_153b48:
    // 0x153b48: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x153b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x153b4c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x153b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x153b50: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x153b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153b54: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x153b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x153b58: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x153b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x153b5c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x153b5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x153b60: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x153B60u;
    {
        const bool branch_taken_0x153b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153B60u;
            // 0x153b64: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b60) {
            ctx->pc = 0x153B48u;
            runtime->cooperativeGuestYield();
            goto label_153b48;
        }
    }
    ctx->pc = 0x153B68u;
    // 0x153b68: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x153b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x153b6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x153b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x153b70: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x153B70u;
    {
        const bool branch_taken_0x153b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153b70) {
            ctx->pc = 0x153B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153B70u;
            // 0x153b74: 0x86460040  lh          $a2, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153BC8u;
            goto label_153bc8;
        }
    }
    ctx->pc = 0x153B78u;
    // 0x153b78: 0x86550040  lh          $s5, 0x40($s2)
    ctx->pc = 0x153b78u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x153b7c: 0x12a0001c  beqz        $s5, . + 4 + (0x1C << 2)
    ctx->pc = 0x153B7Cu;
    {
        const bool branch_taken_0x153b7c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153B7Cu;
            // 0x153b80: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b7c) {
            ctx->pc = 0x153BF0u;
            goto label_153bf0;
        }
    }
    ctx->pc = 0x153B84u;
    // 0x153b84: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x153b84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_153b88:
    // 0x153b88: 0x26510060  addiu       $s1, $s2, 0x60
    ctx->pc = 0x153b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x153b8c: 0x8ee40048  lw          $a0, 0x48($s7)
    ctx->pc = 0x153b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 72)));
    // 0x153b90: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x153B90u;
    SET_GPR_U32(ctx, 31, 0x153B98u);
    ctx->pc = 0x153B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153B90u;
            // 0x153b94: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153B98u; }
        if (ctx->pc != 0x153B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153B98u; }
        if (ctx->pc != 0x153B98u) { return; }
    }
    ctx->pc = 0x153B98u;
    // 0x153b98: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x153b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x153b9c: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x153b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x153ba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x153ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153ba4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x153ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153ba8: 0xc054d38  jal         func_1534E0
    ctx->pc = 0x153BA8u;
    SET_GPR_U32(ctx, 31, 0x153BB0u);
    ctx->pc = 0x153BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153BA8u;
            // 0x153bac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1534E0u;
    if (runtime->hasFunction(0x1534E0u)) {
        auto targetFn = runtime->lookupFunction(0x1534E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153BB0u; }
        if (ctx->pc != 0x153BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001534E0_0x1534e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153BB0u; }
        if (ctx->pc != 0x153BB0u) { return; }
    }
    ctx->pc = 0x153BB0u;
    // 0x153bb0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x153bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x153bb4: 0x275102b  sltu        $v0, $s3, $s5
    ctx->pc = 0x153bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x153bb8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x153BB8u;
    {
        const bool branch_taken_0x153bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153BB8u;
            // 0x153bbc: 0x138080  sll         $s0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bb8) {
            ctx->pc = 0x153B88u;
            runtime->cooperativeGuestYield();
            goto label_153b88;
        }
    }
    ctx->pc = 0x153BC0u;
    // 0x153bc0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x153BC0u;
    {
        const bool branch_taken_0x153bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153BC0u;
            // 0x153bc4: 0x92830043  lbu         $v1, 0x43($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 67)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bc0) {
            ctx->pc = 0x153BF4u;
            goto label_153bf4;
        }
    }
    ctx->pc = 0x153BC8u;
label_153bc8:
    // 0x153bc8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x153BC8u;
    {
        const bool branch_taken_0x153bc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x153BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153BC8u;
            // 0x153bcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bc8) {
            ctx->pc = 0x153BF0u;
            goto label_153bf0;
        }
    }
    ctx->pc = 0x153BD0u;
label_153bd0:
    // 0x153bd0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x153bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x153bd4: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x153bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x153bd8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x153bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x153bdc: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x153bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x153be0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x153be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x153be4: 0xa6182b  sltu        $v1, $a1, $a2
    ctx->pc = 0x153be4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x153be8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x153BE8u;
    {
        const bool branch_taken_0x153be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153BE8u;
            // 0x153bec: 0xac440060  sw          $a0, 0x60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153be8) {
            ctx->pc = 0x153BD0u;
            runtime->cooperativeGuestYield();
            goto label_153bd0;
        }
    }
    ctx->pc = 0x153BF0u;
label_153bf0:
    // 0x153bf0: 0x92830043  lbu         $v1, 0x43($s4)
    ctx->pc = 0x153bf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 67)));
label_153bf4:
    // 0x153bf4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x153bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153bf8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x153bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x153bfc: 0xa2430043  sb          $v1, 0x43($s2)
    ctx->pc = 0x153bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 67), (uint8_t)GPR_U32(ctx, 3));
    // 0x153c00: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x153c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x153c04: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x153c04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x153c08: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x153c08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x153c0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x153c0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153c10: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x153c10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153c14: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x153c14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153c18: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x153c18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153c20: 0x3e00008  jr          $ra
    ctx->pc = 0x153C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153C20u;
            // 0x153c24: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153B48u: goto label_153b48;
            case 0x153B88u: goto label_153b88;
            case 0x153BC8u: goto label_153bc8;
            case 0x153BD0u: goto label_153bd0;
            case 0x153BF0u: goto label_153bf0;
            case 0x153BF4u: goto label_153bf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x153C28u;
}
