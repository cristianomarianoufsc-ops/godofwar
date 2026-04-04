#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00229710
// Address: 0x229710 - 0x229ab8
void sub_00229710_0x229710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229710_0x229710");
#endif

    ctx->pc = 0x229710u;

    // 0x229710: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x229710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x229714: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x229714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x229718: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x229718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x22971c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x22971cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x229720: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x229720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229724: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x229724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x229728: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x229728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x22972c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22972cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x229730: 0xc454c64c  lwc1        $f20, -0x39B4($v0)
    ctx->pc = 0x229730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x229734: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x229734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x229738: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x229738u;
    {
        const bool branch_taken_0x229738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229738) {
            ctx->pc = 0x22973Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229738u;
            // 0x22973c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x229750u;
            goto label_229750;
        }
    }
    ctx->pc = 0x229740u;
    // 0x229740: 0xc08aab8  jal         func_22AAE0
    ctx->pc = 0x229740u;
    SET_GPR_U32(ctx, 31, 0x229748u);
    ctx->pc = 0x22AAE0u;
    if (runtime->hasFunction(0x22AAE0u)) {
        auto targetFn = runtime->lookupFunction(0x22AAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229748u; }
        if (ctx->pc != 0x229748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022AAE0_0x22aae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229748u; }
        if (ctx->pc != 0x229748u) { return; }
    }
    ctx->pc = 0x229748u;
    // 0x229748: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x229748u;
    {
        const bool branch_taken_0x229748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22974Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229748u;
            // 0x22974c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229748) {
            ctx->pc = 0x2298C8u;
            goto label_2298c8;
        }
    }
    ctx->pc = 0x229750u;
