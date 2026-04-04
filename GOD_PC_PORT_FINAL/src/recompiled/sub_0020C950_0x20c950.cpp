#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020C950
// Address: 0x20c950 - 0x20cc50
void sub_0020C950_0x20c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C950_0x20c950");
#endif

    ctx->pc = 0x20c950u;

    // 0x20c950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20c950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20c954: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20c954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20c958: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x20c958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x20c95c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20c95cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c960: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20c960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c964: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20c964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x20c968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c96c: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x20c96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x20c970: 0xc0830ce  jal         func_20C338
    ctx->pc = 0x20C970u;
    SET_GPR_U32(ctx, 31, 0x20C978u);
    ctx->pc = 0x20C974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C970u;
            // 0x20c974: 0x2650000c  addiu       $s0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C338u;
    if (runtime->hasFunction(0x20C338u)) {
        auto targetFn = runtime->lookupFunction(0x20C338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C978u; }
        if (ctx->pc != 0x20C978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020C338_0x20c338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C978u; }
        if (ctx->pc != 0x20C978u) { return; }
    }
    ctx->pc = 0x20C978u;
    // 0x20c978: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x20c978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x20c97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c980: 0x244297a0  addiu       $v0, $v0, -0x6860
    ctx->pc = 0x20c980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940576));
    // 0x20c984: 0xc090ffc  jal         func_243FF0
    ctx->pc = 0x20C984u;
    SET_GPR_U32(ctx, 31, 0x20C98Cu);
    ctx->pc = 0x20C988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C984u;
            // 0x20c988: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243FF0u;
    if (runtime->hasFunction(0x243FF0u)) {
        auto targetFn = runtime->lookupFunction(0x243FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C98Cu; }
        if (ctx->pc != 0x20C98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243ff0_0x243ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C98Cu; }
        if (ctx->pc != 0x20C98Cu) { return; }
    }
    ctx->pc = 0x20C98Cu;
    // 0x20c98c: 0x2301025  or          $v0, $s1, $s0
    ctx->pc = 0x20c98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
    // 0x20c990: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20c990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x20c994: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x20C994u;
    {
        const bool branch_taken_0x20c994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C994u;
            // 0x20c998: 0x26220060  addiu       $v0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c994) {
            ctx->pc = 0x20C9F0u;
            goto label_20c9f0;
        }
    }
    ctx->pc = 0x20C99Cu;
label_20c99c:
    // 0x20c99c: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x20c99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x20c9a0: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x20c9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x20c9a4: 0x6a24000f  ldl         $a0, 0xF($s1)
    ctx->pc = 0x20c9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x20c9a8: 0x6e240008  ldr         $a0, 0x8($s1)
    ctx->pc = 0x20c9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x20c9ac: 0x6a250017  ldl         $a1, 0x17($s1)
    ctx->pc = 0x20c9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x20c9b0: 0x6e250010  ldr         $a1, 0x10($s1)
    ctx->pc = 0x20c9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x20c9b4: 0x6a26001f  ldl         $a2, 0x1F($s1)
    ctx->pc = 0x20c9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x20c9b8: 0x6e260018  ldr         $a2, 0x18($s1)
    ctx->pc = 0x20c9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x20c9bc: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x20c9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c9c0: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x20c9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c9c4: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x20c9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c9c8: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x20c9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c9cc: 0xb2050017  sdl         $a1, 0x17($s0)
    ctx->pc = 0x20c9ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c9d0: 0xb6050010  sdr         $a1, 0x10($s0)
    ctx->pc = 0x20c9d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c9d4: 0xb206001f  sdl         $a2, 0x1F($s0)
    ctx->pc = 0x20c9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c9d8: 0xb6060018  sdr         $a2, 0x18($s0)
    ctx->pc = 0x20c9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c9dc: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x20c9dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x20c9e0: 0x1622ffee  bne         $s1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x20C9E0u;
    {
        const bool branch_taken_0x20c9e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C9E0u;
            // 0x20c9e4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9e0) {
            ctx->pc = 0x20C99Cu;
            runtime->cooperativeGuestYield();
            goto label_20c99c;
        }
    }
    ctx->pc = 0x20C9E8u;
    // 0x20c9e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20C9E8u;
    {
        const bool branch_taken_0x20c9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c9e8) {
            ctx->pc = 0x20CA1Cu;
            goto label_20ca1c;
        }
    }
    ctx->pc = 0x20C9F0u;
