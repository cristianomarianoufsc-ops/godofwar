#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001815C0
// Address: 0x1815c0 - 0x1816c8
void sub_001815C0_0x1815c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001815C0_0x1815c0");
#endif

    ctx->pc = 0x1815c0u;

    // 0x1815c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1815c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1815c4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1815c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1815c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1815c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1815cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1815ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1815d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1815d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1815d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815d8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1815d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1815dc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1815dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815e0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1815e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1815e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1815e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1815e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1815ec: 0xc08f164  jal         func_23C590
    ctx->pc = 0x1815ECu;
    SET_GPR_U32(ctx, 31, 0x1815F4u);
    ctx->pc = 0x1815F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1815ECu;
            // 0x1815f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C590u;
    if (runtime->hasFunction(0x23C590u)) {
        auto targetFn = runtime->lookupFunction(0x23C590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815F4u; }
        if (ctx->pc != 0x1815F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23c590_0x23c5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815F4u; }
        if (ctx->pc != 0x1815F4u) { return; }
    }
    ctx->pc = 0x1815F4u;
    // 0x1815f4: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1815f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x1815f8: 0x2708023  subu        $s0, $s3, $s0
    ctx->pc = 0x1815f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1815fc: 0x8e22c718  lw          $v0, -0x38E8($s1)
    ctx->pc = 0x1815fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952728)));
    // 0x181600: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181600u;
    {
        const bool branch_taken_0x181600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181600u;
            // 0x181604: 0xafb0000c  sw          $s0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181600) {
            ctx->pc = 0x181618u;
            goto label_181618;
        }
    }
    ctx->pc = 0x181608u;
    // 0x181608: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x181608u;
    SET_GPR_U32(ctx, 31, 0x181610u);
    ctx->pc = 0x18160Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181608u;
            // 0x18160c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181610u; }
        if (ctx->pc != 0x181610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181610u; }
        if (ctx->pc != 0x181610u) { return; }
    }
    ctx->pc = 0x181610u;
    // 0x181610: 0xae22c718  sw          $v0, -0x38E8($s1)
    ctx->pc = 0x181610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952728), GPR_U32(ctx, 2));
    // 0x181614: 0x0  nop
    ctx->pc = 0x181614u;
    // NOP
label_181618:
    // 0x181618: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181618u;
    SET_GPR_U32(ctx, 31, 0x181620u);
    ctx->pc = 0x18161Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181618u;
            // 0x18161c: 0x8e24c718  lw          $a0, -0x38E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181620u; }
        if (ctx->pc != 0x181620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181620u; }
        if (ctx->pc != 0x181620u) { return; }
    }
    ctx->pc = 0x181620u;
    // 0x181620: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x181620u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x181624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181628: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x181628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18162c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18162cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181630: 0xc060292  jal         func_180A48
    ctx->pc = 0x181630u;
    SET_GPR_U32(ctx, 31, 0x181638u);
    ctx->pc = 0x181634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181630u;
            // 0x181634: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A48u;
    if (runtime->hasFunction(0x180A48u)) {
        auto targetFn = runtime->lookupFunction(0x180A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181638u; }
        if (ctx->pc != 0x181638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A48_0x180a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181638u; }
        if (ctx->pc != 0x181638u) { return; }
    }
    ctx->pc = 0x181638u;
    // 0x181638: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x181638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x18163c: 0x8e23c7bc  lw          $v1, -0x3844($s1)
    ctx->pc = 0x18163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952892)));
    // 0x181640: 0x2442acf0  addiu       $v0, $v0, -0x5310
    ctx->pc = 0x181640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946032));
    // 0x181644: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x181644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x181648: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x181648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x18164c: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x18164cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x181650: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x181650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x181654: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181654u;
    {
        const bool branch_taken_0x181654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181654u;
            // 0x181658: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181654) {
            ctx->pc = 0x181664u;
            goto label_181664;
        }
    }
    ctx->pc = 0x18165Cu;
    // 0x18165c: 0xc060468  jal         func_1811A0
    ctx->pc = 0x18165Cu;
    SET_GPR_U32(ctx, 31, 0x181664u);
    ctx->pc = 0x1811A0u;
    if (runtime->hasFunction(0x1811A0u)) {
        auto targetFn = runtime->lookupFunction(0x1811A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181664u; }
        if (ctx->pc != 0x181664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001811A0_0x1811a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181664u; }
        if (ctx->pc != 0x181664u) { return; }
    }
    ctx->pc = 0x181664u;
label_181664:
    // 0x181664: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181664u;
    SET_GPR_U32(ctx, 31, 0x18166Cu);
    ctx->pc = 0x181668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181664u;
            // 0x181668: 0x8e24c7bc  lw          $a0, -0x3844($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18166Cu; }
        if (ctx->pc != 0x18166Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18166Cu; }
        if (ctx->pc != 0x18166Cu) { return; }
    }
    ctx->pc = 0x18166Cu;
    // 0x18166c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18166cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181670: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x181670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x181674: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x181674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x181678: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x181678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x18167c: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x18167cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x181680: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x181680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181684: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x181684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181688: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x181688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18168c: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x18168cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181690: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x181690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x181694: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x181694u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x181698: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x181698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18169c: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x18169cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x1816a0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1816a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1816a4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1816a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1816a8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1816a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1816ac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1816acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1816b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1816b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1816b4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1816b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1816b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1816b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1816bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1816bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1816c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1816C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1816C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1816C0u;
            // 0x1816c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181618u: goto label_181618;
            case 0x181664u: goto label_181664;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1816C8u;
}
