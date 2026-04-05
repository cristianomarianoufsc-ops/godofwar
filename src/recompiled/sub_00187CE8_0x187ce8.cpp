#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187CE8
// Address: 0x187ce8 - 0x187f80
void sub_00187CE8_0x187ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187CE8_0x187ce8");
#endif

    ctx->pc = 0x187ce8u;

    // 0x187ce8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x187cec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x187cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187cf0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x187cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x187cf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x187cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187cf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x187cfc: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x187CFCu;
    SET_GPR_U32(ctx, 31, 0x187D04u);
    ctx->pc = 0x187D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187CFCu;
            // 0x187d00: 0x24a52ed8  addiu       $a1, $a1, 0x2ED8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D04u; }
        if (ctx->pc != 0x187D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D04u; }
        if (ctx->pc != 0x187D04u) { return; }
    }
    ctx->pc = 0x187D04u;
    // 0x187d04: 0xc05e996  jal         func_17A658
    ctx->pc = 0x187D04u;
    SET_GPR_U32(ctx, 31, 0x187D0Cu);
    ctx->pc = 0x187D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187D04u;
            // 0x187d08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D0Cu; }
        if (ctx->pc != 0x187D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D0Cu; }
        if (ctx->pc != 0x187D0Cu) { return; }
    }
    ctx->pc = 0x187D0Cu;
    // 0x187d0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x187d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187d10: 0x3e00008  jr          $ra
    ctx->pc = 0x187D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187D10u;
            // 0x187d14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187DF0u: goto label_187df0;
            case 0x187E30u: goto label_187e30;
            case 0x187E3Cu: goto label_187e3c;
            case 0x187F70u: goto label_187f70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187D18u;
    // 0x187d18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x187d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x187d1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x187d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x187d20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x187d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x187d24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x187d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187d2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x187d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x187d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x187d34: 0x8e300058  lw          $s0, 0x58($s1)
    ctx->pc = 0x187d34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x187d38: 0xc04f824  jal         func_13E090
    ctx->pc = 0x187D38u;
    SET_GPR_U32(ctx, 31, 0x187D40u);
    ctx->pc = 0x187D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187D38u;
            // 0x187d3c: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D40u; }
        if (ctx->pc != 0x187D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D40u; }
        if (ctx->pc != 0x187D40u) { return; }
    }
    ctx->pc = 0x187D40u;
    // 0x187d40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x187d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d48: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x187D48u;
    SET_GPR_U32(ctx, 31, 0x187D50u);
    ctx->pc = 0x187D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187D48u;
            // 0x187d4c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D50u; }
        if (ctx->pc != 0x187D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D50u; }
        if (ctx->pc != 0x187D50u) { return; }
    }
    ctx->pc = 0x187D50u;
    // 0x187d50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d54: 0x8e260058  lw          $a2, 0x58($s1)
    ctx->pc = 0x187d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x187d58: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x187d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x187d5c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x187D5Cu;
    SET_GPR_U32(ctx, 31, 0x187D64u);
    ctx->pc = 0x187D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187D5Cu;
            // 0x187d60: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D64u; }
        if (ctx->pc != 0x187D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D64u; }
        if (ctx->pc != 0x187D64u) { return; }
    }
    ctx->pc = 0x187D64u;
    // 0x187d64: 0x6a42000f  ldl         $v0, 0xF($s2)
    ctx->pc = 0x187d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x187d68: 0x6e420008  ldr         $v0, 0x8($s2)
    ctx->pc = 0x187d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x187d6c: 0x6a430017  ldl         $v1, 0x17($s2)
    ctx->pc = 0x187d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x187d70: 0x6e430010  ldr         $v1, 0x10($s2)
    ctx->pc = 0x187d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x187d74: 0x6a44001f  ldl         $a0, 0x1F($s2)
    ctx->pc = 0x187d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x187d78: 0x6e440018  ldr         $a0, 0x18($s2)
    ctx->pc = 0x187d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x187d7c: 0x6a450027  ldl         $a1, 0x27($s2)
    ctx->pc = 0x187d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x187d80: 0x6e450020  ldr         $a1, 0x20($s2)
    ctx->pc = 0x187d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x187d84: 0xb202000b  sdl         $v0, 0xB($s0)
    ctx->pc = 0x187d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187d88: 0xb6020004  sdr         $v0, 0x4($s0)
    ctx->pc = 0x187d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187d8c: 0xb2030013  sdl         $v1, 0x13($s0)
    ctx->pc = 0x187d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187d90: 0xb603000c  sdr         $v1, 0xC($s0)
    ctx->pc = 0x187d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187d94: 0xb204001b  sdl         $a0, 0x1B($s0)
    ctx->pc = 0x187d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187d98: 0xb6040014  sdr         $a0, 0x14($s0)
    ctx->pc = 0x187d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187d9c: 0xb2050023  sdl         $a1, 0x23($s0)
    ctx->pc = 0x187d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187da0: 0xb605001c  sdr         $a1, 0x1C($s0)
    ctx->pc = 0x187da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187da4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x187da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187da8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x187da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x187dac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x187dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187db0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x187db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187db4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x187db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187db8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x187db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187dbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x187DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187DC0u;
            // 0x187dc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187DF0u: goto label_187df0;
            case 0x187E30u: goto label_187e30;
            case 0x187E3Cu: goto label_187e3c;
            case 0x187F70u: goto label_187f70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187DC8u;
    // 0x187dc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x187dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x187dcc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x187dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x187dd0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x187dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x187dd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x187dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187dd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187ddc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x187ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x187de0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x187de0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x187de4: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x187DE4u;
    {
        const bool branch_taken_0x187de4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x187de4) {
            ctx->pc = 0x187DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187DE4u;
            // 0x187de8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187E3Cu;
            goto label_187e3c;
        }
    }
    ctx->pc = 0x187DECu;
    // 0x187dec: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x187decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_187df0:
    // 0x187df0: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x187df0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187df4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187df8: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x187df8u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x187dfc: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x187dfcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x187e00: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x187e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x187e04: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x187E04u;
    {
        const bool branch_taken_0x187e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187E04u;
            // 0x187e08: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e04) {
            ctx->pc = 0x187E30u;
            goto label_187e30;
        }
    }
    ctx->pc = 0x187E0Cu;
    // 0x187e0c: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x187e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x187e10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x187E10u;
    {
        const bool branch_taken_0x187e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187e10) {
            ctx->pc = 0x187E30u;
            goto label_187e30;
        }
    }
    ctx->pc = 0x187E18u;
    // 0x187e18: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x187e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x187e1c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x187e1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x187e20: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x187e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x187e24: 0x40f809  jalr        $v0
    ctx->pc = 0x187E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187E2Cu);
        ctx->pc = 0x187E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187E24u;
            // 0x187e28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x187E2Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187DF0u: goto label_187df0;
            case 0x187E30u: goto label_187e30;
            case 0x187E3Cu: goto label_187e3c;
            case 0x187F70u: goto label_187f70;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x187E2Cu; }
            if (ctx->pc != 0x187E2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x187E2Cu;
    // 0x187e2c: 0x0  nop
    ctx->pc = 0x187e2cu;
    // NOP
label_187e30:
    // 0x187e30: 0x1640ffef  bnez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x187E30u;
    {
        const bool branch_taken_0x187e30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x187E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187E30u;
            // 0x187e34: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e30) {
            ctx->pc = 0x187DF0u;
            runtime->cooperativeGuestYield();
            goto label_187df0;
        }
    }
    ctx->pc = 0x187E38u;
    // 0x187e38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x187e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_187e3c:
    // 0x187e3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x187e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187e40: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x187e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187e48: 0x3e00008  jr          $ra
    ctx->pc = 0x187E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187E48u;
            // 0x187e4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187DF0u: goto label_187df0;
            case 0x187E30u: goto label_187e30;
            case 0x187E3Cu: goto label_187e3c;
            case 0x187F70u: goto label_187f70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187E50u;
    // 0x187e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x187e54: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x187e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x187e58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187e5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x187e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x187e60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187e64: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x187E64u;
    SET_GPR_U32(ctx, 31, 0x187E6Cu);
    ctx->pc = 0x187E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187E64u;
            // 0x187e68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187E6Cu; }
        if (ctx->pc != 0x187E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187E6Cu; }
        if (ctx->pc != 0x187E6Cu) { return; }
    }
    ctx->pc = 0x187E6Cu;
    // 0x187e6c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x187e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187e70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e74: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x187e74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x187e78: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x187e78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x187e7c: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x187e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x187e80: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x187e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x187e84: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x187e84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x187e88: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x187e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x187e8c: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x187e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x187e90: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x187e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x187e94: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x187e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x187e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e9c: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x187e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x187ea0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x187ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ea4: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x187ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x187ea8: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x187ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x187eac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x187eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x187eb0: 0xc08e222  jal         func_238888
    ctx->pc = 0x187EB0u;
    SET_GPR_U32(ctx, 31, 0x187EB8u);
    ctx->pc = 0x187EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187EB0u;
            // 0x187eb4: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187EB8u; }
        if (ctx->pc != 0x187EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187EB8u; }
        if (ctx->pc != 0x187EB8u) { return; }
    }
    ctx->pc = 0x187EB8u;
    // 0x187eb8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x187eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x187ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ec0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x187ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ec4: 0xc08e222  jal         func_238888
    ctx->pc = 0x187EC4u;
    SET_GPR_U32(ctx, 31, 0x187ECCu);
    ctx->pc = 0x187EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187EC4u;
            // 0x187ec8: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187ECCu; }
        if (ctx->pc != 0x187ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187ECCu; }
        if (ctx->pc != 0x187ECCu) { return; }
    }
    ctx->pc = 0x187ECCu;
    // 0x187ecc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x187eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x187ed0: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x187ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x187ed4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x187ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x187ed8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x187ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x187edc: 0x2463fc10  addiu       $v1, $v1, -0x3F0
    ctx->pc = 0x187edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966288));
    // 0x187ee0: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x187ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x187ee4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x187ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x187ee8: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x187ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x187eec: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x187eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x187ef0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x187ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x187ef4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x187ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x187ef8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x187ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x187efc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x187efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x187f00: 0xc08e43a  jal         func_2390E8
    ctx->pc = 0x187F00u;
    SET_GPR_U32(ctx, 31, 0x187F08u);
    ctx->pc = 0x187F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187F00u;
            // 0x187f04: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390E8u;
    if (runtime->hasFunction(0x2390E8u)) {
        auto targetFn = runtime->lookupFunction(0x2390E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F08u; }
        if (ctx->pc != 0x187F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390e8_0x2390f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F08u; }
        if (ctx->pc != 0x187F08u) { return; }
    }
    ctx->pc = 0x187F08u;
    // 0x187f08: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x187f08u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187f0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x187f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x187f10: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x187f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x187f14: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x187f14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x187f18: 0x2463b188  addiu       $v1, $v1, -0x4E78
    ctx->pc = 0x187f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947208));
    // 0x187f1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x187f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187f20: 0xa6050002  sh          $a1, 0x2($s0)
    ctx->pc = 0x187f20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x187f24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x187f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f28: 0xae040030  sw          $a0, 0x30($s0)
    ctx->pc = 0x187f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
    // 0x187f2c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x187f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x187f30: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x187f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x187f34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x187f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187f38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187f40: 0x3e00008  jr          $ra
    ctx->pc = 0x187F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187F40u;
            // 0x187f44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187DF0u: goto label_187df0;
            case 0x187E30u: goto label_187e30;
            case 0x187E3Cu: goto label_187e3c;
            case 0x187F70u: goto label_187f70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187F48u;
    // 0x187f48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187f4c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x187f4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f50: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x187F50u;
    {
        const bool branch_taken_0x187f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187F50u;
            // 0x187f54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f50) {
            ctx->pc = 0x187F70u;
            goto label_187f70;
        }
    }
    ctx->pc = 0x187F58u;
    // 0x187f58: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x187f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x187f5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x187f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x187f60: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x187f60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x187f64: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x187f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x187f68: 0x40f809  jalr        $v0
    ctx->pc = 0x187F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187F70u);
        ctx->pc = 0x187F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187F68u;
            // 0x187f6c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x187F70u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187DF0u: goto label_187df0;
            case 0x187E30u: goto label_187e30;
            case 0x187E3Cu: goto label_187e3c;
            case 0x187F70u: goto label_187f70;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x187F70u; }
            if (ctx->pc != 0x187F70u) { return; }
        }
        }
    }
    ctx->pc = 0x187F70u;
label_187f70:
    // 0x187f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187f74: 0x3e00008  jr          $ra
    ctx->pc = 0x187F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187F74u;
            // 0x187f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187DF0u: goto label_187df0;
            case 0x187E30u: goto label_187e30;
            case 0x187E3Cu: goto label_187e3c;
            case 0x187F70u: goto label_187f70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187F7Cu;
    // 0x187f7c: 0x0  nop
    ctx->pc = 0x187f7cu;
    // NOP
}