label_20c9f0:
    // 0x20c9f0: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x20c9f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20c9f4: 0xde240008  ld          $a0, 0x8($s1)
    ctx->pc = 0x20c9f4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20c9f8: 0xde250010  ld          $a1, 0x10($s1)
    ctx->pc = 0x20c9f8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x20c9fc: 0xde260018  ld          $a2, 0x18($s1)
    ctx->pc = 0x20c9fcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x20ca00: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x20ca00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x20ca04: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x20ca04u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x20ca08: 0xfe050010  sd          $a1, 0x10($s0)
    ctx->pc = 0x20ca08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 5));
    // 0x20ca0c: 0xfe060018  sd          $a2, 0x18($s0)
    ctx->pc = 0x20ca0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 6));
    // 0x20ca10: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x20ca10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x20ca14: 0x1622fff6  bne         $s1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x20CA14u;
    {
        const bool branch_taken_0x20ca14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x20CA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CA14u;
            // 0x20ca18: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca14) {
            ctx->pc = 0x20C9F0u;
            runtime->cooperativeGuestYield();
            goto label_20c9f0;
        }
    }
    ctx->pc = 0x20CA1Cu;
label_20ca1c:
    // 0x20ca1c: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x20ca1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x20ca20: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x20ca20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x20ca24: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x20ca24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x20ca28: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x20ca28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x20ca2c: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x20ca2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20ca30: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x20ca30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20ca34: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x20ca34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20ca38: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x20ca38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20ca3c: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x20ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x20ca40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20ca44: 0x2c420082  sltiu       $v0, $v0, 0x82
    ctx->pc = 0x20ca44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)130) ? 1 : 0);
    // 0x20ca48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20CA48u;
    {
        const bool branch_taken_0x20ca48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CA48u;
            // 0x20ca4c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca48) {
            ctx->pc = 0x20CA5Cu;
            goto label_20ca5c;
        }
    }
    ctx->pc = 0x20CA50u;
    // 0x20ca50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20ca54: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x20ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
    // 0x20ca58: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_20ca5c:
    // 0x20ca5c: 0x8c42c4dc  lw          $v0, -0x3B24($v0)
    ctx->pc = 0x20ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952156)));
    // 0x20ca60: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CA60u;
    {
        const bool branch_taken_0x20ca60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20CA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CA60u;
            // 0x20ca64: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca60) {
            ctx->pc = 0x20CA78u;
            goto label_20ca78;
        }
    }
    ctx->pc = 0x20CA68u;
    // 0x20ca68: 0x8c42c4e0  lw          $v0, -0x3B20($v0)
    ctx->pc = 0x20ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952160)));
    // 0x20ca6c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20CA6Cu;
    {
        const bool branch_taken_0x20ca6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CA6Cu;
            // 0x20ca70: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca6c) {
            ctx->pc = 0x20CA94u;
            goto label_20ca94;
        }
    }
    ctx->pc = 0x20CA74u;
    // 0x20ca74: 0x0  nop
    ctx->pc = 0x20ca74u;
    // NOP
label_20ca78:
    // 0x20ca78: 0x0  nop
    ctx->pc = 0x20ca78u;
    // NOP
    // 0x20ca7c: 0x0  nop
    ctx->pc = 0x20ca7cu;
    // NOP
    // 0x20ca80: 0x0  nop
    ctx->pc = 0x20ca80u;
    // NOP
    // 0x20ca84: 0x0  nop
    ctx->pc = 0x20ca84u;
    // NOP
    // 0x20ca88: 0x0  nop
    ctx->pc = 0x20ca88u;
    // NOP
    // 0x20ca8c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x20CA8Cu;
    {
        const bool branch_taken_0x20ca8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ca8c) {
            ctx->pc = 0x20CA78u;
            runtime->cooperativeGuestYield();
            goto label_20ca78;
        }
    }
    ctx->pc = 0x20CA94u;
