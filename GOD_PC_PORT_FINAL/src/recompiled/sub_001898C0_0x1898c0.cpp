#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001898C0
// Address: 0x1898c0 - 0x189958
void sub_001898C0_0x1898c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001898C0_0x1898c0");
#endif

    ctx->pc = 0x1898c0u;

    // 0x1898c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1898c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1898c4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1898c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1898c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1898c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1898cc: 0x24462fb0  addiu       $a2, $v0, 0x2FB0
    ctx->pc = 0x1898ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12208));
    // 0x1898d0: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1898d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1898d4: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1898d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1898d8: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1898d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1898dc: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1898dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1898e0: 0x80c50010  lb          $a1, 0x10($a2)
    ctx->pc = 0x1898e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1898e4: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1898e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1898e8: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1898e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1898ec: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x1898ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1898f0: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x1898f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1898f4: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x1898f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x1898f8: 0x0  nop
    ctx->pc = 0x1898f8u;
    // NOP
    // 0x1898fc: 0xc09e580  jal         func_279600
    ctx->pc = 0x1898FCu;
    SET_GPR_U32(ctx, 31, 0x189904u);
    ctx->pc = 0x279600u;
    if (runtime->hasFunction(0x279600u)) {
        auto targetFn = runtime->lookupFunction(0x279600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189904u; }
        if (ctx->pc != 0x189904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279600_0x279600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189904u; }
        if (ctx->pc != 0x189904u) { return; }
    }
    ctx->pc = 0x189904u;
    // 0x189904: 0xc09bf68  jal         func_26FDA0
    ctx->pc = 0x189904u;
    SET_GPR_U32(ctx, 31, 0x18990Cu);
    ctx->pc = 0x26FDA0u;
    if (runtime->hasFunction(0x26FDA0u)) {
        auto targetFn = runtime->lookupFunction(0x26FDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18990Cu; }
        if (ctx->pc != 0x18990Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026FDA0_0x26fda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18990Cu; }
        if (ctx->pc != 0x18990Cu) { return; }
    }
    ctx->pc = 0x18990Cu;
    // 0x18990c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x18990cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x189910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189918: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x189918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18991c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18991cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189920: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x189920u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189924: 0xc09bb48  jal         func_26ED20
    ctx->pc = 0x189924u;
    SET_GPR_U32(ctx, 31, 0x18992Cu);
    ctx->pc = 0x189928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189924u;
            // 0x189928: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26ED20u;
    if (runtime->hasFunction(0x26ED20u)) {
        auto targetFn = runtime->lookupFunction(0x26ED20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18992Cu; }
        if (ctx->pc != 0x18992Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ed20_0x26ed68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18992Cu; }
        if (ctx->pc != 0x18992Cu) { return; }
    }
    ctx->pc = 0x18992Cu;
    // 0x18992c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x18992cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x189930: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x189930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189934: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189938: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x189938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18993c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18993cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189940: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x189940u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189944: 0xc09bb48  jal         func_26ED20
    ctx->pc = 0x189944u;
    SET_GPR_U32(ctx, 31, 0x18994Cu);
    ctx->pc = 0x189948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189944u;
            // 0x189948: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26ED20u;
    if (runtime->hasFunction(0x26ED20u)) {
        auto targetFn = runtime->lookupFunction(0x26ED20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18994Cu; }
        if (ctx->pc != 0x18994Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ed20_0x26ed68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18994Cu; }
        if (ctx->pc != 0x18994Cu) { return; }
    }
    ctx->pc = 0x18994Cu;
    // 0x18994c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18994cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189950: 0x3e00008  jr          $ra
    ctx->pc = 0x189950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189950u;
            // 0x189954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x189958u;
}
