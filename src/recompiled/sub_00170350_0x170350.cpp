#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170350
// Address: 0x170350 - 0x1704c0
void sub_00170350_0x170350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170350_0x170350");
#endif

    ctx->pc = 0x170350u;

    // 0x170350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x170350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x170354: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x170354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x170358: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x170358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17035c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17035cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170360: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x170360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x170364: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x170364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170368: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x170368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17036c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17036cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x170370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170374: 0xc04bfb8  jal         func_12FEE0
    ctx->pc = 0x170374u;
    SET_GPR_U32(ctx, 31, 0x17037Cu);
    ctx->pc = 0x170378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170374u;
            // 0x170378: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FEE0u;
    if (runtime->hasFunction(0x12FEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12FEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17037Cu; }
        if (ctx->pc != 0x17037Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FEE0_0x12fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17037Cu; }
        if (ctx->pc != 0x17037Cu) { return; }
    }
    ctx->pc = 0x17037Cu;
    // 0x17037c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x17037Cu;
    {
        const bool branch_taken_0x17037c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x170380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17037Cu;
            // 0x170380: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17037c) {
            ctx->pc = 0x1703ACu;
            goto label_1703ac;
        }
    }
    ctx->pc = 0x170384u;
    // 0x170384: 0xc0a2644  jal         func_289910
    ctx->pc = 0x170384u;
    SET_GPR_U32(ctx, 31, 0x17038Cu);
    ctx->pc = 0x170388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170384u;
            // 0x170388: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17038Cu; }
        if (ctx->pc != 0x17038Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17038Cu; }
        if (ctx->pc != 0x17038Cu) { return; }
    }
    ctx->pc = 0x17038Cu;
    // 0x17038c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x17038cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x170390: 0x244625e0  addiu       $a2, $v0, 0x25E0
    ctx->pc = 0x170390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 9696));
    // 0x170394: 0x88c30003  lwl         $v1, 0x3($a2)
    ctx->pc = 0x170394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x170398: 0x98c30000  lwr         $v1, 0x0($a2)
    ctx->pc = 0x170398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x17039c: 0xaa030053  swl         $v1, 0x53($s0)
    ctx->pc = 0x17039cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 83); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1703a0: 0xba030050  swr         $v1, 0x50($s0)
    ctx->pc = 0x1703a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1703a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1703A4u;
    {
        const bool branch_taken_0x1703a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1703A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1703A4u;
            // 0x1703a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1703a4) {
            ctx->pc = 0x1703B8u;
            goto label_1703b8;
        }
    }
    ctx->pc = 0x1703ACu;
label_1703ac:
    // 0x1703ac: 0xa2000050  sb          $zero, 0x50($s0)
    ctx->pc = 0x1703acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x1703b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1703b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1703b4: 0x0  nop
    ctx->pc = 0x1703b4u;
    // NOP
label_1703b8:
    // 0x1703b8: 0x24130018  addiu       $s3, $zero, 0x18
    ctx->pc = 0x1703b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1703bc:
    // 0x1703bc: 0x2331818  mult        $v1, $s1, $s3
    ctx->pc = 0x1703bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1703c0: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1703c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1703c4: 0x80420050  lb          $v0, 0x50($v0)
    ctx->pc = 0x1703c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1703c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1703C8u;
    {
        const bool branch_taken_0x1703c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1703CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1703C8u;
            // 0x1703cc: 0x2331018  mult        $v0, $s1, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1703c8) {
            ctx->pc = 0x1703ECu;
            goto label_1703ec;
        }
    }
    ctx->pc = 0x1703D0u;
    // 0x1703d0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1703d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1703d4: 0x24a513d8  addiu       $a1, $a1, 0x13D8
    ctx->pc = 0x1703d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5080));
    // 0x1703d8: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x1703d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1703dc: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1703DCu;
    SET_GPR_U32(ctx, 31, 0x1703E4u);
    ctx->pc = 0x1703E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1703DCu;
            // 0x1703e0: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1703E4u; }
        if (ctx->pc != 0x1703E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1703E4u; }
        if (ctx->pc != 0x1703E4u) { return; }
    }
    ctx->pc = 0x1703E4u;
    // 0x1703e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1703E4u;
    {
        const bool branch_taken_0x1703e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1703E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1703E4u;
            // 0x1703e8: 0x2331018  mult        $v0, $s1, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1703e4) {
            ctx->pc = 0x1703FCu;
            goto label_1703fc;
        }
    }
    ctx->pc = 0x1703ECu;
label_1703ec:
    // 0x1703ec: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1703ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1703f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1703f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1703f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1703F4u;
    {
        const bool branch_taken_0x1703f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1703F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1703F4u;
            // 0x1703f8: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1703f4) {
            ctx->pc = 0x170420u;
            goto label_170420;
        }
    }
    ctx->pc = 0x1703FCu;
