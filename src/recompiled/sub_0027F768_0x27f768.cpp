#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027F768
// Address: 0x27f768 - 0x27fc80
void sub_0027F768_0x27f768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F768_0x27f768");
#endif

    ctx->pc = 0x27f768u;

    // 0x27f768: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x27f768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
    // 0x27f76c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27f770: 0xffb20430  sd          $s2, 0x430($sp)
    ctx->pc = 0x27f770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 18));
    // 0x27f774: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x27f774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f778: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x27f778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x27f77c: 0xffb70480  sd          $s7, 0x480($sp)
    ctx->pc = 0x27f77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 23));
    // 0x27f780: 0x2e420001  sltiu       $v0, $s2, 0x1
    ctx->pc = 0x27f780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27f784: 0xffb50460  sd          $s5, 0x460($sp)
    ctx->pc = 0x27f784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 21));
    // 0x27f788: 0x3c178101  lui         $s7, 0x8101
    ctx->pc = 0x27f788u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)33025 << 16));
    // 0x27f78c: 0xffb40450  sd          $s4, 0x450($sp)
    ctx->pc = 0x27f78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 20));
    // 0x27f790: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x27f790u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f794: 0xffb30440  sd          $s3, 0x440($sp)
    ctx->pc = 0x27f794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 19));
    // 0x27f798: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27f798u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f79c: 0xffb10420  sd          $s1, 0x420($sp)
    ctx->pc = 0x27f79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 17));
    // 0x27f7a0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x27f7a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f7a4: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x27f7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
    // 0x27f7a8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x27f7a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f7ac: 0xffbe0490  sd          $fp, 0x490($sp)
    ctx->pc = 0x27f7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 30));
    // 0x27f7b0: 0x36f7006f  ori         $s7, $s7, 0x6F
    ctx->pc = 0x27f7b0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)111);
    // 0x27f7b4: 0xffb60470  sd          $s6, 0x470($sp)
    ctx->pc = 0x27f7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 22));
    // 0x27f7b8: 0xffb00410  sd          $s0, 0x410($sp)
    ctx->pc = 0x27f7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 16));
    // 0x27f7bc: 0xafa20404  sw          $v0, 0x404($sp)
    ctx->pc = 0x27f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 2));
    // 0x27f7c0: 0xafa00400  sw          $zero, 0x400($sp)
    ctx->pc = 0x27f7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 0));
    // 0x27f7c4: 0x0  nop
    ctx->pc = 0x27f7c4u;
    // NOP
label_27f7c8:
    // 0x27f7c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27f7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f7cc: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x27f7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x27f7d0: 0x24a5db00  addiu       $a1, $a1, -0x2500
    ctx->pc = 0x27f7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957824));
    // 0x27f7d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27f7d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f7d8: 0xc0a076a  jal         func_281DA8
    ctx->pc = 0x27F7D8u;
    SET_GPR_U32(ctx, 31, 0x27F7E0u);
    ctx->pc = 0x27F7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F7D8u;
            // 0x27f7dc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281DA8u;
    if (runtime->hasFunction(0x281DA8u)) {
        auto targetFn = runtime->lookupFunction(0x281DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F7E0u; }
        if (ctx->pc != 0x27F7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281DA8_0x281da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F7E0u; }
        if (ctx->pc != 0x27F7E0u) { return; }
    }
    ctx->pc = 0x27F7E0u;
    // 0x27f7e0: 0x10400119  beqz        $v0, . + 4 + (0x119 << 2)
    ctx->pc = 0x27F7E0u;
    {
        const bool branch_taken_0x27f7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F7E0u;
            // 0x27f7e4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f7e0) {
            ctx->pc = 0x27FC48u;
            goto label_27fc48;
        }
    }
    ctx->pc = 0x27F7E8u;
    // 0x27f7e8: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x27f7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
    // 0x27f7ec: 0x2610db00  addiu       $s0, $s0, -0x2500
    ctx->pc = 0x27f7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957824));
    // 0x27f7f0: 0x3c1e002c  lui         $fp, 0x2C
    ctx->pc = 0x27f7f0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)44 << 16));
    // 0x27f7f4: 0x0  nop
    ctx->pc = 0x27f7f4u;
    // NOP
