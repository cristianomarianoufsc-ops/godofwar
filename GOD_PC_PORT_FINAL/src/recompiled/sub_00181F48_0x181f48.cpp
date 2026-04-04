#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181F48
// Address: 0x181f48 - 0x182048
void sub_00181F48_0x181f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181F48_0x181f48");
#endif

    ctx->pc = 0x181f48u;

    // 0x181f48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x181f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x181f4c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x181f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x181f50: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x181f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x181f54: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x181f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f58: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x181f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x181f5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x181f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f60: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x181f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x181f64: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x181f64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f68: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x181f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x181f6c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x181f6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f70: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x181f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x181f74: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x181f74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181f7c: 0xc08f164  jal         func_23C590
    ctx->pc = 0x181F7Cu;
    SET_GPR_U32(ctx, 31, 0x181F84u);
    ctx->pc = 0x181F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181F7Cu;
            // 0x181f80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C590u;
    if (runtime->hasFunction(0x23C590u)) {
        auto targetFn = runtime->lookupFunction(0x23C590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F84u; }
        if (ctx->pc != 0x181F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23c590_0x23c5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F84u; }
        if (ctx->pc != 0x181F84u) { return; }
    }
    ctx->pc = 0x181F84u;
    // 0x181f84: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x181f84u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x181f88: 0x2708023  subu        $s0, $s3, $s0
    ctx->pc = 0x181f88u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x181f8c: 0x8e22c724  lw          $v0, -0x38DC($s1)
    ctx->pc = 0x181f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952740)));
    // 0x181f90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181F90u;
    {
        const bool branch_taken_0x181f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181F90u;
            // 0x181f94: 0xafb0000c  sw          $s0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f90) {
            ctx->pc = 0x181FA8u;
            goto label_181fa8;
        }
    }
    ctx->pc = 0x181F98u;
    // 0x181f98: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x181F98u;
    SET_GPR_U32(ctx, 31, 0x181FA0u);
    ctx->pc = 0x181F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181F98u;
            // 0x181f9c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FA0u; }
        if (ctx->pc != 0x181FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FA0u; }
        if (ctx->pc != 0x181FA0u) { return; }
    }
    ctx->pc = 0x181FA0u;
    // 0x181fa0: 0xae22c724  sw          $v0, -0x38DC($s1)
    ctx->pc = 0x181fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952740), GPR_U32(ctx, 2));
    // 0x181fa4: 0x0  nop
    ctx->pc = 0x181fa4u;
    // NOP
label_181fa8:
    // 0x181fa8: 0x8e24c724  lw          $a0, -0x38DC($s1)
    ctx->pc = 0x181fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952740)));
    // 0x181fac: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181FACu;
    SET_GPR_U32(ctx, 31, 0x181FB4u);
    ctx->pc = 0x181FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181FACu;
            // 0x181fb0: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FB4u; }
        if (ctx->pc != 0x181FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FB4u; }
        if (ctx->pc != 0x181FB4u) { return; }
    }
    ctx->pc = 0x181FB4u;
    // 0x181fb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x181fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fb8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x181fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fbc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x181fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fc0: 0xc05f810  jal         func_17E040
    ctx->pc = 0x181FC0u;
    SET_GPR_U32(ctx, 31, 0x181FC8u);
    ctx->pc = 0x181FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181FC0u;
            // 0x181fc4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E040u;
    if (runtime->hasFunction(0x17E040u)) {
        auto targetFn = runtime->lookupFunction(0x17E040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FC8u; }
        if (ctx->pc != 0x181FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e040_0x17e0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FC8u; }
        if (ctx->pc != 0x181FC8u) { return; }
    }
    ctx->pc = 0x181FC8u;
    // 0x181fc8: 0x8e03c7bc  lw          $v1, -0x3844($s0)
    ctx->pc = 0x181fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952892)));
    // 0x181fcc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181FCCu;
    {
        const bool branch_taken_0x181fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181FCCu;
            // 0x181fd0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181fcc) {
            ctx->pc = 0x181FDCu;
            goto label_181fdc;
        }
    }
    ctx->pc = 0x181FD4u;
    // 0x181fd4: 0xc060468  jal         func_1811A0
    ctx->pc = 0x181FD4u;
    SET_GPR_U32(ctx, 31, 0x181FDCu);
    ctx->pc = 0x1811A0u;
    if (runtime->hasFunction(0x1811A0u)) {
        auto targetFn = runtime->lookupFunction(0x1811A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FDCu; }
        if (ctx->pc != 0x181FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001811A0_0x1811a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FDCu; }
        if (ctx->pc != 0x181FDCu) { return; }
    }
    ctx->pc = 0x181FDCu;
label_181fdc:
    // 0x181fdc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181FDCu;
    SET_GPR_U32(ctx, 31, 0x181FE4u);
    ctx->pc = 0x181FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181FDCu;
            // 0x181fe0: 0x8e04c7bc  lw          $a0, -0x3844($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FE4u; }
        if (ctx->pc != 0x181FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FE4u; }
        if (ctx->pc != 0x181FE4u) { return; }
    }
    ctx->pc = 0x181FE4u;
    // 0x181fe4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x181fe4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fe8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x181fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x181fec: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x181fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x181ff0: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x181ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x181ff4: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x181ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x181ff8: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x181ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181ffc: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x181ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182000: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x182000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182004: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x182004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182008: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x182008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18200c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x18200cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x182010: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x182010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182014: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x182014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x182018: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x182018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x18201c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18201cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x182020: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x182020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x182024: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x182024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182028: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x182028u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18202c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x18202cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182030: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x182030u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182034: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182038: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x182038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x18203c: 0x3e00008  jr          $ra
    ctx->pc = 0x18203Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18203Cu;
            // 0x182040: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181FA8u: goto label_181fa8;
            case 0x181FDCu: goto label_181fdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182044u;
    // 0x182044: 0x0  nop
    ctx->pc = 0x182044u;
    // NOP
}
