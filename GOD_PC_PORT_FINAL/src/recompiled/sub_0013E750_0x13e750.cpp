#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013E750
// Address: 0x13e750 - 0x13ea20
void sub_0013E750_0x13e750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E750_0x13e750");
#endif

    ctx->pc = 0x13e750u;

    // 0x13e750: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13e750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13e754: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x13e754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x13e758: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x13e758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x13e75c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e75cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e760: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x13e760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x13e764: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13e764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e768: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x13e768u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e76c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x13e76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x13e770: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13e770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e774: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13e774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13e778: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x13e778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x13e77c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e780: 0xc04bfb8  jal         func_12FEE0
    ctx->pc = 0x13E780u;
    SET_GPR_U32(ctx, 31, 0x13E788u);
    ctx->pc = 0x13E784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E780u;
            // 0x13e784: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FEE0u;
    if (runtime->hasFunction(0x12FEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12FEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E788u; }
        if (ctx->pc != 0x13E788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FEE0_0x12fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E788u; }
        if (ctx->pc != 0x13E788u) { return; }
    }
    ctx->pc = 0x13E788u;
    // 0x13e788: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x13e788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x13e78c: 0x26830070  addiu       $v1, $s4, 0x70
    ctx->pc = 0x13e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x13e790: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x13e790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13e794: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x13e794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x13e798: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13E798u;
    {
        const bool branch_taken_0x13e798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E798u;
            // 0x13e79c: 0x268200b0  addiu       $v0, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e798) {
            ctx->pc = 0x13E7F4u;
            goto label_13e7f4;
        }
    }
    ctx->pc = 0x13E7A0u;
label_13e7a0:
    // 0x13e7a0: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x13e7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x13e7a4: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x13e7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x13e7a8: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x13e7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13e7ac: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x13e7acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13e7b0: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x13e7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x13e7b4: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x13e7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13e7b8: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x13e7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x13e7bc: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x13e7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x13e7c0: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x13e7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e7c4: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x13e7c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e7c8: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x13e7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e7cc: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x13e7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e7d0: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x13e7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e7d4: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x13e7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e7d8: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x13e7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e7dc: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x13e7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e7e0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x13e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x13e7e4: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x13E7E4u;
    {
        const bool branch_taken_0x13e7e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13E7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E7E4u;
            // 0x13e7e8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e7e4) {
            ctx->pc = 0x13E7A0u;
            runtime->cooperativeGuestYield();
            goto label_13e7a0;
        }
    }
    ctx->pc = 0x13E7ECu;
    // 0x13e7ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13E7ECu;
    {
        const bool branch_taken_0x13e7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e7ec) {
            ctx->pc = 0x13E820u;
            goto label_13e820;
        }
    }
    ctx->pc = 0x13E7F4u;
label_13e7f4:
    // 0x13e7f4: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x13e7f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e7f8: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x13e7f8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x13e7fc: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x13e7fcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13e800: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x13e800u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x13e804: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x13e804u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x13e808: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x13e808u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x13e80c: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x13e80cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x13e810: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x13e810u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x13e814: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x13e814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x13e818: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x13E818u;
    {
        const bool branch_taken_0x13e818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13E81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E818u;
            // 0x13e81c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e818) {
            ctx->pc = 0x13E7F4u;
            runtime->cooperativeGuestYield();
            goto label_13e7f4;
        }
    }
    ctx->pc = 0x13E820u;
label_13e820:
    // 0x13e820: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x13e820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13e824: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x13e824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x13e828: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x13e828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x13e82c: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x13e82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x13e830: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x13e830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13e834: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x13e834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13e838: 0x8867001b  lwl         $a3, 0x1B($v1)
    ctx->pc = 0x13e838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x13e83c: 0x98670018  lwr         $a3, 0x18($v1)
    ctx->pc = 0x13e83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x13e840: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x13e840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e844: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x13e844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e848: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x13e848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e84c: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x13e84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e850: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x13e850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e854: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x13e854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e858: 0xa887001b  swl         $a3, 0x1B($a0)
    ctx->pc = 0x13e858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13e85c: 0xb8870018  swr         $a3, 0x18($a0)
    ctx->pc = 0x13e85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13e860: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x13e860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e864: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x13e864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e868: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13e868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e86c: 0x0  nop
    ctx->pc = 0x13e86cu;
    // NOP
    // 0x13e870: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13E870u;
    {
        const bool branch_taken_0x13e870 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e870) {
            ctx->pc = 0x13E874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E870u;
            // 0x13e874: 0xe621003c  swc1        $f1, 0x3C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E878u;
            goto label_13e878;
        }
    }
    ctx->pc = 0x13E878u;