label_20ca94:
    // 0x20ca94: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20ca94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ca98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20ca98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ca9c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20ca9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20caa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20caa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20caa4: 0x3e00008  jr          $ra
    ctx->pc = 0x20CAA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CAA4u;
            // 0x20caa8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C99Cu: goto label_20c99c;
            case 0x20C9F0u: goto label_20c9f0;
            case 0x20CA1Cu: goto label_20ca1c;
            case 0x20CA5Cu: goto label_20ca5c;
            case 0x20CA78u: goto label_20ca78;
            case 0x20CA94u: goto label_20ca94;
            case 0x20CC10u: goto label_20cc10;
            case 0x20CC24u: goto label_20cc24;
            case 0x20CC40u: goto label_20cc40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20CAACu;
    // 0x20caac: 0x0  nop
    ctx->pc = 0x20caacu;
    // NOP
    // 0x20cab0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20cab4: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x20cab4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x20cab8: 0x8c42bde0  lw          $v0, -0x4220($v0)
    ctx->pc = 0x20cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950368)));
    // 0x20cabc: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x20cabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x20cac0: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x20cac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x20cac4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x20cac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x20cac8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x20cac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x20cacc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20caccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cad0: 0xae25008c  sw          $a1, 0x8C($s1)
    ctx->pc = 0x20cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
    // 0x20cad4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x20cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20cad8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x20cad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20cadc: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x20cadcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x20cae0: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x20cae0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x20cae4: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x20cae4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20cae8: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x20cae8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x20caec: 0x8e060078  lw          $a2, 0x78($s0)
    ctx->pc = 0x20caecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x20caf0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x20caf0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x20caf4: 0x8e070048  lw          $a3, 0x48($s0)
    ctx->pc = 0x20caf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x20caf8: 0x8e080074  lw          $t0, 0x74($s0)
    ctx->pc = 0x20caf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x20cafc: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x20cafcu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x20cb00: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x20cb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x20cb04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20cb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb08: 0xc04965c  jal         func_125970
    ctx->pc = 0x20CB08u;
    SET_GPR_U32(ctx, 31, 0x20CB10u);
    ctx->pc = 0x20CB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CB08u;
            // 0x20cb0c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125970u;
    if (runtime->hasFunction(0x125970u)) {
        auto targetFn = runtime->lookupFunction(0x125970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB10u; }
        if (ctx->pc != 0x20CB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125970_0x125970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB10u; }
        if (ctx->pc != 0x20CB10u) { return; }
    }
    ctx->pc = 0x20CB10u;
    // 0x20cb10: 0x8e090010  lw          $t1, 0x10($s0)
    ctx->pc = 0x20cb10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20cb14: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x20cb14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20cb18: 0x71251389  pcpyld      $v0, $t1, $a1
    ctx->pc = 0x20cb18u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x20cb1c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x20cb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x20cb20: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x20cb20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20cb24: 0x70c72b89  pcpyld      $a1, $a2, $a3
    ctx->pc = 0x20cb24u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x20cb28: 0x70a22cc8  ppacw       $a1, $a1, $v0
    ctx->pc = 0x20cb28u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x20cb2c: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x20cb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x20cb30: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x20cb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x20cb34: 0x8e080020  lw          $t0, 0x20($s0)
    ctx->pc = 0x20cb34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x20cb38: 0x8e09001c  lw          $t1, 0x1C($s0)
    ctx->pc = 0x20cb38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x20cb3c: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x20cb3cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x20cb40: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x20cb40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x20cb44: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x20cb44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x20cb48: 0x70e83389  pcpyld      $a2, $a3, $t0
    ctx->pc = 0x20cb48u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x20cb4c: 0x70c234c8  ppacw       $a2, $a2, $v0
    ctx->pc = 0x20cb4cu;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x20cb50: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x20cb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x20cb54: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x20cb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x20cb58: 0x8e090030  lw          $t1, 0x30($s0)
    ctx->pc = 0x20cb58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20cb5c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x20cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x20cb60: 0x71221b89  pcpyld      $v1, $t1, $v0
    ctx->pc = 0x20cb60u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x20cb64: 0x8e080038  lw          $t0, 0x38($s0)
    ctx->pc = 0x20cb64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x20cb68: 0x8e090034  lw          $t1, 0x34($s0)
    ctx->pc = 0x20cb68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x20cb6c: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x20cb6cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x20cb70: 0xc60c003c  lwc1        $f12, 0x3C($s0)
    ctx->pc = 0x20cb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20cb74: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x20cb74u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x20cb78: 0xc60d0040  lwc1        $f13, 0x40($s0)
    ctx->pc = 0x20cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20cb7c: 0xc60e0044  lwc1        $f14, 0x44($s0)
    ctx->pc = 0x20cb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20cb80: 0x70023ca9  por         $a3, $zero, $v0
    ctx->pc = 0x20cb80u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x20cb84: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x20cb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x20cb88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20cb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb8c: 0xc049692  jal         func_125A48
    ctx->pc = 0x20CB8Cu;
    SET_GPR_U32(ctx, 31, 0x20CB94u);
    ctx->pc = 0x20CB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CB8Cu;
            // 0x20cb90: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125A48u;
    if (runtime->hasFunction(0x125A48u)) {
        auto targetFn = runtime->lookupFunction(0x125A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB94u; }
        if (ctx->pc != 0x20CB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_125a48_0x125b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB94u; }
        if (ctx->pc != 0x20CB94u) { return; }
    }
    ctx->pc = 0x20CB94u;
    // 0x20cb94: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x20cb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20cb98: 0x10c00022  beqz        $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x20CB98u;
    {
        const bool branch_taken_0x20cb98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CB98u;
            // 0x20cb9c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb98) {
            ctx->pc = 0x20CC24u;
            goto label_20cc24;
        }
    }
    ctx->pc = 0x20CBA0u;
    // 0x20cba0: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x20cba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cba4: 0xc443c658  lwc1        $f3, -0x39A8($v0)
    ctx->pc = 0x20cba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20cba8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x20cba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x20cbac: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x20cbacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x20cbb0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x20cbb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x20cbb4: 0xc602004c  lwc1        $f2, 0x4C($s0)
    ctx->pc = 0x20cbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20cbb8: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x20cbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cbbc: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x20cbbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x20cbc0: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x20cbc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x20cbc4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x20cbc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x20cbc8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x20cbc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x20cbcc: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x20cbccu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x20cbd0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x20cbd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x20cbd4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x20cbd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x20cbd8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x20cbd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20cbdc: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x20cbdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x20cbe0: 0x70471b89  pcpyld      $v1, $v0, $a3
    ctx->pc = 0x20cbe0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x20cbe4: 0x8e100058  lw          $s0, 0x58($s0)
    ctx->pc = 0x20cbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x20cbe8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x20cbe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x20cbec: 0x72081389  pcpyld      $v0, $s0, $t0
    ctx->pc = 0x20cbecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 8)));
    // 0x20cbf0: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x20cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x20cbf4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x20cbf4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x20cbf8: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x20cbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x20cbfc: 0x10860004  beq         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x20CBFCu;
    {
        const bool branch_taken_0x20cbfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x20CC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CBFCu;
            // 0x20cc00: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cbfc) {
            ctx->pc = 0x20CC10u;
            goto label_20cc10;
        }
    }
    ctx->pc = 0x20CC04u;
    // 0x20cc04: 0xae260080  sw          $a2, 0x80($s1)
    ctx->pc = 0x20cc04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 6));
    // 0x20cc08: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x20CC08u;
    SET_GPR_U32(ctx, 31, 0x20CC10u);
    ctx->pc = 0x20CC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC08u;
            // 0x20cc0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC10u; }
        if (ctx->pc != 0x20CC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23f000_0x23f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC10u; }
        if (ctx->pc != 0x20CC10u) { return; }
    }
    ctx->pc = 0x20CC10u;