label_229750:
    // 0x229750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229754: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x229754u;
    {
        const bool branch_taken_0x229754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x229754) {
            ctx->pc = 0x229758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229754u;
            // 0x229758: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x229778u;
            goto label_229778;
        }
    }
    ctx->pc = 0x22975Cu;
    // 0x22975c: 0xc05c3a6  jal         func_170E98
    ctx->pc = 0x22975Cu;
    SET_GPR_U32(ctx, 31, 0x229764u);
    ctx->pc = 0x229760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22975Cu;
            // 0x229760: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170E98u;
    if (runtime->hasFunction(0x170E98u)) {
        auto targetFn = runtime->lookupFunction(0x170E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229764u; }
        if (ctx->pc != 0x229764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_170e98_0x170ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229764u; }
        if (ctx->pc != 0x229764u) { return; }
    }
    ctx->pc = 0x229764u;
    // 0x229764: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x229764u;
    {
        const bool branch_taken_0x229764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229764) {
            ctx->pc = 0x229768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229764u;
            // 0x229768: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x229778u;
            goto label_229778;
        }
    }
    ctx->pc = 0x22976Cu;
    // 0x22976c: 0xc05c370  jal         func_170DC0
    ctx->pc = 0x22976Cu;
    SET_GPR_U32(ctx, 31, 0x229774u);
    ctx->pc = 0x229770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22976Cu;
            // 0x229770: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170DC0u;
    if (runtime->hasFunction(0x170DC0u)) {
        auto targetFn = runtime->lookupFunction(0x170DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229774u; }
        if (ctx->pc != 0x229774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170DC0_0x170dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229774u; }
        if (ctx->pc != 0x229774u) { return; }
    }
    ctx->pc = 0x229774u;
    // 0x229774: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x229774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_229778:
    // 0x229778: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x229778u;
    {
        const bool branch_taken_0x229778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229778) {
            ctx->pc = 0x22977Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229778u;
            // 0x22977c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2297E0u;
            goto label_2297e0;
        }
    }
    ctx->pc = 0x229780u;
    // 0x229780: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x229780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x229784: 0x804200ce  lb          $v0, 0xCE($v0)
    ctx->pc = 0x229784u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 206)));
    // 0x229788: 0x5c400015  bgtzl       $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x229788u;
    {
        const bool branch_taken_0x229788 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x229788) {
            ctx->pc = 0x22978Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229788u;
            // 0x22978c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2297E0u;
            goto label_2297e0;
        }
    }
    ctx->pc = 0x229790u;
    // 0x229790: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x229790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x229794: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x229794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x229798: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x229798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
    // 0x22979c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22979cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2297a0: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x2297A0u;
    SET_GPR_U32(ctx, 31, 0x2297A8u);
    ctx->pc = 0x2297A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2297A0u;
            // 0x2297a4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2297A8u; }
        if (ctx->pc != 0x2297A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2297A8u; }
        if (ctx->pc != 0x2297A8u) { return; }
    }
    ctx->pc = 0x2297A8u;
    // 0x2297a8: 0xa3a00017  sb          $zero, 0x17($sp)
    ctx->pc = 0x2297a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x2297ac: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2297acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2297b0: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2297b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2297b4: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x2297b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2297b8: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x2297b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2297bc: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x2297bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2297c0: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x2297c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2297c4: 0xb2020043  sdl         $v0, 0x43($s0)
    ctx->pc = 0x2297c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2297c8: 0xb602003c  sdr         $v0, 0x3C($s0)
    ctx->pc = 0x2297c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2297cc: 0xb203004b  sdl         $v1, 0x4B($s0)
    ctx->pc = 0x2297ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2297d0: 0xb6030044  sdr         $v1, 0x44($s0)
    ctx->pc = 0x2297d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2297d4: 0xb2040053  sdl         $a0, 0x53($s0)
    ctx->pc = 0x2297d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2297d8: 0xb604004c  sdr         $a0, 0x4C($s0)
    ctx->pc = 0x2297d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2297dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2297dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2297e0:
    // 0x2297e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2297e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2297e4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2297E4u;
    {
        const bool branch_taken_0x2297e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2297E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2297E4u;
            // 0x2297e8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2297e4) {
            ctx->pc = 0x229808u;
            goto label_229808;
        }
    }
    ctx->pc = 0x2297ECu;
    // 0x2297ec: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x2297ECu;
    {
        const bool branch_taken_0x2297ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2297ec) {
            ctx->pc = 0x2297F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2297ECu;
            // 0x2297f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2298C8u;
            goto label_2298c8;
        }
    }
    ctx->pc = 0x2297F4u;
    // 0x2297f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2297f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2297f8: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2297F8u;
    {
        const bool branch_taken_0x2297f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2297FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2297F8u;
            // 0x2297fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2297f8) {
            ctx->pc = 0x22982Cu;
            goto label_22982c;
        }
    }
    ctx->pc = 0x229800u;
    // 0x229800: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x229800u;
    {
        const bool branch_taken_0x229800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229800u;
            // 0x229804: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229800) {
            ctx->pc = 0x2298CCu;
            goto label_2298cc;
        }
    }
    ctx->pc = 0x229808u;
label_229808:
    // 0x229808: 0xc08a590  jal         func_229640
    ctx->pc = 0x229808u;
    SET_GPR_U32(ctx, 31, 0x229810u);
    ctx->pc = 0x229640u;
    if (runtime->hasFunction(0x229640u)) {
        auto targetFn = runtime->lookupFunction(0x229640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229810u; }
        if (ctx->pc != 0x229810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229640_0x229640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229810u; }
        if (ctx->pc != 0x229810u) { return; }
    }
    ctx->pc = 0x229810u;
    // 0x229810: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x229810u;
    {
        const bool branch_taken_0x229810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229810u;
            // 0x229814: 0xc6000024  lwc1        $f0, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x229810) {
            ctx->pc = 0x2298A4u;
            goto label_2298a4;
        }
    }
    ctx->pc = 0x229818u;
    // 0x229818: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x229818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22981c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22981cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229820: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x229820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229824: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x229824u;
    {
        const bool branch_taken_0x229824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229824) {
            ctx->pc = 0x2298B0u;
            goto label_2298b0;
        }
    }
    ctx->pc = 0x22982Cu;