label_13e878:
    // 0x13e878: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x13e878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e87c: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x13e87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e880: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13e880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e884: 0x0  nop
    ctx->pc = 0x13e884u;
    // NOP
    // 0x13e888: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13E888u;
    {
        const bool branch_taken_0x13e888 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e888) {
            ctx->pc = 0x13E88Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E888u;
            // 0x13e88c: 0xe6210040  swc1        $f1, 0x40($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E890u;
            goto label_13e890;
        }
    }
    ctx->pc = 0x13E890u;
label_13e890:
    // 0x13e890: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x13e890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e894: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x13e894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e898: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13e898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e89c: 0x0  nop
    ctx->pc = 0x13e89cu;
    // NOP
    // 0x13e8a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13E8A0u;
    {
        const bool branch_taken_0x13e8a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e8a0) {
            ctx->pc = 0x13E8A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E8A0u;
            // 0x13e8a4: 0xe6210024  swc1        $f1, 0x24($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E8A8u;
            goto label_13e8a8;
        }
    }
    ctx->pc = 0x13E8A8u;
label_13e8a8:
    // 0x13e8a8: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x13e8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e8ac: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x13e8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e8b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13e8b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e8b4: 0x0  nop
    ctx->pc = 0x13e8b4u;
    // NOP
    // 0x13e8b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13E8B8u;
    {
        const bool branch_taken_0x13e8b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e8b8) {
            ctx->pc = 0x13E8BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E8B8u;
            // 0x13e8bc: 0xe621002c  swc1        $f1, 0x2C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E8C0u;
            goto label_13e8c0;
        }
    }
    ctx->pc = 0x13E8C0u;
label_13e8c0:
    // 0x13e8c0: 0x26900050  addiu       $s0, $s4, 0x50
    ctx->pc = 0x13e8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x13e8c4: 0xc04f8c6  jal         func_13E318
    ctx->pc = 0x13E8C4u;
    SET_GPR_U32(ctx, 31, 0x13E8CCu);
    ctx->pc = 0x13E8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E8C4u;
            // 0x13e8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E318u;
    if (runtime->hasFunction(0x13E318u)) {
        auto targetFn = runtime->lookupFunction(0x13E318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E8CCu; }
        if (ctx->pc != 0x13E8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E318_0x13e318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E8CCu; }
        if (ctx->pc != 0x13E8CCu) { return; }
    }
    ctx->pc = 0x13E8CCu;
    // 0x13e8cc: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x13e8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x13e8d0: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x13e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x13e8d4: 0xc0a2644  jal         func_289910
    ctx->pc = 0x13E8D4u;
    SET_GPR_U32(ctx, 31, 0x13E8DCu);
    ctx->pc = 0x13E8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E8D4u;
            // 0x13e8d8: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E8DCu; }
        if (ctx->pc != 0x13E8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E8DCu; }
        if (ctx->pc != 0x13E8DCu) { return; }
    }
    ctx->pc = 0x13E8DCu;
    // 0x13e8dc: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x13e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x13e8e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13e8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e8e4: 0x244716b8  addiu       $a3, $v0, 0x16B8
    ctx->pc = 0x13e8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 5816));
    // 0x13e8e8: 0x88e80003  lwl         $t0, 0x3($a3)
    ctx->pc = 0x13e8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x13e8ec: 0x98e80000  lwr         $t0, 0x0($a3)
    ctx->pc = 0x13e8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x13e8f0: 0xaa28007b  swl         $t0, 0x7B($s1)
    ctx->pc = 0x13e8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 123); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13e8f4: 0xba280078  swr         $t0, 0x78($s1)
    ctx->pc = 0x13e8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 120); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13e8f8: 0xc0a2644  jal         func_289910
    ctx->pc = 0x13E8F8u;
    SET_GPR_U32(ctx, 31, 0x13E900u);
    ctx->pc = 0x13E8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E8F8u;
            // 0x13e8fc: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E900u; }
        if (ctx->pc != 0x13E900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E900u; }
        if (ctx->pc != 0x13E900u) { return; }
    }
    ctx->pc = 0x13E900u;
    // 0x13e900: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x13e900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13e904: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13E904u;
    {
        const bool branch_taken_0x13e904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E904u;
            // 0x13e908: 0xae200070  sw          $zero, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e904) {
            ctx->pc = 0x13E914u;
            goto label_13e914;
        }
    }
    ctx->pc = 0x13E90Cu;
    // 0x13e90c: 0x0  nop
    ctx->pc = 0x13e90cu;
    // NOP
