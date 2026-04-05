#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00298D08
// Address: 0x298d08 - 0x298f30
void sub_00298D08_0x298d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298D08_0x298d08");
#endif

    ctx->pc = 0x298d08u;

    // 0x298d08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x298d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x298d0c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x298d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x298d10: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x298d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x298d14: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x298d14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298d18: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x298d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x298d1c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x298d1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298d20: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x298d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x298d24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x298d24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298d28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x298d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x298d2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x298d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298d30: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x298d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x298d34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x298d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298d38: 0xc0a6244  jal         func_298910
    ctx->pc = 0x298D38u;
    SET_GPR_U32(ctx, 31, 0x298D40u);
    ctx->pc = 0x298D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298D38u;
            // 0x298d3c: 0xffb50060  sd          $s5, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298910u;
    if (runtime->hasFunction(0x298910u)) {
        auto targetFn = runtime->lookupFunction(0x298910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298D40u; }
        if (ctx->pc != 0x298D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_298910_0x298a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298D40u; }
        if (ctx->pc != 0x298D40u) { return; }
    }
    ctx->pc = 0x298D40u;
    // 0x298d40: 0x4400071  bltz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x298D40u;
    {
        const bool branch_taken_0x298d40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x298D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298D40u;
            // 0x298d44: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d40) {
            ctx->pc = 0x298F08u;
            goto label_298f08;
        }
    }
    ctx->pc = 0x298D48u;
    // 0x298d48: 0xc0a6284  jal         func_298A10
    ctx->pc = 0x298D48u;
    SET_GPR_U32(ctx, 31, 0x298D50u);
    ctx->pc = 0x298A10u;
    if (runtime->hasFunction(0x298A10u)) {
        auto targetFn = runtime->lookupFunction(0x298A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298D50u; }
        if (ctx->pc != 0x298D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298A10_0x298a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298D50u; }
        if (ctx->pc != 0x298D50u) { return; }
    }
    ctx->pc = 0x298D50u;
    // 0x298d50: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x298D50u;
    {
        const bool branch_taken_0x298d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298d50) {
            ctx->pc = 0x298D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x298D50u;
            // 0x298d54: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x298D64u;
            goto label_298d64;
        }
    }
    ctx->pc = 0x298D58u;
    // 0x298d58: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x298d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x298d5c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x298D5Cu;
    {
        const bool branch_taken_0x298d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298D5Cu;
            // 0x298d60: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d5c) {
            ctx->pc = 0x298F08u;
            goto label_298f08;
        }
    }
    ctx->pc = 0x298D64u;
label_298d64:
    // 0x298d64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x298d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298d68: 0x2451ad08  addiu       $s1, $v0, -0x52F8
    ctx->pc = 0x298d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946056));
    // 0x298d6c: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x298d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x298d70: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x298D70u;
    SET_GPR_U32(ctx, 31, 0x298D78u);
    ctx->pc = 0x298D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298D70u;
            // 0x298d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298D78u; }
        if (ctx->pc != 0x298D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298D78u; }
        if (ctx->pc != 0x298D78u) { return; }
    }
    ctx->pc = 0x298D78u;
    // 0x298d78: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x298d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x298d7c: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x298D7Cu;
    {
        const bool branch_taken_0x298d7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x298D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298D7Cu;
            // 0x298d80: 0xa0400103  sb          $zero, 0x103($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 259), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d7c) {
            ctx->pc = 0x298EB0u;
            goto label_298eb0;
        }
    }
    ctx->pc = 0x298D84u;
    // 0x298d84: 0x2a4200fd  slti        $v0, $s2, 0xFD
    ctx->pc = 0x298d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x298d88: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x298D88u;
    {
        const bool branch_taken_0x298d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298D88u;
            // 0x298d8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d88) {
            ctx->pc = 0x298E98u;
            goto label_298e98;
        }
    }
    ctx->pc = 0x298D90u;
    // 0x298d90: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x298d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x298d94: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x298d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x298d98: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x298d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x298d9c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x298D9Cu;
    {
        const bool branch_taken_0x298d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298D9Cu;
            // 0x298da0: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d9c) {
            ctx->pc = 0x298E0Cu;
            goto label_298e0c;
        }
    }
    ctx->pc = 0x298DA4u;
    // 0x298da4: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x298da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x298da8: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x298da8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x298dac: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x298dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_298db0:
    // 0x298db0: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x298db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x298db4: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x298db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x298db8: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x298db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x298dbc: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x298dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x298dc0: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x298dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x298dc4: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x298dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x298dc8: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x298dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x298dcc: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x298dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x298dd0: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x298dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298dd4: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x298dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298dd8: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x298dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298ddc: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x298ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298de0: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x298de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298de4: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x298de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298de8: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x298de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298dec: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x298decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298df0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x298df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x298df4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x298df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x298df8: 0x0  nop
    ctx->pc = 0x298df8u;
    // NOP
    // 0x298dfc: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x298DFCu;
    {
        const bool branch_taken_0x298dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x298dfc) {
            ctx->pc = 0x298DB0u;
            runtime->cooperativeGuestYield();
            goto label_298db0;
        }
    }
    ctx->pc = 0x298E04u;
    // 0x298e04: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x298E04u;
    {
        const bool branch_taken_0x298e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298e04) {
            ctx->pc = 0x298E4Cu;
            goto label_298e4c;
        }
    }
    ctx->pc = 0x298E0Cu;