label_27f7f8:
    // 0x27f7f8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x27f7f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27f7fc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x27f7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27f800: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x27F800u;
    {
        const bool branch_taken_0x27f800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F800u;
            // 0x27f804: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f800) {
            ctx->pc = 0x27F8CCu;
            goto label_27f8cc;
        }
    }
    ctx->pc = 0x27F808u;
    // 0x27f808: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x27f808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x27f80c: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x27F80Cu;
    SET_GPR_U32(ctx, 31, 0x27F814u);
    ctx->pc = 0x27F810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F80Cu;
            // 0x27f810: 0x27c55220  addiu       $a1, $fp, 0x5220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 21024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F814u; }
        if (ctx->pc != 0x27F814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F814u; }
        if (ctx->pc != 0x27F814u) { return; }
    }
    ctx->pc = 0x27F814u;
    // 0x27f814: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x27F814u;
    {
        const bool branch_taken_0x27f814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f814) {
            ctx->pc = 0x27F818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27F814u;
            // 0x27f818: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27F8C8u;
            goto label_27f8c8;
        }
    }
    ctx->pc = 0x27F81Cu;
    // 0x27f81c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x27f81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x27f820: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x27f820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x27f824: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27F824u;
    {
        const bool branch_taken_0x27f824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F824u;
            // 0x27f828: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f824) {
            ctx->pc = 0x27F88Cu;
            goto label_27f88c;
        }
    }
    ctx->pc = 0x27F82Cu;
    // 0x27f82c: 0x26020200  addiu       $v0, $s0, 0x200
    ctx->pc = 0x27f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_27f830:
    // 0x27f830: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x27f830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x27f834: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x27f834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x27f838: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x27f838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x27f83c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x27f83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x27f840: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x27f840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x27f844: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x27f844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x27f848: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x27f848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27f84c: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x27f84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x27f850: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x27f850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f854: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x27f854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f858: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x27f858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f85c: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x27f85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f860: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x27f860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f864: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x27f864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f868: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x27f868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f86c: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x27f86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f870: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27f870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27f874: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x27f874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x27f878: 0x0  nop
    ctx->pc = 0x27f878u;
    // NOP
    // 0x27f87c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27F87Cu;
    {
        const bool branch_taken_0x27f87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f87c) {
            ctx->pc = 0x27F830u;
            runtime->cooperativeGuestYield();
            goto label_27f830;
        }
    }
    ctx->pc = 0x27F884u;
    // 0x27f884: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27F884u;
    {
        const bool branch_taken_0x27f884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F884u;
            // 0x27f888: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f884) {
            ctx->pc = 0x27F8C8u;
            goto label_27f8c8;
        }
    }
    ctx->pc = 0x27F88Cu;
label_27f88c:
    // 0x27f88c: 0x26020200  addiu       $v0, $s0, 0x200
    ctx->pc = 0x27f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_27f890:
    // 0x27f890: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x27f890u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27f894: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x27f894u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27f898: 0xdc660010  ld          $a2, 0x10($v1)
    ctx->pc = 0x27f898u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27f89c: 0xdc670018  ld          $a3, 0x18($v1)
    ctx->pc = 0x27f89cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x27f8a0: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x27f8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x27f8a4: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x27f8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x27f8a8: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x27f8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x27f8ac: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x27f8acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x27f8b0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27f8b4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x27f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x27f8b8: 0x0  nop
    ctx->pc = 0x27f8b8u;
    // NOP
    // 0x27f8bc: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x27F8BCu;
    {
        const bool branch_taken_0x27f8bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f8bc) {
            ctx->pc = 0x27F890u;
            runtime->cooperativeGuestYield();
            goto label_27f890;
        }
    }
    ctx->pc = 0x27F8C4u;
    // 0x27f8c4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x27f8c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_27f8c8:
    // 0x27f8c8: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x27f8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_27f8cc:
    // 0x27f8cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F8CCu;
    {
        const bool branch_taken_0x27f8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f8cc) {
            ctx->pc = 0x27F8D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27F8CCu;
            // 0x27f8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27F8E0u;
            goto label_27f8e0;
        }
    }
    ctx->pc = 0x27F8D4u;
    // 0x27f8d4: 0x1660004a  bnez        $s3, . + 4 + (0x4A << 2)
    ctx->pc = 0x27F8D4u;
    {
        const bool branch_taken_0x27f8d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F8D4u;
            // 0x27f8d8: 0x8fa80400  lw          $t0, 0x400($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8d4) {
            ctx->pc = 0x27FA00u;
            goto label_27fa00;
        }
    }
    ctx->pc = 0x27F8DCu;
    // 0x27f8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f8e0:
    // 0x27f8e0: 0x2a41025  or          $v0, $s5, $a0
    ctx->pc = 0x27f8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 4));
    // 0x27f8e4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x27f8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x27f8e8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27F8E8u;
    {
        const bool branch_taken_0x27f8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F8E8u;
            // 0x27f8ec: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8e8) {
            ctx->pc = 0x27F950u;
            goto label_27f950;
        }
    }
    ctx->pc = 0x27F8F0u;
    // 0x27f8f0: 0x26a20200  addiu       $v0, $s5, 0x200
    ctx->pc = 0x27f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 512));
