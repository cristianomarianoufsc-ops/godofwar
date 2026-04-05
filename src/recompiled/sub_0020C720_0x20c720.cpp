#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020C720
// Address: 0x20c720 - 0x20c950
void sub_0020C720_0x20c720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C720_0x20c720");
#endif

    ctx->pc = 0x20c720u;

    // 0x20c720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20c724: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20c724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20c728: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x20c728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x20c72c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20c72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c730: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20c730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c734: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20c734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x20c738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c73c: 0x26260024  addiu       $a2, $s1, 0x24
    ctx->pc = 0x20c73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x20c740: 0xc0830ce  jal         func_20C338
    ctx->pc = 0x20C740u;
    SET_GPR_U32(ctx, 31, 0x20C748u);
    ctx->pc = 0x20C744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C740u;
            // 0x20c744: 0x2650000c  addiu       $s0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C338u;
    if (runtime->hasFunction(0x20C338u)) {
        auto targetFn = runtime->lookupFunction(0x20C338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C748u; }
        if (ctx->pc != 0x20C748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020C338_0x20c338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C748u; }
        if (ctx->pc != 0x20C748u) { return; }
    }
    ctx->pc = 0x20C748u;
    // 0x20c748: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x20c748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x20c74c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c750: 0x244297c0  addiu       $v0, $v0, -0x6840
    ctx->pc = 0x20c750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940608));
    // 0x20c754: 0xc090ff0  jal         func_243FC0
    ctx->pc = 0x20C754u;
    SET_GPR_U32(ctx, 31, 0x20C75Cu);
    ctx->pc = 0x20C758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C754u;
            // 0x20c758: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243FC0u;
    if (runtime->hasFunction(0x243FC0u)) {
        auto targetFn = runtime->lookupFunction(0x243FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C75Cu; }
        if (ctx->pc != 0x20C75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243fc0_0x243fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C75Cu; }
        if (ctx->pc != 0x20C75Cu) { return; }
    }
    ctx->pc = 0x20C75Cu;
    // 0x20c75c: 0x2301025  or          $v0, $s1, $s0
    ctx->pc = 0x20c75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
    // 0x20c760: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20c760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x20c764: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x20C764u;
    {
        const bool branch_taken_0x20c764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C764u;
            // 0x20c768: 0x26220040  addiu       $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c764) {
            ctx->pc = 0x20C7C0u;
            goto label_20c7c0;
        }
    }
    ctx->pc = 0x20C76Cu;
label_20c76c:
    // 0x20c76c: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x20c76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x20c770: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x20c770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x20c774: 0x6a24000f  ldl         $a0, 0xF($s1)
    ctx->pc = 0x20c774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x20c778: 0x6e240008  ldr         $a0, 0x8($s1)
    ctx->pc = 0x20c778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x20c77c: 0x6a250017  ldl         $a1, 0x17($s1)
    ctx->pc = 0x20c77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x20c780: 0x6e250010  ldr         $a1, 0x10($s1)
    ctx->pc = 0x20c780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x20c784: 0x6a26001f  ldl         $a2, 0x1F($s1)
    ctx->pc = 0x20c784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x20c788: 0x6e260018  ldr         $a2, 0x18($s1)
    ctx->pc = 0x20c788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x20c78c: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x20c78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c790: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x20c790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c794: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x20c794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c798: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x20c798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c79c: 0xb2050017  sdl         $a1, 0x17($s0)
    ctx->pc = 0x20c79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c7a0: 0xb6050010  sdr         $a1, 0x10($s0)
    ctx->pc = 0x20c7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c7a4: 0xb206001f  sdl         $a2, 0x1F($s0)
    ctx->pc = 0x20c7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c7a8: 0xb6060018  sdr         $a2, 0x18($s0)
    ctx->pc = 0x20c7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c7ac: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x20c7acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x20c7b0: 0x1622ffee  bne         $s1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x20C7B0u;
    {
        const bool branch_taken_0x20c7b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C7B0u;
            // 0x20c7b4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7b0) {
            ctx->pc = 0x20C76Cu;
            runtime->cooperativeGuestYield();
            goto label_20c76c;
        }
    }
    ctx->pc = 0x20C7B8u;
    // 0x20c7b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20C7B8u;
    {
        const bool branch_taken_0x20c7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c7b8) {
            ctx->pc = 0x20C7ECu;
            goto label_20c7ec;
        }
    }
    ctx->pc = 0x20C7C0u;