label_20cc10:
    // 0x20cc10: 0x7ba50090  lq          $a1, 0x90($sp)
    ctx->pc = 0x20cc10u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20cc14: 0xc08fc04  jal         func_23F010
    ctx->pc = 0x20CC14u;
    SET_GPR_U32(ctx, 31, 0x20CC1Cu);
    ctx->pc = 0x20CC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC14u;
            // 0x20cc18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F010u;
    if (runtime->hasFunction(0x23F010u)) {
        auto targetFn = runtime->lookupFunction(0x23F010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC1Cu; }
        if (ctx->pc != 0x20CC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23f010_0x23f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC1Cu; }
        if (ctx->pc != 0x20CC1Cu) { return; }
    }
    ctx->pc = 0x20CC1Cu;
    // 0x20cc1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20CC1Cu;
    {
        const bool branch_taken_0x20cc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC1Cu;
            // 0x20cc20: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc1c) {
            ctx->pc = 0x20CC40u;
            goto label_20cc40;
        }
    }
    ctx->pc = 0x20CC24u;
label_20cc24:
    // 0x20cc24: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x20cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x20cc28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CC28u;
    {
        const bool branch_taken_0x20cc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC28u;
            // 0x20cc2c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc28) {
            ctx->pc = 0x20CC40u;
            goto label_20cc40;
        }
    }
    ctx->pc = 0x20CC30u;
    // 0x20cc30: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x20cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x20cc34: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x20CC34u;
    SET_GPR_U32(ctx, 31, 0x20CC3Cu);
    ctx->pc = 0x20CC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC34u;
            // 0x20cc38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC3Cu; }
        if (ctx->pc != 0x20CC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23f000_0x23f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC3Cu; }
        if (ctx->pc != 0x20CC3Cu) { return; }
    }
    ctx->pc = 0x20CC3Cu;
    // 0x20cc3c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x20cc3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_20cc40:
    // 0x20cc40: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x20cc40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20cc44: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x20cc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20cc48: 0x3e00008  jr          $ra
    ctx->pc = 0x20CC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC48u;
            // 0x20cc4c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C99Cu: goto label_20c99c;
            case 0x20C9F0u: goto label_20c9f0;
            case 0x20CA1Cu: goto label_20ca1c;
            case 0x20CA5Cu: goto label_20ca5c;
            case 0x20CA78u: goto label_20ca78;
            case 0x20CA94u: goto label_20ca94;
            case 0x20CC10u: goto label_20cc10;
            case 0x20CC24u: goto label_20cc24;
            case 0x20CC40u: goto label_20cc40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20CC50u;
}