label_27f8f4:
    // 0x27f8f4: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x27f8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27f8f8: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x27f8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x27f8fc: 0x6869000f  ldl         $t1, 0xF($v1)
    ctx->pc = 0x27f8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x27f900: 0x6c690008  ldr         $t1, 0x8($v1)
    ctx->pc = 0x27f900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x27f904: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x27f904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x27f908: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x27f908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x27f90c: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x27f90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x27f910: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x27f910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x27f914: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x27f914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f918: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x27f918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f91c: 0xb089000f  sdl         $t1, 0xF($a0)
    ctx->pc = 0x27f91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f920: 0xb4890008  sdr         $t1, 0x8($a0)
    ctx->pc = 0x27f920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f924: 0xb0850017  sdl         $a1, 0x17($a0)
    ctx->pc = 0x27f924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f928: 0xb4850010  sdr         $a1, 0x10($a0)
    ctx->pc = 0x27f928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f92c: 0xb086001f  sdl         $a2, 0x1F($a0)
    ctx->pc = 0x27f92cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f930: 0xb4860018  sdr         $a2, 0x18($a0)
    ctx->pc = 0x27f930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f934: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27f934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27f938: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x27f938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x27f93c: 0x0  nop
    ctx->pc = 0x27f93cu;
    // NOP
    // 0x27f940: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27F940u;
    {
        const bool branch_taken_0x27f940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f940) {
            ctx->pc = 0x27F8F4u;
            runtime->cooperativeGuestYield();
            goto label_27f8f4;
        }
    }
    ctx->pc = 0x27F948u;
    // 0x27f948: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27F948u;
    {
        const bool branch_taken_0x27f948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F948u;
            // 0x27f94c: 0x3c060032  lui         $a2, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f948) {
            ctx->pc = 0x27F98Cu;
            goto label_27f98c;
        }
    }
    ctx->pc = 0x27F950u;
label_27f950:
    // 0x27f950: 0x26a20200  addiu       $v0, $s5, 0x200
    ctx->pc = 0x27f950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 512));
label_27f954:
    // 0x27f954: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x27f954u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27f958: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x27f958u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27f95c: 0xdc690010  ld          $t1, 0x10($v1)
    ctx->pc = 0x27f95cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27f960: 0xdc650018  ld          $a1, 0x18($v1)
    ctx->pc = 0x27f960u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x27f964: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x27f964u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x27f968: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x27f968u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x27f96c: 0xfc890010  sd          $t1, 0x10($a0)
    ctx->pc = 0x27f96cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 9));
    // 0x27f970: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x27f970u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x27f974: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27f974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27f978: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x27f978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x27f97c: 0x0  nop
    ctx->pc = 0x27f97cu;
    // NOP
    // 0x27f980: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x27F980u;
    {
        const bool branch_taken_0x27f980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f980) {
            ctx->pc = 0x27F954u;
            runtime->cooperativeGuestYield();
            goto label_27f954;
        }
    }
    ctx->pc = 0x27F988u;
    // 0x27f988: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x27f988u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