label_20c7c0:
    // 0x20c7c0: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x20c7c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20c7c4: 0xde240008  ld          $a0, 0x8($s1)
    ctx->pc = 0x20c7c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20c7c8: 0xde250010  ld          $a1, 0x10($s1)
    ctx->pc = 0x20c7c8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x20c7cc: 0xde260018  ld          $a2, 0x18($s1)
    ctx->pc = 0x20c7ccu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x20c7d0: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x20c7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x20c7d4: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x20c7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x20c7d8: 0xfe050010  sd          $a1, 0x10($s0)
    ctx->pc = 0x20c7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 5));
    // 0x20c7dc: 0xfe060018  sd          $a2, 0x18($s0)
    ctx->pc = 0x20c7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 6));
    // 0x20c7e0: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x20c7e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x20c7e4: 0x1622fff6  bne         $s1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x20C7E4u;
    {
        const bool branch_taken_0x20c7e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C7E4u;
            // 0x20c7e8: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7e4) {
            ctx->pc = 0x20C7C0u;
            runtime->cooperativeGuestYield();
            goto label_20c7c0;
        }
    }
    ctx->pc = 0x20C7ECu;
label_20c7ec:
    // 0x20c7ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20c7f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20c7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20c7f4: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x20c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x20c7f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20c7fc: 0x2c420082  sltiu       $v0, $v0, 0x82
    ctx->pc = 0x20c7fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)130) ? 1 : 0);
    // 0x20c800: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C800u;
    {
        const bool branch_taken_0x20c800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C800u;
            // 0x20c804: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c800) {
            ctx->pc = 0x20C814u;
            goto label_20c814;
        }
    }
    ctx->pc = 0x20C808u;
    // 0x20c808: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20c808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20c80c: 0xae42004c  sw          $v0, 0x4C($s2)
    ctx->pc = 0x20c80cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
    // 0x20c810: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x20c810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20c814:
    // 0x20c814: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20c814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20c818: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20c818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20c81c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20c81cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c824: 0x3e00008  jr          $ra
    ctx->pc = 0x20C824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C824u;
            // 0x20c828: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C76Cu: goto label_20c76c;
            case 0x20C7C0u: goto label_20c7c0;
            case 0x20C7ECu: goto label_20c7ec;
            case 0x20C814u: goto label_20c814;
            case 0x20C910u: goto label_20c910;
            case 0x20C924u: goto label_20c924;
            case 0x20C940u: goto label_20c940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C82Cu;
    // 0x20c82c: 0x0  nop
    ctx->pc = 0x20c82cu;
    // NOP
    // 0x20c830: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20c830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20c834: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20c834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20c838: 0x8c42bde0  lw          $v0, -0x4220($v0)
    ctx->pc = 0x20c838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950368)));
    // 0x20c83c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x20c83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x20c840: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x20c840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x20c844: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x20c844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x20c848: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20c848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20c84c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c850: 0xae25008c  sw          $a1, 0x8C($s1)
    ctx->pc = 0x20c850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
    // 0x20c854: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x20c854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20c858: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x20c858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20c85c: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x20c85cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x20c860: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x20c860u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x20c864: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x20c864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20c868: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x20c868u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x20c86c: 0x8e080048  lw          $t0, 0x48($s0)
    ctx->pc = 0x20c86cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x20c870: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x20c870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x20c874: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x20c874u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x20c878: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x20c878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x20c87c: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x20c87cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x20c880: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x20c880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x20c884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20c884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c888: 0xc04965c  jal         func_125970
    ctx->pc = 0x20C888u;
    SET_GPR_U32(ctx, 31, 0x20C890u);
    ctx->pc = 0x20C88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C888u;
            // 0x20c88c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125970u;
    if (runtime->hasFunction(0x125970u)) {
        auto targetFn = runtime->lookupFunction(0x125970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C890u; }
        if (ctx->pc != 0x20C890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125970_0x125970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C890u; }
        if (ctx->pc != 0x20C890u) { return; }
    }
    ctx->pc = 0x20C890u;
    // 0x20c890: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x20c890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20c894: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x20C894u;
    {
        const bool branch_taken_0x20c894 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C894u;
            // 0x20c898: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c894) {
            ctx->pc = 0x20C924u;
            goto label_20c924;
        }
    }
    ctx->pc = 0x20C89Cu;
    // 0x20c89c: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x20c89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c8a0: 0xc443c658  lwc1        $f3, -0x39A8($v0)
    ctx->pc = 0x20c8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20c8a4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x20c8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x20c8a8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x20c8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x20c8ac: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x20c8acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x20c8b0: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x20c8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20c8b4: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x20c8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c8b8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x20c8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x20c8bc: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x20c8bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x20c8c0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x20c8c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x20c8c4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x20c8c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x20c8c8: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x20c8c8u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x20c8cc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x20c8ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x20c8d0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x20c8d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x20c8d4: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x20c8d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x20c8d8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x20c8d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20c8dc: 0x70e21b89  pcpyld      $v1, $a3, $v0
    ctx->pc = 0x20c8dcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x20c8e0: 0x8e10002c  lw          $s0, 0x2C($s0)
    ctx->pc = 0x20c8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x20c8e4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x20c8e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x20c8e8: 0x72071389  pcpyld      $v0, $s0, $a3
    ctx->pc = 0x20c8e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 7)));
    // 0x20c8ec: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x20c8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x20c8f0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x20c8f0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x20c8f4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x20c8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x20c8f8: 0x10860005  beq         $a0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C8F8u;
    {
        const bool branch_taken_0x20c8f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x20C8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C8F8u;
            // 0x20c8fc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8f8) {
            ctx->pc = 0x20C910u;
            goto label_20c910;
        }
    }
    ctx->pc = 0x20C900u;
    // 0x20c900: 0xae260080  sw          $a2, 0x80($s1)
    ctx->pc = 0x20c900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 6));
    // 0x20c904: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x20C904u;
    SET_GPR_U32(ctx, 31, 0x20C90Cu);
    ctx->pc = 0x20C908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C904u;
            // 0x20c908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C90Cu; }
        if (ctx->pc != 0x20C90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23f000_0x23f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C90Cu; }
        if (ctx->pc != 0x20C90Cu) { return; }
    }
    ctx->pc = 0x20C90Cu;
    // 0x20c90c: 0x0  nop
    ctx->pc = 0x20c90cu;
    // NOP
