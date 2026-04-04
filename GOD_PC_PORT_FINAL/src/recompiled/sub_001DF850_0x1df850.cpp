#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DF850
// Address: 0x1df850 - 0x1dfa00
void sub_001DF850_0x1df850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF850_0x1df850");
#endif

    ctx->pc = 0x1df850u;

    // 0x1df850: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1df850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1df854: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1df854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1df858: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1df858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1df85c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df860: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1df860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1df864: 0x70058ca9  por         $s1, $zero, $a1
    ctx->pc = 0x1df864u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x1df868: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x1DF868u;
    SET_GPR_U32(ctx, 31, 0x1DF870u);
    ctx->pc = 0x1DF86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF868u;
            // 0x1df86c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF870u; }
        if (ctx->pc != 0x1DF870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1df800_0x1df850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF870u; }
        if (ctx->pc != 0x1DF870u) { return; }
    }
    ctx->pc = 0x1DF870u;
    // 0x1df870: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1df870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df874: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1df874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df878: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1df878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1df87c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1df87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1df880: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1df880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1df884: 0x0  nop
    ctx->pc = 0x1df884u;
    // NOP
label_1df888:
    // 0x1df888: 0x0  nop
    ctx->pc = 0x1df888u;
    // NOP
    // 0x1df88c: 0x0  nop
    ctx->pc = 0x1df88cu;
    // NOP
    // 0x1df890: 0x0  nop
    ctx->pc = 0x1df890u;
    // NOP
    // 0x1df894: 0x0  nop
    ctx->pc = 0x1df894u;
    // NOP
    // 0x1df898: 0x0  nop
    ctx->pc = 0x1df898u;
    // NOP
    // 0x1df89c: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DF89Cu;
    {
        const bool branch_taken_0x1df89c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1df89c) {
            ctx->pc = 0x1DF8A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF89Cu;
            // 0x1df8a0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF888u;
            runtime->cooperativeGuestYield();
            goto label_1df888;
        }
    }
    ctx->pc = 0x1DF8A4u;
    // 0x1df8a4: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x1df8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1df8a8: 0xac850080  sw          $a1, 0x80($a0)
    ctx->pc = 0x1df8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
    // 0x1df8ac: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DF8ACu;
    {
        const bool branch_taken_0x1df8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF8ACu;
            // 0x1df8b0: 0xac800084  sw          $zero, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8ac) {
            ctx->pc = 0x1DF8F0u;
            goto label_1df8f0;
        }
    }
    ctx->pc = 0x1DF8B4u;
    // 0x1df8b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1df8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1df8b8: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1DF8B8u;
    {
        const bool branch_taken_0x1df8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DF8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF8B8u;
            // 0x1df8bc: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8b8) {
            ctx->pc = 0x1DF8F4u;
            goto label_1df8f4;
        }
    }
    ctx->pc = 0x1DF8C0u;
    // 0x1df8c0: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1df8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x1df8c4: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x1df8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1df8c8: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x1df8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1df8cc: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x1df8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df8d0: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x1df8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df8d4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x1df8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1df8d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1df8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1df8dc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1df8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1df8e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1df8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1df8e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1df8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1df8e8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1df8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1df8ec: 0x0  nop
    ctx->pc = 0x1df8ecu;
    // NOP
label_1df8f0:
    // 0x1df8f0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1df8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1df8f4:
    // 0x1df8f4: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1df8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1df8f8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1df8f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1df8fc: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1DF8FCu;
    {
        const bool branch_taken_0x1df8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF8FCu;
            // 0x1df900: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8fc) {
            ctx->pc = 0x1DF9F0u;
            goto label_1df9f0;
        }
    }
    ctx->pc = 0x1DF904u;
    // 0x1df904: 0x0  nop
    ctx->pc = 0x1df904u;
    // NOP