label_27f98c:
    // 0x27f98c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27f98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f990: 0x24c5db00  addiu       $a1, $a2, -0x2500
    ctx->pc = 0x27f990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957824));
    // 0x27f994: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27f994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f998: 0xc0a0772  jal         func_281DC8
    ctx->pc = 0x27F998u;
    SET_GPR_U32(ctx, 31, 0x27F9A0u);
    ctx->pc = 0x27F99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F998u;
            // 0x27f99c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281DC8u;
    if (runtime->hasFunction(0x281DC8u)) {
        auto targetFn = runtime->lookupFunction(0x281DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F9A0u; }
        if (ctx->pc != 0x27F9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281DC8_0x281dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F9A0u; }
        if (ctx->pc != 0x27F9A0u) { return; }
    }
    ctx->pc = 0x27F9A0u;
    // 0x27f9a0: 0x504000aa  beql        $v0, $zero, . + 4 + (0xAA << 2)
    ctx->pc = 0x27F9A0u;
    {
        const bool branch_taken_0x27f9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f9a0) {
            ctx->pc = 0x27F9A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27F9A0u;
            // 0x27f9a4: 0xae370000  sw          $s7, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27FC4Cu;
            goto label_27fc4c;
        }
    }
    ctx->pc = 0x27F9A8u;
    // 0x27f9a8: 0x5660009b  bnel        $s3, $zero, . + 4 + (0x9B << 2)
    ctx->pc = 0x27F9A8u;
    {
        const bool branch_taken_0x27f9a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f9a8) {
            ctx->pc = 0x27F9ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27F9A8u;
            // 0x27f9ac: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27FC18u;
            goto label_27fc18;
        }
    }
    ctx->pc = 0x27F9B0u;
    // 0x27f9b0: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x27f9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x27f9b4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27f9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27f9b8: 0x10c7009c  beq         $a2, $a3, . + 4 + (0x9C << 2)
    ctx->pc = 0x27F9B8u;
    {
        const bool branch_taken_0x27f9b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x27F9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F9B8u;
            // 0x27f9bc: 0x8fa70214  lw          $a3, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9b8) {
            ctx->pc = 0x27FC2Cu;
            goto label_27fc2c;
        }
    }
    ctx->pc = 0x27F9C0u;
    // 0x27f9c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27f9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f9c4: 0xc09f732  jal         func_27DCC8
    ctx->pc = 0x27F9C4u;
    SET_GPR_U32(ctx, 31, 0x27F9CCu);
    ctx->pc = 0x27F9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F9C4u;
            // 0x27f9c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DCC8u;
    if (runtime->hasFunction(0x27DCC8u)) {
        auto targetFn = runtime->lookupFunction(0x27DCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F9CCu; }
        if (ctx->pc != 0x27F9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DCC8_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F9CCu; }
        if (ctx->pc != 0x27F9CCu) { return; }
    }
    ctx->pc = 0x27F9CCu;
    // 0x27f9cc: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x27F9CCu;
    {
        const bool branch_taken_0x27f9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F9CCu;
            // 0x27f9d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9cc) {
            ctx->pc = 0x27FC40u;
            goto label_27fc40;
        }
    }
    ctx->pc = 0x27F9D4u;
    // 0x27f9d4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x27f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x27f9d8: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x27f9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x27f9dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27f9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f9e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27f9e4: 0x8fa70214  lw          $a3, 0x214($sp)
    ctx->pc = 0x27f9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x27f9e8: 0xc09fd24  jal         func_27F490
    ctx->pc = 0x27F9E8u;
    SET_GPR_U32(ctx, 31, 0x27F9F0u);
    ctx->pc = 0x27F9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F9E8u;
            // 0x27f9ec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F490u;
    if (runtime->hasFunction(0x27F490u)) {
        auto targetFn = runtime->lookupFunction(0x27F490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F9F0u; }
        if (ctx->pc != 0x27F9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F490_0x27f490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F9F0u; }
        if (ctx->pc != 0x27F9F0u) { return; }
    }
    ctx->pc = 0x27F9F0u;
    // 0x27f9f0: 0x54400096  bnel        $v0, $zero, . + 4 + (0x96 << 2)
    ctx->pc = 0x27F9F0u;
    {
        const bool branch_taken_0x27f9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f9f0) {
            ctx->pc = 0x27F9F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27F9F0u;
            // 0x27f9f4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27FC4Cu;
            goto label_27fc4c;
        }
    }
    ctx->pc = 0x27F9F8u;
    // 0x27f9f8: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x27F9F8u;
    {
        const bool branch_taken_0x27f9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F9F8u;
            // 0x27f9fc: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9f8) {
            ctx->pc = 0x27FC18u;
            goto label_27fc18;
        }
    }
    ctx->pc = 0x27FA00u;
label_27fa00:
    // 0x27fa00: 0x13102a  slt         $v0, $zero, $s3
    ctx->pc = 0x27fa00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x27fa04: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x27fa04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x27fa08: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x27fa08u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x27fa0c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x27fa0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x27fa10: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x27fa10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x27fa14: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x27fa14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27fa18: 0x1440ff77  bnez        $v0, . + 4 + (-0x89 << 2)
    ctx->pc = 0x27FA18u;
    {
        const bool branch_taken_0x27fa18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA18u;
            // 0x27fa1c: 0xafa80400  sw          $t0, 0x400($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa18) {
            ctx->pc = 0x27F7F8u;
            runtime->cooperativeGuestYield();
            goto label_27f7f8;
        }
    }
    ctx->pc = 0x27FA20u;
    // 0x27fa20: 0x8fa90404  lw          $t1, 0x404($sp)
    ctx->pc = 0x27fa20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
    // 0x27fa24: 0x15200009  bnez        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27FA24u;
    {
        const bool branch_taken_0x27fa24 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA24u;
            // 0x27fa28: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa24) {
            ctx->pc = 0x27FA4Cu;
            goto label_27fa4c;
        }
    }
    ctx->pc = 0x27FA2Cu;
    // 0x27fa2c: 0x29020014  slti        $v0, $t0, 0x14
    ctx->pc = 0x27fa2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x27fa30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27FA30u;
    {
        const bool branch_taken_0x27fa30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA30u;
            // 0x27fa34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa30) {
            ctx->pc = 0x27FA50u;
            goto label_27fa50;
        }
    }
    ctx->pc = 0x27FA38u;
    // 0x27fa38: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x27fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x27fa3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27fa40: 0x34630017  ori         $v1, $v1, 0x17
    ctx->pc = 0x27fa40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23);
    // 0x27fa44: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x27FA44u;
    {
        const bool branch_taken_0x27fa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA44u;
            // 0x27fa48: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa44) {
            ctx->pc = 0x27FC50u;
            goto label_27fc50;
        }
    }
    ctx->pc = 0x27FA4Cu;