label_13e910:
    // 0x13e910: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13e910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_13e914:
    // 0x13e914: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x13e914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x13e918: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x13e918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x13e91c: 0x10a00037  beqz        $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x13E91Cu;
    {
        const bool branch_taken_0x13e91c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E91Cu;
            // 0x13e920: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e91c) {
            ctx->pc = 0x13E9FCu;
            goto label_13e9fc;
        }
    }
    ctx->pc = 0x13E924u;
    // 0x13e924: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x13e924u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x13e928: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x13e928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x13e92c: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x13e92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x13e930: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x13e930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
    // 0x13e934: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x13E934u;
    SET_GPR_U32(ctx, 31, 0x13E93Cu);
    ctx->pc = 0x13E938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E934u;
            // 0x13e938: 0x24a500ac  addiu       $a1, $a1, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E93Cu; }
        if (ctx->pc != 0x13E93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E93Cu; }
        if (ctx->pc != 0x13E93Cu) { return; }
    }
    ctx->pc = 0x13E93Cu;
    // 0x13e93c: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x13E93Cu;
    {
        const bool branch_taken_0x13e93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e93c) {
            ctx->pc = 0x13E940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E93Cu;
            // 0x13e940: 0x8e22006c  lw          $v0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E910u;
            runtime->cooperativeGuestYield();
            goto label_13e910;
        }
    }
    ctx->pc = 0x13E944u;
    // 0x13e944: 0x8e30006c  lw          $s0, 0x6C($s1)
    ctx->pc = 0x13e944u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x13e948: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x13E948u;
    {
        const bool branch_taken_0x13e948 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E948u;
            // 0x13e94c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e948) {
            ctx->pc = 0x13E9FCu;
            goto label_13e9fc;
        }
    }
    ctx->pc = 0x13E950u;
    // 0x13e950: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x13e950u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x13e954: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x13E954u;
    SET_GPR_U32(ctx, 31, 0x13E95Cu);
    ctx->pc = 0x13E958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E954u;
            // 0x13e958: 0x2613ffff  addiu       $s3, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E95Cu; }
        if (ctx->pc != 0x13E95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E95Cu; }
        if (ctx->pc != 0x13E95Cu) { return; }
    }
    ctx->pc = 0x13E95Cu;
    // 0x13e95c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13e95cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e960: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E960u;
    {
        const bool branch_taken_0x13e960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E960u;
            // 0x13e964: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e960) {
            ctx->pc = 0x13E980u;
            goto label_13e980;
        }
    }
    ctx->pc = 0x13E968u;
label_13e968:
    // 0x13e968: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13e968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e96c: 0xc08ed6c  jal         func_23B5B0
    ctx->pc = 0x13E96Cu;
    SET_GPR_U32(ctx, 31, 0x13E974u);
    ctx->pc = 0x13E970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E96Cu;
            // 0x13e970: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5B0u;
    if (runtime->hasFunction(0x23B5B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E974u; }
        if (ctx->pc != 0x13E974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b5b0_0x23b5b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E974u; }
        if (ctx->pc != 0x13E974u) { return; }
    }
    ctx->pc = 0x13E974u;
    // 0x13e974: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13e974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13e978: 0x1662fffb  bne         $s3, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13E978u;
    {
        const bool branch_taken_0x13e978 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x13E97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E978u;
            // 0x13e97c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e978) {
            ctx->pc = 0x13E968u;
            runtime->cooperativeGuestYield();
            goto label_13e968;
        }
    }
    ctx->pc = 0x13E980u;