label_22982c:
    // 0x22982c: 0xc08a590  jal         func_229640
    ctx->pc = 0x22982Cu;
    SET_GPR_U32(ctx, 31, 0x229834u);
    ctx->pc = 0x229640u;
    if (runtime->hasFunction(0x229640u)) {
        auto targetFn = runtime->lookupFunction(0x229640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229834u; }
        if (ctx->pc != 0x229834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229640_0x229640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229834u; }
        if (ctx->pc != 0x229834u) { return; }
    }
    ctx->pc = 0x229834u;
    // 0x229834: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x229834u;
    {
        const bool branch_taken_0x229834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229834u;
            // 0x229838: 0xc6000018  lwc1        $f0, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x229834) {
            ctx->pc = 0x229878u;
            goto label_229878;
        }
    }
    ctx->pc = 0x22983Cu;
    // 0x22983c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22983cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229840: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x229840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229844: 0x0  nop
    ctx->pc = 0x229844u;
    // NOP
    // 0x229848: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x229848u;
    {
        const bool branch_taken_0x229848 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229848) {
            ctx->pc = 0x22984Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229848u;
            // 0x22984c: 0xc6000024  lwc1        $f0, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x229864u;
            goto label_229864;
        }
    }
    ctx->pc = 0x229850u;
    // 0x229850: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x229850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x229854: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x229854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229858: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x229858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x22985c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x22985cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x229860: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x229860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229864:
    // 0x229864: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x229864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x229868: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x229868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22986c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22986cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229870: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x229870u;
    {
        const bool branch_taken_0x229870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229870) {
            ctx->pc = 0x2298B0u;
            goto label_2298b0;
        }
    }
    ctx->pc = 0x229878u;
label_229878:
    // 0x229878: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x229878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22987c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22987cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229880: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x229880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229884: 0x0  nop
    ctx->pc = 0x229884u;
    // NOP
    // 0x229888: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x229888u;
    {
        const bool branch_taken_0x229888 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229888) {
            ctx->pc = 0x22988Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229888u;
            // 0x22988c: 0xc6000024  lwc1        $f0, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2298A4u;
            goto label_2298a4;
        }
    }
    ctx->pc = 0x229890u;
    // 0x229890: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x229890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x229894: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x229894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229898: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x229898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x22989c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x22989cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2298a0: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2298a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2298a4:
    // 0x2298a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2298a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2298a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2298a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2298ac: 0x0  nop
    ctx->pc = 0x2298acu;
    // NOP
label_2298b0:
    // 0x2298b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2298B0u;
    {
        const bool branch_taken_0x2298b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2298B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2298B0u;
            // 0x2298b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298b0) {
            ctx->pc = 0x2298C8u;
            goto label_2298c8;
        }
    }
    ctx->pc = 0x2298B8u;
    // 0x2298b8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2298b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2298bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2298bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2298c0: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x2298c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2298c4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x2298c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_2298c8:
    // 0x2298c8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2298c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2298cc:
    // 0x2298cc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2298ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2298d0: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2298d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2298d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2298d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2298d8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2298d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2298dc: 0x46141836  c.le.s      $f3, $f20
    ctx->pc = 0x2298dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2298e0: 0x0  nop
    ctx->pc = 0x2298e0u;
    // NOP
    // 0x2298e4: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2298E4u;
    {
        const bool branch_taken_0x2298e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2298e4) {
            ctx->pc = 0x2298E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2298E4u;
            // 0x2298e8: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2298FCu;
            goto label_2298fc;
        }
    }
    ctx->pc = 0x2298ECu;
    // 0x2298ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2298ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2298f0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2298f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2298f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2298F4u;
    {
        const bool branch_taken_0x2298f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2298F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2298F4u;
            // 0x2298f8: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298f4) {
            ctx->pc = 0x22991Cu;
            goto label_22991c;
        }
    }
    ctx->pc = 0x2298FCu;