label_27fa4c:
    // 0x27fa4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27fa4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27fa50:
    // 0x27fa50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27fa50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa54: 0xc09f638  jal         func_27D8E0
    ctx->pc = 0x27FA54u;
    SET_GPR_U32(ctx, 31, 0x27FA5Cu);
    ctx->pc = 0x27FA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA54u;
            // 0x27fa58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D8E0u;
    if (runtime->hasFunction(0x27D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x27D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FA5Cu; }
        if (ctx->pc != 0x27FA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D8E0_0x27d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FA5Cu; }
        if (ctx->pc != 0x27FA5Cu) { return; }
    }
    ctx->pc = 0x27FA5Cu;
    // 0x27fa5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27fa60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27fa60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa64: 0x1460007a  bnez        $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x27FA64u;
    {
        const bool branch_taken_0x27fa64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA64u;
            // 0x27fa68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa64) {
            ctx->pc = 0x27FC50u;
            goto label_27fc50;
        }
    }
    ctx->pc = 0x27FA6Cu;
    // 0x27fa6c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27fa70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27fa70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27fa74: 0x1642006a  bne         $s2, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x27FA74u;
    {
        const bool branch_taken_0x27fa74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x27FA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA74u;
            // 0x27fa78: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa74) {
            ctx->pc = 0x27FC20u;
            goto label_27fc20;
        }
    }
    ctx->pc = 0x27FA7Cu;
    // 0x27fa7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27fa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa80: 0xc09f6b0  jal         func_27DAC0
    ctx->pc = 0x27FA80u;
    SET_GPR_U32(ctx, 31, 0x27FA88u);
    ctx->pc = 0x27FA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA80u;
            // 0x27fa84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DAC0u;
    if (runtime->hasFunction(0x27DAC0u)) {
        auto targetFn = runtime->lookupFunction(0x27DAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FA88u; }
        if (ctx->pc != 0x27FA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DAC0_0x27dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FA88u; }
        if (ctx->pc != 0x27FA88u) { return; }
    }
    ctx->pc = 0x27FA88u;
    // 0x27fa88: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27fa8c: 0x1460006f  bnez        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x27FA8Cu;
    {
        const bool branch_taken_0x27fa8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA8Cu;
            // 0x27fa90: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa8c) {
            ctx->pc = 0x27FC4Cu;
            goto label_27fc4c;
        }
    }
    ctx->pc = 0x27FA94u;
    // 0x27fa94: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x27fa94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x27fa98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27fa98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa9c: 0x2463025  or          $a2, $s2, $a2
    ctx->pc = 0x27fa9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | GPR_U64(ctx, 6));
    // 0x27faa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27faa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27faa4: 0xc09f664  jal         func_27D990
    ctx->pc = 0x27FAA4u;
    SET_GPR_U32(ctx, 31, 0x27FAACu);
    ctx->pc = 0x27FAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FAA4u;
            // 0x27faa8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D990u;
    if (runtime->hasFunction(0x27D990u)) {
        auto targetFn = runtime->lookupFunction(0x27D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FAACu; }
        if (ctx->pc != 0x27FAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d990_0x27dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FAACu; }
        if (ctx->pc != 0x27FAACu) { return; }
    }
    ctx->pc = 0x27FAACu;
    // 0x27faac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27faacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27fab0: 0x14600067  bnez        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x27FAB0u;
    {
        const bool branch_taken_0x27fab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FAB0u;
            // 0x27fab4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fab0) {
            ctx->pc = 0x27FC50u;
            goto label_27fc50;
        }
    }
    ctx->pc = 0x27FAB8u;
    // 0x27fab8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27fab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fabc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27fabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fac0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27fac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27fac4: 0xc09f664  jal         func_27D990
    ctx->pc = 0x27FAC4u;
    SET_GPR_U32(ctx, 31, 0x27FACCu);
    ctx->pc = 0x27FAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FAC4u;
            // 0x27fac8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D990u;
    if (runtime->hasFunction(0x27D990u)) {
        auto targetFn = runtime->lookupFunction(0x27D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FACCu; }
        if (ctx->pc != 0x27FACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d990_0x27dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FACCu; }
        if (ctx->pc != 0x27FACCu) { return; }
    }
    ctx->pc = 0x27FACCu;
    // 0x27facc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27faccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27fad0: 0x1460005f  bnez        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x27FAD0u;
    {
        const bool branch_taken_0x27fad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FAD0u;
            // 0x27fad4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fad0) {
            ctx->pc = 0x27FC50u;
            goto label_27fc50;
        }
    }
    ctx->pc = 0x27FAD8u;
    // 0x27fad8: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x27fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x27fadc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27fadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fae0: 0x2450db00  addiu       $s0, $v0, -0x2500
    ctx->pc = 0x27fae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957824));
    // 0x27fae4: 0xb01025  or          $v0, $a1, $s0
    ctx->pc = 0x27fae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x27fae8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x27fae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x27faec: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x27FAECu;
    {
        const bool branch_taken_0x27faec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FAECu;
            // 0x27faf0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27faec) {
            ctx->pc = 0x27FB58u;
            goto label_27fb58;
        }
    }
    ctx->pc = 0x27FAF4u;
    // 0x27faf4: 0x26020200  addiu       $v0, $s0, 0x200
    ctx->pc = 0x27faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x27faf8: 0x24a30200  addiu       $v1, $a1, 0x200
    ctx->pc = 0x27faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