label_13e980:
    // 0x13e980: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x13e980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x13e984: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13e984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e988: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x13E988u;
    {
        const bool branch_taken_0x13e988 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13E98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E988u;
            // 0x13e98c: 0xae350070  sw          $s5, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e988) {
            ctx->pc = 0x13E9F8u;
            goto label_13e9f8;
        }
    }
    ctx->pc = 0x13E990u;
    // 0x13e990: 0x268500cc  addiu       $a1, $s4, 0xCC
    ctx->pc = 0x13e990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 204));
    // 0x13e994: 0x0  nop
    ctx->pc = 0x13e994u;
    // NOP
label_13e998:
    // 0x13e998: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x13e998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x13e99c: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x13e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x13e9a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13e9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13e9a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e9a8: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x13e9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x13e9ac: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x13e9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x13e9b0: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x13e9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13e9b4: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x13e9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13e9b8: 0x68a60017  ldl         $a2, 0x17($a1)
    ctx->pc = 0x13e9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13e9bc: 0x6ca60010  ldr         $a2, 0x10($a1)
    ctx->pc = 0x13e9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13e9c0: 0x68a7001f  ldl         $a3, 0x1F($a1)
    ctx->pc = 0x13e9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x13e9c4: 0x6ca70018  ldr         $a3, 0x18($a1)
    ctx->pc = 0x13e9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13e9c8: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x13e9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e9cc: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x13e9ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e9d0: 0xb043000f  sdl         $v1, 0xF($v0)
    ctx->pc = 0x13e9d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e9d4: 0xb4430008  sdr         $v1, 0x8($v0)
    ctx->pc = 0x13e9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e9d8: 0xb0460017  sdl         $a2, 0x17($v0)
    ctx->pc = 0x13e9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e9dc: 0xb4460010  sdr         $a2, 0x10($v0)
    ctx->pc = 0x13e9dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e9e0: 0xb047001f  sdl         $a3, 0x1F($v0)
    ctx->pc = 0x13e9e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e9e4: 0xb4470018  sdr         $a3, 0x18($v0)
    ctx->pc = 0x13e9e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e9e8: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x13e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x13e9ec: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x13e9ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13e9f0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x13E9F0u;
    {
        const bool branch_taken_0x13e9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E9F0u;
            // 0x13e9f4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9f0) {
            ctx->pc = 0x13E998u;
            runtime->cooperativeGuestYield();
            goto label_13e998;
        }
    }
    ctx->pc = 0x13E9F8u;
label_13e9f8:
    // 0x13e9f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13e9f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e9fc:
    // 0x13e9fc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x13e9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13ea00: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x13ea00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13ea04: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x13ea04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ea08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13ea08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ea0c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x13ea0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ea10: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x13ea10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ea14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ea14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ea18: 0x3e00008  jr          $ra
    ctx->pc = 0x13EA18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA18u;
            // 0x13ea1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E7A0u: goto label_13e7a0;
            case 0x13E7F4u: goto label_13e7f4;
            case 0x13E820u: goto label_13e820;
            case 0x13E878u: goto label_13e878;
            case 0x13E890u: goto label_13e890;
            case 0x13E8A8u: goto label_13e8a8;
            case 0x13E8C0u: goto label_13e8c0;
            case 0x13E910u: goto label_13e910;
            case 0x13E914u: goto label_13e914;
            case 0x13E968u: goto label_13e968;
            case 0x13E980u: goto label_13e980;
            case 0x13E998u: goto label_13e998;
            case 0x13E9F8u: goto label_13e9f8;
            case 0x13E9FCu: goto label_13e9fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13EA20u;
}