label_1703fc:
    // 0x1703fc: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x1703fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x170400: 0xc05d4ba  jal         func_1752E8
    ctx->pc = 0x170400u;
    SET_GPR_U32(ctx, 31, 0x170408u);
    ctx->pc = 0x170404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170400u;
            // 0x170404: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1752E8u;
    if (runtime->hasFunction(0x1752E8u)) {
        auto targetFn = runtime->lookupFunction(0x1752E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170408u; }
        if (ctx->pc != 0x170408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001752E8_0x1752e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170408u; }
        if (ctx->pc != 0x170408u) { return; }
    }
    ctx->pc = 0x170408u;
    // 0x170408: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x170408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17040c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x17040cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x170410: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x170410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x170414: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x170414u;
    {
        const bool branch_taken_0x170414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170414u;
            // 0x170418: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170414) {
            ctx->pc = 0x170424u;
            goto label_170424;
        }
    }
    ctx->pc = 0x17041Cu;
    // 0x17041c: 0x0  nop
    ctx->pc = 0x17041cu;
    // NOP
label_170420:
    // 0x170420: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x170420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_170424:
    // 0x170424: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x170424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x170428: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x170428u;
    {
        const bool branch_taken_0x170428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17042Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170428u;
            // 0x17042c: 0x24130018  addiu       $s3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170428) {
            ctx->pc = 0x1703BCu;
            runtime->cooperativeGuestYield();
            goto label_1703bc;
        }
    }
    ctx->pc = 0x170430u;
    // 0x170430: 0x6a4300b7  ldl         $v1, 0xB7($s2)
    ctx->pc = 0x170430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x170434: 0x6e4300b0  ldr         $v1, 0xB0($s2)
    ctx->pc = 0x170434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x170438: 0x6a4400bf  ldl         $a0, 0xBF($s2)
    ctx->pc = 0x170438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x17043c: 0x6e4400b8  ldr         $a0, 0xB8($s2)
    ctx->pc = 0x17043cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x170440: 0x6a4500c7  ldl         $a1, 0xC7($s2)
    ctx->pc = 0x170440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x170444: 0x6e4500c0  ldr         $a1, 0xC0($s2)
    ctx->pc = 0x170444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x170448: 0x6a4600cf  ldl         $a2, 0xCF($s2)
    ctx->pc = 0x170448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x17044c: 0x6e4600c8  ldr         $a2, 0xC8($s2)
    ctx->pc = 0x17044cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x170450: 0xb2030027  sdl         $v1, 0x27($s0)
    ctx->pc = 0x170450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170454: 0xb6030020  sdr         $v1, 0x20($s0)
    ctx->pc = 0x170454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170458: 0xb204002f  sdl         $a0, 0x2F($s0)
    ctx->pc = 0x170458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17045c: 0xb6040028  sdr         $a0, 0x28($s0)
    ctx->pc = 0x17045cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170460: 0xb2050037  sdl         $a1, 0x37($s0)
    ctx->pc = 0x170460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170464: 0xb6050030  sdr         $a1, 0x30($s0)
    ctx->pc = 0x170464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170468: 0xb206003f  sdl         $a2, 0x3F($s0)
    ctx->pc = 0x170468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17046c: 0xb6060038  sdr         $a2, 0x38($s0)
    ctx->pc = 0x17046cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170470: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x170470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x170474: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x170474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x170478: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x170478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17047c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17047cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170480: 0x924300d4  lbu         $v1, 0xD4($s2)
    ctx->pc = 0x170480u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x170484: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x170484u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170488: 0xa2030044  sb          $v1, 0x44($s0)
    ctx->pc = 0x170488u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 3));
    // 0x17048c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17048cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170490: 0x924300d5  lbu         $v1, 0xD5($s2)
    ctx->pc = 0x170490u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 213)));
    // 0x170494: 0xa2030045  sb          $v1, 0x45($s0)
    ctx->pc = 0x170494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 3));
    // 0x170498: 0xc64000d8  lwc1        $f0, 0xD8($s2)
    ctx->pc = 0x170498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17049c: 0x964300d6  lhu         $v1, 0xD6($s2)
    ctx->pc = 0x17049cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 214)));
    // 0x1704a0: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x1704a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x1704a4: 0xa6030046  sh          $v1, 0x46($s0)
    ctx->pc = 0x1704a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1704a8: 0xc64000dc  lwc1        $f0, 0xDC($s2)
    ctx->pc = 0x1704a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1704ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1704acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1704b0: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x1704b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1704b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1704b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1704b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1704B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1704BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1704B8u;
            // 0x1704bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1703ACu: goto label_1703ac;
            case 0x1703B8u: goto label_1703b8;
            case 0x1703BCu: goto label_1703bc;
            case 0x1703ECu: goto label_1703ec;
            case 0x1703FCu: goto label_1703fc;
            case 0x170420u: goto label_170420;
            case 0x170424u: goto label_170424;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1704C0u;
}