label_2298fc:
    // 0x2298fc: 0x4603a083  div.s       $f2, $f20, $f3
    ctx->pc = 0x2298fcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[2] = ctx->f[20] / ctx->f[3];
    // 0x229900: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x229900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229904: 0x461418c1  sub.s       $f3, $f3, $f20
    ctx->pc = 0x229904u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
    // 0x229908: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x229908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22990c: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x22990cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x229910: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x229910u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x229914: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x229914u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x229918: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x229918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_22991c:
    // 0x22991c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22991cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x229920: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x229920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x229924: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x229924u;
    {
        const bool branch_taken_0x229924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229924u;
            // 0x229928: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229924) {
            ctx->pc = 0x2298CCu;
            runtime->cooperativeGuestYield();
            goto label_2298cc;
        }
    }
    ctx->pc = 0x22992Cu;
    // 0x22992c: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x22992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x229930: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x229930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229934: 0xc6020038  lwc1        $f2, 0x38($s0)
    ctx->pc = 0x229934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229938: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x229938u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x22993c: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x22993cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x229940: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x229940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229944: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x229944u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x229948: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x229948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22994c: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22994cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x229950: 0x44122000  mfc1        $s2, $f4
    ctx->pc = 0x229950u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x229954: 0x0  nop
    ctx->pc = 0x229954u;
    // NOP
    // 0x229958: 0x56400007  bnel        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x229958u;
    {
        const bool branch_taken_0x229958 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x229958) {
            ctx->pc = 0x22995Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229958u;
            // 0x22995c: 0xc600002c  lwc1        $f0, 0x2C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x229978u;
            goto label_229978;
        }
    }
    ctx->pc = 0x229960u;
    // 0x229960: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229964: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x229964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229968: 0x0  nop
    ctx->pc = 0x229968u;
    // NOP
    // 0x22996c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x22996Cu;
    {
        const bool branch_taken_0x22996c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22996c) {
            ctx->pc = 0x229970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22996Cu;
            // 0x229970: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x229974u;
            goto label_229974;
        }
    }
    ctx->pc = 0x229974u;
label_229974:
    // 0x229974: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x229974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229978:
    // 0x229978: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x229978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x22997c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22997cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229980: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x229980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x229984: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x229984u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x229988: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x229988u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x22998c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22998cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x229990: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x229990u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x229994: 0x0  nop
    ctx->pc = 0x229994u;
    // NOP
    // 0x229998: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x229998u;
    {
        const bool branch_taken_0x229998 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x229998) {
            ctx->pc = 0x22999Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229998u;
            // 0x22999c: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2299B8u;
            goto label_2299b8;
        }
    }
    ctx->pc = 0x2299A0u;
    // 0x2299a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2299a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2299a4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2299a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2299a8: 0x0  nop
    ctx->pc = 0x2299a8u;
    // NOP
    // 0x2299ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2299ACu;
    {
        const bool branch_taken_0x2299ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2299ac) {
            ctx->pc = 0x2299B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2299ACu;
            // 0x2299b0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2299B4u;
            goto label_2299b4;
        }
    }
    ctx->pc = 0x2299B4u;
