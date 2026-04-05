#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181C18
// Address: 0x181c18 - 0x181d28
void sub_00181C18_0x181c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181C18_0x181c18");
#endif

    ctx->pc = 0x181c18u;

    // 0x181c18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x181c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x181c1c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x181c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x181c20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x181c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x181c24: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x181c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x181c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x181c2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x181c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c30: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x181c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x181c34: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x181c34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c38: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x181c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x181c3c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x181c3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181c44: 0xc08f164  jal         func_23C590
    ctx->pc = 0x181C44u;
    SET_GPR_U32(ctx, 31, 0x181C4Cu);
    ctx->pc = 0x181C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181C44u;
            // 0x181c48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C590u;
    if (runtime->hasFunction(0x23C590u)) {
        auto targetFn = runtime->lookupFunction(0x23C590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C4Cu; }
        if (ctx->pc != 0x181C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23c590_0x23c5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C4Cu; }
        if (ctx->pc != 0x181C4Cu) { return; }
    }
    ctx->pc = 0x181C4Cu;
    // 0x181c4c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x181c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x181c50: 0x2708023  subu        $s0, $s3, $s0
    ctx->pc = 0x181c50u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x181c54: 0x8e22c704  lw          $v0, -0x38FC($s1)
    ctx->pc = 0x181c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952708)));
    // 0x181c58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181C58u;
    {
        const bool branch_taken_0x181c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181C58u;
            // 0x181c5c: 0xafb0000c  sw          $s0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c58) {
            ctx->pc = 0x181C70u;
            goto label_181c70;
        }
    }
    ctx->pc = 0x181C60u;
    // 0x181c60: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x181C60u;
    SET_GPR_U32(ctx, 31, 0x181C68u);
    ctx->pc = 0x181C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181C60u;
            // 0x181c64: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C68u; }
        if (ctx->pc != 0x181C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C68u; }
        if (ctx->pc != 0x181C68u) { return; }
    }
    ctx->pc = 0x181C68u;
    // 0x181c68: 0xae22c704  sw          $v0, -0x38FC($s1)
    ctx->pc = 0x181c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952708), GPR_U32(ctx, 2));
    // 0x181c6c: 0x0  nop
    ctx->pc = 0x181c6cu;
    // NOP
label_181c70:
    // 0x181c70: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181C70u;
    SET_GPR_U32(ctx, 31, 0x181C78u);
    ctx->pc = 0x181C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181C70u;
            // 0x181c74: 0x8e24c704  lw          $a0, -0x38FC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952708)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C78u; }
        if (ctx->pc != 0x181C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C78u; }
        if (ctx->pc != 0x181C78u) { return; }
    }
    ctx->pc = 0x181C78u;
    // 0x181c78: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x181c78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x181c7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c80: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x181c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c88: 0xc060292  jal         func_180A48
    ctx->pc = 0x181C88u;
    SET_GPR_U32(ctx, 31, 0x181C90u);
    ctx->pc = 0x181C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181C88u;
            // 0x181c8c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A48u;
    if (runtime->hasFunction(0x180A48u)) {
        auto targetFn = runtime->lookupFunction(0x180A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C90u; }
        if (ctx->pc != 0x181C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A48_0x180a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C90u; }
        if (ctx->pc != 0x181C90u) { return; }
    }
    ctx->pc = 0x181C90u;
    // 0x181c90: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x181c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x181c94: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x181c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x181c98: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x181c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x181c9c: 0x2442aed0  addiu       $v0, $v0, -0x5130
    ctx->pc = 0x181c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946512));
    // 0x181ca0: 0x8e23c7bc  lw          $v1, -0x3844($s1)
    ctx->pc = 0x181ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952892)));
    // 0x181ca4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x181ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x181ca8: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x181ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x181cac: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x181cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x181cb0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181CB0u;
    {
        const bool branch_taken_0x181cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181CB0u;
            // 0x181cb4: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181cb0) {
            ctx->pc = 0x181CC0u;
            goto label_181cc0;
        }
    }
    ctx->pc = 0x181CB8u;
    // 0x181cb8: 0xc060468  jal         func_1811A0
    ctx->pc = 0x181CB8u;
    SET_GPR_U32(ctx, 31, 0x181CC0u);
    ctx->pc = 0x1811A0u;
    if (runtime->hasFunction(0x1811A0u)) {
        auto targetFn = runtime->lookupFunction(0x1811A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181CC0u; }
        if (ctx->pc != 0x181CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001811A0_0x1811a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181CC0u; }
        if (ctx->pc != 0x181CC0u) { return; }
    }
    ctx->pc = 0x181CC0u;
label_181cc0:
    // 0x181cc0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181CC0u;
    SET_GPR_U32(ctx, 31, 0x181CC8u);
    ctx->pc = 0x181CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181CC0u;
            // 0x181cc4: 0x8e24c7bc  lw          $a0, -0x3844($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181CC8u; }
        if (ctx->pc != 0x181CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181CC8u; }
        if (ctx->pc != 0x181CC8u) { return; }
    }
    ctx->pc = 0x181CC8u;
    // 0x181cc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x181cc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ccc: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x181cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x181cd0: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x181cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x181cd4: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x181cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x181cd8: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x181cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x181cdc: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x181cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181ce0: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x181ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181ce4: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x181ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181ce8: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x181ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181cec: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x181cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x181cf0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x181cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x181cf4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x181cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181cf8: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x181cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x181cfc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x181cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x181d00: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x181d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x181d04: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x181d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181d08: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x181d08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181d0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x181d0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181d10: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x181d10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181d14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181d18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x181d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x181d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x181D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181D1Cu;
            // 0x181d20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181C70u: goto label_181c70;
            case 0x181CC0u: goto label_181cc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x181D24u;
    // 0x181d24: 0x0  nop
    ctx->pc = 0x181d24u;
    // NOP
}
