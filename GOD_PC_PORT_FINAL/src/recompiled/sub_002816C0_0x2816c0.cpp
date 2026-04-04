#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002816C0
// Address: 0x2816c0 - 0x2817e0
void sub_002816C0_0x2816c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002816C0_0x2816c0");
#endif

    ctx->pc = 0x2816c0u;

    // 0x2816c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2816c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2816c4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2816c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2816c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2816c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2816cc: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x2816ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2816d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2816d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2816d4: 0x3c120032  lui         $s2, 0x32
    ctx->pc = 0x2816d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)50 << 16));
    // 0x2816d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2816d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2816dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2816dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2816e0: 0x26501f40  addiu       $s0, $s2, 0x1F40
    ctx->pc = 0x2816e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8000));
    // 0x2816e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2816e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2816e8: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x2816E8u;
    SET_GPR_U32(ctx, 31, 0x2816F0u);
    ctx->pc = 0x2816ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2816E8u;
            // 0x2816ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2816F0u; }
        if (ctx->pc != 0x2816F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2816F0u; }
        if (ctx->pc != 0x2816F0u) { return; }
    }
    ctx->pc = 0x2816F0u;
    // 0x2816f0: 0x24040184  addiu       $a0, $zero, 0x184
    ctx->pc = 0x2816f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x2816f4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2816f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2816f8: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x2816f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2816fc: 0x24633318  addiu       $v1, $v1, 0x3318
    ctx->pc = 0x2816fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13080));
    // 0x281700: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x281700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x281704: 0x701025  or          $v0, $v1, $s0
    ctx->pc = 0x281704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x281708: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x281708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x28170c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28170Cu;
    {
        const bool branch_taken_0x28170c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28170Cu;
            // 0x281710: 0x24620180  addiu       $v0, $v1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28170c) {
            ctx->pc = 0x281770u;
            goto label_281770;
        }
    }
    ctx->pc = 0x281714u;
label_281714:
    // 0x281714: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x281714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x281718: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x281718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x28171c: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x28171cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x281720: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x281720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x281724: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x281724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x281728: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x281728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x28172c: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x28172cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x281730: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x281730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x281734: 0xb2040007  sdl         $a0, 0x7($s0)
    ctx->pc = 0x281734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281738: 0xb6040000  sdr         $a0, 0x0($s0)
    ctx->pc = 0x281738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28173c: 0xb205000f  sdl         $a1, 0xF($s0)
    ctx->pc = 0x28173cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281740: 0xb6050008  sdr         $a1, 0x8($s0)
    ctx->pc = 0x281740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281744: 0xb2060017  sdl         $a2, 0x17($s0)
    ctx->pc = 0x281744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281748: 0xb6060010  sdr         $a2, 0x10($s0)
    ctx->pc = 0x281748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28174c: 0xb207001f  sdl         $a3, 0x1F($s0)
    ctx->pc = 0x28174cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281750: 0xb6070018  sdr         $a3, 0x18($s0)
    ctx->pc = 0x281750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281754: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x281754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x281758: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x281758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x28175c: 0x0  nop
    ctx->pc = 0x28175cu;
    // NOP
    // 0x281760: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x281760u;
    {
        const bool branch_taken_0x281760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x281760) {
            ctx->pc = 0x281714u;
            runtime->cooperativeGuestYield();
            goto label_281714;
        }
    }
    ctx->pc = 0x281768u;
    // 0x281768: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x281768u;
    {
        const bool branch_taken_0x281768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281768) {
            ctx->pc = 0x2817A4u;
            goto label_2817a4;
        }
    }
    ctx->pc = 0x281770u;
label_281770:
    // 0x281770: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x281770u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281774: 0xdc690008  ld          $t1, 0x8($v1)
    ctx->pc = 0x281774u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x281778: 0xdc6a0010  ld          $t2, 0x10($v1)
    ctx->pc = 0x281778u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28177c: 0xdc640018  ld          $a0, 0x18($v1)
    ctx->pc = 0x28177cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x281780: 0xfe080000  sd          $t0, 0x0($s0)
    ctx->pc = 0x281780u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 8));
    // 0x281784: 0xfe090008  sd          $t1, 0x8($s0)
    ctx->pc = 0x281784u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 9));
    // 0x281788: 0xfe0a0010  sd          $t2, 0x10($s0)
    ctx->pc = 0x281788u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 10));
    // 0x28178c: 0xfe040018  sd          $a0, 0x18($s0)
    ctx->pc = 0x28178cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 4));
    // 0x281790: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x281790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x281794: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x281794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x281798: 0x0  nop
    ctx->pc = 0x281798u;
    // NOP
    // 0x28179c: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x28179Cu;
    {
        const bool branch_taken_0x28179c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28179c) {
            ctx->pc = 0x281770u;
            runtime->cooperativeGuestYield();
            goto label_281770;
        }
    }
    ctx->pc = 0x2817A4u;
label_2817a4:
    // 0x2817a4: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x2817a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2817a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2817a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2817ac: 0x26451f40  addiu       $a1, $s2, 0x1F40
    ctx->pc = 0x2817acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8000));
    // 0x2817b0: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x2817b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x2817b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2817b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2817b8: 0xc0a0ac2  jal         func_282B08
    ctx->pc = 0x2817B8u;
    SET_GPR_U32(ctx, 31, 0x2817C0u);
    ctx->pc = 0x2817BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2817B8u;
            // 0x2817bc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282B08u;
    if (runtime->hasFunction(0x282B08u)) {
        auto targetFn = runtime->lookupFunction(0x282B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2817C0u; }
        if (ctx->pc != 0x2817C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282B08_0x282b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2817C0u; }
        if (ctx->pc != 0x2817C0u) { return; }
    }
    ctx->pc = 0x2817C0u;
    // 0x2817c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2817c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2817c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2817c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2817c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2817c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2817cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2817ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2817d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2817d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2817d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2817D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2817D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2817D4u;
            // 0x2817d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281714u: goto label_281714;
            case 0x281770u: goto label_281770;
            case 0x2817A4u: goto label_2817a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2817DCu;
    // 0x2817dc: 0x0  nop
    ctx->pc = 0x2817dcu;
    // NOP
}
