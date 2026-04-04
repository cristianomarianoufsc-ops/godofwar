#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182070
// Address: 0x182070 - 0x182178
void sub_00182070_0x182070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182070_0x182070");
#endif

    ctx->pc = 0x182070u;

    // 0x182070: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x182070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x182074: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x182074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x182078: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x182078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x18207c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18207cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182080: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x182080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x182084: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x182084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182088: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x182088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x18208c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x18208cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182090: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x182090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x182094: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x182094u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182098: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x182098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x18209c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x18209cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1820a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1820a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1820a4: 0xc08f164  jal         func_23C590
    ctx->pc = 0x1820A4u;
    SET_GPR_U32(ctx, 31, 0x1820ACu);
    ctx->pc = 0x1820A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1820A4u;
            // 0x1820a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C590u;
    if (runtime->hasFunction(0x23C590u)) {
        auto targetFn = runtime->lookupFunction(0x23C590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820ACu; }
        if (ctx->pc != 0x1820ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23c590_0x23c5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820ACu; }
        if (ctx->pc != 0x1820ACu) { return; }
    }
    ctx->pc = 0x1820ACu;
    // 0x1820ac: 0x2708023  subu        $s0, $s3, $s0
    ctx->pc = 0x1820acu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1820b0: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1820b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x1820b4: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x1820b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
    // 0x1820b8: 0x8e22c728  lw          $v0, -0x38D8($s1)
    ctx->pc = 0x1820b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952744)));
    // 0x1820bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1820BCu;
    {
        const bool branch_taken_0x1820bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1820C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1820BCu;
            // 0x1820c0: 0x8e24c728  lw          $a0, -0x38D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1820bc) {
            ctx->pc = 0x1820D8u;
            goto label_1820d8;
        }
    }
    ctx->pc = 0x1820C4u;
    // 0x1820c4: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1820C4u;
    SET_GPR_U32(ctx, 31, 0x1820CCu);
    ctx->pc = 0x1820C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1820C4u;
            // 0x1820c8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820CCu; }
        if (ctx->pc != 0x1820CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820CCu; }
        if (ctx->pc != 0x1820CCu) { return; }
    }
    ctx->pc = 0x1820CCu;
    // 0x1820cc: 0xae22c728  sw          $v0, -0x38D8($s1)
    ctx->pc = 0x1820ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952744), GPR_U32(ctx, 2));
    // 0x1820d0: 0x8e24c728  lw          $a0, -0x38D8($s1)
    ctx->pc = 0x1820d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952744)));
    // 0x1820d4: 0x0  nop
    ctx->pc = 0x1820d4u;
    // NOP
label_1820d8:
    // 0x1820d8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1820D8u;
    SET_GPR_U32(ctx, 31, 0x1820E0u);
    ctx->pc = 0x1820DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1820D8u;
            // 0x1820dc: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820E0u; }
        if (ctx->pc != 0x1820E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820E0u; }
        if (ctx->pc != 0x1820E0u) { return; }
    }
    ctx->pc = 0x1820E0u;
    // 0x1820e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1820e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1820e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1820e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1820e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1820e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1820ec: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1820ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1820f0: 0xc05f8aa  jal         func_17E2A8
    ctx->pc = 0x1820F0u;
    SET_GPR_U32(ctx, 31, 0x1820F8u);
    ctx->pc = 0x1820F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1820F0u;
            // 0x1820f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E2A8u;
    if (runtime->hasFunction(0x17E2A8u)) {
        auto targetFn = runtime->lookupFunction(0x17E2A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820F8u; }
        if (ctx->pc != 0x1820F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E2A8_0x17e2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820F8u; }
        if (ctx->pc != 0x1820F8u) { return; }
    }
    ctx->pc = 0x1820F8u;
    // 0x1820f8: 0x8e03c7bc  lw          $v1, -0x3844($s0)
    ctx->pc = 0x1820f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952892)));
    // 0x1820fc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1820FCu;
    {
        const bool branch_taken_0x1820fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1820FCu;
            // 0x182100: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1820fc) {
            ctx->pc = 0x18210Cu;
            goto label_18210c;
        }
    }
    ctx->pc = 0x182104u;
    // 0x182104: 0xc060468  jal         func_1811A0
    ctx->pc = 0x182104u;
    SET_GPR_U32(ctx, 31, 0x18210Cu);
    ctx->pc = 0x1811A0u;
    if (runtime->hasFunction(0x1811A0u)) {
        auto targetFn = runtime->lookupFunction(0x1811A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18210Cu; }
        if (ctx->pc != 0x18210Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001811A0_0x1811a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18210Cu; }
        if (ctx->pc != 0x18210Cu) { return; }
    }
    ctx->pc = 0x18210Cu;
label_18210c:
    // 0x18210c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18210Cu;
    SET_GPR_U32(ctx, 31, 0x182114u);
    ctx->pc = 0x182110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18210Cu;
            // 0x182110: 0x8e04c7bc  lw          $a0, -0x3844($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182114u; }
        if (ctx->pc != 0x182114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182114u; }
        if (ctx->pc != 0x182114u) { return; }
    }
    ctx->pc = 0x182114u;
    // 0x182114: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x182114u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182118: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x182118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x18211c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x18211cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x182120: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x182120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x182124: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x182124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x182128: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x182128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18212c: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x18212cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182130: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x182130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182134: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x182134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182138: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x182138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18213c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x18213cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x182140: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x182140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182144: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x182144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x182148: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x182148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x18214c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18214cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x182150: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x182150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x182154: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x182154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182158: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x182158u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18215c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x18215cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182160: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x182160u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182164: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182168: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x182168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x18216c: 0x3e00008  jr          $ra
    ctx->pc = 0x18216Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18216Cu;
            // 0x182170: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1820D8u: goto label_1820d8;
            case 0x18210Cu: goto label_18210c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182174u;
    // 0x182174: 0x0  nop
    ctx->pc = 0x182174u;
    // NOP
}