label_20c910:
    // 0x20c910: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x20c910u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20c914: 0xc08fc04  jal         func_23F010
    ctx->pc = 0x20C914u;
    SET_GPR_U32(ctx, 31, 0x20C91Cu);
    ctx->pc = 0x20C918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C914u;
            // 0x20c918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F010u;
    if (runtime->hasFunction(0x23F010u)) {
        auto targetFn = runtime->lookupFunction(0x23F010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C91Cu; }
        if (ctx->pc != 0x20C91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23f010_0x23f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C91Cu; }
        if (ctx->pc != 0x20C91Cu) { return; }
    }
    ctx->pc = 0x20C91Cu;
    // 0x20c91c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20C91Cu;
    {
        const bool branch_taken_0x20c91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C91Cu;
            // 0x20c920: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c91c) {
            ctx->pc = 0x20C940u;
            goto label_20c940;
        }
    }
    ctx->pc = 0x20C924u;
label_20c924:
    // 0x20c924: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x20c924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x20c928: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C928u;
    {
        const bool branch_taken_0x20c928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C928u;
            // 0x20c92c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c928) {
            ctx->pc = 0x20C940u;
            goto label_20c940;
        }
    }
    ctx->pc = 0x20C930u;
    // 0x20c930: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x20c930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x20c934: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x20C934u;
    SET_GPR_U32(ctx, 31, 0x20C93Cu);
    ctx->pc = 0x20C938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C934u;
            // 0x20c938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C93Cu; }
        if (ctx->pc != 0x20C93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23f000_0x23f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C93Cu; }
        if (ctx->pc != 0x20C93Cu) { return; }
    }
    ctx->pc = 0x20C93Cu;
    // 0x20c93c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x20c93cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20c940:
    // 0x20c940: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x20c940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20c944: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20c944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20c948: 0x3e00008  jr          $ra
    ctx->pc = 0x20C948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C948u;
            // 0x20c94c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C76Cu: goto label_20c76c;
            case 0x20C7C0u: goto label_20c7c0;
            case 0x20C7ECu: goto label_20c7ec;
            case 0x20C814u: goto label_20c814;
            case 0x20C910u: goto label_20c910;
            case 0x20C924u: goto label_20c924;
            case 0x20C940u: goto label_20c940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C950u;
}