label_2299b4:
    // 0x2299b4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2299b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2299b8:
    // 0x2299b8: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x2299B8u;
    {
        const bool branch_taken_0x2299b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2299b8) {
            ctx->pc = 0x2299BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2299B8u;
            // 0x2299bc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x229A80u;
            goto label_229a80;
        }
    }
    ctx->pc = 0x2299C0u;
    // 0x2299c0: 0x5640002f  bnel        $s2, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x2299C0u;
    {
        const bool branch_taken_0x2299c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2299c0) {
            ctx->pc = 0x2299C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2299C0u;
            // 0x2299c4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x229A80u;
            goto label_229a80;
        }
    }
    ctx->pc = 0x2299C8u;
    // 0x2299c8: 0x5620002d  bnel        $s1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x2299C8u;
    {
        const bool branch_taken_0x2299c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2299c8) {
            ctx->pc = 0x2299CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2299C8u;
            // 0x2299cc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x229A80u;
            goto label_229a80;
        }
    }
    ctx->pc = 0x2299D0u;
    // 0x2299d0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2299d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2299d4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2299d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2299d8: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2299D8u;
    {
        const bool branch_taken_0x2299d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2299DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2299D8u;
            // 0x2299dc: 0x28620007  slti        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2299d8) {
            ctx->pc = 0x229A68u;
            goto label_229a68;
        }
    }
    ctx->pc = 0x2299E0u;
    // 0x2299e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2299E0u;
    {
        const bool branch_taken_0x2299e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2299E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2299E0u;
            // 0x2299e4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2299e0) {
            ctx->pc = 0x2299F8u;
            goto label_2299f8;
        }
    }
    ctx->pc = 0x2299E8u;
    // 0x2299e8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2299E8u;
    {
        const bool branch_taken_0x2299e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2299e8) {
            ctx->pc = 0x229A0Cu;
            goto label_229a0c;
        }
    }
    ctx->pc = 0x2299F0u;
    // 0x2299f0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2299F0u;
    {
        const bool branch_taken_0x2299f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2299F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2299F0u;
            // 0x2299f4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2299f0) {
            ctx->pc = 0x229A80u;
            goto label_229a80;
        }
    }
    ctx->pc = 0x2299F8u;
label_2299f8:
    // 0x2299f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2299f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2299fc: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2299FCu;
    {
        const bool branch_taken_0x2299fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x229A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2299FCu;
            // 0x229a00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2299fc) {
            ctx->pc = 0x229A78u;
            goto label_229a78;
        }
    }
    ctx->pc = 0x229A04u;
    // 0x229a04: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x229A04u;
    {
        const bool branch_taken_0x229a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229A04u;
            // 0x229a08: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a04) {
            ctx->pc = 0x229A80u;
            goto label_229a80;
        }
    }
    ctx->pc = 0x229A0Cu;
label_229a0c:
    // 0x229a0c: 0xc05c2e6  jal         func_170B98
    ctx->pc = 0x229A0Cu;
    SET_GPR_U32(ctx, 31, 0x229A14u);
    ctx->pc = 0x229A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229A0Cu;
            // 0x229a10: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B98u;
    if (runtime->hasFunction(0x170B98u)) {
        auto targetFn = runtime->lookupFunction(0x170B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A14u; }
        if (ctx->pc != 0x229A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B98_0x170b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A14u; }
        if (ctx->pc != 0x229A14u) { return; }
    }
    ctx->pc = 0x229A14u;
    // 0x229a14: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x229a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x229a18: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x229a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x229a1c: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x229a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
    // 0x229a20: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x229A20u;
    SET_GPR_U32(ctx, 31, 0x229A28u);
    ctx->pc = 0x229A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229A20u;
            // 0x229a24: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A28u; }
        if (ctx->pc != 0x229A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A28u; }
        if (ctx->pc != 0x229A28u) { return; }
    }
    ctx->pc = 0x229A28u;
    // 0x229a28: 0xa3a00037  sb          $zero, 0x37($sp)
    ctx->pc = 0x229a28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x229a2c: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x229a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x229a30: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x229a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x229a34: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x229a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x229a38: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x229a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x229a3c: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x229a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x229a40: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x229a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x229a44: 0xb2020043  sdl         $v0, 0x43($s0)
    ctx->pc = 0x229a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229a48: 0xb602003c  sdr         $v0, 0x3C($s0)
    ctx->pc = 0x229a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229a4c: 0xb203004b  sdl         $v1, 0x4B($s0)
    ctx->pc = 0x229a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229a50: 0xb6030044  sdr         $v1, 0x44($s0)
    ctx->pc = 0x229a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229a54: 0xb2040053  sdl         $a0, 0x53($s0)
    ctx->pc = 0x229a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229a58: 0xb604004c  sdr         $a0, 0x4C($s0)
    ctx->pc = 0x229a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229a5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x229A5Cu;
    {
        const bool branch_taken_0x229a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229A5Cu;
            // 0x229a60: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a5c) {
            ctx->pc = 0x229A80u;
            goto label_229a80;
        }
    }
    ctx->pc = 0x229A64u;
    // 0x229a64: 0x0  nop
    ctx->pc = 0x229a64u;
    // NOP