label_27fafc:
    // 0x27fafc: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x27fafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x27fb00: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x27fb00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x27fb04: 0x68a7000f  ldl         $a3, 0xF($a1)
    ctx->pc = 0x27fb04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x27fb08: 0x6ca70008  ldr         $a3, 0x8($a1)
    ctx->pc = 0x27fb08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x27fb0c: 0x68a80017  ldl         $t0, 0x17($a1)
    ctx->pc = 0x27fb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27fb10: 0x6ca80010  ldr         $t0, 0x10($a1)
    ctx->pc = 0x27fb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x27fb14: 0x68a9001f  ldl         $t1, 0x1F($a1)
    ctx->pc = 0x27fb14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x27fb18: 0x6ca90018  ldr         $t1, 0x18($a1)
    ctx->pc = 0x27fb18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x27fb1c: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x27fb1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27fb20: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x27fb20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27fb24: 0xb0c7000f  sdl         $a3, 0xF($a2)
    ctx->pc = 0x27fb24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27fb28: 0xb4c70008  sdr         $a3, 0x8($a2)
    ctx->pc = 0x27fb28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27fb2c: 0xb0c80017  sdl         $t0, 0x17($a2)
    ctx->pc = 0x27fb2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27fb30: 0xb4c80010  sdr         $t0, 0x10($a2)
    ctx->pc = 0x27fb30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27fb34: 0xb0c9001f  sdl         $t1, 0x1F($a2)
    ctx->pc = 0x27fb34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27fb38: 0xb4c90018  sdr         $t1, 0x18($a2)
    ctx->pc = 0x27fb38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27fb3c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x27fb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x27fb40: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x27fb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x27fb44: 0x0  nop
    ctx->pc = 0x27fb44u;
    // NOP
    // 0x27fb48: 0x14a3ffec  bne         $a1, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27FB48u;
    {
        const bool branch_taken_0x27fb48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x27fb48) {
            ctx->pc = 0x27FAFCu;
            runtime->cooperativeGuestYield();
            goto label_27fafc;
        }
    }
    ctx->pc = 0x27FB50u;
    // 0x27fb50: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x27FB50u;
    {
        const bool branch_taken_0x27fb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FB50u;
            // 0x27fb54: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb50) {
            ctx->pc = 0x27FB98u;
            goto label_27fb98;
        }
    }
    ctx->pc = 0x27FB58u;
label_27fb58:
    // 0x27fb58: 0x26020200  addiu       $v0, $s0, 0x200
    ctx->pc = 0x27fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x27fb5c: 0x24a30200  addiu       $v1, $a1, 0x200
    ctx->pc = 0x27fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