label_298e0c:
    // 0x298e0c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x298e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x298e10: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x298e10u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x298e14: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x298e14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_298e18:
    // 0x298e18: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x298e18u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x298e1c: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x298e1cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x298e20: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x298e20u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x298e24: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x298e24u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x298e28: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x298e28u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x298e2c: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x298e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x298e30: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x298e30u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x298e34: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x298e34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x298e38: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x298e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x298e3c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x298e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x298e40: 0x0  nop
    ctx->pc = 0x298e40u;
    // NOP
    // 0x298e44: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x298E44u;
    {
        const bool branch_taken_0x298e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x298e44) {
            ctx->pc = 0x298E18u;
            runtime->cooperativeGuestYield();
            goto label_298e18;
        }
    }
    ctx->pc = 0x298E4Cu;
label_298e4c:
    // 0x298e4c: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x298e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x298e50: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x298e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x298e54: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x298e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x298e58: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x298e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x298e5c: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x298e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x298e60: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x298e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x298e64: 0x8869001b  lwl         $t1, 0x1B($v1)
    ctx->pc = 0x298e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x298e68: 0x98690018  lwr         $t1, 0x18($v1)
    ctx->pc = 0x298e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x298e6c: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x298e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298e70: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x298e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298e74: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x298e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298e78: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x298e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298e7c: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x298e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298e80: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x298e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298e84: 0xa889001b  swl         $t1, 0x1B($a0)
    ctx->pc = 0x298e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x298e88: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x298e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x298e8c: 0xb8890018  swr         $t1, 0x18($a0)
    ctx->pc = 0x298e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x298e90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x298E90u;
    {
        const bool branch_taken_0x298e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298E90u;
            // 0x298e94: 0xaea2ad00  sw          $v0, -0x5300($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294946048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e90) {
            ctx->pc = 0x298EC0u;
            goto label_298ec0;
        }
    }
    ctx->pc = 0x298E98u;
label_298e98:
    // 0x298e98: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x298e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x298e9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x298e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ea0: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x298EA0u;
    SET_GPR_U32(ctx, 31, 0x298EA8u);
    ctx->pc = 0x298EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298EA0u;
            // 0x298ea4: 0x3c150033  lui         $s5, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298EA8u; }
        if (ctx->pc != 0x298EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298EA8u; }
        if (ctx->pc != 0x298EA8u) { return; }
    }
    ctx->pc = 0x298EA8u;
    // 0x298ea8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x298EA8u;
    {
        const bool branch_taken_0x298ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298EA8u;
            // 0x298eac: 0xae32fff8  sw          $s2, -0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298ea8) {
            ctx->pc = 0x298EBCu;
            goto label_298ebc;
        }
    }
    ctx->pc = 0x298EB0u;
label_298eb0:
    // 0x298eb0: 0xa0400104  sb          $zero, 0x104($v0)
    ctx->pc = 0x298eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 260), (uint8_t)GPR_U32(ctx, 0));
    // 0x298eb4: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x298eb4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x298eb8: 0xae20fff8  sw          $zero, -0x8($s1)
    ctx->pc = 0x298eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 0));
label_298ebc:
    // 0x298ebc: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x298ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_298ec0:
    // 0x298ec0: 0x26b0ad00  addiu       $s0, $s5, -0x5300
    ctx->pc = 0x298ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946048));
    // 0x298ec4: 0x24a4af00  addiu       $a0, $a1, -0x5100
    ctx->pc = 0x298ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946560));
    // 0x298ec8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x298ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ecc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x298eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x298ed0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x298ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ed4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x298ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ed8: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x298ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x298edc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x298edcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ee0: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x298ee0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x298ee4: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x298EE4u;
    SET_GPR_U32(ctx, 31, 0x298EECu);
    ctx->pc = 0x298EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298EE4u;
            // 0x298ee8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298EECu; }
        if (ctx->pc != 0x298EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298EECu; }
        if (ctx->pc != 0x298EECu) { return; }
    }
    ctx->pc = 0x298EECu;
    // 0x298eec: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298EECu;
    {
        const bool branch_taken_0x298eec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x298eec) {
            ctx->pc = 0x298EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x298EECu;
            // 0x298ef0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x298F00u;
            goto label_298f00;
        }
    }
    ctx->pc = 0x298EF4u;
    // 0x298ef4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x298ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x298ef8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x298EF8u;
    {
        const bool branch_taken_0x298ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298EF8u;
            // 0x298efc: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298ef8) {
            ctx->pc = 0x298F08u;
            goto label_298f08;
        }
    }
    ctx->pc = 0x298F00u;
label_298f00:
    // 0x298f00: 0x8ea2ad00  lw          $v0, -0x5300($s5)
    ctx->pc = 0x298f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946048)));
    // 0x298f04: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x298f04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_298f08:
    // 0x298f08: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x298f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298f0c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x298f0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298f10: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x298f10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298f14: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x298f14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298f18: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x298f18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298f1c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x298f1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298f20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x298f20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298f24: 0x3e00008  jr          $ra
    ctx->pc = 0x298F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298F24u;
            // 0x298f28: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298D64u: goto label_298d64;
            case 0x298DB0u: goto label_298db0;
            case 0x298E0Cu: goto label_298e0c;
            case 0x298E18u: goto label_298e18;
            case 0x298E4Cu: goto label_298e4c;
            case 0x298E98u: goto label_298e98;
            case 0x298EB0u: goto label_298eb0;
            case 0x298EBCu: goto label_298ebc;
            case 0x298EC0u: goto label_298ec0;
            case 0x298F00u: goto label_298f00;
            case 0x298F08u: goto label_298f08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x298F2Cu;
    // 0x298f2c: 0x0  nop
    ctx->pc = 0x298f2cu;
    // NOP
}