label_229a68:
    // 0x229a68: 0xc05c370  jal         func_170DC0
    ctx->pc = 0x229A68u;
    SET_GPR_U32(ctx, 31, 0x229A70u);
    ctx->pc = 0x229A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229A68u;
            // 0x229a6c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170DC0u;
    if (runtime->hasFunction(0x170DC0u)) {
        auto targetFn = runtime->lookupFunction(0x170DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A70u; }
        if (ctx->pc != 0x229A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170DC0_0x170dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A70u; }
        if (ctx->pc != 0x229A70u) { return; }
    }
    ctx->pc = 0x229A70u;
    // 0x229a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229a74: 0x0  nop
    ctx->pc = 0x229a74u;
    // NOP
label_229a78:
    // 0x229a78: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x229a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x229a7c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x229a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_229a80:
    // 0x229a80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x229a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a84: 0xc05c490  jal         func_171240
    ctx->pc = 0x229A84u;
    SET_GPR_U32(ctx, 31, 0x229A8Cu);
    ctx->pc = 0x229A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229A84u;
            // 0x229a88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171240u;
    if (runtime->hasFunction(0x171240u)) {
        auto targetFn = runtime->lookupFunction(0x171240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A8Cu; }
        if (ctx->pc != 0x229A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_171240_0x171270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A8Cu; }
        if (ctx->pc != 0x229A8Cu) { return; }
    }
    ctx->pc = 0x229A8Cu;
    // 0x229a8c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x229a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x229a90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x229a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a94: 0xc05c490  jal         func_171240
    ctx->pc = 0x229A94u;
    SET_GPR_U32(ctx, 31, 0x229A9Cu);
    ctx->pc = 0x229A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229A94u;
            // 0x229a98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171240u;
    if (runtime->hasFunction(0x171240u)) {
        auto targetFn = runtime->lookupFunction(0x171240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A9Cu; }
        if (ctx->pc != 0x229A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_171240_0x171270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A9Cu; }
        if (ctx->pc != 0x229A9Cu) { return; }
    }
    ctx->pc = 0x229A9Cu;
    // 0x229a9c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x229a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x229aa0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x229aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229aa4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x229aa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229aa8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x229aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229aac: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x229aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x229ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x229AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229AB0u;
            // 0x229ab4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229750u: goto label_229750;
            case 0x229778u: goto label_229778;
            case 0x2297E0u: goto label_2297e0;
            case 0x229808u: goto label_229808;
            case 0x22982Cu: goto label_22982c;
            case 0x229864u: goto label_229864;
            case 0x229878u: goto label_229878;
            case 0x2298A4u: goto label_2298a4;
            case 0x2298B0u: goto label_2298b0;
            case 0x2298C8u: goto label_2298c8;
            case 0x2298CCu: goto label_2298cc;
            case 0x2298FCu: goto label_2298fc;
            case 0x22991Cu: goto label_22991c;
            case 0x229974u: goto label_229974;
            case 0x229978u: goto label_229978;
            case 0x2299B4u: goto label_2299b4;
            case 0x2299B8u: goto label_2299b8;
            case 0x2299F8u: goto label_2299f8;
            case 0x229A0Cu: goto label_229a0c;
            case 0x229A68u: goto label_229a68;
            case 0x229A78u: goto label_229a78;
            case 0x229A80u: goto label_229a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x229AB8u;
}
