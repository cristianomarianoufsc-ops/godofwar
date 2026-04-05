#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_18eb40
// Address: 0x18eb40 - 0x18ed40
void entry_18eb40_0x18ed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_18eb40_0x18ed40");
#endif

    ctx->pc = 0x18eb40u;

    // 0x18eb40: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x18eb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x18eb44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18eb44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18eb48: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x18eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x18eb4c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x18eb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x18eb50: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x18eb50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18eb54: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x18eb54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x18eb58: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x18eb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x18eb5c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x18eb5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18eb60: 0x2442a150  addiu       $v0, $v0, -0x5EB0
    ctx->pc = 0x18eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943056));
    // 0x18eb64: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x18eb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x18eb68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18eb68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18eb6c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18eb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18eb70: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x18eb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x18eb74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18eb74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18eb78: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x18eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x18eb7c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x18eb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x18eb80: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x18eb84: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x18eb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x18eb88: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x18eb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x18eb8c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x18eb8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x18eb90: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x18eb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x18eb94: 0x27b2002d  addiu       $s2, $sp, 0x2D
    ctx->pc = 0x18eb94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 45));
    // 0x18eb98: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18eb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18eb9c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x18eb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x18eba0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x18eba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18eba4: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x18eba4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18eba8: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x18eba8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x18ebac: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x18ebacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x18ebb0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x18ebb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x18ebb4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x18ebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x18ebb8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x18ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x18ebbc: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x18ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x18ebc0: 0xa7a00010  sh          $zero, 0x10($sp)
    ctx->pc = 0x18ebc0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x18ebc4: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x18ebc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x18ebc8: 0x24a82ff8  addiu       $t0, $a1, 0x2FF8
    ctx->pc = 0x18ebc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 12280));
    // 0x18ebcc: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x18ebccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x18ebd0: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x18ebd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x18ebd4: 0x81060008  lb          $a2, 0x8($t0)
    ctx->pc = 0x18ebd4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x18ebd8: 0x81070009  lb          $a3, 0x9($t0)
    ctx->pc = 0x18ebd8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
    // 0x18ebdc: 0xb3a20034  sdl         $v0, 0x34($sp)
    ctx->pc = 0x18ebdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ebe0: 0xb7a2002d  sdr         $v0, 0x2D($sp)
    ctx->pc = 0x18ebe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 45); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ebe4: 0xa3a60035  sb          $a2, 0x35($sp)
    ctx->pc = 0x18ebe4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 53), (uint8_t)GPR_U32(ctx, 6));
    // 0x18ebe8: 0xa3a70036  sb          $a3, 0x36($sp)
    ctx->pc = 0x18ebe8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 54), (uint8_t)GPR_U32(ctx, 7));
    // 0x18ebec: 0x24673008  addiu       $a3, $v1, 0x3008
    ctx->pc = 0x18ebecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 12296));
    // 0x18ebf0: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x18ebf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x18ebf4: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x18ebf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x18ebf8: 0x80e50008  lb          $a1, 0x8($a3)
    ctx->pc = 0x18ebf8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x18ebfc: 0x80e60009  lb          $a2, 0x9($a3)
    ctx->pc = 0x18ebfcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
    // 0x18ec00: 0xb3a2004c  sdl         $v0, 0x4C($sp)
    ctx->pc = 0x18ec00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ec04: 0xb7a20045  sdr         $v0, 0x45($sp)
    ctx->pc = 0x18ec04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 69); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ec08: 0xa3a5004d  sb          $a1, 0x4D($sp)
    ctx->pc = 0x18ec08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 5));
    // 0x18ec0c: 0xa3a6004e  sb          $a2, 0x4E($sp)
    ctx->pc = 0x18ec0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 6));
    // 0x18ec10: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x18EC10u;
    SET_GPR_U32(ctx, 31, 0x18EC18u);
    ctx->pc = 0x18EC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC10u;
            // 0x18ec14: 0x27b30045  addiu       $s3, $sp, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 69));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC18u; }
        if (ctx->pc != 0x18EC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC18u; }
        if (ctx->pc != 0x18EC18u) { return; }
    }
    ctx->pc = 0x18EC18u;
    // 0x18ec18: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18EC18u;
    SET_GPR_U32(ctx, 31, 0x18EC20u);
    ctx->pc = 0x18EC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC18u;
            // 0x18ec1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC20u; }
        if (ctx->pc != 0x18EC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC20u; }
        if (ctx->pc != 0x18EC20u) { return; }
    }
    ctx->pc = 0x18EC20u;
    // 0x18ec20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18ec20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec24: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18ec24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18ec28: 0x24a53298  addiu       $a1, $a1, 0x3298
    ctx->pc = 0x18ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12952));
    // 0x18ec2c: 0xc060978  jal         func_1825E0
    ctx->pc = 0x18EC2Cu;
    SET_GPR_U32(ctx, 31, 0x18EC34u);
    ctx->pc = 0x18EC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC2Cu;
            // 0x18ec30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC34u; }
        if (ctx->pc != 0x18EC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC34u; }
        if (ctx->pc != 0x18EC34u) { return; }
    }
    ctx->pc = 0x18EC34u;
    // 0x18ec34: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x18ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x18ec38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ec38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec3c: 0x2442a110  addiu       $v0, $v0, -0x5EF0
    ctx->pc = 0x18ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942992));
    // 0x18ec40: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x18EC40u;
    SET_GPR_U32(ctx, 31, 0x18EC48u);
    ctx->pc = 0x18EC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC40u;
            // 0x18ec44: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC48u; }
        if (ctx->pc != 0x18EC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC48u; }
        if (ctx->pc != 0x18EC48u) { return; }
    }
    ctx->pc = 0x18EC48u;
    // 0x18ec48: 0x3c05452d  lui         $a1, 0x452D
    ctx->pc = 0x18ec48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17709 << 16));
    // 0x18ec4c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ec4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec50: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x18ec50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x18ec54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ec54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec58: 0xae30c8d0  sw          $s0, -0x3730($s1)
    ctx->pc = 0x18ec58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953168), GPR_U32(ctx, 16));
    // 0x18ec5c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18EC5Cu;
    SET_GPR_U32(ctx, 31, 0x18EC64u);
    ctx->pc = 0x18EC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC5Cu;
            // 0x18ec60: 0x34a59a3d  ori         $a1, $a1, 0x9A3D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39485);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC64u; }
        if (ctx->pc != 0x18EC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC64u; }
        if (ctx->pc != 0x18EC64u) { return; }
    }
    ctx->pc = 0x18EC64u;
    // 0x18ec64: 0x8e24c8d0  lw          $a0, -0x3730($s1)
    ctx->pc = 0x18ec64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953168)));
    // 0x18ec68: 0x3c0591fa  lui         $a1, 0x91FA
    ctx->pc = 0x18ec68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37370 << 16));
    // 0x18ec6c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ec6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec70: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x18ec70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x18ec74: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18EC74u;
    SET_GPR_U32(ctx, 31, 0x18EC7Cu);
    ctx->pc = 0x18EC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC74u;
            // 0x18ec78: 0x34a55ec0  ori         $a1, $a1, 0x5EC0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24256);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC7Cu; }
        if (ctx->pc != 0x18EC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC7Cu; }
        if (ctx->pc != 0x18EC7Cu) { return; }
    }
    ctx->pc = 0x18EC7Cu;
    // 0x18ec7c: 0x8e24c8d0  lw          $a0, -0x3730($s1)
    ctx->pc = 0x18ec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953168)));
    // 0x18ec80: 0x3c051817  lui         $a1, 0x1817
    ctx->pc = 0x18ec80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6167 << 16));
    // 0x18ec84: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ec84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec88: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x18ec88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18ec8c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18EC8Cu;
    SET_GPR_U32(ctx, 31, 0x18EC94u);
    ctx->pc = 0x18EC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC8Cu;
            // 0x18ec90: 0x34a54fd6  ori         $a1, $a1, 0x4FD6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20438);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC94u; }
        if (ctx->pc != 0x18EC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC94u; }
        if (ctx->pc != 0x18EC94u) { return; }
    }
    ctx->pc = 0x18EC94u;
    // 0x18ec94: 0x8e24c8d0  lw          $a0, -0x3730($s1)
    ctx->pc = 0x18ec94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953168)));
    // 0x18ec98: 0x3c05f469  lui         $a1, 0xF469
    ctx->pc = 0x18ec98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62569 << 16));
    // 0x18ec9c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ec9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eca0: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x18eca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x18eca4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18ECA4u;
    SET_GPR_U32(ctx, 31, 0x18ECACu);
    ctx->pc = 0x18ECA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ECA4u;
            // 0x18eca8: 0x34a5f079  ori         $a1, $a1, 0xF079 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61561);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECACu; }
        if (ctx->pc != 0x18ECACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECACu; }
        if (ctx->pc != 0x18ECACu) { return; }
    }
    ctx->pc = 0x18ECACu;
    // 0x18ecac: 0x8e24c8d0  lw          $a0, -0x3730($s1)
    ctx->pc = 0x18ecacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953168)));
    // 0x18ecb0: 0x3c050b5f  lui         $a1, 0xB5F
    ctx->pc = 0x18ecb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2911 << 16));
    // 0x18ecb4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ecb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ecb8: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x18ecb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x18ecbc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18ECBCu;
    SET_GPR_U32(ctx, 31, 0x18ECC4u);
    ctx->pc = 0x18ECC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ECBCu;
            // 0x18ecc0: 0x34a59b04  ori         $a1, $a1, 0x9B04 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39684);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECC4u; }
        if (ctx->pc != 0x18ECC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECC4u; }
        if (ctx->pc != 0x18ECC4u) { return; }
    }
    ctx->pc = 0x18ECC4u;
    // 0x18ecc4: 0x8e24c8d0  lw          $a0, -0x3730($s1)
    ctx->pc = 0x18ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953168)));
    // 0x18ecc8: 0x3c05556a  lui         $a1, 0x556A
    ctx->pc = 0x18ecc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21866 << 16));
    // 0x18eccc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ecccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ecd0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x18ecd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ecd4: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x18ecd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18ecd8: 0xc06081c  jal         func_182070
    ctx->pc = 0x18ECD8u;
    SET_GPR_U32(ctx, 31, 0x18ECE0u);
    ctx->pc = 0x18ECDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ECD8u;
            // 0x18ecdc: 0x34a57bc2  ori         $a1, $a1, 0x7BC2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31682);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECE0u; }
        if (ctx->pc != 0x18ECE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECE0u; }
        if (ctx->pc != 0x18ECE0u) { return; }
    }
    ctx->pc = 0x18ECE0u;
    // 0x18ece0: 0x8e24c8d0  lw          $a0, -0x3730($s1)
    ctx->pc = 0x18ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953168)));
    // 0x18ece4: 0x3c05f059  lui         $a1, 0xF059
    ctx->pc = 0x18ece4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61529 << 16));
    // 0x18ece8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ece8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ecec: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x18ececu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x18ecf0: 0xc0606c2  jal         func_181B08
    ctx->pc = 0x18ECF0u;
    SET_GPR_U32(ctx, 31, 0x18ECF8u);
    ctx->pc = 0x18ECF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ECF0u;
            // 0x18ecf4: 0x34a51165  ori         $a1, $a1, 0x1165 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4453);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181B08u;
    if (runtime->hasFunction(0x181B08u)) {
        auto targetFn = runtime->lookupFunction(0x181B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECF8u; }
        if (ctx->pc != 0x18ECF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181B08_0x181b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECF8u; }
        if (ctx->pc != 0x18ECF8u) { return; }
    }
    ctx->pc = 0x18ECF8u;
    // 0x18ecf8: 0x8e24c8d0  lw          $a0, -0x3730($s1)
    ctx->pc = 0x18ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953168)));
    // 0x18ecfc: 0x3c05d8f8  lui         $a1, 0xD8F8
    ctx->pc = 0x18ecfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55544 << 16));
    // 0x18ed00: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x18ed00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed04: 0x34a55499  ori         $a1, $a1, 0x5499
    ctx->pc = 0x18ed04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21657);
    // 0x18ed08: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ed08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed0c: 0xc06081c  jal         func_182070
    ctx->pc = 0x18ED0Cu;
    SET_GPR_U32(ctx, 31, 0x18ED14u);
    ctx->pc = 0x18ED10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ED0Cu;
            // 0x18ed10: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED14u; }
        if (ctx->pc != 0x18ED14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED14u; }
        if (ctx->pc != 0x18ED14u) { return; }
    }
    ctx->pc = 0x18ED14u;
    // 0x18ed14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18ed14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed18: 0xc090d0e  jal         func_243438
    ctx->pc = 0x18ED18u;
    SET_GPR_U32(ctx, 31, 0x18ED20u);
    ctx->pc = 0x18ED1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ED18u;
            // 0x18ed1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243438u;
    if (runtime->hasFunction(0x243438u)) {
        auto targetFn = runtime->lookupFunction(0x243438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED20u; }
        if (ctx->pc != 0x18ED20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243438_0x243438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED20u; }
        if (ctx->pc != 0x18ED20u) { return; }
    }
    ctx->pc = 0x18ED20u;
    // 0x18ed20: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x18ed20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18ed24: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x18ed24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18ed28: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x18ed28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18ed2c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x18ed2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18ed30: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18ed30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ed34: 0x3e00008  jr          $ra
    ctx->pc = 0x18ED34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ED38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ED34u;
            // 0x18ed38: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18ED3Cu;
    // 0x18ed3c: 0x0  nop
    ctx->pc = 0x18ed3cu;
    // NOP
}