label_27fb60:
    // 0x27fb60: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x27fb60u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27fb64: 0xdca70008  ld          $a3, 0x8($a1)
    ctx->pc = 0x27fb64u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x27fb68: 0xdca80010  ld          $t0, 0x10($a1)
    ctx->pc = 0x27fb68u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x27fb6c: 0xdca90018  ld          $t1, 0x18($a1)
    ctx->pc = 0x27fb6cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x27fb70: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x27fb70u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x27fb74: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x27fb74u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x27fb78: 0xfcc80010  sd          $t0, 0x10($a2)
    ctx->pc = 0x27fb78u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 8));
    // 0x27fb7c: 0xfcc90018  sd          $t1, 0x18($a2)
    ctx->pc = 0x27fb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 9));
    // 0x27fb80: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x27fb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x27fb84: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x27fb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x27fb88: 0x0  nop
    ctx->pc = 0x27fb88u;
    // NOP
    // 0x27fb8c: 0x14a3fff4  bne         $a1, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x27FB8Cu;
    {
        const bool branch_taken_0x27fb8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x27fb8c) {
            ctx->pc = 0x27FB60u;
            runtime->cooperativeGuestYield();
            goto label_27fb60;
        }
    }
    ctx->pc = 0x27FB94u;
    // 0x27fb94: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x27fb94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_27fb98:
    // 0x27fb98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27fb98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb9c: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x27fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x27fba0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27fba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fba4: 0x2445db00  addiu       $a1, $v0, -0x2500
    ctx->pc = 0x27fba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957824));
    // 0x27fba8: 0xc0a0772  jal         func_281DC8
    ctx->pc = 0x27FBA8u;
    SET_GPR_U32(ctx, 31, 0x27FBB0u);
    ctx->pc = 0x27FBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FBA8u;
            // 0x27fbac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281DC8u;
    if (runtime->hasFunction(0x281DC8u)) {
        auto targetFn = runtime->lookupFunction(0x281DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FBB0u; }
        if (ctx->pc != 0x27FBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281DC8_0x281dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FBB0u; }
        if (ctx->pc != 0x27FBB0u) { return; }
    }
    ctx->pc = 0x27FBB0u;
    // 0x27fbb0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x27FBB0u;
    {
        const bool branch_taken_0x27fbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FBB0u;
            // 0x27fbb4: 0x8fa60210  lw          $a2, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fbb0) {
            ctx->pc = 0x27FC48u;
            goto label_27fc48;
        }
    }
    ctx->pc = 0x27FBB8u;
    // 0x27fbb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27fbbc: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27FBBCu;
    {
        const bool branch_taken_0x27fbbc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x27FBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FBBCu;
            // 0x27fbc0: 0x8fa70214  lw          $a3, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fbbc) {
            ctx->pc = 0x27FBD0u;
            goto label_27fbd0;
        }
    }
    ctx->pc = 0x27FBC4u;
    // 0x27fbc4: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27fbc8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x27FBC8u;
    {
        const bool branch_taken_0x27fbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FBC8u;
            // 0x27fbcc: 0x34429002  ori         $v0, $v0, 0x9002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fbc8) {
            ctx->pc = 0x27FC50u;
            goto label_27fc50;
        }
    }
    ctx->pc = 0x27FBD0u;
label_27fbd0:
    // 0x27fbd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27fbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fbd4: 0xc09f732  jal         func_27DCC8
    ctx->pc = 0x27FBD4u;
    SET_GPR_U32(ctx, 31, 0x27FBDCu);
    ctx->pc = 0x27FBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FBD4u;
            // 0x27fbd8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DCC8u;
    if (runtime->hasFunction(0x27DCC8u)) {
        auto targetFn = runtime->lookupFunction(0x27DCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FBDCu; }
        if (ctx->pc != 0x27FBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DCC8_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FBDCu; }
        if (ctx->pc != 0x27FBDCu) { return; }
    }
    ctx->pc = 0x27FBDCu;
    // 0x27fbdc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27FBDCu;
    {
        const bool branch_taken_0x27fbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fbdc) {
            ctx->pc = 0x27FBE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27FBDCu;
            // 0x27fbe0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27FBECu;
            goto label_27fbec;
        }
    }
    ctx->pc = 0x27FBE4u;
    // 0x27fbe4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x27FBE4u;
    {
        const bool branch_taken_0x27fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FBE4u;
            // 0x27fbe8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fbe4) {
            ctx->pc = 0x27FC4Cu;
            goto label_27fc4c;
        }
    }
    ctx->pc = 0x27FBECu;
label_27fbec:
    // 0x27fbec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27fbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fbf0: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x27fbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x27fbf4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27fbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fbf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27fbfc: 0x8fa70214  lw          $a3, 0x214($sp)
    ctx->pc = 0x27fbfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x27fc00: 0xc09fd24  jal         func_27F490
    ctx->pc = 0x27FC00u;
    SET_GPR_U32(ctx, 31, 0x27FC08u);
    ctx->pc = 0x27FC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC00u;
            // 0x27fc04: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F490u;
    if (runtime->hasFunction(0x27F490u)) {
        auto targetFn = runtime->lookupFunction(0x27F490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC08u; }
        if (ctx->pc != 0x27FC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F490_0x27f490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC08u; }
        if (ctx->pc != 0x27FC08u) { return; }
    }
    ctx->pc = 0x27FC08u;
    // 0x27fc08: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27FC08u;
    {
        const bool branch_taken_0x27fc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fc08) {
            ctx->pc = 0x27FC0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC08u;
            // 0x27fc0c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27FC18u;
            goto label_27fc18;
        }
    }
    ctx->pc = 0x27FC10u;
    // 0x27fc10: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27FC10u;
    {
        const bool branch_taken_0x27fc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC10u;
            // 0x27fc14: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc10) {
            ctx->pc = 0x27FC4Cu;
            goto label_27fc4c;
        }
    }
    ctx->pc = 0x27FC18u;