label_1df908:
    // 0x1df908: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1df908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df90c: 0x70112ca9  por         $a1, $zero, $s1
    ctx->pc = 0x1df90cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x1df910: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1df910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1df914: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1df914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1df918: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1df918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1df91c: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x1DF91Cu;
    SET_GPR_U32(ctx, 31, 0x1DF924u);
    ctx->pc = 0x1DF920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF91Cu;
            // 0x1df920: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF924u; }
        if (ctx->pc != 0x1DF924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1df800_0x1df850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF924u; }
        if (ctx->pc != 0x1DF924u) { return; }
    }
    ctx->pc = 0x1DF924u;
    // 0x1df924: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1df924u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df928: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x1df928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df92c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1df92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1df930: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x1df930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1df934: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1df934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1df938: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1df938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1df93c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1df93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1df940: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DF940u;
    {
        const bool branch_taken_0x1df940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF940u;
            // 0x1df944: 0x8c4500b4  lw          $a1, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df940) {
            ctx->pc = 0x1DF998u;
            goto label_1df998;
        }
    }
    ctx->pc = 0x1DF948u;
    // 0x1df948: 0x50a00014  beql        $a1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DF948u;
    {
        const bool branch_taken_0x1df948 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df948) {
            ctx->pc = 0x1DF94Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF948u;
            // 0x1df94c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF99Cu;
            goto label_1df99c;
        }
    }
    ctx->pc = 0x1DF950u;
    // 0x1df950: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1df950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df954: 0x10450010  beq         $v0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DF954u;
    {
        const bool branch_taken_0x1df954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DF958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF954u;
            // 0x1df958: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df954) {
            ctx->pc = 0x1DF998u;
            goto label_1df998;
        }
    }
    ctx->pc = 0x1DF95Cu;
    // 0x1df95c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1df95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1df960: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x1df960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x1df964: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1df964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1df968: 0x6ba300a7  ldl         $v1, 0xA7($sp)
    ctx->pc = 0x1df968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1df96c: 0x6fa300a0  ldr         $v1, 0xA0($sp)
    ctx->pc = 0x1df96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1df970: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1df970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df974: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x1df974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df978: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1df978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df97c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1df97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1df980: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1df980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1df984: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1df984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1df988: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1df988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df98c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1DF98Cu;
    {
        const bool branch_taken_0x1df98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF98Cu;
            // 0x1df990: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df98c) {
            ctx->pc = 0x1DF9E0u;
            goto label_1df9e0;
        }
    }
    ctx->pc = 0x1DF994u;
    // 0x1df994: 0x0  nop
    ctx->pc = 0x1df994u;
    // NOP
label_1df998:
    // 0x1df998: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1df998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1df99c:
    // 0x1df99c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df9a0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DF9A0u;
    {
        const bool branch_taken_0x1df9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DF9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF9A0u;
            // 0x1df9a4: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9a0) {
            ctx->pc = 0x1DF9E0u;
            goto label_1df9e0;
        }
    }
    ctx->pc = 0x1DF9A8u;
label_1df9a8:
    // 0x1df9a8: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x1df9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x1df9ac: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1df9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1df9b0: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1df9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1df9b4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1df9b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1df9b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF9B8u;
    {
        const bool branch_taken_0x1df9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF9B8u;
            // 0x1df9bc: 0xad030080  sw          $v1, 0x80($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9b8) {
            ctx->pc = 0x1DF9E0u;
            goto label_1df9e0;
        }
    }
    ctx->pc = 0x1DF9C0u;
    // 0x1df9c0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1df9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1df9c4: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x1df9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1df9c8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1df9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1df9cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df9d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1df9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df9d4: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DF9D4u;
    {
        const bool branch_taken_0x1df9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DF9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF9D4u;
            // 0x1df9d8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9d4) {
            ctx->pc = 0x1DF9A8u;
            runtime->cooperativeGuestYield();
            goto label_1df9a8;
        }
    }
    ctx->pc = 0x1DF9DCu;
    // 0x1df9dc: 0x0  nop
    ctx->pc = 0x1df9dcu;
    // NOP
label_1df9e0:
    // 0x1df9e0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1df9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df9e4: 0x441ffc8  bgez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1DF9E4u;
    {
        const bool branch_taken_0x1df9e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DF9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF9E4u;
            // 0x1df9e8: 0xad000084  sw          $zero, 0x84($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9e4) {
            ctx->pc = 0x1DF908u;
            runtime->cooperativeGuestYield();
            goto label_1df908;
        }
    }
    ctx->pc = 0x1DF9ECu;
    // 0x1df9ec: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1df9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1df9f0:
    // 0x1df9f0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1df9f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1df9f4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1df9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1df9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF9F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF9F8u;
            // 0x1df9fc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF888u: goto label_1df888;
            case 0x1DF8F0u: goto label_1df8f0;
            case 0x1DF8F4u: goto label_1df8f4;
            case 0x1DF908u: goto label_1df908;
            case 0x1DF998u: goto label_1df998;
            case 0x1DF99Cu: goto label_1df99c;
            case 0x1DF9A8u: goto label_1df9a8;
            case 0x1DF9E0u: goto label_1df9e0;
            case 0x1DF9F0u: goto label_1df9f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DFA00u;
}
