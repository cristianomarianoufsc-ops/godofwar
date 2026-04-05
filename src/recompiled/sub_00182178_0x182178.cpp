#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182178
// Address: 0x182178 - 0x182280
void sub_00182178_0x182178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182178_0x182178");
#endif

    ctx->pc = 0x182178u;

    // 0x182178: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x182178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18217c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x18217cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x182180: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x182180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x182184: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x182184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182188: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x182188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18218c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18218cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182190: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x182190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x182194: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x182194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182198: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x182198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x18219c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x18219cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821a0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1821a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1821a4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1821a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1821a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1821ac: 0xc08f164  jal         func_23C590
    ctx->pc = 0x1821ACu;
    SET_GPR_U32(ctx, 31, 0x1821B4u);
    ctx->pc = 0x1821B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1821ACu;
            // 0x1821b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C590u;
    if (runtime->hasFunction(0x23C590u)) {
        auto targetFn = runtime->lookupFunction(0x23C590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1821B4u; }
        if (ctx->pc != 0x1821B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23c590_0x23c5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1821B4u; }
        if (ctx->pc != 0x1821B4u) { return; }
    }
    ctx->pc = 0x1821B4u;
    // 0x1821b4: 0x2708023  subu        $s0, $s3, $s0
    ctx->pc = 0x1821b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1821b8: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1821b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x1821bc: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x1821bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
    // 0x1821c0: 0x8e22c728  lw          $v0, -0x38D8($s1)
    ctx->pc = 0x1821c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952744)));
    // 0x1821c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1821C4u;
    {
        const bool branch_taken_0x1821c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1821C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1821C4u;
            // 0x1821c8: 0x8e24c728  lw          $a0, -0x38D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1821c4) {
            ctx->pc = 0x1821E0u;
            goto label_1821e0;
        }
    }
    ctx->pc = 0x1821CCu;
    // 0x1821cc: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1821CCu;
    SET_GPR_U32(ctx, 31, 0x1821D4u);
    ctx->pc = 0x1821D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1821CCu;
            // 0x1821d0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1821D4u; }
        if (ctx->pc != 0x1821D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1821D4u; }
        if (ctx->pc != 0x1821D4u) { return; }
    }
    ctx->pc = 0x1821D4u;
    // 0x1821d4: 0xae22c728  sw          $v0, -0x38D8($s1)
    ctx->pc = 0x1821d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952744), GPR_U32(ctx, 2));
    // 0x1821d8: 0x8e24c728  lw          $a0, -0x38D8($s1)
    ctx->pc = 0x1821d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952744)));
    // 0x1821dc: 0x0  nop
    ctx->pc = 0x1821dcu;
    // NOP
label_1821e0:
    // 0x1821e0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1821E0u;
    SET_GPR_U32(ctx, 31, 0x1821E8u);
    ctx->pc = 0x1821E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1821E0u;
            // 0x1821e4: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1821E8u; }
        if (ctx->pc != 0x1821E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1821E8u; }
        if (ctx->pc != 0x1821E8u) { return; }
    }
    ctx->pc = 0x1821E8u;
    // 0x1821e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1821e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1821ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1821f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821f4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1821f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821f8: 0xc05f8aa  jal         func_17E2A8
    ctx->pc = 0x1821F8u;
    SET_GPR_U32(ctx, 31, 0x182200u);
    ctx->pc = 0x1821FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1821F8u;
            // 0x1821fc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E2A8u;
    if (runtime->hasFunction(0x17E2A8u)) {
        auto targetFn = runtime->lookupFunction(0x17E2A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182200u; }
        if (ctx->pc != 0x182200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E2A8_0x17e2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182200u; }
        if (ctx->pc != 0x182200u) { return; }
    }
    ctx->pc = 0x182200u;
    // 0x182200: 0x8e03c7bc  lw          $v1, -0x3844($s0)
    ctx->pc = 0x182200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952892)));
    // 0x182204: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x182204u;
    {
        const bool branch_taken_0x182204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182204u;
            // 0x182208: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182204) {
            ctx->pc = 0x182214u;
            goto label_182214;
        }
    }
    ctx->pc = 0x18220Cu;
    // 0x18220c: 0xc060468  jal         func_1811A0
    ctx->pc = 0x18220Cu;
    SET_GPR_U32(ctx, 31, 0x182214u);
    ctx->pc = 0x1811A0u;
    if (runtime->hasFunction(0x1811A0u)) {
        auto targetFn = runtime->lookupFunction(0x1811A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182214u; }
        if (ctx->pc != 0x182214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001811A0_0x1811a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182214u; }
        if (ctx->pc != 0x182214u) { return; }
    }
    ctx->pc = 0x182214u;
label_182214:
    // 0x182214: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x182214u;
    SET_GPR_U32(ctx, 31, 0x18221Cu);
    ctx->pc = 0x182218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182214u;
            // 0x182218: 0x8e04c7bc  lw          $a0, -0x3844($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18221Cu; }
        if (ctx->pc != 0x18221Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18221Cu; }
        if (ctx->pc != 0x18221Cu) { return; }
    }
    ctx->pc = 0x18221Cu;
    // 0x18221c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18221cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182220: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x182220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x182224: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x182224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x182228: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x182228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x18222c: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x18222cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x182230: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x182230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182234: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x182234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182238: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x182238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18223c: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x18223cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182240: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x182240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x182244: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x182244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x182248: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x182248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18224c: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x18224cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x182250: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x182250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x182254: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x182254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x182258: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x182258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18225c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x18225cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182260: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x182260u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182264: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x182264u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182268: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x182268u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18226c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18226cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182270: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x182270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x182274: 0x3e00008  jr          $ra
    ctx->pc = 0x182274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182274u;
            // 0x182278: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1821E0u: goto label_1821e0;
            case 0x182214u: goto label_182214;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18227Cu;
    // 0x18227c: 0x0  nop
    ctx->pc = 0x18227cu;
    // NOP
}