label_27fc18:
    // 0x27fc18: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27FC18u;
    {
        const bool branch_taken_0x27fc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC18u;
            // 0x27fc1c: 0x8fa20400  lw          $v0, 0x400($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc18) {
            ctx->pc = 0x27FC50u;
            goto label_27fc50;
        }
    }
    ctx->pc = 0x27FC20u;
label_27fc20:
    // 0x27fc20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27fc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27fc24: 0x1000fee8  b           . + 4 + (-0x118 << 2)
    ctx->pc = 0x27FC24u;
    {
        const bool branch_taken_0x27fc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC24u;
            // 0x27fc28: 0x2429024  and         $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc24) {
            ctx->pc = 0x27F7C8u;
            runtime->cooperativeGuestYield();
            goto label_27f7c8;
        }
    }
    ctx->pc = 0x27FC2Cu;
label_27fc2c:
    // 0x27fc2c: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x27fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x27fc30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27fc34: 0x34639002  ori         $v1, $v1, 0x9002
    ctx->pc = 0x27fc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36866);
    // 0x27fc38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27FC38u;
    {
        const bool branch_taken_0x27fc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC38u;
            // 0x27fc3c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc38) {
            ctx->pc = 0x27FC50u;
            goto label_27fc50;
        }
    }
    ctx->pc = 0x27FC40u;
label_27fc40:
    // 0x27fc40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27FC40u;
    {
        const bool branch_taken_0x27fc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC40u;
            // 0x27fc44: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc40) {
            ctx->pc = 0x27FC4Cu;
            goto label_27fc4c;
        }
    }
    ctx->pc = 0x27FC48u;
label_27fc48:
    // 0x27fc48: 0xae370000  sw          $s7, 0x0($s1)
    ctx->pc = 0x27fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
label_27fc4c:
    // 0x27fc4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27fc50:
    // 0x27fc50: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x27fc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x27fc54: 0xdfbe0490  ld          $fp, 0x490($sp)
    ctx->pc = 0x27fc54u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x27fc58: 0xdfb70480  ld          $s7, 0x480($sp)
    ctx->pc = 0x27fc58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x27fc5c: 0xdfb60470  ld          $s6, 0x470($sp)
    ctx->pc = 0x27fc5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x27fc60: 0xdfb50460  ld          $s5, 0x460($sp)
    ctx->pc = 0x27fc60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x27fc64: 0xdfb40450  ld          $s4, 0x450($sp)
    ctx->pc = 0x27fc64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x27fc68: 0xdfb30440  ld          $s3, 0x440($sp)
    ctx->pc = 0x27fc68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x27fc6c: 0xdfb20430  ld          $s2, 0x430($sp)
    ctx->pc = 0x27fc6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x27fc70: 0xdfb10420  ld          $s1, 0x420($sp)
    ctx->pc = 0x27fc70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x27fc74: 0xdfb00410  ld          $s0, 0x410($sp)
    ctx->pc = 0x27fc74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x27fc78: 0x3e00008  jr          $ra
    ctx->pc = 0x27FC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC78u;
            // 0x27fc7c: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F7C8u: goto label_27f7c8;
            case 0x27F7F8u: goto label_27f7f8;
            case 0x27F830u: goto label_27f830;
            case 0x27F88Cu: goto label_27f88c;
            case 0x27F890u: goto label_27f890;
            case 0x27F8C8u: goto label_27f8c8;
            case 0x27F8CCu: goto label_27f8cc;
            case 0x27F8E0u: goto label_27f8e0;
            case 0x27F8F4u: goto label_27f8f4;
            case 0x27F950u: goto label_27f950;
            case 0x27F954u: goto label_27f954;
            case 0x27F98Cu: goto label_27f98c;
            case 0x27FA00u: goto label_27fa00;
            case 0x27FA4Cu: goto label_27fa4c;
            case 0x27FA50u: goto label_27fa50;
            case 0x27FAFCu: goto label_27fafc;
            case 0x27FB58u: goto label_27fb58;
            case 0x27FB60u: goto label_27fb60;
            case 0x27FB98u: goto label_27fb98;
            case 0x27FBD0u: goto label_27fbd0;
            case 0x27FBECu: goto label_27fbec;
            case 0x27FC18u: goto label_27fc18;
            case 0x27FC20u: goto label_27fc20;
            case 0x27FC2Cu: goto label_27fc2c;
            case 0x27FC40u: goto label_27fc40;
            case 0x27FC48u: goto label_27fc48;
            case 0x27FC4Cu: goto label_27fc4c;
            case 0x27FC50u: goto label_27fc50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27FC80u;
}
